#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0153[4091] = {
    1, 0, 0, 2, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13,
    0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 0,
    0, 20, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 30,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 0,
    0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0,
    0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0,
    0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 96, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 101, 0, 0, 102, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    114, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128,
    0, 0, 0, 129, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 142, 0, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153,
    0, 0, 154, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0,
    0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 170, 0, 171, 0, 0, 0,
    0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 189, 0, 0,
    0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0,
    0, 201, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0,
    0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 226, 0,
    0, 0, 227, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 238, 0, 0, 239, 0, 0, 0, 0, 240,
    0, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 247,
    0, 0, 0, 248, 0, 0, 0, 249, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0,
    256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0,
    0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269,
    0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0,
    0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 282,
    0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0,
    0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0,
    0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0,
    0, 0, 0, 318, 0, 0, 0, 319, 0, 320, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0,
    0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328,
    0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0,
    333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 336, 0, 337, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0,
    0, 341, 0, 342, 0, 0, 0, 343, 0, 0, 0, 344, 0, 345, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349,
    0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0,
    0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0,
    360, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 366, 0, 367, 0, 0,
    0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 372, 0, 0, 0, 373, 0, 0, 0, 374, 0, 375, 0, 0,
    376, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 382,
    0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 387, 0, 0,
    0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0,
    393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0,
    0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405,
    0, 0, 0, 406, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411,
    0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0,
    417, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0,
    0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0,
    427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0,
    0, 438, 0, 0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    443, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0,
    451, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456,
    0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0, 0,
    462, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0,
    0, 0, 0, 469, 0, 0, 0, 470, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 476,
    0, 477, 0, 478, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    488, 0, 0, 0, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 502,
    0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 0, 507, 0, 0, 0, 0, 508, 0, 0,
    0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0,
    0, 0, 0, 517, 0, 0, 0, 518, 0, 519, 0, 520, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 525,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 527, 0, 528, 0, 529, 0, 530, 0, 531, 0, 0, 0, 0, 0, 0, 0,
    0, 532, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 537, 0, 0, 0, 0,
    538, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 545,
    0, 546, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0,
    550, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 555, 0, 0, 0, 0, 0, 556,
    0, 0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 561, 0, 562, 0, 0, 0,
    0, 563, 0, 0, 0, 564, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0,
    568, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0,
    0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0, 0,
    0, 0, 0, 579, 0, 0, 0, 0, 580, 0, 0, 0, 581, 0, 582, 0, 0, 0, 583, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 586, 0, 587,
    0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 590, 0, 591, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0,
    0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 597, 0, 598, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0,
    0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 0, 605,
    0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 608, 0, 609, 0, 610, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 613, 614, 0, 0,
    0, 0, 615, 0, 616, 0, 0, 617, 0, 618, 0, 0, 0, 0, 0, 0, 619, 0, 620, 621, 622, 0, 623, 0, 624, 0, 0, 0, 625, 0, 0, 0,
    0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 627, 628, 0, 629, 0, 630, 0, 631, 0, 632, 0, 633, 0, 634, 0, 635, 0, 0, 0, 0, 636,
    0, 0, 0, 0, 637, 0, 638, 0, 0, 639, 0, 640, 0, 0, 0, 0, 0, 0, 641, 642, 0, 0, 643, 0, 644, 0, 645, 0, 646, 0, 647, 0,
    0, 0, 0, 648, 649, 0, 0, 0, 0, 650, 0, 651, 0, 0, 652, 0, 653, 0, 0, 0, 0, 0, 0, 654, 0, 655, 0, 656, 657, 0, 658, 0,
    659, 0, 0, 0, 0, 660, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 663, 0, 664, 0, 0, 0, 665, 0, 0, 666, 0,
    667, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0, 0, 670, 0, 0, 0, 671, 0, 672, 0, 673, 0, 0, 0, 0, 0, 674, 0, 0, 675, 0, 0,
    676, 0, 677, 0, 678, 0, 0, 679, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 681, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0,
    0, 0, 0, 0, 0, 0, 0, 684, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687,
    0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 691, 0, 0, 0, 692, 0,
    0, 0, 0, 0, 0, 693, 0, 694, 0, 0, 0, 0, 0, 0, 0, 695, 0, 696, 0, 0, 0, 0, 0, 697, 698, 0, 0, 0, 0, 699, 0, 0,
    0, 700, 0, 0, 701, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 703, 0, 0, 0, 704, 0, 0, 705, 0, 0, 706, 0, 0, 707, 0, 0, 0,
    708, 709, 710, 0, 711, 0, 0, 0, 712, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 715, 0, 716, 0, 0, 0,
    0, 717, 0, 0, 0, 0, 0, 718, 719, 0, 0, 720, 0, 0, 0, 0, 721, 0, 0, 0, 722, 0, 723, 0, 0, 0, 0, 724, 0, 0, 725, 0,
    0, 726, 0, 727, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730,
    0, 0, 731, 0, 0, 0, 0, 732, 0, 733, 0, 734, 0, 0, 735, 0, 0, 0, 0, 736, 0, 0, 737, 0, 738, 0, 739, 0, 740, 741, 0, 0,
    0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 745, 0, 746, 0, 747,
};
void recomp_unit_0153_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A68000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0153[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A68000;
    case 2u: goto L_08A6800C;
    case 3u: goto L_08A6801C;
    case 4u: goto L_08A68024;
    case 5u: goto L_08A6803C;
    case 6u: goto L_08A68054;
    case 7u: goto L_08A68064;
    case 8u: goto L_08A68084;
    case 9u: goto L_08A68094;
    case 10u: goto L_08A680A8;
    case 11u: goto L_08A680BC;
    case 12u: goto L_08A680D0;
    case 13u: goto L_08A680FC;
    case 14u: goto L_08A68114;
    case 15u: goto L_08A68128;
    case 16u: goto L_08A68140;
    case 17u: goto L_08A68158;
    case 18u: goto L_08A68168;
    case 19u: goto L_08A68174;
    case 20u: goto L_08A68184;
    case 21u: goto L_08A68190;
    case 22u: goto L_08A68198;
    case 23u: goto L_08A681C4;
    case 24u: goto L_08A681E0;
    case 25u: goto L_08A6820C;
    case 26u: goto L_08A68228;
    case 27u: goto L_08A6823C;
    case 28u: goto L_08A6825C;
    case 29u: goto L_08A68268;
    case 30u: goto L_08A6827C;
    case 31u: goto L_08A68290;
    case 32u: goto L_08A682B4;
    case 33u: goto L_08A682CC;
    case 34u: goto L_08A682F4;
    case 35u: goto L_08A68300;
    case 36u: goto L_08A68320;
    case 37u: goto L_08A68334;
    case 38u: goto L_08A68344;
    case 39u: goto L_08A68354;
    case 40u: goto L_08A68368;
    case 41u: goto L_08A68380;
    case 42u: goto L_08A68390;
    case 43u: goto L_08A68398;
    case 44u: goto L_08A683AC;
    case 45u: goto L_08A683C0;
    case 46u: goto L_08A683D0;
    case 47u: goto L_08A683E0;
    case 48u: goto L_08A6843C;
    case 49u: goto L_08A68490;
    case 50u: goto L_08A684AC;
    case 51u: goto L_08A684B8;
    case 52u: goto L_08A684DC;
    case 53u: goto L_08A684F0;
    case 54u: goto L_08A6851C;
    case 55u: goto L_08A68528;
    case 56u: goto L_08A68538;
    case 57u: goto L_08A68560;
    case 58u: goto L_08A68568;
    case 59u: goto L_08A68574;
    case 60u: goto L_08A68598;
    case 61u: goto L_08A685AC;
    case 62u: goto L_08A685C4;
    case 63u: goto L_08A685CC;
    case 64u: goto L_08A685E4;
    case 65u: goto L_08A685F8;
    case 66u: goto L_08A68614;
    case 67u: goto L_08A68620;
    case 68u: goto L_08A68628;
    case 69u: goto L_08A68638;
    case 70u: goto L_08A68690;
    case 71u: goto L_08A686B4;
    case 72u: goto L_08A686E0;
    case 73u: goto L_08A686EC;
    case 74u: goto L_08A6871C;
    case 75u: goto L_08A68730;
    case 76u: goto L_08A6873C;
    case 77u: goto L_08A6874C;
    case 78u: goto L_08A68770;
    case 79u: goto L_08A68780;
    case 80u: goto L_08A6879C;
    case 81u: goto L_08A687B8;
    case 82u: goto L_08A687C8;
    case 83u: goto L_08A687EC;
    case 84u: goto L_08A6880C;
    case 85u: goto L_08A6882C;
    case 86u: goto L_08A6883C;
    case 87u: goto L_08A68848;
    case 88u: goto L_08A6885C;
    case 89u: goto L_08A68870;
    case 90u: goto L_08A68888;
    case 91u: goto L_08A6889C;
    case 92u: goto L_08A688B4;
    case 93u: goto L_08A688C0;
    case 94u: goto L_08A68924;
    case 95u: goto L_08A68964;
    case 96u: goto L_08A68984;
    case 97u: goto L_08A68990;
    case 98u: goto L_08A689A4;
    case 99u: goto L_08A689C0;
    case 100u: goto L_08A689E4;
    case 101u: goto L_08A689E8;
    case 102u: goto L_08A689F4;
    case 103u: goto L_08A68A28;
    case 104u: goto L_08A68A30;
    case 105u: goto L_08A68A5C;
    case 106u: goto L_08A68A78;
    case 107u: goto L_08A68AAC;
    case 108u: goto L_08A68AC0;
    case 109u: goto L_08A68AE4;
    case 110u: goto L_08A68AF4;
    case 111u: goto L_08A68B10;
    case 112u: goto L_08A68B3C;
    case 113u: goto L_08A68B70;
    case 114u: goto L_08A68B80;
    case 115u: goto L_08A68B94;
    case 116u: goto L_08A68BA4;
    case 117u: goto L_08A68BB8;
    case 118u: goto L_08A68BC8;
    case 119u: goto L_08A68BDC;
    case 120u: goto L_08A68C00;
    case 121u: goto L_08A68C2C;
    case 122u: goto L_08A68C34;
    case 123u: goto L_08A68C58;
    case 124u: goto L_08A68C84;
    case 125u: goto L_08A68CAC;
    case 126u: goto L_08A68D14;
    case 127u: goto L_08A68D20;
    case 128u: goto L_08A68D7C;
    case 129u: goto L_08A68D8C;
    case 130u: goto L_08A68D94;
    case 131u: goto L_08A68DA4;
    case 132u: goto L_08A68DCC;
    case 133u: goto L_08A68DE0;
    case 134u: goto L_08A68E04;
    case 135u: goto L_08A68E10;
    case 136u: goto L_08A68E44;
    case 137u: goto L_08A68E58;
    case 138u: goto L_08A68E64;
    case 139u: goto L_08A68E98;
    case 140u: goto L_08A68EB4;
    case 141u: goto L_08A68ECC;
    case 142u: goto L_08A68F04;
    case 143u: goto L_08A68F14;
    case 144u: goto L_08A68F1C;
    case 145u: goto L_08A68F2C;
    case 146u: goto L_08A68F34;
    case 147u: goto L_08A68F54;
    case 148u: goto L_08A68F80;
    case 149u: goto L_08A68FA8;
    case 150u: goto L_08A68FB4;
    case 151u: goto L_08A68FD0;
    case 152u: goto L_08A68FE8;
    case 153u: goto L_08A68FFC;
    case 154u: goto L_08A69008;
    case 155u: goto L_08A69018;
    case 156u: goto L_08A69020;
    case 157u: goto L_08A69034;
    case 158u: goto L_08A69048;
    case 159u: goto L_08A6905C;
    case 160u: goto L_08A69084;
    case 161u: goto L_08A6909C;
    case 162u: goto L_08A690C0;
    case 163u: goto L_08A690D0;
    case 164u: goto L_08A690F8;
    case 165u: goto L_08A69104;
    case 166u: goto L_08A69120;
    case 167u: goto L_08A69138;
    case 168u: goto L_08A6914C;
    case 169u: goto L_08A69158;
    case 170u: goto L_08A69168;
    case 171u: goto L_08A69170;
    case 172u: goto L_08A69184;
    case 173u: goto L_08A69198;
    case 174u: goto L_08A691A8;
    case 175u: goto L_08A691BC;
    case 176u: goto L_08A691D4;
    case 177u: goto L_08A691E4;
    case 178u: goto L_08A691F4;
    case 179u: goto L_08A69208;
    case 180u: goto L_08A69220;
    case 181u: goto L_08A69248;
    case 182u: goto L_08A6925C;
    case 183u: goto L_08A69284;
    case 184u: goto L_08A69290;
    case 185u: goto L_08A692AC;
    case 186u: goto L_08A692C4;
    case 187u: goto L_08A692D8;
    case 188u: goto L_08A692E4;
    case 189u: goto L_08A692F4;
    case 190u: goto L_08A69304;
    case 191u: goto L_08A69330;
    case 192u: goto L_08A69358;
    case 193u: goto L_08A69364;
    case 194u: goto L_08A69380;
    case 195u: goto L_08A69398;
    case 196u: goto L_08A693AC;
    case 197u: goto L_08A693B8;
    case 198u: goto L_08A693C8;
    case 199u: goto L_08A693D0;
    case 200u: goto L_08A693EC;
    case 201u: goto L_08A69404;
    case 202u: goto L_08A6940C;
    case 203u: goto L_08A69418;
    case 204u: goto L_08A69434;
    case 205u: goto L_08A6944C;
    case 206u: goto L_08A69464;
    case 207u: goto L_08A6946C;
    case 208u: goto L_08A69484;
    case 209u: goto L_08A694A4;
    case 210u: goto L_08A694B4;
    case 211u: goto L_08A69504;
    case 212u: goto L_08A69538;
    case 213u: goto L_08A69568;
    case 214u: goto L_08A695AC;
    case 215u: goto L_08A695B8;
    case 216u: goto L_08A695E0;
    case 217u: goto L_08A69600;
    case 218u: goto L_08A6960C;
    case 219u: goto L_08A6962C;
    case 220u: goto L_08A6965C;
    case 221u: goto L_08A69680;
    case 222u: goto L_08A69698;
    case 223u: goto L_08A696C4;
    case 224u: goto L_08A696E0;
    case 225u: goto L_08A696F0;
    case 226u: goto L_08A696F8;
    case 227u: goto L_08A69708;
    case 228u: goto L_08A69710;
    case 229u: goto L_08A69724;
    case 230u: goto L_08A69760;
    case 231u: goto L_08A69790;
    case 232u: goto L_08A697B4;
    case 233u: goto L_08A697F4;
    case 234u: goto L_08A69808;
    case 235u: goto L_08A6982C;
    case 236u: goto L_08A69840;
    case 237u: goto L_08A69854;
    case 238u: goto L_08A6985C;
    case 239u: goto L_08A69868;
    case 240u: goto L_08A6987C;
    case 241u: goto L_08A69888;
    case 242u: goto L_08A69898;
    case 243u: goto L_08A698A4;
    case 244u: goto L_08A698D4;
    case 245u: goto L_08A698E4;
    case 246u: goto L_08A698F4;
    case 247u: goto L_08A698FC;
    case 248u: goto L_08A6990C;
    case 249u: goto L_08A6991C;
    case 250u: goto L_08A69924;
    case 251u: goto L_08A69934;
    case 252u: goto L_08A69944;
    case 253u: goto L_08A69954;
    case 254u: goto L_08A69964;
    case 255u: goto L_08A6996C;
    case 256u: goto L_08A69980;
    case 257u: goto L_08A69990;
    case 258u: goto L_08A699B0;
    case 259u: goto L_08A699C0;
    case 260u: goto L_08A699D0;
    case 261u: goto L_08A699DC;
    case 262u: goto L_08A699F0;
    case 263u: goto L_08A69A04;
    case 264u: goto L_08A69A18;
    case 265u: goto L_08A69A2C;
    case 266u: goto L_08A69A40;
    case 267u: goto L_08A69A54;
    case 268u: goto L_08A69A64;
    case 269u: goto L_08A69A7C;
    case 270u: goto L_08A69A90;
    case 271u: goto L_08A69AC0;
    case 272u: goto L_08A69B00;
    case 273u: goto L_08A69B38;
    case 274u: goto L_08A69B50;
    case 275u: goto L_08A69B78;
    case 276u: goto L_08A69B88;
    case 277u: goto L_08A69B98;
    case 278u: goto L_08A69BA8;
    case 279u: goto L_08A69BC4;
    case 280u: goto L_08A69BD8;
    case 281u: goto L_08A69BE4;
    case 282u: goto L_08A69BFC;
    case 283u: goto L_08A69C08;
    case 284u: goto L_08A69C20;
    case 285u: goto L_08A69C38;
    case 286u: goto L_08A69C60;
    case 287u: goto L_08A69C70;
    case 288u: goto L_08A69CA0;
    case 289u: goto L_08A69CE0;
    case 290u: goto L_08A69D4C;
    case 291u: goto L_08A69D64;
    case 292u: goto L_08A69D80;
    case 293u: goto L_08A69D98;
    case 294u: goto L_08A69DA4;
    case 295u: goto L_08A69DB8;
    case 296u: goto L_08A69DCC;
    case 297u: goto L_08A69DE0;
    case 298u: goto L_08A69DF0;
    case 299u: goto L_08A69E08;
    case 300u: goto L_08A69E1C;
    case 301u: goto L_08A69E38;
    case 302u: goto L_08A69E50;
    case 303u: goto L_08A69E60;
    case 304u: goto L_08A69E70;
    case 305u: goto L_08A69E94;
    case 306u: goto L_08A69EA0;
    case 307u: goto L_08A69EA8;
    case 308u: goto L_08A69EB8;
    case 309u: goto L_08A69EC8;
    case 310u: goto L_08A69ED0;
    case 311u: goto L_08A69EE8;
    case 312u: goto L_08A69F08;
    case 313u: goto L_08A69F18;
    case 314u: goto L_08A69F28;
    case 315u: goto L_08A69F34;
    case 316u: goto L_08A69F4C;
    case 317u: goto L_08A69F78;
    case 318u: goto L_08A69F8C;
    case 319u: goto L_08A69F9C;
    case 320u: goto L_08A69FA4;
    case 321u: goto L_08A69FB4;
    case 322u: goto L_08A69FC0;
    case 323u: goto L_08A69FEC;
    case 324u: goto L_08A6A010;
    case 325u: goto L_08A6A020;
    case 326u: goto L_08A6A02C;
    case 327u: goto L_08A6A05C;
    case 328u: goto L_08A6A07C;
    case 329u: goto L_08A6A09C;
    case 330u: goto L_08A6A0C0;
    case 331u: goto L_08A6A0CC;
    case 332u: goto L_08A6A0EC;
    case 333u: goto L_08A6A100;
    case 334u: goto L_08A6A110;
    case 335u: goto L_08A6A120;
    case 336u: goto L_08A6A12C;
    case 337u: goto L_08A6A134;
    case 338u: goto L_08A6A144;
    case 339u: goto L_08A6A154;
    case 340u: goto L_08A6A178;
    case 341u: goto L_08A6A184;
    case 342u: goto L_08A6A18C;
    case 343u: goto L_08A6A19C;
    case 344u: goto L_08A6A1AC;
    case 345u: goto L_08A6A1B4;
    case 346u: goto L_08A6A1C0;
    case 347u: goto L_08A6A1CC;
    case 348u: goto L_08A6A1E8;
    case 349u: goto L_08A6A1FC;
    case 350u: goto L_08A6A220;
    case 351u: goto L_08A6A230;
    case 352u: goto L_08A6A23C;
    case 353u: goto L_08A6A260;
    case 354u: goto L_08A6A274;
    case 355u: goto L_08A6A298;
    case 356u: goto L_08A6A2A8;
    case 357u: goto L_08A6A2B4;
    case 358u: goto L_08A6A2C8;
    case 359u: goto L_08A6A2DC;
    case 360u: goto L_08A6A300;
    case 361u: goto L_08A6A30C;
    case 362u: goto L_08A6A32C;
    case 363u: goto L_08A6A340;
    case 364u: goto L_08A6A350;
    case 365u: goto L_08A6A360;
    case 366u: goto L_08A6A36C;
    case 367u: goto L_08A6A374;
    case 368u: goto L_08A6A384;
    case 369u: goto L_08A6A394;
    case 370u: goto L_08A6A3B8;
    case 371u: goto L_08A6A3C4;
    case 372u: goto L_08A6A3CC;
    case 373u: goto L_08A6A3DC;
    case 374u: goto L_08A6A3EC;
    case 375u: goto L_08A6A3F4;
    case 376u: goto L_08A6A400;
    case 377u: goto L_08A6A40C;
    case 378u: goto L_08A6A428;
    case 379u: goto L_08A6A43C;
    case 380u: goto L_08A6A460;
    case 381u: goto L_08A6A470;
    case 382u: goto L_08A6A47C;
    case 383u: goto L_08A6A4A0;
    case 384u: goto L_08A6A4B4;
    case 385u: goto L_08A6A4D8;
    case 386u: goto L_08A6A4E8;
    case 387u: goto L_08A6A4F4;
    case 388u: goto L_08A6A508;
    case 389u: goto L_08A6A51C;
    case 390u: goto L_08A6A540;
    case 391u: goto L_08A6A54C;
    case 392u: goto L_08A6A56C;
    case 393u: goto L_08A6A580;
    case 394u: goto L_08A6A590;
    case 395u: goto L_08A6A5A0;
    case 396u: goto L_08A6A5AC;
    case 397u: goto L_08A6A5B4;
    case 398u: goto L_08A6A5C4;
    case 399u: goto L_08A6A5D4;
    case 400u: goto L_08A6A5F8;
    case 401u: goto L_08A6A60C;
    case 402u: goto L_08A6A620;
    case 403u: goto L_08A6A654;
    case 404u: goto L_08A6A660;
    case 405u: goto L_08A6A67C;
    case 406u: goto L_08A6A68C;
    case 407u: goto L_08A6A698;
    case 408u: goto L_08A6A6AC;
    case 409u: goto L_08A6A6D4;
    case 410u: goto L_08A6A6E0;
    case 411u: goto L_08A6A6FC;
    case 412u: goto L_08A6A714;
    case 413u: goto L_08A6A728;
    case 414u: goto L_08A6A740;
    case 415u: goto L_08A6A754;
    case 416u: goto L_08A6A76C;
    case 417u: goto L_08A6A780;
    case 418u: goto L_08A6A794;
    case 419u: goto L_08A6A7B4;
    case 420u: goto L_08A6A7CC;
    case 421u: goto L_08A6A7DC;
    case 422u: goto L_08A6A7F4;
    case 423u: goto L_08A6A814;
    case 424u: goto L_08A6A830;
    case 425u: goto L_08A6A84C;
    case 426u: goto L_08A6A86C;
    case 427u: goto L_08A6A880;
    case 428u: goto L_08A6A8A0;
    case 429u: goto L_08A6A8B4;
    case 430u: goto L_08A6A8D0;
    case 431u: goto L_08A6A8E4;
    case 432u: goto L_08A6A90C;
    case 433u: goto L_08A6A928;
    case 434u: goto L_08A6A940;
    case 435u: goto L_08A6A954;
    case 436u: goto L_08A6A968;
    case 437u: goto L_08A6A974;
    case 438u: goto L_08A6A984;
    case 439u: goto L_08A6A990;
    case 440u: goto L_08A6A9A8;
    case 441u: goto L_08A6A9C8;
    case 442u: goto L_08A6A9D8;
    case 443u: goto L_08A6AA00;
    case 444u: goto L_08A6AA0C;
    case 445u: goto L_08A6AA2C;
    case 446u: goto L_08A6AA40;
    case 447u: goto L_08A6AA64;
    case 448u: goto L_08A6AA8C;
    case 449u: goto L_08A6AAD8;
    case 450u: goto L_08A6AAE8;
    case 451u: goto L_08A6AB00;
    case 452u: goto L_08A6AB10;
    case 453u: goto L_08A6AB24;
    case 454u: goto L_08A6AB34;
    case 455u: goto L_08A6AB68;
    case 456u: goto L_08A6AB7C;
    case 457u: goto L_08A6AB94;
    case 458u: goto L_08A6ABB0;
    case 459u: goto L_08A6ABC4;
    case 460u: goto L_08A6ABD8;
    case 461u: goto L_08A6ABF0;
    case 462u: goto L_08A6AC00;
    case 463u: goto L_08A6AC1C;
    case 464u: goto L_08A6AC34;
    case 465u: goto L_08A6AC40;
    case 466u: goto L_08A6AC54;
    case 467u: goto L_08A6AC68;
    case 468u: goto L_08A6AC78;
    case 469u: goto L_08A6AC8C;
    case 470u: goto L_08A6AC9C;
    case 471u: goto L_08A6ACA4;
    case 472u: goto L_08A6ACB4;
    case 473u: goto L_08A6ACC8;
    case 474u: goto L_08A6ACD8;
    case 475u: goto L_08A6ACEC;
    case 476u: goto L_08A6ACFC;
    case 477u: goto L_08A6AD04;
    case 478u: goto L_08A6AD0C;
    case 479u: goto L_08A6AD18;
    case 480u: goto L_08A6AD30;
    case 481u: goto L_08A6AD40;
    case 482u: goto L_08A6AD50;
    case 483u: goto L_08A6AD68;
    case 484u: goto L_08A6ADA4;
    case 485u: goto L_08A6ADB4;
    case 486u: goto L_08A6ADC8;
    case 487u: goto L_08A6ADD0;
    case 488u: goto L_08A6AE00;
    case 489u: goto L_08A6AE1C;
    case 490u: goto L_08A6AE28;
    case 491u: goto L_08A6AE48;
    case 492u: goto L_08A6AE94;
    case 493u: goto L_08A6AEA4;
    case 494u: goto L_08A6AEBC;
    case 495u: goto L_08A6AECC;
    case 496u: goto L_08A6AEE0;
    case 497u: goto L_08A6AEF0;
    case 498u: goto L_08A6AF24;
    case 499u: goto L_08A6AF38;
    case 500u: goto L_08A6AF4C;
    case 501u: goto L_08A6AF68;
    case 502u: goto L_08A6AF7C;
    case 503u: goto L_08A6AF90;
    case 504u: goto L_08A6AFA8;
    case 505u: goto L_08A6AFB8;
    case 506u: goto L_08A6AFD4;
    case 507u: goto L_08A6AFE0;
    case 508u: goto L_08A6AFF4;
    case 509u: goto L_08A6B008;
    case 510u: goto L_08A6B018;
    case 511u: goto L_08A6B02C;
    case 512u: goto L_08A6B03C;
    case 513u: goto L_08A6B044;
    case 514u: goto L_08A6B054;
    case 515u: goto L_08A6B068;
    case 516u: goto L_08A6B078;
    case 517u: goto L_08A6B08C;
    case 518u: goto L_08A6B09C;
    case 519u: goto L_08A6B0A4;
    case 520u: goto L_08A6B0AC;
    case 521u: goto L_08A6B0B8;
    case 522u: goto L_08A6B0D0;
    case 523u: goto L_08A6B0E0;
    case 524u: goto L_08A6B0EC;
    case 525u: goto L_08A6B0FC;
    case 526u: goto L_08A6B130;
    case 527u: goto L_08A6B140;
    case 528u: goto L_08A6B148;
    case 529u: goto L_08A6B150;
    case 530u: goto L_08A6B158;
    case 531u: goto L_08A6B160;
    case 532u: goto L_08A6B184;
    case 533u: goto L_08A6B1A4;
    case 534u: goto L_08A6B1C0;
    case 535u: goto L_08A6B1D4;
    case 536u: goto L_08A6B1E4;
    case 537u: goto L_08A6B1EC;
    case 538u: goto L_08A6B200;
    case 539u: goto L_08A6B208;
    case 540u: goto L_08A6B21C;
    case 541u: goto L_08A6B238;
    case 542u: goto L_08A6B24C;
    case 543u: goto L_08A6B25C;
    case 544u: goto L_08A6B26C;
    case 545u: goto L_08A6B27C;
    case 546u: goto L_08A6B284;
    case 547u: goto L_08A6B29C;
    case 548u: goto L_08A6B2C0;
    case 549u: goto L_08A6B2F4;
    case 550u: goto L_08A6B300;
    case 551u: goto L_08A6B324;
    case 552u: goto L_08A6B338;
    case 553u: goto L_08A6B348;
    case 554u: goto L_08A6B358;
    case 555u: goto L_08A6B364;
    case 556u: goto L_08A6B37C;
    case 557u: goto L_08A6B38C;
    case 558u: goto L_08A6B3A4;
    case 559u: goto L_08A6B3BC;
    case 560u: goto L_08A6B3D8;
    case 561u: goto L_08A6B3E8;
    case 562u: goto L_08A6B3F0;
    case 563u: goto L_08A6B404;
    case 564u: goto L_08A6B414;
    case 565u: goto L_08A6B420;
    case 566u: goto L_08A6B44C;
    case 567u: goto L_08A6B470;
    case 568u: goto L_08A6B480;
    case 569u: goto L_08A6B48C;
    case 570u: goto L_08A6B4AC;
    case 571u: goto L_08A6B4BC;
    case 572u: goto L_08A6B4CC;
    case 573u: goto L_08A6B4F0;
    case 574u: goto L_08A6B504;
    case 575u: goto L_08A6B52C;
    case 576u: goto L_08A6B538;
    case 577u: goto L_08A6B558;
    case 578u: goto L_08A6B56C;
    case 579u: goto L_08A6B58C;
    case 580u: goto L_08A6B5A0;
    case 581u: goto L_08A6B5B0;
    case 582u: goto L_08A6B5B8;
    case 583u: goto L_08A6B5C8;
    case 584u: goto L_08A6B5D4;
    case 585u: goto L_08A6B5E8;
    case 586u: goto L_08A6B5F4;
    case 587u: goto L_08A6B5FC;
    case 588u: goto L_08A6B60C;
    case 589u: goto L_08A6B61C;
    case 590u: goto L_08A6B628;
    case 591u: goto L_08A6B630;
    case 592u: goto L_08A6B640;
    case 593u: goto L_08A6B648;
    case 594u: goto L_08A6B678;
    case 595u: goto L_08A6B694;
    case 596u: goto L_08A6B6B4;
    case 597u: goto L_08A6B6C8;
    case 598u: goto L_08A6B6D0;
    case 599u: goto L_08A6B6EC;
    case 600u: goto L_08A6B708;
    case 601u: goto L_08A6B72C;
    case 602u: goto L_08A6B738;
    case 603u: goto L_08A6B758;
    case 604u: goto L_08A6B76C;
    case 605u: goto L_08A6B77C;
    case 606u: goto L_08A6B78C;
    case 607u: goto L_08A6B79C;
    case 608u: goto L_08A6B7A8;
    case 609u: goto L_08A6B7B0;
    case 610u: goto L_08A6B7B8;
    case 611u: goto L_08A6B7C4;
    case 612u: goto L_08A6B7D8;
    case 613u: goto L_08A6B7F0;
    case 614u: goto L_08A6B7F4;
    case 615u: goto L_08A6B808;
    case 616u: goto L_08A6B810;
    case 617u: goto L_08A6B81C;
    case 618u: goto L_08A6B824;
    case 619u: goto L_08A6B840;
    case 620u: goto L_08A6B848;
    case 621u: goto L_08A6B84C;
    case 622u: goto L_08A6B850;
    case 623u: goto L_08A6B858;
    case 624u: goto L_08A6B860;
    case 625u: goto L_08A6B870;
    case 626u: goto L_08A6B894;
    case 627u: goto L_08A6B8AC;
    case 628u: goto L_08A6B8B0;
    case 629u: goto L_08A6B8B8;
    case 630u: goto L_08A6B8C0;
    case 631u: goto L_08A6B8C8;
    case 632u: goto L_08A6B8D0;
    case 633u: goto L_08A6B8D8;
    case 634u: goto L_08A6B8E0;
    case 635u: goto L_08A6B8E8;
    case 636u: goto L_08A6B8FC;
    case 637u: goto L_08A6B910;
    case 638u: goto L_08A6B918;
    case 639u: goto L_08A6B924;
    case 640u: goto L_08A6B92C;
    case 641u: goto L_08A6B948;
    case 642u: goto L_08A6B94C;
    case 643u: goto L_08A6B958;
    case 644u: goto L_08A6B960;
    case 645u: goto L_08A6B968;
    case 646u: goto L_08A6B970;
    case 647u: goto L_08A6B978;
    case 648u: goto L_08A6B98C;
    case 649u: goto L_08A6B990;
    case 650u: goto L_08A6B9A4;
    case 651u: goto L_08A6B9AC;
    case 652u: goto L_08A6B9B8;
    case 653u: goto L_08A6B9C0;
    case 654u: goto L_08A6B9DC;
    case 655u: goto L_08A6B9E4;
    case 656u: goto L_08A6B9EC;
    case 657u: goto L_08A6B9F0;
    case 658u: goto L_08A6B9F8;
    case 659u: goto L_08A6BA00;
    case 660u: goto L_08A6BA14;
    case 661u: goto L_08A6BA28;
    case 662u: goto L_08A6BA40;
    case 663u: goto L_08A6BA54;
    case 664u: goto L_08A6BA5C;
    case 665u: goto L_08A6BA6C;
    case 666u: goto L_08A6BA78;
    case 667u: goto L_08A6BA80;
    case 668u: goto L_08A6BA8C;
    case 669u: goto L_08A6BA9C;
    case 670u: goto L_08A6BAB0;
    case 671u: goto L_08A6BAC0;
    case 672u: goto L_08A6BAC8;
    case 673u: goto L_08A6BAD0;
    case 674u: goto L_08A6BAE8;
    case 675u: goto L_08A6BAF4;
    case 676u: goto L_08A6BB00;
    case 677u: goto L_08A6BB08;
    case 678u: goto L_08A6BB10;
    case 679u: goto L_08A6BB1C;
    case 680u: goto L_08A6BB34;
    case 681u: goto L_08A6BB48;
    case 682u: goto L_08A6BB50;
    case 683u: goto L_08A6BB78;
    case 684u: goto L_08A6BB9C;
    case 685u: goto L_08A6BBA4;
    case 686u: goto L_08A6BBD4;
    case 687u: goto L_08A6BBFC;
    case 688u: goto L_08A6BC10;
    case 689u: goto L_08A6BC3C;
    case 690u: goto L_08A6BC5C;
    case 691u: goto L_08A6BC68;
    case 692u: goto L_08A6BC78;
    case 693u: goto L_08A6BC94;
    case 694u: goto L_08A6BC9C;
    case 695u: goto L_08A6BCBC;
    case 696u: goto L_08A6BCC4;
    case 697u: goto L_08A6BCDC;
    case 698u: goto L_08A6BCE0;
    case 699u: goto L_08A6BCF4;
    case 700u: goto L_08A6BD04;
    case 701u: goto L_08A6BD10;
    case 702u: goto L_08A6BD28;
    case 703u: goto L_08A6BD3C;
    case 704u: goto L_08A6BD4C;
    case 705u: goto L_08A6BD58;
    case 706u: goto L_08A6BD64;
    case 707u: goto L_08A6BD70;
    case 708u: goto L_08A6BD80;
    case 709u: goto L_08A6BD84;
    case 710u: goto L_08A6BD88;
    case 711u: goto L_08A6BD90;
    case 712u: goto L_08A6BDA0;
    case 713u: goto L_08A6BDB8;
    case 714u: goto L_08A6BDD4;
    case 715u: goto L_08A6BDE8;
    case 716u: goto L_08A6BDF0;
    case 717u: goto L_08A6BE04;
    case 718u: goto L_08A6BE1C;
    case 719u: goto L_08A6BE20;
    case 720u: goto L_08A6BE2C;
    case 721u: goto L_08A6BE40;
    case 722u: goto L_08A6BE50;
    case 723u: goto L_08A6BE58;
    case 724u: goto L_08A6BE6C;
    case 725u: goto L_08A6BE78;
    case 726u: goto L_08A6BE84;
    case 727u: goto L_08A6BE8C;
    case 728u: goto L_08A6BE94;
    case 729u: goto L_08A6BED0;
    case 730u: goto L_08A6BEFC;
    case 731u: goto L_08A6BF08;
    case 732u: goto L_08A6BF1C;
    case 733u: goto L_08A6BF24;
    case 734u: goto L_08A6BF2C;
    case 735u: goto L_08A6BF38;
    case 736u: goto L_08A6BF4C;
    case 737u: goto L_08A6BF58;
    case 738u: goto L_08A6BF60;
    case 739u: goto L_08A6BF68;
    case 740u: goto L_08A6BF70;
    case 741u: goto L_08A6BF74;
    case 742u: goto L_08A6BF84;
    case 743u: goto L_08A6BFA8;
    case 744u: goto L_08A6BFD0;
    case 745u: goto L_08A6BFD8;
    case 746u: goto L_08A6BFE0;
    case 747u: goto L_08A6BFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A68000:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6803C;
      }
      goto L_08A6800C;
    }
L_08A6800C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68054;
      }
      goto L_08A6801C;
    }
L_08A6801C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68064;
      }
      goto L_08A68024;
    }
L_08A68024:
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68064;
      }
      goto L_08A6803C;
    }
L_08A6803C:
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68064;
      }
      goto L_08A68054;
    }
L_08A68054:
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A68064;
L_08A68064:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A68084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 67u, 0x08A149D4u>(ctx, &aot_mem) && ctx.pc == 0x08A68084u) goto L_08A68084;
    return;
L_08A68084:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4294)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68228;
      }
      goto L_08A68094;
    }
L_08A68094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4294)));
    ctx.gpr[4] = (ctx.gpr[4] & 11u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68228;
      }
      goto L_08A680A8;
    }
L_08A680A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5056)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68228;
      }
      goto L_08A680BC;
    }
L_08A680BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4318)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68228;
      }
      goto L_08A680D0;
    }
L_08A680D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5023))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3980)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A68228;
      }
      goto L_08A680FC;
    }
L_08A680FC:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68158;
      }
      goto L_08A68114;
    }
L_08A68114:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A68198;
      }
      goto L_08A68128;
    }
L_08A68128:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A68158;
      }
      goto L_08A68140;
    }
L_08A68140:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A68198;
      }
      goto L_08A68158;
    }
L_08A68158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A68168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 16u, 0x08A3C1C0u>(ctx, &aot_mem) && ctx.pc == 0x08A68168u) goto L_08A68168;
    return;
L_08A68168:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68184;
      }
      goto L_08A68174;
    }
L_08A68174:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4294)));
    ctx.gpr[4] = (ctx.gpr[4] | 1032u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4294), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A68184;
L_08A68184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A68190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 24u, 0x08A401C8u>(ctx, &aot_mem) && ctx.pc == 0x08A68190u) goto L_08A68190;
    return;
L_08A68190:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68228;
      }
      goto L_08A68198;
    }
L_08A68198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2980)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2976)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A681E0;
      }
      goto L_08A681C4;
    }
L_08A681C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2976)));
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2980), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A681E0;
L_08A681E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2972)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2976)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A68228;
      }
      goto L_08A6820C;
    }
L_08A6820C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2976)));
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2972), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A68228;
L_08A68228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4294)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A683E0;
      }
      goto L_08A6823C;
    }
L_08A6823C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6825Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A6825Cu) goto L_08A6825C;
    return;
L_08A6825C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A68268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 146u, 0x08A212A8u>(ctx, &aot_mem) && ctx.pc == 0x08A68268u) goto L_08A68268;
    return;
L_08A68268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A683E0;
      }
      goto L_08A6827C;
    }
L_08A6827C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5056)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A682B4;
      }
      goto L_08A68290;
    }
L_08A68290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(760)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A682CC;
      }
      goto L_08A682B4;
    }
L_08A682B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 683u);
    ctx.gpr[31] = (0x08A682CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 191u, 0x08A295E4u>(ctx, &aot_mem) && ctx.pc == 0x08A682CCu) goto L_08A682CC;
    return;
L_08A682CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A68300;
      }
      goto L_08A682F4;
    }
L_08A682F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A68300;
L_08A68300:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A68334;
      }
      goto L_08A68320;
    }
L_08A68320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A683E0;
      }
      goto L_08A68334;
    }
L_08A68334:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A68344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 213u, 0x08A2F2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A68344u) goto L_08A68344;
    return;
L_08A68344:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4294)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68398;
      }
      goto L_08A68354;
    }
L_08A68354:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A68398;
      }
      goto L_08A68368;
    }
L_08A68368:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A68398;
      }
      goto L_08A68380;
    }
L_08A68380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A68390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 36u, 0x08A50270u>(ctx, &aot_mem) && ctx.pc == 0x08A68390u) goto L_08A68390;
    return;
L_08A68390:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A683E0;
      }
      goto L_08A68398;
    }
L_08A68398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4294)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A683D0;
      }
      goto L_08A683AC;
    }
L_08A683AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4294)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A683D0;
      }
      goto L_08A683C0;
    }
L_08A683C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4298)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4298), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A683D0;
L_08A683D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A683E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 36u, 0x08A50270u>(ctx, &aot_mem) && ctx.pc == 0x08A683E0u) goto L_08A683E0;
    return;
L_08A683E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6843C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5060))))));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[12];
    ctx.gpr[5] = (17036u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4768)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4944));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68490:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A684ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 209u, 0x08A2F274u>(ctx, &aot_mem) && ctx.pc == 0x08A684ACu) goto L_08A684AC;
    return;
L_08A684AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68528;
      }
      goto L_08A684B8;
    }
L_08A684B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5053))))));
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A684DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 165u, 0x08A21680u>(ctx, &aot_mem) && ctx.pc == 0x08A684DCu) goto L_08A684DC;
    return;
L_08A684DC:
    ctx.gpr[6] = (0u | 10056u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A684F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 139u, 0x08A50AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A684F0u) goto L_08A684F0;
    return;
L_08A684F0:
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(4992));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A6851Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 102u, 0x08A14EFCu>(ctx, &aot_mem) && ctx.pc == 0x08A6851Cu) goto L_08A6851C;
    return;
L_08A6851C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4304), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A68528;
L_08A68528:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68538:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 124u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] & 24u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68568;
      }
      goto L_08A68560;
    }
L_08A68560:
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08A68568;
L_08A68568:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68574:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A685F8;
      }
      goto L_08A68598;
    }
L_08A68598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A685CC;
      }
      goto L_08A685AC;
    }
L_08A685AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A685C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A685C4u) goto L_08A685C4;
    return;
L_08A685C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A685E4;
      }
      goto L_08A685CC;
    }
L_08A685CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A685E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A685E4u) goto L_08A685E4;
    return;
L_08A685E4:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68628;
      }
      goto L_08A685F8;
    }
L_08A685F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A68614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A68614u) goto L_08A68614;
    return;
L_08A68614:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A68620u);
    // nop
    goto L_08A68490;
L_08A68620:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A68628;
L_08A68628:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68638:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(804)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A686EC;
      }
      goto L_08A68690;
    }
L_08A68690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(728)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A686EC;
      }
      goto L_08A686B4;
    }
L_08A686B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(728)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A686EC;
      }
      goto L_08A686E0;
    }
L_08A686E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A686ECu);
    // nop
    goto L_08A68CAC;
L_08A686EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(728)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A68BC8;
      }
      goto L_08A6871C;
    }
L_08A6871C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68BC8;
      }
      goto L_08A68730;
    }
L_08A68730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68848;
      }
      goto L_08A6873C;
    }
L_08A6873C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3116)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A68848;
      }
      goto L_08A6874C;
    }
L_08A6874C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(264));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A68770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 15u, 0x08A2C21Cu>(ctx, &aot_mem) && ctx.pc == 0x08A68770u) goto L_08A68770;
    return;
L_08A68770:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08A68780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A68780u) goto L_08A68780;
    return;
L_08A68780:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A6879Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 63u, 0x08A2CCECu>(ctx, &aot_mem) && ctx.pc == 0x08A6879Cu) goto L_08A6879C;
    return;
L_08A6879C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A687B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 15u, 0x08A2C21Cu>(ctx, &aot_mem) && ctx.pc == 0x08A687B8u) goto L_08A687B8;
    return;
L_08A687B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3976)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08A687C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A687C8u) goto L_08A687C8;
    return;
L_08A687C8:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3116)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08A687ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A687ECu) goto L_08A687EC;
    return;
L_08A687EC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A6880Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 63u, 0x08A2CCECu>(ctx, &aot_mem) && ctx.pc == 0x08A6880Cu) goto L_08A6880C;
    return;
L_08A6880C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6882Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 15u, 0x08A2C21Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6882Cu) goto L_08A6882C;
    return;
L_08A6882C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A6883Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 235u, 0x08A41494u>(ctx, &aot_mem) && ctx.pc == 0x08A6883Cu) goto L_08A6883C;
    return;
L_08A6883C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3116)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3116), ctx.gpr[4]);
    goto L_08A68848;
L_08A68848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5024))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68924;
      }
      goto L_08A6885C;
    }
L_08A6885C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5024))))));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A68888;
      }
      goto L_08A68870;
    }
L_08A68870:
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 13u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A688C0;
      }
      goto L_08A68888;
    }
L_08A68888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5024))))));
    ctx.gpr[5] = (0u | 21u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A688B4;
      }
      goto L_08A6889C;
    }
L_08A6889C:
    ctx.gpr[4] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 19u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A688C0;
      }
      goto L_08A688B4;
    }
L_08A688B4:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    goto L_08A688C0;
L_08A688C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(204)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68964;
      }
      goto L_08A68924;
    }
L_08A68924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5024))))));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(204));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    goto L_08A68964;
L_08A68964:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4068));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08A68984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 15u, 0x08A2C21Cu>(ctx, &aot_mem) && ctx.pc == 0x08A68984u) goto L_08A68984;
    return;
L_08A68984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68AE4;
      }
      goto L_08A68990;
    }
L_08A68990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68BC8;
      }
      goto L_08A689A4;
    }
L_08A689A4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A689E8;
      }
      goto L_08A689C0;
    }
L_08A689C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(732)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A689E8;
      }
      goto L_08A689E4;
    }
L_08A689E4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(0u));
    goto L_08A689E8;
L_08A689E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68BC8;
      }
      goto L_08A689F4;
    }
L_08A689F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(732)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A68A30;
      }
      goto L_08A68A28;
    }
L_08A68A28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A68A30;
L_08A68A30:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[31] = (0x08A68A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 656u, 0x08A970F8u>(ctx, &aot_mem) && ctx.pc == 0x08A68A5Cu) goto L_08A68A5C;
    return;
L_08A68A5C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A68A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 495u, 0x08A967A8u>(ctx, &aot_mem) && ctx.pc == 0x08A68A78u) goto L_08A68A78;
    return;
L_08A68A78:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A68AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 469u, 0x08A2BE58u>(ctx, &aot_mem) && ctx.pc == 0x08A68AACu) goto L_08A68AAC;
    return;
L_08A68AAC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A68AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 235u, 0x08A41494u>(ctx, &aot_mem) && ctx.pc == 0x08A68AC0u) goto L_08A68AC0;
    return;
L_08A68AC0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3048)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68BC8;
      }
      goto L_08A68AE4;
    }
L_08A68AE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3112)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A68BC8;
      }
      goto L_08A68AF4;
    }
L_08A68AF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[31] = (0x08A68B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 656u, 0x08A970F8u>(ctx, &aot_mem) && ctx.pc == 0x08A68B10u) goto L_08A68B10;
    return;
L_08A68B10:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3112)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A68B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 495u, 0x08A967A8u>(ctx, &aot_mem) && ctx.pc == 0x08A68B3Cu) goto L_08A68B3C;
    return;
L_08A68B3C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A68B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 469u, 0x08A2BE58u>(ctx, &aot_mem) && ctx.pc == 0x08A68B70u) goto L_08A68B70;
    return;
L_08A68B70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A68B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 235u, 0x08A41494u>(ctx, &aot_mem) && ctx.pc == 0x08A68B80u) goto L_08A68B80;
    return;
L_08A68B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 95 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68BB8;
      }
      goto L_08A68B94;
    }
L_08A68B94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 97 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68BB8;
      }
      goto L_08A68BA4;
    }
L_08A68BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4084)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A68BB8;
L_08A68BB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3112), ctx.gpr[4]);
    goto L_08A68BC8;
L_08A68BC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68C34;
      }
      goto L_08A68BDC;
    }
L_08A68BDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(732)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A68C84;
      }
      goto L_08A68C00;
    }
L_08A68C00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 683u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A68C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 144u, 0x08A28C04u>(ctx, &aot_mem) && ctx.pc == 0x08A68C2Cu) goto L_08A68C2C;
    return;
L_08A68C2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68C84;
      }
      goto L_08A68C34;
    }
L_08A68C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(716)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A68C84;
      }
      goto L_08A68C58;
    }
L_08A68C58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 683u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A68C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 144u, 0x08A28C04u>(ctx, &aot_mem) && ctx.pc == 0x08A68C84u) goto L_08A68C84;
    return;
L_08A68C84:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68CAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(732)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(728)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(804)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3112), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68D20;
      }
      goto L_08A68D14;
    }
L_08A68D14:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3112), ctx.gpr[4]);
    goto L_08A68D20;
L_08A68D20:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(804)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (16704u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3116), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[5] = (ctx.gpr[5] & 168u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4304), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4304), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 93 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68D94;
      }
      goto L_08A68D7C;
    }
L_08A68D7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 92 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68DA4;
      }
      goto L_08A68D8C;
    }
L_08A68D8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68E44;
      }
      goto L_08A68D94;
    }
L_08A68D94:
    ctx.gpr[5] = (0u | 133u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A68E58;
      }
      goto L_08A68DA4;
    }
L_08A68DA4:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4300)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68DE0;
      }
      goto L_08A68DCC;
    }
L_08A68DCC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A68DE0;
L_08A68DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3044)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A68E10;
      }
      goto L_08A68E04;
    }
L_08A68E04:
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A68E10;
L_08A68E10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10600)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3048), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68E64;
      }
      goto L_08A68E44;
    }
L_08A68E44:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68E64;
      }
      goto L_08A68E58;
    }
L_08A68E58:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A68E64;
L_08A68E64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5027))))));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(204));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(264));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08A68E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 15u, 0x08A2C21Cu>(ctx, &aot_mem) && ctx.pc == 0x08A68E98u) goto L_08A68E98;
    return;
L_08A68E98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[31] = (0x08A68EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 656u, 0x08A970F8u>(ctx, &aot_mem) && ctx.pc == 0x08A68EB4u) goto L_08A68EB4;
    return;
L_08A68EB4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A68ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 495u, 0x08A967A8u>(ctx, &aot_mem) && ctx.pc == 0x08A68ECCu) goto L_08A68ECC;
    return;
L_08A68ECC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4992)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 134 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68F1C;
      }
      goto L_08A68F04;
    }
L_08A68F04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 124 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6940C;
      }
      goto L_08A68F14;
    }
L_08A68F14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68F34;
      }
      goto L_08A68F1C;
    }
L_08A68F1C:
    ctx.gpr[5] = (0u | 10005u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A691A8;
      }
      goto L_08A68F2C;
    }
L_08A68F2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6940C;
      }
      goto L_08A68F34;
    }
L_08A68F34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-124));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-15752)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3096)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5136));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08A68F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A68F80u) goto L_08A68F80;
    return;
L_08A68F80:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A68FB4;
      }
      goto L_08A68FA8;
    }
L_08A68FA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A68FB4;
L_08A68FB4:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A69020;
      }
      goto L_08A68FD0;
    }
L_08A68FD0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A68FFC;
      }
      goto L_08A68FE8;
    }
L_08A68FE8:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69008;
      }
      goto L_08A68FFC;
    }
L_08A68FFC:
    ctx.gpr[4] = (49776u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A69008;
L_08A69008:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08A69018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A69018u) goto L_08A69018;
    return;
L_08A69018:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A69020;
L_08A69020:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A69034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A69034u) goto L_08A69034;
    return;
L_08A69034:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3976), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6940C;
      }
      goto L_08A69048;
    }
L_08A69048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69084;
      }
      goto L_08A6905C;
    }
L_08A6905C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3096)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5104));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A690C0;
      }
      goto L_08A69084;
    }
L_08A69084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4656)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08A6909Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 495u, 0x08A967A8u>(ctx, &aot_mem) && ctx.pc == 0x08A6909Cu) goto L_08A6909C;
    return;
L_08A6909C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A690C0;
L_08A690C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08A690D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A690D0u) goto L_08A690D0;
    return;
L_08A690D0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A69104;
      }
      goto L_08A690F8;
    }
L_08A690F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A69104;
L_08A69104:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A69170;
      }
      goto L_08A69120;
    }
L_08A69120:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6914C;
      }
      goto L_08A69138;
    }
L_08A69138:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69158;
      }
      goto L_08A6914C;
    }
L_08A6914C:
    ctx.gpr[4] = (49776u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A69158;
L_08A69158:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (0x08A69168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A69168u) goto L_08A69168;
    return;
L_08A69168:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A69170;
L_08A69170:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A69184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A69184u) goto L_08A69184;
    return;
L_08A69184:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3976), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6940C;
      }
      goto L_08A69198;
    }
L_08A69198:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4304), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A691A8;
L_08A691A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69304;
      }
      goto L_08A691BC;
    }
L_08A691BC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A691F4;
      }
      goto L_08A691D4;
    }
L_08A691D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08A691E4u);
    // nop
    goto L_08A69504;
L_08A691E4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A693D0;
      }
      goto L_08A691F4;
    }
L_08A691F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4300)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A693D0;
      }
      goto L_08A69208;
    }
L_08A69208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4656)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08A69220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 495u, 0x08A967A8u>(ctx, &aot_mem) && ctx.pc == 0x08A69220u) goto L_08A69220;
    return;
L_08A69220:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A69248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A69248u) goto L_08A69248;
    return;
L_08A69248:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08A6925Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A6925Cu) goto L_08A6925C;
    return;
L_08A6925C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A69290;
      }
      goto L_08A69284;
    }
L_08A69284:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A69290;
L_08A69290:
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A693D0;
      }
      goto L_08A692AC;
    }
L_08A692AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A692D8;
      }
      goto L_08A692C4;
    }
L_08A692C4:
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A692E4;
      }
      goto L_08A692D8;
    }
L_08A692D8:
    ctx.gpr[4] = (49844u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A692E4;
L_08A692E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A692F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A692F4u) goto L_08A692F4;
    return;
L_08A692F4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A693D0;
      }
      goto L_08A69304;
    }
L_08A69304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3096)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5104));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08A69330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A69330u) goto L_08A69330;
    return;
L_08A69330:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A69364;
      }
      goto L_08A69358;
    }
L_08A69358:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A69364;
L_08A69364:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A693D0;
      }
      goto L_08A69380;
    }
L_08A69380:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A693AC;
      }
      goto L_08A69398;
    }
L_08A69398:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A693B8;
      }
      goto L_08A693AC;
    }
L_08A693AC:
    ctx.gpr[4] = (49696u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A693B8;
L_08A693B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (0x08A693C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A693C8u) goto L_08A693C8;
    return;
L_08A693C8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A693D0;
L_08A693D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3976), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5056)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6940C;
      }
      goto L_08A693EC;
    }
L_08A693EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3976)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A69404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A69404u) goto L_08A69404;
    return;
L_08A69404:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3976), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A6940C;
L_08A6940C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A69418u);
    // nop
    goto L_08A6843C;
L_08A69418:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6944C;
      }
      goto L_08A69434;
    }
L_08A69434:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4304), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A6944C;
L_08A6944C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6946C;
      }
      goto L_08A69464;
    }
L_08A69464:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A6946C;
L_08A6946C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A69484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 469u, 0x08A2BE58u>(ctx, &aot_mem) && ctx.pc == 0x08A69484u) goto L_08A69484;
    return;
L_08A69484:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(264));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(4068));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A694A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 14u, 0x08A2C170u>(ctx, &aot_mem) && ctx.pc == 0x08A694A4u) goto L_08A694A4;
    return;
L_08A694A4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A694B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 55u, 0x08A2CB7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A694B4u) goto L_08A694B4;
    return;
L_08A694B4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4028), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4032));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69504:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10360)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69600;
      }
      goto L_08A69538;
    }
L_08A69538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10364)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 12u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A695E0;
      }
      goto L_08A69568;
    }
L_08A69568:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10364)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[6] << 6u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(264));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(264));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A695ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 149u, 0x08A2ECA4u>(ctx, &aot_mem) && ctx.pc == 0x08A695ACu) goto L_08A695AC;
    return;
L_08A695AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A695E0;
      }
      goto L_08A695B8;
    }
L_08A695B8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10364)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[6] << 6u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69600;
      }
      goto L_08A695E0;
    }
L_08A695E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10360)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69538;
      }
      goto L_08A69600;
    }
L_08A69600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69710;
      }
      goto L_08A6960C;
    }
L_08A6960C:
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69698;
      }
      goto L_08A6962C;
    }
L_08A6962C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A69680;
      }
      goto L_08A6965C;
    }
L_08A6965C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A69680;
L_08A69680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6962C;
      }
      goto L_08A69698;
    }
L_08A69698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(264));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A696C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 57u, 0x08A2CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A696C4u) goto L_08A696C4;
    return;
L_08A696C4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A696F0;
      }
      goto L_08A696E0;
    }
L_08A696E0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A696F8;
      }
      goto L_08A696F0;
    }
L_08A696F0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A696F8;
L_08A696F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08A69708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 467u, 0x08A2BE28u>(ctx, &aot_mem) && ctx.pc == 0x08A69708u) goto L_08A69708;
    return;
L_08A69708:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A69710;
L_08A69710:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69724:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] | 80u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69790;
      }
      goto L_08A69760;
    }
L_08A69760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A697F4;
      }
      goto L_08A69790;
    }
L_08A69790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A697F4;
      }
      goto L_08A697B4;
    }
L_08A697B4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A697F4;
L_08A697F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6985C;
      }
      goto L_08A69808;
    }
L_08A69808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(728)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A69840;
      }
      goto L_08A6982C;
    }
L_08A6982C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A69840;
L_08A69840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6985C;
      }
      goto L_08A69854;
    }
L_08A69854:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08A6985C;
L_08A6985C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69898;
      }
      goto L_08A69868;
    }
L_08A69868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A6987Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 161u, 0x08A3D214u>(ctx, &aot_mem) && ctx.pc == 0x08A6987Cu) goto L_08A6987C;
    return;
L_08A6987C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69898;
      }
      goto L_08A69888;
    }
L_08A69888:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4024)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4024), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A69898;
L_08A69898:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A698A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4992)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 132 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A698FC;
      }
      goto L_08A698D4;
    }
L_08A698D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 127 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69934;
      }
      goto L_08A698E4;
    }
L_08A698E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 130 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69944;
      }
      goto L_08A698F4;
    }
L_08A698F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69954;
      }
      goto L_08A698FC;
    }
L_08A698FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10036 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69924;
      }
      goto L_08A6990C;
    }
L_08A6990C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 134 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69964;
      }
      goto L_08A6991C;
    }
L_08A6991C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69934;
      }
      goto L_08A69924;
    }
L_08A69924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10038 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69954;
      }
      goto L_08A69934;
    }
L_08A69934:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6996C;
      }
      goto L_08A69944;
    }
L_08A69944:
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6996C;
      }
      goto L_08A69954;
    }
L_08A69954:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6996C;
      }
      goto L_08A69964;
    }
L_08A69964:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_08A6996C;
L_08A6996C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A69980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 243u, 0x08A25454u>(ctx, &aot_mem) && ctx.pc == 0x08A69980u) goto L_08A69980;
    return;
L_08A69980:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69C20;
      }
      goto L_08A69990;
    }
L_08A69990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4280), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4284), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A699B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 477u, 0x08A32DBCu>(ctx, &aot_mem) && ctx.pc == 0x08A699B0u) goto L_08A699B0;
    return;
L_08A699B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A69B50;
      }
      goto L_08A699C0;
    }
L_08A699C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A699D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 24u, 0x08A54244u>(ctx, &aot_mem) && ctx.pc == 0x08A699D0u) goto L_08A699D0;
    return;
L_08A699D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69C20;
      }
      goto L_08A699DC;
    }
L_08A699DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A69B50;
      }
      goto L_08A699F0;
    }
L_08A699F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69B50;
      }
      goto L_08A69A04;
    }
L_08A69A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4284)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69B50;
      }
      goto L_08A69A18;
    }
L_08A69A18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69A7C;
      }
      goto L_08A69A2C;
    }
L_08A69A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69A54;
      }
      goto L_08A69A40;
    }
L_08A69A40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 104u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08A69A54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 546u, 0x08A47A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A69A54u) goto L_08A69A54;
    return;
L_08A69A54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x08A69A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A69A64u) goto L_08A69A64;
    return;
L_08A69A64:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69A7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69B50;
      }
      goto L_08A69A90;
    }
L_08A69A90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 13u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69B00;
      }
      goto L_08A69AC0;
    }
L_08A69AC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69AC0;
      }
      goto L_08A69B00;
    }
L_08A69B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4284)));
    ctx.gpr[5] = (ctx.gpr[5] | 4096u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4284), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08A69B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A69B38u) goto L_08A69B38;
    return;
L_08A69B38:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69B50:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4304), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (0u | 42u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A69B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 603u, 0x08A37CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A69B78u) goto L_08A69B78;
    return;
L_08A69B78:
    ctx.gpr[5] = (0u | 23u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A69B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 603u, 0x08A37CB8u>(ctx, &aot_mem) && ctx.pc == 0x08A69B88u) goto L_08A69B88;
    return;
L_08A69B88:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A69B98u);
    // nop
    goto L_08A69C38;
L_08A69B98:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69C08;
      }
      goto L_08A69BA8;
    }
L_08A69BA8:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4323)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69BE4;
      }
      goto L_08A69BC4;
    }
L_08A69BC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4323)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69BE4;
      }
      goto L_08A69BD8;
    }
L_08A69BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08A69BE4;
L_08A69BE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A69BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 546u, 0x08A47A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A69BFCu) goto L_08A69BFC;
    return;
L_08A69BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4216)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4216), ctx.gpr[4]);
    goto L_08A69C08;
L_08A69C08:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69C20:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69C38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69C70;
      }
      goto L_08A69C60;
    }
L_08A69C60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4284)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4284), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A69C70;
L_08A69C70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5100));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 13u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69CE0;
      }
      goto L_08A69CA0;
    }
L_08A69CA0:
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
          goto L_08A69CA0;
      }
      goto L_08A69CE0;
    }
L_08A69CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4724)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1296));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(5100));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[8] = (0u | 3u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A69D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 102u, 0x08A14EFCu>(ctx, &aot_mem) && ctx.pc == 0x08A69D4Cu) goto L_08A69D4C;
    return;
L_08A69D4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5104)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3088), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4310)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69D80;
      }
      goto L_08A69D64;
    }
L_08A69D64:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69D80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x08A69D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 606u, 0x08A27994u>(ctx, &aot_mem) && ctx.pc == 0x08A69D98u) goto L_08A69D98;
    return;
L_08A69D98:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69DB8;
      }
      goto L_08A69DA4;
    }
L_08A69DA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4306)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69E60;
      }
      goto L_08A69DB8;
    }
L_08A69DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] & 24u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69E08;
      }
      goto L_08A69DCC;
    }
L_08A69DCC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A69DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A69DE0u) goto L_08A69DE0;
    return;
L_08A69DE0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69E60;
      }
      goto L_08A69DF0;
    }
L_08A69DF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69E60;
      }
      goto L_08A69E08;
    }
L_08A69E08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 90u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A69E50;
      }
      goto L_08A69E1C;
    }
L_08A69E1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A69E38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 165u, 0x08A21680u>(ctx, &aot_mem) && ctx.pc == 0x08A69E38u) goto L_08A69E38;
    return;
L_08A69E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (49440u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A69E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 165u, 0x08A21680u>(ctx, &aot_mem) && ctx.pc == 0x08A69E50u) goto L_08A69E50;
    return;
L_08A69E50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4284)));
    ctx.gpr[31] = (0x08A69E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 508u, 0x08A33068u>(ctx, &aot_mem) && ctx.pc == 0x08A69E60u) goto L_08A69E60;
    return;
L_08A69E60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69E70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A69EA8;
      }
      goto L_08A69E94;
    }
L_08A69E94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6A144;
      }
      goto L_08A69EA0;
    }
L_08A69EA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69ED0;
      }
      goto L_08A69EA8;
    }
L_08A69EA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69F78;
      }
      goto L_08A69EB8;
    }
L_08A69EB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A02C;
      }
      goto L_08A69EC8;
    }
L_08A69EC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A144;
      }
      goto L_08A69ED0;
    }
L_08A69ED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4304), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69F28;
      }
      goto L_08A69EE8;
    }
L_08A69EE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[5] = (ctx.gpr[5] | 128u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4304), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69F18;
      }
      goto L_08A69F08;
    }
L_08A69F08:
    ctx.gpr[4] = (0u | 10543u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69F34;
      }
      goto L_08A69F18;
    }
L_08A69F18:
    ctx.gpr[4] = (0u | 10544u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69F34;
      }
      goto L_08A69F28;
    }
L_08A69F28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5092)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08A69F34;
L_08A69F34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A69F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A69F4Cu) goto L_08A69F4C;
    return;
L_08A69F4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4656)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4668), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5018))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A144;
      }
      goto L_08A69F78;
    }
L_08A69F78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69F9C;
      }
      goto L_08A69F8C;
    }
L_08A69F8C:
    ctx.gpr[4] = (4u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69FA4;
      }
      goto L_08A69F9C;
    }
L_08A69F9C:
    ctx.gpr[4] = (0u | 1024u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_08A69FA4;
L_08A69FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A69FB4u);
    // nop
    goto L_08A698A4;
L_08A69FB4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69FEC;
      }
      goto L_08A69FC0;
    }
L_08A69FC0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A02C;
      }
      goto L_08A69FEC;
    }
L_08A69FEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(716)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6A02C;
      }
      goto L_08A6A010;
    }
L_08A6A010:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6A020u);
    // nop
    goto L_08A68490;
L_08A6A020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A6A02C;
L_08A6A02C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(716)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6A07C;
      }
      goto L_08A6A05C;
    }
L_08A6A05C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A6A07Cu);
    // nop
    goto L_08A69724;
L_08A6A07C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 683u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A6A09Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 144u, 0x08A28C04u>(ctx, &aot_mem) && ctx.pc == 0x08A6A09Cu) goto L_08A6A09C;
    return;
L_08A6A09C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6A0CC;
      }
      goto L_08A6A0C0;
    }
L_08A6A0C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A6A0CC;
L_08A6A0CC:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6A100;
      }
      goto L_08A6A0EC;
    }
L_08A6A0EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A144;
      }
      goto L_08A6A100;
    }
L_08A6A100:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6A110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 213u, 0x08A2F2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A110u) goto L_08A6A110;
    return;
L_08A6A110:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A134;
      }
      goto L_08A6A120;
    }
L_08A6A120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A6A12Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 749u, 0x08A4FF60u>(ctx, &aot_mem) && ctx.pc == 0x08A6A12Cu) goto L_08A6A12C;
    return;
L_08A6A12C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A144;
      }
      goto L_08A6A134;
    }
L_08A6A134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A6A144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 36u, 0x08A50270u>(ctx, &aot_mem) && ctx.pc == 0x08A6A144u) goto L_08A6A144;
    return;
L_08A6A144:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A154:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A6A18C;
      }
      goto L_08A6A178;
    }
L_08A6A178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6A384;
      }
      goto L_08A6A184;
    }
L_08A6A184:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A1B4;
      }
      goto L_08A6A18C;
    }
L_08A6A18C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A220;
      }
      goto L_08A6A19C;
    }
L_08A6A19C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A2B4;
      }
      goto L_08A6A1AC;
    }
L_08A6A1AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A384;
      }
      goto L_08A6A1B4;
    }
L_08A6A1B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A6A1C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 404u, 0x08A5A440u>(ctx, &aot_mem) && ctx.pc == 0x08A6A1C0u) goto L_08A6A1C0;
    return;
L_08A6A1C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A384;
      }
      goto L_08A6A1CC;
    }
L_08A6A1CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4304), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (0u | 132u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6A1E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 139u, 0x08A50AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A1E8u) goto L_08A6A1E8;
    return;
L_08A6A1E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5092)));
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6A1FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A6A1FCu) goto L_08A6A1FC;
    return;
L_08A6A1FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5018))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A384;
      }
      goto L_08A6A220;
    }
L_08A6A220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 2048u);
    ctx.gpr[31] = (0x08A6A230u);
    // nop
    goto L_08A698A4;
L_08A6A230:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A274;
      }
      goto L_08A6A23C;
    }
L_08A6A23C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6A260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 46u, 0x08A40380u>(ctx, &aot_mem) && ctx.pc == 0x08A6A260u) goto L_08A6A260;
    return;
L_08A6A260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A2B4;
      }
      goto L_08A6A274;
    }
L_08A6A274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(716)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6A2B4;
      }
      goto L_08A6A298;
    }
L_08A6A298:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6A2A8u);
    // nop
    goto L_08A68490;
L_08A6A2A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A6A2B4;
L_08A6A2B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A6A2C8u);
    // nop
    goto L_08A69724;
L_08A6A2C8:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A6A2DCu);
    // nop
    goto L_08A68638;
L_08A6A2DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6A30C;
      }
      goto L_08A6A300;
    }
L_08A6A300:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A6A30C;
L_08A6A30C:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6A340;
      }
      goto L_08A6A32C;
    }
L_08A6A32C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A384;
      }
      goto L_08A6A340;
    }
L_08A6A340:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6A350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 213u, 0x08A2F2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A350u) goto L_08A6A350;
    return;
L_08A6A350:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A374;
      }
      goto L_08A6A360;
    }
L_08A6A360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A6A36Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 749u, 0x08A4FF60u>(ctx, &aot_mem) && ctx.pc == 0x08A6A36Cu) goto L_08A6A36C;
    return;
L_08A6A36C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A384;
      }
      goto L_08A6A374;
    }
L_08A6A374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A6A384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 36u, 0x08A50270u>(ctx, &aot_mem) && ctx.pc == 0x08A6A384u) goto L_08A6A384;
    return;
L_08A6A384:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A394:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A6A3CC;
      }
      goto L_08A6A3B8;
    }
L_08A6A3B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6A5C4;
      }
      goto L_08A6A3C4;
    }
L_08A6A3C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A3F4;
      }
      goto L_08A6A3CC;
    }
L_08A6A3CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A460;
      }
      goto L_08A6A3DC;
    }
L_08A6A3DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A4F4;
      }
      goto L_08A6A3EC;
    }
L_08A6A3EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A5C4;
      }
      goto L_08A6A3F4;
    }
L_08A6A3F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A6A400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 413u, 0x08A5A4E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A400u) goto L_08A6A400;
    return;
L_08A6A400:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A5C4;
      }
      goto L_08A6A40C;
    }
L_08A6A40C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4304), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (0u | 133u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6A428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 139u, 0x08A50AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A428u) goto L_08A6A428;
    return;
L_08A6A428:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5092)));
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6A43Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A6A43Cu) goto L_08A6A43C;
    return;
L_08A6A43C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5018))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A5C4;
      }
      goto L_08A6A460;
    }
L_08A6A460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 4096u);
    ctx.gpr[31] = (0x08A6A470u);
    // nop
    goto L_08A698A4;
L_08A6A470:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A4B4;
      }
      goto L_08A6A47C;
    }
L_08A6A47C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6A4A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 46u, 0x08A40380u>(ctx, &aot_mem) && ctx.pc == 0x08A6A4A0u) goto L_08A6A4A0;
    return;
L_08A6A4A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A4F4;
      }
      goto L_08A6A4B4;
    }
L_08A6A4B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(716)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6A4F4;
      }
      goto L_08A6A4D8;
    }
L_08A6A4D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6A4E8u);
    // nop
    goto L_08A68490;
L_08A6A4E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A6A4F4;
L_08A6A4F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A6A508u);
    // nop
    goto L_08A69724;
L_08A6A508:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A6A51Cu);
    // nop
    goto L_08A68638;
L_08A6A51C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6A54C;
      }
      goto L_08A6A540;
    }
L_08A6A540:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A6A54C;
L_08A6A54C:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6A580;
      }
      goto L_08A6A56C;
    }
L_08A6A56C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A5C4;
      }
      goto L_08A6A580;
    }
L_08A6A580:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6A590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 213u, 0x08A2F2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A590u) goto L_08A6A590;
    return;
L_08A6A590:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A5B4;
      }
      goto L_08A6A5A0;
    }
L_08A6A5A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A6A5ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 749u, 0x08A4FF60u>(ctx, &aot_mem) && ctx.pc == 0x08A6A5ACu) goto L_08A6A5AC;
    return;
L_08A6A5AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A5C4;
      }
      goto L_08A6A5B4;
    }
L_08A6A5B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A6A5C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 36u, 0x08A50270u>(ctx, &aot_mem) && ctx.pc == 0x08A6A5C4u) goto L_08A6A5C4;
    return;
L_08A6A5C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A5D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4476)));
    ctx.gpr[4] = (ctx.gpr[4] & 320u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A8D0;
      }
      goto L_08A6A5F8;
    }
L_08A6A5F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4974)));
    ctx.gpr[4] = (ctx.gpr[4] & 16912u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A8D0;
      }
      goto L_08A6A60C;
    }
L_08A6A60C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A8D0;
      }
      goto L_08A6A620;
    }
L_08A6A620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3044)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3044)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6A660;
      }
      goto L_08A6A654;
    }
L_08A6A654:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A6A660;
L_08A6A660:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6A8D0;
      }
      goto L_08A6A67C;
    }
L_08A6A67C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 133u);
    ctx.gpr[31] = (0x08A6A68Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 521u, 0x08A4E778u>(ctx, &aot_mem) && ctx.pc == 0x08A6A68Cu) goto L_08A6A68C;
    return;
L_08A6A68C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A8D0;
      }
      goto L_08A6A698;
    }
L_08A6A698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4004)));
    ctx.gpr[31] = (0x08A6A6ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 460u, 0x08A2BD70u>(ctx, &aot_mem) && ctx.pc == 0x08A6A6ACu) goto L_08A6A6AC;
    return;
L_08A6A6AC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6A6E0;
      }
      goto L_08A6A6D4;
    }
L_08A6A6D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A6A6E0;
L_08A6A6E0:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6A8D0;
      }
      goto L_08A6A6FC;
    }
L_08A6A6FC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] & 12u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A7B4;
      }
      goto L_08A6A714;
    }
L_08A6A714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4315)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A7B4;
      }
      goto L_08A6A728;
    }
L_08A6A728:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(264));
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08A6A740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 123u, 0x08A289D0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A740u) goto L_08A6A740;
    return;
L_08A6A740:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3096)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6A7B4;
      }
      goto L_08A6A754;
    }
L_08A6A754:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(264));
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08A6A76Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 123u, 0x08A289D0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A76Cu) goto L_08A6A76C;
    return;
L_08A6A76C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3096)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6A7B4;
      }
      goto L_08A6A780;
    }
L_08A6A780:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 93u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6A794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 580u, 0x08A4EE70u>(ctx, &aot_mem) && ctx.pc == 0x08A6A794u) goto L_08A6A794;
    return;
L_08A6A794:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A7B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08A6A7CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 392u, 0x08A2B240u>(ctx, &aot_mem) && ctx.pc == 0x08A6A7CCu) goto L_08A6A7CC;
    return;
L_08A6A7CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A8D0;
      }
      goto L_08A6A7DC;
    }
L_08A6A7DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A8D0;
      }
      goto L_08A6A7F4;
    }
L_08A6A7F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A8D0;
      }
      goto L_08A6A814;
    }
L_08A6A814:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6A8D0;
      }
      goto L_08A6A830;
    }
L_08A6A830:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6A8D0;
      }
      goto L_08A6A84C;
    }
L_08A6A84C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6A86Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 469u, 0x08A2BE58u>(ctx, &aot_mem) && ctx.pc == 0x08A6A86Cu) goto L_08A6A86C;
    return;
L_08A6A86C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6A880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 25u, 0x08A2C494u>(ctx, &aot_mem) && ctx.pc == 0x08A6A880u) goto L_08A6A880;
    return;
L_08A6A880:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6A8D0;
      }
      goto L_08A6A8A0;
    }
L_08A6A8A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 93u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6A8B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 580u, 0x08A4EE70u>(ctx, &aot_mem) && ctx.pc == 0x08A6A8B4u) goto L_08A6A8B4;
    return;
L_08A6A8B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4656), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A8D0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A8E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B0EC;
      }
      goto L_08A6A90C;
    }
L_08A6A90C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-15712)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A928:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4992)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6A940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 139u, 0x08A50AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A940u) goto L_08A6A940;
    return;
L_08A6A940:
    ctx.gpr[5] = (0u | 10277u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6A954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A6A954u) goto L_08A6A954;
    return;
L_08A6A954:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A6A968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 18u, 0x08A38214u>(ctx, &aot_mem) && ctx.pc == 0x08A6A968u) goto L_08A6A968;
    return;
L_08A6A968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A6A974;
L_08A6A974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A6A984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 11u, 0x08A38180u>(ctx, &aot_mem) && ctx.pc == 0x08A6A984u) goto L_08A6A984;
    return;
L_08A6A984:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B0EC;
      }
      goto L_08A6A990;
    }
L_08A6A990:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B0EC;
      }
      goto L_08A6A9A8;
    }
L_08A6A9A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4320)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4320), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A9D8;
      }
      goto L_08A6A9C8;
    }
L_08A6A9C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A6A9D8;
L_08A6A9D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6AA0C;
      }
      goto L_08A6AA00;
    }
L_08A6AA00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A6AA0C;
L_08A6AA0C:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6AA40;
      }
      goto L_08A6AA2C;
    }
L_08A6AA2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B0EC;
      }
      goto L_08A6AA40;
    }
L_08A6AA40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 10279u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6AA64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A6AA64u) goto L_08A6AA64;
    return;
L_08A6AA64:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4020), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4320)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4320), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B0EC;
      }
      goto L_08A6AA8C;
    }
L_08A6AA8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4320)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4320), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4322)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AAE8;
      }
      goto L_08A6AAD8;
    }
L_08A6AAD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A6AAE8;
L_08A6AAE8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AB10;
      }
      goto L_08A6AB00;
    }
L_08A6AB00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A6AB10;
L_08A6AB10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 2560u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AB34;
      }
      goto L_08A6AB24;
    }
L_08A6AB24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A6AB34;
L_08A6AB34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4020)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4020), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17302u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6AB7C;
      }
      goto L_08A6AB68;
    }
L_08A6AB68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6ABB0;
      }
      goto L_08A6AB7C;
    }
L_08A6AB7C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 10278u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6AB94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A6AB94u) goto L_08A6AB94;
    return;
L_08A6AB94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6ABB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 448u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B0EC;
      }
      goto L_08A6ABC4;
    }
L_08A6ABC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AC34;
      }
      goto L_08A6ABD8;
    }
L_08A6ABD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 10005u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6ABF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 139u, 0x08A50AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A6ABF0u) goto L_08A6ABF0;
    return;
L_08A6ABF0:
    ctx.gpr[5] = (0u | 95u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6AC00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A6AC00u) goto L_08A6AC00;
    return;
L_08A6AC00:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4300)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4300), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4320)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B0EC;
      }
      goto L_08A6AC1C;
    }
L_08A6AC1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4300)));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4300), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B0EC;
      }
      goto L_08A6AC34;
    }
L_08A6AC34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A6AC40u);
    // nop
    goto L_08A68538;
L_08A6AC40:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 124u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6ACB4;
      }
      goto L_08A6AC54;
    }
L_08A6AC54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AC78;
      }
      goto L_08A6AC68;
    }
L_08A6AC68:
    ctx.gpr[4] = (0u | 124u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6ACA4;
      }
      goto L_08A6AC78;
    }
L_08A6AC78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AC9C;
      }
      goto L_08A6AC8C;
    }
L_08A6AC8C:
    ctx.gpr[4] = (0u | 125u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6ACA4;
      }
      goto L_08A6AC9C;
    }
L_08A6AC9C:
    ctx.gpr[4] = (0u | 126u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08A6ACA4;
L_08A6ACA4:
    ctx.gpr[4] = (0u | 95u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AD0C;
      }
      goto L_08A6ACB4;
    }
L_08A6ACB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6ACD8;
      }
      goto L_08A6ACC8;
    }
L_08A6ACC8:
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AD04;
      }
      goto L_08A6ACD8;
    }
L_08A6ACD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6ACFC;
      }
      goto L_08A6ACEC;
    }
L_08A6ACEC:
    ctx.gpr[4] = (0u | 128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AD04;
      }
      goto L_08A6ACFC;
    }
L_08A6ACFC:
    ctx.gpr[4] = (0u | 129u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08A6AD04;
L_08A6AD04:
    ctx.gpr[4] = (0u | 96u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_08A6AD0C;
L_08A6AD0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B0EC;
      }
      goto L_08A6AD18;
    }
L_08A6AD18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6AD30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 139u, 0x08A50AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AD30u) goto L_08A6AD30;
    return;
L_08A6AD30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6AD40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A6AD40u) goto L_08A6AD40;
    return;
L_08A6AD40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4320)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B0EC;
      }
      goto L_08A6AD50;
    }
L_08A6AD50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4300)));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4300), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B0EC;
      }
      goto L_08A6AD68;
    }
L_08A6AD68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4320)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4320), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6ADB4;
      }
      goto L_08A6ADA4;
    }
L_08A6ADA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A6ADB4;
L_08A6ADB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A6ADC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A6ADC8u) goto L_08A6ADC8;
    return;
L_08A6ADC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B0EC;
      }
      goto L_08A6ADD0;
    }
L_08A6ADD0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4320)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4320), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 10287u);
    ctx.gpr[6] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6AE00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A6AE00u) goto L_08A6AE00;
    return;
L_08A6AE00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4004)));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A6AE1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 480u, 0x08A4E2C8u>(ctx, &aot_mem) && ctx.pc == 0x08A6AE1Cu) goto L_08A6AE1C;
    return;
L_08A6AE1C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B0EC;
      }
      goto L_08A6AE28;
    }
L_08A6AE28:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4020), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B0EC;
      }
      goto L_08A6AE48;
    }
L_08A6AE48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4320)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4320), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4322)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4296)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4296), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AEA4;
      }
      goto L_08A6AE94;
    }
L_08A6AE94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A6AEA4;
L_08A6AEA4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AECC;
      }
      goto L_08A6AEBC;
    }
L_08A6AEBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A6AECC;
L_08A6AECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 2560u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AEF0;
      }
      goto L_08A6AEE0;
    }
L_08A6AEE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A6AEF0;
L_08A6AEF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4020)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4020), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17302u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6AF38;
      }
      goto L_08A6AF24;
    }
L_08A6AF24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AF68;
      }
      goto L_08A6AF38;
    }
L_08A6AF38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6AF4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A6AF4Cu) goto L_08A6AF4C;
    return;
L_08A6AF4C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4292)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4292), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6AF68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 448u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B0EC;
      }
      goto L_08A6AF7C;
    }
L_08A6AF7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AFD4;
      }
      goto L_08A6AF90;
    }
L_08A6AF90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 10005u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6AFA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 139u, 0x08A50AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A6AFA8u) goto L_08A6AFA8;
    return;
L_08A6AFA8:
    ctx.gpr[5] = (0u | 95u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6AFB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A6AFB8u) goto L_08A6AFB8;
    return;
L_08A6AFB8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4300)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4300), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6AFD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A6AFE0u);
    // nop
    goto L_08A68538;
L_08A6AFE0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 124u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6B054;
      }
      goto L_08A6AFF4;
    }
L_08A6AFF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B018;
      }
      goto L_08A6B008;
    }
L_08A6B008:
    ctx.gpr[4] = (0u | 124u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B044;
      }
      goto L_08A6B018;
    }
L_08A6B018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B03C;
      }
      goto L_08A6B02C;
    }
L_08A6B02C:
    ctx.gpr[4] = (0u | 125u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B044;
      }
      goto L_08A6B03C;
    }
L_08A6B03C:
    ctx.gpr[4] = (0u | 126u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_08A6B044;
L_08A6B044:
    ctx.gpr[4] = (0u | 95u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B0AC;
      }
      goto L_08A6B054;
    }
L_08A6B054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B078;
      }
      goto L_08A6B068;
    }
L_08A6B068:
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B0A4;
      }
      goto L_08A6B078;
    }
L_08A6B078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4492)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B09C;
      }
      goto L_08A6B08C;
    }
L_08A6B08C:
    ctx.gpr[4] = (0u | 128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B0A4;
      }
      goto L_08A6B09C;
    }
L_08A6B09C:
    ctx.gpr[4] = (0u | 129u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_08A6B0A4;
L_08A6B0A4:
    ctx.gpr[4] = (0u | 96u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08A6B0AC;
L_08A6B0AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B0EC;
      }
      goto L_08A6B0B8;
    }
L_08A6B0B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6B0D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 139u, 0x08A50AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B0D0u) goto L_08A6B0D0;
    return;
L_08A6B0D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6B0E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 461u, 0x08A4DFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A6B0E0u) goto L_08A6B0E0;
    return;
L_08A6B0E0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4300)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4300), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A6B0EC;
L_08A6B0EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B0FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B78C;
      }
      goto L_08A6B130;
    }
L_08A6B130:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A6B2C0;
      }
      goto L_08A6B140;
    }
L_08A6B140:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A6B3BC;
      }
      goto L_08A6B148;
    }
L_08A6B148:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A6B48C;
      }
      goto L_08A6B150;
    }
L_08A6B150:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A6B648;
      }
      goto L_08A6B158;
    }
L_08A6B158:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A6B6D0;
      }
      goto L_08A6B160;
    }
L_08A6B160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4304), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4302)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4302), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B208;
      }
      goto L_08A6B184;
    }
L_08A6B184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[5] = (ctx.gpr[5] | 128u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4304), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4300)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B1C0;
      }
      goto L_08A6B1A4;
    }
L_08A6B1A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4304), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4300)));
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4300), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A6B1C0;
L_08A6B1C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B1E4;
      }
      goto L_08A6B1D4;
    }
L_08A6B1D4:
    ctx.gpr[4] = (0u | 10535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B1EC;
      }
      goto L_08A6B1E4;
    }
L_08A6B1E4:
    ctx.gpr[4] = (0u | 10541u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08A6B1EC;
L_08A6B1EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A6B200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A6B200u) goto L_08A6B200;
    return;
L_08A6B200:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B24C;
      }
      goto L_08A6B208;
    }
L_08A6B208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4300)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B238;
      }
      goto L_08A6B21C;
    }
L_08A6B21C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4304), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4300)));
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4300), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A6B238;
L_08A6B238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5092)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A6B24Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A6B24Cu) goto L_08A6B24C;
    return;
L_08A6B24C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6B25Cu);
    // nop
    goto L_08A68CAC;
L_08A6B25C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4300)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B27C;
      }
      goto L_08A6B26C;
    }
L_08A6B26C:
    ctx.gpr[4] = (0u | 10279u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B284;
      }
      goto L_08A6B27C;
    }
L_08A6B27C:
    ctx.gpr[4] = (0u | 10287u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_08A6B284;
L_08A6B284:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6B29Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A6B29Cu) goto L_08A6B29C;
    return;
L_08A6B29C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5018))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B78C;
      }
      goto L_08A6B2C0;
    }
L_08A6B2C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3976)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(804)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A6B2F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 480u, 0x08A4E2C8u>(ctx, &aot_mem) && ctx.pc == 0x08A6B2F4u) goto L_08A6B2F4;
    return;
L_08A6B2F4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B78C;
      }
      goto L_08A6B300;
    }
L_08A6B300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4302)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4302), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B358;
      }
      goto L_08A6B324;
    }
L_08A6B324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B348;
      }
      goto L_08A6B338;
    }
L_08A6B338:
    ctx.gpr[4] = (0u | 10535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B364;
      }
      goto L_08A6B348;
    }
L_08A6B348:
    ctx.gpr[4] = (0u | 10541u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B364;
      }
      goto L_08A6B358;
    }
L_08A6B358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5092)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_08A6B364;
L_08A6B364:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6B37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 124u, 0x08A30D68u>(ctx, &aot_mem) && ctx.pc == 0x08A6B37Cu) goto L_08A6B37C;
    return;
L_08A6B37C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4300)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B3A4;
      }
      goto L_08A6B38C;
    }
L_08A6B38C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A6B3A4;
L_08A6B3A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B78C;
      }
      goto L_08A6B3BC;
    }
L_08A6B3BC:
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3124), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B3E8;
      }
      goto L_08A6B3D8;
    }
L_08A6B3D8:
    ctx.gpr[4] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B3F0;
      }
      goto L_08A6B3E8;
    }
L_08A6B3E8:
    ctx.gpr[4] = (0u | 512u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08A6B3F0;
L_08A6B3F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B48C;
      }
      goto L_08A6B404;
    }
L_08A6B404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08A6B414u);
    // nop
    goto L_08A698A4;
L_08A6B414:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B44C;
      }
      goto L_08A6B420;
    }
L_08A6B420:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B48C;
      }
      goto L_08A6B44C;
    }
L_08A6B44C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(716)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6B48C;
      }
      goto L_08A6B470;
    }
L_08A6B470:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6B480u);
    // nop
    goto L_08A68490;
L_08A6B480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A6B48C;
L_08A6B48C:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3124), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A6B4ACu);
    // nop
    goto L_08A68638;
L_08A6B4AC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B4CC;
      }
      goto L_08A6B4BC;
    }
L_08A6B4BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4708)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4708), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A6B4CC;
L_08A6B4CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(724)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6B504;
      }
      goto L_08A6B4F0;
    }
L_08A6B4F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4290)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4290), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A6B504;
L_08A6B504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
          goto L_08A6B538;
      }
      goto L_08A6B52C;
    }
L_08A6B52C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A6B538;
L_08A6B538:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6B56C;
      }
      goto L_08A6B558;
    }
L_08A6B558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B78C;
      }
      goto L_08A6B56C;
    }
L_08A6B56C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B5FC;
      }
      goto L_08A6B58C;
    }
L_08A6B58C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4208)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B5B0;
      }
      goto L_08A6B5A0;
    }
L_08A6B5A0:
    ctx.gpr[4] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B5B8;
      }
      goto L_08A6B5B0;
    }
L_08A6B5B0:
    ctx.gpr[4] = (0u | 512u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08A6B5B8;
L_08A6B5B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A6B5C8u);
    // nop
    goto L_08A698A4;
L_08A6B5C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B5E8;
      }
      goto L_08A6B5D4;
    }
L_08A6B5D4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    goto L_08A6B5E8;
L_08A6B5E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A6B5F4u);
    // nop
    goto L_08A68574;
L_08A6B5F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B78C;
      }
      goto L_08A6B5FC;
    }
L_08A6B5FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6B60Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 213u, 0x08A2F2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B60Cu) goto L_08A6B60C;
    return;
L_08A6B60C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4304)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B630;
      }
      goto L_08A6B61C;
    }
L_08A6B61C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A6B628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 749u, 0x08A4FF60u>(ctx, &aot_mem) && ctx.pc == 0x08A6B628u) goto L_08A6B628;
    return;
L_08A6B628:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B78C;
      }
      goto L_08A6B630;
    }
L_08A6B630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A6B640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 36u, 0x08A50270u>(ctx, &aot_mem) && ctx.pc == 0x08A6B640u) goto L_08A6B640;
    return;
L_08A6B640:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B78C;
      }
      goto L_08A6B648;
    }
L_08A6B648:
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3124), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6B694;
      }
      goto L_08A6B678;
    }
L_08A6B678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A6B694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 161u, 0x08A3D214u>(ctx, &aot_mem) && ctx.pc == 0x08A6B694u) goto L_08A6B694;
    return;
L_08A6B694:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 683u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A6B6B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 144u, 0x08A28C04u>(ctx, &aot_mem) && ctx.pc == 0x08A6B6B4u) goto L_08A6B6B4;
    return;
L_08A6B6B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A6B6C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 155u, 0x08A31130u>(ctx, &aot_mem) && ctx.pc == 0x08A6B6C8u) goto L_08A6B6C8;
    return;
L_08A6B6C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B78C;
      }
      goto L_08A6B6D0;
    }
L_08A6B6D0:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3124), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6B6ECu);
    // nop
    goto L_08A69724;
L_08A6B6EC:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 683u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A6B708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 144u, 0x08A28C04u>(ctx, &aot_mem) && ctx.pc == 0x08A6B708u) goto L_08A6B708;
    return;
L_08A6B708:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6B738;
      }
      goto L_08A6B72C;
    }
L_08A6B72C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A6B738;
L_08A6B738:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6B76C;
      }
      goto L_08A6B758;
    }
L_08A6B758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4312)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B78C;
      }
      goto L_08A6B76C;
    }
L_08A6B76C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6B77Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 213u, 0x08A2F2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A6B77Cu) goto L_08A6B77C;
    return;
L_08A6B77C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A6B78Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 36u, 0x08A50270u>(ctx, &aot_mem) && ctx.pc == 0x08A6B78Cu) goto L_08A6B78C;
    return;
L_08A6B78C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B79C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B7A8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B7B0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B7B8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B7C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A6B848;
      }
      goto L_08A6B7D8;
    }
L_08A6B7D8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[6] << 3u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A6B84C;
      }
      goto L_08A6B7F0;
    }
L_08A6B7F0:
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    goto L_08A6B7F4;
L_08A6B7F4:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A6B810;
      }
      goto L_08A6B808;
    }
L_08A6B808:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A6B824;
      }
      goto L_08A6B810;
    }
L_08A6B810:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B824;
      }
      goto L_08A6B81C;
    }
L_08A6B81C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
      if (branch_taken) {
          goto L_08A6B824;
      }
      goto L_08A6B824;
    }
L_08A6B824:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A6B7F4;
      }
      goto L_08A6B840;
    }
L_08A6B840:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A6B850;
      }
      goto L_08A6B848;
    }
L_08A6B848:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    goto L_08A6B84C;
L_08A6B84C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_08A6B850;
L_08A6B850:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B860;
      }
      goto L_08A6B858;
    }
L_08A6B858:
    ctx.gpr[31] = (0x08A6B860u);
    ctx.gpr[5] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 99u, 0x08A84954u>(ctx, &aot_mem) && ctx.pc == 0x08A6B860u) goto L_08A6B860;
    return;
L_08A6B860:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B870:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A6B8AC;
      }
      goto L_08A6B894;
    }
L_08A6B894:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(13)));
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] << 3u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A6B8B0;
      }
      goto L_08A6B8AC;
    }
L_08A6B8AC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08A6B8B0;
L_08A6B8B0:
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08A6B8D0;
    }
    goto L_08A6B8B8;
L_08A6B8B8:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08A6B9F0;
    }
    goto L_08A6B8C0;
L_08A6B8C0:
    ctx.gpr[31] = (0x08A6B8C8u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 142u, 0x08A84CCCu>(ctx, &aot_mem) && ctx.pc == 0x08A6B8C8u) goto L_08A6B8C8;
    return;
L_08A6B8C8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_08A6B9EC;
      }
      goto L_08A6B8D0;
    }
L_08A6B8D0:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B968;
      }
      goto L_08A6B8D8;
    }
L_08A6B8D8:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08A6B9F0;
    }
    goto L_08A6B8E0;
L_08A6B8E0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A6B94C;
      }
      goto L_08A6B8E8;
    }
L_08A6B8E8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A6B948;
      }
      goto L_08A6B8FC;
    }
L_08A6B8FC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A6B918;
      }
      goto L_08A6B910;
    }
L_08A6B910:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A6B92C;
      }
      goto L_08A6B918;
    }
L_08A6B918:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B92C;
      }
      goto L_08A6B924;
    }
L_08A6B924:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A6B92C;
      }
      goto L_08A6B92C;
    }
L_08A6B92C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A6B8FC;
      }
      goto L_08A6B948;
    }
L_08A6B948:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_08A6B94C;
L_08A6B94C:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08A6B958u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 129u, 0x08A84BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A6B958u) goto L_08A6B958;
    return;
L_08A6B958:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08A6B9F0;
    }
    goto L_08A6B960;
L_08A6B960:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_08A6B9EC;
      }
      goto L_08A6B968;
    }
L_08A6B968:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08A6B9F0;
    }
    goto L_08A6B970;
L_08A6B970:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A6B9E4;
      }
      goto L_08A6B978;
    }
L_08A6B978:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
        goto L_08A6B9E4;
    }
    goto L_08A6B98C;
L_08A6B98C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_08A6B990;
L_08A6B990:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A6B9AC;
      }
      goto L_08A6B9A4;
    }
L_08A6B9A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A6B9C0;
      }
      goto L_08A6B9AC;
    }
L_08A6B9AC:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B9C0;
      }
      goto L_08A6B9B8;
    }
L_08A6B9B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A6B9C0;
      }
      goto L_08A6B9C0;
    }
L_08A6B9C0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A6B990;
      }
      goto L_08A6B9DC;
    }
L_08A6B9DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_08A6B9E4;
L_08A6B9E4:
    ctx.gpr[31] = (0x08A6B9ECu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 160u, 0x08A84E18u>(ctx, &aot_mem) && ctx.pc == 0x08A6B9ECu) goto L_08A6B9EC;
    return;
L_08A6B9EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08A6B9F0;
L_08A6B9F0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A6BA14;
      }
      goto L_08A6B9F8;
    }
L_08A6B9F8:
    ctx.gpr[31] = (0x08A6BA00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 162u, 0x08A84E38u>(ctx, &aot_mem) && ctx.pc == 0x08A6BA00u) goto L_08A6BA00;
    return;
L_08A6BA00:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BA14:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BA28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A6BA5C;
      }
      goto L_08A6BA40;
    }
L_08A6BA40:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A6BA6C;
      }
      goto L_08A6BA54;
    }
L_08A6BA54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A6BA80;
      }
      goto L_08A6BA5C;
    }
L_08A6BA5C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BA6C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BA80;
      }
      goto L_08A6BA78;
    }
L_08A6BA78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A6BA80;
      }
      goto L_08A6BA80;
    }
L_08A6BA80:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A6BA8Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 213u, 0x08A85418u>(ctx, &aot_mem) && ctx.pc == 0x08A6BA8Cu) goto L_08A6BA8C;
    return;
L_08A6BA8C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BA9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08A6BAC8;
    }
    goto L_08A6BAB0;
L_08A6BAB0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08A6BAC8;
    }
    goto L_08A6BAC0;
L_08A6BAC0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BAC8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A6BB10;
      }
      goto L_08A6BAD0;
    }
L_08A6BAD0:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A6BAF4;
      }
      goto L_08A6BAE8;
    }
L_08A6BAE8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A6BB08;
      }
      goto L_08A6BAF4;
    }
L_08A6BAF4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BB08;
      }
      goto L_08A6BB00;
    }
L_08A6BB00:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    goto L_08A6BB08;
L_08A6BB08:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BB10:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BB1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A6BB48;
      }
      goto L_08A6BB34;
    }
L_08A6BB34:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BB48:
    ctx.gpr[31] = (0x08A6BB50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 326u, 0x08A71AD0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BB50u) goto L_08A6BB50;
    return;
L_08A6BB50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BB78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BBFC;
      }
      goto L_08A6BB9C;
    }
L_08A6BB9C:
    ctx.gpr[31] = (0x08A6BBA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 326u, 0x08A71AD0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BBA4u) goto L_08A6BBA4;
    return;
L_08A6BBA4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A6BC10;
      }
      goto L_08A6BBD4;
    }
L_08A6BBD4:
    ctx.gpr[8] = (ctx.gpr[16] + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (ctx.gpr[16] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[11]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[11] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6BC3C;
      }
      goto L_08A6BBFC;
    }
L_08A6BBFC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BC10:
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[16] + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (ctx.gpr[6] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[16] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[4] = (ctx.gpr[11] + ctx.gpr[4]);
    goto L_08A6BC3C;
L_08A6BC3C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
        goto L_08A6BC68;
    }
    goto L_08A6BC5C;
L_08A6BC5C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A6BC68;
      }
      goto L_08A6BC68;
    }
L_08A6BC68:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BC78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A6BCC4;
      }
      goto L_08A6BC94;
    }
L_08A6BC94:
    ctx.gpr[31] = (0x08A6BC9Cu);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 326u, 0x08A71AD0u>(ctx, &aot_mem) && ctx.pc == 0x08A6BC9Cu) goto L_08A6BC9C;
    return;
L_08A6BC9C:
    ctx.gpr[4] = (0u | 100u);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A6BCDC;
      }
      goto L_08A6BCBC;
    }
L_08A6BCBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BD10;
      }
      goto L_08A6BCC4;
    }
L_08A6BCC4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BCDC:
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_08A6BCE0;
L_08A6BCE0:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[17] ? 1u : 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_08A6BD04;
    }
    goto L_08A6BCF4;
L_08A6BCF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6BD10;
      }
      goto L_08A6BD04;
    }
L_08A6BD04:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A6BCE0;
      }
      goto L_08A6BD10;
    }
L_08A6BD10:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BD28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_08A6BD64;
    }
    goto L_08A6BD3C;
L_08A6BD3C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_08A6BD64;
    }
    goto L_08A6BD4C;
L_08A6BD4C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A6BD84;
      }
      goto L_08A6BD58;
    }
L_08A6BD58:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[2]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[2]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BD64:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
        goto L_08A6BD88;
    }
    goto L_08A6BD70;
L_08A6BD70:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
        goto L_08A6BD88;
    }
    goto L_08A6BD80;
L_08A6BD80:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    goto L_08A6BD84;
L_08A6BD84:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    goto L_08A6BD88;
L_08A6BD88:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BD90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A6BDA0;
    }
    goto L_08A6BDA0;
L_08A6BDA0:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
        goto L_08A6BDE8;
    }
    goto L_08A6BDB8;
L_08A6BDB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (49024u << 16u);
      if (branch_taken) {
          goto L_08A6BDF0;
      }
      goto L_08A6BDD4;
    }
L_08A6BDD4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21308)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    goto L_08A6BDE8;
L_08A6BDE8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BDF0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[2]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BE04:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A6BE50;
      }
      goto L_08A6BE1C;
    }
L_08A6BE1C:
    ctx.gpr[6] = (0u | 0u);
    goto L_08A6BE20;
L_08A6BE20:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A6BE40;
      }
      goto L_08A6BE2C;
    }
L_08A6BE2C:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BE40:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A6BE20;
      }
      goto L_08A6BE50;
    }
L_08A6BE50:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BE58:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BE84;
      }
      goto L_08A6BE6C;
    }
L_08A6BE6C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A6BE8C;
      }
      goto L_08A6BE78;
    }
L_08A6BE78:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A6BE6C;
      }
      goto L_08A6BE84;
    }
L_08A6BE84:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BE8C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BE94:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21308)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BED0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[7] = (0u | 3u);
      if (branch_taken) {
          goto L_08A6BF24;
      }
      goto L_08A6BEFC;
    }
L_08A6BEFC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (0u | 3u);
      if (branch_taken) {
          goto L_08A6BF24;
      }
      goto L_08A6BF08;
    }
L_08A6BF08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A6BF1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A6BE94;
L_08A6BF1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 3u, 0x08A6C014u>(ctx, &aot_mem); return;
      }
      goto L_08A6BF24;
    }
L_08A6BF24:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A6BF60;
      }
      goto L_08A6BF2C;
    }
L_08A6BF2C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A6BF60;
      }
      goto L_08A6BF38;
    }
L_08A6BF38:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BF60;
      }
      goto L_08A6BF4C;
    }
L_08A6BF4C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (0x08A6BF58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A6BE94;
L_08A6BF58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 3u, 0x08A6C014u>(ctx, &aot_mem); return;
      }
      goto L_08A6BF60;
    }
L_08A6BF60:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
        goto L_08A6BF74;
    }
    goto L_08A6BF68;
L_08A6BF68:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 1u, 0x08A6C000u>(ctx, &aot_mem); return;
      }
      goto L_08A6BF70;
    }
L_08A6BF70:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    goto L_08A6BF74;
L_08A6BF74:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[5] = (0u | 2u);
        (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 1u, 0x08A6C000u>(ctx, &aot_mem); return;
    }
    goto L_08A6BF84;
L_08A6BF84:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21308)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A6BFE8;
      }
      goto L_08A6BFA8;
    }
L_08A6BFA8:
    ctx.gpr[4] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A6BFE0;
    }
    goto L_08A6BFD0;
L_08A6BFD0:
    ctx.gpr[31] = (0x08A6BFD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A6BE94;
L_08A6BFD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 3u, 0x08A6C014u>(ctx, &aot_mem); return;
      }
      goto L_08A6BFE0;
    }
L_08A6BFE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 3u, 0x08A6C014u>(ctx, &aot_mem); return;
      }
      goto L_08A6BFE8;
    }
L_08A6BFE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 3u, 0x08A6C014u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 1u, 0x08A6C000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0153(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0153_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_153(Runtime &runtime) {
    runtime.register_generated_unit(153u, 0x08A68000u, 16384u, &recomp_unit_0153, &recomp_unit_0153_entry);
    runtime.register_function(0x08A68000u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6800Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6801Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68024u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6803Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68054u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68064u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68084u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68094u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A680A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A680BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A680D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A680FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68114u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68128u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68140u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68158u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68168u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68174u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68184u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68190u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68198u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A681C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A681E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6820Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68228u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6823Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6825Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68268u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6827Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68290u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A682B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A682CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A682F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68300u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68320u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68334u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68344u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68354u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68368u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68380u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68390u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68398u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A683ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A683C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A683D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A683E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6843Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68490u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A684ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A684B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A684DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A684F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6851Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68528u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68538u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68560u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68568u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68574u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68598u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A685ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A685C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A685CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A685E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A685F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68614u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68620u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68628u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68638u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68690u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A686B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A686E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A686ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6871Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68730u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6873Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6874Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68770u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68780u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6879Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A687B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A687C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A687ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6880Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6882Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6883Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68848u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6885Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68870u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68888u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6889Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A688B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A688C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68924u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68964u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68984u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68990u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A689A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A689C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A689E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A689E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A689F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68A28u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68A30u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68A5Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68A78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68AACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68AC0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68AE4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68AF4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B3Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B70u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B80u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B94u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68BA4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68BB8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68BC8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68BDCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C00u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C2Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C34u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C58u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C84u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68CACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D14u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D20u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D8Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D94u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68DA4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68DCCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68DE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E44u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E58u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E64u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68EB4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68ECCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F14u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F1Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F2Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F34u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F54u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F80u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68FA8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68FB4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68FD0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68FE8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68FFCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69008u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69018u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69020u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69034u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69048u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6905Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69084u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6909Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A690C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A690D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A690F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69104u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69120u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69138u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6914Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69158u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69168u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69170u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69184u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69198u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A691A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A691BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A691D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A691E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A691F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69208u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69220u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69248u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6925Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69284u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69290u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A692ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A692C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A692D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A692E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A692F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69304u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69330u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69358u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69364u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69380u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69398u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A693ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A693B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A693C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A693D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A693ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69404u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6940Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69418u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69434u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6944Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69464u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6946Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69484u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A694A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A694B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69504u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69538u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69568u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A695ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A695B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A695E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69600u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6960Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6962Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6965Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69680u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69698u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A696C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A696E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A696F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A696F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69708u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69710u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69724u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69760u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69790u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A697B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A697F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69808u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6982Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69840u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69854u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6985Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69868u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6987Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69888u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69898u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A698A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A698D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A698E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A698F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A698FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6990Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6991Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69924u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69934u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69944u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69954u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69964u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6996Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69980u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69990u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A699B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A699C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A699D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A699DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A699F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A2Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A40u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A54u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A64u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A90u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69AC0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B00u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B38u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B50u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B88u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69BA8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69BC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69BD8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69BE4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69BFCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C08u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C20u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C38u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C60u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C70u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69CA0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69CE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D4Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D64u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D80u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69DA4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69DB8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69DCCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69DE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69DF0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E08u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E1Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E38u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E50u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E60u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E70u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E94u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69EA0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69EA8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69EB8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69EC8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69ED0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69EE8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F08u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F28u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F34u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F4Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F8Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F9Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69FA4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69FB4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69FC0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69FECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A010u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A020u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A02Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A05Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A07Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A09Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A0C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A0CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A0ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A100u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A110u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A120u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A12Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A134u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A144u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A154u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A178u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A184u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A18Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A19Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A1ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A1B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A1C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A1CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A1E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A1FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A220u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A230u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A23Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A260u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A274u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A298u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A2A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A2B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A2C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A2DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A300u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A30Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A32Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A340u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A350u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A360u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A36Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A374u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A384u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A394u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A3B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A3C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A3CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A3DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A3ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A3F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A400u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A40Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A428u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A43Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A460u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A470u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A47Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A4A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A4B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A4D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A4E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A4F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A508u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A51Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A540u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A54Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A56Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A580u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A590u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A5A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A5ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A5B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A5C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A5D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A5F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A60Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A620u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A654u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A660u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A67Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A68Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A698u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A6ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A6D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A6E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A6FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A714u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A728u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A740u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A754u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A76Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A780u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A794u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A7B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A7CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A7DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A7F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A814u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A830u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A84Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A86Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A880u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A8A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A8B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A8D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A8E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A90Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A928u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A940u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A954u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A968u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A974u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A984u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A990u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A9A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A9C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A9D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA00u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA0Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA2Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA40u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA64u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA8Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AAD8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AAE8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB00u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB24u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB34u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB68u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB94u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ABB0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ABC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ABD8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ABF0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC00u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC1Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC34u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC40u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC54u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC68u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC8Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC9Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ACA4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ACB4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ACC8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ACD8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ACECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ACFCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD0Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD30u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD40u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD50u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD68u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ADA4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ADB4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ADC8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ADD0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE00u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE1Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE28u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE48u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE94u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AEA4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AEBCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AECCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AEE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AEF0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF24u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF38u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF4Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF68u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF90u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AFA8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AFB8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AFD4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AFE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AFF4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B008u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B018u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B02Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B03Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B044u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B054u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B068u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B078u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B08Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B09Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B0A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B0ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B0B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B0D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B0E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B0ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B0FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B130u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B140u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B148u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B150u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B158u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B160u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B184u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B1A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B1C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B1D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B1E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B1ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B200u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B208u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B21Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B238u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B24Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B25Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B26Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B27Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B284u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B29Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B2C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B2F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B300u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B324u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B338u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B348u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B358u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B364u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B37Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B38Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B3A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B3BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B3D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B3E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B3F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B404u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B414u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B420u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B44Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B470u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B480u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B48Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B4ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B4BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B4CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B4F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B504u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B52Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B538u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B558u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B56Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B58Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B60Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B61Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B628u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B630u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B640u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B648u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B678u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B694u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B6B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B6C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B6D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B6ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B708u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B72Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B738u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B758u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B76Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B77Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B78Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B79Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B7A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B7B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B7B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B7C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B7D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B7F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B7F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B808u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B810u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B81Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B824u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B840u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B848u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B84Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B850u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B858u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B860u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B870u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B894u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B910u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B918u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B924u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B92Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B948u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B94Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B958u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B960u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B968u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B970u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B978u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B98Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B990u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B9A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B9ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B9B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B9C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B9DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B9E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B9ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B9F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B9F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA00u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA14u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA28u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA40u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA54u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA5Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA6Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA80u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA8Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA9Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BAB0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BAC0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BAC8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BAD0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BAE8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BAF4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB00u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB08u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB1Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB34u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB48u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB50u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB9Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BBA4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BBD4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BBFCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC3Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC5Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC68u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC94u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC9Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BCBCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BCC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BCDCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BCE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BCF4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD28u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD3Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD4Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD58u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD64u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD70u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD80u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD84u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD88u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD90u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BDA0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BDB8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BDD4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BDE8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BDF0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE1Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE20u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE2Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE40u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE50u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE58u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE6Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE84u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE8Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE94u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BED0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BEFCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF08u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF1Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF24u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF2Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF38u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF4Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF58u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF60u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF68u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF70u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF74u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF84u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BFA8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BFD0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BFD8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BFE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BFE8u, &recomp_unit_0153, "recomp_unit_0153");
}
} // namespace psprecomp

#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0016[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 4, 5, 0, 0, 6, 7, 0, 0, 0, 0,
    0, 8, 0, 9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 0, 14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 0, 0, 0, 20, 0, 0,
    0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 24, 0, 0, 0, 0, 25, 0, 26, 0, 27, 28, 0, 0, 0, 29, 0, 0,
    0, 0, 0, 30, 0, 31, 0, 0, 32, 0, 33, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 38, 39, 0,
    40, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0,
    0, 0, 46, 0, 47, 0, 48, 0, 49, 50, 0, 51, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59,
    0, 0, 60, 0, 61, 0, 0, 62, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68,
    0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 81, 0, 82, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0,
    87, 0, 88, 89, 0, 90, 0, 91, 0, 0, 92, 0, 0, 0, 93, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 98,
    99, 0, 100, 0, 101, 0, 102, 0, 0, 103, 0, 0, 0, 0, 104, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 116,
    0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 124, 0,
    0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 130, 0, 0, 0, 0, 131, 0, 132, 0, 0, 133, 0, 134, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 135, 0, 0, 0, 0, 136, 0, 137, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 150,
    0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 154, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 158, 0, 159,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0,
    161, 162, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 170, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0,
    0, 175, 0, 0, 0, 0, 176, 0, 0, 177, 0, 178, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0,
    0, 0, 183, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 187, 0, 188, 0, 189, 190, 0, 191, 0, 192, 0,
    193, 0, 194, 0, 195, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 208, 0, 209,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 216, 0, 217, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 222,
    0, 0, 223, 0, 224, 0, 0, 0, 0, 225, 226, 0, 227, 0, 0, 228, 0, 229, 230, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0,
    233, 0, 234, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0,
    240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 246, 0, 0,
    0, 0, 247, 0, 248, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 253, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 259,
    0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 263, 0, 264, 0, 0, 0, 265, 0, 0, 266, 0,
    0, 0, 0, 267, 0, 0, 268, 0, 269, 0, 0, 270, 0, 271, 0, 0, 0, 0, 272, 0, 0, 273, 0, 274, 0, 0, 275, 0, 0, 0, 0, 276,
    0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 279, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0,
    0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0,
    290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 293, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 0, 0, 298, 0,
    299, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0,
    0, 0, 0, 304, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 312, 0, 313, 0, 0, 0, 0, 314, 0, 0,
    0, 0, 0, 315, 0, 0, 316, 0, 317, 0, 318, 319, 0, 320, 0, 0, 321, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 324, 0, 325, 0, 326,
    0, 0, 0, 327, 328, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0,
    0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 337, 0, 338, 0, 0, 0, 0, 339, 340, 0, 0,
    341, 0, 0, 0, 342, 343, 0, 0, 344, 0, 345, 0, 346, 0, 347, 0, 348, 0, 349, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 367, 0, 368, 0, 369,
    0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 377, 0, 378,
    0, 379, 0, 380, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385,
    0, 386, 0, 387, 0, 388, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0,
    0, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 0, 0,
    399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 406,
    0, 0, 0, 407, 0, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0,
    413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0,
    0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0,
    0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0,
    0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0,
    0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0,
    0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0,
    447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 453,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 458, 0, 0, 0, 0, 0, 0, 459,
    0, 0, 0, 460, 0, 0, 0, 461, 462, 0, 463, 0, 464, 0, 465, 0, 0, 466, 0, 467, 0, 468, 0, 469, 0, 0, 470, 0, 471, 0, 0, 472,
    0, 0, 473, 0, 474, 0, 475, 0, 0, 476, 0, 477, 0, 478, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0, 482, 0, 483, 0,
    484, 0, 485, 0, 486, 0, 487, 0, 488, 0, 0, 0, 489, 0, 490, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 493, 0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 500, 0,
    0, 0, 501, 0, 0, 502, 0, 503, 0, 504, 0, 505, 0, 0, 506, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0,
    509, 0, 510, 0, 0, 511, 0, 512, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0,
    0, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 524, 0, 0, 525, 0, 0, 0, 526, 0,
    0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 535,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 0, 541, 0, 0,
    542, 543, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 546, 0,
    0, 0, 0, 0, 547, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 551,
    0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0,
    0, 0, 556, 0, 0, 0, 557, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 560, 0, 0, 561, 562, 0, 0, 0, 0, 0, 0, 563, 0, 0,
    0, 0, 0, 564, 0, 0, 0, 0, 565, 566, 0, 0, 567, 0, 0, 0, 568, 569, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 572, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 574, 0, 575, 0, 576, 0, 577, 0, 0, 578, 0, 579, 0, 0, 580, 581, 0, 582, 0, 583, 0, 0,
    584, 585, 0, 586, 0, 587, 0, 0, 588, 0, 0, 0, 589, 0, 590, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0,
    0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    598, 0, 599, 0, 600, 0, 0, 601, 0, 602, 0, 0, 603, 0, 0, 604, 0, 605, 0, 0, 606, 0, 607, 0, 0, 608, 0, 609, 0, 0, 610, 0,
    611, 0, 0, 612, 0, 0, 613, 0, 614, 0, 0, 615, 0, 0, 616, 0, 617, 0, 618, 0, 619, 0, 620, 621, 0, 622, 0, 623, 0, 0, 624, 0,
    0, 625, 0, 626, 0, 0, 0, 627, 0, 0, 628, 0, 629, 0, 630, 0, 631, 0, 632, 633, 0, 634, 0, 635, 0, 0, 636, 0, 0, 637, 0, 638,
    0, 0, 639, 0, 0, 640, 0, 641, 0, 0, 642, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 644, 0, 645, 0, 0, 646, 0, 647, 0, 0, 0,
    648, 0, 649, 0, 0, 650, 0, 651, 652, 653, 0, 654, 0, 655, 0, 0, 656, 0, 0, 657, 0, 658, 0, 0, 0, 659, 0, 0, 660, 0, 661, 0,
    0, 662, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 664, 0, 665, 666, 0, 667, 0, 668, 0, 0, 0, 669, 0, 670, 0, 671, 0, 672, 673, 0,
    674, 0, 675, 676, 0, 677, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 683, 0, 684, 0, 0, 685, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 688, 0,
    689, 0, 690, 0, 0, 691, 0, 692, 0, 0, 0, 693, 694, 0, 695, 0, 696, 0, 0, 697, 0, 0, 698, 0, 699, 0, 0, 0, 0, 700, 0, 0,
    0, 0, 701, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 704, 0, 705, 0, 706, 0, 707, 0, 0, 708, 0, 709, 0, 0, 0,
    710, 0, 0, 711, 0, 712, 0, 713, 0, 0, 714, 0, 715, 0, 716, 0, 0, 717, 0, 718, 0, 719, 0, 0, 720, 0, 721, 0, 722, 0, 0, 723,
    0, 724, 0, 0, 0, 0, 0, 725, 0, 0, 726, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 729, 0, 0, 0, 730, 0, 0,
    0, 0, 0, 0, 0, 0, 731, 732, 0, 733, 0, 734, 0, 0, 735, 0, 0, 736, 0, 737, 0, 0, 0, 738, 0, 0, 0, 739, 740, 0, 741, 0,
    742, 743, 0, 744, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 748, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 751, 0, 0, 0, 752, 0, 0, 753, 0, 0, 0, 0, 0,
    0, 0, 754, 0, 0, 755, 0, 756, 0, 0, 757, 0, 0, 0, 758, 0, 0, 759, 0, 760, 0, 761, 0, 762, 0, 763, 764, 0, 0, 765, 0, 766,
    0, 767, 0, 768, 0, 769, 0, 770, 0, 771, 0, 772, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 777, 0, 778, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0, 0, 0, 780,
    0, 0, 781, 0, 782, 0, 0, 0, 783, 0, 0, 0, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 0, 785, 0, 0, 0, 786, 0, 0, 0, 0,
    0, 0, 0, 787, 0, 788, 0, 789, 0, 790, 0, 791, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 794,
};
void recomp_unit_0016_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08844000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0016[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08844000;
    case 2u: goto L_088440B4;
    case 3u: goto L_088440D0;
    case 4u: goto L_088440D8;
    case 5u: goto L_088440DC;
    case 6u: goto L_088440E8;
    case 7u: goto L_088440EC;
    case 8u: goto L_08844104;
    case 9u: goto L_0884410C;
    case 10u: goto L_08844114;
    case 11u: goto L_0884411C;
    case 12u: goto L_08844124;
    case 13u: goto L_0884412C;
    case 14u: goto L_08844138;
    case 15u: goto L_08844140;
    case 16u: goto L_08844148;
    case 17u: goto L_08844150;
    case 18u: goto L_08844158;
    case 19u: goto L_08844160;
    case 20u: goto L_08844174;
    case 21u: goto L_0884418C;
    case 22u: goto L_088441A8;
    case 23u: goto L_088441B0;
    case 24u: goto L_088441BC;
    case 25u: goto L_088441D0;
    case 26u: goto L_088441D8;
    case 27u: goto L_088441E0;
    case 28u: goto L_088441E4;
    case 29u: goto L_088441F4;
    case 30u: goto L_0884420C;
    case 31u: goto L_08844214;
    case 32u: goto L_08844220;
    case 33u: goto L_08844228;
    case 34u: goto L_0884423C;
    case 35u: goto L_08844248;
    case 36u: goto L_0884425C;
    case 37u: goto L_08844264;
    case 38u: goto L_08844274;
    case 39u: goto L_08844278;
    case 40u: goto L_08844280;
    case 41u: goto L_08844290;
    case 42u: goto L_0884429C;
    case 43u: goto L_088442E4;
    case 44u: goto L_088442EC;
    case 45u: goto L_088442F4;
    case 46u: goto L_08844308;
    case 47u: goto L_08844310;
    case 48u: goto L_08844318;
    case 49u: goto L_08844320;
    case 50u: goto L_08844324;
    case 51u: goto L_0884432C;
    case 52u: goto L_08844344;
    case 53u: goto L_0884434C;
    case 54u: goto L_0884437C;
    case 55u: goto L_088443BC;
    case 56u: goto L_088443C4;
    case 57u: goto L_088443CC;
    case 58u: goto L_088443D4;
    case 59u: goto L_088443FC;
    case 60u: goto L_08844408;
    case 61u: goto L_08844410;
    case 62u: goto L_0884441C;
    case 63u: goto L_08844424;
    case 64u: goto L_08844430;
    case 65u: goto L_0884443C;
    case 66u: goto L_08844450;
    case 67u: goto L_0884446C;
    case 68u: goto L_0884447C;
    case 69u: goto L_08844484;
    case 70u: goto L_08844490;
    case 71u: goto L_08844500;
    case 72u: goto L_088445AC;
    case 73u: goto L_088445B8;
    case 74u: goto L_088445D4;
    case 75u: goto L_088445D8;
    case 76u: goto L_088445E4;
    case 77u: goto L_08844600;
    case 78u: goto L_0884460C;
    case 79u: goto L_08844618;
    case 80u: goto L_08844624;
    case 81u: goto L_08844638;
    case 82u: goto L_08844640;
    case 83u: goto L_08844648;
    case 84u: goto L_08844654;
    case 85u: goto L_08844660;
    case 86u: goto L_0884466C;
    case 87u: goto L_08844680;
    case 88u: goto L_08844688;
    case 89u: goto L_0884468C;
    case 90u: goto L_08844694;
    case 91u: goto L_0884469C;
    case 92u: goto L_088446A8;
    case 93u: goto L_088446B8;
    case 94u: goto L_088446C0;
    case 95u: goto L_088446C8;
    case 96u: goto L_088446E4;
    case 97u: goto L_088446EC;
    case 98u: goto L_088446FC;
    case 99u: goto L_08844700;
    case 100u: goto L_08844708;
    case 101u: goto L_08844710;
    case 102u: goto L_08844718;
    case 103u: goto L_08844724;
    case 104u: goto L_08844738;
    case 105u: goto L_0884473C;
    case 106u: goto L_08844744;
    case 107u: goto L_08844790;
    case 108u: goto L_088447A4;
    case 109u: goto L_088447C0;
    case 110u: goto L_088447C8;
    case 111u: goto L_088447D0;
    case 112u: goto L_088447E4;
    case 113u: goto L_08844844;
    case 114u: goto L_0884486C;
    case 115u: goto L_08844874;
    case 116u: goto L_0884487C;
    case 117u: goto L_08844884;
    case 118u: goto L_08844890;
    case 119u: goto L_088448B4;
    case 120u: goto L_088448BC;
    case 121u: goto L_088448C4;
    case 122u: goto L_088448E0;
    case 123u: goto L_088448F0;
    case 124u: goto L_088448F8;
    case 125u: goto L_08844904;
    case 126u: goto L_08844928;
    case 127u: goto L_08844940;
    case 128u: goto L_088449A4;
    case 129u: goto L_088449C0;
    case 130u: goto L_088449C4;
    case 131u: goto L_088449D8;
    case 132u: goto L_088449E0;
    case 133u: goto L_088449EC;
    case 134u: goto L_088449F4;
    case 135u: goto L_08844B08;
    case 136u: goto L_08844B1C;
    case 137u: goto L_08844B24;
    case 138u: goto L_08844B2C;
    case 139u: goto L_08844B3C;
    case 140u: goto L_08844B4C;
    case 141u: goto L_08844B54;
    case 142u: goto L_08844B84;
    case 143u: goto L_08844BB0;
    case 144u: goto L_08844BB8;
    case 145u: goto L_08844BC0;
    case 146u: goto L_08844BD4;
    case 147u: goto L_08844C34;
    case 148u: goto L_08844C5C;
    case 149u: goto L_08844C64;
    case 150u: goto L_08844C7C;
    case 151u: goto L_08844C8C;
    case 152u: goto L_08844CA4;
    case 153u: goto L_08844CB0;
    case 154u: goto L_08844CB8;
    case 155u: goto L_08844CC0;
    case 156u: goto L_08844CCC;
    case 157u: goto L_08844CF0;
    case 158u: goto L_08844CF4;
    case 159u: goto L_08844CFC;
    case 160u: goto L_08844D6C;
    case 161u: goto L_08844D80;
    case 162u: goto L_08844D84;
    case 163u: goto L_08844D8C;
    case 164u: goto L_08844D94;
    case 165u: goto L_08844DBC;
    case 166u: goto L_08844DCC;
    case 167u: goto L_08844DD4;
    case 168u: goto L_08844DE0;
    case 169u: goto L_08844DF0;
    case 170u: goto L_08844DF8;
    case 171u: goto L_08844E28;
    case 172u: goto L_08844E54;
    case 173u: goto L_08844E60;
    case 174u: goto L_08844E68;
    case 175u: goto L_08844E84;
    case 176u: goto L_08844E98;
    case 177u: goto L_08844EA4;
    case 178u: goto L_08844EAC;
    case 179u: goto L_08844EC0;
    case 180u: goto L_08844EC8;
    case 181u: goto L_08844EEC;
    case 182u: goto L_08844EF4;
    case 183u: goto L_08844F08;
    case 184u: goto L_08844F0C;
    case 185u: goto L_08844F40;
    case 186u: goto L_08844F48;
    case 187u: goto L_08844F54;
    case 188u: goto L_08844F5C;
    case 189u: goto L_08844F64;
    case 190u: goto L_08844F68;
    case 191u: goto L_08844F70;
    case 192u: goto L_08844F78;
    case 193u: goto L_08844F80;
    case 194u: goto L_08844F88;
    case 195u: goto L_08844F90;
    case 196u: goto L_08844F98;
    case 197u: goto L_08844FA0;
    case 198u: goto L_08844FA8;
    case 199u: goto L_08844FB0;
    case 200u: goto L_08844FB8;
    case 201u: goto L_08844FC0;
    case 202u: goto L_08844FC8;
    case 203u: goto L_08844FD0;
    case 204u: goto L_08844FD8;
    case 205u: goto L_08844FE0;
    case 206u: goto L_08844FE8;
    case 207u: goto L_08844FF0;
    case 208u: goto L_08844FF4;
    case 209u: goto L_08844FFC;
    case 210u: goto L_08845040;
    case 211u: goto L_08845048;
    case 212u: goto L_08845050;
    case 213u: goto L_0884505C;
    case 214u: goto L_08845090;
    case 215u: goto L_088450A0;
    case 216u: goto L_088450A8;
    case 217u: goto L_088450B0;
    case 218u: goto L_088450C4;
    case 219u: goto L_088450D0;
    case 220u: goto L_088450E4;
    case 221u: goto L_088450F4;
    case 222u: goto L_088450FC;
    case 223u: goto L_08845108;
    case 224u: goto L_08845110;
    case 225u: goto L_08845124;
    case 226u: goto L_08845128;
    case 227u: goto L_08845130;
    case 228u: goto L_0884513C;
    case 229u: goto L_08845144;
    case 230u: goto L_08845148;
    case 231u: goto L_0884515C;
    case 232u: goto L_08845168;
    case 233u: goto L_08845180;
    case 234u: goto L_08845188;
    case 235u: goto L_08845190;
    case 236u: goto L_088451A4;
    case 237u: goto L_088451CC;
    case 238u: goto L_088451D4;
    case 239u: goto L_088451E8;
    case 240u: goto L_08845200;
    case 241u: goto L_08845210;
    case 242u: goto L_08845228;
    case 243u: goto L_08845244;
    case 244u: goto L_08845258;
    case 245u: goto L_08845260;
    case 246u: goto L_08845274;
    case 247u: goto L_08845288;
    case 248u: goto L_08845290;
    case 249u: goto L_08845298;
    case 250u: goto L_088452A0;
    case 251u: goto L_088452BC;
    case 252u: goto L_088452CC;
    case 253u: goto L_088452D4;
    case 254u: goto L_088452E0;
    case 255u: goto L_088452E8;
    case 256u: goto L_08845328;
    case 257u: goto L_0884536C;
    case 258u: goto L_08845374;
    case 259u: goto L_0884537C;
    case 260u: goto L_08845388;
    case 261u: goto L_088453BC;
    case 262u: goto L_088453CC;
    case 263u: goto L_088453D4;
    case 264u: goto L_088453DC;
    case 265u: goto L_088453EC;
    case 266u: goto L_088453F8;
    case 267u: goto L_0884540C;
    case 268u: goto L_08845418;
    case 269u: goto L_08845420;
    case 270u: goto L_0884542C;
    case 271u: goto L_08845434;
    case 272u: goto L_08845448;
    case 273u: goto L_08845454;
    case 274u: goto L_0884545C;
    case 275u: goto L_08845468;
    case 276u: goto L_0884547C;
    case 277u: goto L_08845488;
    case 278u: goto L_088454A0;
    case 279u: goto L_088454A8;
    case 280u: goto L_088454B0;
    case 281u: goto L_088454C4;
    case 282u: goto L_088454EC;
    case 283u: goto L_088454F4;
    case 284u: goto L_08845508;
    case 285u: goto L_08845520;
    case 286u: goto L_08845530;
    case 287u: goto L_08845548;
    case 288u: goto L_08845564;
    case 289u: goto L_08845578;
    case 290u: goto L_08845580;
    case 291u: goto L_08845594;
    case 292u: goto L_088455A8;
    case 293u: goto L_088455B0;
    case 294u: goto L_088455B8;
    case 295u: goto L_088455D0;
    case 296u: goto L_088455DC;
    case 297u: goto L_088455E8;
    case 298u: goto L_088455F8;
    case 299u: goto L_08845600;
    case 300u: goto L_08845608;
    case 301u: goto L_08845648;
    case 302u: goto L_0884565C;
    case 303u: goto L_08845678;
    case 304u: goto L_0884568C;
    case 305u: goto L_08845698;
    case 306u: goto L_088456A0;
    case 307u: goto L_088456CC;
    case 308u: goto L_088456E4;
    case 309u: goto L_088458FC;
    case 310u: goto L_08845944;
    case 311u: goto L_08845950;
    case 312u: goto L_08845958;
    case 313u: goto L_08845960;
    case 314u: goto L_08845974;
    case 315u: goto L_0884598C;
    case 316u: goto L_08845998;
    case 317u: goto L_088459A0;
    case 318u: goto L_088459A8;
    case 319u: goto L_088459AC;
    case 320u: goto L_088459B4;
    case 321u: goto L_088459C0;
    case 322u: goto L_088459D0;
    case 323u: goto L_088459DC;
    case 324u: goto L_088459EC;
    case 325u: goto L_088459F4;
    case 326u: goto L_088459FC;
    case 327u: goto L_08845A0C;
    case 328u: goto L_08845A10;
    case 329u: goto L_08845A18;
    case 330u: goto L_08845A20;
    case 331u: goto L_08845A44;
    case 332u: goto L_08845A4C;
    case 333u: goto L_08845A64;
    case 334u: goto L_08845A84;
    case 335u: goto L_08845AB4;
    case 336u: goto L_08845ACC;
    case 337u: goto L_08845AD4;
    case 338u: goto L_08845ADC;
    case 339u: goto L_08845AF0;
    case 340u: goto L_08845AF4;
    case 341u: goto L_08845B00;
    case 342u: goto L_08845B10;
    case 343u: goto L_08845B14;
    case 344u: goto L_08845B20;
    case 345u: goto L_08845B28;
    case 346u: goto L_08845B30;
    case 347u: goto L_08845B38;
    case 348u: goto L_08845B40;
    case 349u: goto L_08845B48;
    case 350u: goto L_08845B4C;
    case 351u: goto L_08845B5C;
    case 352u: goto L_08845BA4;
    case 353u: goto L_08845BB8;
    case 354u: goto L_08845BCC;
    case 355u: goto L_08845BD4;
    case 356u: goto L_08845C1C;
    case 357u: goto L_08845C30;
    case 358u: goto L_08845C40;
    case 359u: goto L_08845C50;
    case 360u: goto L_08845C58;
    case 361u: goto L_08845C64;
    case 362u: goto L_08845C8C;
    case 363u: goto L_08845CB8;
    case 364u: goto L_08845CC0;
    case 365u: goto L_08845CD0;
    case 366u: goto L_08845CE4;
    case 367u: goto L_08845CEC;
    case 368u: goto L_08845CF4;
    case 369u: goto L_08845CFC;
    case 370u: goto L_08845D08;
    case 371u: goto L_08845D14;
    case 372u: goto L_08845D20;
    case 373u: goto L_08845D3C;
    case 374u: goto L_08845D44;
    case 375u: goto L_08845D54;
    case 376u: goto L_08845D70;
    case 377u: goto L_08845D74;
    case 378u: goto L_08845D7C;
    case 379u: goto L_08845D84;
    case 380u: goto L_08845D8C;
    case 381u: goto L_08845D94;
    case 382u: goto L_08845D9C;
    case 383u: goto L_08845DC4;
    case 384u: goto L_08845DF4;
    case 385u: goto L_08845DFC;
    case 386u: goto L_08845E04;
    case 387u: goto L_08845E0C;
    case 388u: goto L_08845E14;
    case 389u: goto L_08845E1C;
    case 390u: goto L_08845E30;
    case 391u: goto L_08845E4C;
    case 392u: goto L_08845E54;
    case 393u: goto L_08845E6C;
    case 394u: goto L_08845E88;
    case 395u: goto L_08845E90;
    case 396u: goto L_08845EC0;
    case 397u: goto L_08845EE0;
    case 398u: goto L_08845EE8;
    case 399u: goto L_08845F00;
    case 400u: goto L_08845F30;
    case 401u: goto L_08845F38;
    case 402u: goto L_08845F44;
    case 403u: goto L_08845F50;
    case 404u: goto L_08845F60;
    case 405u: goto L_08845F6C;
    case 406u: goto L_08845F7C;
    case 407u: goto L_08845F8C;
    case 408u: goto L_08845F9C;
    case 409u: goto L_08845FA4;
    case 410u: goto L_08845FC0;
    case 411u: goto L_08845FEC;
    case 412u: goto L_08845FF8;
    case 413u: goto L_08846000;
    case 414u: goto L_08846028;
    case 415u: goto L_0884603C;
    case 416u: goto L_08846044;
    case 417u: goto L_08846058;
    case 418u: goto L_08846074;
    case 419u: goto L_08846088;
    case 420u: goto L_088460C8;
    case 421u: goto L_08846234;
    case 422u: goto L_08846270;
    case 423u: goto L_08846288;
    case 424u: goto L_088462A0;
    case 425u: goto L_088465F4;
    case 426u: goto L_08846620;
    case 427u: goto L_08846634;
    case 428u: goto L_08846648;
    case 429u: goto L_0884665C;
    case 430u: goto L_08846670;
    case 431u: goto L_08846684;
    case 432u: goto L_08846698;
    case 433u: goto L_088466B0;
    case 434u: goto L_088466C4;
    case 435u: goto L_088466F0;
    case 436u: goto L_08846704;
    case 437u: goto L_08846718;
    case 438u: goto L_0884672C;
    case 439u: goto L_08846740;
    case 440u: goto L_08846754;
    case 441u: goto L_08846768;
    case 442u: goto L_0884678C;
    case 443u: goto L_088467A4;
    case 444u: goto L_08846844;
    case 445u: goto L_0884685C;
    case 446u: goto L_08846870;
    case 447u: goto L_08846880;
    case 448u: goto L_08846894;
    case 449u: goto L_088468A8;
    case 450u: goto L_088468D0;
    case 451u: goto L_088468D8;
    case 452u: goto L_088468E8;
    case 453u: goto L_088468FC;
    case 454u: goto L_08846924;
    case 455u: goto L_08846934;
    case 456u: goto L_0884693C;
    case 457u: goto L_08846958;
    case 458u: goto L_08846960;
    case 459u: goto L_0884697C;
    case 460u: goto L_0884698C;
    case 461u: goto L_0884699C;
    case 462u: goto L_088469A0;
    case 463u: goto L_088469A8;
    case 464u: goto L_088469B0;
    case 465u: goto L_088469B8;
    case 466u: goto L_088469C4;
    case 467u: goto L_088469CC;
    case 468u: goto L_088469D4;
    case 469u: goto L_088469DC;
    case 470u: goto L_088469E8;
    case 471u: goto L_088469F0;
    case 472u: goto L_088469FC;
    case 473u: goto L_08846A08;
    case 474u: goto L_08846A10;
    case 475u: goto L_08846A18;
    case 476u: goto L_08846A24;
    case 477u: goto L_08846A2C;
    case 478u: goto L_08846A34;
    case 479u: goto L_08846A3C;
    case 480u: goto L_08846A50;
    case 481u: goto L_08846A64;
    case 482u: goto L_08846A70;
    case 483u: goto L_08846A78;
    case 484u: goto L_08846A80;
    case 485u: goto L_08846A88;
    case 486u: goto L_08846A90;
    case 487u: goto L_08846A98;
    case 488u: goto L_08846AA0;
    case 489u: goto L_08846AB0;
    case 490u: goto L_08846AB8;
    case 491u: goto L_08846AC8;
    case 492u: goto L_08846AD8;
    case 493u: goto L_08846B04;
    case 494u: goto L_08846B0C;
    case 495u: goto L_08846B1C;
    case 496u: goto L_08846B34;
    case 497u: goto L_08846B48;
    case 498u: goto L_08846B58;
    case 499u: goto L_08846B64;
    case 500u: goto L_08846B78;
    case 501u: goto L_08846B88;
    case 502u: goto L_08846B94;
    case 503u: goto L_08846B9C;
    case 504u: goto L_08846BA4;
    case 505u: goto L_08846BAC;
    case 506u: goto L_08846BB8;
    case 507u: goto L_08846BC4;
    case 508u: goto L_08846BF0;
    case 509u: goto L_08846C00;
    case 510u: goto L_08846C08;
    case 511u: goto L_08846C14;
    case 512u: goto L_08846C1C;
    case 513u: goto L_08846C34;
    case 514u: goto L_08846C54;
    case 515u: goto L_08846C74;
    case 516u: goto L_08846C88;
    case 517u: goto L_08846CA0;
    case 518u: goto L_08846CC4;
    case 519u: goto L_08846CE4;
    case 520u: goto L_08846D8C;
    case 521u: goto L_08846DA0;
    case 522u: goto L_08846DC4;
    case 523u: goto L_08846DD4;
    case 524u: goto L_08846DDC;
    case 525u: goto L_08846DE8;
    case 526u: goto L_08846DF8;
    case 527u: goto L_08846E0C;
    case 528u: goto L_08846E3C;
    case 529u: goto L_08846E50;
    case 530u: goto L_08846E64;
    case 531u: goto L_08846E74;
    case 532u: goto L_08846EA4;
    case 533u: goto L_08846EC8;
    case 534u: goto L_08846EE0;
    case 535u: goto L_08846EFC;
    case 536u: goto L_08846F24;
    case 537u: goto L_08846F34;
    case 538u: goto L_08846F44;
    case 539u: goto L_08846F50;
    case 540u: goto L_08846F68;
    case 541u: goto L_08846F74;
    case 542u: goto L_08846F80;
    case 543u: goto L_08846F84;
    case 544u: goto L_08846FA0;
    case 545u: goto L_08846FE0;
    case 546u: goto L_08846FF8;
    case 547u: goto L_08847010;
    case 548u: goto L_0884701C;
    case 549u: goto L_0884702C;
    case 550u: goto L_08847058;
    case 551u: goto L_0884707C;
    case 552u: goto L_08847094;
    case 553u: goto L_088470A8;
    case 554u: goto L_088470D0;
    case 555u: goto L_088470F8;
    case 556u: goto L_08847108;
    case 557u: goto L_08847118;
    case 558u: goto L_08847124;
    case 559u: goto L_0884713C;
    case 560u: goto L_08847148;
    case 561u: goto L_08847154;
    case 562u: goto L_08847158;
    case 563u: goto L_08847174;
    case 564u: goto L_0884718C;
    case 565u: goto L_088471A0;
    case 566u: goto L_088471A4;
    case 567u: goto L_088471B0;
    case 568u: goto L_088471C0;
    case 569u: goto L_088471C4;
    case 570u: goto L_088471D4;
    case 571u: goto L_08847258;
    case 572u: goto L_08847270;
    case 573u: goto L_088472A4;
    case 574u: goto L_088472A8;
    case 575u: goto L_088472B0;
    case 576u: goto L_088472B8;
    case 577u: goto L_088472C0;
    case 578u: goto L_088472CC;
    case 579u: goto L_088472D4;
    case 580u: goto L_088472E0;
    case 581u: goto L_088472E4;
    case 582u: goto L_088472EC;
    case 583u: goto L_088472F4;
    case 584u: goto L_08847300;
    case 585u: goto L_08847304;
    case 586u: goto L_0884730C;
    case 587u: goto L_08847314;
    case 588u: goto L_08847320;
    case 589u: goto L_08847330;
    case 590u: goto L_08847338;
    case 591u: goto L_08847348;
    case 592u: goto L_08847378;
    case 593u: goto L_0884738C;
    case 594u: goto L_088473A0;
    case 595u: goto L_088473B4;
    case 596u: goto L_08847440;
    case 597u: goto L_08847448;
    case 598u: goto L_08847500;
    case 599u: goto L_08847508;
    case 600u: goto L_08847510;
    case 601u: goto L_0884751C;
    case 602u: goto L_08847524;
    case 603u: goto L_08847530;
    case 604u: goto L_0884753C;
    case 605u: goto L_08847544;
    case 606u: goto L_08847550;
    case 607u: goto L_08847558;
    case 608u: goto L_08847564;
    case 609u: goto L_0884756C;
    case 610u: goto L_08847578;
    case 611u: goto L_08847580;
    case 612u: goto L_0884758C;
    case 613u: goto L_08847598;
    case 614u: goto L_088475A0;
    case 615u: goto L_088475AC;
    case 616u: goto L_088475B8;
    case 617u: goto L_088475C0;
    case 618u: goto L_088475C8;
    case 619u: goto L_088475D0;
    case 620u: goto L_088475D8;
    case 621u: goto L_088475DC;
    case 622u: goto L_088475E4;
    case 623u: goto L_088475EC;
    case 624u: goto L_088475F8;
    case 625u: goto L_08847604;
    case 626u: goto L_0884760C;
    case 627u: goto L_0884761C;
    case 628u: goto L_08847628;
    case 629u: goto L_08847630;
    case 630u: goto L_08847638;
    case 631u: goto L_08847640;
    case 632u: goto L_08847648;
    case 633u: goto L_0884764C;
    case 634u: goto L_08847654;
    case 635u: goto L_0884765C;
    case 636u: goto L_08847668;
    case 637u: goto L_08847674;
    case 638u: goto L_0884767C;
    case 639u: goto L_08847688;
    case 640u: goto L_08847694;
    case 641u: goto L_0884769C;
    case 642u: goto L_088476A8;
    case 643u: goto L_088476BC;
    case 644u: goto L_088476D4;
    case 645u: goto L_088476DC;
    case 646u: goto L_088476E8;
    case 647u: goto L_088476F0;
    case 648u: goto L_08847700;
    case 649u: goto L_08847708;
    case 650u: goto L_08847714;
    case 651u: goto L_0884771C;
    case 652u: goto L_08847720;
    case 653u: goto L_08847724;
    case 654u: goto L_0884772C;
    case 655u: goto L_08847734;
    case 656u: goto L_08847740;
    case 657u: goto L_0884774C;
    case 658u: goto L_08847754;
    case 659u: goto L_08847764;
    case 660u: goto L_08847770;
    case 661u: goto L_08847778;
    case 662u: goto L_08847784;
    case 663u: goto L_08847798;
    case 664u: goto L_088477B0;
    case 665u: goto L_088477B8;
    case 666u: goto L_088477BC;
    case 667u: goto L_088477C4;
    case 668u: goto L_088477CC;
    case 669u: goto L_088477DC;
    case 670u: goto L_088477E4;
    case 671u: goto L_088477EC;
    case 672u: goto L_088477F4;
    case 673u: goto L_088477F8;
    case 674u: goto L_08847800;
    case 675u: goto L_08847808;
    case 676u: goto L_0884780C;
    case 677u: goto L_08847814;
    case 678u: goto L_08847820;
    case 679u: goto L_08847850;
    case 680u: goto L_088478DC;
    case 681u: goto L_088478EC;
    case 682u: goto L_088479A4;
    case 683u: goto L_088479AC;
    case 684u: goto L_088479B4;
    case 685u: goto L_088479C0;
    case 686u: goto L_088479C8;
    case 687u: goto L_088479EC;
    case 688u: goto L_088479F8;
    case 689u: goto L_08847A00;
    case 690u: goto L_08847A08;
    case 691u: goto L_08847A14;
    case 692u: goto L_08847A1C;
    case 693u: goto L_08847A2C;
    case 694u: goto L_08847A30;
    case 695u: goto L_08847A38;
    case 696u: goto L_08847A40;
    case 697u: goto L_08847A4C;
    case 698u: goto L_08847A58;
    case 699u: goto L_08847A60;
    case 700u: goto L_08847A74;
    case 701u: goto L_08847A88;
    case 702u: goto L_08847A90;
    case 703u: goto L_08847AC0;
    case 704u: goto L_08847AC4;
    case 705u: goto L_08847ACC;
    case 706u: goto L_08847AD4;
    case 707u: goto L_08847ADC;
    case 708u: goto L_08847AE8;
    case 709u: goto L_08847AF0;
    case 710u: goto L_08847B00;
    case 711u: goto L_08847B0C;
    case 712u: goto L_08847B14;
    case 713u: goto L_08847B1C;
    case 714u: goto L_08847B28;
    case 715u: goto L_08847B30;
    case 716u: goto L_08847B38;
    case 717u: goto L_08847B44;
    case 718u: goto L_08847B4C;
    case 719u: goto L_08847B54;
    case 720u: goto L_08847B60;
    case 721u: goto L_08847B68;
    case 722u: goto L_08847B70;
    case 723u: goto L_08847B7C;
    case 724u: goto L_08847B84;
    case 725u: goto L_08847B9C;
    case 726u: goto L_08847BA8;
    case 727u: goto L_08847BB0;
    case 728u: goto L_08847BD8;
    case 729u: goto L_08847BE4;
    case 730u: goto L_08847BF4;
    case 731u: goto L_08847C18;
    case 732u: goto L_08847C1C;
    case 733u: goto L_08847C24;
    case 734u: goto L_08847C2C;
    case 735u: goto L_08847C38;
    case 736u: goto L_08847C44;
    case 737u: goto L_08847C4C;
    case 738u: goto L_08847C5C;
    case 739u: goto L_08847C6C;
    case 740u: goto L_08847C70;
    case 741u: goto L_08847C78;
    case 742u: goto L_08847C80;
    case 743u: goto L_08847C84;
    case 744u: goto L_08847C8C;
    case 745u: goto L_08847C98;
    case 746u: goto L_08847CC8;
    case 747u: goto L_08847CDC;
    case 748u: goto L_08847D08;
    case 749u: goto L_08847D14;
    case 750u: goto L_08847D40;
    case 751u: goto L_08847D4C;
    case 752u: goto L_08847D5C;
    case 753u: goto L_08847D68;
    case 754u: goto L_08847D88;
    case 755u: goto L_08847D94;
    case 756u: goto L_08847D9C;
    case 757u: goto L_08847DA8;
    case 758u: goto L_08847DB8;
    case 759u: goto L_08847DC4;
    case 760u: goto L_08847DCC;
    case 761u: goto L_08847DD4;
    case 762u: goto L_08847DDC;
    case 763u: goto L_08847DE4;
    case 764u: goto L_08847DE8;
    case 765u: goto L_08847DF4;
    case 766u: goto L_08847DFC;
    case 767u: goto L_08847E04;
    case 768u: goto L_08847E0C;
    case 769u: goto L_08847E14;
    case 770u: goto L_08847E1C;
    case 771u: goto L_08847E24;
    case 772u: goto L_08847E2C;
    case 773u: goto L_08847E44;
    case 774u: goto L_08847E60;
    case 775u: goto L_08847E90;
    case 776u: goto L_08847EA8;
    case 777u: goto L_08847EC0;
    case 778u: goto L_08847EC8;
    case 779u: goto L_08847ED4;
    case 780u: goto L_08847EFC;
    case 781u: goto L_08847F08;
    case 782u: goto L_08847F10;
    case 783u: goto L_08847F20;
    case 784u: goto L_08847F48;
    case 785u: goto L_08847F5C;
    case 786u: goto L_08847F6C;
    case 787u: goto L_08847F8C;
    case 788u: goto L_08847F94;
    case 789u: goto L_08847F9C;
    case 790u: goto L_08847FA4;
    case 791u: goto L_08847FAC;
    case 792u: goto L_08847FB8;
    case 793u: goto L_08847FD8;
    case 794u: goto L_08847FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08844000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(5416)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[3] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[3]);
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[9]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[10]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[11]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    goto L_088440B4;
L_088440B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(224), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088440B4;
      }
      goto L_088440D0;
    }
L_088440D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088440EC;
      }
      goto L_088440D8;
    }
L_088440D8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_088440DC;
L_088440DC:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088440E8u);
    ctx.gpr[6] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088440E8u) goto L_088440E8;
    return;
L_088440E8:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_088440EC;
L_088440EC:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 872u, 0x08843E64u>(ctx, &aot_mem); return;
      }
      goto L_08844104;
    }
L_08844104:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_0884418C;
      }
      goto L_0884410C;
    }
L_0884410C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08844150;
      }
      goto L_08844114;
    }
L_08844114:
    ctx.gpr[31] = (0x0884411Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 529u, 0x088327E8u>(ctx, &aot_mem) && ctx.pc == 0x0884411Cu) goto L_0884411C;
    return;
L_0884411C:
    ctx.gpr[31] = (0x08844124u);
    ctx.gpr[16] = (ctx.gpr[2] + static_cast<std::uint32_t>(996));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 114u, 0x08934838u>(ctx, &aot_mem) && ctx.pc == 0x08844124u) goto L_08844124;
    return;
L_08844124:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_08844138;
      }
      goto L_0884412C;
    }
L_0884412C:
    ctx.gpr[5] = (0u | 515u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08844140;
      }
      goto L_08844138;
    }
L_08844138:
    ctx.gpr[5] = (0u | 1539u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08844140;
L_08844140:
    ctx.gpr[31] = (0x08844148u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    goto L_0884437C;
L_08844148:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_0884418C;
      }
      goto L_08844150;
    }
L_08844150:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_08844158;
L_08844158:
    ctx.gpr[31] = (0x08844160u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 677u, 0x0883337Cu>(ctx, &aot_mem) && ctx.pc == 0x08844160u) goto L_08844160;
    return;
L_08844160:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(224), ctx.gpr[2]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08844158;
      }
      goto L_08844174;
    }
L_08844174:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    ctx.gpr[4] = (0u | 515u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-13800), ctx.gpr[21]);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    goto L_0884418C;
L_0884418C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (0u | 2u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(106));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088441A8;
L_088441A8:
    ctx.gpr[31] = (0x088441B0u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08847378;
L_088441B0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088441BCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 636u, 0x088430DCu>(ctx, &aot_mem) && ctx.pc == 0x088441BCu) goto L_088441BC;
    return;
L_088441BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(5416)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(316), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (0u | 3u);
      if (branch_taken) {
          goto L_088441E0;
      }
      goto L_088441D0;
    }
L_088441D0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_088441E4;
      }
      goto L_088441D8;
    }
L_088441D8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    ctx.gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_08844278;
      }
      goto L_088441E0;
    }
L_088441E0:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    goto L_088441E4;
L_088441E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 86 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884420C;
      }
      goto L_088441F4;
    }
L_088441F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(328), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08844274;
      }
      goto L_0884420C;
    }
L_0884420C:
    if (ctx.gpr[5] != ctx.gpr[7]) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
        goto L_0884425C;
    }
    goto L_08844214;
L_08844214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_0884423C;
      }
      goto L_08844220;
    }
L_08844220:
    ctx.gpr[31] = (0x08844228u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 710u, 0x088335D4u>(ctx, &aot_mem) && ctx.pc == 0x08844228u) goto L_08844228;
    return;
L_08844228:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(105))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(5416)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(328), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08844274;
      }
      goto L_0884423C;
    }
L_0884423C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[31] = (0x08844248u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 640u, 0x088C254Cu>(ctx, &aot_mem) && ctx.pc == 0x08844248u) goto L_08844248;
    return;
L_08844248:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(115))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(5416)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(328), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08844274;
      }
      goto L_0884425C;
    }
L_0884425C:
    ctx.gpr[31] = (0x08844264u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 710u, 0x088335D4u>(ctx, &aot_mem) && ctx.pc == 0x08844264u) goto L_08844264;
    return;
L_08844264:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(125))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(5416)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(328), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    goto L_08844274;
L_08844274:
    ctx.gpr[6] = (0u | 3u);
    goto L_08844278;
L_08844278:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08844290;
      }
      goto L_08844280;
    }
L_08844280:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0884429C;
      }
      goto L_08844290;
    }
L_08844290:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_0884429C;
L_0884429C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_088441A8;
      }
      goto L_088442E4;
    }
L_088442E4:
    ctx.gpr[31] = (0x088442ECu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 475u, 0x08806030u>(ctx, &aot_mem) && ctx.pc == 0x088442ECu) goto L_088442EC;
    return;
L_088442EC:
    ctx.gpr[31] = (0x088442F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 216u, 0x08821444u>(ctx, &aot_mem) && ctx.pc == 0x088442F4u) goto L_088442F4;
    return;
L_088442F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(5416)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08844318;
      }
      goto L_08844308;
    }
L_08844308:
    ctx.gpr[31] = (0x08844310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 601u, 0x088C226Cu>(ctx, &aot_mem) && ctx.pc == 0x08844310u) goto L_08844310;
    return;
L_08844310:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08844324;
      }
      goto L_08844318;
    }
L_08844318:
    ctx.gpr[31] = (0x08844320u);
    // nop
    ctx.pc = 0x08AB45BCu;
    return;
L_08844320:
    ctx.gpr[16] = (ctx.gpr[2] >> 1u);
    goto L_08844324;
L_08844324:
    ctx.gpr[31] = (0x0884432Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 890u, 0x0881F6C4u>(ctx, &aot_mem) && ctx.pc == 0x0884432Cu) goto L_0884432C;
    return;
L_0884432C:
    ctx.gpr[4] = (22325u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(29523));
    ctx.gpr[6] = (ctx.gpr[16] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08844344u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 203u, 0x08A15D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08844344u) goto L_08844344;
    return;
L_08844344:
    ctx.gpr[31] = (0x0884434Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 220u, 0x088214CCu>(ctx, &aot_mem) && ctx.pc == 0x0884434Cu) goto L_0884434C;
    return;
L_0884434C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884437C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-432));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[31]);
    ctx.gpr[31] = (0x088443BCu);
    ctx.gpr[6] = (0u | 276u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088443BCu) goto L_088443BC;
    return;
L_088443BC:
    ctx.gpr[31] = (0x088443C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 115u, 0x08934858u>(ctx, &aot_mem) && ctx.pc == 0x088443C4u) goto L_088443C4;
    return;
L_088443C4:
    ctx.gpr[31] = (0x088443CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 142u, 0x08934AA0u>(ctx, &aot_mem) && ctx.pc == 0x088443CCu) goto L_088443CC;
    return;
L_088443CC:
    ctx.gpr[31] = (0x088443D4u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 114u, 0x08934838u>(ctx, &aot_mem) && ctx.pc == 0x088443D4u) goto L_088443D4;
    return;
L_088443D4:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[18] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[18] = (ctx.gpr[29] + ctx.gpr[18]);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[21] + static_cast<std::uint32_t>(96));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[20] = (2221u << 16u);
      if (branch_taken) {
          goto L_08844408;
      }
      goto L_088443FC;
    }
L_088443FC:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-13800), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08844410;
      }
      goto L_08844408;
    }
L_08844408:
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-13800), ctx.gpr[5]);
    goto L_08844410;
L_08844410:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0884441Cu);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x0884441Cu) goto L_0884441C;
    return;
L_0884441C:
    ctx.gpr[31] = (0x08844424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08844424u) goto L_08844424;
    return;
L_08844424:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088445AC;
      }
      goto L_08844430;
    }
L_08844430:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[31] = (0x0884443Cu);
    ctx.gpr[5] = (0u | 68u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x0884443Cu) goto L_0884443C;
    return;
L_0884443C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(5416)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08844450u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 710u, 0x088335D4u>(ctx, &aot_mem) && ctx.pc == 0x08844450u) goto L_08844450;
    return;
L_08844450:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(301))))));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(328), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0884446Cu);
    ctx.gpr[6] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0884446Cu) goto L_0884446C;
    return;
L_0884446C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(344));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0884447Cu);
    ctx.gpr[6] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0884447Cu) goto L_0884447C;
    return;
L_0884447C:
    ctx.gpr[31] = (0x08844484u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 686u, 0x08833430u>(ctx, &aot_mem) && ctx.pc == 0x08844484u) goto L_08844484;
    return;
L_08844484:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(356));
    ctx.gpr[31] = (0x08844490u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 405u, 0x08835F80u>(ctx, &aot_mem) && ctx.pc == 0x08844490u) goto L_08844490;
    return;
L_08844490:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08844500u);
    ctx.gpr[6] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08844500u) goto L_08844500;
    return;
L_08844500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[5] = (0u | 10u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[11] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[11]);
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[9]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[10]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088445D8;
      }
      goto L_088445AC;
    }
L_088445AC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088445B8u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x088445B8u) goto L_088445B8;
    return;
L_088445B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088445D4u);
    ctx.gpr[6] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088445D4u) goto L_088445D4;
    return;
L_088445D4:
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(40))))));
    goto L_088445D8;
L_088445D8:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x088445E4u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x088445E4u) goto L_088445E4;
    return;
L_088445E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(124));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08844600u);
    ctx.gpr[6] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08844600u) goto L_08844600;
    return;
L_08844600:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[19];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08844640;
      }
      goto L_0884460C;
    }
L_0884460C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(256), ctx.gpr[4]);
    ctx.gpr[31] = (0x08844618u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 265u, 0x0883547Cu>(ctx, &aot_mem) && ctx.pc == 0x08844618u) goto L_08844618;
    return;
L_08844618:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08844624u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 266u, 0x0883549Cu>(ctx, &aot_mem) && ctx.pc == 0x08844624u) goto L_08844624;
    return;
L_08844624:
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[0];
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(268));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08844638u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 267u, 0x088354BCu>(ctx, &aot_mem) && ctx.pc == 0x08844638u) goto L_08844638;
    return;
L_08844638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884468C;
      }
      goto L_08844640;
    }
L_08844640:
    ctx.gpr[31] = (0x08844648u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 188u, 0x08834D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08844648u) goto L_08844648;
    return;
L_08844648:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08844688;
      }
      goto L_08844654;
    }
L_08844654:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(256), ctx.gpr[4]);
    ctx.gpr[31] = (0x08844660u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 265u, 0x0883547Cu>(ctx, &aot_mem) && ctx.pc == 0x08844660u) goto L_08844660;
    return;
L_08844660:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0884466Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 266u, 0x0883549Cu>(ctx, &aot_mem) && ctx.pc == 0x0884466Cu) goto L_0884466C;
    return;
L_0884466C:
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[0];
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(268));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08844680u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 267u, 0x088354BCu>(ctx, &aot_mem) && ctx.pc == 0x08844680u) goto L_08844680;
    return;
L_08844680:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884468C;
      }
      goto L_08844688;
    }
L_08844688:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(256), 0u);
    goto L_0884468C;
L_0884468C:
    ctx.gpr[31] = (0x08844694u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 139u, 0x08934A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08844694u) goto L_08844694;
    return;
L_08844694:
    ctx.gpr[31] = (0x0884469Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 422u, 0x0882D8F4u>(ctx, &aot_mem) && ctx.pc == 0x0884469Cu) goto L_0884469C;
    return;
L_0884469C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(5416)));
      if (branch_taken) {
          goto L_088446C0;
      }
      goto L_088446A8;
    }
L_088446A8:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(308), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    ctx.gpr[31] = (0x088446B8u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 862u, 0x0881F4CCu>(ctx, &aot_mem) && ctx.pc == 0x088446B8u) goto L_088446B8;
    return;
L_088446B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(41))))));
      if (branch_taken) {
          goto L_08844700;
      }
      goto L_088446C0;
    }
L_088446C0:
    if (ctx.gpr[4] == ctx.gpr[19]) {
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(308), 0u);
        goto L_088446EC;
    }
    goto L_088446C8;
L_088446C8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(53))))));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(308), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(312), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[31] = (0x088446E4u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x088446E4u) goto L_088446E4;
    return;
L_088446E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(41))))));
      if (branch_taken) {
          goto L_08844700;
      }
      goto L_088446EC;
    }
L_088446EC:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[31] = (0x088446FCu);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 862u, 0x0881F4CCu>(ctx, &aot_mem) && ctx.pc == 0x088446FCu) goto L_088446FC;
    return;
L_088446FC:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(41))))));
    goto L_08844700;
L_08844700:
    ctx.gpr[31] = (0x08844708u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(212), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 564u, 0x08832B6Cu>(ctx, &aot_mem) && ctx.pc == 0x08844708u) goto L_08844708;
    return;
L_08844708:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_08844738;
    }
    goto L_08844710;
L_08844710:
    ctx.gpr[31] = (0x08844718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 568u, 0x08832BE4u>(ctx, &aot_mem) && ctx.pc == 0x08844718u) goto L_08844718;
    return;
L_08844718:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[31] = (0x08844724u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 564u, 0x08832B6Cu>(ctx, &aot_mem) && ctx.pc == 0x08844724u) goto L_08844724;
    return;
L_08844724:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[13] = ctx.fpr[20] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0884473C;
      }
      goto L_08844738;
    }
L_08844738:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884473C;
L_0884473C:
    ctx.gpr[31] = (0x08844744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 282u, 0x088355C8u>(ctx, &aot_mem) && ctx.pc == 0x08844744u) goto L_08844744;
    return;
L_08844744:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (15395u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844790:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4856)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4860), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088447A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088449F4;
      }
      goto L_088447C0;
    }
L_088447C0:
    ctx.gpr[31] = (0x088447C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 6u, 0x08990074u>(ctx, &aot_mem) && ctx.pc == 0x088447C8u) goto L_088447C8;
    return;
L_088447C8:
    ctx.gpr[31] = (0x088447D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 585u, 0x0898F5A4u>(ctx, &aot_mem) && ctx.pc == 0x088447D0u) goto L_088447D0;
    return;
L_088447D0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x088447E4u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 598u, 0x0898F954u>(ctx, &aot_mem) && ctx.pc == 0x088447E4u) goto L_088447E4;
    return;
L_088447E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (17288u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[20] - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (17392u << 16u);
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08844844u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 31u, 0x08990420u>(ctx, &aot_mem) && ctx.pc == 0x08844844u) goto L_08844844;
    return;
L_08844844:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[20];
    ctx.gpr[31] = (0x0884486Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 29u, 0x089903C0u>(ctx, &aot_mem) && ctx.pc == 0x0884486Cu) goto L_0884486C;
    return;
L_0884486C:
    ctx.gpr[31] = (0x08844874u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 586u, 0x0898F6DCu>(ctx, &aot_mem) && ctx.pc == 0x08844874u) goto L_08844874;
    return;
L_08844874:
    ctx.gpr[31] = (0x0884487Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 739u, 0x08997D54u>(ctx, &aot_mem) && ctx.pc == 0x0884487Cu) goto L_0884487C;
    return;
L_0884487C:
    ctx.gpr[31] = (0x08844884u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 174u, 0x08991750u>(ctx, &aot_mem) && ctx.pc == 0x08844884u) goto L_08844884;
    return;
L_08844884:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08844890u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 178u, 0x089917CCu>(ctx, &aot_mem) && ctx.pc == 0x08844890u) goto L_08844890;
    return;
L_08844890:
    ctx.gpr[5] = (48896u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088448B4u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 103u, 0x08990E14u>(ctx, &aot_mem) && ctx.pc == 0x088448B4u) goto L_088448B4;
    return;
L_088448B4:
    ctx.gpr[31] = (0x088448BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 197u, 0x089918F4u>(ctx, &aot_mem) && ctx.pc == 0x088448BCu) goto L_088448BC;
    return;
L_088448BC:
    ctx.gpr[31] = (0x088448C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 444u, 0x0898A440u>(ctx, &aot_mem) && ctx.pc == 0x088448C4u) goto L_088448C4;
    return;
L_088448C4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088448E0u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 642u, 0x0898B3A0u>(ctx, &aot_mem) && ctx.pc == 0x088448E0u) goto L_088448E0;
    return;
L_088448E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
        goto L_088449C4;
    }
    goto L_088448F0;
L_088448F0:
    ctx.gpr[31] = (0x088448F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 394u, 0x089DE9F0u>(ctx, &aot_mem) && ctx.pc == 0x088448F8u) goto L_088448F8;
    return;
L_088448F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08844904u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 385u, 0x089DE94Cu>(ctx, &aot_mem) && ctx.pc == 0x08844904u) goto L_08844904;
    return;
L_08844904:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-256));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08844928u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 481u, 0x0898A7A8u>(ctx, &aot_mem) && ctx.pc == 0x08844928u) goto L_08844928;
    return;
L_08844928:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_088449A4;
      }
      goto L_08844940;
    }
L_08844940:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    goto L_088449A4;
L_088449A4:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x088449C0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 474u, 0x0898A6BCu>(ctx, &aot_mem) && ctx.pc == 0x088449C0u) goto L_088449C0;
    return;
L_088449C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_088449C4;
L_088449C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x088449D8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 771u, 0x08997F3Cu>(ctx, &aot_mem) && ctx.pc == 0x088449D8u) goto L_088449D8;
    return;
L_088449D8:
    ctx.gpr[31] = (0x088449E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 265u, 0x089953B0u>(ctx, &aot_mem) && ctx.pc == 0x088449E0u) goto L_088449E0;
    return;
L_088449E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088449ECu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 261u, 0x08995368u>(ctx, &aot_mem) && ctx.pc == 0x088449ECu) goto L_088449EC;
    return;
L_088449EC:
    ctx.gpr[31] = (0x088449F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 26u, 0x08990394u>(ctx, &aot_mem) && ctx.pc == 0x088449F4u) goto L_088449F4;
    return;
L_088449F4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844B08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08844B2C;
      }
      goto L_08844B1C;
    }
L_08844B1C:
    ctx.gpr[31] = (0x08844B24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 452u, 0x0898A520u>(ctx, &aot_mem) && ctx.pc == 0x08844B24u) goto L_08844B24;
    return;
L_08844B24:
    ctx.gpr[31] = (0x08844B2Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 749u, 0x08997DF8u>(ctx, &aot_mem) && ctx.pc == 0x08844B2Cu) goto L_08844B2C;
    return;
L_08844B2C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844B3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08844B54;
      }
      goto L_08844B4C;
    }
L_08844B4C:
    ctx.gpr[31] = (0x08844B54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 7u, 0x08994054u>(ctx, &aot_mem) && ctx.pc == 0x08844B54u) goto L_08844B54;
    return;
L_08844B54:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844B84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08844D94;
      }
      goto L_08844BB0;
    }
L_08844BB0:
    ctx.gpr[31] = (0x08844BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 6u, 0x08990074u>(ctx, &aot_mem) && ctx.pc == 0x08844BB8u) goto L_08844BB8;
    return;
L_08844BB8:
    ctx.gpr[31] = (0x08844BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 585u, 0x0898F5A4u>(ctx, &aot_mem) && ctx.pc == 0x08844BC0u) goto L_08844BC0;
    return;
L_08844BC0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x08844BD4u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 598u, 0x0898F954u>(ctx, &aot_mem) && ctx.pc == 0x08844BD4u) goto L_08844BD4;
    return;
L_08844BD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (17288u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[20] - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (17392u << 16u);
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08844C34u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 31u, 0x08990420u>(ctx, &aot_mem) && ctx.pc == 0x08844C34u) goto L_08844C34;
    return;
L_08844C34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[20];
    ctx.gpr[31] = (0x08844C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 29u, 0x089903C0u>(ctx, &aot_mem) && ctx.pc == 0x08844C5Cu) goto L_08844C5C;
    return;
L_08844C5C:
    ctx.gpr[31] = (0x08844C64u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 586u, 0x0898F6DCu>(ctx, &aot_mem) && ctx.pc == 0x08844C64u) goto L_08844C64;
    return;
L_08844C64:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08844C7Cu);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 642u, 0x0898B3A0u>(ctx, &aot_mem) && ctx.pc == 0x08844C7Cu) goto L_08844C7C;
    return;
L_08844C7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
        goto L_08844D84;
    }
    goto L_08844C8C;
L_08844C8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_08844CB8;
      }
      goto L_08844CA4;
    }
L_08844CA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08844CB0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 481u, 0x0898A7A8u>(ctx, &aot_mem) && ctx.pc == 0x08844CB0u) goto L_08844CB0;
    return;
L_08844CB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08844CF4;
      }
      goto L_08844CB8;
    }
L_08844CB8:
    ctx.gpr[31] = (0x08844CC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 394u, 0x089DE9F0u>(ctx, &aot_mem) && ctx.pc == 0x08844CC0u) goto L_08844CC0;
    return;
L_08844CC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08844CCCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 385u, 0x089DE94Cu>(ctx, &aot_mem) && ctx.pc == 0x08844CCCu) goto L_08844CCC;
    return;
L_08844CCC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-256));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08844CF0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 481u, 0x0898A7A8u>(ctx, &aot_mem) && ctx.pc == 0x08844CF0u) goto L_08844CF0;
    return;
L_08844CF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_08844CF4;
L_08844CF4:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
        goto L_08844D6C;
    }
    goto L_08844CFC;
L_08844CFC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    goto L_08844D6C;
L_08844D6C:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08844D80u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 474u, 0x0898A6BCu>(ctx, &aot_mem) && ctx.pc == 0x08844D80u) goto L_08844D80;
    return;
L_08844D80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_08844D84;
L_08844D84:
    ctx.gpr[31] = (0x08844D8Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 265u, 0x089953B0u>(ctx, &aot_mem) && ctx.pc == 0x08844D8Cu) goto L_08844D8C;
    return;
L_08844D8C:
    ctx.gpr[31] = (0x08844D94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 26u, 0x08990394u>(ctx, &aot_mem) && ctx.pc == 0x08844D94u) goto L_08844D94;
    return;
L_08844D94:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844DBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08844DD4;
      }
      goto L_08844DCC;
    }
L_08844DCC:
    ctx.gpr[31] = (0x08844DD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 773u, 0x08997FCCu>(ctx, &aot_mem) && ctx.pc == 0x08844DD4u) goto L_08844DD4;
    return;
L_08844DD4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844DE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08844DF8;
      }
      goto L_08844DF0;
    }
L_08844DF0:
    ctx.gpr[31] = (0x08844DF8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 40u, 0x089942ACu>(ctx, &aot_mem) && ctx.pc == 0x08844DF8u) goto L_08844DF8;
    return;
L_08844DF8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844E28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08844EC8;
      }
      goto L_08844E54;
    }
L_08844E54:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x08844E60u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 715u, 0x0884BD98u>(ctx, &aot_mem) && ctx.pc == 0x08844E60u) goto L_08844E60;
    return;
L_08844E60:
    ctx.gpr[31] = (0x08844E68u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 260u, 0x0898D448u>(ctx, &aot_mem) && ctx.pc == 0x08844E68u) goto L_08844E68;
    return;
L_08844E68:
    ctx.gpr[5] = (17288u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (17392u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08844EEC;
      }
      goto L_08844E84;
    }
L_08844E84:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08844E98u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08844E98u) goto L_08844E98;
    return;
L_08844E98:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08844EA4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08846000;
L_08844EA4:
    ctx.gpr[31] = (0x08844EACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 715u, 0x0884BD98u>(ctx, &aot_mem) && ctx.pc == 0x08844EACu) goto L_08844EAC;
    return;
L_08844EAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08844EC0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 137u, 0x0898CACCu>(ctx, &aot_mem) && ctx.pc == 0x08844EC0u) goto L_08844EC0;
    return;
L_08844EC0:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08844F0C;
      }
      goto L_08844EC8;
    }
L_08844EC8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844EEC:
    ctx.gpr[31] = (0x08844EF4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 715u, 0x0884BD98u>(ctx, &aot_mem) && ctx.pc == 0x08844EF4u) goto L_08844EF4;
    return;
L_08844EF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08844F08u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 137u, 0x0898CACCu>(ctx, &aot_mem) && ctx.pc == 0x08844F08u) goto L_08844F08;
    return;
L_08844F08:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_08844F0C;
L_08844F0C:
    ctx.gpr[4] = (16355u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 36409u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[22] / ctx.fpr[0];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844F40:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08844F5C;
      }
      goto L_08844F48;
    }
L_08844F48:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[2] = (0u | 1u);
        goto L_08844F64;
    }
    goto L_08844F54;
L_08844F54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 164u);
      if (branch_taken) {
          goto L_08844F68;
      }
      goto L_08844F5C;
    }
L_08844F5C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844F64:
    ctx.gpr[5] = (0u | 164u);
    goto L_08844F68;
L_08844F68:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 167u);
      if (branch_taken) {
          goto L_08844FD8;
      }
      goto L_08844F70;
    }
L_08844F70:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 169u);
      if (branch_taken) {
          goto L_08844FD8;
      }
      goto L_08844F78;
    }
L_08844F78:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 174u);
      if (branch_taken) {
          goto L_08844FD8;
      }
      goto L_08844F80;
    }
L_08844F80:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 176u);
      if (branch_taken) {
          goto L_08844FD8;
      }
      goto L_08844F88;
    }
L_08844F88:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8213u);
      if (branch_taken) {
          goto L_08844FD8;
      }
      goto L_08844F90;
    }
L_08844F90:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8230u);
      if (branch_taken) {
          goto L_08844FD8;
      }
      goto L_08844F98;
    }
L_08844F98:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8364u);
      if (branch_taken) {
          goto L_08844FD8;
      }
      goto L_08844FA0;
    }
L_08844FA0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8482u);
      if (branch_taken) {
          goto L_08844FD8;
      }
      goto L_08844FA8;
    }
L_08844FA8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8594u);
      if (branch_taken) {
          goto L_08844FD8;
      }
      goto L_08844FB0;
    }
L_08844FB0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12539u);
      if (branch_taken) {
          goto L_08844FD8;
      }
      goto L_08844FB8;
    }
L_08844FB8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 65340u);
      if (branch_taken) {
          goto L_08844FD8;
      }
      goto L_08844FC0;
    }
L_08844FC0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 65504u);
      if (branch_taken) {
          goto L_08844FD8;
      }
      goto L_08844FC8;
    }
L_08844FC8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 65505u);
      if (branch_taken) {
          goto L_08844FD8;
      }
      goto L_08844FD0;
    }
L_08844FD0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08844FE0;
      }
      goto L_08844FD8;
    }
L_08844FD8:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    goto L_08844FE0;
L_08844FE0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 127 ? 1u : 0u);
      if (branch_taken) {
          goto L_08844FF4;
      }
      goto L_08844FE8;
    }
L_08844FE8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08844FF4;
      }
      goto L_08844FF0;
    }
L_08844FF0:
    ctx.gpr[2] = (0u | 1u);
    goto L_08844FF4;
L_08844FF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844FFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088452E8;
      }
      goto L_08845040;
    }
L_08845040:
    ctx.gpr[31] = (0x08845048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 6u, 0x08990074u>(ctx, &aot_mem) && ctx.pc == 0x08845048u) goto L_08845048;
    return;
L_08845048:
    ctx.gpr[31] = (0x08845050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 585u, 0x0898F5A4u>(ctx, &aot_mem) && ctx.pc == 0x08845050u) goto L_08845050;
    return;
L_08845050:
    ctx.gpr[30] = (ctx.gpr[22] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x0884505Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 715u, 0x0884BD98u>(ctx, &aot_mem) && ctx.pc == 0x0884505Cu) goto L_0884505C;
    return;
L_0884505C:
    ctx.gpr[5] = (16355u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] | 36409u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (17392u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[18] = (ctx.gpr[22] + static_cast<std::uint32_t>(32));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088450A0;
      }
      goto L_08845090;
    }
L_08845090:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088450A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31972));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088450A0u) goto L_088450A0;
    return;
L_088450A0:
    ctx.gpr[31] = (0x088450A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 260u, 0x0898D448u>(ctx, &aot_mem) && ctx.pc == 0x088450A8u) goto L_088450A8;
    return;
L_088450A8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0884513C;
      }
      goto L_088450B0;
    }
L_088450B0:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088450C4u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088450C4u) goto L_088450C4;
    return;
L_088450C4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[18]);
    ctx.gpr[31] = (0x088450D0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 479u, 0x08AAE4DCu>(ctx, &aot_mem) && ctx.pc == 0x088450D0u) goto L_088450D0;
    return;
L_088450D0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08845128;
      }
      goto L_088450E4;
    }
L_088450E4:
    ctx.gpr[16] = (ctx.gpr[29] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[19] = (0u | 63u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    goto L_088450F4;
L_088450F4:
    ctx.gpr[31] = (0x088450FCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 408u, 0x08AAD900u>(ctx, &aot_mem) && ctx.pc == 0x088450FCu) goto L_088450FC;
    return;
L_088450FC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x08845108u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08844F40;
L_08845108:
    if (ctx.gpr[2] == 0u) {
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[19]));
        goto L_08845110;
    }
    goto L_08845110;
L_08845110:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088450F4;
      }
      goto L_08845124;
    }
L_08845124:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08845128;
L_08845128:
    ctx.gpr[31] = (0x08845130u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 545u, 0x08993D3Cu>(ctx, &aot_mem) && ctx.pc == 0x08845130u) goto L_08845130;
    return;
L_08845130:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08845148;
      }
      goto L_0884513C;
    }
L_0884513C:
    ctx.gpr[31] = (0x08845144u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 545u, 0x08993D3Cu>(ctx, &aot_mem) && ctx.pc == 0x08845144u) goto L_08845144;
    return;
L_08845144:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
    goto L_08845148;
L_08845148:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(296));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(300));
    ctx.gpr[31] = (0x0884515Cu);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 598u, 0x0898F954u>(ctx, &aot_mem) && ctx.pc == 0x0884515Cu) goto L_0884515C;
    return;
L_0884515C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08845180;
      }
      goto L_08845168;
    }
L_08845168:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08845200;
      }
      goto L_08845180;
    }
L_08845180:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088451CC;
      }
      goto L_08845188;
    }
L_08845188:
    ctx.gpr[31] = (0x08845190u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 715u, 0x0884BD98u>(ctx, &aot_mem) && ctx.pc == 0x08845190u) goto L_08845190;
    return;
L_08845190:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088451A4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 137u, 0x0898CACCu>(ctx, &aot_mem) && ctx.pc == 0x088451A4u) goto L_088451A4;
    return;
L_088451A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[4] = (16128u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08845200;
      }
      goto L_088451CC;
    }
L_088451CC:
    ctx.gpr[31] = (0x088451D4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 715u, 0x0884BD98u>(ctx, &aot_mem) && ctx.pc == 0x088451D4u) goto L_088451D4;
    return;
L_088451D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088451E8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 137u, 0x0898CACCu>(ctx, &aot_mem) && ctx.pc == 0x088451E8u) goto L_088451E8;
    return;
L_088451E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08845200;
L_08845200:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08845210u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31968));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08845210u) goto L_08845210;
    return;
L_08845210:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = ctx.fpr[22] - ctx.fpr[14];
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
      if (branch_taken) {
          goto L_08845244;
      }
      goto L_08845228;
    }
L_08845228:
    ctx.fpr[16] = ctx.fpr[13] / ctx.fpr[24];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[22];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845258;
      }
      goto L_08845244;
    }
L_08845244:
    ctx.fpr[16] = ctx.fpr[13] / ctx.fpr[24];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[22];
    goto L_08845258;
L_08845258:
    ctx.gpr[31] = (0x08845260u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 31u, 0x08990420u>(ctx, &aot_mem) && ctx.pc == 0x08845260u) goto L_08845260;
    return;
L_08845260:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[26])) && ctx.fpr[12] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08845290;
      }
      goto L_08845274;
    }
L_08845274:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[26])) && ctx.fpr[13] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08845290;
      }
      goto L_08845288;
    }
L_08845288:
    ctx.gpr[31] = (0x08845290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 29u, 0x089903C0u>(ctx, &aot_mem) && ctx.pc == 0x08845290u) goto L_08845290;
    return;
L_08845290:
    ctx.gpr[31] = (0x08845298u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 586u, 0x0898F6DCu>(ctx, &aot_mem) && ctx.pc == 0x08845298u) goto L_08845298;
    return;
L_08845298:
    ctx.gpr[31] = (0x088452A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(172)));
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 11u, 0x089940B4u>(ctx, &aot_mem) && ctx.pc == 0x088452A0u) goto L_088452A0;
    return;
L_088452A0:
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(168));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(176), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088452BCu);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 642u, 0x0898B3A0u>(ctx, &aot_mem) && ctx.pc == 0x088452BCu) goto L_088452BC;
    return;
L_088452BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    ctx.gpr[31] = (0x088452CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(172)));
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 39u, 0x089942A0u>(ctx, &aot_mem) && ctx.pc == 0x088452CCu) goto L_088452CC;
    return;
L_088452CC:
    ctx.gpr[31] = (0x088452D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(172)));
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 265u, 0x089953B0u>(ctx, &aot_mem) && ctx.pc == 0x088452D4u) goto L_088452D4;
    return;
L_088452D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (0x088452E0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 261u, 0x08995368u>(ctx, &aot_mem) && ctx.pc == 0x088452E0u) goto L_088452E0;
    return;
L_088452E0:
    ctx.gpr[31] = (0x088452E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 26u, 0x08990394u>(ctx, &aot_mem) && ctx.pc == 0x088452E8u) goto L_088452E8;
    return;
L_088452E8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845328:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08845608;
      }
      goto L_0884536C;
    }
L_0884536C:
    ctx.gpr[31] = (0x08845374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 6u, 0x08990074u>(ctx, &aot_mem) && ctx.pc == 0x08845374u) goto L_08845374;
    return;
L_08845374:
    ctx.gpr[31] = (0x0884537Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 585u, 0x0898F5A4u>(ctx, &aot_mem) && ctx.pc == 0x0884537Cu) goto L_0884537C;
    return;
L_0884537C:
    ctx.gpr[30] = (ctx.gpr[22] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x08845388u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 715u, 0x0884BD98u>(ctx, &aot_mem) && ctx.pc == 0x08845388u) goto L_08845388;
    return;
L_08845388:
    ctx.gpr[5] = (16355u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] | 36409u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (17392u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[18] = (ctx.gpr[22] + static_cast<std::uint32_t>(32));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088453CC;
      }
      goto L_088453BC;
    }
L_088453BC:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088453CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31972));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088453CCu) goto L_088453CC;
    return;
L_088453CC:
    ctx.gpr[31] = (0x088453D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 260u, 0x0898D448u>(ctx, &aot_mem) && ctx.pc == 0x088453D4u) goto L_088453D4;
    return;
L_088453D4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0884545C;
      }
      goto L_088453DC;
    }
L_088453DC:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088453ECu);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088453ECu) goto L_088453EC;
    return;
L_088453EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[18]);
    ctx.gpr[31] = (0x088453F8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 479u, 0x08AAE4DCu>(ctx, &aot_mem) && ctx.pc == 0x088453F8u) goto L_088453F8;
    return;
L_088453F8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_08845448;
      }
      goto L_0884540C;
    }
L_0884540C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[19] = (0u | 63u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    goto L_08845418;
L_08845418:
    ctx.gpr[31] = (0x08845420u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 408u, 0x08AAD900u>(ctx, &aot_mem) && ctx.pc == 0x08845420u) goto L_08845420;
    return;
L_08845420:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x0884542Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08844F40;
L_0884542C:
    if (ctx.gpr[2] == 0u) {
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[19]));
        goto L_08845434;
    }
    goto L_08845434;
L_08845434:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08845418;
      }
      goto L_08845448;
    }
L_08845448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (0x08845454u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 14u, 0x08994108u>(ctx, &aot_mem) && ctx.pc == 0x08845454u) goto L_08845454;
    return;
L_08845454:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08845468;
      }
      goto L_0884545C;
    }
L_0884545C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (0x08845468u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 14u, 0x08994108u>(ctx, &aot_mem) && ctx.pc == 0x08845468u) goto L_08845468;
    return;
L_08845468:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(296));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(300));
    ctx.gpr[31] = (0x0884547Cu);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 598u, 0x0898F954u>(ctx, &aot_mem) && ctx.pc == 0x0884547Cu) goto L_0884547C;
    return;
L_0884547C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088454A0;
      }
      goto L_08845488;
    }
L_08845488:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08845520;
      }
      goto L_088454A0;
    }
L_088454A0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088454EC;
      }
      goto L_088454A8;
    }
L_088454A8:
    ctx.gpr[31] = (0x088454B0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 715u, 0x0884BD98u>(ctx, &aot_mem) && ctx.pc == 0x088454B0u) goto L_088454B0;
    return;
L_088454B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088454C4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 137u, 0x0898CACCu>(ctx, &aot_mem) && ctx.pc == 0x088454C4u) goto L_088454C4;
    return;
L_088454C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[4] = (16128u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08845520;
      }
      goto L_088454EC;
    }
L_088454EC:
    ctx.gpr[31] = (0x088454F4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 715u, 0x0884BD98u>(ctx, &aot_mem) && ctx.pc == 0x088454F4u) goto L_088454F4;
    return;
L_088454F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08845508u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 137u, 0x0898CACCu>(ctx, &aot_mem) && ctx.pc == 0x08845508u) goto L_08845508;
    return;
L_08845508:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08845520;
L_08845520:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08845530u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31968));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08845530u) goto L_08845530;
    return;
L_08845530:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = ctx.fpr[22] - ctx.fpr[14];
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
      if (branch_taken) {
          goto L_08845564;
      }
      goto L_08845548;
    }
L_08845548:
    ctx.fpr[16] = ctx.fpr[13] / ctx.fpr[24];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[22];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845578;
      }
      goto L_08845564;
    }
L_08845564:
    ctx.fpr[16] = ctx.fpr[13] / ctx.fpr[24];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[22];
    goto L_08845578;
L_08845578:
    ctx.gpr[31] = (0x08845580u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 31u, 0x08990420u>(ctx, &aot_mem) && ctx.pc == 0x08845580u) goto L_08845580;
    return;
L_08845580:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[26])) && ctx.fpr[12] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088455B0;
      }
      goto L_08845594;
    }
L_08845594:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[26])) && ctx.fpr[13] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088455B0;
      }
      goto L_088455A8;
    }
L_088455A8:
    ctx.gpr[31] = (0x088455B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 29u, 0x089903C0u>(ctx, &aot_mem) && ctx.pc == 0x088455B0u) goto L_088455B0;
    return;
L_088455B0:
    ctx.gpr[31] = (0x088455B8u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 586u, 0x0898F6DCu>(ctx, &aot_mem) && ctx.pc == 0x088455B8u) goto L_088455B8;
    return;
L_088455B8:
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(168));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(176)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088455D0u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 642u, 0x0898B3A0u>(ctx, &aot_mem) && ctx.pc == 0x088455D0u) goto L_088455D0;
    return;
L_088455D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (0x088455DCu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 36u, 0x08994258u>(ctx, &aot_mem) && ctx.pc == 0x088455DCu) goto L_088455DC;
    return;
L_088455DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (0x088455E8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 12u, 0x089940D8u>(ctx, &aot_mem) && ctx.pc == 0x088455E8u) goto L_088455E8;
    return;
L_088455E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    ctx.gpr[31] = (0x088455F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(172)));
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 39u, 0x089942A0u>(ctx, &aot_mem) && ctx.pc == 0x088455F8u) goto L_088455F8;
    return;
L_088455F8:
    ctx.gpr[31] = (0x08845600u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(172)));
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 265u, 0x089953B0u>(ctx, &aot_mem) && ctx.pc == 0x08845600u) goto L_08845600;
    return;
L_08845600:
    ctx.gpr[31] = (0x08845608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 26u, 0x08990394u>(ctx, &aot_mem) && ctx.pc == 0x08845608u) goto L_08845608;
    return;
L_08845608:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845648:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5424)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(5428), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884565C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-256));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845678:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0884568Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 604u, 0x0898FA28u>(ctx, &aot_mem) && ctx.pc == 0x0884568Cu) goto L_0884568C;
    return;
L_0884568C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845698:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088456A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(22408));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088456CCu);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088456CCu) goto L_088456CC;
    return;
L_088456CC:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088456E4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088456E4u) goto L_088456E4;
    return;
L_088456E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088458FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[8]);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08845944u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08845944u) goto L_08845944;
    return;
L_08845944:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088459C0;
      }
      goto L_08845950;
    }
L_08845950:
    ctx.gpr[31] = (0x08845958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 741u, 0x0882EE90u>(ctx, &aot_mem) && ctx.pc == 0x08845958u) goto L_08845958;
    return;
L_08845958:
    if (ctx.gpr[20] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
        goto L_088459A0;
    }
    goto L_08845960;
L_08845960:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08845974u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08845974u) goto L_08845974;
    return;
L_08845974:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(204)));
    ctx.gpr[5] = (2220u << 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884598Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31940));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884598Cu) goto L_0884598C;
    return;
L_0884598C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08845998u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 720u, 0x0882ED10u>(ctx, &aot_mem) && ctx.pc == 0x08845998u) goto L_08845998;
    return;
L_08845998:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088459AC;
      }
      goto L_088459A0;
    }
L_088459A0:
    ctx.gpr[31] = (0x088459A8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 881u, 0x0882F7DCu>(ctx, &aot_mem) && ctx.pc == 0x088459A8u) goto L_088459A8;
    return;
L_088459A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    goto L_088459AC;
L_088459AC:
    ctx.gpr[31] = (0x088459B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x088459B4u) goto L_088459B4;
    return;
L_088459B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088459C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 261u, 0x0898D458u>(ctx, &aot_mem) && ctx.pc == 0x088459C0u) goto L_088459C0;
    return;
L_088459C0:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088459D0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 381u, 0x089D26B8u>(ctx, &aot_mem) && ctx.pc == 0x088459D0u) goto L_088459D0;
    return;
L_088459D0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08845A18;
      }
      goto L_088459DC;
    }
L_088459DC:
    ctx.gpr[5] = (0u | 409u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088459ECu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 288u, 0x089CD600u>(ctx, &aot_mem) && ctx.pc == 0x088459ECu) goto L_088459EC;
    return;
L_088459EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08845A10;
      }
      goto L_088459F4;
    }
L_088459F4:
    ctx.gpr[31] = (0x088459FCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 44u, 0x0898C32Cu>(ctx, &aot_mem) && ctx.pc == 0x088459FCu) goto L_088459FC;
    return;
L_088459FC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08845A0Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 238u, 0x0898D288u>(ctx, &aot_mem) && ctx.pc == 0x08845A0Cu) goto L_08845A0C;
    return;
L_08845A0C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08845A10;
L_08845A10:
    ctx.gpr[31] = (0x08845A18u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 356u, 0x089D258Cu>(ctx, &aot_mem) && ctx.pc == 0x08845A18u) goto L_08845A18;
    return;
L_08845A18:
    ctx.gpr[31] = (0x08845A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 444u, 0x0898A440u>(ctx, &aot_mem) && ctx.pc == 0x08845A20u) goto L_08845A20;
    return;
L_08845A20:
    ctx.gpr[4] = (0u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08845A44u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 642u, 0x0898B3A0u>(ctx, &aot_mem) && ctx.pc == 0x08845A44u) goto L_08845A44;
    return;
L_08845A44:
    ctx.gpr[31] = (0x08845A4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 262u, 0x0898D46Cu>(ctx, &aot_mem) && ctx.pc == 0x08845A4Cu) goto L_08845A4C;
    return;
L_08845A4C:
    ctx.gpr[5] = (2180u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08845A64u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22108));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 355u, 0x089DE5ACu>(ctx, &aot_mem) && ctx.pc == 0x08845A64u) goto L_08845A64;
    return;
L_08845A64:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08845A84u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08845A84u) goto L_08845A84;
    return;
L_08845A84:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845AB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08845AF4;
      }
      goto L_08845ACC;
    }
L_08845ACC:
    ctx.gpr[31] = (0x08845AD4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x08845AD4u) goto L_08845AD4;
    return;
L_08845AD4:
    ctx.gpr[31] = (0x08845ADCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x08845ADCu) goto L_08845ADC;
    return;
L_08845ADC:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08845AF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08845AF0u) goto L_08845AF0;
    return;
L_08845AF0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    goto L_08845AF4;
L_08845AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08845B14;
      }
      goto L_08845B00;
    }
L_08845B00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08845B10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08845B10u) goto L_08845B10;
    return;
L_08845B10:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    goto L_08845B14;
L_08845B14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08845B30;
    }
    goto L_08845B20;
L_08845B20:
    ctx.gpr[31] = (0x08845B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 452u, 0x0898A520u>(ctx, &aot_mem) && ctx.pc == 0x08845B28u) goto L_08845B28;
    return;
L_08845B28:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08845B30;
L_08845B30:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845B4C;
      }
      goto L_08845B38;
    }
L_08845B38:
    ctx.gpr[31] = (0x08845B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 240u, 0x0898D2A8u>(ctx, &aot_mem) && ctx.pc == 0x08845B40u) goto L_08845B40;
    return;
L_08845B40:
    ctx.gpr[31] = (0x08845B48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 153u, 0x0898CBF0u>(ctx, &aot_mem) && ctx.pc == 0x08845B48u) goto L_08845B48;
    return;
L_08845B48:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08845B4C;
L_08845B4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845B5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08845BA4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08845BA4u) goto L_08845BA4;
    return;
L_08845BA4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08845BB8u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 590u, 0x0898F7B8u>(ctx, &aot_mem) && ctx.pc == 0x08845BB8u) goto L_08845BB8;
    return;
L_08845BB8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08845BCCu);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 598u, 0x0898F954u>(ctx, &aot_mem) && ctx.pc == 0x08845BCCu) goto L_08845BCC;
    return;
L_08845BCC:
    ctx.gpr[31] = (0x08845BD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 134u, 0x0898C938u>(ctx, &aot_mem) && ctx.pc == 0x08845BD4u) goto L_08845BD4;
    return;
L_08845BD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16355u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 36409u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (17288u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[31] = (0x08845C1Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08845C1Cu) goto L_08845C1C;
    return;
L_08845C1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08845C30u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08845C30u) goto L_08845C30;
    return;
L_08845C30:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08845C40u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08845C40u) goto L_08845C40;
    return;
L_08845C40:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    goto L_08845C50;
L_08845C50:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
        goto L_08845C64;
    }
    goto L_08845C58;
L_08845C58:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08845C50;
      }
      goto L_08845C64;
    }
L_08845C64:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845C8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    ctx.gpr[31] = (0x08845CB8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 6u, 0x08990074u>(ctx, &aot_mem) && ctx.pc == 0x08845CB8u) goto L_08845CB8;
    return;
L_08845CB8:
    ctx.gpr[31] = (0x08845CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 585u, 0x0898F5A4u>(ctx, &aot_mem) && ctx.pc == 0x08845CC0u) goto L_08845CC0;
    return;
L_08845CC0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x08845CD0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 590u, 0x0898F7B8u>(ctx, &aot_mem) && ctx.pc == 0x08845CD0u) goto L_08845CD0;
    return;
L_08845CD0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    goto L_08845CE4;
L_08845CE4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
        goto L_08845D74;
    }
    goto L_08845CEC;
L_08845CEC:
    ctx.gpr[31] = (0x08845CF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 260u, 0x0898D448u>(ctx, &aot_mem) && ctx.pc == 0x08845CF4u) goto L_08845CF4;
    return;
L_08845CF4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08845D44;
      }
      goto L_08845CFC;
    }
L_08845CFC:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08845D08u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08845D08u) goto L_08845D08;
    return;
L_08845D08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08845D14u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08846000;
L_08845D14:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08845D20u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 134u, 0x0898C938u>(ctx, &aot_mem) && ctx.pc == 0x08845D20u) goto L_08845D20;
    return;
L_08845D20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08845D3Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 217u, 0x0898D030u>(ctx, &aot_mem) && ctx.pc == 0x08845D3Cu) goto L_08845D3C;
    return;
L_08845D3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08845D74;
      }
      goto L_08845D44;
    }
L_08845D44:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08845D54u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 134u, 0x0898C938u>(ctx, &aot_mem) && ctx.pc == 0x08845D54u) goto L_08845D54;
    return;
L_08845D54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08845D70u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 217u, 0x0898D030u>(ctx, &aot_mem) && ctx.pc == 0x08845D70u) goto L_08845D70;
    return;
L_08845D70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    goto L_08845D74;
L_08845D74:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
        goto L_08845D84;
    }
    goto L_08845D7C;
L_08845D7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08845D84;
      }
      goto L_08845D84;
    }
L_08845D84:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
        goto L_08845CE4;
    }
    goto L_08845D8C;
L_08845D8C:
    ctx.gpr[31] = (0x08845D94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08845DC4;
L_08845D94:
    ctx.gpr[31] = (0x08845D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 26u, 0x08990394u>(ctx, &aot_mem) && ctx.pc == 0x08845D9Cu) goto L_08845D9C;
    return;
L_08845D9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845DC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_08845DF4;
L_08845DF4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08845E14;
      }
      goto L_08845DFC;
    }
L_08845DFC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08845E0C;
      }
      goto L_08845E04;
    }
L_08845E04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08845E88;
      }
      goto L_08845E0C;
    }
L_08845E0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08845E88;
      }
      goto L_08845E14;
    }
L_08845E14:
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
        goto L_08845E54;
    }
    goto L_08845E1C;
L_08845E1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08845E30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08845E30u) goto L_08845E30;
    return;
L_08845E30:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08845E4Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08845E4Cu) goto L_08845E4C;
    return;
L_08845E4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08845E88;
      }
      goto L_08845E54;
    }
L_08845E54:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08845E6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08845E6Cu) goto L_08845E6C;
    return;
L_08845E6C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08845E88u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08845E88u) goto L_08845E88;
    return;
L_08845E88:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
        goto L_08845DF4;
    }
    goto L_08845E90;
L_08845E90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
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
L_08845EC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08845EE0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 590u, 0x0898F7B8u>(ctx, &aot_mem) && ctx.pc == 0x08845EE0u) goto L_08845EE0;
    return;
L_08845EE0:
    ctx.gpr[31] = (0x08845EE8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 134u, 0x0898C938u>(ctx, &aot_mem) && ctx.pc == 0x08845EE8u) goto L_08845EE8;
    return;
L_08845EE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[12];
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845F00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    ctx.gpr[31] = (0x08845F30u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 590u, 0x0898F7B8u>(ctx, &aot_mem) && ctx.pc == 0x08845F30u) goto L_08845F30;
    return;
L_08845F30:
    ctx.gpr[31] = (0x08845F38u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 134u, 0x0898C938u>(ctx, &aot_mem) && ctx.pc == 0x08845F38u) goto L_08845F38;
    return;
L_08845F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08845F44u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 260u, 0x0898D448u>(ctx, &aot_mem) && ctx.pc == 0x08845F44u) goto L_08845F44;
    return;
L_08845F44:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08845F8C;
      }
      goto L_08845F50;
    }
L_08845F50:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08845F60u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08845F60u) goto L_08845F60;
    return;
L_08845F60:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08845F6Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08846000;
L_08845F6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08845F7Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 137u, 0x0898CACCu>(ctx, &aot_mem) && ctx.pc == 0x08845F7Cu) goto L_08845F7C;
    return;
L_08845F7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845FA4;
      }
      goto L_08845F8C;
    }
L_08845F8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08845F9Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 137u, 0x0898CACCu>(ctx, &aot_mem) && ctx.pc == 0x08845F9Cu) goto L_08845F9C;
    return;
L_08845F9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[12];
    goto L_08845FA4;
L_08845FA4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845FC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (0u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08845FECu);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 642u, 0x0898B3A0u>(ctx, &aot_mem) && ctx.pc == 0x08845FECu) goto L_08845FEC;
    return;
L_08845FEC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845FF8:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846000:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08846028u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 479u, 0x08AAE4DCu>(ctx, &aot_mem) && ctx.pc == 0x08846028u) goto L_08846028;
    return;
L_08846028:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08846058;
      }
      goto L_0884603C;
    }
L_0884603C:
    ctx.gpr[31] = (0x08846044u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 408u, 0x08AAD900u>(ctx, &aot_mem) && ctx.pc == 0x08846044u) goto L_08846044;
    return;
L_08846044:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0884603C;
      }
      goto L_08846058;
    }
L_08846058:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846074:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5432)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(5436), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846088:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x088460C8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 303u, 0x08985B44u>(ctx, &aot_mem) && ctx.pc == 0x088460C8u) goto L_088460C8;
    return;
L_088460C8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846234:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08846270u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 135u, 0x08984CC8u>(ctx, &aot_mem) && ctx.pc == 0x08846270u) goto L_08846270;
    return;
L_08846270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08846288u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 157u, 0x08984E34u>(ctx, &aot_mem) && ctx.pc == 0x08846288u) goto L_08846288;
    return;
L_08846288:
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
L_088462A0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5440)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(5444), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088465F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08846620u);
    ctx.gpr[4] = (0u | 10u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08846620u) goto L_08846620;
    return;
L_08846620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08846634u);
    ctx.gpr[4] = (0u | 11u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08846634u) goto L_08846634;
    return;
L_08846634:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 6u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08846648u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08846648u) goto L_08846648;
    return;
L_08846648:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 8u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884665Cu);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884665Cu) goto L_0884665C;
    return;
L_0884665C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 12u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08846670u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08846670u) goto L_08846670;
    return;
L_08846670:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 10u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08846684u);
    ctx.gpr[5] = (0u | 5u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08846684u) goto L_08846684;
    return;
L_08846684:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 11u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08846698u);
    ctx.gpr[5] = (0u | 6u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08846698u) goto L_08846698;
    return;
L_08846698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088466B0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088466B0u) goto L_088466B0;
    return;
L_088466B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088466C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088466F0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088466F0u) goto L_088466F0;
    return;
L_088466F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 8u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08846704u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08846704u) goto L_08846704;
    return;
L_08846704:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 12u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08846718u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08846718u) goto L_08846718;
    return;
L_08846718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884672Cu);
    ctx.gpr[4] = (0u | 10u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884672Cu) goto L_0884672C;
    return;
L_0884672C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08846740u);
    ctx.gpr[4] = (0u | 11u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08846740u) goto L_08846740;
    return;
L_08846740:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846754:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5448)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(5452), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846768:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 264u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0884678Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884678Cu) goto L_0884678C;
    return;
L_0884678C:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(5468), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088467A4u);
    ctx.gpr[6] = (0u | 264u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088467A4u) goto L_088467A4;
    return;
L_088467A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[5] = (50048u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17216u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17280u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17044u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[31] = (0x08846844u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    goto L_088447A4;
L_08846844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884685C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08846870u);
    // nop
    goto L_08846DA0;
L_08846870:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[31] = (0x08846880u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    goto L_08844B08;
L_08846880:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08846894u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08846894u) goto L_08846894;
    return;
L_08846894:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(5468), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088468A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088468E8;
      }
      goto L_088468D0;
    }
L_088468D0:
    ctx.gpr[31] = (0x088468D8u);
    // nop
    goto L_08846C54;
L_088468D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[5] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088468E8;
L_088468E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088468FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088469B0;
      }
      goto L_08846924;
    }
L_08846924:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 60 ? 1u : 0u);
      if (branch_taken) {
          goto L_08846A3C;
      }
      goto L_08846934;
    }
L_08846934:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 281 ? 1u : 0u);
      if (branch_taken) {
          goto L_08846958;
      }
      goto L_0884693C;
    }
L_0884693C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 281 ? 1u : 0u);
    goto L_08846958;
L_08846958:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884697C;
      }
      goto L_08846960;
    }
L_08846960:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_0884697C;
L_0884697C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 320 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (50048u << 16u);
      if (branch_taken) {
          goto L_088469A0;
      }
      goto L_0884698C;
    }
L_0884698C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[31] = (0x0884699Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08846DA0;
L_0884699C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    goto L_088469A0;
L_088469A0:
    ctx.gpr[31] = (0x088469A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    goto L_08844B84;
L_088469A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08846A3C;
      }
      goto L_088469B0;
    }
L_088469B0:
    ctx.gpr[31] = (0x088469B8u);
    // nop
    ctx.pc = 0x08AB414Cu;
    return;
L_088469B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_088469DC;
      }
      goto L_088469C4;
    }
L_088469C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088469DC;
      }
      goto L_088469CC;
    }
L_088469CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_088469DC;
      }
      goto L_088469D4;
    }
L_088469D4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088469E8;
      }
      goto L_088469DC;
    }
L_088469DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[5] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088469E8;
L_088469E8:
    ctx.gpr[31] = (0x088469F0u);
    // nop
    ctx.pc = 0x08AB4164u;
    return;
L_088469F0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
      if (branch_taken) {
          goto L_08846A18;
      }
      goto L_088469FC;
    }
L_088469FC:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_08846A18;
      }
      goto L_08846A08;
    }
L_08846A08:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 4u);
      if (branch_taken) {
          goto L_08846A18;
      }
      goto L_08846A10;
    }
L_08846A10:
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08846A24;
    }
    goto L_08846A18;
L_08846A18:
    ctx.gpr[5] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08846A24;
L_08846A24:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08846A34;
      }
      goto L_08846A2C;
    }
L_08846A2C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08846A3C;
      }
      goto L_08846A34;
    }
L_08846A34:
    ctx.gpr[31] = (0x08846A3Cu);
    // nop
    goto L_08846AD8;
L_08846A3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846A50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08846A64u);
    // nop
    goto L_08846AC8;
L_08846A64:
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08846AB8;
      }
      goto L_08846A70;
    }
L_08846A70:
    ctx.gpr[31] = (0x08846A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 438u, 0x0884DB74u>(ctx, &aot_mem) && ctx.pc == 0x08846A78u) goto L_08846A78;
    return;
L_08846A78:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08846AB8;
      }
      goto L_08846A80;
    }
L_08846A80:
    ctx.gpr[31] = (0x08846A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 442u, 0x0884DBB4u>(ctx, &aot_mem) && ctx.pc == 0x08846A88u) goto L_08846A88;
    return;
L_08846A88:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08846AB8;
      }
      goto L_08846A90;
    }
L_08846A90:
    ctx.gpr[31] = (0x08846A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 431u, 0x0884DB18u>(ctx, &aot_mem) && ctx.pc == 0x08846A98u) goto L_08846A98;
    return;
L_08846A98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08846AB8;
      }
      goto L_08846AA0;
    }
L_08846AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08846AB8;
      }
      goto L_08846AB0;
    }
L_08846AB0:
    ctx.gpr[31] = (0x08846AB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    goto L_08844DBC;
L_08846AB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846AC8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5468)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846AD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08846B88;
      }
      goto L_08846B04;
    }
L_08846B04:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08846C34;
      }
      goto L_08846B0C;
    }
L_08846B0C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08846B1Cu);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08846B1Cu) goto L_08846B1C;
    return;
L_08846B1C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5456)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08846B34u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31720));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08846B34u) goto L_08846B34;
    return;
L_08846B34:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08846B48u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08846B48u) goto L_08846B48;
    return;
L_08846B48:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08846B58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5472));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08846B58u) goto L_08846B58;
    return;
L_08846B58:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08846B64u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08846B64u) goto L_08846B64;
    return;
L_08846B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(156));
    ctx.gpr[31] = (0x08846B78u);
    ctx.gpr[6] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x08846B78u) goto L_08846B78;
    return;
L_08846B78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08846C34;
      }
      goto L_08846B88;
    }
L_08846B88:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08846BA4;
      }
      goto L_08846B94;
    }
L_08846B94:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 1u);
        goto L_08846C34;
    }
    goto L_08846B9C;
L_08846B9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08846C34;
      }
      goto L_08846BA4;
    }
L_08846BA4:
    ctx.gpr[31] = (0x08846BACu);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(156));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 487u, 0x08809EA8u>(ctx, &aot_mem) && ctx.pc == 0x08846BACu) goto L_08846BAC;
    return;
L_08846BAC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08846C34;
      }
      goto L_08846BB8;
    }
L_08846BB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[31] = (0x08846BC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(220));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x08846BC4u) goto L_08846BC4;
    return;
L_08846BC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(256));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(220));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08846BF0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08846BF0u) goto L_08846BF0;
    return;
L_08846BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08846C00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 881u, 0x0882F7DCu>(ctx, &aot_mem) && ctx.pc == 0x08846C00u) goto L_08846C00;
    return;
L_08846C00:
    ctx.gpr[31] = (0x08846C08u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 555u, 0x0880A5E8u>(ctx, &aot_mem) && ctx.pc == 0x08846C08u) goto L_08846C08;
    return;
L_08846C08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[31] = (0x08846C14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x08846C14u) goto L_08846C14;
    return;
L_08846C14:
    ctx.gpr[31] = (0x08846C1Cu);
    // nop
    goto L_08846CA0;
L_08846C1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08846C34;
      }
      goto L_08846C34;
    }
L_08846C34:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846C54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08846C74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 741u, 0x0882EE90u>(ctx, &aot_mem) && ctx.pc == 0x08846C74u) goto L_08846C74;
    return;
L_08846C74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(120));
    ctx.gpr[31] = (0x08846C88u);
    ctx.gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08846C88u) goto L_08846C88;
    return;
L_08846C88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846CA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.gpr[31] = (0x08846CC4u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08846CC4u) goto L_08846CC4;
    return;
L_08846CC4:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31708));
    ctx.gpr[31] = (0x08846CE4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08846CE4u) goto L_08846CE4;
    return;
L_08846CE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[5] = (50048u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17216u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5468)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17280u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5468)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17044u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5468)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5468)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[31] = (0x08846D8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    goto L_08844B84;
L_08846D8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846DA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08846DE8;
      }
      goto L_08846DC4;
    }
L_08846DC4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[31] = (0x08846DD4u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    goto L_08844B84;
L_08846DD4:
    ctx.gpr[31] = (0x08846DDCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x08846DDCu) goto L_08846DDC;
    return;
L_08846DDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[31] = (0x08846DE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x08846DE8u) goto L_08846DE8;
    return;
L_08846DE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846DF8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5460)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(5464), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846E0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5552)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (2222u << 16u);
      if (branch_taken) {
          goto L_08846E64;
      }
      goto L_08846E3C;
    }
L_08846E3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08846E50u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08846E50u) goto L_08846E50;
    return;
L_08846E50:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(5552), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08846E64u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08846E64u) goto L_08846E64;
    return;
L_08846E64:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 13u);
    if (ctx.gpr[16] == ctx.gpr[5]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08846E74;
    }
    goto L_08846E74;
L_08846E74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5552)));
    ctx.gpr[16] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5552)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08846EA4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08846EA4u) goto L_08846EA4;
    return;
L_08846EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5552)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5552)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08846EC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08846EC8u) goto L_08846EC8;
    return;
L_08846EC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5552)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08846EE0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08846EE0u) goto L_08846EE0;
    return;
L_08846EE0:
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
L_08846EFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5552)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_08846F84;
      }
      goto L_08846F24;
    }
L_08846F24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    goto L_08846F34;
L_08846F34:
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08846F68;
    }
    goto L_08846F44;
L_08846F44:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08846F50u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08846F50u) goto L_08846F50;
    return;
L_08846F50:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5552)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08846F68;
L_08846F68:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08846F34;
      }
      goto L_08846F74;
    }
L_08846F74:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08846F80u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08846F80u) goto L_08846F80;
    return;
L_08846F80:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(5552), 0u);
    goto L_08846F84;
L_08846F84:
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
L_08846FA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    ctx.gpr[22] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 96u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08846FE0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08846FE0u) goto L_08846FE0;
    return;
L_08846FE0:
    ctx.gpr[21] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(5556), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08846FF8u);
    ctx.gpr[6] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08846FF8u) goto L_08846FF8;
    return;
L_08846FF8:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(100));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5504));
    goto L_08847010;
L_08847010:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0884701Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x0884701Cu) goto L_0884701C;
    return;
L_0884701C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0884702Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x0884702Cu) goto L_0884702C;
    return;
L_0884702C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(5556)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(5556)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08847058u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08847058u) goto L_08847058;
    return;
L_08847058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(5556)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(5556)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0884707Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0884707Cu) goto L_0884707C;
    return;
L_0884707C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(5556)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08847094u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08847094u) goto L_08847094;
    return;
L_08847094:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08847010;
      }
      goto L_088470A8;
    }
L_088470A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088470D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5556)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_08847158;
      }
      goto L_088470F8;
    }
L_088470F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    goto L_08847108;
L_08847108:
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_0884713C;
    }
    goto L_08847118;
L_08847118:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08847124u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08847124u) goto L_08847124;
    return;
L_08847124:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(5556)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0884713C;
L_0884713C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08847108;
      }
      goto L_08847148;
    }
L_08847148:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08847154u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08847154u) goto L_08847154;
    return;
L_08847154:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(5556), 0u);
    goto L_08847158;
L_08847158:
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
L_08847174:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088471A4;
      }
      goto L_0884718C;
    }
L_0884718C:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088471A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088471A0u) goto L_088471A0;
    return;
L_088471A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    goto L_088471A4;
L_088471A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_088471C4;
      }
      goto L_088471B0;
    }
L_088471B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088471C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088471C0u) goto L_088471C0;
    return;
L_088471C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    goto L_088471C4;
L_088471C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088471D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19848));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19864));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[31]);
    ctx.gpr[31] = (0x08847258u);
    ctx.gpr[6] = (0u | 3456u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08847258u) goto L_08847258;
    return;
L_08847258:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08847270u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 621u, 0x0880ABA0u>(ctx, &aot_mem) && ctx.pc == 0x08847270u) goto L_08847270;
    return;
L_08847270:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[18] + ctx.gpr[20]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[30] = (2220u << 16u);
    ctx.gpr[23] = (2220u << 16u);
    ctx.gpr[22] = (2220u << 16u);
    ctx.gpr[21] = (2220u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(68));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-31452));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-31440));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-31432));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-31424));
    goto L_088472A4;
L_088472A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088472A8;
L_088472A8:
    ctx.gpr[31] = (0x088472B0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088472B0u) goto L_088472B0;
    return;
L_088472B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08847330;
      }
      goto L_088472B8;
    }
L_088472B8:
    ctx.gpr[31] = (0x088472C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x088472C0u) goto L_088472C0;
    return;
L_088472C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088472CCu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088472CCu) goto L_088472CC;
    return;
L_088472CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088472E4;
      }
      goto L_088472D4;
    }
L_088472D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088472E0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x088472E0u) goto L_088472E0;
    return;
L_088472E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088472E4;
L_088472E4:
    ctx.gpr[31] = (0x088472ECu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088472ECu) goto L_088472EC;
    return;
L_088472EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08847304;
      }
      goto L_088472F4;
    }
L_088472F4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08847300u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08847300u) goto L_08847300;
    return;
L_08847300:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08847304;
L_08847304:
    ctx.gpr[31] = (0x0884730Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0884730Cu) goto L_0884730C;
    return;
L_0884730C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088472A8;
      }
      goto L_08847314;
    }
L_08847314:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08847320u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08847320u) goto L_08847320;
    return;
L_08847320:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(108));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(108));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(108));
      if (branch_taken) {
          goto L_088472A4;
      }
      goto L_08847330;
    }
L_08847330:
    ctx.gpr[31] = (0x08847338u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08847338u) goto L_08847338;
    return;
L_08847338:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08847348u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08847348u) goto L_08847348;
    return;
L_08847348:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847378:
    ctx.gpr[2] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5552)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884738C:
    ctx.gpr[2] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5556)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088473A0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088473B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-416));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19864));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5556)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[31]);
    ctx.gpr[31] = (0x08847440u);
    ctx.gpr[21] = (ctx.gpr[7] + static_cast<std::uint32_t>(19848));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 621u, 0x0880ABA0u>(ctx, &aot_mem) && ctx.pc == 0x08847440u) goto L_08847440;
    return;
L_08847440:
    ctx.gpr[31] = (0x08847448u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_088473A0;
L_08847448:
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31376));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[4]);
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31348));
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31336));
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31328));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[4]);
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31392));
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31384));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31356));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[5]);
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31340));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[5]);
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31416));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31400));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[21]);
    ctx.gpr[21] = (2220u << 16u);
    ctx.gpr[30] = (2220u << 16u);
    ctx.gpr[23] = (2220u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-31364));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-31312));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-31304));
    ctx.gpr[22] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    goto L_08847500;
L_08847500:
    ctx.gpr[31] = (0x08847508u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08847508u) goto L_08847508;
    return;
L_08847508:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
        goto L_0884780C;
    }
    goto L_08847510;
L_08847510:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[31] = (0x0884751Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0884751Cu) goto L_0884751C;
    return;
L_0884751C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088477F8;
      }
      goto L_08847524;
    }
L_08847524:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08847530u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08847530u) goto L_08847530;
    return;
L_08847530:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[31] = (0x0884753Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0884753Cu) goto L_0884753C;
    return;
L_0884753C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
      if (branch_taken) {
          goto L_088477F4;
      }
      goto L_08847544;
    }
L_08847544:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[31] = (0x08847550u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08847550u) goto L_08847550;
    return;
L_08847550:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088477F8;
      }
      goto L_08847558;
    }
L_08847558:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x08847564u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08847564u) goto L_08847564;
    return;
L_08847564:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
        goto L_088475C8;
    }
    goto L_0884756C;
L_0884756C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[31] = (0x08847578u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08847578u) goto L_08847578;
    return;
L_08847578:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088477E4;
      }
      goto L_08847580;
    }
L_08847580:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0884758Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x0884758Cu) goto L_0884758C;
    return;
L_0884758C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08847598u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08847598u) goto L_08847598;
    return;
L_08847598:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0884756C;
      }
      goto L_088475A0;
    }
L_088475A0:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088475ACu);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088475ACu) goto L_088475AC;
    return;
L_088475AC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088475B8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x088475B8u) goto L_088475B8;
    return;
L_088475B8:
    ctx.gpr[31] = (0x088475C0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x088475C0u) goto L_088475C0;
    return;
L_088475C0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0884756C;
      }
      goto L_088475C8;
    }
L_088475C8:
    ctx.gpr[31] = (0x088475D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088475D0u) goto L_088475D0;
    return;
L_088475D0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
        goto L_08847638;
    }
    goto L_088475D8;
L_088475D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088475DC;
L_088475DC:
    ctx.gpr[31] = (0x088475E4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088475E4u) goto L_088475E4;
    return;
L_088475E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088477E4;
      }
      goto L_088475EC;
    }
L_088475EC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088475F8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x088475F8u) goto L_088475F8;
    return;
L_088475F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08847604u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08847604u) goto L_08847604;
    return;
L_08847604:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088475DC;
      }
      goto L_0884760C;
    }
L_0884760C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0884761Cu);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0884761Cu) goto L_0884761C;
    return;
L_0884761C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08847628u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08847628u) goto L_08847628;
    return;
L_08847628:
    ctx.gpr[31] = (0x08847630u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x08847630u) goto L_08847630;
    return;
L_08847630:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088475D8;
      }
      goto L_08847638;
    }
L_08847638:
    ctx.gpr[31] = (0x08847640u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08847640u) goto L_08847640;
    return;
L_08847640:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08847708;
      }
      goto L_08847648;
    }
L_08847648:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    goto L_0884764C;
L_0884764C:
    ctx.gpr[31] = (0x08847654u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08847654u) goto L_08847654;
    return;
L_08847654:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088477E4;
      }
      goto L_0884765C;
    }
L_0884765C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08847668u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08847668u) goto L_08847668;
    return;
L_08847668:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08847674u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08847674u) goto L_08847674;
    return;
L_08847674:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088476DC;
      }
      goto L_0884767C;
    }
L_0884767C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08847688u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08847688u) goto L_08847688;
    return;
L_08847688:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08847694u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08847694u) goto L_08847694;
    return;
L_08847694:
    ctx.gpr[31] = (0x0884769Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x0884769Cu) goto L_0884769C;
    return;
L_0884769C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08847648;
      }
      goto L_088476A8;
    }
L_088476A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088476BCu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088476BCu) goto L_088476BC;
    return;
L_088476BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088476D4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088476D4u) goto L_088476D4;
    return;
L_088476D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
      if (branch_taken) {
          goto L_0884764C;
      }
      goto L_088476DC;
    }
L_088476DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[31] = (0x088476E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088476E8u) goto L_088476E8;
    return;
L_088476E8:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
        goto L_0884764C;
    }
    goto L_088476F0;
L_088476F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08847700u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08847700u) goto L_08847700;
    return;
L_08847700:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08847648;
      }
      goto L_08847708;
    }
L_08847708:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[31] = (0x08847714u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08847714u) goto L_08847714;
    return;
L_08847714:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088477E4;
      }
      goto L_0884771C;
    }
L_0884771C:
    ctx.gpr[17] = (0u | 0u);
    goto L_08847720;
L_08847720:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08847724;
L_08847724:
    ctx.gpr[31] = (0x0884772Cu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0884772Cu) goto L_0884772C;
    return;
L_0884772C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088477E4;
      }
      goto L_08847734;
    }
L_08847734:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08847740u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08847740u) goto L_08847740;
    return;
L_08847740:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0884774Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0884774Cu) goto L_0884774C;
    return;
L_0884774C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088477BC;
      }
      goto L_08847754;
    }
L_08847754:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08847764u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08847764u) goto L_08847764;
    return;
L_08847764:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08847770u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08847770u) goto L_08847770;
    return;
L_08847770:
    ctx.gpr[31] = (0x08847778u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x08847778u) goto L_08847778;
    return;
L_08847778:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08847720;
      }
      goto L_08847784;
    }
L_08847784:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08847798u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08847798u) goto L_08847798;
    return;
L_08847798:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088477B0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088477B0u) goto L_088477B0;
    return;
L_088477B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08847724;
      }
      goto L_088477B8;
    }
L_088477B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088477BC;
L_088477BC:
    ctx.gpr[31] = (0x088477C4u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088477C4u) goto L_088477C4;
    return;
L_088477C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08847724;
      }
      goto L_088477CC;
    }
L_088477CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088477DCu);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x088477DCu) goto L_088477DC;
    return;
L_088477DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08847720;
      }
      goto L_088477E4;
    }
L_088477E4:
    ctx.gpr[31] = (0x088477ECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x088477ECu) goto L_088477EC;
    return;
L_088477EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
      if (branch_taken) {
          goto L_08847544;
      }
      goto L_088477F4;
    }
L_088477F4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_088477F8;
L_088477F8:
    ctx.gpr[31] = (0x08847800u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08847800u) goto L_08847800;
    return;
L_08847800:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
      if (branch_taken) {
          goto L_08847500;
      }
      goto L_08847808;
    }
L_08847808:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    goto L_0884780C;
L_0884780C:
    ctx.gpr[31] = (0x08847814u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08847814u) goto L_08847814;
    return;
L_08847814:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[31] = (0x08847820u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08847820u) goto L_08847820;
    return;
L_08847820:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847850:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-448));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19864));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[31]);
    ctx.gpr[31] = (0x088478DCu);
    ctx.gpr[17] = (ctx.gpr[7] + static_cast<std::uint32_t>(19848));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 621u, 0x0880ABA0u>(ctx, &aot_mem) && ctx.pc == 0x088478DCu) goto L_088478DC;
    return;
L_088478DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088478ECu);
    ctx.gpr[6] = (0u | 9976u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088478ECu) goto L_088478EC;
    return;
L_088478EC:
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31204));
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31196));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31188));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[5]);
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31180));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31172));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[5]);
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31164));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[4]);
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31220));
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31256));
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31248));
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31212));
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[4]);
    ctx.gpr[23] = (2220u << 16u);
    ctx.gpr[21] = (2220u << 16u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[22] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[17]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-31152));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-31228));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    goto L_088479A4;
L_088479A4:
    ctx.gpr[31] = (0x088479ACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088479ACu) goto L_088479AC;
    return;
L_088479AC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
        goto L_08847C84;
    }
    goto L_088479B4;
L_088479B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[31] = (0x088479C0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088479C0u) goto L_088479C0;
    return;
L_088479C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[30] << 4u);
      if (branch_taken) {
          goto L_08847A74;
      }
      goto L_088479C8;
    }
L_088479C8:
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    goto L_088479EC;
L_088479EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[31] = (0x088479F8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088479F8u) goto L_088479F8;
    return;
L_088479F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08847A74;
      }
      goto L_08847A00;
    }
L_08847A00:
    ctx.gpr[31] = (0x08847A08u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08847A08u) goto L_08847A08;
    return;
L_08847A08:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08847A14u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08847A14u) goto L_08847A14;
    return;
L_08847A14:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
        goto L_08847A30;
    }
    goto L_08847A1C;
L_08847A1C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08847A2Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08847A2Cu) goto L_08847A2C;
    return;
L_08847A2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    goto L_08847A30;
L_08847A30:
    ctx.gpr[31] = (0x08847A38u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08847A38u) goto L_08847A38;
    return;
L_08847A38:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088479EC;
      }
      goto L_08847A40;
    }
L_08847A40:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08847A4Cu);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08847A4Cu) goto L_08847A4C;
    return;
L_08847A4C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08847A58u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08847A58u) goto L_08847A58;
    return;
L_08847A58:
    ctx.gpr[31] = (0x08847A60u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x08847A60u) goto L_08847A60;
    return;
L_08847A60:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(172));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(172));
      if (branch_taken) {
          goto L_088479EC;
      }
      goto L_08847A74;
    }
L_08847A74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[21]);
    ctx.gpr[31] = (0x08847A88u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08847A88u) goto L_08847A88;
    return;
L_08847A88:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[30] << 4u);
      if (branch_taken) {
          goto L_08847BD8;
      }
      goto L_08847A90;
    }
L_08847A90:
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(136));
    goto L_08847AC0;
L_08847AC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    goto L_08847AC4;
L_08847AC4:
    ctx.gpr[31] = (0x08847ACCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08847ACCu) goto L_08847ACC;
    return;
L_08847ACC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08847BD8;
      }
      goto L_08847AD4;
    }
L_08847AD4:
    ctx.gpr[31] = (0x08847ADCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08847ADCu) goto L_08847ADC;
    return;
L_08847ADC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[31] = (0x08847AE8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08847AE8u) goto L_08847AE8;
    return;
L_08847AE8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08847B00;
      }
      goto L_08847AF0;
    }
L_08847AF0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08847B00u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08847B00u) goto L_08847B00;
    return;
L_08847B00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[31] = (0x08847B0Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08847B0Cu) goto L_08847B0C;
    return;
L_08847B0C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08847B1C;
      }
      goto L_08847B14;
    }
L_08847B14:
    ctx.gpr[31] = (0x08847B1Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08847B1Cu) goto L_08847B1C;
    return;
L_08847B1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[31] = (0x08847B28u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08847B28u) goto L_08847B28;
    return;
L_08847B28:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08847B38;
      }
      goto L_08847B30;
    }
L_08847B30:
    ctx.gpr[31] = (0x08847B38u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08847B38u) goto L_08847B38;
    return;
L_08847B38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x08847B44u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08847B44u) goto L_08847B44;
    return;
L_08847B44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08847B54;
      }
      goto L_08847B4C;
    }
L_08847B4C:
    ctx.gpr[31] = (0x08847B54u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08847B54u) goto L_08847B54;
    return;
L_08847B54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[31] = (0x08847B60u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08847B60u) goto L_08847B60;
    return;
L_08847B60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08847B70;
      }
      goto L_08847B68;
    }
L_08847B68:
    ctx.gpr[31] = (0x08847B70u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08847B70u) goto L_08847B70;
    return;
L_08847B70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[31] = (0x08847B7Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08847B7Cu) goto L_08847B7C;
    return;
L_08847B7C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
        goto L_08847AC4;
    }
    goto L_08847B84;
L_08847B84:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08847B9Cu);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08847B9Cu) goto L_08847B9C;
    return;
L_08847B9C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08847BA8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08847BA8u) goto L_08847BA8;
    return;
L_08847BA8:
    ctx.gpr[31] = (0x08847BB0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x08847BB0u) goto L_08847BB0;
    return;
L_08847BB0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), ctx.gpr[2]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(172));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(172));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(172));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(172));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(172));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(172));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
      if (branch_taken) {
          goto L_08847AC0;
      }
      goto L_08847BD8;
    }
L_08847BD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[31] = (0x08847BE4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08847BE4u) goto L_08847BE4;
    return;
L_08847BE4:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[22] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
      if (branch_taken) {
          goto L_08847C6C;
      }
      goto L_08847BF4;
    }
L_08847BF4:
    ctx.gpr[4] = (ctx.gpr[30] << 4u);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_08847C18;
L_08847C18:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08847C1C;
L_08847C1C:
    ctx.gpr[31] = (0x08847C24u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08847C24u) goto L_08847C24;
    return;
L_08847C24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08847C70;
      }
      goto L_08847C2C;
    }
L_08847C2C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08847C38u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08847C38u) goto L_08847C38;
    return;
L_08847C38:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08847C44u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08847C44u) goto L_08847C44;
    return;
L_08847C44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08847C1C;
      }
      goto L_08847C4C;
    }
L_08847C4C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08847C5Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08847C5Cu) goto L_08847C5C;
    return;
L_08847C5C:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(172));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(172));
      if (branch_taken) {
          goto L_08847C18;
      }
      goto L_08847C6C;
    }
L_08847C6C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08847C70;
L_08847C70:
    ctx.gpr[31] = (0x08847C78u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08847C78u) goto L_08847C78;
    return;
L_08847C78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
      if (branch_taken) {
          goto L_088479A4;
      }
      goto L_08847C80;
    }
L_08847C80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    goto L_08847C84;
L_08847C84:
    ctx.gpr[31] = (0x08847C8Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08847C8Cu) goto L_08847C8C;
    return;
L_08847C8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[31] = (0x08847C98u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08847C98u) goto L_08847C98;
    return;
L_08847C98:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847CC8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5496)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(5500), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847CDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08847D08u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 131u, 0x08848854u>(ctx, &aot_mem) && ctx.pc == 0x08847D08u) goto L_08847D08;
    return;
L_08847D08:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847D14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08847D40u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[7]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 39u, 0x08848260u>(ctx, &aot_mem) && ctx.pc == 0x08847D40u) goto L_08847D40;
    return;
L_08847D40:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847D4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08847D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 107u, 0x08848704u>(ctx, &aot_mem) && ctx.pc == 0x08847D5Cu) goto L_08847D5C;
    return;
L_08847D5C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847D68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08847DE4;
      }
      goto L_08847D88;
    }
L_08847D88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[4] != ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08847DE8;
    }
    goto L_08847D94;
L_08847D94:
    ctx.gpr[31] = (0x08847D9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 107u, 0x08848704u>(ctx, &aot_mem) && ctx.pc == 0x08847D9Cu) goto L_08847D9C;
    return;
L_08847D9C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08847DA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 131u, 0x08848854u>(ctx, &aot_mem) && ctx.pc == 0x08847DA8u) goto L_08847DA8;
    return;
L_08847DA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_08847DD4;
      }
      goto L_08847DB8;
    }
L_08847DB8:
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08847DD4;
      }
      goto L_08847DC4;
    }
L_08847DC4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08847DD4;
      }
      goto L_08847DCC;
    }
L_08847DCC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08847E2C;
      }
      goto L_08847DD4;
    }
L_08847DD4:
    ctx.gpr[31] = (0x08847DDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 23u, 0x0884816Cu>(ctx, &aot_mem) && ctx.pc == 0x08847DDCu) goto L_08847DDC;
    return;
L_08847DDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847E2C;
      }
      goto L_08847DE4;
    }
L_08847DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08847DE8;
L_08847DE8:
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_08847E04;
      }
      goto L_08847DF4;
    }
L_08847DF4:
    ctx.gpr[31] = (0x08847DFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 9u, 0x08848080u>(ctx, &aot_mem) && ctx.pc == 0x08847DFCu) goto L_08847DFC;
    return;
L_08847DFC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08847E2C;
      }
      goto L_08847E04;
    }
L_08847E04:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_08847E2C;
      }
      goto L_08847E0C;
    }
L_08847E0C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08847E2C;
      }
      goto L_08847E14;
    }
L_08847E14:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08847E2C;
      }
      goto L_08847E1C;
    }
L_08847E1C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08847E2C;
      }
      goto L_08847E24;
    }
L_08847E24:
    ctx.gpr[31] = (0x08847E2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08847ED4;
L_08847E2C:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847E44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08847E60u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 107u, 0x08848704u>(ctx, &aot_mem) && ctx.pc == 0x08847E60u) goto L_08847E60;
    return;
L_08847E60:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08847E90u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 39u, 0x08848260u>(ctx, &aot_mem) && ctx.pc == 0x08847E90u) goto L_08847E90;
    return;
L_08847E90:
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
L_08847EA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08847EC8;
      }
      goto L_08847EC0;
    }
L_08847EC0:
    ctx.gpr[31] = (0x08847EC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08844DBC;
L_08847EC8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847ED4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08847F6C;
      }
      goto L_08847EFC;
    }
L_08847EFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08847F8C;
      }
      goto L_08847F08;
    }
L_08847F08:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 8u, 0x08848060u>(ctx, &aot_mem); return;
      }
      goto L_08847F10;
    }
L_08847F10:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08847F20u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08847F20u) goto L_08847F20;
    return;
L_08847F20:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5564)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31112));
    ctx.gpr[31] = (0x08847F48u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5848));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08847F48u) goto L_08847F48;
    return;
L_08847F48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08847F5Cu);
    ctx.gpr[6] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x08847F5Cu) goto L_08847F5C;
    return;
L_08847F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 8u, 0x08848060u>(ctx, &aot_mem); return;
      }
      goto L_08847F6C;
    }
L_08847F6C:
    ctx.gpr[2] = (0u | 0u);
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
L_08847F8C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08847FA4;
      }
      goto L_08847F94;
    }
L_08847F94:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 1u);
        (void)rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 8u, 0x08848060u>(ctx, &aot_mem); return;
    }
    goto L_08847F9C;
L_08847F9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 8u, 0x08848060u>(ctx, &aot_mem); return;
      }
      goto L_08847FA4;
    }
L_08847FA4:
    ctx.gpr[31] = (0x08847FACu);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x08847FACu) goto L_08847FAC;
    return;
L_08847FAC:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 8u, 0x08848060u>(ctx, &aot_mem); return;
      }
      goto L_08847FB8;
    }
L_08847FB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08847FD8u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08847FD8u) goto L_08847FD8;
    return;
L_08847FD8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5560)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08847FF8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31104));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08847FF8u) goto L_08847FF8;
    return;
L_08847FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08848004u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 522u, 0x0880A0E8u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0016(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0016_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_16(Runtime &runtime) {
    runtime.register_generated_unit(16u, 0x08844000u, 16384u, &recomp_unit_0016, &recomp_unit_0016_entry);
    runtime.register_function(0x08844000u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088440B4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088440D0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088440D8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088440DCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088440E8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088440ECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844104u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884410Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844114u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884411Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844124u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884412Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844138u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844140u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844148u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844150u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844158u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844160u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844174u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884418Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088441A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088441B0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088441BCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088441D0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088441D8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088441E0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088441E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088441F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884420Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844214u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844220u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844228u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884423Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844248u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884425Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844264u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844274u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844278u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844280u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844290u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884429Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088442E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088442ECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088442F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844308u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844310u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844318u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844320u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844324u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884432Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844344u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884434Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884437Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088443BCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088443C4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088443CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088443D4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088443FCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844408u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844410u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884441Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844424u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844430u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884443Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844450u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884446Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884447Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844484u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844490u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844500u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088445ACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088445B8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088445D4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088445D8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088445E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844600u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884460Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844618u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844624u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844638u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844640u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844648u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844654u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844660u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884466Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844680u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844688u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884468Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844694u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884469Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088446A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088446B8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088446C0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088446C8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088446E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088446ECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088446FCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844700u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844708u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844710u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844718u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844724u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844738u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884473Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844744u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844790u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088447A4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088447C0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088447C8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088447D0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088447E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844844u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884486Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844874u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884487Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844884u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844890u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088448B4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088448BCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088448C4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088448E0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088448F0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088448F8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844904u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844928u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844940u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088449A4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088449C0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088449C4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088449D8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088449E0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088449ECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088449F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844B08u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844B1Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844B24u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844B2Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844B3Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844B4Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844B54u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844B84u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844BB0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844BB8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844BC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844BD4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844C34u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844C5Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844C64u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844C7Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844C8Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844CA4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844CB0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844CB8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844CC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844CCCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844CF0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844CF4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844CFCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844D6Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844D80u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844D84u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844D8Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844D94u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844DBCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844DCCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844DD4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844DE0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844DF0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844DF8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E28u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E54u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E60u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E68u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E84u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E98u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844EA4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844EACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844EC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844EC8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844EECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844EF4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F08u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F0Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F40u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F48u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F54u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F5Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F64u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F68u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F70u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F78u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F80u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F88u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F90u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F98u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FA0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FA8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FB0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FB8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FC8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FD0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FD8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FE0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FE8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FF0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FF4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FFCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845040u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845048u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845050u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884505Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845090u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088450A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088450A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088450B0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088450C4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088450D0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088450E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088450F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088450FCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845108u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845110u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845124u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845128u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845130u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884513Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845144u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845148u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884515Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845168u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845180u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845188u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845190u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088451A4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088451CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088451D4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088451E8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845200u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845210u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845228u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845244u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845258u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845260u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845274u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845288u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845290u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845298u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088452A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088452BCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088452CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088452D4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088452E0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088452E8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845328u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884536Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845374u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884537Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845388u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088453BCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088453CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088453D4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088453DCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088453ECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088453F8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884540Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845418u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845420u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884542Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845434u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845448u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845454u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884545Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845468u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884547Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845488u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088454A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088454A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088454B0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088454C4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088454ECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088454F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845508u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845520u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845530u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845548u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845564u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845578u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845580u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845594u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088455A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088455B0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088455B8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088455D0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088455DCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088455E8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088455F8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845600u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845608u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845648u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884565Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845678u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884568Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845698u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088456A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088456CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088456E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088458FCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845944u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845950u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845958u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845960u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845974u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884598Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845998u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088459A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088459A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088459ACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088459B4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088459C0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088459D0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088459DCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088459ECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088459F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088459FCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845A0Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845A10u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845A18u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845A20u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845A44u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845A4Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845A64u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845A84u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845AB4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845ACCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845AD4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845ADCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845AF0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845AF4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845B00u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845B10u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845B14u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845B20u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845B28u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845B30u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845B38u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845B40u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845B48u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845B4Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845B5Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845BA4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845BB8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845BCCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845BD4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845C1Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845C30u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845C40u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845C50u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845C58u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845C64u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845C8Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845CB8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845CC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845CD0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845CE4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845CECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845CF4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845CFCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D08u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D14u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D20u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D3Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D44u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D54u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D70u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D74u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D7Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D84u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D8Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D94u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845D9Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845DC4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845DF4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845DFCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E04u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E0Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E14u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E1Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E30u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E4Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E54u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E6Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E88u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E90u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845EC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845EE0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845EE8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F00u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F30u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F38u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F44u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F50u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F60u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F6Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F7Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F8Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F9Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845FA4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845FC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845FECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845FF8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846000u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846028u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884603Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846044u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846058u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846074u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846088u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088460C8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846234u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846270u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846288u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088462A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088465F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846620u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846634u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846648u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884665Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846670u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846684u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846698u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088466B0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088466C4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088466F0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846704u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846718u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884672Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846740u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846754u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846768u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884678Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088467A4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846844u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884685Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846870u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846880u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846894u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088468A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088468D0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088468D8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088468E8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088468FCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846924u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846934u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884693Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846958u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846960u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884697Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884698Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884699Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088469A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088469A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088469B0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088469B8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088469C4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088469CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088469D4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088469DCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088469E8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088469F0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088469FCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A08u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A10u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A18u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A24u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A2Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A34u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A3Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A50u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A64u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A70u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A78u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A80u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A88u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A90u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A98u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846AA0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846AB0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846AB8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846AC8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846AD8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B04u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B0Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B1Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B34u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B48u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B58u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B64u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B78u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B88u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B94u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B9Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846BA4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846BACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846BB8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846BC4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846BF0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846C00u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846C08u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846C14u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846C1Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846C34u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846C54u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846C74u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846C88u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846CA0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846CC4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846CE4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846D8Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846DA0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846DC4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846DD4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846DDCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846DE8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846DF8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E0Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E3Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E50u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E64u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E74u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846EA4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846EC8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846EE0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846EFCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F24u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F34u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F44u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F50u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F68u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F74u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F80u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F84u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846FA0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846FE0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846FF8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847010u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884701Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884702Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847058u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884707Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847094u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088470A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088470D0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088470F8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847108u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847118u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847124u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884713Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847148u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847154u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847158u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847174u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884718Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088471A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088471A4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088471B0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088471C0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088471C4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088471D4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847258u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847270u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088472A4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088472A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088472B0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088472B8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088472C0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088472CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088472D4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088472E0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088472E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088472ECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088472F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847300u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847304u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884730Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847314u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847320u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847330u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847338u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847348u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847378u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884738Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088473A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088473B4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847440u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847448u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847500u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847508u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847510u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884751Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847524u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847530u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884753Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847544u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847550u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847558u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847564u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884756Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847578u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847580u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884758Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847598u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088475A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088475ACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088475B8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088475C0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088475C8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088475D0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088475D8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088475DCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088475E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088475ECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088475F8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847604u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884760Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884761Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847628u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847630u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847638u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847640u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847648u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884764Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847654u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884765Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847668u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847674u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884767Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847688u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847694u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884769Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088476A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088476BCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088476D4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088476DCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088476E8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088476F0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847700u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847708u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847714u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884771Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847720u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847724u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884772Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847734u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847740u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884774Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847754u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847764u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847770u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847778u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847784u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847798u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088477B0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088477B8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088477BCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088477C4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088477CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088477DCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088477E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088477ECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088477F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088477F8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847800u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847808u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884780Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847814u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847820u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847850u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088478DCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088478ECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088479A4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088479ACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088479B4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088479C0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088479C8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088479ECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088479F8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A00u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A08u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A14u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A1Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A2Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A30u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A38u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A40u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A4Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A58u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A60u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A74u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A88u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A90u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847AC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847AC4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847ACCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847AD4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847ADCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847AE8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847AF0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B00u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B0Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B14u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B1Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B28u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B30u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B38u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B44u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B4Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B54u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B60u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B68u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B70u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B7Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B84u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B9Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847BA8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847BB0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847BD8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847BE4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847BF4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C18u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C1Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C24u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C2Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C38u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C44u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C4Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C5Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C6Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C70u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C78u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C80u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C84u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C8Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C98u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847CC8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847CDCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D08u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D14u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D40u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D4Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D5Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D68u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D88u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D94u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D9Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847DA8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847DB8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847DC4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847DCCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847DD4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847DDCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847DE4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847DE8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847DF4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847DFCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847E04u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847E0Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847E14u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847E1Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847E24u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847E2Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847E44u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847E60u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847E90u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847EA8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847EC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847EC8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847ED4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847EFCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847F08u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847F10u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847F20u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847F48u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847F5Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847F6Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847F8Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847F94u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847F9Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847FA4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847FACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847FB8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847FD8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847FF8u, &recomp_unit_0016, "recomp_unit_0016");
}
} // namespace psprecomp

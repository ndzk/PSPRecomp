#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0088[4095] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 7, 0,
    0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 13, 14, 0, 0, 0, 0, 15, 0, 16, 0,
    0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0,
    21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 34,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 36, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40,
    0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 46, 0, 0, 47, 0, 48, 0, 49, 0,
    0, 50, 0, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 54, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 60, 0, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0,
    67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 71, 0, 72, 0, 0, 73, 0, 74, 0, 0, 75, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 80, 81, 0, 82, 0, 0, 0, 83, 0, 0,
    0, 84, 0, 85, 86, 0, 87, 0, 0, 88, 0, 89, 0, 0, 90, 0, 91, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 101, 102, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 114, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0,
    125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0,
    0, 0, 136, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 142, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147,
    0, 0, 0, 0, 0, 0, 148, 149, 0, 0, 150, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0,
    0, 154, 0, 155, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160,
    0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    164, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 170, 0, 171, 0, 0, 172, 0, 173,
    0, 0, 174, 0, 175, 0, 0, 176, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182,
    0, 183, 0, 184, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 189, 0, 190, 0, 0, 191, 0, 192, 0, 193, 0, 194,
    0, 195, 0, 0, 196, 0, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 0, 203, 0, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208,
    0, 0, 209, 0, 0, 210, 0, 211, 0, 212, 0, 0, 213, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0,
    0, 217, 0, 218, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223,
    0, 224, 0, 225, 0, 0, 0, 0, 226, 0, 227, 0, 0, 228, 0, 0, 229, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 233, 0,
    0, 234, 0, 235, 0, 236, 0, 0, 237, 0, 0, 238, 0, 239, 0, 240, 0, 0, 0, 241, 0, 0, 242, 0, 243, 0, 244, 0, 245, 0, 246, 0,
    0, 247, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 0, 257, 0, 258, 0, 259, 0, 260, 0, 261, 0,
    262, 0, 263, 0, 264, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 269, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276,
    0, 0, 0, 0, 0, 277, 0, 278, 0, 279, 0, 280, 0, 281, 0, 282, 0, 283, 0, 0, 284, 0, 0, 285, 0, 286, 0, 287, 0, 288, 0, 289,
    0, 290, 0, 291, 0, 292, 0, 293, 0, 0, 0, 294, 0, 295, 0, 296, 0, 297, 0, 298, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 301, 0,
    302, 0, 303, 0, 304, 0, 305, 0, 0, 0, 306, 0, 307, 0, 0, 0, 308, 0, 309, 0, 310, 0, 0, 0, 311, 0, 312, 0, 313, 0, 314, 0,
    315, 0, 316, 0, 317, 0, 318, 0, 0, 0, 0, 319, 0, 0, 320, 0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0, 328, 0,
    0, 0, 329, 0, 330, 0, 331, 0, 332, 0, 0, 333, 0, 0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 0, 339, 0, 0, 0, 340, 0, 0, 341,
    0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 0, 347, 0, 348, 0, 0, 0, 0, 349, 0, 0, 350, 0, 351, 0, 352, 0, 353, 0, 354, 0, 355,
    0, 356, 0, 357, 0, 358, 0, 359, 0, 360, 0, 361, 0, 0, 0, 0, 362, 0, 363, 0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 0, 0, 0,
    369, 0, 0, 0, 370, 0, 371, 0, 372, 0, 373, 0, 0, 374, 0, 375, 0, 376, 0, 377, 0, 0, 0, 0, 0, 378, 379, 0, 0, 0, 0, 0,
    0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 383, 0, 384, 0, 385, 0, 386, 0, 387, 0,
    388, 0, 389, 0, 390, 0, 391, 392, 0, 0, 393, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 398, 0, 0, 399, 0, 400,
    0, 401, 0, 402, 0, 403, 0, 404, 0, 405, 0, 406, 0, 0, 407, 0, 408, 0, 0, 409, 0, 410, 0, 411, 0, 412, 0, 413, 0, 414, 0, 415,
    0, 416, 0, 417, 0, 418, 0, 419, 0, 420, 0, 421, 0, 422, 0, 423, 0, 424, 0, 425, 0, 426, 0, 427, 0, 428, 0, 429, 0, 0, 0, 0,
    0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 434, 0, 0, 435,
    0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0,
    0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 450, 0, 0, 0, 451, 0,
    452, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0, 457, 0, 458, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    460, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0,
    0, 0, 0, 465, 0, 466, 0, 467, 0, 0, 0, 0, 468, 0, 469, 0, 470, 0, 471, 0, 0, 0, 0, 472, 473, 0, 0, 0, 474, 0, 0, 0,
    475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0,
    0, 0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 484,
    0, 485, 0, 486, 0, 0, 487, 0, 0, 0, 488, 0, 489, 0, 490, 0, 491, 0, 492, 493, 494, 0, 0, 495, 0, 0, 0, 496, 0, 0, 497, 498,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0,
    0, 0, 0, 0, 0, 502, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 505, 0, 0, 506,
    0, 507, 508, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0,
    0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0,
    520, 0, 0, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 524, 0, 525, 0, 0, 0, 0, 526, 527, 0,
    0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 530, 0, 531, 0, 0, 0, 532, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 537, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 545, 0, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 550, 0, 0, 551, 0, 552, 0, 0, 553, 0, 0, 0, 554, 0, 0, 555, 0, 0, 0, 556, 0, 0, 557, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 559, 0, 560, 0, 561, 0, 562, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 564, 0, 0, 565, 0, 0,
    0, 0, 566, 0, 0, 567, 0, 0, 0, 568, 0, 569, 0, 570, 0, 571, 0, 572, 0, 573, 0, 0, 574, 0, 0, 575, 0, 0, 576, 0, 0, 577,
    0, 0, 0, 578, 0, 0, 579, 0, 580, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 583, 0, 584, 0, 585, 0, 586, 0, 587, 0, 0,
    588, 0, 589, 0, 590, 0, 0, 591, 0, 0, 592, 0, 0, 593, 0, 594, 0, 0, 0, 595, 0, 596, 0, 0, 597, 0, 0, 598, 0, 0, 599, 0,
    600, 601, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 607, 0, 0, 608, 0, 0, 0, 0, 609, 0, 0, 610, 0, 611, 0, 612, 0, 0, 0, 0, 0, 613, 0, 0, 614, 0, 0, 0, 615,
    0, 616, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 623, 0, 624, 0, 0, 625, 0, 626, 627, 0, 628, 0,
    629, 630, 0, 631, 0, 632, 0, 633, 0, 634, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 637, 0, 638, 0, 0, 639, 0,
    0, 0, 0, 0, 640, 0, 0, 0, 0, 641, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 644, 645, 646, 647, 0, 0, 0,
    648, 0, 0, 649, 0, 650, 0, 651, 0, 652, 0, 653, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 656, 0,
    0, 0, 0, 0, 657, 0, 0, 658, 0, 0, 659, 0, 660, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 662, 0, 663, 0, 0, 0,
    664, 0, 0, 0, 665, 0, 666, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0,
    0, 0, 669, 0, 670, 0, 671, 0, 672, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 674, 0, 675, 0, 676, 0, 677, 0, 0, 678, 0,
    679, 0, 0, 0, 0, 680, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 689, 0, 0,
    0, 0, 0, 690, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 698, 0, 0, 699, 0, 0, 0, 0,
    0, 700, 0, 701, 702, 0, 703, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 706, 0, 0, 0, 0, 0, 0, 707, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 711, 0, 712, 0, 0, 0, 713,
    0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 715, 0, 0, 716, 717, 0, 0, 0, 718, 0, 0, 0, 719, 0, 720, 0, 721, 0, 0,
    722, 0, 0, 0, 0, 723, 724, 0, 0, 725, 0, 0, 0, 726, 0, 727, 0, 728, 0, 0, 0, 0, 0, 0, 729, 0, 730, 0, 0, 731, 0, 732,
    0, 0, 733, 0, 734, 0, 0, 735, 0, 736, 0, 0, 737, 0, 738, 0, 0, 739, 0, 740, 0, 0, 741, 0, 742, 0, 0, 0, 0, 743, 0, 0,
    0, 0, 744, 0, 0, 0, 0, 745, 0, 0, 0, 0, 746, 0, 0, 0, 0, 747, 0, 0, 0, 0, 748, 0, 0, 0, 0, 749, 0, 0, 0, 0,
    750, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 752, 0, 753, 0, 0, 0, 0, 754, 0, 755, 0,
    756, 0, 0, 0, 0, 0, 0, 757, 758, 0, 0, 0, 759, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 762, 0, 0, 763, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 768, 0, 769, 0, 0, 0, 0, 770, 0, 771, 0, 772, 0, 0, 0, 0, 0, 0,
    773, 774, 0, 0, 0, 775, 0, 776, 0, 0, 777, 0, 0, 0, 778, 0, 0, 779, 0, 780, 0, 0, 781, 782, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 783, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 785, 0, 786, 0, 0, 0, 0, 787, 0,
    788, 0, 789, 0, 0, 0, 0, 0, 0, 790, 791, 0, 0, 0, 792, 0, 793, 0, 0, 794, 0, 0, 0, 795, 0, 0, 796, 0, 797, 0, 0, 798,
    0, 799, 800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 803, 804,
    0, 0, 0, 0, 805, 0, 806, 0, 807, 0, 808, 0, 809, 810, 0, 0, 0, 811, 0, 0, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 813, 0,
    0, 0, 0, 814, 815, 0, 0, 0, 0, 816, 0, 0, 0, 0, 817, 0, 0, 0, 0, 818, 0, 819, 0, 0, 0, 820, 0, 0, 0, 0, 0, 0,
    0, 821, 0, 0, 0, 0, 0, 822, 0, 823, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 824, 0, 0, 825, 0, 826, 0, 0, 827, 0,
    828, 0, 0, 829, 0, 830, 0, 0, 0, 0, 0, 0, 0, 0, 831, 0, 832, 0, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 834,
    0, 0, 0, 0, 0, 0, 835, 0, 0, 836, 0, 0, 0, 0, 837, 0, 0, 0, 838, 0, 0, 0, 0, 0, 0, 0, 0, 0, 839, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 840, 0, 841, 0, 842, 0, 843, 0, 0, 0, 0, 0, 0, 0, 0, 0, 844, 0, 0, 845, 0, 846,
    0, 847, 0, 848, 0, 0, 0, 0, 0, 0, 0, 849, 0, 850, 0, 0, 0, 0, 851, 0, 0, 0, 852, 0, 0, 0, 853, 0, 854, 0, 855, 0,
    856, 0, 0, 857, 0, 0, 858, 0, 859, 0, 0, 0, 0, 0, 0, 0, 0, 0, 860, 0, 0, 0, 0, 0, 0, 0, 0, 861, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 862, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 863, 0, 0, 864, 0, 865, 0, 0, 866, 0, 867, 0, 0,
    868, 0, 869, 0, 0, 0, 0, 0, 0, 0, 0, 0, 870, 0, 871, 0, 0, 0, 0, 0, 0, 0, 872, 0, 0, 0, 0, 0, 0, 873, 0, 0,
    0, 0, 0, 874, 0, 0, 875, 0, 0, 0, 0, 876, 0, 0, 0, 0, 0, 0, 0, 0, 877, 0, 878, 0, 0, 0, 879, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 880, 0, 0, 0, 0, 0, 0, 0, 881, 0, 0, 0, 0, 0, 0, 0, 0, 882, 0, 883, 0, 0, 884, 0, 0, 885,
    0, 0, 0, 0, 886, 0, 0, 0, 0, 0, 0, 0, 0, 887, 0, 0, 0, 0, 0, 0, 0, 0, 888, 0, 889, 0, 0, 890, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 891, 0, 892, 0, 0, 0, 0, 0, 893, 0, 0, 0, 0, 0, 894, 0, 0, 0, 0, 0, 0, 0, 895, 0, 0, 0,
    896, 0, 897, 0, 898, 0, 0, 899, 0, 0, 0, 0, 0, 0, 900, 0, 901, 0, 0, 0, 0, 0, 0, 902, 0, 903, 0, 0, 904, 0, 905,
};
void recomp_unit_0088_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08964000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0088[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08964000;
    case 2u: goto L_08964014;
    case 3u: goto L_08964030;
    case 4u: goto L_08964048;
    case 5u: goto L_0896406C;
    case 6u: goto L_08964074;
    case 7u: goto L_08964078;
    case 8u: goto L_08964098;
    case 9u: goto L_089640D8;
    case 10u: goto L_0896410C;
    case 11u: goto L_08964148;
    case 12u: goto L_08964150;
    case 13u: goto L_08964158;
    case 14u: goto L_0896415C;
    case 15u: goto L_08964170;
    case 16u: goto L_08964178;
    case 17u: goto L_08964188;
    case 18u: goto L_089641B4;
    case 19u: goto L_089641D8;
    case 20u: goto L_089641E8;
    case 21u: goto L_08964200;
    case 22u: goto L_08964210;
    case 23u: goto L_08964220;
    case 24u: goto L_08964230;
    case 25u: goto L_08964240;
    case 26u: goto L_08964248;
    case 27u: goto L_08964250;
    case 28u: goto L_08964280;
    case 29u: goto L_089642A8;
    case 30u: goto L_089642B4;
    case 31u: goto L_089642BC;
    case 32u: goto L_089642D0;
    case 33u: goto L_089642F8;
    case 34u: goto L_089642FC;
    case 35u: goto L_0896432C;
    case 36u: goto L_08964330;
    case 37u: goto L_08964334;
    case 38u: goto L_08964350;
    case 39u: goto L_0896436C;
    case 40u: goto L_0896437C;
    case 41u: goto L_08964384;
    case 42u: goto L_089643AC;
    case 43u: goto L_089643B8;
    case 44u: goto L_089643C0;
    case 45u: goto L_089643C8;
    case 46u: goto L_089643DC;
    case 47u: goto L_089643E8;
    case 48u: goto L_089643F0;
    case 49u: goto L_089643F8;
    case 50u: goto L_08964404;
    case 51u: goto L_0896441C;
    case 52u: goto L_08964424;
    case 53u: goto L_0896442C;
    case 54u: goto L_08964438;
    case 55u: goto L_0896443C;
    case 56u: goto L_08964448;
    case 57u: goto L_08964478;
    case 58u: goto L_089644B0;
    case 59u: goto L_089644BC;
    case 60u: goto L_089644C4;
    case 61u: goto L_089644D0;
    case 62u: goto L_089644D8;
    case 63u: goto L_089644E0;
    case 64u: goto L_089644E8;
    case 65u: goto L_089644F0;
    case 66u: goto L_089644F8;
    case 67u: goto L_08964500;
    case 68u: goto L_08964518;
    case 69u: goto L_08964530;
    case 70u: goto L_08964538;
    case 71u: goto L_0896454C;
    case 72u: goto L_08964554;
    case 73u: goto L_08964560;
    case 74u: goto L_08964568;
    case 75u: goto L_08964574;
    case 76u: goto L_08964590;
    case 77u: goto L_089645AC;
    case 78u: goto L_089645C0;
    case 79u: goto L_089645C8;
    case 80u: goto L_089645D8;
    case 81u: goto L_089645DC;
    case 82u: goto L_089645E4;
    case 83u: goto L_089645F4;
    case 84u: goto L_08964604;
    case 85u: goto L_0896460C;
    case 86u: goto L_08964610;
    case 87u: goto L_08964618;
    case 88u: goto L_08964624;
    case 89u: goto L_0896462C;
    case 90u: goto L_08964638;
    case 91u: goto L_08964640;
    case 92u: goto L_0896464C;
    case 93u: goto L_08964654;
    case 94u: goto L_08964664;
    case 95u: goto L_08964670;
    case 96u: goto L_0896467C;
    case 97u: goto L_08964698;
    case 98u: goto L_089646B4;
    case 99u: goto L_089646C8;
    case 100u: goto L_089646D0;
    case 101u: goto L_089646E0;
    case 102u: goto L_089646E4;
    case 103u: goto L_08964740;
    case 104u: goto L_08964748;
    case 105u: goto L_0896474C;
    case 106u: goto L_0896475C;
    case 107u: goto L_08964774;
    case 108u: goto L_0896479C;
    case 109u: goto L_089647E0;
    case 110u: goto L_0896483C;
    case 111u: goto L_08964848;
    case 112u: goto L_08964860;
    case 113u: goto L_0896486C;
    case 114u: goto L_08964874;
    case 115u: goto L_0896489C;
    case 116u: goto L_089648BC;
    case 117u: goto L_089648C8;
    case 118u: goto L_089648D0;
    case 119u: goto L_089648F8;
    case 120u: goto L_08964918;
    case 121u: goto L_08964924;
    case 122u: goto L_0896492C;
    case 123u: goto L_08964954;
    case 124u: goto L_08964974;
    case 125u: goto L_08964980;
    case 126u: goto L_08964988;
    case 127u: goto L_089649B0;
    case 128u: goto L_089649D0;
    case 129u: goto L_089649DC;
    case 130u: goto L_089649E4;
    case 131u: goto L_08964A0C;
    case 132u: goto L_08964A2C;
    case 133u: goto L_08964A38;
    case 134u: goto L_08964A40;
    case 135u: goto L_08964A68;
    case 136u: goto L_08964A88;
    case 137u: goto L_08964A94;
    case 138u: goto L_08964A9C;
    case 139u: goto L_08964AC4;
    case 140u: goto L_08964AE4;
    case 141u: goto L_08964AF0;
    case 142u: goto L_08964AF8;
    case 143u: goto L_08964B20;
    case 144u: goto L_08964B40;
    case 145u: goto L_08964B4C;
    case 146u: goto L_08964B54;
    case 147u: goto L_08964B7C;
    case 148u: goto L_08964B98;
    case 149u: goto L_08964B9C;
    case 150u: goto L_08964BA8;
    case 151u: goto L_08964BB8;
    case 152u: goto L_08964BC0;
    case 153u: goto L_08964BE8;
    case 154u: goto L_08964C04;
    case 155u: goto L_08964C0C;
    case 156u: goto L_08964C10;
    case 157u: goto L_08964C40;
    case 158u: goto L_08964C54;
    case 159u: goto L_08964C64;
    case 160u: goto L_08964C7C;
    case 161u: goto L_08964C84;
    case 162u: goto L_08964CBC;
    case 163u: goto L_08964CC8;
    case 164u: goto L_08964D00;
    case 165u: goto L_08964D14;
    case 166u: goto L_08964D24;
    case 167u: goto L_08964D34;
    case 168u: goto L_08964D4C;
    case 169u: goto L_08964D54;
    case 170u: goto L_08964D60;
    case 171u: goto L_08964D68;
    case 172u: goto L_08964D74;
    case 173u: goto L_08964D7C;
    case 174u: goto L_08964D88;
    case 175u: goto L_08964D90;
    case 176u: goto L_08964D9C;
    case 177u: goto L_08964DA4;
    case 178u: goto L_08964DB0;
    case 179u: goto L_08964DBC;
    case 180u: goto L_08964DC8;
    case 181u: goto L_08964DF0;
    case 182u: goto L_08964DFC;
    case 183u: goto L_08964E04;
    case 184u: goto L_08964E0C;
    case 185u: goto L_08964E14;
    case 186u: goto L_08964E24;
    case 187u: goto L_08964E3C;
    case 188u: goto L_08964E44;
    case 189u: goto L_08964E50;
    case 190u: goto L_08964E58;
    case 191u: goto L_08964E64;
    case 192u: goto L_08964E6C;
    case 193u: goto L_08964E74;
    case 194u: goto L_08964E7C;
    case 195u: goto L_08964E84;
    case 196u: goto L_08964E90;
    case 197u: goto L_08964E9C;
    case 198u: goto L_08964EA4;
    case 199u: goto L_08964EAC;
    case 200u: goto L_08964EB4;
    case 201u: goto L_08964EBC;
    case 202u: goto L_08964EC4;
    case 203u: goto L_08964ED0;
    case 204u: goto L_08964EDC;
    case 205u: goto L_08964EE4;
    case 206u: goto L_08964EEC;
    case 207u: goto L_08964EF4;
    case 208u: goto L_08964EFC;
    case 209u: goto L_08964F08;
    case 210u: goto L_08964F14;
    case 211u: goto L_08964F1C;
    case 212u: goto L_08964F24;
    case 213u: goto L_08964F30;
    case 214u: goto L_08964F3C;
    case 215u: goto L_08964F44;
    case 216u: goto L_08964F68;
    case 217u: goto L_08964F84;
    case 218u: goto L_08964F8C;
    case 219u: goto L_08964F94;
    case 220u: goto L_08964FA4;
    case 221u: goto L_08964FC8;
    case 222u: goto L_08964FD0;
    case 223u: goto L_08964FFC;
    case 224u: goto L_08965004;
    case 225u: goto L_0896500C;
    case 226u: goto L_08965020;
    case 227u: goto L_08965028;
    case 228u: goto L_08965034;
    case 229u: goto L_08965040;
    case 230u: goto L_08965048;
    case 231u: goto L_08965058;
    case 232u: goto L_08965070;
    case 233u: goto L_08965078;
    case 234u: goto L_08965084;
    case 235u: goto L_0896508C;
    case 236u: goto L_08965094;
    case 237u: goto L_089650A0;
    case 238u: goto L_089650AC;
    case 239u: goto L_089650B4;
    case 240u: goto L_089650BC;
    case 241u: goto L_089650CC;
    case 242u: goto L_089650D8;
    case 243u: goto L_089650E0;
    case 244u: goto L_089650E8;
    case 245u: goto L_089650F0;
    case 246u: goto L_089650F8;
    case 247u: goto L_08965104;
    case 248u: goto L_0896510C;
    case 249u: goto L_08965114;
    case 250u: goto L_0896511C;
    case 251u: goto L_08965124;
    case 252u: goto L_0896512C;
    case 253u: goto L_08965134;
    case 254u: goto L_0896513C;
    case 255u: goto L_08965144;
    case 256u: goto L_0896514C;
    case 257u: goto L_08965158;
    case 258u: goto L_08965160;
    case 259u: goto L_08965168;
    case 260u: goto L_08965170;
    case 261u: goto L_08965178;
    case 262u: goto L_08965180;
    case 263u: goto L_08965188;
    case 264u: goto L_08965190;
    case 265u: goto L_08965198;
    case 266u: goto L_089651A4;
    case 267u: goto L_089651B0;
    case 268u: goto L_089651BC;
    case 269u: goto L_089651C4;
    case 270u: goto L_089651CC;
    case 271u: goto L_089651D4;
    case 272u: goto L_089651DC;
    case 273u: goto L_089651E4;
    case 274u: goto L_089651EC;
    case 275u: goto L_089651F4;
    case 276u: goto L_089651FC;
    case 277u: goto L_08965214;
    case 278u: goto L_0896521C;
    case 279u: goto L_08965224;
    case 280u: goto L_0896522C;
    case 281u: goto L_08965234;
    case 282u: goto L_0896523C;
    case 283u: goto L_08965244;
    case 284u: goto L_08965250;
    case 285u: goto L_0896525C;
    case 286u: goto L_08965264;
    case 287u: goto L_0896526C;
    case 288u: goto L_08965274;
    case 289u: goto L_0896527C;
    case 290u: goto L_08965284;
    case 291u: goto L_0896528C;
    case 292u: goto L_08965294;
    case 293u: goto L_0896529C;
    case 294u: goto L_089652AC;
    case 295u: goto L_089652B4;
    case 296u: goto L_089652BC;
    case 297u: goto L_089652C4;
    case 298u: goto L_089652CC;
    case 299u: goto L_089652E0;
    case 300u: goto L_089652E8;
    case 301u: goto L_089652F8;
    case 302u: goto L_08965300;
    case 303u: goto L_08965308;
    case 304u: goto L_08965310;
    case 305u: goto L_08965318;
    case 306u: goto L_08965328;
    case 307u: goto L_08965330;
    case 308u: goto L_08965340;
    case 309u: goto L_08965348;
    case 310u: goto L_08965350;
    case 311u: goto L_08965360;
    case 312u: goto L_08965368;
    case 313u: goto L_08965370;
    case 314u: goto L_08965378;
    case 315u: goto L_08965380;
    case 316u: goto L_08965388;
    case 317u: goto L_08965390;
    case 318u: goto L_08965398;
    case 319u: goto L_089653AC;
    case 320u: goto L_089653B8;
    case 321u: goto L_089653C0;
    case 322u: goto L_089653C8;
    case 323u: goto L_089653D0;
    case 324u: goto L_089653D8;
    case 325u: goto L_089653E0;
    case 326u: goto L_089653E8;
    case 327u: goto L_089653F0;
    case 328u: goto L_089653F8;
    case 329u: goto L_08965408;
    case 330u: goto L_08965410;
    case 331u: goto L_08965418;
    case 332u: goto L_08965420;
    case 333u: goto L_0896542C;
    case 334u: goto L_08965438;
    case 335u: goto L_08965440;
    case 336u: goto L_08965448;
    case 337u: goto L_08965450;
    case 338u: goto L_08965458;
    case 339u: goto L_08965460;
    case 340u: goto L_08965470;
    case 341u: goto L_0896547C;
    case 342u: goto L_08965484;
    case 343u: goto L_0896548C;
    case 344u: goto L_08965494;
    case 345u: goto L_0896549C;
    case 346u: goto L_089654A4;
    case 347u: goto L_089654AC;
    case 348u: goto L_089654B4;
    case 349u: goto L_089654C8;
    case 350u: goto L_089654D4;
    case 351u: goto L_089654DC;
    case 352u: goto L_089654E4;
    case 353u: goto L_089654EC;
    case 354u: goto L_089654F4;
    case 355u: goto L_089654FC;
    case 356u: goto L_08965504;
    case 357u: goto L_0896550C;
    case 358u: goto L_08965514;
    case 359u: goto L_0896551C;
    case 360u: goto L_08965524;
    case 361u: goto L_0896552C;
    case 362u: goto L_08965540;
    case 363u: goto L_08965548;
    case 364u: goto L_08965550;
    case 365u: goto L_08965558;
    case 366u: goto L_08965560;
    case 367u: goto L_08965568;
    case 368u: goto L_08965570;
    case 369u: goto L_08965580;
    case 370u: goto L_08965590;
    case 371u: goto L_08965598;
    case 372u: goto L_089655A0;
    case 373u: goto L_089655A8;
    case 374u: goto L_089655B4;
    case 375u: goto L_089655BC;
    case 376u: goto L_089655C4;
    case 377u: goto L_089655CC;
    case 378u: goto L_089655E4;
    case 379u: goto L_089655E8;
    case 380u: goto L_08965604;
    case 381u: goto L_08965638;
    case 382u: goto L_08965650;
    case 383u: goto L_08965658;
    case 384u: goto L_08965660;
    case 385u: goto L_08965668;
    case 386u: goto L_08965670;
    case 387u: goto L_08965678;
    case 388u: goto L_08965680;
    case 389u: goto L_08965688;
    case 390u: goto L_08965690;
    case 391u: goto L_08965698;
    case 392u: goto L_0896569C;
    case 393u: goto L_089656A8;
    case 394u: goto L_089656B0;
    case 395u: goto L_089656BC;
    case 396u: goto L_089656C8;
    case 397u: goto L_089656E0;
    case 398u: goto L_089656E8;
    case 399u: goto L_089656F4;
    case 400u: goto L_089656FC;
    case 401u: goto L_08965704;
    case 402u: goto L_0896570C;
    case 403u: goto L_08965714;
    case 404u: goto L_0896571C;
    case 405u: goto L_08965724;
    case 406u: goto L_0896572C;
    case 407u: goto L_08965738;
    case 408u: goto L_08965740;
    case 409u: goto L_0896574C;
    case 410u: goto L_08965754;
    case 411u: goto L_0896575C;
    case 412u: goto L_08965764;
    case 413u: goto L_0896576C;
    case 414u: goto L_08965774;
    case 415u: goto L_0896577C;
    case 416u: goto L_08965784;
    case 417u: goto L_0896578C;
    case 418u: goto L_08965794;
    case 419u: goto L_0896579C;
    case 420u: goto L_089657A4;
    case 421u: goto L_089657AC;
    case 422u: goto L_089657B4;
    case 423u: goto L_089657BC;
    case 424u: goto L_089657C4;
    case 425u: goto L_089657CC;
    case 426u: goto L_089657D4;
    case 427u: goto L_089657DC;
    case 428u: goto L_089657E4;
    case 429u: goto L_089657EC;
    case 430u: goto L_08965808;
    case 431u: goto L_0896581C;
    case 432u: goto L_08965854;
    case 433u: goto L_08965868;
    case 434u: goto L_08965870;
    case 435u: goto L_0896587C;
    case 436u: goto L_08965888;
    case 437u: goto L_089658A0;
    case 438u: goto L_089658A8;
    case 439u: goto L_089658B4;
    case 440u: goto L_089658D0;
    case 441u: goto L_08965914;
    case 442u: goto L_08965920;
    case 443u: goto L_08965928;
    case 444u: goto L_0896593C;
    case 445u: goto L_0896594C;
    case 446u: goto L_08965954;
    case 447u: goto L_0896596C;
    case 448u: goto L_08965984;
    case 449u: goto L_089659E0;
    case 450u: goto L_089659E8;
    case 451u: goto L_089659F8;
    case 452u: goto L_08965A00;
    case 453u: goto L_08965A08;
    case 454u: goto L_08965A10;
    case 455u: goto L_08965A2C;
    case 456u: goto L_08965A34;
    case 457u: goto L_08965A44;
    case 458u: goto L_08965A4C;
    case 459u: goto L_08965A54;
    case 460u: goto L_08965A80;
    case 461u: goto L_08965A88;
    case 462u: goto L_08965AB4;
    case 463u: goto L_08965ABC;
    case 464u: goto L_08965AEC;
    case 465u: goto L_08965B0C;
    case 466u: goto L_08965B14;
    case 467u: goto L_08965B1C;
    case 468u: goto L_08965B30;
    case 469u: goto L_08965B38;
    case 470u: goto L_08965B40;
    case 471u: goto L_08965B48;
    case 472u: goto L_08965B5C;
    case 473u: goto L_08965B60;
    case 474u: goto L_08965B70;
    case 475u: goto L_08965B80;
    case 476u: goto L_08965B8C;
    case 477u: goto L_08965BD0;
    case 478u: goto L_08965BDC;
    case 479u: goto L_08965BF0;
    case 480u: goto L_08965C08;
    case 481u: goto L_08965C10;
    case 482u: goto L_08965C44;
    case 483u: goto L_08965C60;
    case 484u: goto L_08965C7C;
    case 485u: goto L_08965C84;
    case 486u: goto L_08965C8C;
    case 487u: goto L_08965C98;
    case 488u: goto L_08965CA8;
    case 489u: goto L_08965CB0;
    case 490u: goto L_08965CB8;
    case 491u: goto L_08965CC0;
    case 492u: goto L_08965CC8;
    case 493u: goto L_08965CCC;
    case 494u: goto L_08965CD0;
    case 495u: goto L_08965CDC;
    case 496u: goto L_08965CEC;
    case 497u: goto L_08965CF8;
    case 498u: goto L_08965CFC;
    case 499u: goto L_08965D24;
    case 500u: goto L_08965D3C;
    case 501u: goto L_08965D70;
    case 502u: goto L_08965D94;
    case 503u: goto L_08965DA0;
    case 504u: goto L_08965DD8;
    case 505u: goto L_08965DF0;
    case 506u: goto L_08965DFC;
    case 507u: goto L_08965E04;
    case 508u: goto L_08965E08;
    case 509u: goto L_08965E14;
    case 510u: goto L_08965E34;
    case 511u: goto L_08965E4C;
    case 512u: goto L_08965F34;
    case 513u: goto L_08965F48;
    case 514u: goto L_08965F6C;
    case 515u: goto L_08965F84;
    case 516u: goto L_08965F9C;
    case 517u: goto L_08965FBC;
    case 518u: goto L_08965FD4;
    case 519u: goto L_08965FEC;
    case 520u: goto L_08966000;
    case 521u: goto L_08966018;
    case 522u: goto L_08966028;
    case 523u: goto L_0896603C;
    case 524u: goto L_08966058;
    case 525u: goto L_08966060;
    case 526u: goto L_08966074;
    case 527u: goto L_08966078;
    case 528u: goto L_08966088;
    case 529u: goto L_089660AC;
    case 530u: goto L_089660B8;
    case 531u: goto L_089660C0;
    case 532u: goto L_089660D0;
    case 533u: goto L_089660DC;
    case 534u: goto L_089660EC;
    case 535u: goto L_089661A0;
    case 536u: goto L_089661D8;
    case 537u: goto L_089661E4;
    case 538u: goto L_0896621C;
    case 539u: goto L_08966228;
    case 540u: goto L_08966260;
    case 541u: goto L_08966274;
    case 542u: goto L_089662A0;
    case 543u: goto L_089662C0;
    case 544u: goto L_089662CC;
    case 545u: goto L_08966384;
    case 546u: goto L_08966398;
    case 547u: goto L_089663AC;
    case 548u: goto L_089663D4;
    case 549u: goto L_089663E0;
    case 550u: goto L_08966410;
    case 551u: goto L_0896641C;
    case 552u: goto L_08966424;
    case 553u: goto L_08966430;
    case 554u: goto L_08966440;
    case 555u: goto L_0896644C;
    case 556u: goto L_0896645C;
    case 557u: goto L_08966468;
    case 558u: goto L_089664AC;
    case 559u: goto L_089664CC;
    case 560u: goto L_089664D4;
    case 561u: goto L_089664DC;
    case 562u: goto L_089664E4;
    case 563u: goto L_0896654C;
    case 564u: goto L_08966568;
    case 565u: goto L_08966574;
    case 566u: goto L_08966588;
    case 567u: goto L_08966594;
    case 568u: goto L_089665A4;
    case 569u: goto L_089665AC;
    case 570u: goto L_089665B4;
    case 571u: goto L_089665BC;
    case 572u: goto L_089665C4;
    case 573u: goto L_089665CC;
    case 574u: goto L_089665D8;
    case 575u: goto L_089665E4;
    case 576u: goto L_089665F0;
    case 577u: goto L_089665FC;
    case 578u: goto L_0896660C;
    case 579u: goto L_08966618;
    case 580u: goto L_08966620;
    case 581u: goto L_08966634;
    case 582u: goto L_08966644;
    case 583u: goto L_08966654;
    case 584u: goto L_0896665C;
    case 585u: goto L_08966664;
    case 586u: goto L_0896666C;
    case 587u: goto L_08966674;
    case 588u: goto L_08966680;
    case 589u: goto L_08966688;
    case 590u: goto L_08966690;
    case 591u: goto L_0896669C;
    case 592u: goto L_089666A8;
    case 593u: goto L_089666B4;
    case 594u: goto L_089666BC;
    case 595u: goto L_089666CC;
    case 596u: goto L_089666D4;
    case 597u: goto L_089666E0;
    case 598u: goto L_089666EC;
    case 599u: goto L_089666F8;
    case 600u: goto L_08966700;
    case 601u: goto L_08966704;
    case 602u: goto L_08966718;
    case 603u: goto L_0896674C;
    case 604u: goto L_08966754;
    case 605u: goto L_08966798;
    case 606u: goto L_089667B4;
    case 607u: goto L_0896680C;
    case 608u: goto L_08966818;
    case 609u: goto L_0896682C;
    case 610u: goto L_08966838;
    case 611u: goto L_08966840;
    case 612u: goto L_08966848;
    case 613u: goto L_08966860;
    case 614u: goto L_0896686C;
    case 615u: goto L_0896687C;
    case 616u: goto L_08966884;
    case 617u: goto L_0896688C;
    case 618u: goto L_089668BC;
    case 619u: goto L_089668E8;
    case 620u: goto L_08966924;
    case 621u: goto L_08966934;
    case 622u: goto L_08966944;
    case 623u: goto L_08966950;
    case 624u: goto L_08966958;
    case 625u: goto L_08966964;
    case 626u: goto L_0896696C;
    case 627u: goto L_08966970;
    case 628u: goto L_08966978;
    case 629u: goto L_08966980;
    case 630u: goto L_08966984;
    case 631u: goto L_0896698C;
    case 632u: goto L_08966994;
    case 633u: goto L_0896699C;
    case 634u: goto L_089669A4;
    case 635u: goto L_089669B0;
    case 636u: goto L_089669DC;
    case 637u: goto L_089669E4;
    case 638u: goto L_089669EC;
    case 639u: goto L_089669F8;
    case 640u: goto L_08966A10;
    case 641u: goto L_08966A24;
    case 642u: goto L_08966A2C;
    case 643u: goto L_08966A50;
    case 644u: goto L_08966A64;
    case 645u: goto L_08966A68;
    case 646u: goto L_08966A6C;
    case 647u: goto L_08966A70;
    case 648u: goto L_08966A80;
    case 649u: goto L_08966A8C;
    case 650u: goto L_08966A94;
    case 651u: goto L_08966A9C;
    case 652u: goto L_08966AA4;
    case 653u: goto L_08966AAC;
    case 654u: goto L_08966AC4;
    case 655u: goto L_08966AE0;
    case 656u: goto L_08966AF8;
    case 657u: goto L_08966B10;
    case 658u: goto L_08966B1C;
    case 659u: goto L_08966B28;
    case 660u: goto L_08966B30;
    case 661u: goto L_08966B48;
    case 662u: goto L_08966B68;
    case 663u: goto L_08966B70;
    case 664u: goto L_08966B80;
    case 665u: goto L_08966B90;
    case 666u: goto L_08966B98;
    case 667u: goto L_08966BB0;
    case 668u: goto L_08966BF0;
    case 669u: goto L_08966C08;
    case 670u: goto L_08966C10;
    case 671u: goto L_08966C18;
    case 672u: goto L_08966C20;
    case 673u: goto L_08966C38;
    case 674u: goto L_08966C54;
    case 675u: goto L_08966C5C;
    case 676u: goto L_08966C64;
    case 677u: goto L_08966C6C;
    case 678u: goto L_08966C78;
    case 679u: goto L_08966C80;
    case 680u: goto L_08966C94;
    case 681u: goto L_08966C9C;
    case 682u: goto L_08966CE8;
    case 683u: goto L_08966D44;
    case 684u: goto L_08966D98;
    case 685u: goto L_08966E30;
    case 686u: goto L_08966E44;
    case 687u: goto L_08966E58;
    case 688u: goto L_08966E68;
    case 689u: goto L_08966E74;
    case 690u: goto L_08966E8C;
    case 691u: goto L_08966E94;
    case 692u: goto L_08966EE0;
    case 693u: goto L_08966F3C;
    case 694u: goto L_08966F90;
    case 695u: goto L_08967028;
    case 696u: goto L_0896703C;
    case 697u: goto L_08967050;
    case 698u: goto L_08967060;
    case 699u: goto L_0896706C;
    case 700u: goto L_08967084;
    case 701u: goto L_0896708C;
    case 702u: goto L_08967090;
    case 703u: goto L_08967098;
    case 704u: goto L_089670A0;
    case 705u: goto L_089670CC;
    case 706u: goto L_08967108;
    case 707u: goto L_08967124;
    case 708u: goto L_08967130;
    case 709u: goto L_08967234;
    case 710u: goto L_08967258;
    case 711u: goto L_08967264;
    case 712u: goto L_0896726C;
    case 713u: goto L_0896727C;
    case 714u: goto L_08967298;
    case 715u: goto L_089672B4;
    case 716u: goto L_089672C0;
    case 717u: goto L_089672C4;
    case 718u: goto L_089672D4;
    case 719u: goto L_089672E4;
    case 720u: goto L_089672EC;
    case 721u: goto L_089672F4;
    case 722u: goto L_08967300;
    case 723u: goto L_08967314;
    case 724u: goto L_08967318;
    case 725u: goto L_08967324;
    case 726u: goto L_08967334;
    case 727u: goto L_0896733C;
    case 728u: goto L_08967344;
    case 729u: goto L_08967360;
    case 730u: goto L_08967368;
    case 731u: goto L_08967374;
    case 732u: goto L_0896737C;
    case 733u: goto L_08967388;
    case 734u: goto L_08967390;
    case 735u: goto L_0896739C;
    case 736u: goto L_089673A4;
    case 737u: goto L_089673B0;
    case 738u: goto L_089673B8;
    case 739u: goto L_089673C4;
    case 740u: goto L_089673CC;
    case 741u: goto L_089673D8;
    case 742u: goto L_089673E0;
    case 743u: goto L_089673F4;
    case 744u: goto L_08967408;
    case 745u: goto L_0896741C;
    case 746u: goto L_08967430;
    case 747u: goto L_08967444;
    case 748u: goto L_08967458;
    case 749u: goto L_0896746C;
    case 750u: goto L_08967480;
    case 751u: goto L_089674BC;
    case 752u: goto L_089674D4;
    case 753u: goto L_089674DC;
    case 754u: goto L_089674F0;
    case 755u: goto L_089674F8;
    case 756u: goto L_08967500;
    case 757u: goto L_0896751C;
    case 758u: goto L_08967520;
    case 759u: goto L_08967530;
    case 760u: goto L_08967538;
    case 761u: goto L_0896755C;
    case 762u: goto L_08967564;
    case 763u: goto L_08967570;
    case 764u: goto L_089675B0;
    case 765u: goto L_089675B8;
    case 766u: goto L_089675E4;
    case 767u: goto L_08967620;
    case 768u: goto L_08967638;
    case 769u: goto L_08967640;
    case 770u: goto L_08967654;
    case 771u: goto L_0896765C;
    case 772u: goto L_08967664;
    case 773u: goto L_08967680;
    case 774u: goto L_08967684;
    case 775u: goto L_08967694;
    case 776u: goto L_0896769C;
    case 777u: goto L_089676A8;
    case 778u: goto L_089676B8;
    case 779u: goto L_089676C4;
    case 780u: goto L_089676CC;
    case 781u: goto L_089676D8;
    case 782u: goto L_089676DC;
    case 783u: goto L_08967708;
    case 784u: goto L_08967744;
    case 785u: goto L_0896775C;
    case 786u: goto L_08967764;
    case 787u: goto L_08967778;
    case 788u: goto L_08967780;
    case 789u: goto L_08967788;
    case 790u: goto L_089677A4;
    case 791u: goto L_089677A8;
    case 792u: goto L_089677B8;
    case 793u: goto L_089677C0;
    case 794u: goto L_089677CC;
    case 795u: goto L_089677DC;
    case 796u: goto L_089677E8;
    case 797u: goto L_089677F0;
    case 798u: goto L_089677FC;
    case 799u: goto L_08967804;
    case 800u: goto L_08967808;
    case 801u: goto L_08967834;
    case 802u: goto L_08967864;
    case 803u: goto L_08967878;
    case 804u: goto L_0896787C;
    case 805u: goto L_08967890;
    case 806u: goto L_08967898;
    case 807u: goto L_089678A0;
    case 808u: goto L_089678A8;
    case 809u: goto L_089678B0;
    case 810u: goto L_089678B4;
    case 811u: goto L_089678C4;
    case 812u: goto L_089678E8;
    case 813u: goto L_089678F8;
    case 814u: goto L_0896790C;
    case 815u: goto L_08967910;
    case 816u: goto L_08967924;
    case 817u: goto L_08967938;
    case 818u: goto L_0896794C;
    case 819u: goto L_08967954;
    case 820u: goto L_08967964;
    case 821u: goto L_08967984;
    case 822u: goto L_0896799C;
    case 823u: goto L_089679A4;
    case 824u: goto L_089679D8;
    case 825u: goto L_089679E4;
    case 826u: goto L_089679EC;
    case 827u: goto L_089679F8;
    case 828u: goto L_08967A00;
    case 829u: goto L_08967A0C;
    case 830u: goto L_08967A14;
    case 831u: goto L_08967A38;
    case 832u: goto L_08967A40;
    case 833u: goto L_08967A60;
    case 834u: goto L_08967A7C;
    case 835u: goto L_08967A98;
    case 836u: goto L_08967AA4;
    case 837u: goto L_08967AB8;
    case 838u: goto L_08967AC8;
    case 839u: goto L_08967AF0;
    case 840u: goto L_08967B28;
    case 841u: goto L_08967B30;
    case 842u: goto L_08967B38;
    case 843u: goto L_08967B40;
    case 844u: goto L_08967B68;
    case 845u: goto L_08967B74;
    case 846u: goto L_08967B7C;
    case 847u: goto L_08967B84;
    case 848u: goto L_08967B8C;
    case 849u: goto L_08967BAC;
    case 850u: goto L_08967BB4;
    case 851u: goto L_08967BC8;
    case 852u: goto L_08967BD8;
    case 853u: goto L_08967BE8;
    case 854u: goto L_08967BF0;
    case 855u: goto L_08967BF8;
    case 856u: goto L_08967C00;
    case 857u: goto L_08967C0C;
    case 858u: goto L_08967C18;
    case 859u: goto L_08967C20;
    case 860u: goto L_08967C48;
    case 861u: goto L_08967C6C;
    case 862u: goto L_08967C94;
    case 863u: goto L_08967CCC;
    case 864u: goto L_08967CD8;
    case 865u: goto L_08967CE0;
    case 866u: goto L_08967CEC;
    case 867u: goto L_08967CF4;
    case 868u: goto L_08967D00;
    case 869u: goto L_08967D08;
    case 870u: goto L_08967D30;
    case 871u: goto L_08967D38;
    case 872u: goto L_08967D58;
    case 873u: goto L_08967D74;
    case 874u: goto L_08967D8C;
    case 875u: goto L_08967D98;
    case 876u: goto L_08967DAC;
    case 877u: goto L_08967DD0;
    case 878u: goto L_08967DD8;
    case 879u: goto L_08967DE8;
    case 880u: goto L_08967E18;
    case 881u: goto L_08967E38;
    case 882u: goto L_08967E5C;
    case 883u: goto L_08967E64;
    case 884u: goto L_08967E70;
    case 885u: goto L_08967E7C;
    case 886u: goto L_08967E90;
    case 887u: goto L_08967EB4;
    case 888u: goto L_08967ED8;
    case 889u: goto L_08967EE0;
    case 890u: goto L_08967EEC;
    case 891u: goto L_08967F18;
    case 892u: goto L_08967F20;
    case 893u: goto L_08967F38;
    case 894u: goto L_08967F50;
    case 895u: goto L_08967F70;
    case 896u: goto L_08967F80;
    case 897u: goto L_08967F88;
    case 898u: goto L_08967F90;
    case 899u: goto L_08967F9C;
    case 900u: goto L_08967FB8;
    case 901u: goto L_08967FC0;
    case 902u: goto L_08967FDC;
    case 903u: goto L_08967FE4;
    case 904u: goto L_08967FF0;
    case 905u: goto L_08967FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08964000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08964014u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1472)));
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 491u, 0x0895E660u>(ctx, &aot_mem) && ctx.pc == 0x08964014u) goto L_08964014;
    return;
L_08964014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08964030u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3092));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08964030u) goto L_08964030;
    return;
L_08964030:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 45 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28672)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 452u, 0x08963FD0u>(ctx, &aot_mem); return;
      }
      goto L_08964048;
    }
L_08964048:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4532)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
      if (branch_taken) {
          goto L_08964074;
      }
      goto L_0896406C;
    }
L_0896406C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4536), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08964078;
      }
      goto L_08964074;
    }
L_08964074:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4536), 0u);
    goto L_08964078;
L_08964078:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4560));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 413u, 0x08963C8Cu>(ctx, &aot_mem); return;
      }
      goto L_08964098;
    }
L_08964098:
    ctx.gpr[5] = (0u | 30u);
    ctx.gpr[6] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
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
L_089640D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896410Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0896410Cu) goto L_0896410C;
    return;
L_0896410C:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(144), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(140), 0u);
    ctx.gpr[17] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[18] = (2222u << 16u);
      if (branch_taken) {
          goto L_08964158;
      }
      goto L_08964148;
    }
L_08964148:
    ctx.gpr[31] = (0x08964150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x08964150u) goto L_08964150;
    return;
L_08964150:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    goto L_08964158;
L_08964158:
    ctx.gpr[4] = (0u | 0u);
    goto L_0896415C;
L_0896415C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(124), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896415C;
      }
      goto L_08964170;
    }
L_08964170:
    ctx.gpr[31] = (0x08964178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 597u, 0x0895ED24u>(ctx, &aot_mem) && ctx.pc == 0x08964178u) goto L_08964178;
    return;
L_08964178:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_089641B4;
      }
      goto L_08964188;
    }
L_08964188:
    ctx.gpr[5] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[5] = (17046u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (0u | 4560u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
      if (branch_taken) {
          goto L_089641D8;
      }
      goto L_089641B4;
    }
L_089641B4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[5] = (17082u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[19] = (0u | 9120u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    goto L_089641D8;
L_089641D8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089641E8u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089641E8u) goto L_089641E8;
    return;
L_089641E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08964200u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08964200u) goto L_08964200;
    return;
L_08964200:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (2220u << 16u);
      if (branch_taken) {
          goto L_08964448;
      }
      goto L_08964210;
    }
L_08964210:
    ctx.gpr[21] = (153u << 16u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(18116));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-27009));
    goto L_08964220;
L_08964220:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08964230u);
    ctx.gpr[22] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 122u, 0x0895C9ECu>(ctx, &aot_mem) && ctx.pc == 0x08964230u) goto L_08964230;
    return;
L_08964230:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08964240u);
    ctx.gpr[6] = (0u | 90u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08964240u) goto L_08964240;
    return;
L_08964240:
    ctx.gpr[31] = (0x08964248u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 519u, 0x0895E85Cu>(ctx, &aot_mem) && ctx.pc == 0x08964248u) goto L_08964248;
    return;
L_08964248:
    ctx.gpr[31] = (0x08964250u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 584u, 0x0895EBB4u>(ctx, &aot_mem) && ctx.pc == 0x08964250u) goto L_08964250;
    return;
L_08964250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4536), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4540), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[31] = (0x08964280u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 125u, 0x0895CA20u>(ctx, &aot_mem) && ctx.pc == 0x08964280u) goto L_08964280;
    return;
L_08964280:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
        goto L_089642A8;
    }
    goto L_089642A8;
L_089642A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(152)));
        goto L_089642D0;
    }
    goto L_089642B4;
L_089642B4:
    ctx.gpr[31] = (0x089642BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 471u, 0x0895E4F4u>(ctx, &aot_mem) && ctx.pc == 0x089642BCu) goto L_089642BC;
    return;
L_089642BC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(152)));
    goto L_089642D0;
L_089642D0:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(152)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4532)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08964330;
      }
      goto L_089642F8;
    }
L_089642F8:
    ctx.gpr[5] = (0u | 0u);
    goto L_089642FC;
L_089642FC:
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(1472)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(152)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4532)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089642FC;
      }
      goto L_0896432C;
    }
L_0896432C:
    ctx.gpr[22] = (0u | 0u);
    goto L_08964330;
L_08964330:
    ctx.gpr[23] = (0u | 0u);
    goto L_08964334;
L_08964334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[31] = (0x08964350u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1652));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08964350u) goto L_08964350;
    return;
L_08964350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[31] = (0x0896436Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3092));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0896436Cu) goto L_0896436C;
    return;
L_0896436C:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 45 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08964334;
      }
      goto L_0896437C;
    }
L_0896437C:
    ctx.gpr[31] = (0x08964384u);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08964384u) goto L_08964384;
    return;
L_08964384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 68 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_0896443C;
    }
    goto L_089643AC;
L_089643AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08964424;
      }
      goto L_089643B8;
    }
L_089643B8:
    ctx.gpr[31] = (0x089643C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x089643C0u) goto L_089643C0;
    return;
L_089643C0:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089643F0;
      }
      goto L_089643C8;
    }
L_089643C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[31] = (0x089643DCu);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 527u, 0x088327C8u>(ctx, &aot_mem) && ctx.pc == 0x089643DCu) goto L_089643DC;
    return;
L_089643DC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089643E8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089643E8u) goto L_089643E8;
    return;
L_089643E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896443C;
      }
      goto L_089643F0;
    }
L_089643F0:
    ctx.gpr[31] = (0x089643F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 211u, 0x088BD698u>(ctx, &aot_mem) && ctx.pc == 0x089643F8u) goto L_089643F8;
    return;
L_089643F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_0896443C;
    }
    goto L_08964404;
L_08964404:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[31] = (0x0896441Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0896441Cu) goto L_0896441C;
    return;
L_0896441C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896443C;
      }
      goto L_08964424;
    }
L_08964424:
    ctx.gpr[31] = (0x0896442Cu);
    ctx.gpr[22] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 527u, 0x088327C8u>(ctx, &aot_mem) && ctx.pc == 0x0896442Cu) goto L_0896442C;
    return;
L_0896442C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08964438u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08964438u) goto L_08964438;
    return;
L_08964438:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0896443C;
L_0896443C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4560));
      if (branch_taken) {
          goto L_08964220;
      }
      goto L_08964448;
    }
L_08964448:
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
L_08964478:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[19]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[31]);
    ctx.gpr[31] = (0x089644B0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x089644B0u) goto L_089644B0;
    return;
L_089644B0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[19];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_089644D8;
      }
      goto L_089644BC;
    }
L_089644BC:
    ctx.gpr[31] = (0x089644C4u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x089644C4u) goto L_089644C4;
    return;
L_089644C4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 68 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964774;
      }
      goto L_089644D0;
    }
L_089644D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089644F8;
      }
      goto L_089644D8;
    }
L_089644D8:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089644F8;
      }
      goto L_089644E0;
    }
L_089644E0:
    ctx.gpr[31] = (0x089644E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x089644E8u) goto L_089644E8;
    return;
L_089644E8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089644F8;
      }
      goto L_089644F0;
    }
L_089644F0:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[17] = (0u | 0u);
    goto L_089644F8;
L_089644F8:
    ctx.gpr[31] = (0x08964500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 660u, 0x0895F0A4u>(ctx, &aot_mem) && ctx.pc == 0x08964500u) goto L_08964500;
    return;
L_08964500:
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 156u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08964518u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08964518u) goto L_08964518;
    return;
L_08964518:
    ctx.gpr[20] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28672), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08964530u);
    ctx.gpr[6] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08964530u) goto L_08964530;
    return;
L_08964530:
    ctx.gpr[31] = (0x08964538u);
    // nop
    goto L_089640D8;
L_08964538:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0896454Cu);
    ctx.gpr[6] = (0u | 88u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0896454Cu) goto L_0896454C;
    return;
L_0896454C:
    ctx.gpr[31] = (0x08964554u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08964554u) goto L_08964554;
    return;
L_08964554:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 68 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08964610;
      }
      goto L_08964560;
    }
L_08964560:
    ctx.gpr[31] = (0x08964568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 527u, 0x088327C8u>(ctx, &aot_mem) && ctx.pc == 0x08964568u) goto L_08964568;
    return;
L_08964568:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08964574u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08964574u) goto L_08964574;
    return;
L_08964574:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(4560));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[16];
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_089645AC;
      }
      goto L_08964590;
    }
L_08964590:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
      if (branch_taken) {
          goto L_089645C0;
      }
      goto L_089645AC;
    }
L_089645AC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    goto L_089645C0;
L_089645C0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 10u);
      if (branch_taken) {
          goto L_089645D8;
      }
      goto L_089645C8;
    }
L_089645C8:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089645DC;
      }
      goto L_089645D8;
    }
L_089645D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    goto L_089645DC;
L_089645DC:
    ctx.gpr[31] = (0x089645E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 122u, 0x0895C9ECu>(ctx, &aot_mem) && ctx.pc == 0x089645E4u) goto L_089645E4;
    return;
L_089645E4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089645F4u);
    ctx.gpr[6] = (0u | 90u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089645F4u) goto L_089645F4;
    return;
L_089645F4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(166))))));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08964604u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 622u, 0x08842FE8u>(ctx, &aot_mem) && ctx.pc == 0x08964604u) goto L_08964604;
    return;
L_08964604:
    ctx.gpr[31] = (0x0896460Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 635u, 0x0891E9C0u>(ctx, &aot_mem) && ctx.pc == 0x0896460Cu) goto L_0896460C;
    return;
L_0896460C:
    ctx.gpr[4] = (0u | 3u);
    goto L_08964610;
L_08964610:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08964748;
      }
      goto L_08964618;
    }
L_08964618:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08964624u);
    ctx.gpr[6] = (0u | 88u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08964624u) goto L_08964624;
    return;
L_08964624:
    ctx.gpr[31] = (0x0896462Cu);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0896462Cu) goto L_0896462C;
    return;
L_0896462C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 68 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28672)));
        goto L_0896474C;
    }
    goto L_08964638;
L_08964638:
    ctx.gpr[31] = (0x08964640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 211u, 0x088BD698u>(ctx, &aot_mem) && ctx.pc == 0x08964640u) goto L_08964640;
    return;
L_08964640:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(194));
      if (branch_taken) {
          goto L_08964748;
      }
      goto L_0896464C;
    }
L_0896464C:
    ctx.gpr[31] = (0x08964654u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 122u, 0x0895C9ECu>(ctx, &aot_mem) && ctx.pc == 0x08964654u) goto L_08964654;
    return;
L_08964654:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08964664u);
    ctx.gpr[6] = (0u | 90u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08964664u) goto L_08964664;
    return;
L_08964664:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08964670u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 623u, 0x0895EEB8u>(ctx, &aot_mem) && ctx.pc == 0x08964670u) goto L_08964670;
    return;
L_08964670:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0896467Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0896467Cu) goto L_0896467C;
    return;
L_0896467C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(4560));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_089646B4;
      }
      goto L_08964698;
    }
L_08964698:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
      if (branch_taken) {
          goto L_089646C8;
      }
      goto L_089646B4;
    }
L_089646B4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    goto L_089646C8;
L_089646C8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (0u | 10u);
      if (branch_taken) {
          goto L_089646E0;
      }
      goto L_089646D0;
    }
L_089646D0:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089646E4;
      }
      goto L_089646E0;
    }
L_089646E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    goto L_089646E4;
L_089646E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(256))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[7]);
    ctx.gpr[31] = (0x08964740u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08964740u) goto L_08964740;
    return;
L_08964740:
    ctx.gpr[31] = (0x08964748u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 635u, 0x0891E9C0u>(ctx, &aot_mem) && ctx.pc == 0x08964748u) goto L_08964748;
    return;
L_08964748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28672)));
    goto L_0896474C;
L_0896474C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0896475Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896475Cu) goto L_0896475C;
    return;
L_0896475C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28672)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08964774u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08964774u) goto L_08964774;
    return;
L_08964774:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896479C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(4560));
      if (branch_taken) {
          goto L_08964C10;
      }
      goto L_089647E0;
    }
L_089647E0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[18] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1472), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[22] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[19] = (0u | 32u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[21] = (0u | 2500u);
    ctx.gpr[23] = (0u | 5000u);
    ctx.gpr[30] = (0u | 3500u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1472)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(28676));
    ctx.gpr[8] = (ctx.gpr[19] + static_cast<std::uint32_t>(-32));
    goto L_0896483C;
L_0896483C:
    ctx.gpr[9] = (ctx.gpr[8] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08964B9C;
    }
    goto L_08964848;
L_08964848:
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[8]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(18304)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964860:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(84))))));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[20];
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2500 ? 1u : 0u);
      if (branch_taken) {
          goto L_08964B98;
      }
      goto L_0896486C;
    }
L_0896486C:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08964B9C;
    }
    goto L_08964874;
L_08964874:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1472), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x0896489Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0896489Cu) goto L_0896489C;
    return;
L_0896489C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1472)));
      if (branch_taken) {
          goto L_08964B98;
      }
      goto L_089648BC;
    }
L_089648BC:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[20];
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 5000 ? 1u : 0u);
      if (branch_taken) {
          goto L_08964B98;
      }
      goto L_089648C8;
    }
L_089648C8:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08964B9C;
    }
    goto L_089648D0;
L_089648D0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1472), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x089648F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089648F8u) goto L_089648F8;
    return;
L_089648F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1472)));
      if (branch_taken) {
          goto L_08964B98;
      }
      goto L_08964918;
    }
L_08964918:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[20];
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3500 ? 1u : 0u);
      if (branch_taken) {
          goto L_08964B98;
      }
      goto L_08964924;
    }
L_08964924:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08964B9C;
    }
    goto L_0896492C;
L_0896492C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1472), ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (0x08964954u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08964954u) goto L_08964954;
    return;
L_08964954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1472)));
      if (branch_taken) {
          goto L_08964B98;
      }
      goto L_08964974;
    }
L_08964974:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(90))))));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[20];
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3500 ? 1u : 0u);
      if (branch_taken) {
          goto L_08964B98;
      }
      goto L_08964980;
    }
L_08964980:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08964B9C;
    }
    goto L_08964988;
L_08964988:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1472), ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x089649B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089649B0u) goto L_089649B0;
    return;
L_089649B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1472)));
      if (branch_taken) {
          goto L_08964B98;
      }
      goto L_089649D0;
    }
L_089649D0:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[20];
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3500 ? 1u : 0u);
      if (branch_taken) {
          goto L_08964B98;
      }
      goto L_089649DC;
    }
L_089649DC:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08964B9C;
    }
    goto L_089649E4;
L_089649E4:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1472), ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08964A0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08964A0Cu) goto L_08964A0C;
    return;
L_08964A0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1472)));
      if (branch_taken) {
          goto L_08964B98;
      }
      goto L_08964A2C;
    }
L_08964A2C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(94))))));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[20];
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 5000 ? 1u : 0u);
      if (branch_taken) {
          goto L_08964B98;
      }
      goto L_08964A38;
    }
L_08964A38:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08964B9C;
    }
    goto L_08964A40;
L_08964A40:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1472), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08964A68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08964A68u) goto L_08964A68;
    return;
L_08964A68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1472)));
      if (branch_taken) {
          goto L_08964B98;
      }
      goto L_08964A88;
    }
L_08964A88:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(96))))));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[20];
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 5000 ? 1u : 0u);
      if (branch_taken) {
          goto L_08964B98;
      }
      goto L_08964A94;
    }
L_08964A94:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08964B9C;
    }
    goto L_08964A9C;
L_08964A9C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1472), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x08964AC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08964AC4u) goto L_08964AC4;
    return;
L_08964AC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1472)));
      if (branch_taken) {
          goto L_08964B98;
      }
      goto L_08964AE4;
    }
L_08964AE4:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(98))))));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[20];
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 5000 ? 1u : 0u);
      if (branch_taken) {
          goto L_08964B98;
      }
      goto L_08964AF0;
    }
L_08964AF0:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08964B9C;
    }
    goto L_08964AF8;
L_08964AF8:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1472), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x08964B20u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08964B20u) goto L_08964B20;
    return;
L_08964B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1472)));
      if (branch_taken) {
          goto L_08964B98;
      }
      goto L_08964B40;
    }
L_08964B40:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(100))))));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[20];
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 5000 ? 1u : 0u);
      if (branch_taken) {
          goto L_08964B98;
      }
      goto L_08964B4C;
    }
L_08964B4C:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08964B9C;
    }
    goto L_08964B54;
L_08964B54:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1472), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (0x08964B7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08964B7Cu) goto L_08964B7C;
    return;
L_08964B7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1472)));
    goto L_08964B98;
L_08964B98:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08964B9C;
L_08964B9C:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[19]) < 41 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[19] + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_0896483C;
      }
      goto L_08964BA8;
    }
L_08964BA8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(76))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 5000 ? 1u : 0u);
      if (branch_taken) {
          goto L_08964C04;
      }
      goto L_08964BB8;
    }
L_08964BB8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964C04;
      }
      goto L_08964BC0;
    }
L_08964BC0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1472), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (0x08964BE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08964BE8u) goto L_08964BE8;
    return;
L_08964BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28672)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1472)));
    goto L_08964C04;
L_08964C04:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08964C10;
      }
      goto L_08964C0C;
    }
L_08964C0C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08964C10;
L_08964C10:
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
L_08964C40:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28664)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28668), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964C54:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964C7C;
      }
      goto L_08964C64;
    }
L_08964C64:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(18368)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964C7C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964C84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(28896), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(28897), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28900), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28904), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964CBCu);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08965604;
L_08964CBC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964CC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(28896), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(28897), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28900), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28904), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964D00u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08965604;
L_08964D00:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964D14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964D24u);
    // nop
    goto L_08964DB0;
L_08964D24:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(15) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964DA4;
      }
      goto L_08964D34;
    }
L_08964D34:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(18448)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964D4C:
    ctx.gpr[31] = (0x08964D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 187u, 0x0895CDACu>(ctx, &aot_mem) && ctx.pc == 0x08964D54u) goto L_08964D54;
    return;
L_08964D54:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964D60:
    ctx.gpr[31] = (0x08964D68u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 327u, 0x088A5C08u>(ctx, &aot_mem) && ctx.pc == 0x08964D68u) goto L_08964D68;
    return;
L_08964D68:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964D74:
    ctx.gpr[31] = (0x08964D7Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 327u, 0x088A5C08u>(ctx, &aot_mem) && ctx.pc == 0x08964D7Cu) goto L_08964D7C;
    return;
L_08964D7C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964D88:
    ctx.gpr[31] = (0x08964D90u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 327u, 0x088A5C08u>(ctx, &aot_mem) && ctx.pc == 0x08964D90u) goto L_08964D90;
    return;
L_08964D90:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964D9C:
    ctx.gpr[31] = (0x08964DA4u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 327u, 0x088A5C08u>(ctx, &aot_mem) && ctx.pc == 0x08964DA4u) goto L_08964DA4;
    return;
L_08964DA4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964DB0:
    ctx.gpr[4] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28892)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964DBC:
    ctx.gpr[4] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(28896)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964DC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964DF0u);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08964DF0u) goto L_08964DF0;
    return;
L_08964DF0:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08964E0C;
      }
      goto L_08964DFC;
    }
L_08964DFC:
    ctx.gpr[31] = (0x08964E04u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08964F68;
L_08964E04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08964F44;
      }
      goto L_08964E0C;
    }
L_08964E0C:
    ctx.gpr[31] = (0x08964E14u);
    // nop
    goto L_08964DB0;
L_08964E14:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964F44;
      }
      goto L_08964E24;
    }
L_08964E24:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(18512)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964E3C:
    ctx.gpr[31] = (0x08964E44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 147u, 0x0895CB88u>(ctx, &aot_mem) && ctx.pc == 0x08964E44u) goto L_08964E44;
    return;
L_08964E44:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964F44;
      }
      goto L_08964E50;
    }
L_08964E50:
    ctx.gpr[31] = (0x08964E58u);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08964E58u) goto L_08964E58;
    return;
L_08964E58:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08964E74;
      }
      goto L_08964E64;
    }
L_08964E64:
    ctx.gpr[31] = (0x08964E6Cu);
    ctx.gpr[4] = (0u | 5u);
    goto L_08965604;
L_08964E6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964E7C;
      }
      goto L_08964E74;
    }
L_08964E74:
    ctx.gpr[31] = (0x08964E7Cu);
    ctx.gpr[4] = (0u | 2u);
    goto L_08965604;
L_08964E7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08964F44;
      }
      goto L_08964E84;
    }
L_08964E84:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x08964E90u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 313u, 0x088A5B64u>(ctx, &aot_mem) && ctx.pc == 0x08964E90u) goto L_08964E90;
    return;
L_08964E90:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08964F44;
      }
      goto L_08964E9C;
    }
L_08964E9C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08964EB4;
      }
      goto L_08964EA4;
    }
L_08964EA4:
    ctx.gpr[31] = (0x08964EACu);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08965604;
L_08964EAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08964F44;
      }
      goto L_08964EB4;
    }
L_08964EB4:
    ctx.gpr[31] = (0x08964EBCu);
    ctx.gpr[4] = (0u | 1u);
    goto L_08965604;
L_08964EBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08964F44;
      }
      goto L_08964EC4;
    }
L_08964EC4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08964ED0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 313u, 0x088A5B64u>(ctx, &aot_mem) && ctx.pc == 0x08964ED0u) goto L_08964ED0;
    return;
L_08964ED0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964F44;
      }
      goto L_08964EDC;
    }
L_08964EDC:
    ctx.gpr[31] = (0x08964EE4u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08965604;
L_08964EE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 6u);
      if (branch_taken) {
          goto L_08964F44;
      }
      goto L_08964EEC;
    }
L_08964EEC:
    ctx.gpr[31] = (0x08964EF4u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08965604;
L_08964EF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 6u);
      if (branch_taken) {
          goto L_08964F44;
      }
      goto L_08964EFC;
    }
L_08964EFC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08964F08u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 313u, 0x088A5B64u>(ctx, &aot_mem) && ctx.pc == 0x08964F08u) goto L_08964F08;
    return;
L_08964F08:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964F44;
      }
      goto L_08964F14;
    }
L_08964F14:
    ctx.gpr[31] = (0x08964F1Cu);
    ctx.gpr[4] = (0u | 4u);
    goto L_08965604;
L_08964F1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08964F44;
      }
      goto L_08964F24;
    }
L_08964F24:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x08964F30u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 313u, 0x088A5B64u>(ctx, &aot_mem) && ctx.pc == 0x08964F30u) goto L_08964F30;
    return;
L_08964F30:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964F44;
      }
      goto L_08964F3C;
    }
L_08964F3C:
    ctx.gpr[31] = (0x08964F44u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08965604;
L_08964F44:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08964F68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    ctx.gpr[31] = (0x08964F84u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 203u, 0x088BD634u>(ctx, &aot_mem) && ctx.pc == 0x08964F84u) goto L_08964F84;
    return;
L_08964F84:
    ctx.gpr[31] = (0x08964F8Cu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 206u, 0x088BD65Cu>(ctx, &aot_mem) && ctx.pc == 0x08964F8Cu) goto L_08964F8C;
    return;
L_08964F8C:
    ctx.gpr[31] = (0x08964F94u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[2]);
    goto L_08964DB0;
L_08964F94:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 15u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    goto L_08964FA4;
L_08964FA4:
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[29] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08964FA4;
      }
      goto L_08964FC8;
    }
L_08964FC8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964FFC;
      }
      goto L_08964FD0;
    }
L_08964FD0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08964FFC;
L_08964FFC:
    ctx.gpr[31] = (0x08965004u);
    ctx.gpr[18] = (0u | 0u);
    goto L_08964DBC;
L_08965004:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08965040;
      }
      goto L_0896500C;
    }
L_0896500C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10566)));
    ctx.gpr[6] = (0u | 17u);
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 18u);
      if (branch_taken) {
          goto L_08965034;
      }
      goto L_08965020;
    }
L_08965020:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_08965034;
      }
      goto L_08965028;
    }
L_08965028:
    ctx.gpr[5] = (0u | 512u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08965040;
      }
      goto L_08965034;
    }
L_08965034:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(28896), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08965040;
L_08965040:
    ctx.gpr[31] = (0x08965048u);
    // nop
    goto L_08964DB0;
L_08965048:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-7));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_08965058;
    }
L_08965058:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(18544)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965070:
    ctx.gpr[31] = (0x08965078u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 147u, 0x0895CB88u>(ctx, &aot_mem) && ctx.pc == 0x08965078u) goto L_08965078;
    return;
L_08965078:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_08965084;
    }
L_08965084:
    ctx.gpr[31] = (0x0896508Cu);
    ctx.gpr[4] = (0u | 8u);
    goto L_08965604;
L_0896508C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_08965094;
    }
L_08965094:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089650A0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 313u, 0x088A5B64u>(ctx, &aot_mem) && ctx.pc == 0x089650A0u) goto L_089650A0;
    return;
L_089650A0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_089650AC;
    }
L_089650AC:
    ctx.gpr[31] = (0x089650B4u);
    ctx.gpr[4] = (0u | 9u);
    goto L_08965604;
L_089650B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_089650BC;
    }
L_089650BC:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089650CCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 313u, 0x088A5B64u>(ctx, &aot_mem) && ctx.pc == 0x089650CCu) goto L_089650CC;
    return;
L_089650CC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_089650D8;
    }
L_089650D8:
    ctx.gpr[31] = (0x089650E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x089650E0u) goto L_089650E0;
    return;
L_089650E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_089650F8;
      }
      goto L_089650E8;
    }
L_089650E8:
    ctx.gpr[31] = (0x089650F0u);
    ctx.gpr[4] = (0u | 11u);
    goto L_08965604;
L_089650F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896512C;
      }
      goto L_089650F8;
    }
L_089650F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(28896)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0896511C;
      }
      goto L_08965104;
    }
L_08965104:
    ctx.gpr[31] = (0x0896510Cu);
    ctx.gpr[4] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x0896510Cu) goto L_0896510C;
    return;
L_0896510C:
    ctx.gpr[31] = (0x08965114u);
    ctx.gpr[4] = (0u | 16u);
    goto L_08965604;
L_08965114:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896512C;
      }
      goto L_0896511C;
    }
L_0896511C:
    ctx.gpr[31] = (0x08965124u);
    ctx.gpr[4] = (0u | 26u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x08965124u) goto L_08965124;
    return;
L_08965124:
    ctx.gpr[31] = (0x0896512Cu);
    ctx.gpr[4] = (0u | 12u);
    goto L_08965604;
L_0896512C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_08965134;
    }
L_08965134:
    ctx.gpr[31] = (0x0896513Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x0896513Cu) goto L_0896513C;
    return;
L_0896513C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_08965144;
    }
L_08965144:
    ctx.gpr[31] = (0x0896514Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 313u, 0x088A5B64u>(ctx, &aot_mem) && ctx.pc == 0x0896514Cu) goto L_0896514C;
    return;
L_0896514C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_08965158;
    }
L_08965158:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08965178;
      }
      goto L_08965160;
    }
L_08965160:
    ctx.gpr[31] = (0x08965168u);
    ctx.gpr[4] = (0u | 27u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x08965168u) goto L_08965168;
    return;
L_08965168:
    ctx.gpr[31] = (0x08965170u);
    ctx.gpr[4] = (0u | 13u);
    goto L_08965604;
L_08965170:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_08965178;
    }
L_08965178:
    ctx.gpr[31] = (0x08965180u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x08965180u) goto L_08965180;
    return;
L_08965180:
    ctx.gpr[31] = (0x08965188u);
    ctx.gpr[4] = (0u | 17u);
    goto L_08965604;
L_08965188:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_08965190;
    }
L_08965190:
    ctx.gpr[31] = (0x08965198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x08965198u) goto L_08965198;
    return;
L_08965198:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_089651A4;
    }
L_089651A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(28896)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_089651FC;
      }
      goto L_089651B0;
    }
L_089651B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(28897)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089651DC;
      }
      goto L_089651BC;
    }
L_089651BC:
    ctx.gpr[31] = (0x089651C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 280u, 0x088C1280u>(ctx, &aot_mem) && ctx.pc == 0x089651C4u) goto L_089651C4;
    return;
L_089651C4:
    ctx.gpr[31] = (0x089651CCu);
    ctx.gpr[4] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x089651CCu) goto L_089651CC;
    return;
L_089651CC:
    ctx.gpr[31] = (0x089651D4u);
    ctx.gpr[4] = (0u | 16u);
    goto L_08965604;
L_089651D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_089651DC;
    }
L_089651DC:
    ctx.gpr[31] = (0x089651E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 280u, 0x088C1280u>(ctx, &aot_mem) && ctx.pc == 0x089651E4u) goto L_089651E4;
    return;
L_089651E4:
    ctx.gpr[31] = (0x089651ECu);
    ctx.gpr[4] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x089651ECu) goto L_089651EC;
    return;
L_089651EC:
    ctx.gpr[31] = (0x089651F4u);
    ctx.gpr[4] = (0u | 16u);
    goto L_08965604;
L_089651F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_089651FC;
    }
L_089651FC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10566)));
    ctx.gpr[6] = (0u | 13u);
    ctx.gpr[7] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (28672u << 16u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11));
      if (branch_taken) {
          goto L_0896523C;
      }
      goto L_08965214;
    }
L_08965214:
    ctx.gpr[31] = (0x0896521Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 206u, 0x088BD65Cu>(ctx, &aot_mem) && ctx.pc == 0x0896521Cu) goto L_0896521C;
    return;
L_0896521C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0896522C;
      }
      goto L_08965224;
    }
L_08965224:
    ctx.gpr[31] = (0x0896522Cu);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x0896522Cu) goto L_0896522C;
    return;
L_0896522C:
    ctx.gpr[31] = (0x08965234u);
    ctx.gpr[4] = (0u | 14u);
    goto L_08965604;
L_08965234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_0896523C;
    }
L_0896523C:
    ctx.gpr[31] = (0x08965244u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 206u, 0x088BD65Cu>(ctx, &aot_mem) && ctx.pc == 0x08965244u) goto L_08965244;
    return;
L_08965244:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08965294;
      }
      goto L_08965250;
    }
L_08965250:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10720)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08965274;
      }
      goto L_0896525C;
    }
L_0896525C:
    ctx.gpr[31] = (0x08965264u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x08965264u) goto L_08965264;
    return;
L_08965264:
    ctx.gpr[31] = (0x0896526Cu);
    ctx.gpr[4] = (0u | 18u);
    goto L_08965604;
L_0896526C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_08965274;
    }
L_08965274:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_0896527C;
    }
L_0896527C:
    ctx.gpr[31] = (0x08965284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 286u, 0x088C12CCu>(ctx, &aot_mem) && ctx.pc == 0x08965284u) goto L_08965284;
    return;
L_08965284:
    ctx.gpr[31] = (0x0896528Cu);
    ctx.gpr[4] = (0u | 26u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x0896528Cu) goto L_0896528C;
    return;
L_0896528C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_08965294;
    }
L_08965294:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_0896529C;
    }
L_0896529C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10544)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_089652AC;
    }
L_089652AC:
    ctx.gpr[31] = (0x089652B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 282u, 0x088C12A0u>(ctx, &aot_mem) && ctx.pc == 0x089652B4u) goto L_089652B4;
    return;
L_089652B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_089652BC;
    }
L_089652BC:
    ctx.gpr[31] = (0x089652C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x089652C4u) goto L_089652C4;
    return;
L_089652C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_089652CC;
    }
L_089652CC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10566)));
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08965318;
      }
      goto L_089652E0;
    }
L_089652E0:
    ctx.gpr[31] = (0x089652E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 206u, 0x088BD65Cu>(ctx, &aot_mem) && ctx.pc == 0x089652E8u) goto L_089652E8;
    return;
L_089652E8:
    ctx.gpr[4] = (28672u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08965300;
      }
      goto L_089652F8;
    }
L_089652F8:
    ctx.gpr[31] = (0x08965300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 286u, 0x088C12CCu>(ctx, &aot_mem) && ctx.pc == 0x08965300u) goto L_08965300;
    return;
L_08965300:
    ctx.gpr[31] = (0x08965308u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x08965308u) goto L_08965308;
    return;
L_08965308:
    ctx.gpr[31] = (0x08965310u);
    ctx.gpr[4] = (0u | 15u);
    goto L_08965604;
L_08965310:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_08965318;
    }
L_08965318:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(28896)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08965390;
      }
      goto L_08965328;
    }
L_08965328:
    ctx.gpr[31] = (0x08965330u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 280u, 0x088C1280u>(ctx, &aot_mem) && ctx.pc == 0x08965330u) goto L_08965330;
    return;
L_08965330:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(28897)));
    if (ctx.gpr[4] != ctx.gpr[16]) {
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10566)));
        goto L_08965350;
    }
    goto L_08965340;
L_08965340:
    ctx.gpr[31] = (0x08965348u);
    ctx.gpr[4] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x08965348u) goto L_08965348;
    return;
L_08965348:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965380;
      }
      goto L_08965350;
    }
L_08965350:
    ctx.gpr[4] = (0u | 17u);
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 18u);
      if (branch_taken) {
          goto L_08965370;
      }
      goto L_08965360;
    }
L_08965360:
    ctx.gpr[31] = (0x08965368u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x08965368u) goto L_08965368;
    return;
L_08965368:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965380;
      }
      goto L_08965370;
    }
L_08965370:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08965380;
      }
      goto L_08965378;
    }
L_08965378:
    ctx.gpr[31] = (0x08965380u);
    ctx.gpr[4] = (0u | 35u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x08965380u) goto L_08965380;
    return;
L_08965380:
    ctx.gpr[31] = (0x08965388u);
    ctx.gpr[4] = (0u | 16u);
    goto L_08965604;
L_08965388:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_08965390;
    }
L_08965390:
    ctx.gpr[31] = (0x08965398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 206u, 0x088BD65Cu>(ctx, &aot_mem) && ctx.pc == 0x08965398u) goto L_08965398;
    return;
L_08965398:
    ctx.gpr[5] = (28672u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(11));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_089653F0;
      }
      goto L_089653AC;
    }
L_089653AC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10720)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089653D0;
      }
      goto L_089653B8;
    }
L_089653B8:
    ctx.gpr[31] = (0x089653C0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x089653C0u) goto L_089653C0;
    return;
L_089653C0:
    ctx.gpr[31] = (0x089653C8u);
    ctx.gpr[4] = (0u | 18u);
    goto L_08965604;
L_089653C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_089653D0;
    }
L_089653D0:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_089653D8;
    }
L_089653D8:
    ctx.gpr[31] = (0x089653E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 286u, 0x088C12CCu>(ctx, &aot_mem) && ctx.pc == 0x089653E0u) goto L_089653E0;
    return;
L_089653E0:
    ctx.gpr[31] = (0x089653E8u);
    ctx.gpr[4] = (0u | 27u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x089653E8u) goto L_089653E8;
    return;
L_089653E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_089653F0;
    }
L_089653F0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_089653F8;
    }
L_089653F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10544)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_08965408;
    }
L_08965408:
    ctx.gpr[31] = (0x08965410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 282u, 0x088C12A0u>(ctx, &aot_mem) && ctx.pc == 0x08965410u) goto L_08965410;
    return;
L_08965410:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_08965418;
    }
L_08965418:
    ctx.gpr[31] = (0x08965420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x08965420u) goto L_08965420;
    return;
L_08965420:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_0896542C;
    }
L_0896542C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(28896)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08965458;
      }
      goto L_08965438;
    }
L_08965438:
    ctx.gpr[31] = (0x08965440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 280u, 0x088C1280u>(ctx, &aot_mem) && ctx.pc == 0x08965440u) goto L_08965440;
    return;
L_08965440:
    ctx.gpr[31] = (0x08965448u);
    ctx.gpr[4] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x08965448u) goto L_08965448;
    return;
L_08965448:
    ctx.gpr[31] = (0x08965450u);
    ctx.gpr[4] = (0u | 16u);
    goto L_08965604;
L_08965450:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_08965458;
    }
L_08965458:
    ctx.gpr[31] = (0x08965460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 206u, 0x088BD65Cu>(ctx, &aot_mem) && ctx.pc == 0x08965460u) goto L_08965460;
    return;
L_08965460:
    ctx.gpr[4] = (28672u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(11));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089654B4;
      }
      goto L_08965470;
    }
L_08965470:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10720)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08965494;
      }
      goto L_0896547C;
    }
L_0896547C:
    ctx.gpr[31] = (0x08965484u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x08965484u) goto L_08965484;
    return;
L_08965484:
    ctx.gpr[31] = (0x0896548Cu);
    ctx.gpr[4] = (0u | 18u);
    goto L_08965604;
L_0896548C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_08965494;
    }
L_08965494:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_0896549C;
    }
L_0896549C:
    ctx.gpr[31] = (0x089654A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 286u, 0x088C12CCu>(ctx, &aot_mem) && ctx.pc == 0x089654A4u) goto L_089654A4;
    return;
L_089654A4:
    ctx.gpr[31] = (0x089654ACu);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x089654ACu) goto L_089654AC;
    return;
L_089654AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_089654B4;
    }
L_089654B4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10566)));
    ctx.gpr[6] = (0u | 13u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896550C;
      }
      goto L_089654C8;
    }
L_089654C8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10720)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089654EC;
      }
      goto L_089654D4;
    }
L_089654D4:
    ctx.gpr[31] = (0x089654DCu);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x089654DCu) goto L_089654DC;
    return;
L_089654DC:
    ctx.gpr[31] = (0x089654E4u);
    ctx.gpr[4] = (0u | 15u);
    goto L_08965604;
L_089654E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_089654EC;
    }
L_089654EC:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_089654F4;
    }
L_089654F4:
    ctx.gpr[31] = (0x089654FCu);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x089654FCu) goto L_089654FC;
    return;
L_089654FC:
    ctx.gpr[31] = (0x08965504u);
    ctx.gpr[4] = (0u | 17u);
    goto L_08965604;
L_08965504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_0896550C;
    }
L_0896550C:
    ctx.gpr[31] = (0x08965514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 280u, 0x088C1280u>(ctx, &aot_mem) && ctx.pc == 0x08965514u) goto L_08965514;
    return;
L_08965514:
    ctx.gpr[31] = (0x0896551Cu);
    ctx.gpr[4] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x0896551Cu) goto L_0896551C;
    return;
L_0896551C:
    ctx.gpr[31] = (0x08965524u);
    ctx.gpr[4] = (0u | 16u);
    goto L_08965604;
L_08965524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_0896552C;
    }
L_0896552C:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(28896)));
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[5] != ctx.gpr[4]) {
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10550)));
        goto L_08965570;
    }
    goto L_08965540;
L_08965540:
    ctx.gpr[31] = (0x08965548u);
    ctx.gpr[16] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x08965548u) goto L_08965548;
    return;
L_08965548:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[16] = (0u | 12u);
        goto L_08965550;
    }
    goto L_08965550;
L_08965550:
    ctx.gpr[31] = (0x08965558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 280u, 0x088C1280u>(ctx, &aot_mem) && ctx.pc == 0x08965558u) goto L_08965558;
    return;
L_08965558:
    ctx.gpr[31] = (0x08965560u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x08965560u) goto L_08965560;
    return;
L_08965560:
    ctx.gpr[31] = (0x08965568u);
    ctx.gpr[4] = (0u | 16u);
    goto L_08965604;
L_08965568:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_08965570;
    }
L_08965570:
    ctx.gpr[4] = (0u | 15u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_08965580;
    }
L_08965580:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10566)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_08965590;
    }
L_08965590:
    ctx.gpr[31] = (0x08965598u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08965604;
L_08965598:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_089655A0;
    }
L_089655A0:
    ctx.gpr[31] = (0x089655A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 717u, 0x088C7B78u>(ctx, &aot_mem) && ctx.pc == 0x089655A8u) goto L_089655A8;
    return;
L_089655A8:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_089655B4;
    }
L_089655B4:
    ctx.gpr[31] = (0x089655BCu);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 730u, 0x088C7C40u>(ctx, &aot_mem) && ctx.pc == 0x089655BCu) goto L_089655BC;
    return;
L_089655BC:
    ctx.gpr[31] = (0x089655C4u);
    ctx.gpr[4] = (0u | 17u);
    goto L_08965604;
L_089655C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089655E8;
      }
      goto L_089655CC;
    }
L_089655CC:
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(28896), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(28897), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x089655E4u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08965604;
L_089655E4:
    ctx.gpr[18] = (0u | 7u);
    goto L_089655E8;
L_089655E8:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965604:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28892)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2224u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1880));
      if (branch_taken) {
          goto L_08965698;
      }
      goto L_08965638;
    }
L_08965638:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(18592)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965650:
    ctx.gpr[31] = (0x08965658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 142u, 0x0895CB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08965658u) goto L_08965658;
    return;
L_08965658:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0896569C;
      }
      goto L_08965660;
    }
L_08965660:
    ctx.gpr[31] = (0x08965668u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 299u, 0x088A5AD8u>(ctx, &aot_mem) && ctx.pc == 0x08965668u) goto L_08965668;
    return;
L_08965668:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0896569C;
      }
      goto L_08965670;
    }
L_08965670:
    ctx.gpr[31] = (0x08965678u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 299u, 0x088A5AD8u>(ctx, &aot_mem) && ctx.pc == 0x08965678u) goto L_08965678;
    return;
L_08965678:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0896569C;
      }
      goto L_08965680;
    }
L_08965680:
    ctx.gpr[31] = (0x08965688u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 299u, 0x088A5AD8u>(ctx, &aot_mem) && ctx.pc == 0x08965688u) goto L_08965688;
    return;
L_08965688:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0896569C;
      }
      goto L_08965690;
    }
L_08965690:
    ctx.gpr[31] = (0x08965698u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 299u, 0x088A5AD8u>(ctx, &aot_mem) && ctx.pc == 0x08965698u) goto L_08965698;
    return;
L_08965698:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_0896569C;
L_0896569C:
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (0u | 2u);
      if (branch_taken) {
          goto L_089656B0;
      }
      goto L_089656A8;
    }
L_089656A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089656BC;
      }
      goto L_089656B0;
    }
L_089656B0:
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (0u | 1u);
        goto L_089656BC;
    }
    goto L_089656BC;
L_089656BC:
    ctx.gpr[5] = (ctx.gpr[16] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089657DC;
      }
      goto L_089656C8;
    }
L_089656C8:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[16]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(18640)));
    jump_target = ctx.gpr[1];
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089656E0:
    ctx.gpr[31] = (0x089656E8u);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x089656E8u) goto L_089656E8;
    return;
L_089656E8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896571C;
      }
      goto L_089656F4;
    }
L_089656F4:
    ctx.gpr[31] = (0x089656FCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 165u, 0x08934CD4u>(ctx, &aot_mem) && ctx.pc == 0x089656FCu) goto L_089656FC;
    return;
L_089656FC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[16] = (0u | 5u);
        goto L_08965714;
    }
    goto L_08965704;
L_08965704:
    ctx.gpr[31] = (0x0896570Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 131u, 0x0895CAA0u>(ctx, &aot_mem) && ctx.pc == 0x0896570Cu) goto L_0896570C;
    return;
L_0896570C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089657DC;
      }
      goto L_08965714;
    }
L_08965714:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0896572C;
      }
      goto L_0896571C;
    }
L_0896571C:
    ctx.gpr[31] = (0x08965724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 131u, 0x0895CAA0u>(ctx, &aot_mem) && ctx.pc == 0x08965724u) goto L_08965724;
    return;
L_08965724:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089657DC;
      }
      goto L_0896572C;
    }
L_0896572C:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_0896575C;
    }
    goto L_08965738;
L_08965738:
    ctx.gpr[31] = (0x08965740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 163u, 0x08934C84u>(ctx, &aot_mem) && ctx.pc == 0x08965740u) goto L_08965740;
    return;
L_08965740:
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[2] != ctx.gpr[4]) {
    ctx.gpr[16] = (0u | 1u);
        goto L_0896575C;
    }
    goto L_0896574C;
L_0896574C:
    ctx.gpr[31] = (0x08965754u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 285u, 0x088A5A4Cu>(ctx, &aot_mem) && ctx.pc == 0x08965754u) goto L_08965754;
    return;
L_08965754:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089657DC;
      }
      goto L_0896575C;
    }
L_0896575C:
    ctx.gpr[31] = (0x08965764u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 168u, 0x08934D14u>(ctx, &aot_mem) && ctx.pc == 0x08965764u) goto L_08965764;
    return;
L_08965764:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896577C;
      }
      goto L_0896576C;
    }
L_0896576C:
    ctx.gpr[31] = (0x08965774u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 285u, 0x088A5A4Cu>(ctx, &aot_mem) && ctx.pc == 0x08965774u) goto L_08965774;
    return;
L_08965774:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089657DC;
      }
      goto L_0896577C;
    }
L_0896577C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 6u);
      if (branch_taken) {
          goto L_089657DC;
      }
      goto L_08965784;
    }
L_08965784:
    ctx.gpr[31] = (0x0896578Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 285u, 0x088A5A4Cu>(ctx, &aot_mem) && ctx.pc == 0x0896578Cu) goto L_0896578C;
    return;
L_0896578C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089657DC;
      }
      goto L_08965794;
    }
L_08965794:
    ctx.gpr[31] = (0x0896579Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 285u, 0x088A5A4Cu>(ctx, &aot_mem) && ctx.pc == 0x0896579Cu) goto L_0896579C;
    return;
L_0896579C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089657DC;
      }
      goto L_089657A4;
    }
L_089657A4:
    ctx.gpr[31] = (0x089657ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 131u, 0x0895CAA0u>(ctx, &aot_mem) && ctx.pc == 0x089657ACu) goto L_089657AC;
    return;
L_089657AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089657DC;
      }
      goto L_089657B4;
    }
L_089657B4:
    ctx.gpr[31] = (0x089657BCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 285u, 0x088A5A4Cu>(ctx, &aot_mem) && ctx.pc == 0x089657BCu) goto L_089657BC;
    return;
L_089657BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089657DC;
      }
      goto L_089657C4;
    }
L_089657C4:
    ctx.gpr[31] = (0x089657CCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 285u, 0x088A5A4Cu>(ctx, &aot_mem) && ctx.pc == 0x089657CCu) goto L_089657CC;
    return;
L_089657CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089657DC;
      }
      goto L_089657D4;
    }
L_089657D4:
    ctx.gpr[31] = (0x089657DCu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 285u, 0x088A5A4Cu>(ctx, &aot_mem) && ctx.pc == 0x089657DCu) goto L_089657DC;
    return;
L_089657DC:
    ctx.gpr[31] = (0x089657E4u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28892), ctx.gpr[16]);
    goto L_08964DB0;
L_089657E4:
    ctx.gpr[31] = (0x089657ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08964C54;
L_089657EC:
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
L_08965808:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28880)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28884), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896581C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (2198u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08965854u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(22556));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965854u) goto L_08965854;
    return;
L_08965854:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 20u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08965868u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965868u) goto L_08965868;
    return;
L_08965868:
    { const bool branch_taken = 0u != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
      if (branch_taken) {
          goto L_0896587C;
      }
      goto L_08965870;
    }
L_08965870:
    ctx.gpr[4] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2384));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_0896587C;
L_0896587C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08965888u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965888u) goto L_08965888;
    return;
L_08965888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089658A0u);
    ctx.gpr[4] = (0u | 20u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089658A0u) goto L_089658A0;
    return;
L_089658A0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
      if (branch_taken) {
          goto L_089658B4;
      }
      goto L_089658A8;
    }
L_089658A8:
    ctx.gpr[4] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2384));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_089658B4;
L_089658B4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_089658D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08965914u);
    ctx.gpr[5] = (0u | 152u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965914u) goto L_08965914;
    return;
L_08965914:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0896596C;
      }
      goto L_08965920;
    }
L_08965920:
    ctx.gpr[31] = (0x08965928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 741u, 0x0882EE90u>(ctx, &aot_mem) && ctx.pc == 0x08965928u) goto L_08965928;
    return;
L_08965928:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 152u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0896593Cu);
    ctx.gpr[5] = (0u | 152u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896593Cu) goto L_0896593C;
    return;
L_0896593C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896596C;
      }
      goto L_0896594C;
    }
L_0896594C:
    ctx.gpr[31] = (0x08965954u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 273u, 0x08811604u>(ctx, &aot_mem) && ctx.pc == 0x08965954u) goto L_08965954;
    return;
L_08965954:
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
L_0896596C:
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
L_08965984:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28928)));
    ctx.gpr[20] = (2220u << 16u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[21]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(18752));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28916)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[31]);
    ctx.gpr[31] = (0x089659E0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x089659E0u) goto L_089659E0;
    return;
L_089659E0:
    ctx.gpr[31] = (0x089659E8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 592u, 0x0897A6ECu>(ctx, &aot_mem) && ctx.pc == 0x089659E8u) goto L_089659E8;
    return;
L_089659E8:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089659F8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 720u, 0x0882ED10u>(ctx, &aot_mem) && ctx.pc == 0x089659F8u) goto L_089659F8;
    return;
L_089659F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965A80;
      }
      goto L_08965A00;
    }
L_08965A00:
    ctx.gpr[31] = (0x08965A08u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 598u, 0x0897A768u>(ctx, &aot_mem) && ctx.pc == 0x08965A08u) goto L_08965A08;
    return;
L_08965A08:
    ctx.gpr[31] = (0x08965A10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x08965A10u) goto L_08965A10;
    return;
L_08965A10:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28928)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28912)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08965A2Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08965A2Cu) goto L_08965A2C;
    return;
L_08965A2C:
    ctx.gpr[31] = (0x08965A34u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 592u, 0x0897A6ECu>(ctx, &aot_mem) && ctx.pc == 0x08965A34u) goto L_08965A34;
    return;
L_08965A34:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08965A44u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 277u, 0x08811730u>(ctx, &aot_mem) && ctx.pc == 0x08965A44u) goto L_08965A44;
    return;
L_08965A44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08965AB4;
      }
      goto L_08965A4C;
    }
L_08965A4C:
    ctx.gpr[31] = (0x08965A54u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 598u, 0x0897A768u>(ctx, &aot_mem) && ctx.pc == 0x08965A54u) goto L_08965A54;
    return;
L_08965A54:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965A80:
    ctx.gpr[31] = (0x08965A88u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 598u, 0x0897A768u>(ctx, &aot_mem) && ctx.pc == 0x08965A88u) goto L_08965A88;
    return;
L_08965A88:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965AB4:
    ctx.gpr[31] = (0x08965ABCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 598u, 0x0897A768u>(ctx, &aot_mem) && ctx.pc == 0x08965ABCu) goto L_08965ABC;
    return;
L_08965ABC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965AEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
        goto L_08965B0C;
    }
    goto L_08965B0C;
L_08965B0C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08965B38;
    }
    goto L_08965B14;
L_08965B14:
    ctx.gpr[31] = (0x08965B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 304u, 0x088118E0u>(ctx, &aot_mem) && ctx.pc == 0x08965B1Cu) goto L_08965B1C;
    return;
L_08965B1C:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08965B30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965B30u) goto L_08965B30;
    return;
L_08965B30:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08965B38;
L_08965B38:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965B60;
      }
      goto L_08965B40;
    }
L_08965B40:
    ctx.gpr[31] = (0x08965B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x08965B48u) goto L_08965B48;
    return;
L_08965B48:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08965B5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965B5Cu) goto L_08965B5C;
    return;
L_08965B5C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_08965B60;
L_08965B60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965B70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08965B80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 317u, 0x088119BCu>(ctx, &aot_mem) && ctx.pc == 0x08965B80u) goto L_08965B80;
    return;
L_08965B80:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965B8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x08965BD0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 231u, 0x089B159Cu>(ctx, &aot_mem) && ctx.pc == 0x08965BD0u) goto L_08965BD0;
    return;
L_08965BD0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08965C10;
      }
      goto L_08965BDC;
    }
L_08965BDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.gpr[31] = (0x08965BF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 286u, 0x088117E0u>(ctx, &aot_mem) && ctx.pc == 0x08965BF0u) goto L_08965BF0;
    return;
L_08965BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_08965C44;
    }
    goto L_08965C08;
L_08965C08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08965CEC;
      }
      goto L_08965C10;
    }
L_08965C10:
    ctx.gpr[2] = (0u | 0u);
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
L_08965C44:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[23] = (2220u << 16u);
    ctx.gpr[22] = (2220u << 16u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(18760));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(18768));
    goto L_08965C60;
L_08965C60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08965C7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 231u, 0x089A12ECu>(ctx, &aot_mem) && ctx.pc == 0x08965C7Cu) goto L_08965C7C;
    return;
L_08965C7C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08965CCC;
      }
      goto L_08965C84;
    }
L_08965C84:
    ctx.gpr[31] = (0x08965C8Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 233u, 0x089A1310u>(ctx, &aot_mem) && ctx.pc == 0x08965C8Cu) goto L_08965C8C;
    return;
L_08965C8C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08965C98u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 236u, 0x089A1788u>(ctx, &aot_mem) && ctx.pc == 0x08965C98u) goto L_08965C98;
    return;
L_08965C98:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08965CA8u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x08965CA8u) goto L_08965CA8;
    return;
L_08965CA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08965CB8;
      }
      goto L_08965CB0;
    }
L_08965CB0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08965CCC;
      }
      goto L_08965CB8;
    }
L_08965CB8:
    ctx.gpr[31] = (0x08965CC0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x08965CC0u) goto L_08965CC0;
    return;
L_08965CC0:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08965CD0;
    }
    goto L_08965CC8;
L_08965CC8:
    ctx.gpr[30] = (ctx.gpr[17] | 0u);
    goto L_08965CCC;
L_08965CCC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08965CD0;
L_08965CD0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08965C60;
      }
      goto L_08965CDC;
    }
L_08965CDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    goto L_08965CEC;
L_08965CEC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08965D24;
      }
      goto L_08965CF8;
    }
L_08965CF8:
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_08965CFC;
L_08965CFC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08965CFC;
      }
      goto L_08965D24;
    }
L_08965D24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[31] = (0x08965D3Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    goto L_08965E34;
L_08965D3C:
    ctx.gpr[2] = (0u | 1u);
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
L_08965D70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08965D94u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 65u, 0x089C0634u>(ctx, &aot_mem) && ctx.pc == 0x08965D94u) goto L_08965D94;
    return;
L_08965D94:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965DA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08965E14;
      }
      goto L_08965DD8;
    }
L_08965DD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08965DF0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 70u, 0x089C06C4u>(ctx, &aot_mem) && ctx.pc == 0x08965DF0u) goto L_08965DF0;
    return;
L_08965DF0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08965E08;
    }
    goto L_08965DFC;
L_08965DFC:
    ctx.gpr[31] = (0x08965E04u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 68u, 0x089C0680u>(ctx, &aot_mem) && ctx.pc == 0x08965E04u) goto L_08965E04;
    return;
L_08965E04:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08965E08;
L_08965E08:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08965DD8;
      }
      goto L_08965E14;
    }
L_08965E14:
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
L_08965E34:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965E4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
    ctx.gpr[4] = (0u | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08965F34u);
    ctx.gpr[5] = (0u | 152u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965F34u) goto L_08965F34;
    return;
L_08965F34:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x08965F48u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089658D0;
L_08965F48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08965F6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089661A0;
L_08965F6C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08965F84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089661E4;
L_08965F84:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x08965F9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08966228;
L_08965F9C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08965FBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08965FD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08965B8C;
L_08965FD4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08966028;
      }
      goto L_08965FEC;
    }
L_08965FEC:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (2198u << 16u);
    ctx.gpr[6] = (2203u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(22556));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2384));
    goto L_08966000;
L_08966000:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(72), ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(72)));
    if (ctx.gpr[10] == 0u) {
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
        goto L_08966018;
    }
    goto L_08966018;
L_08966018:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08966000;
      }
      goto L_08966028;
    }
L_08966028:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896603C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966078;
      }
      goto L_08966058;
    }
L_08966058:
    ctx.gpr[31] = (0x08966060u);
    // nop
    goto L_08965AEC;
L_08966060:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08966074u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08966074u) goto L_08966074;
    return;
L_08966074:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08966078;
L_08966078:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966088:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[9];
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_089660B8;
      }
      goto L_089660AC;
    }
L_089660AC:
    ctx.gpr[8] = (0u | 1u);
    if (ctx.gpr[6] != ctx.gpr[8]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_089660C0;
    }
    goto L_089660B8;
L_089660B8:
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089660C0;
L_089660C0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x089660D0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08965D70;
L_089660D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089660DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089660ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08965DA0;
L_089660EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089661A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089661D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 362u, 0x08811D04u>(ctx, &aot_mem) && ctx.pc == 0x089661D8u) goto L_089661D8;
    return;
L_089661D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089661E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896621Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 363u, 0x08811D30u>(ctx, &aot_mem) && ctx.pc == 0x0896621Cu) goto L_0896621C;
    return;
L_0896621C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966228:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08966260u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 364u, 0x08811D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08966260u) goto L_08966260;
    return;
L_08966260:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966274:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089662A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089662C0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 368u, 0x08811DC4u>(ctx, &aot_mem) && ctx.pc == 0x089662C0u) goto L_089662C0;
    return;
L_089662C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089662CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x08966384u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 478u, 0x08812DF0u>(ctx, &aot_mem) && ctx.pc == 0x08966384u) goto L_08966384;
    return;
L_08966384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08966398u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 225u, 0x089D9648u>(ctx, &aot_mem) && ctx.pc == 0x08966398u) goto L_08966398;
    return;
L_08966398:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089663AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089663D4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 300u, 0x0880F008u>(ctx, &aot_mem) && ctx.pc == 0x089663D4u) goto L_089663D4;
    return;
L_089663D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089663E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    ctx.gpr[31] = (0x08966410u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 70u, 0x089C06C4u>(ctx, &aot_mem) && ctx.pc == 0x08966410u) goto L_08966410;
    return;
L_08966410:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08966440;
    }
    goto L_0896641C;
L_0896641C:
    ctx.gpr[31] = (0x08966424u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089660DC;
L_08966424:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08966430u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08966088;
L_08966430:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0896644C;
      }
      goto L_08966440;
    }
L_08966440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_0896644C;
L_0896644C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0896645Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 377u, 0x08811E6Cu>(ctx, &aot_mem) && ctx.pc == 0x0896645Cu) goto L_0896645C;
    return;
L_0896645C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08966468u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08966274;
L_08966468:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.gpr[31] = (0x089664ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08966718;
L_089664AC:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_089664CC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089664D4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089664DC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089664E4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896654C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08966704;
      }
      goto L_08966568;
    }
L_08966568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966704;
      }
      goto L_08966574;
    }
L_08966574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08966704;
      }
      goto L_08966588;
    }
L_08966588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089665B4;
      }
      goto L_08966594;
    }
L_08966594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08966704;
      }
      goto L_089665A4;
    }
L_089665A4:
    ctx.gpr[31] = (0x089665ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089660DC;
L_089665AC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
      if (branch_taken) {
          goto L_08966704;
      }
      goto L_089665B4;
    }
L_089665B4:
    ctx.gpr[31] = (0x089665BCu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 860u, 0x0881F498u>(ctx, &aot_mem) && ctx.pc == 0x089665BCu) goto L_089665BC;
    return;
L_089665BC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
        goto L_089665FC;
    }
    goto L_089665C4;
L_089665C4:
    ctx.gpr[31] = (0x089665CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 61u, 0x08824354u>(ctx, &aot_mem) && ctx.pc == 0x089665CCu) goto L_089665CC;
    return;
L_089665CC:
    ctx.gpr[4] = (0u | 5u);
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
        goto L_089665FC;
    }
    goto L_089665D8;
L_089665D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08966704;
      }
      goto L_089665E4;
    }
L_089665E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    ctx.gpr[31] = (0x089665F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08966088;
L_089665F0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08966704;
      }
      goto L_089665FC;
    }
L_089665FC:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08966618;
      }
      goto L_0896660C;
    }
L_0896660C:
    ctx.gpr[8] = (0u | 1u);
    if (ctx.gpr[6] != ctx.gpr[8]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
        goto L_08966620;
    }
    goto L_08966618;
L_08966618:
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_08966620;
L_08966620:
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966704;
      }
      goto L_08966634;
    }
L_08966634:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08966688;
      }
      goto L_08966644;
    }
L_08966644:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_0896666C;
      }
      goto L_08966654;
    }
L_08966654:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08966704;
      }
      goto L_0896665C;
    }
L_0896665C:
    ctx.gpr[31] = (0x08966664u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089660DC;
L_08966664:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
      if (branch_taken) {
          goto L_08966704;
      }
      goto L_0896666C;
    }
L_0896666C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08966704;
      }
      goto L_08966674;
    }
L_08966674:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    ctx.gpr[31] = (0x08966680u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08966088;
L_08966680:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08966704;
      }
      goto L_08966688;
    }
L_08966688:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089666B4;
      }
      goto L_08966690;
    }
L_08966690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08966704;
      }
      goto L_0896669C;
    }
L_0896669C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    ctx.gpr[31] = (0x089666A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08966088;
L_089666A8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08966704;
      }
      goto L_089666B4;
    }
L_089666B4:
    ctx.gpr[31] = (0x089666BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 486u, 0x0893F2B8u>(ctx, &aot_mem) && ctx.pc == 0x089666BCu) goto L_089666BC;
    return;
L_089666BC:
    ctx.gpr[4] = (ctx.gpr[2] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_089666EC;
      }
      goto L_089666CC;
    }
L_089666CC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08966704;
      }
      goto L_089666D4;
    }
L_089666D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    ctx.gpr[31] = (0x089666E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08966088;
L_089666E0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08966704;
      }
      goto L_089666EC;
    }
L_089666EC:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08966704;
      }
      goto L_089666F8;
    }
L_089666F8:
    ctx.gpr[31] = (0x08966700u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089660DC;
L_08966700:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    goto L_08966704;
L_08966704:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966718:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896674Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18776));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0896674Cu) goto L_0896674C;
    return;
L_0896674C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966798;
      }
      goto L_08966754;
    }
L_08966754:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08966798u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 149u, 0x08950D9Cu>(ctx, &aot_mem) && ctx.pc == 0x08966798u) goto L_08966798;
    return;
L_08966798:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089667B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[20] = (2220u << 16u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[21]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(18784));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28916)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896680Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0896680Cu) goto L_0896680C;
    return;
L_0896680C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08966818u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x08966818u) goto L_08966818;
    return;
L_08966818:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896682Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x0896682Cu) goto L_0896682C;
    return;
L_0896682C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08966838u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 881u, 0x0882F7DCu>(ctx, &aot_mem) && ctx.pc == 0x08966838u) goto L_08966838;
    return;
L_08966838:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089668BC;
      }
      goto L_08966840;
    }
L_08966840:
    ctx.gpr[31] = (0x08966848u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x08966848u) goto L_08966848;
    return;
L_08966848:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28912)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08966860u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08966860u) goto L_08966860;
    return;
L_08966860:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896686Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x0896686Cu) goto L_0896686C;
    return;
L_0896686C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896687Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x0896687Cu) goto L_0896687C;
    return;
L_0896687C:
    ctx.gpr[31] = (0x08966884u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 411u, 0x08812510u>(ctx, &aot_mem) && ctx.pc == 0x08966884u) goto L_08966884;
    return;
L_08966884:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089668BC;
      }
      goto L_0896688C;
    }
L_0896688C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089668BC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089668E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-672));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089670A0;
      }
      goto L_08966924;
    }
L_08966924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089670A0;
      }
      goto L_08966934;
    }
L_08966934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08966970;
      }
      goto L_08966944;
    }
L_08966944:
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
        goto L_08966984;
    }
    goto L_08966950;
L_08966950:
    ctx.gpr[31] = (0x08966958u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089663E0;
L_08966958:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08966964u);
    ctx.gpr[5] = (0u | 2u);
    goto L_089664DC;
L_08966964:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_08966984;
      }
      goto L_0896696C;
    }
L_0896696C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    goto L_08966970;
L_08966970:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089670A0;
      }
      goto L_08966978;
    }
L_08966978:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966994;
      }
      goto L_08966980;
    }
L_08966980:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    goto L_08966984;
L_08966984:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089669DC;
      }
      goto L_0896698C;
    }
L_0896698C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_08966A70;
      }
      goto L_08966994;
    }
L_08966994:
    ctx.gpr[31] = (0x0896699Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089660DC;
L_0896699C:
    ctx.gpr[31] = (0x089669A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896603C;
L_089669A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089669B0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08965E4C;
L_089669B0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089669DC:
    ctx.gpr[31] = (0x089669E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089664D4;
L_089669E4:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08966A6C;
      }
      goto L_089669EC;
    }
L_089669EC:
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
        goto L_08966A68;
    }
    goto L_089669F8;
L_089669F8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(18792)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08966A10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08966A24u);
    ctx.gpr[6] = (0u | 1u);
    goto L_089662A0;
L_08966A24:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08966A68;
      }
      goto L_08966A2C;
    }
L_08966A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28932));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
        goto L_08966A68;
    }
    goto L_08966A50;
L_08966A50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08966A64u);
    ctx.gpr[6] = (0u | 0u);
    goto L_089662A0;
L_08966A64:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    goto L_08966A68;
L_08966A68:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    goto L_08966A6C;
L_08966A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    goto L_08966A70;
L_08966A70:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08967090;
    }
    goto L_08966A80;
L_08966A80:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0896708C;
      }
      goto L_08966A8C;
    }
L_08966A8C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08966C9C;
      }
      goto L_08966A94;
    }
L_08966A94:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08966E94;
      }
      goto L_08966A9C;
    }
L_08966A9C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08966B30;
      }
      goto L_08966AA4;
    }
L_08966AA4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08966C20;
      }
      goto L_08966AAC;
    }
L_08966AAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08966AC4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089663AC;
L_08966AC4:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[0] / ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
        goto L_08966B10;
    }
    goto L_08966AE0;
L_08966AE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08966AF8u);
    ctx.gpr[6] = (0u | 0u);
    goto L_089662A0;
L_08966AF8:
    ctx.gpr[4] = (12843u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52343u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08966B1C;
      }
      goto L_08966B10;
    }
L_08966B10:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08966B1C;
L_08966B1C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08966B28u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08965B70;
L_08966B28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967098;
      }
      goto L_08966B30;
    }
L_08966B30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08966B48u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089663AC;
L_08966B48:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[0] / ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08966C08;
      }
      goto L_08966B68;
    }
L_08966B68:
    ctx.gpr[31] = (0x08966B70u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    goto L_08965B70;
L_08966B70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08966B80u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 377u, 0x08811E6Cu>(ctx, &aot_mem) && ctx.pc == 0x08966B80u) goto L_08966B80;
    return;
L_08966B80:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08966B90u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089661A0;
L_08966B90:
    ctx.gpr[31] = (0x08966B98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089662CC;
L_08966B98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08966BB0u);
    ctx.gpr[6] = (0u | 0u);
    goto L_089662A0;
L_08966BB0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08966BF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 406u, 0x08A467F0u>(ctx, &aot_mem) && ctx.pc == 0x08966BF0u) goto L_08966BF0;
    return;
L_08966BF0:
    ctx.gpr[4] = (13270u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49045u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08966C10;
      }
      goto L_08966C08;
    }
L_08966C08:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08966C10;
L_08966C10:
    ctx.gpr[31] = (0x08966C18u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08965B70;
L_08966C18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967098;
      }
      goto L_08966C20;
    }
L_08966C20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08966C38u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089663AC;
L_08966C38:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[0] / ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
        goto L_08966C80;
    }
    goto L_08966C54;
L_08966C54:
    ctx.gpr[31] = (0x08966C5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089663E0;
L_08966C5C:
    ctx.gpr[31] = (0x08966C64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089660DC;
L_08966C64:
    ctx.gpr[31] = (0x08966C6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0896603C;
L_08966C6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08966C78u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08965E4C;
L_08966C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967098;
      }
      goto L_08966C80;
    }
L_08966C80:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.gpr[31] = (0x08966C94u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08965B70;
L_08966C94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967098;
      }
      goto L_08966C9C;
    }
L_08966C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08966D44;
      }
      goto L_08966CE8;
    }
L_08966CE8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(76));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08966D98;
      }
      goto L_08966D44;
    }
L_08966D44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    goto L_08966D98;
L_08966D98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.gpr[31] = (0x08966E30u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 478u, 0x08812DF0u>(ctx, &aot_mem) && ctx.pc == 0x08966E30u) goto L_08966E30;
    return;
L_08966E30:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08966E44u);
    ctx.gpr[6] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 100u, 0x0893CA60u>(ctx, &aot_mem) && ctx.pc == 0x08966E44u) goto L_08966E44;
    return;
L_08966E44:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08966E58u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 518u, 0x089CEE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08966E58u) goto L_08966E58;
    return;
L_08966E58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08966E68u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 225u, 0x089D9648u>(ctx, &aot_mem) && ctx.pc == 0x08966E68u) goto L_08966E68;
    return;
L_08966E68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08966E74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 507u, 0x089AB834u>(ctx, &aot_mem) && ctx.pc == 0x08966E74u) goto L_08966E74;
    return;
L_08966E74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08966E8Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    goto L_089661A0;
L_08966E8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967098;
      }
      goto L_08966E94;
    }
L_08966E94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_08966F3C;
      }
      goto L_08966EE0;
    }
L_08966EE0:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(124));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08966F90;
      }
      goto L_08966F3C;
    }
L_08966F3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    goto L_08966F90;
L_08966F90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(396));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(408));
    ctx.gpr[31] = (0x08967028u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 478u, 0x08812DF0u>(ctx, &aot_mem) && ctx.pc == 0x08967028u) goto L_08967028;
    return;
L_08967028:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0896703Cu);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 487u, 0x0893F440u>(ctx, &aot_mem) && ctx.pc == 0x0896703Cu) goto L_0896703C;
    return;
L_0896703C:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08967050u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 518u, 0x089CEE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08967050u) goto L_08967050;
    return;
L_08967050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08967060u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 225u, 0x089D9648u>(ctx, &aot_mem) && ctx.pc == 0x08967060u) goto L_08967060;
    return;
L_08967060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0896706Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 507u, 0x089AB834u>(ctx, &aot_mem) && ctx.pc == 0x0896706Cu) goto L_0896706C;
    return;
L_0896706C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08967084u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    goto L_089661A0;
L_08967084:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967098;
      }
      goto L_0896708C;
    }
L_0896708C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08967090;
L_08967090:
    ctx.gpr[31] = (0x08967098u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08965B70;
L_08967098:
    ctx.gpr[31] = (0x089670A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0896654C;
L_089670A0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089670CC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28920)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28924), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967108:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08967124u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08967124u) goto L_08967124;
    return;
L_08967124:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08967130u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08967130u) goto L_08967130;
    return;
L_08967130:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(88));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(88));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967234:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(29188));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_08967258;
L_08967258:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08967264u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08967264u) goto L_08967264;
    return;
L_08967264:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967298;
      }
      goto L_0896726C;
    }
L_0896726C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 55 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08967258;
      }
      goto L_0896727C;
    }
L_0896727C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
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
L_08967298:
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
L_089672B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089672E4;
      }
      goto L_089672C0;
    }
L_089672C0:
    ctx.gpr[5] = (0u | 0u);
    goto L_089672C4;
L_089672C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089672EC;
      }
      goto L_089672D4;
    }
L_089672D4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(192));
      if (branch_taken) {
          goto L_089672C4;
      }
      goto L_089672E4;
    }
L_089672E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089672EC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089672F4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967334;
      }
      goto L_08967300;
    }
L_08967300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08967334;
      }
      goto L_08967314;
    }
L_08967314:
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    goto L_08967318;
L_08967318:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896733C;
      }
      goto L_08967324;
    }
L_08967324:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(20));
    ctx.gpr[10] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08967318;
      }
      goto L_08967334;
    }
L_08967334:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896733C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[7] + ctx.gpr[9]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967344:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08967360u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19156));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08967360u) goto L_08967360;
    return;
L_08967360:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_08967458;
      }
      goto L_08967368;
    }
L_08967368:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08967374u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19172));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08967374u) goto L_08967374;
    return;
L_08967374:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_08967444;
      }
      goto L_0896737C;
    }
L_0896737C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08967388u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19188));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08967388u) goto L_08967388;
    return;
L_08967388:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_08967430;
      }
      goto L_08967390;
    }
L_08967390:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896739Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19204));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0896739Cu) goto L_0896739C;
    return;
L_0896739C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_0896741C;
      }
      goto L_089673A4;
    }
L_089673A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089673B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19220));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089673B0u) goto L_089673B0;
    return;
L_089673B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_08967408;
      }
      goto L_089673B8;
    }
L_089673B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089673C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19236));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089673C4u) goto L_089673C4;
    return;
L_089673C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_089673F4;
      }
      goto L_089673CC;
    }
L_089673CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089673D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19252));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089673D8u) goto L_089673D8;
    return;
L_089673D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896746C;
      }
      goto L_089673E0;
    }
L_089673E0:
    ctx.gpr[2] = (0u | 38u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089673F4:
    ctx.gpr[2] = (0u | 37u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967408:
    ctx.gpr[2] = (0u | 36u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896741C:
    ctx.gpr[2] = (0u | 35u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967430:
    ctx.gpr[2] = (0u | 34u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967444:
    ctx.gpr[2] = (0u | 33u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967458:
    ctx.gpr[2] = (0u | 32u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896746C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967480:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[21]);
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29408)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089675B8;
      }
      goto L_089674BC;
    }
L_089674BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08967530;
      }
      goto L_089674D4;
    }
L_089674D4:
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (0u | 0u);
    goto L_089674DC;
L_089674DC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0896751C;
      }
      goto L_089674F0;
    }
L_089674F0:
    ctx.gpr[31] = (0x089674F8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x089674F8u) goto L_089674F8;
    return;
L_089674F8:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
        goto L_08967520;
    }
    goto L_08967500;
L_08967500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08967530;
      }
      goto L_0896751C;
    }
L_0896751C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    goto L_08967520;
L_08967520:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_089674DC;
      }
      goto L_08967530;
    }
L_08967530:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089675B8;
      }
      goto L_08967538;
    }
L_08967538:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x0896755Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 15u, 0x08968180u>(ctx, &aot_mem) && ctx.pc == 0x0896755Cu) goto L_0896755C;
    return;
L_0896755C:
    ctx.gpr[31] = (0x08967564u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_089662CC;
L_08967564:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08967570u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089664CC;
L_08967570:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x089675B0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 406u, 0x08A467F0u>(ctx, &aot_mem) && ctx.pc == 0x089675B0u) goto L_089675B0;
    return;
L_089675B0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    goto L_089675B8;
L_089675B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089675E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29408)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089676DC;
      }
      goto L_08967620;
    }
L_08967620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[21] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08967694;
      }
      goto L_08967638;
    }
L_08967638:
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (0u | 0u);
    goto L_08967640;
L_08967640:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08967680;
      }
      goto L_08967654;
    }
L_08967654:
    ctx.gpr[31] = (0x0896765Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0896765Cu) goto L_0896765C;
    return;
L_0896765C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
        goto L_08967684;
    }
    goto L_08967664;
L_08967664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08967694;
      }
      goto L_08967680;
    }
L_08967680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    goto L_08967684;
L_08967684:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[21] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08967640;
      }
      goto L_08967694;
    }
L_08967694:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089676DC;
      }
      goto L_0896769C;
    }
L_0896769C:
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089676CC;
      }
      goto L_089676A8;
    }
L_089676A8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089676B8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089662A0;
L_089676B8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089676C4u);
    ctx.gpr[5] = (0u | 6u);
    goto L_089664CC;
L_089676C4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
      if (branch_taken) {
          goto L_089676DC;
      }
      goto L_089676CC;
    }
L_089676CC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089676D8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089664CC;
L_089676D8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    goto L_089676DC;
L_089676DC:
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
L_08967708:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29408)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08967808;
      }
      goto L_08967744;
    }
L_08967744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[21] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089677B8;
      }
      goto L_0896775C;
    }
L_0896775C:
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (0u | 0u);
    goto L_08967764;
L_08967764:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089677A4;
      }
      goto L_08967778;
    }
L_08967778:
    ctx.gpr[31] = (0x08967780u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08967780u) goto L_08967780;
    return;
L_08967780:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
        goto L_089677A8;
    }
    goto L_08967788;
L_08967788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089677B8;
      }
      goto L_089677A4;
    }
L_089677A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    goto L_089677A8;
L_089677A8:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[21] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08967764;
      }
      goto L_089677B8;
    }
L_089677B8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08967808;
      }
      goto L_089677C0;
    }
L_089677C0:
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089677F0;
      }
      goto L_089677CC;
    }
L_089677CC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089677DCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089662A0;
L_089677DC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089677E8u);
    ctx.gpr[5] = (0u | 7u);
    goto L_089664CC;
L_089677E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08967808;
      }
      goto L_089677F0;
    }
L_089677F0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089677FCu);
    ctx.gpr[5] = (0u | 0u);
    goto L_089664CC;
L_089677FC:
    ctx.gpr[31] = (0x08967804u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    goto L_08967F38;
L_08967804:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    goto L_08967808;
L_08967808:
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
L_08967834:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29408)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089678C4;
      }
      goto L_08967864;
    }
L_08967864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089678C4;
      }
      goto L_08967878;
    }
L_08967878:
    ctx.gpr[21] = (0u | 0u);
    goto L_0896787C;
L_0896787C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089678B0;
      }
      goto L_08967890;
    }
L_08967890:
    ctx.gpr[31] = (0x08967898u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08967898u) goto L_08967898;
    return;
L_08967898:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
        goto L_089678B4;
    }
    goto L_089678A0;
L_089678A0:
    ctx.gpr[31] = (0x089678A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    goto L_08967F9C;
L_089678A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
      if (branch_taken) {
          goto L_089678C4;
      }
      goto L_089678B0;
    }
L_089678B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    goto L_089678B4;
L_089678B4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_0896787C;
      }
      goto L_089678C4;
    }
L_089678C4:
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
L_089678E8:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29408)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896794C;
      }
      goto L_089678F8;
    }
L_089678F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0896794C;
      }
      goto L_0896790C;
    }
L_0896790C:
    ctx.gpr[8] = (0u | 0u);
    goto L_08967910;
L_08967910:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    ctx.gpr[7] = (ctx.gpr[7] << 6u);
      if (branch_taken) {
          goto L_08967938;
      }
      goto L_08967924;
    }
L_08967924:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(92), 0u);
    goto L_08967938;
L_08967938:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08967910;
      }
      goto L_0896794C;
    }
L_0896794C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967954:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29408)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] << 6u);
      if (branch_taken) {
          goto L_0896799C;
      }
      goto L_08967964;
    }
L_08967964:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
      if (branch_taken) {
          goto L_0896799C;
      }
      goto L_08967984;
    }
L_08967984:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[6]);
    goto L_0896799C;
L_0896799C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089679A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(29408)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08967A14;
      }
      goto L_089679D8;
    }
L_089679D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967A14;
      }
      goto L_089679E4;
    }
L_089679E4:
    ctx.gpr[31] = (0x089679ECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089672B4;
L_089679EC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[20];
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08967A14;
      }
      goto L_089679F8;
    }
L_089679F8:
    ctx.gpr[31] = (0x08967A00u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089672F4;
L_08967A00:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967A38;
      }
      goto L_08967A0C;
    }
L_08967A0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
      if (branch_taken) {
          goto L_08967A60;
      }
      goto L_08967A14;
    }
L_08967A14:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_08967A38:
    ctx.gpr[31] = (0x08967A40u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 74u, 0x0896C71Cu>(ctx, &aot_mem) && ctx.pc == 0x08967A40u) goto L_08967A40;
    return;
L_08967A40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
    goto L_08967A60;
L_08967A60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[20] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08967A7Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08965FBC;
L_08967A7C:
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08967A98u);
    ctx.gpr[5] = (0u | 4u);
    goto L_089664CC;
L_08967A98:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08967AA4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089664DC;
L_08967AA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08967AB8u);
    ctx.gpr[6] = (0u | 0u);
    goto L_089662A0;
L_08967AB8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    ctx.gpr[31] = (0x08967AC8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08966088;
L_08967AC8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08967AF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29408)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08967B40;
      }
      goto L_08967B28;
    }
L_08967B28:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08967B68;
      }
      goto L_08967B30;
    }
L_08967B30:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08967BF8;
      }
      goto L_08967B38;
    }
L_08967B38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967B84;
      }
      goto L_08967B40;
    }
L_08967B40:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_08967B68:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08967BF0;
      }
      goto L_08967B74;
    }
L_08967B74:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
        goto L_08967BF8;
    }
    goto L_08967B7C;
L_08967B7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967BF8;
      }
      goto L_08967B84;
    }
L_08967B84:
    ctx.gpr[31] = (0x08967B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 74u, 0x0896C71Cu>(ctx, &aot_mem) && ctx.pc == 0x08967B8Cu) goto L_08967B8C;
    return;
L_08967B8C:
    ctx.gpr[4] = (0u | 100u);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08967BF8;
      }
      goto L_08967BAC;
    }
L_08967BAC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.gpr[8] = (0u | 0u);
    goto L_08967BB4;
L_08967BB4:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[10]);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08967BD8;
      }
      goto L_08967BC8;
    }
L_08967BC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08967BF8;
      }
      goto L_08967BD8;
    }
L_08967BD8:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08967BB4;
      }
      goto L_08967BE8;
    }
L_08967BE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967BF8;
      }
      goto L_08967BF0;
    }
L_08967BF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08967BF8;
      }
      goto L_08967BF8;
    }
L_08967BF8:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08967C20;
      }
      goto L_08967C00;
    }
L_08967C00:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08967C0Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_089679A4;
L_08967C0C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[16] != ctx.gpr[20]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29408)));
        goto L_08967C48;
    }
    goto L_08967C18;
L_08967C18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967C6C;
      }
      goto L_08967C20;
    }
L_08967C20:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_08967C48:
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[31] = (0x08967C6Cu);
    ctx.gpr[5] = (0u | 5u);
    goto L_089664CC;
L_08967C6C:
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
L_08967C94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(29408)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08967D08;
      }
      goto L_08967CCC;
    }
L_08967CCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967D08;
      }
      goto L_08967CD8;
    }
L_08967CD8:
    ctx.gpr[31] = (0x08967CE0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_089672B4;
L_08967CE0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08967D08;
      }
      goto L_08967CEC;
    }
L_08967CEC:
    ctx.gpr[31] = (0x08967CF4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089672F4;
L_08967CF4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967D30;
      }
      goto L_08967D00;
    }
L_08967D00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
      if (branch_taken) {
          goto L_08967D58;
      }
      goto L_08967D08;
    }
L_08967D08:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_08967D30:
    ctx.gpr[31] = (0x08967D38u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 74u, 0x0896C71Cu>(ctx, &aot_mem) && ctx.pc == 0x08967D38u) goto L_08967D38;
    return;
L_08967D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
    goto L_08967D58;
L_08967D58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[21] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08967D74u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08965FBC;
L_08967D74:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(116), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08967D8Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_089664CC;
L_08967D8C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08967D98u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089664DC;
L_08967D98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08967DACu);
    ctx.gpr[6] = (0u | 0u);
    goto L_089662A0;
L_08967DAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08967DD0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_089661A0;
L_08967DD0:
    ctx.gpr[31] = (0x08967DD8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_089662CC;
L_08967DD8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    ctx.gpr[31] = (0x08967DE8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08966088;
L_08967DE8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08967E18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(29408)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08967E7C;
      }
      goto L_08967E38;
    }
L_08967E38:
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08967E7C;
      }
      goto L_08967E5C;
    }
L_08967E5C:
    ctx.gpr[31] = (0x08967E64u);
    ctx.gpr[5] = (0u | 4u);
    goto L_089664CC;
L_08967E64:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08967E70u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089664DC;
L_08967E70:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    goto L_08967E7C;
L_08967E7C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967E90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(29408)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08967F20;
      }
      goto L_08967EB4;
    }
L_08967EB4:
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08967F20;
      }
      goto L_08967ED8;
    }
L_08967ED8:
    ctx.gpr[31] = (0x08967EE0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089664CC;
L_08967EE0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08967EECu);
    ctx.gpr[5] = (0u | 0u);
    goto L_089664DC;
L_08967EEC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08967F18u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089661A0;
L_08967F18:
    ctx.gpr[31] = (0x08967F20u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089662CC;
L_08967F20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967F38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29408)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
      if (branch_taken) {
          goto L_08967F90;
      }
      goto L_08967F50;
    }
L_08967F50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08967F90;
      }
      goto L_08967F70;
    }
L_08967F70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_08967F90;
      }
      goto L_08967F80;
    }
L_08967F80:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08967F90;
      }
      goto L_08967F88;
    }
L_08967F88:
    ctx.gpr[31] = (0x08967F90u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089664DC;
L_08967F90:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08967F9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29408)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08967FF8;
      }
      goto L_08967FB8;
    }
L_08967FB8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
      if (branch_taken) {
          goto L_08967FF8;
      }
      goto L_08967FC0;
    }
L_08967FC0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08967FF8;
      }
      goto L_08967FDC;
    }
L_08967FDC:
    ctx.gpr[31] = (0x08967FE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089664E4;
L_08967FE4:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08967FF8;
      }
      goto L_08967FF0;
    }
L_08967FF0:
    ctx.gpr[31] = (0x08967FF8u);
    ctx.gpr[5] = (0u | 4u);
    goto L_089664DC;
L_08967FF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.pc = 0x08968000u; return;
}

void recomp_unit_0088(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0088_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_88(Runtime &runtime) {
    runtime.register_generated_unit(88u, 0x08964000u, 16384u, &recomp_unit_0088, &recomp_unit_0088_entry);
    runtime.register_function(0x08964000u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964014u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964030u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964048u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896406Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964074u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964078u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964098u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089640D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896410Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964148u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964150u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964158u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896415Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964170u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964178u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964188u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089641B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089641D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089641E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964200u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964210u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964220u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964230u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964240u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964248u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964250u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964280u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089642A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089642B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089642BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089642D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089642F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089642FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896432Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964330u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964334u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964350u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896436Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896437Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964384u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089643ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089643B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089643C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089643C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089643DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089643E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089643F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089643F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964404u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896441Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964424u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896442Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964438u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896443Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964448u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964478u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089644B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089644BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089644C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089644D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089644D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089644E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089644E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089644F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089644F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964500u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964518u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964530u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964538u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896454Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964554u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964560u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964568u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964574u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964590u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964604u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896460Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964610u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964618u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964624u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896462Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964638u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964640u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896464Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964654u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964664u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964670u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896467Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964698u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089646B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089646C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089646D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089646E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089646E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964740u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964748u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896474Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896475Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964774u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896479Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089647E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896483Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964848u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964860u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896486Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964874u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896489Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089648BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089648C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089648D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089648F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964918u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964924u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896492Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964954u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964974u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964980u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964988u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089649B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089649D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089649DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089649E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A2Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A68u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A88u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A94u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964AC4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964AE4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964AF0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964AF8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B20u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B7Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B98u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964BA8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964BB8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964BC0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964BE8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C7Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C84u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964CBCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964CC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D24u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D34u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D60u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D68u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D74u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D7Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D88u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D90u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964DA4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964DB0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964DBCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964DC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964DF0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964DFCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E24u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E3Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E44u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E50u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E58u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E6Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E74u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E7Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E84u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E90u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964EA4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964EACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964EB4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964EBCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964EC4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964ED0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964EDCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964EE4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964EECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964EF4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964EFCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F08u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F1Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F24u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F30u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F3Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F44u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F68u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F84u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F8Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F94u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964FA4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964FC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964FD0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964FFCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965004u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896500Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965020u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965028u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965034u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965040u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965048u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965058u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965070u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965078u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965084u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896508Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965094u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965104u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896510Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965114u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896511Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965124u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896512Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965134u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896513Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965144u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896514Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965158u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965160u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965168u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965170u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965178u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965180u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965188u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965190u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965198u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089651FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965214u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896521Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965224u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896522Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965234u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896523Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965244u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965250u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896525Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965264u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896526Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965274u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896527Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965284u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896528Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965294u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896529Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965300u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965308u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965310u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965318u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965328u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965330u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965340u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965348u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965350u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965360u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965368u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965370u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965378u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965380u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965388u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965390u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965398u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089653F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965408u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965410u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965418u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965420u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896542Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965438u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965440u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965448u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965450u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965458u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965460u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965470u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896547Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965484u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896548Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965494u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896549Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965504u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896550Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965514u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896551Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965524u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896552Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965540u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965548u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965550u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965558u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965560u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965568u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965570u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965580u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965590u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965598u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965604u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965638u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965650u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965658u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965660u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965668u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965670u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965678u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965680u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965688u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965690u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965698u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896569Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089656A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089656B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089656BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089656C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089656E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089656E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089656F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089656FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965704u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896570Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965714u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896571Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965724u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896572Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965738u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965740u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896574Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965754u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896575Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965764u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896576Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965774u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896577Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965784u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896578Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965794u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896579Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089657A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089657ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089657B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089657BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089657C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089657CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089657D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089657DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089657E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089657ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965808u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896581Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965854u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965868u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965870u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896587Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965888u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089658A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089658A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089658B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089658D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965914u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965920u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965928u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896593Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896594Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965954u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896596Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965984u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089659E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089659E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089659F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A08u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A2Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A34u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A44u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A88u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AB4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965ABCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B1Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B30u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B48u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B5Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B60u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B70u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B8Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965BD0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965BDCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965BF0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C08u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C44u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C60u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C7Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C84u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C8Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C98u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CA8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CB0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CB8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CC0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CCCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CD0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CDCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CF8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CFCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D24u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D3Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D70u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D94u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965DA0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965DD8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965DF0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965DFCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E08u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E34u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F34u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F48u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F6Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F84u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965FBCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965FD4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965FECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966000u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966018u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966028u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896603Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966058u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966060u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966074u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966078u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966088u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089660ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089660B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089660C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089660D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089660DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089660ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089661A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089661D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089661E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896621Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966228u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966260u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966274u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966384u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966398u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089663ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089663D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089663E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966410u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896641Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966424u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966430u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966440u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896644Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896645Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966468u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896654Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966568u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966574u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966588u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966594u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896660Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966618u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966620u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966634u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966644u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966654u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896665Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966664u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896666Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966674u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966680u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966688u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966690u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896669Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966700u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966704u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966718u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896674Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966754u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966798u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089667B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896680Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966818u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896682Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966838u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966840u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966848u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966860u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896686Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896687Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966884u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896688Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089668BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089668E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966924u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966934u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966944u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966950u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966958u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966964u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896696Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966970u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966978u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966980u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966984u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896698Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966994u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896699Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A24u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A2Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A50u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A68u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A6Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A70u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A8Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A94u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966AA4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966AACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966AC4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966AE0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966AF8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B1Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B28u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B30u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B48u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B68u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B70u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B90u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B98u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966BB0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966BF0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C08u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C18u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C20u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C5Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C6Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C78u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C94u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966CE8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D44u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D98u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E30u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E44u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E58u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E68u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E74u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E8Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E94u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966EE0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F3Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F90u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967028u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896703Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967050u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967060u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896706Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967084u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896708Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967090u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967098u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089670A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089670CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967108u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967124u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967130u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967234u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967258u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967264u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896726Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896727Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967298u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089672B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089672C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089672C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089672D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089672E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089672ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089672F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967300u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967314u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967318u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967324u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967334u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896733Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967344u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967360u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967368u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967374u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896737Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967388u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967390u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896739Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089673A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089673B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089673B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089673C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089673CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089673D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089673E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089673F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967408u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896741Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967430u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967444u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967458u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896746Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967480u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089674BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089674D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089674DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089674F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089674F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967500u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896751Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967520u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967530u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967538u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896755Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967564u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967570u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089675B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089675B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089675E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967620u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967638u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967640u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967654u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896765Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967664u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967680u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967684u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967694u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896769Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089676A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089676B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089676C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089676CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089676D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089676DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967708u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967744u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896775Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967764u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967778u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967780u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967788u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967804u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967808u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967834u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967864u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967878u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896787Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967890u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967898u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089678A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089678A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089678B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089678B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089678C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089678E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089678F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896790Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967910u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967924u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967938u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896794Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967954u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967964u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967984u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896799Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089679A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089679D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089679E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089679ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089679F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A60u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A7Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A98u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967AA4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967AB8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967AC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967AF0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B28u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B30u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B68u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B74u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B7Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B84u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B8Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967BACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967BB4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967BC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967BD8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967BE8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967BF0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967BF8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C18u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C20u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C48u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C6Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C94u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967CCCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967CD8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967CE0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967CECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967CF4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D08u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D30u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D58u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D74u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D8Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D98u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DD0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DD8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967DE8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E18u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E5Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E70u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E7Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E90u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967EB4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967ED8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967EE0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967EECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F18u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F20u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F38u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F50u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F70u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F88u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F90u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967FB8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967FC0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967FDCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967FE4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967FF0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967FF8u, &recomp_unit_0088, "recomp_unit_0088");
}
} // namespace psprecomp

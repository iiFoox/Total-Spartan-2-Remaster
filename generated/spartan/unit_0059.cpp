#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0059[4096] = {
    1, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
    0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 19, 0, 0, 20, 0, 21, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0,
    0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 33,
    0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 41,
    0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 49,
    0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 57, 0,
    0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0,
    0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 73,
    0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 81,
    0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 89,
    0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 97, 0,
    0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0,
    0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0,
    0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0,
    0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0,
    130, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 138, 0,
    0, 0, 139, 0, 140, 0, 0, 0, 0, 141, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0,
    0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 154, 0,
    155, 0, 0, 156, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0,
    0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0,
    0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 233, 0, 0,
    0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 242, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0,
    0, 252, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0,
    0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0,
    266, 0, 267, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0,
    280, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 287, 0, 0, 0, 0,
    0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0,
    0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 298, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 301, 0, 0, 302, 0,
    303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 309, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0,
    0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 315, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0,
    337, 0, 338, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0,
    344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 348, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0,
    0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 356, 0, 0, 357, 0, 0, 358, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 363, 0, 0,
    0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0,
    369, 0, 0, 370, 0, 0, 371, 0, 372, 0, 373, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377,
    0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 381, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0,
    0, 0, 384, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 391, 0,
    0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0,
    398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 404, 0, 0, 0, 0, 405, 0, 0,
    406, 0, 0, 407, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 415, 0, 0, 416, 0,
    0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 421, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 424,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0,
    0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438,
    0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0,
    442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0,
    0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0,
    453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456,
    0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0,
    0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0,
    503, 0, 0, 0, 0, 504, 0, 0, 505, 0, 506, 0, 507, 0, 508, 0, 509, 0, 510, 0, 511, 0, 512, 0, 513, 0, 514, 0, 515, 0, 516, 0,
    517, 0, 518, 0, 519, 0, 520, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0,
    524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 534, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 537, 0, 538, 0, 0, 539, 0, 0,
    0, 540, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 547, 0, 548, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0,
    0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 557, 0,
    0, 558, 0, 0, 559, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 562, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0,
    0, 565, 0, 0, 0, 0, 0, 566, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 570, 0, 0, 571, 0,
    572, 0, 573, 0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 580, 0, 0, 581, 0, 0, 582, 0, 583, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 585, 0, 0,
    586, 0, 0, 587, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 590, 0, 0, 591, 0, 0, 592, 0, 593, 0, 0, 0, 0,
    0, 0, 0, 594, 0, 0, 595, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0,
    0, 0, 0, 0, 0, 600, 0, 0, 601, 0, 0, 602, 0, 0, 603, 0, 604, 0, 0, 0, 0, 605, 0, 0, 606, 0, 0, 607, 0, 0, 608, 0,
    609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    611, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 614, 0, 615, 0, 0, 616, 0, 0, 0, 0, 617, 0, 0, 0, 0,
    0, 618, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0, 621, 0, 0, 622, 0, 0, 623, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0,
    628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 630, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 638, 0, 639, 0, 0, 640, 0, 0,
    0, 641, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 646, 0, 0, 0,
};

void unit_0059(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00364000;
    case 2u: goto L_0036400C;
    case 3u: goto L_0036401C;
    case 4u: goto L_00364044;
    case 5u: goto L_00364054;
    case 6u: goto L_0036407C;
    case 7u: goto L_0036408C;
    case 8u: goto L_003640B4;
    case 9u: goto L_003640C4;
    case 10u: goto L_003640EC;
    case 11u: goto L_003640FC;
    case 12u: goto L_00364124;
    case 13u: goto L_00364134;
    case 14u: goto L_0036415C;
    case 15u: goto L_0036416C;
    case 16u: goto L_00364194;
    case 17u: goto L_003641A0;
    case 18u: goto L_003641AC;
    case 19u: goto L_003641B4;
    case 20u: goto L_003641C0;
    case 21u: goto L_003641C8;
    case 22u: goto L_003641D4;
    case 23u: goto L_003641E8;
    case 24u: goto L_003641F8;
    case 25u: goto L_00364204;
    case 26u: goto L_00364214;
    case 27u: goto L_00364220;
    case 28u: goto L_00364234;
    case 29u: goto L_00364244;
    case 30u: goto L_00364250;
    case 31u: goto L_0036425C;
    case 32u: goto L_00364268;
    case 33u: goto L_0036427C;
    case 34u: goto L_0036428C;
    case 35u: goto L_00364298;
    case 36u: goto L_003642AC;
    case 37u: goto L_003642B8;
    case 38u: goto L_003642CC;
    case 39u: goto L_003642DC;
    case 40u: goto L_003642E8;
    case 41u: goto L_003642FC;
    case 42u: goto L_00364308;
    case 43u: goto L_0036431C;
    case 44u: goto L_0036432C;
    case 45u: goto L_00364338;
    case 46u: goto L_0036434C;
    case 47u: goto L_00364358;
    case 48u: goto L_0036436C;
    case 49u: goto L_0036437C;
    case 50u: goto L_00364388;
    case 51u: goto L_0036439C;
    case 52u: goto L_003643A8;
    case 53u: goto L_003643BC;
    case 54u: goto L_003643CC;
    case 55u: goto L_003643D8;
    case 56u: goto L_003643EC;
    case 57u: goto L_003643F8;
    case 58u: goto L_0036440C;
    case 59u: goto L_0036441C;
    case 60u: goto L_00364428;
    case 61u: goto L_0036443C;
    case 62u: goto L_00364448;
    case 63u: goto L_0036445C;
    case 64u: goto L_0036446C;
    case 65u: goto L_00364478;
    case 66u: goto L_0036448C;
    case 67u: goto L_00364498;
    case 68u: goto L_003644AC;
    case 69u: goto L_003644BC;
    case 70u: goto L_003644C8;
    case 71u: goto L_003644DC;
    case 72u: goto L_003644E8;
    case 73u: goto L_003644FC;
    case 74u: goto L_0036450C;
    case 75u: goto L_00364518;
    case 76u: goto L_0036452C;
    case 77u: goto L_00364538;
    case 78u: goto L_0036454C;
    case 79u: goto L_0036455C;
    case 80u: goto L_00364568;
    case 81u: goto L_0036457C;
    case 82u: goto L_00364588;
    case 83u: goto L_0036459C;
    case 84u: goto L_003645AC;
    case 85u: goto L_003645B8;
    case 86u: goto L_003645CC;
    case 87u: goto L_003645D8;
    case 88u: goto L_003645EC;
    case 89u: goto L_003645FC;
    case 90u: goto L_00364608;
    case 91u: goto L_0036461C;
    case 92u: goto L_00364628;
    case 93u: goto L_0036463C;
    case 94u: goto L_0036464C;
    case 95u: goto L_00364658;
    case 96u: goto L_0036466C;
    case 97u: goto L_00364678;
    case 98u: goto L_0036468C;
    case 99u: goto L_0036469C;
    case 100u: goto L_003646A8;
    case 101u: goto L_003646BC;
    case 102u: goto L_003646C8;
    case 103u: goto L_003646DC;
    case 104u: goto L_003646EC;
    case 105u: goto L_003646F8;
    case 106u: goto L_0036470C;
    case 107u: goto L_0036471C;
    case 108u: goto L_0036472C;
    case 109u: goto L_00364740;
    case 110u: goto L_0036474C;
    case 111u: goto L_00364758;
    case 112u: goto L_00364768;
    case 113u: goto L_00364774;
    case 114u: goto L_00364784;
    case 115u: goto L_00364790;
    case 116u: goto L_0036479C;
    case 117u: goto L_003647A8;
    case 118u: goto L_003647B8;
    case 119u: goto L_003647D0;
    case 120u: goto L_003647E4;
    case 121u: goto L_003647F4;
    case 122u: goto L_00364808;
    case 123u: goto L_00364818;
    case 124u: goto L_0036482C;
    case 125u: goto L_0036483C;
    case 126u: goto L_00364844;
    case 127u: goto L_00364854;
    case 128u: goto L_00364860;
    case 129u: goto L_00364874;
    case 130u: goto L_00364880;
    case 131u: goto L_00364894;
    case 132u: goto L_003648A0;
    case 133u: goto L_003648B4;
    case 134u: goto L_003648C0;
    case 135u: goto L_003648CC;
    case 136u: goto L_003648D8;
    case 137u: goto L_003648EC;
    case 138u: goto L_003648F8;
    case 139u: goto L_00364908;
    case 140u: goto L_00364910;
    case 141u: goto L_00364924;
    case 142u: goto L_00364928;
    case 143u: goto L_00364938;
    case 144u: goto L_00364954;
    case 145u: goto L_0036495C;
    case 146u: goto L_00364968;
    case 147u: goto L_00364974;
    case 148u: goto L_00364990;
    case 149u: goto L_0036499C;
    case 150u: goto L_003649BC;
    case 151u: goto L_003649D4;
    case 152u: goto L_003649E4;
    case 153u: goto L_003649F0;
    case 154u: goto L_003649F8;
    case 155u: goto L_00364A00;
    case 156u: goto L_00364A0C;
    case 157u: goto L_00364A14;
    case 158u: goto L_00364A24;
    case 159u: goto L_00364A30;
    case 160u: goto L_00364A4C;
    case 161u: goto L_00364A50;
    case 162u: goto L_00364A80;
    case 163u: goto L_00364ABC;
    case 164u: goto L_00364B08;
    case 165u: goto L_00364B48;
    case 166u: goto L_00364B94;
    case 167u: goto L_00364BD0;
    case 168u: goto L_00364C1C;
    case 169u: goto L_00364C58;
    case 170u: goto L_00364CA4;
    case 171u: goto L_00364CE0;
    case 172u: goto L_00364D2C;
    case 173u: goto L_00364D68;
    case 174u: goto L_00364DB4;
    case 175u: goto L_00364DF0;
    case 176u: goto L_00364E30;
    case 177u: goto L_00364E6C;
    case 178u: goto L_00364E84;
    case 179u: goto L_00364E9C;
    case 180u: goto L_00364FD8;
    case 181u: goto L_00365000;
    case 182u: goto L_00365028;
    case 183u: goto L_00365040;
    case 184u: goto L_00365060;
    case 185u: goto L_00365074;
    case 186u: goto L_00365090;
    case 187u: goto L_003650C0;
    case 188u: goto L_003650E0;
    case 189u: goto L_00365114;
    case 190u: goto L_0036512C;
    case 191u: goto L_00365140;
    case 192u: goto L_0036516C;
    case 193u: goto L_0036517C;
    case 194u: goto L_00365190;
    case 195u: goto L_003651CC;
    case 196u: goto L_003651F0;
    case 197u: goto L_00365210;
    case 198u: goto L_00365224;
    case 199u: goto L_00365250;
    case 200u: goto L_00365284;
    case 201u: goto L_0036529C;
    case 202u: goto L_003652C0;
    case 203u: goto L_003652F4;
    case 204u: goto L_0036530C;
    case 205u: goto L_00365320;
    case 206u: goto L_00365354;
    case 207u: goto L_00365364;
    case 208u: goto L_00365380;
    case 209u: goto L_003653BC;
    case 210u: goto L_003653E0;
    case 211u: goto L_00365410;
    case 212u: goto L_00365444;
    case 213u: goto L_0036545C;
    case 214u: goto L_00365470;
    case 215u: goto L_003654A4;
    case 216u: goto L_003654B4;
    case 217u: goto L_003654D0;
    case 218u: goto L_0036550C;
    case 219u: goto L_00365530;
    case 220u: goto L_00365560;
    case 221u: goto L_00365594;
    case 222u: goto L_003655AC;
    case 223u: goto L_003655C0;
    case 224u: goto L_003655E4;
    case 225u: goto L_003655F4;
    case 226u: goto L_00365610;
    case 227u: goto L_0036564C;
    case 228u: goto L_00365670;
    case 229u: goto L_00365690;
    case 230u: goto L_003656C8;
    case 231u: goto L_003656E0;
    case 232u: goto L_003656E8;
    case 233u: goto L_003656F4;
    case 234u: goto L_00365704;
    case 235u: goto L_00365724;
    case 236u: goto L_0036573C;
    case 237u: goto L_0036574C;
    case 238u: goto L_00365760;
    case 239u: goto L_00365770;
    case 240u: goto L_0036579C;
    case 241u: goto L_003657AC;
    case 242u: goto L_003657B4;
    case 243u: goto L_003657C0;
    case 244u: goto L_003657D0;
    case 245u: goto L_003657F0;
    case 246u: goto L_00365808;
    case 247u: goto L_00365818;
    case 248u: goto L_0036582C;
    case 249u: goto L_0036583C;
    case 250u: goto L_0036586C;
    case 251u: goto L_00365878;
    case 252u: goto L_00365884;
    case 253u: goto L_00365890;
    case 254u: goto L_00365898;
    case 255u: goto L_003658C0;
    case 256u: goto L_003658C8;
    case 257u: goto L_003658D4;
    case 258u: goto L_003658E4;
    case 259u: goto L_00365904;
    case 260u: goto L_0036591C;
    case 261u: goto L_0036592C;
    case 262u: goto L_00365954;
    case 263u: goto L_00365960;
    case 264u: goto L_0036596C;
    case 265u: goto L_00365978;
    case 266u: goto L_00365980;
    case 267u: goto L_00365988;
    case 268u: goto L_00365994;
    case 269u: goto L_003659A4;
    case 270u: goto L_003659C4;
    case 271u: goto L_003659DC;
    case 272u: goto L_003659EC;
    case 273u: goto L_00365A1C;
    case 274u: goto L_00365A28;
    case 275u: goto L_00365A34;
    case 276u: goto L_00365A40;
    case 277u: goto L_00365A48;
    case 278u: goto L_00365A68;
    case 279u: goto L_00365A74;
    case 280u: goto L_00365A80;
    case 281u: goto L_00365A8C;
    case 282u: goto L_00365A94;
    case 283u: goto L_00365AC0;
    case 284u: goto L_00365ACC;
    case 285u: goto L_00365AD8;
    case 286u: goto L_00365AE4;
    case 287u: goto L_00365AEC;
    case 288u: goto L_00365B0C;
    case 289u: goto L_00365B18;
    case 290u: goto L_00365B28;
    case 291u: goto L_00365B48;
    case 292u: goto L_00365B60;
    case 293u: goto L_00365B70;
    case 294u: goto L_00365B94;
    case 295u: goto L_00365BA0;
    case 296u: goto L_00365BAC;
    case 297u: goto L_00365BB8;
    case 298u: goto L_00365BC0;
    case 299u: goto L_00365BD4;
    case 300u: goto L_00365BE0;
    case 301u: goto L_00365BEC;
    case 302u: goto L_00365BF8;
    case 303u: goto L_00365C00;
    case 304u: goto L_00365C50;
    case 305u: goto L_00365C80;
    case 306u: goto L_00365C90;
    case 307u: goto L_00365CB0;
    case 308u: goto L_00365CC4;
    case 309u: goto L_00365CCC;
    case 310u: goto L_00365CD8;
    case 311u: goto L_00365CEC;
    case 312u: goto L_00365D04;
    case 313u: goto L_00365D14;
    case 314u: goto L_00365D28;
    case 315u: goto L_00365D30;
    case 316u: goto L_00365D3C;
    case 317u: goto L_00365D48;
    case 318u: goto L_00365D5C;
    case 319u: goto L_00365DA0;
    case 320u: goto L_00365DB0;
    case 321u: goto L_00365DD0;
    case 322u: goto L_00365E04;
    case 323u: goto L_00365E1C;
    case 324u: goto L_00365E30;
    case 325u: goto L_00365E54;
    case 326u: goto L_00365E64;
    case 327u: goto L_00365E80;
    case 328u: goto L_00365EBC;
    case 329u: goto L_00365EE0;
    case 330u: goto L_00365F00;
    case 331u: goto L_00365F14;
    case 332u: goto L_00365F30;
    case 333u: goto L_00365F44;
    case 334u: goto L_00365F4C;
    case 335u: goto L_00365F68;
    case 336u: goto L_00365F74;
    case 337u: goto L_00365F80;
    case 338u: goto L_00365F88;
    case 339u: goto L_00365F94;
    case 340u: goto L_00365FA4;
    case 341u: goto L_00365FC4;
    case 342u: goto L_00365FDC;
    case 343u: goto L_00365FEC;
    case 344u: goto L_00366000;
    case 345u: goto L_00366010;
    case 346u: goto L_0036603C;
    case 347u: goto L_0036604C;
    case 348u: goto L_00366054;
    case 349u: goto L_00366060;
    case 350u: goto L_00366070;
    case 351u: goto L_00366090;
    case 352u: goto L_003660A8;
    case 353u: goto L_003660B8;
    case 354u: goto L_003660CC;
    case 355u: goto L_003660DC;
    case 356u: goto L_0036610C;
    case 357u: goto L_00366118;
    case 358u: goto L_00366124;
    case 359u: goto L_00366130;
    case 360u: goto L_00366138;
    case 361u: goto L_00366160;
    case 362u: goto L_00366168;
    case 363u: goto L_00366174;
    case 364u: goto L_00366184;
    case 365u: goto L_003661A4;
    case 366u: goto L_003661BC;
    case 367u: goto L_003661CC;
    case 368u: goto L_003661F4;
    case 369u: goto L_00366200;
    case 370u: goto L_0036620C;
    case 371u: goto L_00366218;
    case 372u: goto L_00366220;
    case 373u: goto L_00366228;
    case 374u: goto L_00366234;
    case 375u: goto L_00366244;
    case 376u: goto L_00366264;
    case 377u: goto L_0036627C;
    case 378u: goto L_0036628C;
    case 379u: goto L_003662BC;
    case 380u: goto L_003662C8;
    case 381u: goto L_003662D4;
    case 382u: goto L_003662E0;
    case 383u: goto L_003662E8;
    case 384u: goto L_00366308;
    case 385u: goto L_00366314;
    case 386u: goto L_00366320;
    case 387u: goto L_0036632C;
    case 388u: goto L_00366334;
    case 389u: goto L_00366360;
    case 390u: goto L_0036636C;
    case 391u: goto L_00366378;
    case 392u: goto L_00366384;
    case 393u: goto L_0036638C;
    case 394u: goto L_003663AC;
    case 395u: goto L_003663B8;
    case 396u: goto L_003663C8;
    case 397u: goto L_003663E8;
    case 398u: goto L_00366400;
    case 399u: goto L_00366410;
    case 400u: goto L_00366434;
    case 401u: goto L_00366440;
    case 402u: goto L_0036644C;
    case 403u: goto L_00366458;
    case 404u: goto L_00366460;
    case 405u: goto L_00366474;
    case 406u: goto L_00366480;
    case 407u: goto L_0036648C;
    case 408u: goto L_00366498;
    case 409u: goto L_003664A0;
    case 410u: goto L_003664F0;
    case 411u: goto L_00366520;
    case 412u: goto L_00366530;
    case 413u: goto L_00366550;
    case 414u: goto L_00366564;
    case 415u: goto L_0036656C;
    case 416u: goto L_00366578;
    case 417u: goto L_0036658C;
    case 418u: goto L_003665A4;
    case 419u: goto L_003665B4;
    case 420u: goto L_003665C8;
    case 421u: goto L_003665D0;
    case 422u: goto L_003665DC;
    case 423u: goto L_003665E8;
    case 424u: goto L_003665FC;
    case 425u: goto L_00366640;
    case 426u: goto L_00366674;
    case 427u: goto L_0036668C;
    case 428u: goto L_003666A0;
    case 429u: goto L_003666CC;
    case 430u: goto L_003666DC;
    case 431u: goto L_003666F0;
    case 432u: goto L_0036672C;
    case 433u: goto L_00366750;
    case 434u: goto L_00366770;
    case 435u: goto L_003667A4;
    case 436u: goto L_003667BC;
    case 437u: goto L_003667D0;
    case 438u: goto L_003667FC;
    case 439u: goto L_0036680C;
    case 440u: goto L_00366820;
    case 441u: goto L_0036685C;
    case 442u: goto L_00366880;
    case 443u: goto L_003668A0;
    case 444u: goto L_003668B4;
    case 445u: goto L_003668E0;
    case 446u: goto L_00366914;
    case 447u: goto L_0036692C;
    case 448u: goto L_00366940;
    case 449u: goto L_00366974;
    case 450u: goto L_00366984;
    case 451u: goto L_003669A0;
    case 452u: goto L_003669DC;
    case 453u: goto L_00366A00;
    case 454u: goto L_00366A30;
    case 455u: goto L_00366A44;
    case 456u: goto L_00366A7C;
    case 457u: goto L_00366AA0;
    case 458u: goto L_00366AE4;
    case 459u: goto L_00366B18;
    case 460u: goto L_00366B50;
    case 461u: goto L_00366B6C;
    case 462u: goto L_00366B88;
    case 463u: goto L_00366BC0;
    case 464u: goto L_00366BF8;
    case 465u: goto L_00366C30;
    case 466u: goto L_00366C68;
    case 467u: goto L_00366C9C;
    case 468u: goto L_00366CBC;
    case 469u: goto L_00366CF0;
    case 470u: goto L_00366D28;
    case 471u: goto L_00366D60;
    case 472u: goto L_00366D98;
    case 473u: goto L_00366DD0;
    case 474u: goto L_00366E08;
    case 475u: goto L_00366E3C;
    case 476u: goto L_00366E5C;
    case 477u: goto L_00366E90;
    case 478u: goto L_00366EC8;
    case 479u: goto L_00366F00;
    case 480u: goto L_00366F38;
    case 481u: goto L_00366F70;
    case 482u: goto L_00366FA4;
    case 483u: goto L_00366FC4;
    case 484u: goto L_00366FF8;
    case 485u: goto L_00367030;
    case 486u: goto L_00367068;
    case 487u: goto L_003670A0;
    case 488u: goto L_003670D4;
    case 489u: goto L_003670F4;
    case 490u: goto L_00367128;
    case 491u: goto L_00367160;
    case 492u: goto L_00367198;
    case 493u: goto L_003671CC;
    case 494u: goto L_003671EC;
    case 495u: goto L_00367220;
    case 496u: goto L_00367258;
    case 497u: goto L_0036728C;
    case 498u: goto L_003672AC;
    case 499u: goto L_003672E0;
    case 500u: goto L_00367314;
    case 501u: goto L_00367334;
    case 502u: goto L_00367364;
    case 503u: goto L_00367380;
    case 504u: goto L_00367394;
    case 505u: goto L_003673A0;
    case 506u: goto L_003673A8;
    case 507u: goto L_003673B0;
    case 508u: goto L_003673B8;
    case 509u: goto L_003673C0;
    case 510u: goto L_003673C8;
    case 511u: goto L_003673D0;
    case 512u: goto L_003673D8;
    case 513u: goto L_003673E0;
    case 514u: goto L_003673E8;
    case 515u: goto L_003673F0;
    case 516u: goto L_003673F8;
    case 517u: goto L_00367400;
    case 518u: goto L_00367408;
    case 519u: goto L_00367410;
    case 520u: goto L_00367418;
    case 521u: goto L_00367420;
    case 522u: goto L_00367438;
    case 523u: goto L_00367470;
    case 524u: goto L_00367480;
    case 525u: goto L_00367494;
    case 526u: goto L_003674C8;
    case 527u: goto L_00367500;
    case 528u: goto L_00367538;
    case 529u: goto L_00367570;
    case 530u: goto L_003675A8;
    case 531u: goto L_003675E0;
    case 532u: goto L_00367618;
    case 533u: goto L_00367650;
    case 534u: goto L_00367684;
    case 535u: goto L_00367690;
    case 536u: goto L_003676C8;
    case 537u: goto L_003676E0;
    case 538u: goto L_003676E8;
    case 539u: goto L_003676F4;
    case 540u: goto L_00367704;
    case 541u: goto L_00367724;
    case 542u: goto L_0036773C;
    case 543u: goto L_0036774C;
    case 544u: goto L_00367760;
    case 545u: goto L_00367770;
    case 546u: goto L_0036779C;
    case 547u: goto L_003677AC;
    case 548u: goto L_003677B4;
    case 549u: goto L_003677C0;
    case 550u: goto L_003677D0;
    case 551u: goto L_003677F0;
    case 552u: goto L_00367808;
    case 553u: goto L_00367818;
    case 554u: goto L_0036782C;
    case 555u: goto L_0036783C;
    case 556u: goto L_0036786C;
    case 557u: goto L_00367878;
    case 558u: goto L_00367884;
    case 559u: goto L_00367890;
    case 560u: goto L_00367898;
    case 561u: goto L_003678C0;
    case 562u: goto L_003678C8;
    case 563u: goto L_003678D4;
    case 564u: goto L_003678E4;
    case 565u: goto L_00367904;
    case 566u: goto L_0036791C;
    case 567u: goto L_0036792C;
    case 568u: goto L_00367954;
    case 569u: goto L_00367960;
    case 570u: goto L_0036796C;
    case 571u: goto L_00367978;
    case 572u: goto L_00367980;
    case 573u: goto L_00367988;
    case 574u: goto L_00367994;
    case 575u: goto L_003679A4;
    case 576u: goto L_003679C4;
    case 577u: goto L_003679DC;
    case 578u: goto L_003679EC;
    case 579u: goto L_00367A1C;
    case 580u: goto L_00367A28;
    case 581u: goto L_00367A34;
    case 582u: goto L_00367A40;
    case 583u: goto L_00367A48;
    case 584u: goto L_00367A68;
    case 585u: goto L_00367A74;
    case 586u: goto L_00367A80;
    case 587u: goto L_00367A8C;
    case 588u: goto L_00367A94;
    case 589u: goto L_00367AC0;
    case 590u: goto L_00367ACC;
    case 591u: goto L_00367AD8;
    case 592u: goto L_00367AE4;
    case 593u: goto L_00367AEC;
    case 594u: goto L_00367B0C;
    case 595u: goto L_00367B18;
    case 596u: goto L_00367B28;
    case 597u: goto L_00367B48;
    case 598u: goto L_00367B60;
    case 599u: goto L_00367B70;
    case 600u: goto L_00367B94;
    case 601u: goto L_00367BA0;
    case 602u: goto L_00367BAC;
    case 603u: goto L_00367BB8;
    case 604u: goto L_00367BC0;
    case 605u: goto L_00367BD4;
    case 606u: goto L_00367BE0;
    case 607u: goto L_00367BEC;
    case 608u: goto L_00367BF8;
    case 609u: goto L_00367C00;
    case 610u: goto L_00367C50;
    case 611u: goto L_00367C80;
    case 612u: goto L_00367C90;
    case 613u: goto L_00367CB0;
    case 614u: goto L_00367CC4;
    case 615u: goto L_00367CCC;
    case 616u: goto L_00367CD8;
    case 617u: goto L_00367CEC;
    case 618u: goto L_00367D04;
    case 619u: goto L_00367D14;
    case 620u: goto L_00367D28;
    case 621u: goto L_00367D30;
    case 622u: goto L_00367D3C;
    case 623u: goto L_00367D48;
    case 624u: goto L_00367D5C;
    case 625u: goto L_00367DA0;
    case 626u: goto L_00367DD4;
    case 627u: goto L_00367DEC;
    case 628u: goto L_00367E00;
    case 629u: goto L_00367E2C;
    case 630u: goto L_00367E3C;
    case 631u: goto L_00367E50;
    case 632u: goto L_00367E8C;
    case 633u: goto L_00367EB0;
    case 634u: goto L_00367ED0;
    case 635u: goto L_00367EE4;
    case 636u: goto L_00367F10;
    case 637u: goto L_00367F48;
    case 638u: goto L_00367F60;
    case 639u: goto L_00367F68;
    case 640u: goto L_00367F74;
    case 641u: goto L_00367F84;
    case 642u: goto L_00367FA4;
    case 643u: goto L_00367FBC;
    case 644u: goto L_00367FCC;
    case 645u: goto L_00367FE0;
    case 646u: goto L_00367FF0;
    default: bad_entry(c, 0x00364000u); return;
    }
L_00364000:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036400Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0036400Cu) [[unlikely]] return; }
L_0036400C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036401Cu); set32(c.r[5], c.r[5].w[0] + 13299u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0036401Cu) [[unlikely]] return; }
L_0036401C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00364038; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 216u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 640u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003637C0u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 563u, depth); } }
    c.budget -= 1;
L_00364038:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364044u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00364044u) [[unlikely]] return; }
L_00364044:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364054u); set32(c.r[5], c.r[5].w[0] + 13316u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00364054u) [[unlikely]] return; }
L_00364054:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00364070; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 232u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 640u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003637C0u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 563u, depth); } }
    c.budget -= 1;
L_00364070:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036407Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0036407Cu) [[unlikely]] return; }
L_0036407C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036408Cu); set32(c.r[5], c.r[5].w[0] + 13336u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0036408Cu) [[unlikely]] return; }
L_0036408C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003640A8; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 248u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 640u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003637C0u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 563u, depth); } }
    c.budget -= 1;
L_003640A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003640B4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003640B4u) [[unlikely]] return; }
L_003640B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003640C4u); set32(c.r[5], c.r[5].w[0] + 13353u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x003640C4u) [[unlikely]] return; }
L_003640C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003640E0; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 264u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 640u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003637C0u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 563u, depth); } }
    c.budget -= 1;
L_003640E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003640ECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003640ECu) [[unlikely]] return; }
L_003640EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003640FCu); set32(c.r[5], c.r[5].w[0] + 13367u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x003640FCu) [[unlikely]] return; }
L_003640FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00364118; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 280u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 640u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003637C0u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 563u, depth); } }
    c.budget -= 1;
L_00364118:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364124u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00364124u) [[unlikely]] return; }
L_00364124:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364134u); set32(c.r[5], c.r[5].w[0] + 13383u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00364134u) [[unlikely]] return; }
L_00364134:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00364150; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 296u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 640u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003637C0u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 563u, depth); } }
    c.budget -= 1;
L_00364150:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036415Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0036415Cu) [[unlikely]] return; }
L_0036415C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036416Cu); set32(c.r[5], c.r[5].w[0] + 13396u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0036416Cu) [[unlikely]] return; }
L_0036416C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00364188; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 312u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 640u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003637C0u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 563u, depth); } }
    c.budget -= 1;
L_00364188:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364194u); set32(c.r[4], c.r[2].w[0] + 712u);  if (depth < kMaxDepth) unit_005B(c, 156u, depth + 1u); else { c.pc = 0x0036CFD0u; return; } if (c.pc != 0x00364194u) [[unlikely]] return; }
L_00364194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 640u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003637C0u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 563u, depth); } }
    c.budget -= 1;
L_003641A0:
    set32(c.r[4], c.r[29].w[0] + 696u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003641ACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003641ACu) [[unlikely]] return; }
L_003641AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00364A50; } }
L_003641B4:
    set32(c.r[4], c.r[29].w[0] + 696u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003641C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003641C0u) [[unlikely]] return; }
L_003641C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00364A50; } }
L_003641C8:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003641D4u); set32(c.r[4], c.r[2].w[0] + 692u);  if (depth < kMaxDepth) unit_005A(c, 288u, depth + 1u); else { c.pc = 0x00369710u; return; } if (c.pc != 0x003641D4u) [[unlikely]] return; }
L_003641D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[29].w[0] + 628u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 468u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003641E8u); set32(c.r[5], c.r[5].w[0] + 12378u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x003641E8u) [[unlikely]] return; }
L_003641E8:
    set32(c.r[4], c.r[21].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 468u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003641F8u); set32(c.r[6], c.r[29].w[0] + 628u);  if (depth < kMaxDepth) unit_005A(c, 198u, depth + 1u); else { c.pc = 0x00369000u; return; } if (c.pc != 0x003641F8u) [[unlikely]] return; }
L_003641F8:
    set32(c.r[4], c.r[29].w[0] + 468u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364204u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00364204u) [[unlikely]] return; }
L_00364204:
    set32(c.r[2], ld32((c.r[29].w[0] + 628u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363B14u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 616u, depth); } }
L_00364214:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364220u); set32(c.r[4], c.r[2].w[0] + 692u);  if (depth < kMaxDepth) unit_005A(c, 288u, depth + 1u); else { c.pc = 0x00369710u; return; } if (c.pc != 0x00364220u) [[unlikely]] return; }
L_00364220:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[29].w[0] + 624u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 460u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364234u); set32(c.r[5], c.r[5].w[0] + 13006u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00364234u) [[unlikely]] return; }
L_00364234:
    set32(c.r[4], c.r[21].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 460u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364244u); set32(c.r[6], c.r[29].w[0] + 624u);  if (depth < kMaxDepth) unit_005A(c, 198u, depth + 1u); else { c.pc = 0x00369000u; return; } if (c.pc != 0x00364244u) [[unlikely]] return; }
L_00364244:
    set32(c.r[4], c.r[29].w[0] + 460u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364250u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00364250u) [[unlikely]] return; }
L_00364250:
    set32(c.r[2], ld32((c.r[29].w[0] + 624u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363B48u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 620u, depth); } }
L_0036425C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364268u); set32(c.r[4], c.r[2].w[0] + 852u);  if (depth < kMaxDepth) unit_0059(c, 321u, depth + 1u); else { c.pc = 0x00365DD0u; return; } if (c.pc != 0x00364268u) [[unlikely]] return; }
L_00364268:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[29].w[0] + 620u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 452u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036427Cu); set32(c.r[5], c.r[5].w[0] + 13012u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x0036427Cu) [[unlikely]] return; }
L_0036427C:
    set32(c.r[4], c.r[21].w[0] + 180u);
    set32(c.r[5], c.r[29].w[0] + 452u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036428Cu); set32(c.r[6], c.r[29].w[0] + 620u);  if (depth < kMaxDepth) unit_0059(c, 229u, depth + 1u); else { c.pc = 0x00365690u; return; } if (c.pc != 0x0036428Cu) [[unlikely]] return; }
L_0036428C:
    set32(c.r[4], c.r[29].w[0] + 452u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364298u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00364298u) [[unlikely]] return; }
L_00364298:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 620u)));
    set32(c.r[3], c.r[3].w[0] + 24u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363B7Cu | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 624u, depth); } }
L_003642AC:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003642B8u); set32(c.r[4], c.r[2].w[0] + 852u);  if (depth < kMaxDepth) unit_0059(c, 321u, depth + 1u); else { c.pc = 0x00365DD0u; return; } if (c.pc != 0x003642B8u) [[unlikely]] return; }
L_003642B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[29].w[0] + 616u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 444u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003642CCu); set32(c.r[5], c.r[5].w[0] + 13027u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x003642CCu) [[unlikely]] return; }
L_003642CC:
    set32(c.r[4], c.r[21].w[0] + 180u);
    set32(c.r[5], c.r[29].w[0] + 444u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003642DCu); set32(c.r[6], c.r[29].w[0] + 616u);  if (depth < kMaxDepth) unit_0059(c, 229u, depth + 1u); else { c.pc = 0x00365690u; return; } if (c.pc != 0x003642DCu) [[unlikely]] return; }
L_003642DC:
    set32(c.r[4], c.r[29].w[0] + 444u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003642E8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003642E8u) [[unlikely]] return; }
L_003642E8:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 616u)));
    set32(c.r[3], c.r[3].w[0] + 56u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363BB0u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 628u, depth); } }
L_003642FC:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364308u); set32(c.r[4], c.r[2].w[0] + 852u);  if (depth < kMaxDepth) unit_0059(c, 321u, depth + 1u); else { c.pc = 0x00365DD0u; return; } if (c.pc != 0x00364308u) [[unlikely]] return; }
L_00364308:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[29].w[0] + 612u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 436u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036431Cu); set32(c.r[5], c.r[5].w[0] + 13042u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x0036431Cu) [[unlikely]] return; }
L_0036431C:
    set32(c.r[4], c.r[21].w[0] + 180u);
    set32(c.r[5], c.r[29].w[0] + 436u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036432Cu); set32(c.r[6], c.r[29].w[0] + 612u);  if (depth < kMaxDepth) unit_0059(c, 229u, depth + 1u); else { c.pc = 0x00365690u; return; } if (c.pc != 0x0036432Cu) [[unlikely]] return; }
L_0036432C:
    set32(c.r[4], c.r[29].w[0] + 436u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364338u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00364338u) [[unlikely]] return; }
L_00364338:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 612u)));
    set32(c.r[3], c.r[3].w[0] + 88u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363BE4u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 632u, depth); } }
L_0036434C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364358u); set32(c.r[4], c.r[2].w[0] + 852u);  if (depth < kMaxDepth) unit_0059(c, 321u, depth + 1u); else { c.pc = 0x00365DD0u; return; } if (c.pc != 0x00364358u) [[unlikely]] return; }
L_00364358:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[29].w[0] + 608u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 428u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036436Cu); set32(c.r[5], c.r[5].w[0] + 13057u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x0036436Cu) [[unlikely]] return; }
L_0036436C:
    set32(c.r[4], c.r[21].w[0] + 180u);
    set32(c.r[5], c.r[29].w[0] + 428u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036437Cu); set32(c.r[6], c.r[29].w[0] + 608u);  if (depth < kMaxDepth) unit_0059(c, 229u, depth + 1u); else { c.pc = 0x00365690u; return; } if (c.pc != 0x0036437Cu) [[unlikely]] return; }
L_0036437C:
    set32(c.r[4], c.r[29].w[0] + 428u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364388u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00364388u) [[unlikely]] return; }
L_00364388:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 608u)));
    set32(c.r[3], c.r[3].w[0] + 120u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363C18u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 636u, depth); } }
L_0036439C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003643A8u); set32(c.r[4], c.r[2].w[0] + 852u);  if (depth < kMaxDepth) unit_0059(c, 321u, depth + 1u); else { c.pc = 0x00365DD0u; return; } if (c.pc != 0x003643A8u) [[unlikely]] return; }
L_003643A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[29].w[0] + 604u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 420u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003643BCu); set32(c.r[5], c.r[5].w[0] + 13072u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x003643BCu) [[unlikely]] return; }
L_003643BC:
    set32(c.r[4], c.r[21].w[0] + 180u);
    set32(c.r[5], c.r[29].w[0] + 420u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003643CCu); set32(c.r[6], c.r[29].w[0] + 604u);  if (depth < kMaxDepth) unit_0059(c, 229u, depth + 1u); else { c.pc = 0x00365690u; return; } if (c.pc != 0x003643CCu) [[unlikely]] return; }
L_003643CC:
    set32(c.r[4], c.r[29].w[0] + 420u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003643D8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003643D8u) [[unlikely]] return; }
L_003643D8:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 604u)));
    set32(c.r[3], c.r[3].w[0] + 152u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363C4Cu | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 640u, depth); } }
L_003643EC:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003643F8u); set32(c.r[4], c.r[2].w[0] + 852u);  if (depth < kMaxDepth) unit_0059(c, 321u, depth + 1u); else { c.pc = 0x00365DD0u; return; } if (c.pc != 0x003643F8u) [[unlikely]] return; }
L_003643F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[29].w[0] + 600u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 412u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036440Cu); set32(c.r[5], c.r[5].w[0] + 13087u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x0036440Cu) [[unlikely]] return; }
L_0036440C:
    set32(c.r[4], c.r[21].w[0] + 180u);
    set32(c.r[5], c.r[29].w[0] + 412u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036441Cu); set32(c.r[6], c.r[29].w[0] + 600u);  if (depth < kMaxDepth) unit_0059(c, 229u, depth + 1u); else { c.pc = 0x00365690u; return; } if (c.pc != 0x0036441Cu) [[unlikely]] return; }
L_0036441C:
    set32(c.r[4], c.r[29].w[0] + 412u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364428u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00364428u) [[unlikely]] return; }
L_00364428:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 600u)));
    set32(c.r[3], c.r[3].w[0] + 328u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363C80u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 644u, depth); } }
L_0036443C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364448u); set32(c.r[4], c.r[2].w[0] + 852u);  if (depth < kMaxDepth) unit_0059(c, 321u, depth + 1u); else { c.pc = 0x00365DD0u; return; } if (c.pc != 0x00364448u) [[unlikely]] return; }
L_00364448:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[29].w[0] + 596u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 404u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036445Cu); set32(c.r[5], c.r[5].w[0] + 13107u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x0036445Cu) [[unlikely]] return; }
L_0036445C:
    set32(c.r[4], c.r[21].w[0] + 180u);
    set32(c.r[5], c.r[29].w[0] + 404u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036446Cu); set32(c.r[6], c.r[29].w[0] + 596u);  if (depth < kMaxDepth) unit_0059(c, 229u, depth + 1u); else { c.pc = 0x00365690u; return; } if (c.pc != 0x0036446Cu) [[unlikely]] return; }
L_0036446C:
    set32(c.r[4], c.r[29].w[0] + 404u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364478u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00364478u) [[unlikely]] return; }
L_00364478:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 596u)));
    set32(c.r[3], c.r[3].w[0] + 360u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363CB4u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 648u, depth); } }
L_0036448C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364498u); set32(c.r[4], c.r[2].w[0] + 852u);  if (depth < kMaxDepth) unit_0059(c, 321u, depth + 1u); else { c.pc = 0x00365DD0u; return; } if (c.pc != 0x00364498u) [[unlikely]] return; }
L_00364498:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[29].w[0] + 592u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 396u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003644ACu); set32(c.r[5], c.r[5].w[0] + 13127u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x003644ACu) [[unlikely]] return; }
L_003644AC:
    set32(c.r[4], c.r[21].w[0] + 180u);
    set32(c.r[5], c.r[29].w[0] + 396u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003644BCu); set32(c.r[6], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_0059(c, 229u, depth + 1u); else { c.pc = 0x00365690u; return; } if (c.pc != 0x003644BCu) [[unlikely]] return; }
L_003644BC:
    set32(c.r[4], c.r[29].w[0] + 396u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003644C8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003644C8u) [[unlikely]] return; }
L_003644C8:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 592u)));
    set32(c.r[3], c.r[3].w[0] + 392u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363CE8u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 652u, depth); } }
L_003644DC:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003644E8u); set32(c.r[4], c.r[2].w[0] + 852u);  if (depth < kMaxDepth) unit_0059(c, 321u, depth + 1u); else { c.pc = 0x00365DD0u; return; } if (c.pc != 0x003644E8u) [[unlikely]] return; }
L_003644E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[29].w[0] + 588u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 388u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003644FCu); set32(c.r[5], c.r[5].w[0] + 13147u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x003644FCu) [[unlikely]] return; }
L_003644FC:
    set32(c.r[4], c.r[21].w[0] + 180u);
    set32(c.r[5], c.r[29].w[0] + 388u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036450Cu); set32(c.r[6], c.r[29].w[0] + 588u);  if (depth < kMaxDepth) unit_0059(c, 229u, depth + 1u); else { c.pc = 0x00365690u; return; } if (c.pc != 0x0036450Cu) [[unlikely]] return; }
L_0036450C:
    set32(c.r[4], c.r[29].w[0] + 388u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364518u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00364518u) [[unlikely]] return; }
L_00364518:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 588u)));
    set32(c.r[3], c.r[3].w[0] + 424u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363D1Cu | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 656u, depth); } }
L_0036452C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364538u); set32(c.r[4], c.r[2].w[0] + 852u);  if (depth < kMaxDepth) unit_0059(c, 321u, depth + 1u); else { c.pc = 0x00365DD0u; return; } if (c.pc != 0x00364538u) [[unlikely]] return; }
L_00364538:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[29].w[0] + 584u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 380u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036454Cu); set32(c.r[5], c.r[5].w[0] + 13167u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x0036454Cu) [[unlikely]] return; }
L_0036454C:
    set32(c.r[4], c.r[21].w[0] + 180u);
    set32(c.r[5], c.r[29].w[0] + 380u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036455Cu); set32(c.r[6], c.r[29].w[0] + 584u);  if (depth < kMaxDepth) unit_0059(c, 229u, depth + 1u); else { c.pc = 0x00365690u; return; } if (c.pc != 0x0036455Cu) [[unlikely]] return; }
L_0036455C:
    set32(c.r[4], c.r[29].w[0] + 380u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364568u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00364568u) [[unlikely]] return; }
L_00364568:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 584u)));
    set32(c.r[3], c.r[3].w[0] + 456u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363D50u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 660u, depth); } }
L_0036457C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364588u); set32(c.r[4], c.r[2].w[0] + 852u);  if (depth < kMaxDepth) unit_0059(c, 321u, depth + 1u); else { c.pc = 0x00365DD0u; return; } if (c.pc != 0x00364588u) [[unlikely]] return; }
L_00364588:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[29].w[0] + 580u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 372u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036459Cu); set32(c.r[5], c.r[5].w[0] + 13187u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x0036459Cu) [[unlikely]] return; }
L_0036459C:
    set32(c.r[4], c.r[21].w[0] + 180u);
    set32(c.r[5], c.r[29].w[0] + 372u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003645ACu); set32(c.r[6], c.r[29].w[0] + 580u);  if (depth < kMaxDepth) unit_0059(c, 229u, depth + 1u); else { c.pc = 0x00365690u; return; } if (c.pc != 0x003645ACu) [[unlikely]] return; }
L_003645AC:
    set32(c.r[4], c.r[29].w[0] + 372u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003645B8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003645B8u) [[unlikely]] return; }
L_003645B8:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 580u)));
    set32(c.r[3], c.r[3].w[0] + 488u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363D84u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 664u, depth); } }
L_003645CC:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003645D8u); set32(c.r[4], c.r[2].w[0] + 852u);  if (depth < kMaxDepth) unit_0059(c, 321u, depth + 1u); else { c.pc = 0x00365DD0u; return; } if (c.pc != 0x003645D8u) [[unlikely]] return; }
L_003645D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[29].w[0] + 576u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 364u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003645ECu); set32(c.r[5], c.r[5].w[0] + 13207u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x003645ECu) [[unlikely]] return; }
L_003645EC:
    set32(c.r[4], c.r[21].w[0] + 180u);
    set32(c.r[5], c.r[29].w[0] + 364u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003645FCu); set32(c.r[6], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_0059(c, 229u, depth + 1u); else { c.pc = 0x00365690u; return; } if (c.pc != 0x003645FCu) [[unlikely]] return; }
L_003645FC:
    set32(c.r[4], c.r[29].w[0] + 364u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364608u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00364608u) [[unlikely]] return; }
L_00364608:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 576u)));
    set32(c.r[3], c.r[3].w[0] + 520u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363DB8u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 668u, depth); } }
L_0036461C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364628u); set32(c.r[4], c.r[2].w[0] + 852u);  if (depth < kMaxDepth) unit_0059(c, 321u, depth + 1u); else { c.pc = 0x00365DD0u; return; } if (c.pc != 0x00364628u) [[unlikely]] return; }
L_00364628:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[29].w[0] + 572u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 356u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036463Cu); set32(c.r[5], c.r[5].w[0] + 13227u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x0036463Cu) [[unlikely]] return; }
L_0036463C:
    set32(c.r[4], c.r[21].w[0] + 180u);
    set32(c.r[5], c.r[29].w[0] + 356u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036464Cu); set32(c.r[6], c.r[29].w[0] + 572u);  if (depth < kMaxDepth) unit_0059(c, 229u, depth + 1u); else { c.pc = 0x00365690u; return; } if (c.pc != 0x0036464Cu) [[unlikely]] return; }
L_0036464C:
    set32(c.r[4], c.r[29].w[0] + 356u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364658u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00364658u) [[unlikely]] return; }
L_00364658:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 572u)));
    set32(c.r[3], c.r[3].w[0] + 552u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363DECu | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 672u, depth); } }
L_0036466C:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364678u); set32(c.r[4], c.r[2].w[0] + 852u);  if (depth < kMaxDepth) unit_0059(c, 321u, depth + 1u); else { c.pc = 0x00365DD0u; return; } if (c.pc != 0x00364678u) [[unlikely]] return; }
L_00364678:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[29].w[0] + 568u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 348u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036468Cu); set32(c.r[5], c.r[5].w[0] + 13247u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x0036468Cu) [[unlikely]] return; }
L_0036468C:
    set32(c.r[4], c.r[21].w[0] + 180u);
    set32(c.r[5], c.r[29].w[0] + 348u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036469Cu); set32(c.r[6], c.r[29].w[0] + 568u);  if (depth < kMaxDepth) unit_0059(c, 229u, depth + 1u); else { c.pc = 0x00365690u; return; } if (c.pc != 0x0036469Cu) [[unlikely]] return; }
L_0036469C:
    set32(c.r[4], c.r[29].w[0] + 348u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003646A8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003646A8u) [[unlikely]] return; }
L_003646A8:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 568u)));
    set32(c.r[3], c.r[3].w[0] + 584u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363E20u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 676u, depth); } }
L_003646BC:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003646C8u); set32(c.r[4], c.r[2].w[0] + 852u);  if (depth < kMaxDepth) unit_0059(c, 321u, depth + 1u); else { c.pc = 0x00365DD0u; return; } if (c.pc != 0x003646C8u) [[unlikely]] return; }
L_003646C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[29].w[0] + 564u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 340u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003646DCu); set32(c.r[5], c.r[5].w[0] + 13260u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x003646DCu) [[unlikely]] return; }
L_003646DC:
    set32(c.r[4], c.r[21].w[0] + 180u);
    set32(c.r[5], c.r[29].w[0] + 340u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003646ECu); set32(c.r[6], c.r[29].w[0] + 564u);  if (depth < kMaxDepth) unit_0059(c, 229u, depth + 1u); else { c.pc = 0x00365690u; return; } if (c.pc != 0x003646ECu) [[unlikely]] return; }
L_003646EC:
    set32(c.r[4], c.r[29].w[0] + 340u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003646F8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003646F8u) [[unlikely]] return; }
L_003646F8:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 564u)));
    set32(c.r[3], c.r[3].w[0] + 616u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363E54u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 680u, depth); } }
L_0036470C:
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036471Cu); st32((c.r[21].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 444u, depth + 1u); else { c.pc = 0x0035B800u; return; } if (c.pc != 0x0036471Cu) [[unlikely]] return; }
L_0036471C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036472Cu); st32((c.r[21].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 444u, depth + 1u); else { c.pc = 0x0035B800u; return; } if (c.pc != 0x0036472Cu) [[unlikely]] return; }
L_0036472C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[20], c.r[2].w[0] + 4u);
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364740u); set32(c.r[5], c.r[5].w[0] + 12359u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00364740u) [[unlikely]] return; }
L_00364740:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036474Cu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x0036474Cu) [[unlikely]] return; }
L_0036474C:
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003647C8; } }
L_00364758:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364768u); set32(c.r[5], c.r[5].w[0] + 12362u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00364768u) [[unlikely]] return; }
L_00364768:
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364774u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00364774u) [[unlikely]] return; }
L_00364774:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 332u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364784u); set32(c.r[6], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_000E(c, 302u, depth + 1u); else { c.pc = 0x0023B790u; return; } if (c.pc != 0x00364784u) [[unlikely]] return; }
L_00364784:
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364790u); set32(c.r[5], c.r[29].w[0] + 332u);  if (depth < kMaxDepth) unit_0056(c, 441u, depth + 1u); else { c.pc = 0x0035B7A0u; return; } if (c.pc != 0x00364790u) [[unlikely]] return; }
L_00364790:
    set32(c.r[4], c.r[29].w[0] + 332u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036479Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x0036479Cu) [[unlikely]] return; }
L_0036479C:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003647A8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003647A8u) [[unlikely]] return; }
L_003647A8:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003647B8u); c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x003647B8u) [[unlikely]] return; }
L_003647B8:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00364758u | kUnwind; return; } goto L_00364758; } }
    c.budget -= 1;
L_003647C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003647D0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x003647D0u) [[unlikely]] return; }
L_003647D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00364948; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003647E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003647E4u) [[unlikely]] return; }
L_003647E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003647F4u); set32(c.r[5], c.r[5].w[0] + 12364u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x003647F4u) [[unlikely]] return; }
L_003647F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00364948; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364808u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00364808u) [[unlikely]] return; }
L_00364808:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364818u); set32(c.r[5], c.r[5].w[0] + 12367u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00364818u) [[unlikely]] return; }
L_00364818:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00364948; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036482Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0036482Cu) [[unlikely]] return; }
L_0036482C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036483Cu); set32(c.r[5], c.r[21].w[0] + 40u);  if (depth < kMaxDepth) unit_0059(c, 186u, depth + 1u); else { c.pc = 0x00365090u; return; } if (c.pc != 0x0036483Cu) [[unlikely]] return; }
L_0036483C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364844u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0059(c, 184u, depth + 1u); else { c.pc = 0x00365060u; return; } if (c.pc != 0x00364844u) [[unlikely]] return; }
L_00364844:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364854u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0059(c, 181u, depth + 1u); else { c.pc = 0x00365000u; return; } if (c.pc != 0x00364854u) [[unlikely]] return; }
L_00364854:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364860u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x00364860u) [[unlikely]] return; }
L_00364860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00364A40; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364874u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00364874u) [[unlikely]] return; }
L_00364874:
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364880u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 294u, depth + 1u); else { c.pc = 0x0035A030u; return; } if (c.pc != 0x00364880u) [[unlikely]] return; }
L_00364880:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003648A8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364894u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00364894u) [[unlikely]] return; }
L_00364894:
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003648A0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 363u, depth + 1u); else { c.pc = 0x0035AF80u; return; } if (c.pc != 0x003648A0u) [[unlikely]] return; }
L_003648A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00364A40; } }
L_003648A8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003648B4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003648B4u) [[unlikely]] return; }
L_003648B4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003648C0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x003648C0u) [[unlikely]] return; }
L_003648C0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003648CCu); c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x003648CCu) [[unlikely]] return; }
L_003648CC:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00364948; } }
L_003648D8:
    c.r[22].d[0] = c.r[18].d[0] & 65535ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003648ECu); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003648ECu) [[unlikely]] return; }
L_003648EC:
    set32(c.r[4], c.r[21].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003648F8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 294u, depth + 1u); else { c.pc = 0x0035A030u; return; } if (c.pc != 0x003648F8u) [[unlikely]] return; }
L_003648F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00364984; } }
    c.budget -= 1;
L_00364908:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003649A8; } }
L_00364910:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003649C4; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364924u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 162u, depth + 1u); else { c.pc = 0x00364A80u; return; } if (c.pc != 0x00364924u) [[unlikely]] return; }
L_00364924:
    c.budget -= 1;
L_00364928:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364938u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00364938u) [[unlikely]] return; }
L_00364938:
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003648D8u | kUnwind; return; } goto L_003648D8; } }
    c.budget -= 1;
L_00364948:
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364954u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00364954u) [[unlikely]] return; }
L_00364954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036495Cu); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0056(c, 100u, depth + 1u); else { c.pc = 0x00358900u; return; } if (c.pc != 0x0036495Cu) [[unlikely]] return; }
L_0036495C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364968u); set32(c.r[5], c.r[21].w[0] + 220u);  if (depth < kMaxDepth) unit_0056(c, 96u, depth + 1u); else { c.pc = 0x00358880u; return; } if (c.pc != 0x00364968u) [[unlikely]] return; }
L_00364968:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364974u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0056(c, 93u, depth + 1u); else { c.pc = 0x00358830u; return; } if (c.pc != 0x00364974u) [[unlikely]] return; }
L_00364974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036470Cu | kUnwind; return; } goto L_0036470C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[21].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00363E8Cu | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 684u, depth); } }
L_00364984:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364990u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00364990u) [[unlikely]] return; }
L_00364990:
    set32(c.r[4], c.r[21].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036499Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 363u, depth + 1u); else { c.pc = 0x0035AF80u; return; } if (c.pc != 0x0036499Cu) [[unlikely]] return; }
L_0036499C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00364908u | kUnwind; return; } goto L_00364908; } }
    c.budget -= 1;
L_003649A8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00364910u | kUnwind; return; } goto L_00364910; } }
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003649BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003649BCu) [[unlikely]] return; }
L_003649BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00364A50; } }
L_003649C4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003649D4u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x003649D4u) [[unlikely]] return; }
L_003649D4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003649E4u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x003649E4u) [[unlikely]] return; }
L_003649E4:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003649F0u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x003649F0u) [[unlikely]] return; }
L_003649F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00364928u | kUnwind; return; } goto L_00364928; } }
L_003649F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364A00u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00364A00u) [[unlikely]] return; }
L_00364A00:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364A0Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 162u, depth + 1u); else { c.pc = 0x00364A80u; return; } if (c.pc != 0x00364A0Cu) [[unlikely]] return; }
L_00364A0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364A14u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x00364A14u) [[unlikely]] return; }
L_00364A14:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364A24u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00364A24u) [[unlikely]] return; }
L_00364A24:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364A30u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00364A30u) [[unlikely]] return; }
L_00364A30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003649F8u | kUnwind; return; } goto L_003649F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00364928u | kUnwind; return; } goto L_00364928; } }
L_00364A40:
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364A4Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00364A4Cu) [[unlikely]] return; }
L_00364A4C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00364A50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 704u);  c.pc = t; return; }
L_00364A80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00364EA4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00364B1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364ABCu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00364ABCu) [[unlikely]] return; }
L_00364ABC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00364B0C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_00364AE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00364AEC; } }
L_00364AE4:
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_00364AEC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364B08u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00364B08u) [[unlikely]] return; }
L_00364B08:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00364B0C:
    st32((c.r[17].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_00364B1C:
    set32(c.r[17], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00364ECC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00364BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364B48u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00364B48u) [[unlikely]] return; }
L_00364B48:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00364B98; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_00364B70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00364B78; } }
L_00364B70:
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_00364B78:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364B94u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00364B94u) [[unlikely]] return; }
L_00364B94:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00364B98:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_00364BA4:
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00364EF4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00364C2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364BD0u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00364BD0u) [[unlikely]] return; }
L_00364BD0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00364C20; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_00364BF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00364C00; } }
L_00364BF8:
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_00364C00:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364C1Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00364C1Cu) [[unlikely]] return; }
L_00364C1C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00364C20:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_00364C2C:
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00364F1C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00364CB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364C58u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00364C58u) [[unlikely]] return; }
L_00364C58:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00364CA8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_00364C80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00364C88; } }
L_00364C80:
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_00364C88:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364CA4u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00364CA4u) [[unlikely]] return; }
L_00364CA4:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00364CA8:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_00364CB4:
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00364F44; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00364D3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364CE0u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00364CE0u) [[unlikely]] return; }
L_00364CE0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00364D30; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_00364D08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00364D10; } }
L_00364D08:
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_00364D10:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364D2Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00364D2Cu) [[unlikely]] return; }
L_00364D2C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00364D30:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_00364D3C:
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00364F6C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00364DC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364D68u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00364D68u) [[unlikely]] return; }
L_00364D68:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00364DB8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_00364D90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00364D98; } }
L_00364D90:
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_00364D98:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364DB4u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00364DB4u) [[unlikely]] return; }
L_00364DB4:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00364DB8:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_00364DC4:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00364F94; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00364E40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364DF0u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00364DF0u) [[unlikely]] return; }
L_00364DF0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00364E34; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_00364E18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00364E20; } }
L_00364E18:
    set32(c.r[2], 0u + 8u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_00364E20:
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364E30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 360u, depth + 1u); else { c.pc = 0x0035AF00u; return; } if (c.pc != 0x00364E30u) [[unlikely]] return; }
L_00364E30:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00364E34:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00364E40:
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00364FBC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00364E90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364E6Cu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00364E6Cu) [[unlikely]] return; }
L_00364E6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00364E84; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364E84u); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0056(c, 358u, depth + 1u); else { c.pc = 0x0035AEA0u; return; } if (c.pc != 0x00364E84u) [[unlikely]] return; }
L_00364E84:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00364E90:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364E9Cu); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0056(c, 334u, depth + 1u); else { c.pc = 0x0035A840u; return; } if (c.pc != 0x00364E9Cu) [[unlikely]] return; }
L_00364E9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00364FF0; } }
L_00364EA4:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[5].w[0] << 2);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00364FEC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00364E9Cu | kUnwind; return; } goto L_00364E9C; } }
L_00364ECC:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00364FEC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00364E9Cu | kUnwind; return; } goto L_00364E9C; } }
L_00364EF4:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00364FEC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00364E9Cu | kUnwind; return; } goto L_00364E9C; } }
L_00364F1C:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00364FEC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00364E9Cu | kUnwind; return; } goto L_00364E9C; } }
L_00364F44:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00364FEC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00364E9Cu | kUnwind; return; } goto L_00364E9C; } }
L_00364F6C:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00364FEC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00364E9Cu | kUnwind; return; } goto L_00364E9C; } }
L_00364F94:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00364FEC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00364E9Cu | kUnwind; return; } goto L_00364E9C; } }
L_00364FBC:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364FD8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00364FD8u) [[unlikely]] return; }
L_00364FD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00364FEC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00364E9Cu | kUnwind; return; } goto L_00364E9C; } }
L_00364FEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00364FF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00365000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00365040; } }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365028u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00365028u) [[unlikely]] return; }
L_00365028:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00365040; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365040u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00365040u) [[unlikely]] return; }
L_00365040:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00365060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[4].w[0] + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365074u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0056(c, 363u, depth + 1u); else { c.pc = 0x0035AF80u; return; } if (c.pc != 0x00365074u) [[unlikely]] return; }
L_00365074:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00365090:
    c.budget -= 2;
    {  goto L_003650A0; }
L_003650A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003650C0u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x003650C0u) [[unlikely]] return; }
L_003650C0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003650E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00365148; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00365138; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365114u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00365114u) [[unlikely]] return; }
L_00365114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036512C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036512Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0059(c, 194u, depth + 1u); else { c.pc = 0x00365190u; return; } if (c.pc != 0x0036512Cu) [[unlikely]] return; }
L_0036512C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00365138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365140u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0059(c, 188u, depth + 1u); else { c.pc = 0x003650E0u; return; } if (c.pc != 0x00365140u) [[unlikely]] return; }
L_00365140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00365180; } }
L_00365148:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[4], 0u + 240u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036516Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0036516Cu) [[unlikely]] return; }
L_0036516C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036517C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036517Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 197u, depth + 1u); else { c.pc = 0x00365210u; return; } if (c.pc != 0x0036517Cu) [[unlikely]] return; }
L_0036517C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00365180:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00365190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_003651B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_003651BC; } }
L_003651B4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_003651BC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003651CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 196u, depth + 1u); else { c.pc = 0x003651F0u; return; } if (c.pc != 0x003651CCu) [[unlikely]] return; }
L_003651CC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003651F0:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00365210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365224u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 150u, depth + 1u); else { c.pc = 0x003752B0u; return; } if (c.pc != 0x00365224u) [[unlikely]] return; }
L_00365224:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 8944u);
    st32((c.r[16].w[0] + 236u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00365250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0036529C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[17].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] - 10192u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365284u); st32((c.r[17].w[0] + 236u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00365284u) [[unlikely]] return; }
L_00365284:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0036529C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036529Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0036529Cu) [[unlikely]] return; }
L_0036529C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003652C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00365328; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00365318; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003652F4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003652F4u) [[unlikely]] return; }
L_003652F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036530C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036530Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0059(c, 208u, depth + 1u); else { c.pc = 0x00365380u; return; } if (c.pc != 0x0036530Cu) [[unlikely]] return; }
L_0036530C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00365318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365320u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0059(c, 202u, depth + 1u); else { c.pc = 0x003652C0u; return; } if (c.pc != 0x00365320u) [[unlikely]] return; }
L_00365320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00365368; } }
L_00365328:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 2);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[4], 0u + 328u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365354u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00365354u) [[unlikely]] return; }
L_00365354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00365364; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365364u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 142u, depth + 1u); else { c.pc = 0x003751F0u; return; } if (c.pc != 0x00365364u) [[unlikely]] return; }
L_00365364:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00365368:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00365380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_003653A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_003653AC; } }
L_003653A4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_003653AC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003653BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 210u, depth + 1u); else { c.pc = 0x003653E0u; return; } if (c.pc != 0x003653BCu) [[unlikely]] return; }
L_003653BC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003653E0:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 9;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00365410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00365478; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00365468; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365444u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00365444u) [[unlikely]] return; }
L_00365444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036545C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036545Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0059(c, 217u, depth + 1u); else { c.pc = 0x003654D0u; return; } if (c.pc != 0x0036545Cu) [[unlikely]] return; }
L_0036545C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00365468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365470u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0059(c, 211u, depth + 1u); else { c.pc = 0x00365410u; return; } if (c.pc != 0x00365470u) [[unlikely]] return; }
L_00365470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003654B8; } }
L_00365478:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 3);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 296u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003654A4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x003654A4u) [[unlikely]] return; }
L_003654A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003654B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003654B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 512u, depth + 1u); else { c.pc = 0x00383960u; return; } if (c.pc != 0x003654B4u) [[unlikely]] return; }
L_003654B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003654B8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003654D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_003654F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_003654FC; } }
L_003654F4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_003654FC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036550Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 219u, depth + 1u); else { c.pc = 0x00365530u; return; } if (c.pc != 0x0036550Cu) [[unlikely]] return; }
L_0036550C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00365530:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 9;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00365560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003655C8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003655B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365594u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00365594u) [[unlikely]] return; }
L_00365594:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003655AC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003655ACu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0059(c, 226u, depth + 1u); else { c.pc = 0x00365610u; return; } if (c.pc != 0x003655ACu) [[unlikely]] return; }
L_003655AC:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_003655B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003655C0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0059(c, 220u, depth + 1u); else { c.pc = 0x00365560u; return; } if (c.pc != 0x003655C0u) [[unlikely]] return; }
L_003655C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003655F8; } }
L_003655C8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 256u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003655E4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x003655E4u) [[unlikely]] return; }
L_003655E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003655F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003655F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0061(c, 3u, depth + 1u); else { c.pc = 0x00384020u; return; } if (c.pc != 0x003655F4u) [[unlikely]] return; }
L_003655F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003655F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00365610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00365634; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0036563C; } }
L_00365634:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0036563C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036564Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 228u, depth + 1u); else { c.pc = 0x00365670u; return; } if (c.pc != 0x0036564Cu) [[unlikely]] return; }
L_0036564C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00365670:
    set32(c.r[2], c.r[5].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00365690:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003656C8u); set32(c.r[4], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 135u, depth + 1u); else { c.pc = 0x00358D30u; return; } if (c.pc != 0x003656C8u) [[unlikely]] return; }
L_003656C8:
    mmi::divu(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[19].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003657B4; } }
    c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003656E0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00365788; } }
L_003656E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003656F4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x003656F4u) [[unlikely]] return; }
L_003656F4:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365704u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00365704u) [[unlikely]] return; }
L_00365704:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00365730; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365724u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00365724u) [[unlikely]] return; }
L_00365724:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00365C20; } }
L_00365730:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036573Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x0036573Cu) [[unlikely]] return; }
L_0036573C:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036574Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036574Cu) [[unlikely]] return; }
L_0036574C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00365AB4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365760u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00365760u) [[unlikely]] return; }
L_00365760:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365770u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00365770u) [[unlikely]] return; }
L_00365770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00365B00; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003656E8u | kUnwind; return; } goto L_003656E8; } }
L_00365788:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036579Cu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0059(c, 304u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0036579Cu) [[unlikely]] return; }
L_0036579C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003657ACu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 229u, depth + 1u); else { c.pc = 0x00365690u; return; } if (c.pc != 0x003657ACu) [[unlikely]] return; }
L_003657AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00365C24; } }
L_003657B4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003657C0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x003657C0u) [[unlikely]] return; }
L_003657C0:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003657D0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003657D0u) [[unlikely]] return; }
L_003657D0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003657FC; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003657F0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x003657F0u) [[unlikely]] return; }
L_003657F0:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00365C20; } }
L_003657FC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365808u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00365808u) [[unlikely]] return; }
L_00365808:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365818u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00365818u) [[unlikely]] return; }
L_00365818:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00365860; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036582Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x0036582Cu) [[unlikely]] return; }
L_0036582C:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036583Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036583Cu) [[unlikely]] return; }
L_0036583C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003658AC; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003657B4u | kUnwind; return; } goto L_003657B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003656E0u | kUnwind; return; } goto L_003656E0; } }
L_00365860:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036586Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x0036586Cu) [[unlikely]] return; }
L_0036586C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365878u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00365878u) [[unlikely]] return; }
L_00365878:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365884u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00365884u) [[unlikely]] return; }
L_00365884:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365890u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00365890u) [[unlikely]] return; }
L_00365890:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003658A0; } }
L_00365898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00365C20; } }
L_003658A0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00365898u | kUnwind; return; } goto L_00365898; } }
L_003658AC:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00365988; } }
    c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003658C0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00365948; } }
L_003658C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003658D4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x003658D4u) [[unlikely]] return; }
L_003658D4:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003658E4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003658E4u) [[unlikely]] return; }
L_003658E4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00365910; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365904u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00365904u) [[unlikely]] return; }
L_00365904:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00365C20; } }
L_00365910:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036591Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x0036591Cu) [[unlikely]] return; }
L_0036591C:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036592Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036592Cu) [[unlikely]] return; }
L_0036592C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00365A5C; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003658C8u | kUnwind; return; } goto L_003658C8; } }
    c.budget -= 1;
L_00365948:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365954u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00365954u) [[unlikely]] return; }
L_00365954:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365960u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00365960u) [[unlikely]] return; }
L_00365960:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036596Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x0036596Cu) [[unlikely]] return; }
L_0036596C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365978u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00365978u) [[unlikely]] return; }
L_00365978:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00365AA8; } }
L_00365980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00365C20; } }
L_00365988:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365994u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00365994u) [[unlikely]] return; }
L_00365994:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003659A4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003659A4u) [[unlikely]] return; }
L_003659A4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003659D0; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003659C4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x003659C4u) [[unlikely]] return; }
L_003659C4:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00365C20; } }
L_003659D0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003659DCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x003659DCu) [[unlikely]] return; }
L_003659DC:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003659ECu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003659ECu) [[unlikely]] return; }
L_003659EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00365A10; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00365988u | kUnwind; return; } goto L_00365988; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003658C0u | kUnwind; return; } goto L_003658C0; } }
L_00365A10:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365A1Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00365A1Cu) [[unlikely]] return; }
L_00365A1C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365A28u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00365A28u) [[unlikely]] return; }
L_00365A28:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365A34u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00365A34u) [[unlikely]] return; }
L_00365A34:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365A40u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00365A40u) [[unlikely]] return; }
L_00365A40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00365A50; } }
L_00365A48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00365C20; } }
L_00365A50:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00365A48u | kUnwind; return; } goto L_00365A48; } }
L_00365A5C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365A68u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00365A68u) [[unlikely]] return; }
L_00365A68:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365A74u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00365A74u) [[unlikely]] return; }
L_00365A74:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365A80u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00365A80u) [[unlikely]] return; }
L_00365A80:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365A8Cu); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00365A8Cu) [[unlikely]] return; }
L_00365A8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00365A9C; } }
L_00365A94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00365C20; } }
L_00365A9C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00365A94u | kUnwind; return; } goto L_00365A94; } }
L_00365AA8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00365980u | kUnwind; return; } goto L_00365980; } }
L_00365AB4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365AC0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00365AC0u) [[unlikely]] return; }
L_00365AC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365ACCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00365ACCu) [[unlikely]] return; }
L_00365ACC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365AD8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00365AD8u) [[unlikely]] return; }
L_00365AD8:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365AE4u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00365AE4u) [[unlikely]] return; }
L_00365AE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00365AF4; } }
L_00365AEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00365C20; } }
L_00365AF4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00365AECu | kUnwind; return; } goto L_00365AEC; } }
L_00365B00:
    c.r[1].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00365B88; } }
L_00365B0C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365B18u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00365B18u) [[unlikely]] return; }
L_00365B18:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365B28u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00365B28u) [[unlikely]] return; }
L_00365B28:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00365B54; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365B48u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00365B48u) [[unlikely]] return; }
L_00365B48:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00365C20; } }
L_00365B54:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365B60u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00365B60u) [[unlikely]] return; }
L_00365B60:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365B70u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00365B70u) [[unlikely]] return; }
L_00365B70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00365BC8; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00365B0Cu | kUnwind; return; } goto L_00365B0C; } }
L_00365B88:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365B94u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00365B94u) [[unlikely]] return; }
L_00365B94:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365BA0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00365BA0u) [[unlikely]] return; }
L_00365BA0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365BACu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00365BACu) [[unlikely]] return; }
L_00365BAC:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365BB8u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00365BB8u) [[unlikely]] return; }
L_00365BB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00365C14; } }
L_00365BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00365C20; } }
L_00365BC8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365BD4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00365BD4u) [[unlikely]] return; }
L_00365BD4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365BE0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00365BE0u) [[unlikely]] return; }
L_00365BE0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365BECu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00365BECu) [[unlikely]] return; }
L_00365BEC:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365BF8u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00365BF8u) [[unlikely]] return; }
L_00365BF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00365C08; } }
L_00365C00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00365C20; } }
L_00365C08:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00365C00u | kUnwind; return; } goto L_00365C00; } }
L_00365C14:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00365BC0u | kUnwind; return; } goto L_00365BC0; } }
L_00365C20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00365C24:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00365C50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365C80u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00365C80u) [[unlikely]] return; }
L_00365C80:
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365C90u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00365C90u) [[unlikely]] return; }
L_00365C90:
    st32((c.r[19].w[0]), c.r[16].w[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365CB0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00365CB0u) [[unlikely]] return; }
L_00365CB0:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00365D30; } }
L_00365CC4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[16].d[0];  if (t) { goto L_00365D20; } }
L_00365CCC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365CD8u); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_0059(c, 319u, depth + 1u); else { c.pc = 0x00365DA0u; return; } if (c.pc != 0x00365CD8u) [[unlikely]] return; }
L_00365CD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00365D08; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365CECu); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0059(c, 319u, depth + 1u); else { c.pc = 0x00365DA0u; return; } if (c.pc != 0x00365CECu) [[unlikely]] return; }
L_00365CEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00365D08; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365D04u); set32(c.r[6], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0059(c, 229u, depth + 1u); else { c.pc = 0x00365690u; return; } if (c.pc != 0x00365D04u) [[unlikely]] return; }
L_00365D04:
    c.budget -= 1;
L_00365D08:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365D14u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00365D14u) [[unlikely]] return; }
L_00365D14:
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00365CCCu | kUnwind; return; } goto L_00365CCC; } }
L_00365D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365D28u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0011(c, 256u, depth + 1u); else { c.pc = 0x00246260u; return; } if (c.pc != 0x00365D28u) [[unlikely]] return; }
L_00365D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00365D7C; } }
L_00365D30:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365D3Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00365D3Cu) [[unlikely]] return; }
L_00365D3C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365D48u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00365D48u) [[unlikely]] return; }
L_00365D48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00365D60; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365D5Cu); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x00365D5Cu) [[unlikely]] return; }
L_00365D5C:
    c.budget -= 1;
L_00365D60:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00365D30u | kUnwind; return; } goto L_00365D30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00365CC4u | kUnwind; return; } goto L_00365CC4; } }
L_00365D7C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00365DA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365DB0u);  if (depth < kMaxDepth) unit_000E(c, 290u, depth + 1u); else { c.pc = 0x0023B4B0u; return; } if (c.pc != 0x00365DB0u) [[unlikely]] return; }
L_00365DB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00365DD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00365E38; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00365E28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365E04u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00365E04u) [[unlikely]] return; }
L_00365E04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00365E1C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365E1Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0059(c, 327u, depth + 1u); else { c.pc = 0x00365E80u; return; } if (c.pc != 0x00365E1Cu) [[unlikely]] return; }
L_00365E1C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00365E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365E30u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0059(c, 321u, depth + 1u); else { c.pc = 0x00365DD0u; return; } if (c.pc != 0x00365E30u) [[unlikely]] return; }
L_00365E30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00365E68; } }
L_00365E38:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 8u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365E54u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00365E54u) [[unlikely]] return; }
L_00365E54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00365E64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365E64u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 330u, depth + 1u); else { c.pc = 0x00365F00u; return; } if (c.pc != 0x00365E64u) [[unlikely]] return; }
L_00365E64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00365E68:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00365E80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00365EA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_00365EAC; } }
L_00365EA4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_00365EAC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365EBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 329u, depth + 1u); else { c.pc = 0x00365EE0u; return; } if (c.pc != 0x00365EBCu) [[unlikely]] return; }
L_00365EBC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00365EE0:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00365F00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365F14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0023C180u; return; } if (c.pc != 0x00365F14u) [[unlikely]] return; }
L_00365F14:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00365F30:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.budget -= 5;
L_00365F44:
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 2;
L_00365F4C:
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365F68u); set32(c.r[4], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 135u, depth + 1u); else { c.pc = 0x00358D30u; return; } if (c.pc != 0x00365F68u) [[unlikely]] return; }
L_00365F68:
    mmi::divu(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[19].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_00365F74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00366054; } }
    c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00365F80:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00366028; } }
L_00365F88:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365F94u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x00365F94u) [[unlikely]] return; }
L_00365F94:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365FA4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00365FA4u) [[unlikely]] return; }
L_00365FA4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00365FD0; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365FC4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x00365FC4u) [[unlikely]] return; }
L_00365FC4:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003664C0; } }
L_00365FD0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365FDCu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x00365FDCu) [[unlikely]] return; }
L_00365FDC:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365FECu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00365FECu) [[unlikely]] return; }
L_00365FEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00366354; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366000u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x00366000u) [[unlikely]] return; }
L_00366000:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366010u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00366010u) [[unlikely]] return; }
L_00366010:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003663A0; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00365F88u | kUnwind; return; } goto L_00365F88; } }
L_00366028:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036603Cu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0059(c, 410u, depth + 1u); else { c.pc = 0x003664F0u; return; } if (c.pc != 0x0036603Cu) [[unlikely]] return; }
L_0036603C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036604Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 332u, depth + 1u); else { c.pc = 0x00365F30u; return; } if (c.pc != 0x0036604Cu) [[unlikely]] return; }
L_0036604C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_003664C4; } }
L_00366054:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366060u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x00366060u) [[unlikely]] return; }
L_00366060:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366070u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00366070u) [[unlikely]] return; }
L_00366070:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036609C; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366090u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x00366090u) [[unlikely]] return; }
L_00366090:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003664C0; } }
L_0036609C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003660A8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x003660A8u) [[unlikely]] return; }
L_003660A8:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003660B8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003660B8u) [[unlikely]] return; }
L_003660B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00366100; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003660CCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x003660CCu) [[unlikely]] return; }
L_003660CC:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003660DCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003660DCu) [[unlikely]] return; }
L_003660DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036614C; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366054u | kUnwind; return; } goto L_00366054; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00365F80u | kUnwind; return; } goto L_00365F80; } }
L_00366100:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036610Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x0036610Cu) [[unlikely]] return; }
L_0036610C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366118u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00366118u) [[unlikely]] return; }
L_00366118:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366124u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x00366124u) [[unlikely]] return; }
L_00366124:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366130u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00366130u) [[unlikely]] return; }
L_00366130:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00366140; } }
L_00366138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003664C0; } }
L_00366140:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366138u | kUnwind; return; } goto L_00366138; } }
L_0036614C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00366228; } }
    c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00366160:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003661E8; } }
L_00366168:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366174u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x00366174u) [[unlikely]] return; }
L_00366174:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366184u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00366184u) [[unlikely]] return; }
L_00366184:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003661B0; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003661A4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x003661A4u) [[unlikely]] return; }
L_003661A4:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003664C0; } }
L_003661B0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003661BCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x003661BCu) [[unlikely]] return; }
L_003661BC:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003661CCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003661CCu) [[unlikely]] return; }
L_003661CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003662FC; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366168u | kUnwind; return; } goto L_00366168; } }
    c.budget -= 1;
L_003661E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003661F4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x003661F4u) [[unlikely]] return; }
L_003661F4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366200u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00366200u) [[unlikely]] return; }
L_00366200:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036620Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x0036620Cu) [[unlikely]] return; }
L_0036620C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366218u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00366218u) [[unlikely]] return; }
L_00366218:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00366348; } }
L_00366220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003664C0; } }
L_00366228:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366234u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x00366234u) [[unlikely]] return; }
L_00366234:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366244u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00366244u) [[unlikely]] return; }
L_00366244:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00366270; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366264u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x00366264u) [[unlikely]] return; }
L_00366264:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003664C0; } }
L_00366270:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036627Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x0036627Cu) [[unlikely]] return; }
L_0036627C:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036628Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036628Cu) [[unlikely]] return; }
L_0036628C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003662B0; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366228u | kUnwind; return; } goto L_00366228; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366160u | kUnwind; return; } goto L_00366160; } }
L_003662B0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003662BCu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x003662BCu) [[unlikely]] return; }
L_003662BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003662C8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x003662C8u) [[unlikely]] return; }
L_003662C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003662D4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x003662D4u) [[unlikely]] return; }
L_003662D4:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003662E0u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x003662E0u) [[unlikely]] return; }
L_003662E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003662F0; } }
L_003662E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003664C0; } }
L_003662F0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003662E8u | kUnwind; return; } goto L_003662E8; } }
L_003662FC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366308u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x00366308u) [[unlikely]] return; }
L_00366308:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366314u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00366314u) [[unlikely]] return; }
L_00366314:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366320u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x00366320u) [[unlikely]] return; }
L_00366320:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036632Cu); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0036632Cu) [[unlikely]] return; }
L_0036632C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036633C; } }
L_00366334:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003664C0; } }
L_0036633C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366334u | kUnwind; return; } goto L_00366334; } }
L_00366348:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366220u | kUnwind; return; } goto L_00366220; } }
L_00366354:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366360u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x00366360u) [[unlikely]] return; }
L_00366360:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036636Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x0036636Cu) [[unlikely]] return; }
L_0036636C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366378u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x00366378u) [[unlikely]] return; }
L_00366378:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366384u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00366384u) [[unlikely]] return; }
L_00366384:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00366394; } }
L_0036638C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003664C0; } }
L_00366394:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036638Cu | kUnwind; return; } goto L_0036638C; } }
L_003663A0:
    c.r[1].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00366428; } }
L_003663AC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003663B8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x003663B8u) [[unlikely]] return; }
L_003663B8:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003663C8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003663C8u) [[unlikely]] return; }
L_003663C8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003663F4; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003663E8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x003663E8u) [[unlikely]] return; }
L_003663E8:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003664C0; } }
L_003663F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366400u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x00366400u) [[unlikely]] return; }
L_00366400:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366410u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00366410u) [[unlikely]] return; }
L_00366410:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00366468; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003663ACu | kUnwind; return; } goto L_003663AC; } }
L_00366428:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366434u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x00366434u) [[unlikely]] return; }
L_00366434:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366440u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00366440u) [[unlikely]] return; }
L_00366440:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036644Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x0036644Cu) [[unlikely]] return; }
L_0036644C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366458u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00366458u) [[unlikely]] return; }
L_00366458:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003664B4; } }
L_00366460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003664C0; } }
L_00366468:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366474u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x00366474u) [[unlikely]] return; }
L_00366474:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366480u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00366480u) [[unlikely]] return; }
L_00366480:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036648Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x0036648Cu) [[unlikely]] return; }
L_0036648C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366498u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00366498u) [[unlikely]] return; }
L_00366498:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003664A8; } }
L_003664A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003664C0; } }
L_003664A8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003664A0u | kUnwind; return; } goto L_003664A0; } }
L_003664B4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366460u | kUnwind; return; } goto L_00366460; } }
L_003664C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003664C4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003664F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366520u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x00366520u) [[unlikely]] return; }
L_00366520:
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366530u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x00366530u) [[unlikely]] return; }
L_00366530:
    st32((c.r[19].w[0]), c.r[16].w[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366550u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00366550u) [[unlikely]] return; }
L_00366550:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003665D0; } }
L_00366564:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[16].d[0];  if (t) { goto L_003665C0; } }
L_0036656C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366578u); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_0059(c, 319u, depth + 1u); else { c.pc = 0x00365DA0u; return; } if (c.pc != 0x00366578u) [[unlikely]] return; }
L_00366578:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003665A8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036658Cu); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0059(c, 319u, depth + 1u); else { c.pc = 0x00365DA0u; return; } if (c.pc != 0x0036658Cu) [[unlikely]] return; }
L_0036658C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003665A8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003665A4u); set32(c.r[6], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0059(c, 332u, depth + 1u); else { c.pc = 0x00365F30u; return; } if (c.pc != 0x003665A4u) [[unlikely]] return; }
L_003665A4:
    c.budget -= 1;
L_003665A8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003665B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003665B4u) [[unlikely]] return; }
L_003665B4:
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036656Cu | kUnwind; return; } goto L_0036656C; } }
L_003665C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003665C8u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0011(c, 256u, depth + 1u); else { c.pc = 0x00246260u; return; } if (c.pc != 0x003665C8u) [[unlikely]] return; }
L_003665C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0036661C; } }
L_003665D0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003665DCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x003665DCu) [[unlikely]] return; }
L_003665DC:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003665E8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x003665E8u) [[unlikely]] return; }
L_003665E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00366600; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003665FCu); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x003665FCu) [[unlikely]] return; }
L_003665FC:
    c.budget -= 1;
L_00366600:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003665D0u | kUnwind; return; } goto L_003665D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366564u | kUnwind; return; } goto L_00366564; } }
L_0036661C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00366640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003666A8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00366698; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366674u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00366674u) [[unlikely]] return; }
L_00366674:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036668C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036668Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0059(c, 431u, depth + 1u); else { c.pc = 0x003666F0u; return; } if (c.pc != 0x0036668Cu) [[unlikely]] return; }
L_0036668C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00366698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003666A0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0059(c, 425u, depth + 1u); else { c.pc = 0x00366640u; return; } if (c.pc != 0x003666A0u) [[unlikely]] return; }
L_003666A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003666E0; } }
L_003666A8:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[4], 0u + 112u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003666CCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x003666CCu) [[unlikely]] return; }
L_003666CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003666DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003666DCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 144u, depth + 1u); else { c.pc = 0x00375230u; return; } if (c.pc != 0x003666DCu) [[unlikely]] return; }
L_003666DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003666E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003666F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00366714; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0036671C; } }
L_00366714:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0036671C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036672Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 433u, depth + 1u); else { c.pc = 0x00366750u; return; } if (c.pc != 0x0036672Cu) [[unlikely]] return; }
L_0036672C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00366750:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00366770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003667D8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003667C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003667A4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003667A4u) [[unlikely]] return; }
L_003667A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003667BC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003667BCu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0059(c, 440u, depth + 1u); else { c.pc = 0x00366820u; return; } if (c.pc != 0x003667BCu) [[unlikely]] return; }
L_003667BC:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_003667C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003667D0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0059(c, 434u, depth + 1u); else { c.pc = 0x00366770u; return; } if (c.pc != 0x003667D0u) [[unlikely]] return; }
L_003667D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00366810; } }
L_003667D8:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 252u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003667FCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x003667FCu) [[unlikely]] return; }
L_003667FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036680C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036680Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 443u, depth + 1u); else { c.pc = 0x003668A0u; return; } if (c.pc != 0x0036680Cu) [[unlikely]] return; }
L_0036680C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00366810:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00366820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00366844; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0036684C; } }
L_00366844:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0036684C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036685Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 442u, depth + 1u); else { c.pc = 0x00366880u; return; } if (c.pc != 0x0036685Cu) [[unlikely]] return; }
L_0036685C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00366880:
    set32(c.r[2], c.r[5].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_003668A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003668B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 150u, depth + 1u); else { c.pc = 0x003752B0u; return; } if (c.pc != 0x003668B4u) [[unlikely]] return; }
L_003668B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 8864u);
    st32((c.r[16].w[0] + 236u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 248u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003668E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00366948; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00366938; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366914u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00366914u) [[unlikely]] return; }
L_00366914:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036692C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036692Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0059(c, 451u, depth + 1u); else { c.pc = 0x003669A0u; return; } if (c.pc != 0x0036692Cu) [[unlikely]] return; }
L_0036692C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00366938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366940u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0059(c, 445u, depth + 1u); else { c.pc = 0x003668E0u; return; } if (c.pc != 0x00366940u) [[unlikely]] return; }
L_00366940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00366988; } }
L_00366948:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 5);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[4], 0u + 268u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366974u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00366974u) [[unlikely]] return; }
L_00366974:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00366984; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366984u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 454u, depth + 1u); else { c.pc = 0x00366A30u; return; } if (c.pc != 0x00366984u) [[unlikely]] return; }
L_00366984:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00366988:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003669A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_003669C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_003669CC; } }
L_003669C4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_003669CC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003669DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 453u, depth + 1u); else { c.pc = 0x00366A00u; return; } if (c.pc != 0x003669DCu) [[unlikely]] return; }
L_003669DC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00366A00:
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 9;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00366A30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366A44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 150u, depth + 1u); else { c.pc = 0x003752B0u; return; } if (c.pc != 0x00366A44u) [[unlikely]] return; }
L_00366A44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] - 8784u);
    st32((c.r[16].w[0] + 236u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 244u), 0u);
    st32((c.r[16].w[0] + 248u), 0u);
    st32((c.r[16].w[0] + 252u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 256u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 252u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366A7Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00366A7Cu) [[unlikely]] return; }
L_00366A7C:
    st32((c.r[16].w[0] + 240u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 260u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 264u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00366AA0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const bool t = c.r[21].d[0] == 0ull; st16((c.r[29].w[0] + 174u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00367438; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00366B00; } }
L_00366AE4:
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[21].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366AE4u | kUnwind; return; } goto L_00366AE4; } }
L_00366B00:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00366C9C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00366B38; } }
L_00366B18:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366B18u | kUnwind; return; } goto L_00366B18; } }
    c.budget -= 1;
L_00366B38:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00366C9C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00366B70; } }
L_00366B50:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366B50u | kUnwind; return; } goto L_00366B50; } }
L_00366B6C:
    c.budget -= 1;
L_00366B70:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00366C9C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00366BA8; } }
L_00366B88:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366B88u | kUnwind; return; } goto L_00366B88; } }
    c.budget -= 1;
L_00366BA8:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00366C9C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00366BE0; } }
L_00366BC0:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366BC0u | kUnwind; return; } goto L_00366BC0; } }
    c.budget -= 1;
L_00366BE0:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00366C9C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00366C18; } }
L_00366BF8:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366BF8u | kUnwind; return; } goto L_00366BF8; } }
    c.budget -= 1;
L_00366C18:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00366C9C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00366C50; } }
L_00366C30:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366C30u | kUnwind; return; } goto L_00366C30; } }
    c.budget -= 1;
L_00366C50:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00366C9C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00366C88; } }
L_00366C68:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366C68u | kUnwind; return; } goto L_00366C68; } }
    c.budget -= 1;
L_00366C88:
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00366C9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366C9Cu);  if (depth < kMaxDepth) unit_0059(c, 524u, depth + 1u); else { c.pc = 0x00367480u; return; } if (c.pc != 0x00366C9Cu) [[unlikely]] return; }
L_00366C9C:
    set32(c.r[20], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00367418; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00367418; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00366CD8; } }
L_00366CBC:
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[20].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366CBCu | kUnwind; return; } goto L_00366CBC; } }
L_00366CD8:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00366E3C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00366D10; } }
L_00366CF0:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366CF0u | kUnwind; return; } goto L_00366CF0; } }
    c.budget -= 1;
L_00366D10:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00366E3C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00366D48; } }
L_00366D28:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366D28u | kUnwind; return; } goto L_00366D28; } }
    c.budget -= 1;
L_00366D48:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00366E3C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00366D80; } }
L_00366D60:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366D60u | kUnwind; return; } goto L_00366D60; } }
    c.budget -= 1;
L_00366D80:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00366E3C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00366DB8; } }
L_00366D98:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366D98u | kUnwind; return; } goto L_00366D98; } }
    c.budget -= 1;
L_00366DB8:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00366E3C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00366DF0; } }
L_00366DD0:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366DD0u | kUnwind; return; } goto L_00366DD0; } }
    c.budget -= 1;
L_00366DF0:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00366E3C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00366E28; } }
L_00366E08:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366E08u | kUnwind; return; } goto L_00366E08; } }
    c.budget -= 1;
L_00366E28:
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00366E3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366E3Cu);  if (depth < kMaxDepth) unit_0059(c, 524u, depth + 1u); else { c.pc = 0x00367480u; return; } if (c.pc != 0x00366E3Cu) [[unlikely]] return; }
L_00366E3C:
    set32(c.r[19], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00367408; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00367408; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00366E78; } }
L_00366E5C:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366E5Cu | kUnwind; return; } goto L_00366E5C; } }
L_00366E78:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00366FA4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00366EB0; } }
L_00366E90:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366E90u | kUnwind; return; } goto L_00366E90; } }
    c.budget -= 1;
L_00366EB0:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00366FA4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00366EE8; } }
L_00366EC8:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366EC8u | kUnwind; return; } goto L_00366EC8; } }
    c.budget -= 1;
L_00366EE8:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00366FA4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00366F20; } }
L_00366F00:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366F00u | kUnwind; return; } goto L_00366F00; } }
    c.budget -= 1;
L_00366F20:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00366FA4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00366F58; } }
L_00366F38:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366F38u | kUnwind; return; } goto L_00366F38; } }
    c.budget -= 1;
L_00366F58:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00366FA4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00366F90; } }
L_00366F70:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366F70u | kUnwind; return; } goto L_00366F70; } }
    c.budget -= 1;
L_00366F90:
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00366FA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366FA4u);  if (depth < kMaxDepth) unit_0059(c, 524u, depth + 1u); else { c.pc = 0x00367480u; return; } if (c.pc != 0x00366FA4u) [[unlikely]] return; }
L_00366FA4:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003673F8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003673F8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00366FE0; } }
L_00366FC4:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366FC4u | kUnwind; return; } goto L_00366FC4; } }
L_00366FE0:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003670D4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00367018; } }
L_00366FF8:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366FF8u | kUnwind; return; } goto L_00366FF8; } }
    c.budget -= 1;
L_00367018:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003670D4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00367050; } }
L_00367030:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367030u | kUnwind; return; } goto L_00367030; } }
    c.budget -= 1;
L_00367050:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003670D4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00367088; } }
L_00367068:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367068u | kUnwind; return; } goto L_00367068; } }
    c.budget -= 1;
L_00367088:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003670D4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003670C0; } }
L_003670A0:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003670A0u | kUnwind; return; } goto L_003670A0; } }
    c.budget -= 1;
L_003670C0:
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003670D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003670D4u);  if (depth < kMaxDepth) unit_0059(c, 524u, depth + 1u); else { c.pc = 0x00367480u; return; } if (c.pc != 0x003670D4u) [[unlikely]] return; }
L_003670D4:
    set32(c.r[17], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003673E8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003673E8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00367110; } }
L_003670F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003670F4u | kUnwind; return; } goto L_003670F4; } }
L_00367110:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003671CC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00367148; } }
L_00367128:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367128u | kUnwind; return; } goto L_00367128; } }
    c.budget -= 1;
L_00367148:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003671CC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00367180; } }
L_00367160:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367160u | kUnwind; return; } goto L_00367160; } }
    c.budget -= 1;
L_00367180:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003671CC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003671B8; } }
L_00367198:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367198u | kUnwind; return; } goto L_00367198; } }
    c.budget -= 1;
L_003671B8:
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003671CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003671CCu);  if (depth < kMaxDepth) unit_0059(c, 524u, depth + 1u); else { c.pc = 0x00367480u; return; } if (c.pc != 0x003671CCu) [[unlikely]] return; }
L_003671CC:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003673D8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003673D8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00367208; } }
L_003671EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003671ECu | kUnwind; return; } goto L_003671EC; } }
L_00367208:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036728C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00367240; } }
L_00367220:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367220u | kUnwind; return; } goto L_00367220; } }
    c.budget -= 1;
L_00367240:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036728C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00367278; } }
L_00367258:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367258u | kUnwind; return; } goto L_00367258; } }
    c.budget -= 1;
L_00367278:
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036728C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036728Cu);  if (depth < kMaxDepth) unit_0059(c, 524u, depth + 1u); else { c.pc = 0x00367480u; return; } if (c.pc != 0x0036728Cu) [[unlikely]] return; }
L_0036728C:
    set32(c.r[22], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_003673C8; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_003673C8; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003672C8; } }
L_003672AC:
    set32(c.r[2], ld32((c.r[22].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[22].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003672ACu | kUnwind; return; } goto L_003672AC; } }
L_003672C8:
    set32(c.r[3], ld32((c.r[22].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00367314; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00367300; } }
L_003672E0:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003672E0u | kUnwind; return; } goto L_003672E0; } }
    c.budget -= 1;
L_00367300:
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00367314; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367314u);  if (depth < kMaxDepth) unit_0059(c, 524u, depth + 1u); else { c.pc = 0x00367480u; return; } if (c.pc != 0x00367314u) [[unlikely]] return; }
L_00367314:
    set32(c.r[23], ld32((c.r[22].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_003673B8; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_003673B8; } }
    set32(c.r[2], ld32((c.r[23].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00367350; } }
L_00367334:
    set32(c.r[2], ld32((c.r[23].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[23].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[23].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367334u | kUnwind; return; } goto L_00367334; } }
L_00367350:
    set32(c.r[4], ld32((c.r[23].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00367364; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367364u);  if (depth < kMaxDepth) unit_0059(c, 524u, depth + 1u); else { c.pc = 0x00367480u; return; } if (c.pc != 0x00367364u) [[unlikely]] return; }
L_00367364:
    set32(c.r[30], ld32((c.r[23].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_003673A8; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_003673A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367380u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 524u, depth + 1u); else { c.pc = 0x00367480u; return; } if (c.pc != 0x00367380u) [[unlikely]] return; }
L_00367380:
    set32(c.r[4], ld32((c.r[30].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00367394; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367394u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0059(c, 457u, depth + 1u); else { c.pc = 0x00366AA0u; return; } if (c.pc != 0x00367394u) [[unlikely]] return; }
L_00367394:
    set32(c.r[5], ld32((c.r[30].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003673A0u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 523u, depth + 1u); else { c.pc = 0x00367470u; return; } if (c.pc != 0x003673A0u) [[unlikely]] return; }
L_003673A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003673A8u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003673A8u) [[unlikely]] return; }
L_003673A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003673B0u); set32(c.r[4], ld32((c.r[23].w[0])));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003673B0u) [[unlikely]] return; }
L_003673B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003673B8u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003673B8u) [[unlikely]] return; }
L_003673B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003673C0u); set32(c.r[4], ld32((c.r[22].w[0])));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003673C0u) [[unlikely]] return; }
L_003673C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003673C8u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003673C8u) [[unlikely]] return; }
L_003673C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003673D0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003673D0u) [[unlikely]] return; }
L_003673D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003673D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003673D8u) [[unlikely]] return; }
L_003673D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003673E0u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003673E0u) [[unlikely]] return; }
L_003673E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003673E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003673E8u) [[unlikely]] return; }
L_003673E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003673F0u); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003673F0u) [[unlikely]] return; }
L_003673F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003673F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003673F8u) [[unlikely]] return; }
L_003673F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367400u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00367400u) [[unlikely]] return; }
L_00367400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367408u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00367408u) [[unlikely]] return; }
L_00367408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367410u); set32(c.r[4], ld32((c.r[20].w[0])));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00367410u) [[unlikely]] return; }
L_00367410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367418u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00367418u) [[unlikely]] return; }
L_00367418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367420u); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00367420u) [[unlikely]] return; }
L_00367420:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 174u)));
    c.r[2].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00367438; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367438u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00367438u) [[unlikely]] return; }
L_00367438:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00367470:
    c.budget -= 2;
    { c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B170u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 165u, depth); }
L_00367480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003674B0; } }
L_00367494:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367494u | kUnwind; return; } goto L_00367494; } }
L_003674B0:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00367684; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003674E8; } }
L_003674C8:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003674C8u | kUnwind; return; } goto L_003674C8; } }
    c.budget -= 1;
L_003674E8:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00367684; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00367520; } }
L_00367500:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367500u | kUnwind; return; } goto L_00367500; } }
    c.budget -= 1;
L_00367520:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00367684; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00367558; } }
L_00367538:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367538u | kUnwind; return; } goto L_00367538; } }
    c.budget -= 1;
L_00367558:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00367684; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00367590; } }
L_00367570:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367570u | kUnwind; return; } goto L_00367570; } }
    c.budget -= 1;
L_00367590:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00367684; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003675C8; } }
L_003675A8:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003675A8u | kUnwind; return; } goto L_003675A8; } }
    c.budget -= 1;
L_003675C8:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00367684; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00367600; } }
L_003675E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003675E0u | kUnwind; return; } goto L_003675E0; } }
    c.budget -= 1;
L_00367600:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00367684; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00367638; } }
L_00367618:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367618u | kUnwind; return; } goto L_00367618; } }
    c.budget -= 1;
L_00367638:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00367684; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00367670; } }
L_00367650:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367650u | kUnwind; return; } goto L_00367650; } }
    c.budget -= 1;
L_00367670:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00367684; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367684u);  if (depth < kMaxDepth) unit_0059(c, 524u, depth + 1u); else { c.pc = 0x00367480u; return; } if (c.pc != 0x00367684u) [[unlikely]] return; }
L_00367684:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00367690:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003676C8u); set32(c.r[4], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 135u, depth + 1u); else { c.pc = 0x00358D30u; return; } if (c.pc != 0x003676C8u) [[unlikely]] return; }
L_003676C8:
    mmi::divu(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[19].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003677B4; } }
    c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003676E0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00367788; } }
L_003676E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003676F4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x003676F4u) [[unlikely]] return; }
L_003676F4:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367704u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00367704u) [[unlikely]] return; }
L_00367704:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00367730; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367724u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x00367724u) [[unlikely]] return; }
L_00367724:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00367C20; } }
L_00367730:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036773Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x0036773Cu) [[unlikely]] return; }
L_0036773C:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036774Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036774Cu) [[unlikely]] return; }
L_0036774C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00367AB4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367760u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x00367760u) [[unlikely]] return; }
L_00367760:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367770u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00367770u) [[unlikely]] return; }
L_00367770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00367B00; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003676E8u | kUnwind; return; } goto L_003676E8; } }
L_00367788:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036779Cu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0059(c, 610u, depth + 1u); else { c.pc = 0x00367C50u; return; } if (c.pc != 0x0036779Cu) [[unlikely]] return; }
L_0036779C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003677ACu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 535u, depth + 1u); else { c.pc = 0x00367690u; return; } if (c.pc != 0x003677ACu) [[unlikely]] return; }
L_003677AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00367C24; } }
L_003677B4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003677C0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x003677C0u) [[unlikely]] return; }
L_003677C0:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003677D0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003677D0u) [[unlikely]] return; }
L_003677D0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003677FC; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003677F0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x003677F0u) [[unlikely]] return; }
L_003677F0:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00367C20; } }
L_003677FC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367808u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x00367808u) [[unlikely]] return; }
L_00367808:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367818u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00367818u) [[unlikely]] return; }
L_00367818:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00367860; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036782Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x0036782Cu) [[unlikely]] return; }
L_0036782C:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036783Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036783Cu) [[unlikely]] return; }
L_0036783C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003678AC; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003677B4u | kUnwind; return; } goto L_003677B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003676E0u | kUnwind; return; } goto L_003676E0; } }
L_00367860:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036786Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x0036786Cu) [[unlikely]] return; }
L_0036786C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367878u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00367878u) [[unlikely]] return; }
L_00367878:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367884u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x00367884u) [[unlikely]] return; }
L_00367884:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367890u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00367890u) [[unlikely]] return; }
L_00367890:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003678A0; } }
L_00367898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00367C20; } }
L_003678A0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367898u | kUnwind; return; } goto L_00367898; } }
L_003678AC:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00367988; } }
    c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003678C0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00367948; } }
L_003678C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003678D4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x003678D4u) [[unlikely]] return; }
L_003678D4:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003678E4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003678E4u) [[unlikely]] return; }
L_003678E4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00367910; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367904u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x00367904u) [[unlikely]] return; }
L_00367904:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00367C20; } }
L_00367910:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036791Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x0036791Cu) [[unlikely]] return; }
L_0036791C:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036792Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036792Cu) [[unlikely]] return; }
L_0036792C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00367A5C; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003678C8u | kUnwind; return; } goto L_003678C8; } }
    c.budget -= 1;
L_00367948:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367954u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x00367954u) [[unlikely]] return; }
L_00367954:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367960u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00367960u) [[unlikely]] return; }
L_00367960:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036796Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x0036796Cu) [[unlikely]] return; }
L_0036796C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367978u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00367978u) [[unlikely]] return; }
L_00367978:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00367AA8; } }
L_00367980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00367C20; } }
L_00367988:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367994u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x00367994u) [[unlikely]] return; }
L_00367994:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003679A4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003679A4u) [[unlikely]] return; }
L_003679A4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003679D0; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003679C4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x003679C4u) [[unlikely]] return; }
L_003679C4:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00367C20; } }
L_003679D0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003679DCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x003679DCu) [[unlikely]] return; }
L_003679DC:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003679ECu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003679ECu) [[unlikely]] return; }
L_003679EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00367A10; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367988u | kUnwind; return; } goto L_00367988; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003678C0u | kUnwind; return; } goto L_003678C0; } }
L_00367A10:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367A1Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x00367A1Cu) [[unlikely]] return; }
L_00367A1C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367A28u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00367A28u) [[unlikely]] return; }
L_00367A28:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367A34u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x00367A34u) [[unlikely]] return; }
L_00367A34:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367A40u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00367A40u) [[unlikely]] return; }
L_00367A40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00367A50; } }
L_00367A48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00367C20; } }
L_00367A50:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367A48u | kUnwind; return; } goto L_00367A48; } }
L_00367A5C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367A68u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x00367A68u) [[unlikely]] return; }
L_00367A68:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367A74u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00367A74u) [[unlikely]] return; }
L_00367A74:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367A80u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x00367A80u) [[unlikely]] return; }
L_00367A80:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367A8Cu); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00367A8Cu) [[unlikely]] return; }
L_00367A8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00367A9C; } }
L_00367A94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00367C20; } }
L_00367A9C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367A94u | kUnwind; return; } goto L_00367A94; } }
L_00367AA8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367980u | kUnwind; return; } goto L_00367980; } }
L_00367AB4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367AC0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x00367AC0u) [[unlikely]] return; }
L_00367AC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367ACCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00367ACCu) [[unlikely]] return; }
L_00367ACC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367AD8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x00367AD8u) [[unlikely]] return; }
L_00367AD8:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367AE4u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00367AE4u) [[unlikely]] return; }
L_00367AE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00367AF4; } }
L_00367AEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00367C20; } }
L_00367AF4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367AECu | kUnwind; return; } goto L_00367AEC; } }
L_00367B00:
    c.r[1].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00367B88; } }
L_00367B0C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367B18u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x00367B18u) [[unlikely]] return; }
L_00367B18:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367B28u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00367B28u) [[unlikely]] return; }
L_00367B28:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00367B54; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367B48u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x00367B48u) [[unlikely]] return; }
L_00367B48:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00367C20; } }
L_00367B54:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367B60u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x00367B60u) [[unlikely]] return; }
L_00367B60:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367B70u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00367B70u) [[unlikely]] return; }
L_00367B70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00367BC8; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367B0Cu | kUnwind; return; } goto L_00367B0C; } }
L_00367B88:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367B94u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x00367B94u) [[unlikely]] return; }
L_00367B94:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367BA0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00367BA0u) [[unlikely]] return; }
L_00367BA0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367BACu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x00367BACu) [[unlikely]] return; }
L_00367BAC:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367BB8u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00367BB8u) [[unlikely]] return; }
L_00367BB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00367C14; } }
L_00367BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00367C20; } }
L_00367BC8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367BD4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x00367BD4u) [[unlikely]] return; }
L_00367BD4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367BE0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00367BE0u) [[unlikely]] return; }
L_00367BE0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367BECu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x00367BECu) [[unlikely]] return; }
L_00367BEC:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367BF8u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00367BF8u) [[unlikely]] return; }
L_00367BF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00367C08; } }
L_00367C00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00367C20; } }
L_00367C08:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367C00u | kUnwind; return; } goto L_00367C00; } }
L_00367C14:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367BC0u | kUnwind; return; } goto L_00367BC0; } }
L_00367C20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00367C24:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00367C50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367C80u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x00367C80u) [[unlikely]] return; }
L_00367C80:
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367C90u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x00367C90u) [[unlikely]] return; }
L_00367C90:
    st32((c.r[19].w[0]), c.r[16].w[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367CB0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00367CB0u) [[unlikely]] return; }
L_00367CB0:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00367D30; } }
L_00367CC4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[16].d[0];  if (t) { goto L_00367D20; } }
L_00367CCC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367CD8u); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_0059(c, 319u, depth + 1u); else { c.pc = 0x00365DA0u; return; } if (c.pc != 0x00367CD8u) [[unlikely]] return; }
L_00367CD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00367D08; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367CECu); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0059(c, 319u, depth + 1u); else { c.pc = 0x00365DA0u; return; } if (c.pc != 0x00367CECu) [[unlikely]] return; }
L_00367CEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00367D08; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367D04u); set32(c.r[6], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0059(c, 535u, depth + 1u); else { c.pc = 0x00367690u; return; } if (c.pc != 0x00367D04u) [[unlikely]] return; }
L_00367D04:
    c.budget -= 1;
L_00367D08:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367D14u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00367D14u) [[unlikely]] return; }
L_00367D14:
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367CCCu | kUnwind; return; } goto L_00367CCC; } }
L_00367D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367D28u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0011(c, 256u, depth + 1u); else { c.pc = 0x00246260u; return; } if (c.pc != 0x00367D28u) [[unlikely]] return; }
L_00367D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00367D7C; } }
L_00367D30:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367D3Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x00367D3Cu) [[unlikely]] return; }
L_00367D3C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367D48u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00367D48u) [[unlikely]] return; }
L_00367D48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00367D60; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367D5Cu); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x00367D5Cu) [[unlikely]] return; }
L_00367D5C:
    c.budget -= 1;
L_00367D60:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367D30u | kUnwind; return; } goto L_00367D30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367CC4u | kUnwind; return; } goto L_00367CC4; } }
L_00367D7C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00367DA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00367E08; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00367DF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367DD4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00367DD4u) [[unlikely]] return; }
L_00367DD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00367DEC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367DECu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0059(c, 631u, depth + 1u); else { c.pc = 0x00367E50u; return; } if (c.pc != 0x00367DECu) [[unlikely]] return; }
L_00367DEC:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00367DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367E00u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0059(c, 625u, depth + 1u); else { c.pc = 0x00367DA0u; return; } if (c.pc != 0x00367E00u) [[unlikely]] return; }
L_00367E00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00367E40; } }
L_00367E08:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[4], 0u + 240u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367E2Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00367E2Cu) [[unlikely]] return; }
L_00367E2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00367E3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367E3Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 634u, depth + 1u); else { c.pc = 0x00367ED0u; return; } if (c.pc != 0x00367E3Cu) [[unlikely]] return; }
L_00367E3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00367E40:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00367E50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00367E74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_00367E7C; } }
L_00367E74:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_00367E7C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367E8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 633u, depth + 1u); else { c.pc = 0x00367EB0u; return; } if (c.pc != 0x00367E8Cu) [[unlikely]] return; }
L_00367E8C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00367EB0:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00367ED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367EE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005D(c, 150u, depth + 1u); else { c.pc = 0x003752B0u; return; } if (c.pc != 0x00367EE4u) [[unlikely]] return; }
L_00367EE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 8704u);
    st32((c.r[16].w[0] + 236u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00367F10:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367F48u); set32(c.r[4], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 135u, depth + 1u); else { c.pc = 0x00358D30u; return; } if (c.pc != 0x00367F48u) [[unlikely]] return; }
L_00367F48:
    mmi::divu(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[19].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[19].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_005A(c, 5u, depth); } }
    c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00367F60:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_005A(c, 2u, depth); } }
L_00367F68:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367F74u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x00367F74u) [[unlikely]] return; }
L_00367F74:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367F84u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00367F84u) [[unlikely]] return; }
L_00367F84:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00367FB0; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367FA4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x00367FA4u) [[unlikely]] return; }
L_00367FA4:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_005A(c, 69u, depth); } }
L_00367FB0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367FBCu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x00367FBCu) [[unlikely]] return; }
L_00367FBC:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367FCCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00367FCCu) [[unlikely]] return; }
L_00367FCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_005A(c, 46u, depth); } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367FE0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x00367FE0u) [[unlikely]] return; }
L_00367FE0:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367FF0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00367FF0u) [[unlikely]] return; }
L_00367FF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_005A(c, 52u, depth); } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 2;
    [[clang::musttail]] return unit_005A(c, 1u, depth);
}

}

#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_005A[4096] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0,
    0, 15, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0,
    0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0,
    29, 0, 30, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0,
    43, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 0,
    52, 0, 0, 53, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 63, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 75, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0,
    0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 100, 0, 0, 0, 101, 0, 0,
    0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 107, 0, 0, 0, 108, 0, 109, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0,
    0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0,
    120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0,
    0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 133, 0, 134, 0,
    0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 148,
    0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155,
    0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 165, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 170, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 176, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0,
    0, 180, 0, 0, 0, 0, 181, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193,
    0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 202, 0, 0, 0, 203, 0, 0,
    0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 209, 0, 0, 0, 210, 0, 211, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0,
    0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0,
    222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0,
    0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 235, 0, 236, 0,
    0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 250,
    0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257,
    0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0, 267, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 272, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 278, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0,
    0, 282, 0, 0, 0, 0, 283, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305,
    0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0,
    313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316,
    0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 334, 0,
    0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 344, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0,
    347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352,
    0, 0, 353, 0, 0, 354, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 359, 0, 0, 0, 360, 0, 0,
    0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 366,
    0, 0, 367, 0, 368, 0, 369, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 377, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0,
    0, 381, 0, 0, 382, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0, 388, 0, 389,
    0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0,
    395, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 0, 399, 0, 400, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 403,
    0, 0, 404, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 411, 0, 0, 412, 0, 0, 0, 0, 413,
    0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 417, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423,
    0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0,
    0, 0, 432, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0,
    0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0,
    0, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 481, 0, 482, 0, 483, 0, 484, 0, 485, 0, 486, 0, 487, 0, 488, 0, 489, 0, 490, 0,
    491, 0, 492, 0, 493, 0, 494, 0, 495, 0, 496, 0, 497, 0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500,
    501, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 517, 0, 518, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0,
    0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526,
    0, 0, 0, 527, 0, 528, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0, 0, 533, 0,
    0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 537, 0, 0, 538, 0, 0, 539, 0, 540, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 546,
    0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 549, 0, 0, 550, 0, 0, 551, 0, 552, 0, 553, 0, 0, 554, 0, 0,
    0, 555, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559,
    0, 0, 560, 0, 0, 561, 0, 0, 562, 0, 563, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0, 0, 567, 0, 568, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 570, 0, 0, 571, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 575, 0,
    0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0,
    581, 0, 0, 582, 0, 0, 583, 0, 584, 0, 0, 0, 0, 585, 0, 0, 586, 0, 0, 587, 0, 0, 588, 0, 589, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0,
    0, 0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 595, 0, 0, 596, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0,
    0, 0, 600, 0, 601, 0, 0, 602, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0,
    0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 615, 0, 616, 0, 0, 0, 0, 0, 617, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0,
    0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_005A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00368000;
    case 2u: goto L_00368008;
    case 3u: goto L_0036801C;
    case 4u: goto L_0036802C;
    case 5u: goto L_00368034;
    case 6u: goto L_00368040;
    case 7u: goto L_00368050;
    case 8u: goto L_00368070;
    case 9u: goto L_00368088;
    case 10u: goto L_00368098;
    case 11u: goto L_003680AC;
    case 12u: goto L_003680BC;
    case 13u: goto L_003680EC;
    case 14u: goto L_003680F8;
    case 15u: goto L_00368104;
    case 16u: goto L_00368110;
    case 17u: goto L_00368118;
    case 18u: goto L_00368140;
    case 19u: goto L_00368148;
    case 20u: goto L_00368154;
    case 21u: goto L_00368164;
    case 22u: goto L_00368184;
    case 23u: goto L_0036819C;
    case 24u: goto L_003681AC;
    case 25u: goto L_003681D4;
    case 26u: goto L_003681E0;
    case 27u: goto L_003681EC;
    case 28u: goto L_003681F8;
    case 29u: goto L_00368200;
    case 30u: goto L_00368208;
    case 31u: goto L_00368214;
    case 32u: goto L_00368224;
    case 33u: goto L_00368244;
    case 34u: goto L_0036825C;
    case 35u: goto L_0036826C;
    case 36u: goto L_0036829C;
    case 37u: goto L_003682A8;
    case 38u: goto L_003682B4;
    case 39u: goto L_003682C0;
    case 40u: goto L_003682C8;
    case 41u: goto L_003682E8;
    case 42u: goto L_003682F4;
    case 43u: goto L_00368300;
    case 44u: goto L_0036830C;
    case 45u: goto L_00368314;
    case 46u: goto L_00368334;
    case 47u: goto L_00368340;
    case 48u: goto L_0036834C;
    case 49u: goto L_00368358;
    case 50u: goto L_00368364;
    case 51u: goto L_0036836C;
    case 52u: goto L_00368380;
    case 53u: goto L_0036838C;
    case 54u: goto L_00368398;
    case 55u: goto L_003683A8;
    case 56u: goto L_003683C8;
    case 57u: goto L_003683E0;
    case 58u: goto L_003683F0;
    case 59u: goto L_00368414;
    case 60u: goto L_00368420;
    case 61u: goto L_0036842C;
    case 62u: goto L_00368438;
    case 63u: goto L_00368440;
    case 64u: goto L_00368454;
    case 65u: goto L_00368460;
    case 66u: goto L_0036846C;
    case 67u: goto L_00368478;
    case 68u: goto L_00368480;
    case 69u: goto L_003684A0;
    case 70u: goto L_003684D0;
    case 71u: goto L_00368500;
    case 72u: goto L_00368510;
    case 73u: goto L_00368530;
    case 74u: goto L_00368544;
    case 75u: goto L_0036854C;
    case 76u: goto L_00368558;
    case 77u: goto L_0036856C;
    case 78u: goto L_00368584;
    case 79u: goto L_00368594;
    case 80u: goto L_003685A8;
    case 81u: goto L_003685B0;
    case 82u: goto L_003685BC;
    case 83u: goto L_003685C8;
    case 84u: goto L_003685DC;
    case 85u: goto L_00368620;
    case 86u: goto L_00368654;
    case 87u: goto L_0036866C;
    case 88u: goto L_00368680;
    case 89u: goto L_003686A4;
    case 90u: goto L_003686B4;
    case 91u: goto L_003686D0;
    case 92u: goto L_0036870C;
    case 93u: goto L_00368730;
    case 94u: goto L_00368750;
    case 95u: goto L_00368764;
    case 96u: goto L_00368780;
    case 97u: goto L_003687B8;
    case 98u: goto L_003687D0;
    case 99u: goto L_003687D8;
    case 100u: goto L_003687E4;
    case 101u: goto L_003687F4;
    case 102u: goto L_00368814;
    case 103u: goto L_0036882C;
    case 104u: goto L_0036883C;
    case 105u: goto L_00368850;
    case 106u: goto L_00368860;
    case 107u: goto L_0036888C;
    case 108u: goto L_0036889C;
    case 109u: goto L_003688A4;
    case 110u: goto L_003688B0;
    case 111u: goto L_003688C0;
    case 112u: goto L_003688E0;
    case 113u: goto L_003688F8;
    case 114u: goto L_00368908;
    case 115u: goto L_0036891C;
    case 116u: goto L_0036892C;
    case 117u: goto L_0036895C;
    case 118u: goto L_00368968;
    case 119u: goto L_00368974;
    case 120u: goto L_00368980;
    case 121u: goto L_00368988;
    case 122u: goto L_003689B0;
    case 123u: goto L_003689B8;
    case 124u: goto L_003689C4;
    case 125u: goto L_003689D4;
    case 126u: goto L_003689F4;
    case 127u: goto L_00368A0C;
    case 128u: goto L_00368A1C;
    case 129u: goto L_00368A44;
    case 130u: goto L_00368A50;
    case 131u: goto L_00368A5C;
    case 132u: goto L_00368A68;
    case 133u: goto L_00368A70;
    case 134u: goto L_00368A78;
    case 135u: goto L_00368A84;
    case 136u: goto L_00368A94;
    case 137u: goto L_00368AB4;
    case 138u: goto L_00368ACC;
    case 139u: goto L_00368ADC;
    case 140u: goto L_00368B0C;
    case 141u: goto L_00368B18;
    case 142u: goto L_00368B24;
    case 143u: goto L_00368B30;
    case 144u: goto L_00368B38;
    case 145u: goto L_00368B58;
    case 146u: goto L_00368B64;
    case 147u: goto L_00368B70;
    case 148u: goto L_00368B7C;
    case 149u: goto L_00368B84;
    case 150u: goto L_00368BB0;
    case 151u: goto L_00368BBC;
    case 152u: goto L_00368BC8;
    case 153u: goto L_00368BD4;
    case 154u: goto L_00368BDC;
    case 155u: goto L_00368BFC;
    case 156u: goto L_00368C08;
    case 157u: goto L_00368C18;
    case 158u: goto L_00368C38;
    case 159u: goto L_00368C50;
    case 160u: goto L_00368C60;
    case 161u: goto L_00368C84;
    case 162u: goto L_00368C90;
    case 163u: goto L_00368C9C;
    case 164u: goto L_00368CA8;
    case 165u: goto L_00368CB0;
    case 166u: goto L_00368CC4;
    case 167u: goto L_00368CD0;
    case 168u: goto L_00368CDC;
    case 169u: goto L_00368CE8;
    case 170u: goto L_00368CF0;
    case 171u: goto L_00368D40;
    case 172u: goto L_00368D70;
    case 173u: goto L_00368D80;
    case 174u: goto L_00368DA0;
    case 175u: goto L_00368DB4;
    case 176u: goto L_00368DBC;
    case 177u: goto L_00368DC8;
    case 178u: goto L_00368DDC;
    case 179u: goto L_00368DF4;
    case 180u: goto L_00368E04;
    case 181u: goto L_00368E18;
    case 182u: goto L_00368E20;
    case 183u: goto L_00368E2C;
    case 184u: goto L_00368E38;
    case 185u: goto L_00368E4C;
    case 186u: goto L_00368E90;
    case 187u: goto L_00368EC4;
    case 188u: goto L_00368EDC;
    case 189u: goto L_00368EF0;
    case 190u: goto L_00368F14;
    case 191u: goto L_00368F24;
    case 192u: goto L_00368F40;
    case 193u: goto L_00368F7C;
    case 194u: goto L_00368FA0;
    case 195u: goto L_00368FC0;
    case 196u: goto L_00368FD4;
    case 197u: goto L_00368FDC;
    case 198u: goto L_00369000;
    case 199u: goto L_00369038;
    case 200u: goto L_00369050;
    case 201u: goto L_00369058;
    case 202u: goto L_00369064;
    case 203u: goto L_00369074;
    case 204u: goto L_00369094;
    case 205u: goto L_003690AC;
    case 206u: goto L_003690BC;
    case 207u: goto L_003690D0;
    case 208u: goto L_003690E0;
    case 209u: goto L_0036910C;
    case 210u: goto L_0036911C;
    case 211u: goto L_00369124;
    case 212u: goto L_00369130;
    case 213u: goto L_00369140;
    case 214u: goto L_00369160;
    case 215u: goto L_00369178;
    case 216u: goto L_00369188;
    case 217u: goto L_0036919C;
    case 218u: goto L_003691AC;
    case 219u: goto L_003691DC;
    case 220u: goto L_003691E8;
    case 221u: goto L_003691F4;
    case 222u: goto L_00369200;
    case 223u: goto L_00369208;
    case 224u: goto L_00369230;
    case 225u: goto L_00369238;
    case 226u: goto L_00369244;
    case 227u: goto L_00369254;
    case 228u: goto L_00369274;
    case 229u: goto L_0036928C;
    case 230u: goto L_0036929C;
    case 231u: goto L_003692C4;
    case 232u: goto L_003692D0;
    case 233u: goto L_003692DC;
    case 234u: goto L_003692E8;
    case 235u: goto L_003692F0;
    case 236u: goto L_003692F8;
    case 237u: goto L_00369304;
    case 238u: goto L_00369314;
    case 239u: goto L_00369334;
    case 240u: goto L_0036934C;
    case 241u: goto L_0036935C;
    case 242u: goto L_0036938C;
    case 243u: goto L_00369398;
    case 244u: goto L_003693A4;
    case 245u: goto L_003693B0;
    case 246u: goto L_003693B8;
    case 247u: goto L_003693D8;
    case 248u: goto L_003693E4;
    case 249u: goto L_003693F0;
    case 250u: goto L_003693FC;
    case 251u: goto L_00369404;
    case 252u: goto L_00369430;
    case 253u: goto L_0036943C;
    case 254u: goto L_00369448;
    case 255u: goto L_00369454;
    case 256u: goto L_0036945C;
    case 257u: goto L_0036947C;
    case 258u: goto L_00369488;
    case 259u: goto L_00369498;
    case 260u: goto L_003694B8;
    case 261u: goto L_003694D0;
    case 262u: goto L_003694E0;
    case 263u: goto L_00369504;
    case 264u: goto L_00369510;
    case 265u: goto L_0036951C;
    case 266u: goto L_00369528;
    case 267u: goto L_00369530;
    case 268u: goto L_00369544;
    case 269u: goto L_00369550;
    case 270u: goto L_0036955C;
    case 271u: goto L_00369568;
    case 272u: goto L_00369570;
    case 273u: goto L_003695C0;
    case 274u: goto L_003695F0;
    case 275u: goto L_00369600;
    case 276u: goto L_00369620;
    case 277u: goto L_00369634;
    case 278u: goto L_0036963C;
    case 279u: goto L_00369648;
    case 280u: goto L_0036965C;
    case 281u: goto L_00369674;
    case 282u: goto L_00369684;
    case 283u: goto L_00369698;
    case 284u: goto L_003696A0;
    case 285u: goto L_003696AC;
    case 286u: goto L_003696B8;
    case 287u: goto L_003696CC;
    case 288u: goto L_00369710;
    case 289u: goto L_00369748;
    case 290u: goto L_00369794;
    case 291u: goto L_003697D0;
    case 292u: goto L_0036981C;
    case 293u: goto L_00369858;
    case 294u: goto L_003698A4;
    case 295u: goto L_003698E0;
    case 296u: goto L_0036992C;
    case 297u: goto L_00369968;
    case 298u: goto L_003699B4;
    case 299u: goto L_003699F0;
    case 300u: goto L_00369A3C;
    case 301u: goto L_00369A78;
    case 302u: goto L_00369AC4;
    case 303u: goto L_00369B00;
    case 304u: goto L_00369B40;
    case 305u: goto L_00369B7C;
    case 306u: goto L_00369B94;
    case 307u: goto L_00369BA8;
    case 308u: goto L_00369BCC;
    case 309u: goto L_00369BE8;
    case 310u: goto L_00369C18;
    case 311u: goto L_00369C34;
    case 312u: goto L_00369C64;
    case 313u: goto L_00369C80;
    case 314u: goto L_00369CB0;
    case 315u: goto L_00369CCC;
    case 316u: goto L_00369CFC;
    case 317u: goto L_00369D18;
    case 318u: goto L_00369D48;
    case 319u: goto L_00369D64;
    case 320u: goto L_00369D94;
    case 321u: goto L_00369DB0;
    case 322u: goto L_00369DE0;
    case 323u: goto L_00369DFC;
    case 324u: goto L_00369E2C;
    case 325u: goto L_00369E3C;
    case 326u: goto L_00369E60;
    case 327u: goto L_00369EA8;
    case 328u: goto L_00369EC0;
    case 329u: goto L_00369EE0;
    case 330u: goto L_00369F00;
    case 331u: goto L_00369F20;
    case 332u: goto L_00369F58;
    case 333u: goto L_00369F70;
    case 334u: goto L_00369F78;
    case 335u: goto L_00369F84;
    case 336u: goto L_00369F94;
    case 337u: goto L_00369FB4;
    case 338u: goto L_00369FCC;
    case 339u: goto L_00369FDC;
    case 340u: goto L_00369FF0;
    case 341u: goto L_0036A000;
    case 342u: goto L_0036A02C;
    case 343u: goto L_0036A03C;
    case 344u: goto L_0036A044;
    case 345u: goto L_0036A050;
    case 346u: goto L_0036A060;
    case 347u: goto L_0036A080;
    case 348u: goto L_0036A098;
    case 349u: goto L_0036A0A8;
    case 350u: goto L_0036A0BC;
    case 351u: goto L_0036A0CC;
    case 352u: goto L_0036A0FC;
    case 353u: goto L_0036A108;
    case 354u: goto L_0036A114;
    case 355u: goto L_0036A120;
    case 356u: goto L_0036A128;
    case 357u: goto L_0036A150;
    case 358u: goto L_0036A158;
    case 359u: goto L_0036A164;
    case 360u: goto L_0036A174;
    case 361u: goto L_0036A194;
    case 362u: goto L_0036A1AC;
    case 363u: goto L_0036A1BC;
    case 364u: goto L_0036A1E4;
    case 365u: goto L_0036A1F0;
    case 366u: goto L_0036A1FC;
    case 367u: goto L_0036A208;
    case 368u: goto L_0036A210;
    case 369u: goto L_0036A218;
    case 370u: goto L_0036A224;
    case 371u: goto L_0036A234;
    case 372u: goto L_0036A254;
    case 373u: goto L_0036A26C;
    case 374u: goto L_0036A27C;
    case 375u: goto L_0036A2AC;
    case 376u: goto L_0036A2B8;
    case 377u: goto L_0036A2C4;
    case 378u: goto L_0036A2D0;
    case 379u: goto L_0036A2D8;
    case 380u: goto L_0036A2F8;
    case 381u: goto L_0036A304;
    case 382u: goto L_0036A310;
    case 383u: goto L_0036A31C;
    case 384u: goto L_0036A324;
    case 385u: goto L_0036A350;
    case 386u: goto L_0036A35C;
    case 387u: goto L_0036A368;
    case 388u: goto L_0036A374;
    case 389u: goto L_0036A37C;
    case 390u: goto L_0036A39C;
    case 391u: goto L_0036A3A8;
    case 392u: goto L_0036A3B8;
    case 393u: goto L_0036A3D8;
    case 394u: goto L_0036A3F0;
    case 395u: goto L_0036A400;
    case 396u: goto L_0036A424;
    case 397u: goto L_0036A430;
    case 398u: goto L_0036A43C;
    case 399u: goto L_0036A448;
    case 400u: goto L_0036A450;
    case 401u: goto L_0036A464;
    case 402u: goto L_0036A470;
    case 403u: goto L_0036A47C;
    case 404u: goto L_0036A488;
    case 405u: goto L_0036A490;
    case 406u: goto L_0036A4E0;
    case 407u: goto L_0036A510;
    case 408u: goto L_0036A520;
    case 409u: goto L_0036A540;
    case 410u: goto L_0036A554;
    case 411u: goto L_0036A55C;
    case 412u: goto L_0036A568;
    case 413u: goto L_0036A57C;
    case 414u: goto L_0036A594;
    case 415u: goto L_0036A5A4;
    case 416u: goto L_0036A5B8;
    case 417u: goto L_0036A5C0;
    case 418u: goto L_0036A5CC;
    case 419u: goto L_0036A5D8;
    case 420u: goto L_0036A5EC;
    case 421u: goto L_0036A630;
    case 422u: goto L_0036A664;
    case 423u: goto L_0036A67C;
    case 424u: goto L_0036A690;
    case 425u: goto L_0036A6BC;
    case 426u: goto L_0036A6CC;
    case 427u: goto L_0036A6E0;
    case 428u: goto L_0036A71C;
    case 429u: goto L_0036A740;
    case 430u: goto L_0036A760;
    case 431u: goto L_0036A774;
    case 432u: goto L_0036A788;
    case 433u: goto L_0036A790;
    case 434u: goto L_0036A7B0;
    case 435u: goto L_0036A7F4;
    case 436u: goto L_0036A828;
    case 437u: goto L_0036A860;
    case 438u: goto L_0036A898;
    case 439u: goto L_0036A8D0;
    case 440u: goto L_0036A908;
    case 441u: goto L_0036A940;
    case 442u: goto L_0036A978;
    case 443u: goto L_0036A9AC;
    case 444u: goto L_0036A9CC;
    case 445u: goto L_0036AA00;
    case 446u: goto L_0036AA38;
    case 447u: goto L_0036AA70;
    case 448u: goto L_0036AAA8;
    case 449u: goto L_0036AAE0;
    case 450u: goto L_0036AB18;
    case 451u: goto L_0036AB4C;
    case 452u: goto L_0036AB6C;
    case 453u: goto L_0036ABA0;
    case 454u: goto L_0036ABD8;
    case 455u: goto L_0036AC10;
    case 456u: goto L_0036AC48;
    case 457u: goto L_0036AC80;
    case 458u: goto L_0036ACB4;
    case 459u: goto L_0036ACD4;
    case 460u: goto L_0036AD08;
    case 461u: goto L_0036AD40;
    case 462u: goto L_0036AD78;
    case 463u: goto L_0036ADB0;
    case 464u: goto L_0036ADE4;
    case 465u: goto L_0036AE04;
    case 466u: goto L_0036AE38;
    case 467u: goto L_0036AE70;
    case 468u: goto L_0036AEA8;
    case 469u: goto L_0036AEDC;
    case 470u: goto L_0036AEFC;
    case 471u: goto L_0036AF30;
    case 472u: goto L_0036AF68;
    case 473u: goto L_0036AF9C;
    case 474u: goto L_0036AFBC;
    case 475u: goto L_0036AFF0;
    case 476u: goto L_0036B024;
    case 477u: goto L_0036B044;
    case 478u: goto L_0036B074;
    case 479u: goto L_0036B090;
    case 480u: goto L_0036B0A4;
    case 481u: goto L_0036B0B0;
    case 482u: goto L_0036B0B8;
    case 483u: goto L_0036B0C0;
    case 484u: goto L_0036B0C8;
    case 485u: goto L_0036B0D0;
    case 486u: goto L_0036B0D8;
    case 487u: goto L_0036B0E0;
    case 488u: goto L_0036B0E8;
    case 489u: goto L_0036B0F0;
    case 490u: goto L_0036B0F8;
    case 491u: goto L_0036B100;
    case 492u: goto L_0036B108;
    case 493u: goto L_0036B110;
    case 494u: goto L_0036B118;
    case 495u: goto L_0036B120;
    case 496u: goto L_0036B128;
    case 497u: goto L_0036B130;
    case 498u: goto L_0036B13C;
    case 499u: goto L_0036B148;
    case 500u: goto L_0036B17C;
    case 501u: goto L_0036B180;
    case 502u: goto L_0036B190;
    case 503u: goto L_0036B1A4;
    case 504u: goto L_0036B1D8;
    case 505u: goto L_0036B210;
    case 506u: goto L_0036B248;
    case 507u: goto L_0036B280;
    case 508u: goto L_0036B2B8;
    case 509u: goto L_0036B2F0;
    case 510u: goto L_0036B328;
    case 511u: goto L_0036B360;
    case 512u: goto L_0036B394;
    case 513u: goto L_0036B3A0;
    case 514u: goto L_0036B3CC;
    case 515u: goto L_0036B3F0;
    case 516u: goto L_0036B428;
    case 517u: goto L_0036B440;
    case 518u: goto L_0036B448;
    case 519u: goto L_0036B454;
    case 520u: goto L_0036B464;
    case 521u: goto L_0036B484;
    case 522u: goto L_0036B49C;
    case 523u: goto L_0036B4AC;
    case 524u: goto L_0036B4C0;
    case 525u: goto L_0036B4D0;
    case 526u: goto L_0036B4FC;
    case 527u: goto L_0036B50C;
    case 528u: goto L_0036B514;
    case 529u: goto L_0036B520;
    case 530u: goto L_0036B530;
    case 531u: goto L_0036B550;
    case 532u: goto L_0036B568;
    case 533u: goto L_0036B578;
    case 534u: goto L_0036B58C;
    case 535u: goto L_0036B59C;
    case 536u: goto L_0036B5CC;
    case 537u: goto L_0036B5D8;
    case 538u: goto L_0036B5E4;
    case 539u: goto L_0036B5F0;
    case 540u: goto L_0036B5F8;
    case 541u: goto L_0036B620;
    case 542u: goto L_0036B628;
    case 543u: goto L_0036B634;
    case 544u: goto L_0036B644;
    case 545u: goto L_0036B664;
    case 546u: goto L_0036B67C;
    case 547u: goto L_0036B68C;
    case 548u: goto L_0036B6B4;
    case 549u: goto L_0036B6C0;
    case 550u: goto L_0036B6CC;
    case 551u: goto L_0036B6D8;
    case 552u: goto L_0036B6E0;
    case 553u: goto L_0036B6E8;
    case 554u: goto L_0036B6F4;
    case 555u: goto L_0036B704;
    case 556u: goto L_0036B724;
    case 557u: goto L_0036B73C;
    case 558u: goto L_0036B74C;
    case 559u: goto L_0036B77C;
    case 560u: goto L_0036B788;
    case 561u: goto L_0036B794;
    case 562u: goto L_0036B7A0;
    case 563u: goto L_0036B7A8;
    case 564u: goto L_0036B7C8;
    case 565u: goto L_0036B7D4;
    case 566u: goto L_0036B7E0;
    case 567u: goto L_0036B7EC;
    case 568u: goto L_0036B7F4;
    case 569u: goto L_0036B820;
    case 570u: goto L_0036B82C;
    case 571u: goto L_0036B838;
    case 572u: goto L_0036B844;
    case 573u: goto L_0036B84C;
    case 574u: goto L_0036B86C;
    case 575u: goto L_0036B878;
    case 576u: goto L_0036B888;
    case 577u: goto L_0036B8A8;
    case 578u: goto L_0036B8C0;
    case 579u: goto L_0036B8D0;
    case 580u: goto L_0036B8F4;
    case 581u: goto L_0036B900;
    case 582u: goto L_0036B90C;
    case 583u: goto L_0036B918;
    case 584u: goto L_0036B920;
    case 585u: goto L_0036B934;
    case 586u: goto L_0036B940;
    case 587u: goto L_0036B94C;
    case 588u: goto L_0036B958;
    case 589u: goto L_0036B960;
    case 590u: goto L_0036B9B0;
    case 591u: goto L_0036B9E0;
    case 592u: goto L_0036B9F0;
    case 593u: goto L_0036BA10;
    case 594u: goto L_0036BA24;
    case 595u: goto L_0036BA2C;
    case 596u: goto L_0036BA38;
    case 597u: goto L_0036BA4C;
    case 598u: goto L_0036BA64;
    case 599u: goto L_0036BA74;
    case 600u: goto L_0036BA88;
    case 601u: goto L_0036BA90;
    case 602u: goto L_0036BA9C;
    case 603u: goto L_0036BAA8;
    case 604u: goto L_0036BABC;
    case 605u: goto L_0036BB00;
    case 606u: goto L_0036BB34;
    case 607u: goto L_0036BB4C;
    case 608u: goto L_0036BB60;
    case 609u: goto L_0036BB8C;
    case 610u: goto L_0036BB9C;
    case 611u: goto L_0036BBB0;
    case 612u: goto L_0036BBEC;
    case 613u: goto L_0036BC10;
    case 614u: goto L_0036BC30;
    case 615u: goto L_0036BC50;
    case 616u: goto L_0036BC58;
    case 617u: goto L_0036BC70;
    case 618u: goto L_0036BCB4;
    case 619u: goto L_0036BCE8;
    case 620u: goto L_0036BD20;
    case 621u: goto L_0036BD58;
    case 622u: goto L_0036BD90;
    case 623u: goto L_0036BDC8;
    case 624u: goto L_0036BE00;
    case 625u: goto L_0036BE38;
    case 626u: goto L_0036BE6C;
    case 627u: goto L_0036BE8C;
    case 628u: goto L_0036BEC0;
    case 629u: goto L_0036BEF8;
    case 630u: goto L_0036BF30;
    case 631u: goto L_0036BF68;
    case 632u: goto L_0036BFA0;
    case 633u: goto L_0036BFD8;
    default: bad_entry(c, 0x00368000u); return;
    }
L_00368000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367F68u | kUnwind; return; } [[clang::musttail]] return unit_0059(c, 639u, depth); } }
L_00368008:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036801Cu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_005A(c, 70u, depth + 1u); else { c.pc = 0x003684D0u; return; } if (c.pc != 0x0036801Cu) [[unlikely]] return; }
L_0036801C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036802Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0059(c, 636u, depth + 1u); else { c.pc = 0x00367F10u; return; } if (c.pc != 0x0036802Cu) [[unlikely]] return; }
L_0036802C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_003684A4; } }
L_00368034:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368040u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x00368040u) [[unlikely]] return; }
L_00368040:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368050u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00368050u) [[unlikely]] return; }
L_00368050:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036807C; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368070u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x00368070u) [[unlikely]] return; }
L_00368070:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003684A0; } }
L_0036807C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368088u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x00368088u) [[unlikely]] return; }
L_00368088:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368098u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00368098u) [[unlikely]] return; }
L_00368098:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003680E0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003680ACu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x003680ACu) [[unlikely]] return; }
L_003680AC:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003680BCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003680BCu) [[unlikely]] return; }
L_003680BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036812C; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368034u | kUnwind; return; } goto L_00368034; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00367F60u | kUnwind; return; } [[clang::musttail]] return unit_0059(c, 638u, depth); } }
L_003680E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003680ECu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x003680ECu) [[unlikely]] return; }
L_003680EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003680F8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x003680F8u) [[unlikely]] return; }
L_003680F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368104u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x00368104u) [[unlikely]] return; }
L_00368104:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368110u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00368110u) [[unlikely]] return; }
L_00368110:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368120; } }
L_00368118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003684A0; } }
L_00368120:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368118u | kUnwind; return; } goto L_00368118; } }
L_0036812C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00368208; } }
    c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00368140:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003681C8; } }
L_00368148:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368154u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x00368154u) [[unlikely]] return; }
L_00368154:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368164u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00368164u) [[unlikely]] return; }
L_00368164:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368190; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368184u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x00368184u) [[unlikely]] return; }
L_00368184:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003684A0; } }
L_00368190:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036819Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x0036819Cu) [[unlikely]] return; }
L_0036819C:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003681ACu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003681ACu) [[unlikely]] return; }
L_003681AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003682DC; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368148u | kUnwind; return; } goto L_00368148; } }
    c.budget -= 1;
L_003681C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003681D4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x003681D4u) [[unlikely]] return; }
L_003681D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003681E0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x003681E0u) [[unlikely]] return; }
L_003681E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003681ECu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x003681ECu) [[unlikely]] return; }
L_003681EC:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003681F8u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x003681F8u) [[unlikely]] return; }
L_003681F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368328; } }
L_00368200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003684A0; } }
L_00368208:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368214u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x00368214u) [[unlikely]] return; }
L_00368214:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368224u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00368224u) [[unlikely]] return; }
L_00368224:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368250; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368244u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x00368244u) [[unlikely]] return; }
L_00368244:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003684A0; } }
L_00368250:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036825Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x0036825Cu) [[unlikely]] return; }
L_0036825C:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036826Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036826Cu) [[unlikely]] return; }
L_0036826C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368290; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368208u | kUnwind; return; } goto L_00368208; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368140u | kUnwind; return; } goto L_00368140; } }
L_00368290:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036829Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x0036829Cu) [[unlikely]] return; }
L_0036829C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003682A8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x003682A8u) [[unlikely]] return; }
L_003682A8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003682B4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x003682B4u) [[unlikely]] return; }
L_003682B4:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003682C0u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x003682C0u) [[unlikely]] return; }
L_003682C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003682D0; } }
L_003682C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003684A0; } }
L_003682D0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003682C8u | kUnwind; return; } goto L_003682C8; } }
L_003682DC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003682E8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x003682E8u) [[unlikely]] return; }
L_003682E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003682F4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x003682F4u) [[unlikely]] return; }
L_003682F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368300u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x00368300u) [[unlikely]] return; }
L_00368300:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036830Cu); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0036830Cu) [[unlikely]] return; }
L_0036830C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036831C; } }
L_00368314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003684A0; } }
L_0036831C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368314u | kUnwind; return; } goto L_00368314; } }
L_00368328:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368200u | kUnwind; return; } goto L_00368200; } }
L_00368334:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368340u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x00368340u) [[unlikely]] return; }
L_00368340:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036834Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x0036834Cu) [[unlikely]] return; }
L_0036834C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368358u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x00368358u) [[unlikely]] return; }
L_00368358:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368364u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00368364u) [[unlikely]] return; }
L_00368364:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368374; } }
L_0036836C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003684A0; } }
L_00368374:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036836Cu | kUnwind; return; } goto L_0036836C; } }
L_00368380:
    c.r[1].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00368408; } }
L_0036838C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368398u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x00368398u) [[unlikely]] return; }
L_00368398:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003683A8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003683A8u) [[unlikely]] return; }
L_003683A8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003683D4; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003683C8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x003683C8u) [[unlikely]] return; }
L_003683C8:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003684A0; } }
L_003683D4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003683E0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x003683E0u) [[unlikely]] return; }
L_003683E0:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003683F0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003683F0u) [[unlikely]] return; }
L_003683F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368448; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036838Cu | kUnwind; return; } goto L_0036838C; } }
L_00368408:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368414u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x00368414u) [[unlikely]] return; }
L_00368414:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368420u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00368420u) [[unlikely]] return; }
L_00368420:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036842Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x0036842Cu) [[unlikely]] return; }
L_0036842C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368438u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00368438u) [[unlikely]] return; }
L_00368438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368494; } }
L_00368440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003684A0; } }
L_00368448:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368454u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x00368454u) [[unlikely]] return; }
L_00368454:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368460u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00368460u) [[unlikely]] return; }
L_00368460:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036846Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x0036846Cu) [[unlikely]] return; }
L_0036846C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368478u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00368478u) [[unlikely]] return; }
L_00368478:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368488; } }
L_00368480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003684A0; } }
L_00368488:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368480u | kUnwind; return; } goto L_00368480; } }
L_00368494:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368440u | kUnwind; return; } goto L_00368440; } }
L_003684A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003684A4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003684D0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368500u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x00368500u) [[unlikely]] return; }
L_00368500:
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368510u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x00368510u) [[unlikely]] return; }
L_00368510:
    st32((c.r[19].w[0]), c.r[16].w[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368530u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00368530u) [[unlikely]] return; }
L_00368530:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003685B0; } }
L_00368544:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[16].d[0];  if (t) { goto L_003685A0; } }
L_0036854C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368558u); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_0059(c, 319u, depth + 1u); else { c.pc = 0x00365DA0u; return; } if (c.pc != 0x00368558u) [[unlikely]] return; }
L_00368558:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368588; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036856Cu); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0059(c, 319u, depth + 1u); else { c.pc = 0x00365DA0u; return; } if (c.pc != 0x0036856Cu) [[unlikely]] return; }
L_0036856C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368588; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368584u); set32(c.r[6], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0059(c, 636u, depth + 1u); else { c.pc = 0x00367F10u; return; } if (c.pc != 0x00368584u) [[unlikely]] return; }
L_00368584:
    c.budget -= 1;
L_00368588:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368594u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00368594u) [[unlikely]] return; }
L_00368594:
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036854Cu | kUnwind; return; } goto L_0036854C; } }
L_003685A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003685A8u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0011(c, 256u, depth + 1u); else { c.pc = 0x00246260u; return; } if (c.pc != 0x003685A8u) [[unlikely]] return; }
L_003685A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003685FC; } }
L_003685B0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003685BCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x003685BCu) [[unlikely]] return; }
L_003685BC:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003685C8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x003685C8u) [[unlikely]] return; }
L_003685C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003685E0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003685DCu); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x003685DCu) [[unlikely]] return; }
L_003685DC:
    c.budget -= 1;
L_003685E0:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003685B0u | kUnwind; return; } goto L_003685B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368544u | kUnwind; return; } goto L_00368544; } }
L_003685FC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00368620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00368688; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368654u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00368654u) [[unlikely]] return; }
L_00368654:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036866C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036866Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_005A(c, 91u, depth + 1u); else { c.pc = 0x003686D0u; return; } if (c.pc != 0x0036866Cu) [[unlikely]] return; }
L_0036866C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00368678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368680u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_005A(c, 85u, depth + 1u); else { c.pc = 0x00368620u; return; } if (c.pc != 0x00368680u) [[unlikely]] return; }
L_00368680:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003686B8; } }
L_00368688:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003686A4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x003686A4u) [[unlikely]] return; }
L_003686A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003686B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003686B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 94u, depth + 1u); else { c.pc = 0x00368750u; return; } if (c.pc != 0x003686B4u) [[unlikely]] return; }
L_003686B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003686B8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003686D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_003686F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_003686FC; } }
L_003686F4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_003686FC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036870Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 93u, depth + 1u); else { c.pc = 0x00368730u; return; } if (c.pc != 0x0036870Cu) [[unlikely]] return; }
L_0036870C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00368730:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00368750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368764u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0023C180u; return; } if (c.pc != 0x00368764u) [[unlikely]] return; }
L_00368764:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00368780:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003687B8u); set32(c.r[4], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 135u, depth + 1u); else { c.pc = 0x00358D30u; return; } if (c.pc != 0x003687B8u) [[unlikely]] return; }
L_003687B8:
    mmi::divu(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[19].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003688A4; } }
    c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003687D0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00368878; } }
L_003687D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003687E4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x003687E4u) [[unlikely]] return; }
L_003687E4:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003687F4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003687F4u) [[unlikely]] return; }
L_003687F4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368820; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368814u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00368814u) [[unlikely]] return; }
L_00368814:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00368D10; } }
L_00368820:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036882Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x0036882Cu) [[unlikely]] return; }
L_0036882C:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036883Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036883Cu) [[unlikely]] return; }
L_0036883C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368BA4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368850u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00368850u) [[unlikely]] return; }
L_00368850:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368860u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00368860u) [[unlikely]] return; }
L_00368860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368BF0; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003687D8u | kUnwind; return; } goto L_003687D8; } }
L_00368878:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036888Cu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_005A(c, 171u, depth + 1u); else { c.pc = 0x00368D40u; return; } if (c.pc != 0x0036888Cu) [[unlikely]] return; }
L_0036888C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036889Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 96u, depth + 1u); else { c.pc = 0x00368780u; return; } if (c.pc != 0x0036889Cu) [[unlikely]] return; }
L_0036889C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00368D14; } }
L_003688A4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003688B0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x003688B0u) [[unlikely]] return; }
L_003688B0:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003688C0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003688C0u) [[unlikely]] return; }
L_003688C0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003688EC; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003688E0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x003688E0u) [[unlikely]] return; }
L_003688E0:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00368D10; } }
L_003688EC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003688F8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x003688F8u) [[unlikely]] return; }
L_003688F8:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368908u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00368908u) [[unlikely]] return; }
L_00368908:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368950; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036891Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x0036891Cu) [[unlikely]] return; }
L_0036891C:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036892Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036892Cu) [[unlikely]] return; }
L_0036892C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036899C; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003688A4u | kUnwind; return; } goto L_003688A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003687D0u | kUnwind; return; } goto L_003687D0; } }
L_00368950:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036895Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x0036895Cu) [[unlikely]] return; }
L_0036895C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368968u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00368968u) [[unlikely]] return; }
L_00368968:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368974u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00368974u) [[unlikely]] return; }
L_00368974:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368980u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00368980u) [[unlikely]] return; }
L_00368980:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368990; } }
L_00368988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00368D10; } }
L_00368990:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368988u | kUnwind; return; } goto L_00368988; } }
L_0036899C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00368A78; } }
    c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003689B0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00368A38; } }
L_003689B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003689C4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x003689C4u) [[unlikely]] return; }
L_003689C4:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003689D4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003689D4u) [[unlikely]] return; }
L_003689D4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368A00; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003689F4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x003689F4u) [[unlikely]] return; }
L_003689F4:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00368D10; } }
L_00368A00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368A0Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00368A0Cu) [[unlikely]] return; }
L_00368A0C:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368A1Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00368A1Cu) [[unlikely]] return; }
L_00368A1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368B4C; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003689B8u | kUnwind; return; } goto L_003689B8; } }
    c.budget -= 1;
L_00368A38:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368A44u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00368A44u) [[unlikely]] return; }
L_00368A44:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368A50u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00368A50u) [[unlikely]] return; }
L_00368A50:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368A5Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00368A5Cu) [[unlikely]] return; }
L_00368A5C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368A68u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00368A68u) [[unlikely]] return; }
L_00368A68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368B98; } }
L_00368A70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00368D10; } }
L_00368A78:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368A84u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00368A84u) [[unlikely]] return; }
L_00368A84:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368A94u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00368A94u) [[unlikely]] return; }
L_00368A94:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368AC0; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368AB4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00368AB4u) [[unlikely]] return; }
L_00368AB4:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00368D10; } }
L_00368AC0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368ACCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00368ACCu) [[unlikely]] return; }
L_00368ACC:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368ADCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00368ADCu) [[unlikely]] return; }
L_00368ADC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368B00; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368A78u | kUnwind; return; } goto L_00368A78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003689B0u | kUnwind; return; } goto L_003689B0; } }
L_00368B00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368B0Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00368B0Cu) [[unlikely]] return; }
L_00368B0C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368B18u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00368B18u) [[unlikely]] return; }
L_00368B18:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368B24u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00368B24u) [[unlikely]] return; }
L_00368B24:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368B30u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00368B30u) [[unlikely]] return; }
L_00368B30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368B40; } }
L_00368B38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00368D10; } }
L_00368B40:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368B38u | kUnwind; return; } goto L_00368B38; } }
L_00368B4C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368B58u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00368B58u) [[unlikely]] return; }
L_00368B58:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368B64u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00368B64u) [[unlikely]] return; }
L_00368B64:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368B70u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00368B70u) [[unlikely]] return; }
L_00368B70:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368B7Cu); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00368B7Cu) [[unlikely]] return; }
L_00368B7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368B8C; } }
L_00368B84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00368D10; } }
L_00368B8C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368B84u | kUnwind; return; } goto L_00368B84; } }
L_00368B98:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368A70u | kUnwind; return; } goto L_00368A70; } }
L_00368BA4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368BB0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00368BB0u) [[unlikely]] return; }
L_00368BB0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368BBCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00368BBCu) [[unlikely]] return; }
L_00368BBC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368BC8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00368BC8u) [[unlikely]] return; }
L_00368BC8:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368BD4u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00368BD4u) [[unlikely]] return; }
L_00368BD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368BE4; } }
L_00368BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00368D10; } }
L_00368BE4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368BDCu | kUnwind; return; } goto L_00368BDC; } }
L_00368BF0:
    c.r[1].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00368C78; } }
L_00368BFC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368C08u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00368C08u) [[unlikely]] return; }
L_00368C08:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368C18u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00368C18u) [[unlikely]] return; }
L_00368C18:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368C44; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368C38u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00368C38u) [[unlikely]] return; }
L_00368C38:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00368D10; } }
L_00368C44:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368C50u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00368C50u) [[unlikely]] return; }
L_00368C50:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368C60u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00368C60u) [[unlikely]] return; }
L_00368C60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368CB8; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368BFCu | kUnwind; return; } goto L_00368BFC; } }
L_00368C78:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368C84u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00368C84u) [[unlikely]] return; }
L_00368C84:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368C90u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00368C90u) [[unlikely]] return; }
L_00368C90:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368C9Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00368C9Cu) [[unlikely]] return; }
L_00368C9C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368CA8u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00368CA8u) [[unlikely]] return; }
L_00368CA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368D04; } }
L_00368CB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00368D10; } }
L_00368CB8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368CC4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00368CC4u) [[unlikely]] return; }
L_00368CC4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368CD0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00368CD0u) [[unlikely]] return; }
L_00368CD0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368CDCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00368CDCu) [[unlikely]] return; }
L_00368CDC:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368CE8u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00368CE8u) [[unlikely]] return; }
L_00368CE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368CF8; } }
L_00368CF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00368D10; } }
L_00368CF8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368CF0u | kUnwind; return; } goto L_00368CF0; } }
L_00368D04:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368CB0u | kUnwind; return; } goto L_00368CB0; } }
L_00368D10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00368D14:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00368D40:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368D70u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00368D70u) [[unlikely]] return; }
L_00368D70:
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368D80u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00368D80u) [[unlikely]] return; }
L_00368D80:
    st32((c.r[19].w[0]), c.r[16].w[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368DA0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00368DA0u) [[unlikely]] return; }
L_00368DA0:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00368E20; } }
L_00368DB4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[16].d[0];  if (t) { goto L_00368E10; } }
L_00368DBC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368DC8u); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_0059(c, 319u, depth + 1u); else { c.pc = 0x00365DA0u; return; } if (c.pc != 0x00368DC8u) [[unlikely]] return; }
L_00368DC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368DF8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368DDCu); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0059(c, 319u, depth + 1u); else { c.pc = 0x00365DA0u; return; } if (c.pc != 0x00368DDCu) [[unlikely]] return; }
L_00368DDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368DF8; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368DF4u); set32(c.r[6], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_005A(c, 96u, depth + 1u); else { c.pc = 0x00368780u; return; } if (c.pc != 0x00368DF4u) [[unlikely]] return; }
L_00368DF4:
    c.budget -= 1;
L_00368DF8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368E04u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00368E04u) [[unlikely]] return; }
L_00368E04:
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368DBCu | kUnwind; return; } goto L_00368DBC; } }
L_00368E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368E18u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0011(c, 256u, depth + 1u); else { c.pc = 0x00246260u; return; } if (c.pc != 0x00368E18u) [[unlikely]] return; }
L_00368E18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00368E6C; } }
L_00368E20:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368E2Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00368E2Cu) [[unlikely]] return; }
L_00368E2C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368E38u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00368E38u) [[unlikely]] return; }
L_00368E38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368E50; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368E4Cu); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x00368E4Cu) [[unlikely]] return; }
L_00368E4C:
    c.budget -= 1;
L_00368E50:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368E20u | kUnwind; return; } goto L_00368E20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368DB4u | kUnwind; return; } goto L_00368DB4; } }
L_00368E6C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00368E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00368EF8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00368EE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368EC4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00368EC4u) [[unlikely]] return; }
L_00368EC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368EDC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368EDCu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_005A(c, 192u, depth + 1u); else { c.pc = 0x00368F40u; return; } if (c.pc != 0x00368EDCu) [[unlikely]] return; }
L_00368EDC:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00368EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368EF0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_005A(c, 186u, depth + 1u); else { c.pc = 0x00368E90u; return; } if (c.pc != 0x00368EF0u) [[unlikely]] return; }
L_00368EF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00368F28; } }
L_00368EF8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368F14u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00368F14u) [[unlikely]] return; }
L_00368F14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00368F24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368F24u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 195u, depth + 1u); else { c.pc = 0x00368FC0u; return; } if (c.pc != 0x00368F24u) [[unlikely]] return; }
L_00368F24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00368F28:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00368F40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00368F64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_00368F6C; } }
L_00368F64:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_00368F6C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368F7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 194u, depth + 1u); else { c.pc = 0x00368FA0u; return; } if (c.pc != 0x00368F7Cu) [[unlikely]] return; }
L_00368F7C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00368FA0:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00368FC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368FD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0023C180u; return; } if (c.pc != 0x00368FD4u) [[unlikely]] return; }
L_00368FD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368FDCu); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0023C180u; return; } if (c.pc != 0x00368FDCu) [[unlikely]] return; }
L_00368FDC:
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 1u);
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00369000:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369038u); set32(c.r[4], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 135u, depth + 1u); else { c.pc = 0x00358D30u; return; } if (c.pc != 0x00369038u) [[unlikely]] return; }
L_00369038:
    mmi::divu(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[19].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00369124; } }
    c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00369050:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003690F8; } }
L_00369058:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369064u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x00369064u) [[unlikely]] return; }
L_00369064:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369074u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00369074u) [[unlikely]] return; }
L_00369074:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003690A0; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369094u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x00369094u) [[unlikely]] return; }
L_00369094:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00369590; } }
L_003690A0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003690ACu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x003690ACu) [[unlikely]] return; }
L_003690AC:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003690BCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003690BCu) [[unlikely]] return; }
L_003690BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369424; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003690D0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x003690D0u) [[unlikely]] return; }
L_003690D0:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003690E0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003690E0u) [[unlikely]] return; }
L_003690E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369470; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369058u | kUnwind; return; } goto L_00369058; } }
L_003690F8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036910Cu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_005A(c, 273u, depth + 1u); else { c.pc = 0x003695C0u; return; } if (c.pc != 0x0036910Cu) [[unlikely]] return; }
L_0036910C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036911Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 198u, depth + 1u); else { c.pc = 0x00369000u; return; } if (c.pc != 0x0036911Cu) [[unlikely]] return; }
L_0036911C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00369594; } }
L_00369124:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369130u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x00369130u) [[unlikely]] return; }
L_00369130:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369140u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00369140u) [[unlikely]] return; }
L_00369140:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036916C; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369160u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x00369160u) [[unlikely]] return; }
L_00369160:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00369590; } }
L_0036916C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369178u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x00369178u) [[unlikely]] return; }
L_00369178:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369188u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00369188u) [[unlikely]] return; }
L_00369188:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003691D0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036919Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x0036919Cu) [[unlikely]] return; }
L_0036919C:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003691ACu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003691ACu) [[unlikely]] return; }
L_003691AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036921C; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369124u | kUnwind; return; } goto L_00369124; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369050u | kUnwind; return; } goto L_00369050; } }
L_003691D0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003691DCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x003691DCu) [[unlikely]] return; }
L_003691DC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003691E8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x003691E8u) [[unlikely]] return; }
L_003691E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003691F4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x003691F4u) [[unlikely]] return; }
L_003691F4:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369200u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00369200u) [[unlikely]] return; }
L_00369200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369210; } }
L_00369208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00369590; } }
L_00369210:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369208u | kUnwind; return; } goto L_00369208; } }
L_0036921C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003692F8; } }
    c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00369230:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003692B8; } }
L_00369238:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369244u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x00369244u) [[unlikely]] return; }
L_00369244:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369254u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00369254u) [[unlikely]] return; }
L_00369254:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369280; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369274u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x00369274u) [[unlikely]] return; }
L_00369274:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00369590; } }
L_00369280:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036928Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x0036928Cu) [[unlikely]] return; }
L_0036928C:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036929Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036929Cu) [[unlikely]] return; }
L_0036929C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003693CC; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369238u | kUnwind; return; } goto L_00369238; } }
    c.budget -= 1;
L_003692B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003692C4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x003692C4u) [[unlikely]] return; }
L_003692C4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003692D0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x003692D0u) [[unlikely]] return; }
L_003692D0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003692DCu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x003692DCu) [[unlikely]] return; }
L_003692DC:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003692E8u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x003692E8u) [[unlikely]] return; }
L_003692E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369418; } }
L_003692F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00369590; } }
L_003692F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369304u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x00369304u) [[unlikely]] return; }
L_00369304:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369314u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00369314u) [[unlikely]] return; }
L_00369314:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369340; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369334u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x00369334u) [[unlikely]] return; }
L_00369334:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00369590; } }
L_00369340:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036934Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x0036934Cu) [[unlikely]] return; }
L_0036934C:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036935Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036935Cu) [[unlikely]] return; }
L_0036935C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369380; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003692F8u | kUnwind; return; } goto L_003692F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369230u | kUnwind; return; } goto L_00369230; } }
L_00369380:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036938Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x0036938Cu) [[unlikely]] return; }
L_0036938C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369398u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00369398u) [[unlikely]] return; }
L_00369398:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003693A4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x003693A4u) [[unlikely]] return; }
L_003693A4:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003693B0u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x003693B0u) [[unlikely]] return; }
L_003693B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003693C0; } }
L_003693B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00369590; } }
L_003693C0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003693B8u | kUnwind; return; } goto L_003693B8; } }
L_003693CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003693D8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x003693D8u) [[unlikely]] return; }
L_003693D8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003693E4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x003693E4u) [[unlikely]] return; }
L_003693E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003693F0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x003693F0u) [[unlikely]] return; }
L_003693F0:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003693FCu); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x003693FCu) [[unlikely]] return; }
L_003693FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036940C; } }
L_00369404:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00369590; } }
L_0036940C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369404u | kUnwind; return; } goto L_00369404; } }
L_00369418:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003692F0u | kUnwind; return; } goto L_003692F0; } }
L_00369424:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369430u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x00369430u) [[unlikely]] return; }
L_00369430:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036943Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x0036943Cu) [[unlikely]] return; }
L_0036943C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369448u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x00369448u) [[unlikely]] return; }
L_00369448:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369454u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00369454u) [[unlikely]] return; }
L_00369454:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369464; } }
L_0036945C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00369590; } }
L_00369464:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036945Cu | kUnwind; return; } goto L_0036945C; } }
L_00369470:
    c.r[1].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003694F8; } }
L_0036947C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369488u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x00369488u) [[unlikely]] return; }
L_00369488:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369498u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00369498u) [[unlikely]] return; }
L_00369498:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003694C4; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003694B8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x003694B8u) [[unlikely]] return; }
L_003694B8:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00369590; } }
L_003694C4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003694D0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x003694D0u) [[unlikely]] return; }
L_003694D0:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003694E0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003694E0u) [[unlikely]] return; }
L_003694E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369538; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036947Cu | kUnwind; return; } goto L_0036947C; } }
L_003694F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369504u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x00369504u) [[unlikely]] return; }
L_00369504:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369510u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00369510u) [[unlikely]] return; }
L_00369510:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036951Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x0036951Cu) [[unlikely]] return; }
L_0036951C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369528u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00369528u) [[unlikely]] return; }
L_00369528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369584; } }
L_00369530:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00369590; } }
L_00369538:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369544u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x00369544u) [[unlikely]] return; }
L_00369544:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369550u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00369550u) [[unlikely]] return; }
L_00369550:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036955Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x0036955Cu) [[unlikely]] return; }
L_0036955C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369568u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00369568u) [[unlikely]] return; }
L_00369568:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369578; } }
L_00369570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00369590; } }
L_00369578:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369570u | kUnwind; return; } goto L_00369570; } }
L_00369584:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369530u | kUnwind; return; } goto L_00369530; } }
L_00369590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00369594:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003695C0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003695F0u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x003695F0u) [[unlikely]] return; }
L_003695F0:
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369600u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x00369600u) [[unlikely]] return; }
L_00369600:
    st32((c.r[19].w[0]), c.r[16].w[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369620u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00369620u) [[unlikely]] return; }
L_00369620:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003696A0; } }
L_00369634:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[16].d[0];  if (t) { goto L_00369690; } }
L_0036963C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369648u); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_0059(c, 319u, depth + 1u); else { c.pc = 0x00365DA0u; return; } if (c.pc != 0x00369648u) [[unlikely]] return; }
L_00369648:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00369678; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036965Cu); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0059(c, 319u, depth + 1u); else { c.pc = 0x00365DA0u; return; } if (c.pc != 0x0036965Cu) [[unlikely]] return; }
L_0036965C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00369678; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369674u); set32(c.r[6], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_005A(c, 198u, depth + 1u); else { c.pc = 0x00369000u; return; } if (c.pc != 0x00369674u) [[unlikely]] return; }
L_00369674:
    c.budget -= 1;
L_00369678:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369684u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00369684u) [[unlikely]] return; }
L_00369684:
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036963Cu | kUnwind; return; } goto L_0036963C; } }
L_00369690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369698u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0011(c, 256u, depth + 1u); else { c.pc = 0x00246260u; return; } if (c.pc != 0x00369698u) [[unlikely]] return; }
L_00369698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003696EC; } }
L_003696A0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003696ACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x003696ACu) [[unlikely]] return; }
L_003696AC:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003696B8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x003696B8u) [[unlikely]] return; }
L_003696B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003696D0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003696CCu); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x003696CCu) [[unlikely]] return; }
L_003696CC:
    c.budget -= 1;
L_003696D0:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003696A0u | kUnwind; return; } goto L_003696A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369634u | kUnwind; return; } goto L_00369634; } }
L_003696EC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00369710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00369BB0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003697A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369748u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00369748u) [[unlikely]] return; }
L_00369748:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00369798; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_00369770; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00369778; } }
L_00369770:
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_00369778:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369794u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00369794u) [[unlikely]] return; }
L_00369794:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00369798:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_003697A4:
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369BFC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036982C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003697D0u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003697D0u) [[unlikely]] return; }
L_003697D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00369820; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_003697F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00369800; } }
L_003697F8:
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_00369800:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036981Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0036981Cu) [[unlikely]] return; }
L_0036981C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00369820:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_0036982C:
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369C48; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003698B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369858u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00369858u) [[unlikely]] return; }
L_00369858:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003698A8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_00369880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00369888; } }
L_00369880:
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_00369888:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003698A4u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003698A4u) [[unlikely]] return; }
L_003698A4:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003698A8:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_003698B4:
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369C94; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036993C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003698E0u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003698E0u) [[unlikely]] return; }
L_003698E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00369930; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_00369908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00369910; } }
L_00369908:
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_00369910:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036992Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0036992Cu) [[unlikely]] return; }
L_0036992C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00369930:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_0036993C:
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369CE0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003699C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369968u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00369968u) [[unlikely]] return; }
L_00369968:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003699B8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_00369990; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00369998; } }
L_00369990:
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_00369998:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003699B4u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003699B4u) [[unlikely]] return; }
L_003699B4:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003699B8:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_003699C4:
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369D2C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369A4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003699F0u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003699F0u) [[unlikely]] return; }
L_003699F0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00369A40; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_00369A18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00369A20; } }
L_00369A18:
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_00369A20:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369A3Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00369A3Cu) [[unlikely]] return; }
L_00369A3C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00369A40:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_00369A4C:
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369D78; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369AD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369A78u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00369A78u) [[unlikely]] return; }
L_00369A78:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00369AC8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_00369AA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00369AA8; } }
L_00369AA0:
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_00369AA8:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369AC4u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00369AC4u) [[unlikely]] return; }
L_00369AC4:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00369AC8:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_00369AD4:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369DC4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369B50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369B00u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00369B00u) [[unlikely]] return; }
L_00369B00:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00369B44; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_00369B28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00369B30; } }
L_00369B28:
    set32(c.r[2], 0u + 8u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_00369B30:
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369B40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 330u, depth + 1u); else { c.pc = 0x00369F00u; return; } if (c.pc != 0x00369B40u) [[unlikely]] return; }
L_00369B40:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00369B44:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00369B50:
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369E10; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369BA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369B7Cu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00369B7Cu) [[unlikely]] return; }
L_00369B7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00369B94; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369B94u); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_005A(c, 326u, depth + 1u); else { c.pc = 0x00369E60u; return; } if (c.pc != 0x00369B94u) [[unlikely]] return; }
L_00369B94:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00369BA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369BA8u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_005A(c, 288u, depth + 1u); else { c.pc = 0x00369710u; return; } if (c.pc != 0x00369BA8u) [[unlikely]] return; }
L_00369BA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00369E48; } }
L_00369BB0:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00369BD4; } }
L_00369BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00369E44; } }
L_00369BD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 10216u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369BE8u); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0023C180u; return; } if (c.pc != 0x00369BE8u) [[unlikely]] return; }
L_00369BE8:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369BCCu | kUnwind; return; } goto L_00369BCC; } }
L_00369BFC:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00369C20; } }
L_00369C18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369BA8u | kUnwind; return; } goto L_00369BA8; } }
L_00369C20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 10216u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369C34u); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0023C180u; return; } if (c.pc != 0x00369C34u) [[unlikely]] return; }
L_00369C34:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369C18u | kUnwind; return; } goto L_00369C18; } }
L_00369C48:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00369C6C; } }
L_00369C64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369BA8u | kUnwind; return; } goto L_00369BA8; } }
L_00369C6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 10216u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369C80u); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0023C180u; return; } if (c.pc != 0x00369C80u) [[unlikely]] return; }
L_00369C80:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369C64u | kUnwind; return; } goto L_00369C64; } }
L_00369C94:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00369CB8; } }
L_00369CB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369BA8u | kUnwind; return; } goto L_00369BA8; } }
L_00369CB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 10216u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369CCCu); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0023C180u; return; } if (c.pc != 0x00369CCCu) [[unlikely]] return; }
L_00369CCC:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369CB0u | kUnwind; return; } goto L_00369CB0; } }
L_00369CE0:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00369D04; } }
L_00369CFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369BA8u | kUnwind; return; } goto L_00369BA8; } }
L_00369D04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 10216u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369D18u); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0023C180u; return; } if (c.pc != 0x00369D18u) [[unlikely]] return; }
L_00369D18:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369CFCu | kUnwind; return; } goto L_00369CFC; } }
L_00369D2C:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00369D50; } }
L_00369D48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369BA8u | kUnwind; return; } goto L_00369BA8; } }
L_00369D50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 10216u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369D64u); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0023C180u; return; } if (c.pc != 0x00369D64u) [[unlikely]] return; }
L_00369D64:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369D48u | kUnwind; return; } goto L_00369D48; } }
L_00369D78:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00369D9C; } }
L_00369D94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369BA8u | kUnwind; return; } goto L_00369BA8; } }
L_00369D9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 10216u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369DB0u); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0023C180u; return; } if (c.pc != 0x00369DB0u) [[unlikely]] return; }
L_00369DB0:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369D94u | kUnwind; return; } goto L_00369D94; } }
L_00369DC4:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00369DE8; } }
L_00369DE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369BA8u | kUnwind; return; } goto L_00369BA8; } }
L_00369DE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 10216u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369DFCu); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0023C180u; return; } if (c.pc != 0x00369DFCu) [[unlikely]] return; }
L_00369DFC:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369DE0u | kUnwind; return; } goto L_00369DE0; } }
L_00369E10:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 16u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369E2Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00369E2Cu) [[unlikely]] return; }
L_00369E2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369BA8u | kUnwind; return; } goto L_00369BA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369E3Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 328u, depth + 1u); else { c.pc = 0x00369EC0u; return; } if (c.pc != 0x00369E3Cu) [[unlikely]] return; }
L_00369E3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369BA8u | kUnwind; return; } goto L_00369BA8; } }
L_00369E44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00369E48:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00369E60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00369E84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_00369E8C; } }
L_00369E84:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_00369E8C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369EA8u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00369EA8u) [[unlikely]] return; }
L_00369EA8:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00369EC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 10216u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369EE0u); st32((c.r[4].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0023C180u; return; } if (c.pc != 0x00369EE0u) [[unlikely]] return; }
L_00369EE0:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00369F00:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00369F20:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369F58u); set32(c.r[4], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 135u, depth + 1u); else { c.pc = 0x00358D30u; return; } if (c.pc != 0x00369F58u) [[unlikely]] return; }
L_00369F58:
    mmi::divu(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[19].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0036A044; } }
    c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00369F70:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0036A018; } }
L_00369F78:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369F84u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x00369F84u) [[unlikely]] return; }
L_00369F84:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369F94u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00369F94u) [[unlikely]] return; }
L_00369F94:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00369FC0; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369FB4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x00369FB4u) [[unlikely]] return; }
L_00369FB4:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036A4B0; } }
L_00369FC0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369FCCu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x00369FCCu) [[unlikely]] return; }
L_00369FCC:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369FDCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00369FDCu) [[unlikely]] return; }
L_00369FDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A344; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369FF0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x00369FF0u) [[unlikely]] return; }
L_00369FF0:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A000u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036A000u) [[unlikely]] return; }
L_0036A000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A390; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369F78u | kUnwind; return; } goto L_00369F78; } }
L_0036A018:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A02Cu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_005A(c, 406u, depth + 1u); else { c.pc = 0x0036A4E0u; return; } if (c.pc != 0x0036A02Cu) [[unlikely]] return; }
L_0036A02C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A03Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 331u, depth + 1u); else { c.pc = 0x00369F20u; return; } if (c.pc != 0x0036A03Cu) [[unlikely]] return; }
L_0036A03C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0036A4B4; } }
L_0036A044:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A050u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A050u) [[unlikely]] return; }
L_0036A050:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A060u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036A060u) [[unlikely]] return; }
L_0036A060:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A08C; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A080u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A080u) [[unlikely]] return; }
L_0036A080:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036A4B0; } }
L_0036A08C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A098u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A098u) [[unlikely]] return; }
L_0036A098:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A0A8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036A0A8u) [[unlikely]] return; }
L_0036A0A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A0F0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A0BCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A0BCu) [[unlikely]] return; }
L_0036A0BC:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A0CCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036A0CCu) [[unlikely]] return; }
L_0036A0CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A13C; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A044u | kUnwind; return; } goto L_0036A044; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369F70u | kUnwind; return; } goto L_00369F70; } }
L_0036A0F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A0FCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A0FCu) [[unlikely]] return; }
L_0036A0FC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A108u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x0036A108u) [[unlikely]] return; }
L_0036A108:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A114u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A114u) [[unlikely]] return; }
L_0036A114:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A120u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0036A120u) [[unlikely]] return; }
L_0036A120:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A130; } }
L_0036A128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036A4B0; } }
L_0036A130:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A128u | kUnwind; return; } goto L_0036A128; } }
L_0036A13C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0036A218; } }
    c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0036A150:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0036A1D8; } }
L_0036A158:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A164u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A164u) [[unlikely]] return; }
L_0036A164:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A174u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036A174u) [[unlikely]] return; }
L_0036A174:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A1A0; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A194u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A194u) [[unlikely]] return; }
L_0036A194:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036A4B0; } }
L_0036A1A0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A1ACu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A1ACu) [[unlikely]] return; }
L_0036A1AC:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A1BCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036A1BCu) [[unlikely]] return; }
L_0036A1BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A2EC; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A158u | kUnwind; return; } goto L_0036A158; } }
    c.budget -= 1;
L_0036A1D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A1E4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A1E4u) [[unlikely]] return; }
L_0036A1E4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A1F0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x0036A1F0u) [[unlikely]] return; }
L_0036A1F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A1FCu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A1FCu) [[unlikely]] return; }
L_0036A1FC:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A208u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0036A208u) [[unlikely]] return; }
L_0036A208:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A338; } }
L_0036A210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036A4B0; } }
L_0036A218:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A224u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A224u) [[unlikely]] return; }
L_0036A224:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A234u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036A234u) [[unlikely]] return; }
L_0036A234:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A260; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A254u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A254u) [[unlikely]] return; }
L_0036A254:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036A4B0; } }
L_0036A260:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A26Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A26Cu) [[unlikely]] return; }
L_0036A26C:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A27Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036A27Cu) [[unlikely]] return; }
L_0036A27C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A2A0; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A218u | kUnwind; return; } goto L_0036A218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A150u | kUnwind; return; } goto L_0036A150; } }
L_0036A2A0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A2ACu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A2ACu) [[unlikely]] return; }
L_0036A2AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A2B8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x0036A2B8u) [[unlikely]] return; }
L_0036A2B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A2C4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A2C4u) [[unlikely]] return; }
L_0036A2C4:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A2D0u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0036A2D0u) [[unlikely]] return; }
L_0036A2D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A2E0; } }
L_0036A2D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036A4B0; } }
L_0036A2E0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A2D8u | kUnwind; return; } goto L_0036A2D8; } }
L_0036A2EC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A2F8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A2F8u) [[unlikely]] return; }
L_0036A2F8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A304u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x0036A304u) [[unlikely]] return; }
L_0036A304:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A310u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A310u) [[unlikely]] return; }
L_0036A310:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A31Cu); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0036A31Cu) [[unlikely]] return; }
L_0036A31C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A32C; } }
L_0036A324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036A4B0; } }
L_0036A32C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A324u | kUnwind; return; } goto L_0036A324; } }
L_0036A338:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A210u | kUnwind; return; } goto L_0036A210; } }
L_0036A344:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A350u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A350u) [[unlikely]] return; }
L_0036A350:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A35Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x0036A35Cu) [[unlikely]] return; }
L_0036A35C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A368u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A368u) [[unlikely]] return; }
L_0036A368:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A374u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0036A374u) [[unlikely]] return; }
L_0036A374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A384; } }
L_0036A37C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036A4B0; } }
L_0036A384:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A37Cu | kUnwind; return; } goto L_0036A37C; } }
L_0036A390:
    c.r[1].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0036A418; } }
L_0036A39C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A3A8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A3A8u) [[unlikely]] return; }
L_0036A3A8:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A3B8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036A3B8u) [[unlikely]] return; }
L_0036A3B8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A3E4; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A3D8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A3D8u) [[unlikely]] return; }
L_0036A3D8:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036A4B0; } }
L_0036A3E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A3F0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A3F0u) [[unlikely]] return; }
L_0036A3F0:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A400u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036A400u) [[unlikely]] return; }
L_0036A400:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A458; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A39Cu | kUnwind; return; } goto L_0036A39C; } }
L_0036A418:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A424u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A424u) [[unlikely]] return; }
L_0036A424:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A430u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x0036A430u) [[unlikely]] return; }
L_0036A430:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A43Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A43Cu) [[unlikely]] return; }
L_0036A43C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A448u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0036A448u) [[unlikely]] return; }
L_0036A448:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A4A4; } }
L_0036A450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036A4B0; } }
L_0036A458:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A464u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A464u) [[unlikely]] return; }
L_0036A464:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A470u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x0036A470u) [[unlikely]] return; }
L_0036A470:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A47Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A47Cu) [[unlikely]] return; }
L_0036A47C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A488u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0036A488u) [[unlikely]] return; }
L_0036A488:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A498; } }
L_0036A490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036A4B0; } }
L_0036A498:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A490u | kUnwind; return; } goto L_0036A490; } }
L_0036A4A4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A450u | kUnwind; return; } goto L_0036A450; } }
L_0036A4B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0036A4B4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0036A4E0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A510u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A510u) [[unlikely]] return; }
L_0036A510:
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A520u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A520u) [[unlikely]] return; }
L_0036A520:
    st32((c.r[19].w[0]), c.r[16].w[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A540u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0036A540u) [[unlikely]] return; }
L_0036A540:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0036A5C0; } }
L_0036A554:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[16].d[0];  if (t) { goto L_0036A5B0; } }
L_0036A55C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A568u); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_0059(c, 319u, depth + 1u); else { c.pc = 0x00365DA0u; return; } if (c.pc != 0x0036A568u) [[unlikely]] return; }
L_0036A568:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A598; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A57Cu); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0059(c, 319u, depth + 1u); else { c.pc = 0x00365DA0u; return; } if (c.pc != 0x0036A57Cu) [[unlikely]] return; }
L_0036A57C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A598; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A594u); set32(c.r[6], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_005A(c, 331u, depth + 1u); else { c.pc = 0x00369F20u; return; } if (c.pc != 0x0036A594u) [[unlikely]] return; }
L_0036A594:
    c.budget -= 1;
L_0036A598:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A5A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x0036A5A4u) [[unlikely]] return; }
L_0036A5A4:
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A55Cu | kUnwind; return; } goto L_0036A55C; } }
L_0036A5B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A5B8u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0011(c, 256u, depth + 1u); else { c.pc = 0x00246260u; return; } if (c.pc != 0x0036A5B8u) [[unlikely]] return; }
L_0036A5B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0036A60C; } }
L_0036A5C0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A5CCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x0036A5CCu) [[unlikely]] return; }
L_0036A5CC:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A5D8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0036A5D8u) [[unlikely]] return; }
L_0036A5D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A5F0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A5ECu); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x0036A5ECu) [[unlikely]] return; }
L_0036A5EC:
    c.budget -= 1;
L_0036A5F0:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A5C0u | kUnwind; return; } goto L_0036A5C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A554u | kUnwind; return; } goto L_0036A554; } }
L_0036A60C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0036A630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0036A698; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A688; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A664u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0036A664u) [[unlikely]] return; }
L_0036A664:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A67C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A67Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_005A(c, 427u, depth + 1u); else { c.pc = 0x0036A6E0u; return; } if (c.pc != 0x0036A67Cu) [[unlikely]] return; }
L_0036A67C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0036A688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A690u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_005A(c, 421u, depth + 1u); else { c.pc = 0x0036A630u; return; } if (c.pc != 0x0036A690u) [[unlikely]] return; }
L_0036A690:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0036A6D0; } }
L_0036A698:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[4], 0u + 40u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A6BCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0036A6BCu) [[unlikely]] return; }
L_0036A6BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A6CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A6CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 430u, depth + 1u); else { c.pc = 0x0036A760u; return; } if (c.pc != 0x0036A6CCu) [[unlikely]] return; }
L_0036A6CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0036A6D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036A6E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0036A704; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0036A70C; } }
L_0036A704:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0036A70C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A71Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 429u, depth + 1u); else { c.pc = 0x0036A740u; return; } if (c.pc != 0x0036A71Cu) [[unlikely]] return; }
L_0036A71C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036A740:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0036A760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A774u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 403u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x0036A774u) [[unlikely]] return; }
L_0036A774:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[16].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] - 9920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A788u); st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0023C180u; return; } if (c.pc != 0x0036A788u) [[unlikely]] return; }
L_0036A788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A790u); set32(c.r[4], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_005A(c, 513u, depth + 1u); else { c.pc = 0x0036B3A0u; return; } if (c.pc != 0x0036A790u) [[unlikely]] return; }
L_0036A790:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036A7B0:
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
    { const bool t = c.r[21].d[0] == 0ull; st16((c.r[29].w[0] + 174u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_0036B148; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A810; } }
L_0036A7F4:
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[21].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A7F4u | kUnwind; return; } goto L_0036A7F4; } }
L_0036A810:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036A9AC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A848; } }
L_0036A828:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A828u | kUnwind; return; } goto L_0036A828; } }
    c.budget -= 1;
L_0036A848:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036A9AC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A880; } }
L_0036A860:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A860u | kUnwind; return; } goto L_0036A860; } }
    c.budget -= 1;
L_0036A880:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036A9AC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A8B8; } }
L_0036A898:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A898u | kUnwind; return; } goto L_0036A898; } }
    c.budget -= 1;
L_0036A8B8:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036A9AC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A8F0; } }
L_0036A8D0:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A8D0u | kUnwind; return; } goto L_0036A8D0; } }
    c.budget -= 1;
L_0036A8F0:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036A9AC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A928; } }
L_0036A908:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A908u | kUnwind; return; } goto L_0036A908; } }
    c.budget -= 1;
L_0036A928:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036A9AC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A960; } }
L_0036A940:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A940u | kUnwind; return; } goto L_0036A940; } }
    c.budget -= 1;
L_0036A960:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036A9AC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A998; } }
L_0036A978:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A978u | kUnwind; return; } goto L_0036A978; } }
    c.budget -= 1;
L_0036A998:
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036A9AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A9ACu);  if (depth < kMaxDepth) unit_005A(c, 502u, depth + 1u); else { c.pc = 0x0036B190u; return; } if (c.pc != 0x0036A9ACu) [[unlikely]] return; }
L_0036A9AC:
    set32(c.r[20], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0036B128; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0036B128; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A9E8; } }
L_0036A9CC:
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[20].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036A9CCu | kUnwind; return; } goto L_0036A9CC; } }
L_0036A9E8:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036AB4C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AA20; } }
L_0036AA00:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AA00u | kUnwind; return; } goto L_0036AA00; } }
    c.budget -= 1;
L_0036AA20:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036AB4C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AA58; } }
L_0036AA38:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AA38u | kUnwind; return; } goto L_0036AA38; } }
    c.budget -= 1;
L_0036AA58:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036AB4C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AA90; } }
L_0036AA70:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AA70u | kUnwind; return; } goto L_0036AA70; } }
    c.budget -= 1;
L_0036AA90:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036AB4C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AAC8; } }
L_0036AAA8:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AAA8u | kUnwind; return; } goto L_0036AAA8; } }
    c.budget -= 1;
L_0036AAC8:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036AB4C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AB00; } }
L_0036AAE0:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AAE0u | kUnwind; return; } goto L_0036AAE0; } }
    c.budget -= 1;
L_0036AB00:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036AB4C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AB38; } }
L_0036AB18:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AB18u | kUnwind; return; } goto L_0036AB18; } }
    c.budget -= 1;
L_0036AB38:
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036AB4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AB4Cu);  if (depth < kMaxDepth) unit_005A(c, 502u, depth + 1u); else { c.pc = 0x0036B190u; return; } if (c.pc != 0x0036AB4Cu) [[unlikely]] return; }
L_0036AB4C:
    set32(c.r[19], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0036B118; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0036B118; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AB88; } }
L_0036AB6C:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AB6Cu | kUnwind; return; } goto L_0036AB6C; } }
L_0036AB88:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036ACB4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036ABC0; } }
L_0036ABA0:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036ABA0u | kUnwind; return; } goto L_0036ABA0; } }
    c.budget -= 1;
L_0036ABC0:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036ACB4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036ABF8; } }
L_0036ABD8:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036ABD8u | kUnwind; return; } goto L_0036ABD8; } }
    c.budget -= 1;
L_0036ABF8:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036ACB4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AC30; } }
L_0036AC10:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AC10u | kUnwind; return; } goto L_0036AC10; } }
    c.budget -= 1;
L_0036AC30:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036ACB4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AC68; } }
L_0036AC48:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AC48u | kUnwind; return; } goto L_0036AC48; } }
    c.budget -= 1;
L_0036AC68:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036ACB4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036ACA0; } }
L_0036AC80:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AC80u | kUnwind; return; } goto L_0036AC80; } }
    c.budget -= 1;
L_0036ACA0:
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036ACB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ACB4u);  if (depth < kMaxDepth) unit_005A(c, 502u, depth + 1u); else { c.pc = 0x0036B190u; return; } if (c.pc != 0x0036ACB4u) [[unlikely]] return; }
L_0036ACB4:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0036B108; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0036B108; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036ACF0; } }
L_0036ACD4:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036ACD4u | kUnwind; return; } goto L_0036ACD4; } }
L_0036ACF0:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036ADE4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AD28; } }
L_0036AD08:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AD08u | kUnwind; return; } goto L_0036AD08; } }
    c.budget -= 1;
L_0036AD28:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036ADE4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AD60; } }
L_0036AD40:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AD40u | kUnwind; return; } goto L_0036AD40; } }
    c.budget -= 1;
L_0036AD60:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036ADE4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AD98; } }
L_0036AD78:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AD78u | kUnwind; return; } goto L_0036AD78; } }
    c.budget -= 1;
L_0036AD98:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036ADE4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036ADD0; } }
L_0036ADB0:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036ADB0u | kUnwind; return; } goto L_0036ADB0; } }
    c.budget -= 1;
L_0036ADD0:
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036ADE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ADE4u);  if (depth < kMaxDepth) unit_005A(c, 502u, depth + 1u); else { c.pc = 0x0036B190u; return; } if (c.pc != 0x0036ADE4u) [[unlikely]] return; }
L_0036ADE4:
    set32(c.r[17], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0036B0F8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0036B0F8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AE20; } }
L_0036AE04:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AE04u | kUnwind; return; } goto L_0036AE04; } }
L_0036AE20:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036AEDC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AE58; } }
L_0036AE38:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AE38u | kUnwind; return; } goto L_0036AE38; } }
    c.budget -= 1;
L_0036AE58:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036AEDC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AE90; } }
L_0036AE70:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AE70u | kUnwind; return; } goto L_0036AE70; } }
    c.budget -= 1;
L_0036AE90:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036AEDC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AEC8; } }
L_0036AEA8:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AEA8u | kUnwind; return; } goto L_0036AEA8; } }
    c.budget -= 1;
L_0036AEC8:
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036AEDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AEDCu);  if (depth < kMaxDepth) unit_005A(c, 502u, depth + 1u); else { c.pc = 0x0036B190u; return; } if (c.pc != 0x0036AEDCu) [[unlikely]] return; }
L_0036AEDC:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0036B0E8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0036B0E8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AF18; } }
L_0036AEFC:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AEFCu | kUnwind; return; } goto L_0036AEFC; } }
L_0036AF18:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036AF9C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AF50; } }
L_0036AF30:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AF30u | kUnwind; return; } goto L_0036AF30; } }
    c.budget -= 1;
L_0036AF50:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036AF9C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AF88; } }
L_0036AF68:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AF68u | kUnwind; return; } goto L_0036AF68; } }
    c.budget -= 1;
L_0036AF88:
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036AF9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AF9Cu);  if (depth < kMaxDepth) unit_005A(c, 502u, depth + 1u); else { c.pc = 0x0036B190u; return; } if (c.pc != 0x0036AF9Cu) [[unlikely]] return; }
L_0036AF9C:
    set32(c.r[22], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_0036B0D8; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_0036B0D8; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AFD8; } }
L_0036AFBC:
    set32(c.r[2], ld32((c.r[22].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[22].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AFBCu | kUnwind; return; } goto L_0036AFBC; } }
L_0036AFD8:
    set32(c.r[3], ld32((c.r[22].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036B024; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036B010; } }
L_0036AFF0:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036AFF0u | kUnwind; return; } goto L_0036AFF0; } }
    c.budget -= 1;
L_0036B010:
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B024; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B024u);  if (depth < kMaxDepth) unit_005A(c, 502u, depth + 1u); else { c.pc = 0x0036B190u; return; } if (c.pc != 0x0036B024u) [[unlikely]] return; }
L_0036B024:
    set32(c.r[23], ld32((c.r[22].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_0036B0C8; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_0036B0C8; } }
    set32(c.r[2], ld32((c.r[23].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036B060; } }
L_0036B044:
    set32(c.r[2], ld32((c.r[23].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[23].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[23].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B044u | kUnwind; return; } goto L_0036B044; } }
L_0036B060:
    set32(c.r[4], ld32((c.r[23].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B074; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B074u);  if (depth < kMaxDepth) unit_005A(c, 502u, depth + 1u); else { c.pc = 0x0036B190u; return; } if (c.pc != 0x0036B074u) [[unlikely]] return; }
L_0036B074:
    set32(c.r[30], ld32((c.r[23].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_0036B0B8; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_0036B0B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B090u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 502u, depth + 1u); else { c.pc = 0x0036B190u; return; } if (c.pc != 0x0036B090u) [[unlikely]] return; }
L_0036B090:
    set32(c.r[4], ld32((c.r[30].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B0A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B0A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_005A(c, 434u, depth + 1u); else { c.pc = 0x0036A7B0u; return; } if (c.pc != 0x0036B0A4u) [[unlikely]] return; }
L_0036B0A4:
    set32(c.r[5], ld32((c.r[30].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B0B0u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 501u, depth + 1u); else { c.pc = 0x0036B180u; return; } if (c.pc != 0x0036B0B0u) [[unlikely]] return; }
L_0036B0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B0B8u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0036B0B8u) [[unlikely]] return; }
L_0036B0B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B0C0u); set32(c.r[4], ld32((c.r[23].w[0])));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0036B0C0u) [[unlikely]] return; }
L_0036B0C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B0C8u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0036B0C8u) [[unlikely]] return; }
L_0036B0C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B0D0u); set32(c.r[4], ld32((c.r[22].w[0])));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0036B0D0u) [[unlikely]] return; }
L_0036B0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B0D8u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0036B0D8u) [[unlikely]] return; }
L_0036B0D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B0E0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0036B0E0u) [[unlikely]] return; }
L_0036B0E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B0E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0036B0E8u) [[unlikely]] return; }
L_0036B0E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B0F0u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0036B0F0u) [[unlikely]] return; }
L_0036B0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B0F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0036B0F8u) [[unlikely]] return; }
L_0036B0F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B100u); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0036B100u) [[unlikely]] return; }
L_0036B100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B108u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0036B108u) [[unlikely]] return; }
L_0036B108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B110u); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0036B110u) [[unlikely]] return; }
L_0036B110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B118u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0036B118u) [[unlikely]] return; }
L_0036B118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B120u); set32(c.r[4], ld32((c.r[20].w[0])));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0036B120u) [[unlikely]] return; }
L_0036B120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B128u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0036B128u) [[unlikely]] return; }
L_0036B128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B130u); set32(c.r[4], ld32((c.r[21].w[0])));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0036B130u) [[unlikely]] return; }
L_0036B130:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 174u)));
    c.r[2].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0036B148; } }
    goto L_0036B140;
L_0036B13C:
    c.budget -= 1;
L_0036B140:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B148u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0036B148u) [[unlikely]] return; }
L_0036B148:
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
L_0036B17C:
    c.budget -= 1;
L_0036B180:
    c.budget -= 2;
    { c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B170u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 165u, depth); }
L_0036B190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036B1C0; } }
L_0036B1A4:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B1A4u | kUnwind; return; } goto L_0036B1A4; } }
L_0036B1C0:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B394; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036B1F8; } }
L_0036B1D8:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B1D8u | kUnwind; return; } goto L_0036B1D8; } }
    c.budget -= 1;
L_0036B1F8:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B394; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036B230; } }
L_0036B210:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B210u | kUnwind; return; } goto L_0036B210; } }
    c.budget -= 1;
L_0036B230:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B394; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036B268; } }
L_0036B248:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B248u | kUnwind; return; } goto L_0036B248; } }
    c.budget -= 1;
L_0036B268:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B394; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036B2A0; } }
L_0036B280:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B280u | kUnwind; return; } goto L_0036B280; } }
    c.budget -= 1;
L_0036B2A0:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B394; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036B2D8; } }
L_0036B2B8:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B2B8u | kUnwind; return; } goto L_0036B2B8; } }
    c.budget -= 1;
L_0036B2D8:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B394; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036B310; } }
L_0036B2F0:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B2F0u | kUnwind; return; } goto L_0036B2F0; } }
    c.budget -= 1;
L_0036B310:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B394; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036B348; } }
L_0036B328:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B328u | kUnwind; return; } goto L_0036B328; } }
    c.budget -= 1;
L_0036B348:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B394; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036B380; } }
L_0036B360:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B360u | kUnwind; return; } goto L_0036B360; } }
    c.budget -= 1;
L_0036B380:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036B394; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B394u);  if (depth < kMaxDepth) unit_005A(c, 502u, depth + 1u); else { c.pc = 0x0036B190u; return; } if (c.pc != 0x0036B394u) [[unlikely]] return; }
L_0036B394:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036B3A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B3CCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 110u, depth + 1u); else { c.pc = 0x00358AB0u; return; } if (c.pc != 0x0036B3CCu) [[unlikely]] return; }
L_0036B3CC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036B3F0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B428u); set32(c.r[4], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 135u, depth + 1u); else { c.pc = 0x00358D30u; return; } if (c.pc != 0x0036B428u) [[unlikely]] return; }
L_0036B428:
    mmi::divu(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[19].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0036B514; } }
    c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0036B440:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0036B4E8; } }
L_0036B448:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B454u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B454u) [[unlikely]] return; }
L_0036B454:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B464u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036B464u) [[unlikely]] return; }
L_0036B464:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036B490; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B484u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B484u) [[unlikely]] return; }
L_0036B484:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036B980; } }
L_0036B490:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B49Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B49Cu) [[unlikely]] return; }
L_0036B49C:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B4ACu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036B4ACu) [[unlikely]] return; }
L_0036B4AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036B814; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B4C0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B4C0u) [[unlikely]] return; }
L_0036B4C0:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B4D0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036B4D0u) [[unlikely]] return; }
L_0036B4D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036B860; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B448u | kUnwind; return; } goto L_0036B448; } }
L_0036B4E8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B4FCu); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_005A(c, 590u, depth + 1u); else { c.pc = 0x0036B9B0u; return; } if (c.pc != 0x0036B4FCu) [[unlikely]] return; }
L_0036B4FC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B50Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 515u, depth + 1u); else { c.pc = 0x0036B3F0u; return; } if (c.pc != 0x0036B50Cu) [[unlikely]] return; }
L_0036B50C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0036B984; } }
L_0036B514:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B520u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B520u) [[unlikely]] return; }
L_0036B520:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B530u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036B530u) [[unlikely]] return; }
L_0036B530:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036B55C; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B550u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B550u) [[unlikely]] return; }
L_0036B550:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036B980; } }
L_0036B55C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B568u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B568u) [[unlikely]] return; }
L_0036B568:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B578u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036B578u) [[unlikely]] return; }
L_0036B578:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036B5C0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B58Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B58Cu) [[unlikely]] return; }
L_0036B58C:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B59Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036B59Cu) [[unlikely]] return; }
L_0036B59C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036B60C; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B514u | kUnwind; return; } goto L_0036B514; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B440u | kUnwind; return; } goto L_0036B440; } }
L_0036B5C0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B5CCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B5CCu) [[unlikely]] return; }
L_0036B5CC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B5D8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x0036B5D8u) [[unlikely]] return; }
L_0036B5D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B5E4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B5E4u) [[unlikely]] return; }
L_0036B5E4:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B5F0u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0036B5F0u) [[unlikely]] return; }
L_0036B5F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036B600; } }
L_0036B5F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036B980; } }
L_0036B600:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B5F8u | kUnwind; return; } goto L_0036B5F8; } }
L_0036B60C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0036B6E8; } }
    c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0036B620:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0036B6A8; } }
L_0036B628:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B634u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B634u) [[unlikely]] return; }
L_0036B634:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B644u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036B644u) [[unlikely]] return; }
L_0036B644:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036B670; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B664u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B664u) [[unlikely]] return; }
L_0036B664:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036B980; } }
L_0036B670:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B67Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B67Cu) [[unlikely]] return; }
L_0036B67C:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B68Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036B68Cu) [[unlikely]] return; }
L_0036B68C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036B7BC; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B628u | kUnwind; return; } goto L_0036B628; } }
    c.budget -= 1;
L_0036B6A8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B6B4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B6B4u) [[unlikely]] return; }
L_0036B6B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B6C0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x0036B6C0u) [[unlikely]] return; }
L_0036B6C0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B6CCu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B6CCu) [[unlikely]] return; }
L_0036B6CC:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B6D8u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0036B6D8u) [[unlikely]] return; }
L_0036B6D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036B808; } }
L_0036B6E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036B980; } }
L_0036B6E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B6F4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B6F4u) [[unlikely]] return; }
L_0036B6F4:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B704u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036B704u) [[unlikely]] return; }
L_0036B704:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036B730; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B724u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B724u) [[unlikely]] return; }
L_0036B724:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036B980; } }
L_0036B730:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B73Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B73Cu) [[unlikely]] return; }
L_0036B73C:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B74Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036B74Cu) [[unlikely]] return; }
L_0036B74C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036B770; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B6E8u | kUnwind; return; } goto L_0036B6E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B620u | kUnwind; return; } goto L_0036B620; } }
L_0036B770:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B77Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B77Cu) [[unlikely]] return; }
L_0036B77C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B788u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x0036B788u) [[unlikely]] return; }
L_0036B788:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B794u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B794u) [[unlikely]] return; }
L_0036B794:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B7A0u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0036B7A0u) [[unlikely]] return; }
L_0036B7A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036B7B0; } }
L_0036B7A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036B980; } }
L_0036B7B0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B7A8u | kUnwind; return; } goto L_0036B7A8; } }
L_0036B7BC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B7C8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B7C8u) [[unlikely]] return; }
L_0036B7C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B7D4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x0036B7D4u) [[unlikely]] return; }
L_0036B7D4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B7E0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B7E0u) [[unlikely]] return; }
L_0036B7E0:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B7ECu); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0036B7ECu) [[unlikely]] return; }
L_0036B7EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036B7FC; } }
L_0036B7F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036B980; } }
L_0036B7FC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B7F4u | kUnwind; return; } goto L_0036B7F4; } }
L_0036B808:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B6E0u | kUnwind; return; } goto L_0036B6E0; } }
L_0036B814:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B820u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B820u) [[unlikely]] return; }
L_0036B820:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B82Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x0036B82Cu) [[unlikely]] return; }
L_0036B82C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B838u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B838u) [[unlikely]] return; }
L_0036B838:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B844u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0036B844u) [[unlikely]] return; }
L_0036B844:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036B854; } }
L_0036B84C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036B980; } }
L_0036B854:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B84Cu | kUnwind; return; } goto L_0036B84C; } }
L_0036B860:
    c.r[1].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0036B8E8; } }
L_0036B86C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B878u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B878u) [[unlikely]] return; }
L_0036B878:
    set32(c.r[4], c.r[18].w[0] + 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B888u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036B888u) [[unlikely]] return; }
L_0036B888:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036B8B4; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B8A8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B8A8u) [[unlikely]] return; }
L_0036B8A8:
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0036B980; } }
L_0036B8B4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B8C0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B8C0u) [[unlikely]] return; }
L_0036B8C0:
    set32(c.r[4], c.r[18].w[0] + 9u);
    set32(c.r[5], c.r[18].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B8D0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0036B8D0u) [[unlikely]] return; }
L_0036B8D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036B928; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B86Cu | kUnwind; return; } goto L_0036B86C; } }
L_0036B8E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B8F4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B8F4u) [[unlikely]] return; }
L_0036B8F4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B900u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x0036B900u) [[unlikely]] return; }
L_0036B900:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B90Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B90Cu) [[unlikely]] return; }
L_0036B90C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B918u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0036B918u) [[unlikely]] return; }
L_0036B918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036B974; } }
L_0036B920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036B980; } }
L_0036B928:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B934u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B934u) [[unlikely]] return; }
L_0036B934:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B940u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x0036B940u) [[unlikely]] return; }
L_0036B940:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B94Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B94Cu) [[unlikely]] return; }
L_0036B94C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B958u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0036B958u) [[unlikely]] return; }
L_0036B958:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036B968; } }
L_0036B960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036B980; } }
L_0036B968:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B960u | kUnwind; return; } goto L_0036B960; } }
L_0036B974:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B920u | kUnwind; return; } goto L_0036B920; } }
L_0036B980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0036B984:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0036B9B0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B9E0u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B9E0u) [[unlikely]] return; }
L_0036B9E0:
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B9F0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036B9F0u) [[unlikely]] return; }
L_0036B9F0:
    st32((c.r[19].w[0]), c.r[16].w[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BA10u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0036BA10u) [[unlikely]] return; }
L_0036BA10:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0036BA90; } }
L_0036BA24:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[16].d[0];  if (t) { goto L_0036BA80; } }
L_0036BA2C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BA38u); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_0059(c, 319u, depth + 1u); else { c.pc = 0x00365DA0u; return; } if (c.pc != 0x0036BA38u) [[unlikely]] return; }
L_0036BA38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BA68; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BA4Cu); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_0059(c, 319u, depth + 1u); else { c.pc = 0x00365DA0u; return; } if (c.pc != 0x0036BA4Cu) [[unlikely]] return; }
L_0036BA4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BA68; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BA64u); set32(c.r[6], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_005A(c, 515u, depth + 1u); else { c.pc = 0x0036B3F0u; return; } if (c.pc != 0x0036BA64u) [[unlikely]] return; }
L_0036BA64:
    c.budget -= 1;
L_0036BA68:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BA74u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x0036BA74u) [[unlikely]] return; }
L_0036BA74:
    set32(c.r[18], c.r[18].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BA2Cu | kUnwind; return; } goto L_0036BA2C; } }
L_0036BA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BA88u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0011(c, 256u, depth + 1u); else { c.pc = 0x00246260u; return; } if (c.pc != 0x0036BA88u) [[unlikely]] return; }
L_0036BA88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0036BADC; } }
L_0036BA90:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BA9Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0036BA9Cu) [[unlikely]] return; }
L_0036BA9C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BAA8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0036BAA8u) [[unlikely]] return; }
L_0036BAA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BAC0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BABCu); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x0036BABCu) [[unlikely]] return; }
L_0036BABC:
    c.budget -= 1;
L_0036BAC0:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BA90u | kUnwind; return; } goto L_0036BA90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BA24u | kUnwind; return; } goto L_0036BA24; } }
L_0036BADC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0036BB00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0036BB68; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036BB58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BB34u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0036BB34u) [[unlikely]] return; }
L_0036BB34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BB4C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BB4Cu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_005A(c, 611u, depth + 1u); else { c.pc = 0x0036BBB0u; return; } if (c.pc != 0x0036BB4Cu) [[unlikely]] return; }
L_0036BB4C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0036BB58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BB60u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_005A(c, 605u, depth + 1u); else { c.pc = 0x0036BB00u; return; } if (c.pc != 0x0036BB60u) [[unlikely]] return; }
L_0036BB60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0036BBA0; } }
L_0036BB68:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 28u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BB8Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0036BB8Cu) [[unlikely]] return; }
L_0036BB8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BB9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BB9Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 614u, depth + 1u); else { c.pc = 0x0036BC30u; return; } if (c.pc != 0x0036BB9Cu) [[unlikely]] return; }
L_0036BB9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0036BBA0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036BBB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0036BBD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0036BBDC; } }
L_0036BBD4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0036BBDC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BBECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 613u, depth + 1u); else { c.pc = 0x0036BC10u; return; } if (c.pc != 0x0036BBECu) [[unlikely]] return; }
L_0036BBEC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036BC10:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0036BC30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 10232u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BC50u); st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0023C180u; return; } if (c.pc != 0x0036BC50u) [[unlikely]] return; }
L_0036BC50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BC58u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_005B(c, 63u, depth + 1u); else { c.pc = 0x0036C860u; return; } if (c.pc != 0x0036BC58u) [[unlikely]] return; }
L_0036BC58:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036BC70:
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
    { const bool t = c.r[21].d[0] == 0ull; st16((c.r[29].w[0] + 174u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { [[clang::musttail]] return unit_005B(c, 50u, depth); } }
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BCD0; } }
L_0036BCB4:
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[21].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BCB4u | kUnwind; return; } goto L_0036BCB4; } }
L_0036BCD0:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036BE6C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BD08; } }
L_0036BCE8:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BCE8u | kUnwind; return; } goto L_0036BCE8; } }
    c.budget -= 1;
L_0036BD08:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036BE6C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BD40; } }
L_0036BD20:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BD20u | kUnwind; return; } goto L_0036BD20; } }
    c.budget -= 1;
L_0036BD40:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036BE6C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BD78; } }
L_0036BD58:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BD58u | kUnwind; return; } goto L_0036BD58; } }
    c.budget -= 1;
L_0036BD78:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036BE6C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BDB0; } }
L_0036BD90:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BD90u | kUnwind; return; } goto L_0036BD90; } }
    c.budget -= 1;
L_0036BDB0:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036BE6C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BDE8; } }
L_0036BDC8:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BDC8u | kUnwind; return; } goto L_0036BDC8; } }
    c.budget -= 1;
L_0036BDE8:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036BE6C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BE20; } }
L_0036BE00:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BE00u | kUnwind; return; } goto L_0036BE00; } }
    c.budget -= 1;
L_0036BE20:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036BE6C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BE58; } }
L_0036BE38:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BE38u | kUnwind; return; } goto L_0036BE38; } }
    c.budget -= 1;
L_0036BE58:
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036BE6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BE6Cu);  if (depth < kMaxDepth) unit_005B(c, 52u, depth + 1u); else { c.pc = 0x0036C650u; return; } if (c.pc != 0x0036BE6Cu) [[unlikely]] return; }
L_0036BE6C:
    set32(c.r[20], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_005B(c, 48u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_005B(c, 48u, depth); } }
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BEA8; } }
L_0036BE8C:
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[20].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BE8Cu | kUnwind; return; } goto L_0036BE8C; } }
L_0036BEA8:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_005B(c, 3u, depth); } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BEE0; } }
L_0036BEC0:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BEC0u | kUnwind; return; } goto L_0036BEC0; } }
    c.budget -= 1;
L_0036BEE0:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_005B(c, 3u, depth); } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BF18; } }
L_0036BEF8:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BEF8u | kUnwind; return; } goto L_0036BEF8; } }
    c.budget -= 1;
L_0036BF18:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_005B(c, 3u, depth); } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BF50; } }
L_0036BF30:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BF30u | kUnwind; return; } goto L_0036BF30; } }
    c.budget -= 1;
L_0036BF50:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_005B(c, 3u, depth); } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BF88; } }
L_0036BF68:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BF68u | kUnwind; return; } goto L_0036BF68; } }
    c.budget -= 1;
L_0036BF88:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_005B(c, 3u, depth); } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BFC0; } }
L_0036BFA0:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BFA0u | kUnwind; return; } goto L_0036BFA0; } }
    c.budget -= 1;
L_0036BFC0:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_005B(c, 3u, depth); } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036BFF8; } }
L_0036BFD8:
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BFD8u | kUnwind; return; } goto L_0036BFD8; } }
    c.budget -= 1;
L_0036BFF8:
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_005B(c, 3u, depth); } }
    [[clang::musttail]] return unit_005B(c, 2u, depth);
}

}

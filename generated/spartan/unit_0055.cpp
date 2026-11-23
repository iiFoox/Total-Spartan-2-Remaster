#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0055[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 4, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0,
    9, 0, 0, 10, 0, 11, 0, 0, 12, 0, 13, 0, 14, 0, 15, 0, 0, 16, 0, 17, 0, 18, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 25, 0, 26, 0, 0, 27, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    35, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0,
    0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0,
    0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105,
    0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0,
    0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    123, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0,
    0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0,
    0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0,
    0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0,
    0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0,
    173, 0, 174, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 192, 0,
    0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208,
    0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0,
    0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0,
    0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 229, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 232, 0,
    0, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 241,
    0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0,
    0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 255, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 258,
    0, 0, 259, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 266,
    0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 270, 0, 0, 271, 272, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0,
    276, 0, 0, 277, 0, 278, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0,
    285, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0,
    292, 0, 0, 293, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0,
    0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0,
    0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0,
    0, 0, 314, 0, 0, 0, 315, 0, 316, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 319, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 322,
    0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0,
    0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0,
    0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0,
    0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0,
    0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0,
    0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0,
    359, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 365,
    0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0,
    0, 0, 0, 372, 0, 373, 0, 0, 374, 0, 375, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0,
    0, 380, 0, 0, 0, 381, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 387,
    0, 0, 388, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 393, 0, 0, 394, 0, 395, 0, 0, 396,
    0, 397, 0, 0, 0, 398, 0, 0, 399, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 404, 0,
    0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411,
    0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0,
    0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 425, 0,
    0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0,
    0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0,
    0, 435, 0, 0, 436, 0, 437, 0, 438, 0, 0, 439, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0,
    447, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0,
    0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 461,
    0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466,
    0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 470, 0, 471, 0, 472, 0, 0, 0, 473, 0, 474, 0,
    0, 475, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 480, 0, 0, 0, 0, 481,
    0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 487, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 497, 0, 0, 0, 498, 0, 0, 0,
    0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 505,
    0, 0, 506, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 511, 0, 0, 0, 0,
    0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0,
    517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522,
    0, 0, 523, 0, 524, 0, 525, 0, 0, 526, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0,
    529, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0,
    535, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 541, 0, 0, 0, 0, 542, 0,
    0, 0, 0, 0, 543, 0, 0, 0, 0, 544, 0, 0, 0, 0, 545, 0, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 0,
    549, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 552, 0, 0, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0,
    0, 557, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 562, 0, 0, 0, 0, 0,
    0, 0, 563, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 568,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 573,
    0, 0, 0, 574, 0, 575, 0, 0, 0, 576, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 0, 580, 0, 581, 0, 0, 582, 0, 583, 0, 584, 0,
    0, 585, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 588, 0, 0, 0, 0, 589, 0, 0,
    0, 0, 590, 0, 0, 0, 0, 591, 0, 0, 0, 0, 592, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 595, 0, 0,
    0, 596, 0, 0, 0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 0, 0, 599, 0, 0, 0, 600, 0, 601, 0, 0, 0, 0, 602, 0, 0, 0, 0,
    0, 603, 0, 0, 0, 0, 604, 0, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 0, 607, 0, 0, 0, 0, 0, 0, 608, 0, 0, 609, 0, 0,
    0, 0, 0, 610, 0, 0, 0, 0, 0, 611, 0, 0, 612, 0, 0, 0, 0, 0, 0, 613, 0, 0, 614, 0, 0, 0, 0, 0, 0, 615, 0, 0,
    616, 0, 0, 617, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 620, 0, 621, 0, 0, 0, 0, 0,
    0, 622, 0, 0, 0, 0, 623, 0, 0, 0, 0, 624, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 628,
    0, 629, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 632, 0, 0, 633, 0, 0, 0, 634, 0, 0, 635, 0, 636,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 638, 0, 0, 639, 0, 0, 0, 640, 0, 0, 641, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 643, 0, 0, 0, 644, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 646, 0, 0, 647, 0, 0, 0, 648, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 651, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 655, 0, 0, 0, 0, 0, 0, 656, 0,
    0, 657, 0, 0, 0, 0, 0, 0, 658, 0, 0, 659, 0, 660, 0, 0, 661, 0, 662, 663, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 665,
    0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0, 0, 0, 668, 0, 0, 669, 0, 0, 0, 0, 670, 0, 0, 671, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 672, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 675, 0, 0, 0, 0, 0, 0, 676, 0, 0, 677,
    0, 0, 0, 0, 0, 0, 678, 0, 0, 679, 0, 680, 0, 0, 681, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 683, 0, 0, 684, 0, 0, 0,
    0, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 0, 687, 0, 688, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 691,
};

void unit_0055(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00354000;
    case 2u: goto L_00354020;
    case 3u: goto L_0035402C;
    case 4u: goto L_00354034;
    case 5u: goto L_00354040;
    case 6u: goto L_00354048;
    case 7u: goto L_0035406C;
    case 8u: goto L_00354078;
    case 9u: goto L_00354080;
    case 10u: goto L_0035408C;
    case 11u: goto L_00354094;
    case 12u: goto L_003540A0;
    case 13u: goto L_003540A8;
    case 14u: goto L_003540B0;
    case 15u: goto L_003540B8;
    case 16u: goto L_003540C4;
    case 17u: goto L_003540CC;
    case 18u: goto L_003540D4;
    case 19u: goto L_003540DC;
    case 20u: goto L_003540F0;
    case 21u: goto L_00354118;
    case 22u: goto L_00354120;
    case 23u: goto L_00354148;
    case 24u: goto L_00354150;
    case 25u: goto L_00354164;
    case 26u: goto L_0035416C;
    case 27u: goto L_00354178;
    case 28u: goto L_00354180;
    case 29u: goto L_003541A4;
    case 30u: goto L_003541B0;
    case 31u: goto L_003541BC;
    case 32u: goto L_003541C8;
    case 33u: goto L_003541D4;
    case 34u: goto L_003541E0;
    case 35u: goto L_00354200;
    case 36u: goto L_00354208;
    case 37u: goto L_0035421C;
    case 38u: goto L_00354234;
    case 39u: goto L_00354240;
    case 40u: goto L_00354264;
    case 41u: goto L_00354270;
    case 42u: goto L_00354278;
    case 43u: goto L_00354288;
    case 44u: goto L_00354290;
    case 45u: goto L_003542B0;
    case 46u: goto L_003542F8;
    case 47u: goto L_0035433C;
    case 48u: goto L_00354378;
    case 49u: goto L_003543C0;
    case 50u: goto L_003543E0;
    case 51u: goto L_003543F0;
    case 52u: goto L_00354418;
    case 53u: goto L_00354424;
    case 54u: goto L_00354450;
    case 55u: goto L_00354480;
    case 56u: goto L_0035448C;
    case 57u: goto L_003544B4;
    case 58u: goto L_003544E8;
    case 59u: goto L_0035451C;
    case 60u: goto L_0035454C;
    case 61u: goto L_00354550;
    case 62u: goto L_00354574;
    case 63u: goto L_003545C0;
    case 64u: goto L_00354614;
    case 65u: goto L_00354628;
    case 66u: goto L_00354670;
    case 67u: goto L_0035469C;
    case 68u: goto L_003546C8;
    case 69u: goto L_00354700;
    case 70u: goto L_00354750;
    case 71u: goto L_00354788;
    case 72u: goto L_00354884;
    case 73u: goto L_003548B8;
    case 74u: goto L_00354924;
    case 75u: goto L_00354944;
    case 76u: goto L_00354958;
    case 77u: goto L_003549A0;
    case 78u: goto L_00354A30;
    case 79u: goto L_00354A38;
    case 80u: goto L_00354A60;
    case 81u: goto L_00354A94;
    case 82u: goto L_00354AC8;
    case 83u: goto L_00354AF0;
    case 84u: goto L_00354B54;
    case 85u: goto L_00354B74;
    case 86u: goto L_00354BB4;
    case 87u: goto L_00354BEC;
    case 88u: goto L_00354C24;
    case 89u: goto L_00354C5C;
    case 90u: goto L_00354CBC;
    case 91u: goto L_00354CCC;
    case 92u: goto L_00354CE0;
    case 93u: goto L_00354CF4;
    case 94u: goto L_00354D08;
    case 95u: goto L_00354D1C;
    case 96u: goto L_00354D30;
    case 97u: goto L_00354D44;
    case 98u: goto L_00354D58;
    case 99u: goto L_00354D70;
    case 100u: goto L_00354D88;
    case 101u: goto L_00354DA0;
    case 102u: goto L_00354DB8;
    case 103u: goto L_00354DD0;
    case 104u: goto L_00354DE8;
    case 105u: goto L_00354DFC;
    case 106u: goto L_00354E10;
    case 107u: goto L_00354E24;
    case 108u: goto L_00354E38;
    case 109u: goto L_00354E4C;
    case 110u: goto L_00354E60;
    case 111u: goto L_00354E74;
    case 112u: goto L_00354E8C;
    case 113u: goto L_00354EC4;
    case 114u: goto L_00354ECC;
    case 115u: goto L_00354F14;
    case 116u: goto L_00354F28;
    case 117u: goto L_00354F9C;
    case 118u: goto L_00354FB0;
    case 119u: goto L_00354FD0;
    case 120u: goto L_00355000;
    case 121u: goto L_00355080;
    case 122u: goto L_003550E0;
    case 123u: goto L_00355180;
    case 124u: goto L_00355184;
    case 125u: goto L_003551B8;
    case 126u: goto L_003551C4;
    case 127u: goto L_003551E4;
    case 128u: goto L_003551F4;
    case 129u: goto L_00355204;
    case 130u: goto L_00355218;
    case 131u: goto L_0035527C;
    case 132u: goto L_003552B0;
    case 133u: goto L_003552EC;
    case 134u: goto L_003552F8;
    case 135u: goto L_00355320;
    case 136u: goto L_00355330;
    case 137u: goto L_00355350;
    case 138u: goto L_0035537C;
    case 139u: goto L_003553BC;
    case 140u: goto L_003553C0;
    case 141u: goto L_003553D0;
    case 142u: goto L_003553EC;
    case 143u: goto L_00355408;
    case 144u: goto L_00355440;
    case 145u: goto L_00355448;
    case 146u: goto L_0035548C;
    case 147u: goto L_00355498;
    case 148u: goto L_00355524;
    case 149u: goto L_00355540;
    case 150u: goto L_00355568;
    case 151u: goto L_00355588;
    case 152u: goto L_003555A0;
    case 153u: goto L_00355610;
    case 154u: goto L_00355640;
    case 155u: goto L_00355658;
    case 156u: goto L_00355678;
    case 157u: goto L_0035568C;
    case 158u: goto L_0035569C;
    case 159u: goto L_003556A8;
    case 160u: goto L_003556CC;
    case 161u: goto L_003556E4;
    case 162u: goto L_003556F4;
    case 163u: goto L_00355730;
    case 164u: goto L_00355748;
    case 165u: goto L_00355760;
    case 166u: goto L_00355778;
    case 167u: goto L_00355790;
    case 168u: goto L_003557A8;
    case 169u: goto L_003557C0;
    case 170u: goto L_003557C8;
    case 171u: goto L_003557E0;
    case 172u: goto L_003557E8;
    case 173u: goto L_00355800;
    case 174u: goto L_00355808;
    case 175u: goto L_00355820;
    case 176u: goto L_00355828;
    case 177u: goto L_00355840;
    case 178u: goto L_00355848;
    case 179u: goto L_00355860;
    case 180u: goto L_00355868;
    case 181u: goto L_00355880;
    case 182u: goto L_00355898;
    case 183u: goto L_003558B0;
    case 184u: goto L_003558C8;
    case 185u: goto L_003558E0;
    case 186u: goto L_003558F8;
    case 187u: goto L_00355910;
    case 188u: goto L_00355928;
    case 189u: goto L_00355940;
    case 190u: goto L_00355958;
    case 191u: goto L_00355970;
    case 192u: goto L_00355978;
    case 193u: goto L_00355990;
    case 194u: goto L_00355998;
    case 195u: goto L_003559B0;
    case 196u: goto L_003559C0;
    case 197u: goto L_003559F8;
    case 198u: goto L_00355A80;
    case 199u: goto L_00355AB0;
    case 200u: goto L_00355AE8;
    case 201u: goto L_00355B00;
    case 202u: goto L_00355B28;
    case 203u: goto L_00355B3C;
    case 204u: goto L_00355B48;
    case 205u: goto L_00355B54;
    case 206u: goto L_00355B5C;
    case 207u: goto L_00355B6C;
    case 208u: goto L_00355B7C;
    case 209u: goto L_00355B90;
    case 210u: goto L_00355B9C;
    case 211u: goto L_00355BA8;
    case 212u: goto L_00355BB8;
    case 213u: goto L_00355BC4;
    case 214u: goto L_00355BD4;
    case 215u: goto L_00355BE0;
    case 216u: goto L_00355BEC;
    case 217u: goto L_00355BF8;
    case 218u: goto L_00355C08;
    case 219u: goto L_00355C1C;
    case 220u: goto L_00355C30;
    case 221u: goto L_00355C44;
    case 222u: goto L_00355C54;
    case 223u: goto L_00355C68;
    case 224u: goto L_00355C78;
    case 225u: goto L_00355C8C;
    case 226u: goto L_00355C9C;
    case 227u: goto L_00355CB0;
    case 228u: goto L_00355CC0;
    case 229u: goto L_00355CC8;
    case 230u: goto L_00355CD8;
    case 231u: goto L_00355CE4;
    case 232u: goto L_00355CF8;
    case 233u: goto L_00355D0C;
    case 234u: goto L_00355D18;
    case 235u: goto L_00355D24;
    case 236u: goto L_00355D34;
    case 237u: goto L_00355D48;
    case 238u: goto L_00355D50;
    case 239u: goto L_00355D68;
    case 240u: goto L_00355D74;
    case 241u: goto L_00355D7C;
    case 242u: goto L_00355D8C;
    case 243u: goto L_00355DA0;
    case 244u: goto L_00355DB0;
    case 245u: goto L_00355DC4;
    case 246u: goto L_00355DD4;
    case 247u: goto L_00355DDC;
    case 248u: goto L_00355DEC;
    case 249u: goto L_00355DF8;
    case 250u: goto L_00355E0C;
    case 251u: goto L_00355E20;
    case 252u: goto L_00355E2C;
    case 253u: goto L_00355E38;
    case 254u: goto L_00355E44;
    case 255u: goto L_00355E4C;
    case 256u: goto L_00355E5C;
    case 257u: goto L_00355E64;
    case 258u: goto L_00355E7C;
    case 259u: goto L_00355E88;
    case 260u: goto L_00355E90;
    case 261u: goto L_00355EA0;
    case 262u: goto L_00355EB4;
    case 263u: goto L_00355EC4;
    case 264u: goto L_00355ED8;
    case 265u: goto L_00355EE8;
    case 266u: goto L_00355EFC;
    case 267u: goto L_00355F0C;
    case 268u: goto L_00355F20;
    case 269u: goto L_00355F30;
    case 270u: goto L_00355F38;
    case 271u: goto L_00355F44;
    case 272u: goto L_00355F48;
    case 273u: goto L_00355F54;
    case 274u: goto L_00355F68;
    case 275u: goto L_00355F74;
    case 276u: goto L_00355F80;
    case 277u: goto L_00355F8C;
    case 278u: goto L_00355F94;
    case 279u: goto L_00355FA0;
    case 280u: goto L_00355FB0;
    case 281u: goto L_00355FC4;
    case 282u: goto L_00355FD4;
    case 283u: goto L_00355FE8;
    case 284u: goto L_00355FF8;
    case 285u: goto L_00356000;
    case 286u: goto L_00356010;
    case 287u: goto L_0035601C;
    case 288u: goto L_00356030;
    case 289u: goto L_00356044;
    case 290u: goto L_00356058;
    case 291u: goto L_0035606C;
    case 292u: goto L_00356080;
    case 293u: goto L_0035608C;
    case 294u: goto L_00356098;
    case 295u: goto L_003560A4;
    case 296u: goto L_003560C4;
    case 297u: goto L_003560D0;
    case 298u: goto L_003560E8;
    case 299u: goto L_003560F4;
    case 300u: goto L_0035610C;
    case 301u: goto L_00356118;
    case 302u: goto L_00356130;
    case 303u: goto L_0035613C;
    case 304u: goto L_00356154;
    case 305u: goto L_00356164;
    case 306u: goto L_00356178;
    case 307u: goto L_00356188;
    case 308u: goto L_0035619C;
    case 309u: goto L_003561AC;
    case 310u: goto L_003561C0;
    case 311u: goto L_003561D0;
    case 312u: goto L_003561E4;
    case 313u: goto L_003561F4;
    case 314u: goto L_00356208;
    case 315u: goto L_00356218;
    case 316u: goto L_00356220;
    case 317u: goto L_00356230;
    case 318u: goto L_0035623C;
    case 319u: goto L_00356250;
    case 320u: goto L_00356258;
    case 321u: goto L_00356264;
    case 322u: goto L_0035627C;
    case 323u: goto L_0035628C;
    case 324u: goto L_003562A0;
    case 325u: goto L_003562B0;
    case 326u: goto L_003562C4;
    case 327u: goto L_003562D4;
    case 328u: goto L_003562E8;
    case 329u: goto L_003562F8;
    case 330u: goto L_0035630C;
    case 331u: goto L_0035631C;
    case 332u: goto L_00356330;
    case 333u: goto L_00356340;
    case 334u: goto L_0035635C;
    case 335u: goto L_00356370;
    case 336u: goto L_00356384;
    case 337u: goto L_00356394;
    case 338u: goto L_003563B4;
    case 339u: goto L_003563C8;
    case 340u: goto L_003563DC;
    case 341u: goto L_003563EC;
    case 342u: goto L_0035640C;
    case 343u: goto L_00356420;
    case 344u: goto L_00356434;
    case 345u: goto L_00356444;
    case 346u: goto L_00356464;
    case 347u: goto L_00356478;
    case 348u: goto L_0035648C;
    case 349u: goto L_0035649C;
    case 350u: goto L_003564BC;
    case 351u: goto L_003564D0;
    case 352u: goto L_003564E4;
    case 353u: goto L_003564F4;
    case 354u: goto L_00356514;
    case 355u: goto L_00356528;
    case 356u: goto L_0035653C;
    case 357u: goto L_0035654C;
    case 358u: goto L_0035656C;
    case 359u: goto L_00356580;
    case 360u: goto L_00356594;
    case 361u: goto L_003565A4;
    case 362u: goto L_003565C4;
    case 363u: goto L_003565D8;
    case 364u: goto L_003565EC;
    case 365u: goto L_003565FC;
    case 366u: goto L_0035661C;
    case 367u: goto L_00356630;
    case 368u: goto L_00356644;
    case 369u: goto L_00356654;
    case 370u: goto L_00356664;
    case 371u: goto L_00356678;
    case 372u: goto L_0035668C;
    case 373u: goto L_00356694;
    case 374u: goto L_003566A0;
    case 375u: goto L_003566A8;
    case 376u: goto L_003566B4;
    case 377u: goto L_003566C0;
    case 378u: goto L_003566DC;
    case 379u: goto L_003566F0;
    case 380u: goto L_00356704;
    case 381u: goto L_00356714;
    case 382u: goto L_0035671C;
    case 383u: goto L_0035672C;
    case 384u: goto L_00356750;
    case 385u: goto L_00356764;
    case 386u: goto L_00356770;
    case 387u: goto L_0035677C;
    case 388u: goto L_00356788;
    case 389u: goto L_00356798;
    case 390u: goto L_003567A4;
    case 391u: goto L_003567C0;
    case 392u: goto L_003567D0;
    case 393u: goto L_003567DC;
    case 394u: goto L_003567E8;
    case 395u: goto L_003567F0;
    case 396u: goto L_003567FC;
    case 397u: goto L_00356804;
    case 398u: goto L_00356814;
    case 399u: goto L_00356820;
    case 400u: goto L_00356828;
    case 401u: goto L_00356838;
    case 402u: goto L_00356858;
    case 403u: goto L_00356864;
    case 404u: goto L_00356878;
    case 405u: goto L_0035688C;
    case 406u: goto L_003568A0;
    case 407u: goto L_003568B4;
    case 408u: goto L_003568BC;
    case 409u: goto L_003568C8;
    case 410u: goto L_003568E8;
    case 411u: goto L_003568FC;
    case 412u: goto L_00356910;
    case 413u: goto L_00356924;
    case 414u: goto L_00356938;
    case 415u: goto L_00356948;
    case 416u: goto L_00356950;
    case 417u: goto L_00356960;
    case 418u: goto L_00356978;
    case 419u: goto L_0035698C;
    case 420u: goto L_003569A0;
    case 421u: goto L_003569B4;
    case 422u: goto L_003569C8;
    case 423u: goto L_003569DC;
    case 424u: goto L_003569EC;
    case 425u: goto L_003569F8;
    case 426u: goto L_00356A04;
    case 427u: goto L_00356A40;
    case 428u: goto L_00356A50;
    case 429u: goto L_00356A78;
    case 430u: goto L_00356A88;
    case 431u: goto L_00356AB0;
    case 432u: goto L_00356AC0;
    case 433u: goto L_00356ADC;
    case 434u: goto L_00356AEC;
    case 435u: goto L_00356B04;
    case 436u: goto L_00356B10;
    case 437u: goto L_00356B18;
    case 438u: goto L_00356B20;
    case 439u: goto L_00356B2C;
    case 440u: goto L_00356B38;
    case 441u: goto L_00356B6C;
    case 442u: goto L_00356B94;
    case 443u: goto L_00356BA8;
    case 444u: goto L_00356BBC;
    case 445u: goto L_00356BCC;
    case 446u: goto L_00356BEC;
    case 447u: goto L_00356C00;
    case 448u: goto L_00356C10;
    case 449u: goto L_00356C24;
    case 450u: goto L_00356C38;
    case 451u: goto L_00356C48;
    case 452u: goto L_00356C50;
    case 453u: goto L_00356C60;
    case 454u: goto L_00356C78;
    case 455u: goto L_00356C8C;
    case 456u: goto L_00356CA0;
    case 457u: goto L_00356CB4;
    case 458u: goto L_00356CC8;
    case 459u: goto L_00356CE0;
    case 460u: goto L_00356CF0;
    case 461u: goto L_00356CFC;
    case 462u: goto L_00356D0C;
    case 463u: goto L_00356D34;
    case 464u: goto L_00356D44;
    case 465u: goto L_00356D6C;
    case 466u: goto L_00356D7C;
    case 467u: goto L_00356D98;
    case 468u: goto L_00356DA8;
    case 469u: goto L_00356DC4;
    case 470u: goto L_00356DD0;
    case 471u: goto L_00356DD8;
    case 472u: goto L_00356DE0;
    case 473u: goto L_00356DF0;
    case 474u: goto L_00356DF8;
    case 475u: goto L_00356E04;
    case 476u: goto L_00356E24;
    case 477u: goto L_00356E30;
    case 478u: goto L_00356E48;
    case 479u: goto L_00356E5C;
    case 480u: goto L_00356E68;
    case 481u: goto L_00356E7C;
    case 482u: goto L_00356E88;
    case 483u: goto L_00356EAC;
    case 484u: goto L_00356EB8;
    case 485u: goto L_00356ED4;
    case 486u: goto L_00356EE8;
    case 487u: goto L_00356EF8;
    case 488u: goto L_00356F20;
    case 489u: goto L_00356F34;
    case 490u: goto L_00356F44;
    case 491u: goto L_00356F58;
    case 492u: goto L_00356F6C;
    case 493u: goto L_00356FA0;
    case 494u: goto L_00356FB4;
    case 495u: goto L_00356FC8;
    case 496u: goto L_00356FD8;
    case 497u: goto L_00356FE0;
    case 498u: goto L_00356FF0;
    case 499u: goto L_00357008;
    case 500u: goto L_0035701C;
    case 501u: goto L_00357030;
    case 502u: goto L_00357044;
    case 503u: goto L_00357058;
    case 504u: goto L_0035706C;
    case 505u: goto L_0035707C;
    case 506u: goto L_00357088;
    case 507u: goto L_00357094;
    case 508u: goto L_003570B4;
    case 509u: goto L_003570C0;
    case 510u: goto L_003570E0;
    case 511u: goto L_003570EC;
    case 512u: goto L_0035710C;
    case 513u: goto L_00357118;
    case 514u: goto L_00357138;
    case 515u: goto L_00357148;
    case 516u: goto L_00357170;
    case 517u: goto L_00357180;
    case 518u: goto L_003571A8;
    case 519u: goto L_003571B8;
    case 520u: goto L_003571D4;
    case 521u: goto L_003571E4;
    case 522u: goto L_003571FC;
    case 523u: goto L_00357208;
    case 524u: goto L_00357210;
    case 525u: goto L_00357218;
    case 526u: goto L_00357224;
    case 527u: goto L_00357230;
    case 528u: goto L_003572EC;
    case 529u: goto L_00357300;
    case 530u: goto L_00357314;
    case 531u: goto L_00357328;
    case 532u: goto L_0035733C;
    case 533u: goto L_00357350;
    case 534u: goto L_00357360;
    case 535u: goto L_00357380;
    case 536u: goto L_00357394;
    case 537u: goto L_003573A4;
    case 538u: goto L_003573B8;
    case 539u: goto L_003573CC;
    case 540u: goto L_003573DC;
    case 541u: goto L_003573E4;
    case 542u: goto L_003573F8;
    case 543u: goto L_00357410;
    case 544u: goto L_00357424;
    case 545u: goto L_00357438;
    case 546u: goto L_0035744C;
    case 547u: goto L_00357460;
    case 548u: goto L_00357474;
    case 549u: goto L_00357480;
    case 550u: goto L_00357494;
    case 551u: goto L_003574A4;
    case 552u: goto L_003574AC;
    case 553u: goto L_003574C0;
    case 554u: goto L_003574D4;
    case 555u: goto L_003574E8;
    case 556u: goto L_003574F8;
    case 557u: goto L_00357504;
    case 558u: goto L_00357510;
    case 559u: goto L_00357530;
    case 560u: goto L_0035753C;
    case 561u: goto L_0035755C;
    case 562u: goto L_00357568;
    case 563u: goto L_00357588;
    case 564u: goto L_00357594;
    case 565u: goto L_003575B4;
    case 566u: goto L_003575C4;
    case 567u: goto L_003575EC;
    case 568u: goto L_003575FC;
    case 569u: goto L_00357624;
    case 570u: goto L_00357634;
    case 571u: goto L_00357650;
    case 572u: goto L_00357660;
    case 573u: goto L_0035767C;
    case 574u: goto L_0035768C;
    case 575u: goto L_00357694;
    case 576u: goto L_003576A4;
    case 577u: goto L_003576B0;
    case 578u: goto L_003576BC;
    case 579u: goto L_003576C8;
    case 580u: goto L_003576D4;
    case 581u: goto L_003576DC;
    case 582u: goto L_003576E8;
    case 583u: goto L_003576F0;
    case 584u: goto L_003576F8;
    case 585u: goto L_00357704;
    case 586u: goto L_00357710;
    case 587u: goto L_003577CC;
    case 588u: goto L_003577E0;
    case 589u: goto L_003577F4;
    case 590u: goto L_00357808;
    case 591u: goto L_0035781C;
    case 592u: goto L_00357830;
    case 593u: goto L_00357840;
    case 594u: goto L_00357860;
    case 595u: goto L_00357874;
    case 596u: goto L_00357884;
    case 597u: goto L_00357898;
    case 598u: goto L_003578AC;
    case 599u: goto L_003578C0;
    case 600u: goto L_003578D0;
    case 601u: goto L_003578D8;
    case 602u: goto L_003578EC;
    case 603u: goto L_00357904;
    case 604u: goto L_00357918;
    case 605u: goto L_00357924;
    case 606u: goto L_00357940;
    case 607u: goto L_0035794C;
    case 608u: goto L_00357968;
    case 609u: goto L_00357974;
    case 610u: goto L_0035798C;
    case 611u: goto L_003579A4;
    case 612u: goto L_003579B0;
    case 613u: goto L_003579CC;
    case 614u: goto L_003579D8;
    case 615u: goto L_003579F4;
    case 616u: goto L_00357A00;
    case 617u: goto L_00357A0C;
    case 618u: goto L_00357A20;
    case 619u: goto L_00357A54;
    case 620u: goto L_00357A60;
    case 621u: goto L_00357A68;
    case 622u: goto L_00357A84;
    case 623u: goto L_00357A98;
    case 624u: goto L_00357AAC;
    case 625u: goto L_00357AB8;
    case 626u: goto L_00357AD8;
    case 627u: goto L_00357AEC;
    case 628u: goto L_00357AFC;
    case 629u: goto L_00357B04;
    case 630u: goto L_00357B18;
    case 631u: goto L_00357B30;
    case 632u: goto L_00357B4C;
    case 633u: goto L_00357B58;
    case 634u: goto L_00357B68;
    case 635u: goto L_00357B74;
    case 636u: goto L_00357B7C;
    case 637u: goto L_00357BB0;
    case 638u: goto L_00357BC8;
    case 639u: goto L_00357BD4;
    case 640u: goto L_00357BE4;
    case 641u: goto L_00357BF0;
    case 642u: goto L_00357C28;
    case 643u: goto L_00357C34;
    case 644u: goto L_00357C44;
    case 645u: goto L_00357C50;
    case 646u: goto L_00357C88;
    case 647u: goto L_00357C94;
    case 648u: goto L_00357CA4;
    case 649u: goto L_00357CB0;
    case 650u: goto L_00357CE8;
    case 651u: goto L_00357CF4;
    case 652u: goto L_00357D1C;
    case 653u: goto L_00357D28;
    case 654u: goto L_00357D50;
    case 655u: goto L_00357D5C;
    case 656u: goto L_00357D78;
    case 657u: goto L_00357D84;
    case 658u: goto L_00357DA0;
    case 659u: goto L_00357DAC;
    case 660u: goto L_00357DB4;
    case 661u: goto L_00357DC0;
    case 662u: goto L_00357DC8;
    case 663u: goto L_00357DCC;
    case 664u: goto L_00357DE0;
    case 665u: goto L_00357DFC;
    case 666u: goto L_00357E18;
    case 667u: goto L_00357E2C;
    case 668u: goto L_00357E40;
    case 669u: goto L_00357E4C;
    case 670u: goto L_00357E60;
    case 671u: goto L_00357E6C;
    case 672u: goto L_00357E94;
    case 673u: goto L_00357EA0;
    case 674u: goto L_00357EC8;
    case 675u: goto L_00357ED4;
    case 676u: goto L_00357EF0;
    case 677u: goto L_00357EFC;
    case 678u: goto L_00357F18;
    case 679u: goto L_00357F24;
    case 680u: goto L_00357F2C;
    case 681u: goto L_00357F38;
    case 682u: goto L_00357F50;
    case 683u: goto L_00357F64;
    case 684u: goto L_00357F70;
    case 685u: goto L_00357F90;
    case 686u: goto L_00357FA4;
    case 687u: goto L_00357FB4;
    case 688u: goto L_00357FBC;
    case 689u: goto L_00357FD0;
    case 690u: goto L_00357FE8;
    case 691u: goto L_00357FFC;
    default: bad_entry(c, 0x00354000u); return;
    }
L_00354000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[2].w[0] - 17640u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 70u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 69u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354020u); st8((c.r[17].w[0] + 67u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0002(c, 60u, depth + 1u); else { c.pc = 0x002096C0u; return; } if (c.pc != 0x00354020u) [[unlikely]] return; }
L_00354020:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035402Cu); set32(c.r[4], c.r[4].w[0] - 15728u);  if (depth < kMaxDepth) unit_0064(c, 159u, depth + 1u); else { c.pc = 0x003913F0u; return; } if (c.pc != 0x0035402Cu) [[unlikely]] return; }
L_0035402C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354034u);  if (depth < kMaxDepth) unit_0002(c, 61u, depth + 1u); else { c.pc = 0x002096D0u; return; } if (c.pc != 0x00354034u) [[unlikely]] return; }
L_00354034:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354040u); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_0039(c, 248u, depth + 1u); else { c.pc = 0x002E7FC0u; return; } if (c.pc != 0x00354040u) [[unlikely]] return; }
L_00354040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 27u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353C24u | kUnwind; return; } [[clang::musttail]] return unit_0054(c, 307u, depth); } }
L_00354048:
    set32(c.r[3], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[2].w[0] - 17640u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 70u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 69u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 68u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035406Cu); st8((c.r[17].w[0] + 67u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0002(c, 60u, depth + 1u); else { c.pc = 0x002096C0u; return; } if (c.pc != 0x0035406Cu) [[unlikely]] return; }
L_0035406C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354078u); set32(c.r[4], c.r[4].w[0] - 15728u);  if (depth < kMaxDepth) unit_0064(c, 159u, depth + 1u); else { c.pc = 0x003913F0u; return; } if (c.pc != 0x00354078u) [[unlikely]] return; }
L_00354078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354080u);  if (depth < kMaxDepth) unit_0002(c, 61u, depth + 1u); else { c.pc = 0x002096D0u; return; } if (c.pc != 0x00354080u) [[unlikely]] return; }
L_00354080:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035408Cu); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_0039(c, 248u, depth + 1u); else { c.pc = 0x002E7FC0u; return; } if (c.pc != 0x0035408Cu) [[unlikely]] return; }
L_0035408C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 37u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353C30u | kUnwind; return; } [[clang::musttail]] return unit_0054(c, 308u, depth); } }
L_00354094:
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003540A0u); st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0002(c, 60u, depth + 1u); else { c.pc = 0x002096C0u; return; } if (c.pc != 0x003540A0u) [[unlikely]] return; }
L_003540A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003540A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 175u, depth + 1u); else { c.pc = 0x00352560u; return; } if (c.pc != 0x003540A8u) [[unlikely]] return; }
L_003540A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003540B0u);  if (depth < kMaxDepth) unit_0002(c, 61u, depth + 1u); else { c.pc = 0x002096D0u; return; } if (c.pc != 0x003540B0u) [[unlikely]] return; }
L_003540B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 38u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353C3Cu | kUnwind; return; } [[clang::musttail]] return unit_0054(c, 309u, depth); } }
L_003540B8:
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003540C4u); st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0002(c, 60u, depth + 1u); else { c.pc = 0x002096C0u; return; } if (c.pc != 0x003540C4u) [[unlikely]] return; }
L_003540C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003540CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 126u, depth + 1u); else { c.pc = 0x00352000u; return; } if (c.pc != 0x003540CCu) [[unlikely]] return; }
L_003540CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003540D4u);  if (depth < kMaxDepth) unit_0002(c, 61u, depth + 1u); else { c.pc = 0x002096D0u; return; } if (c.pc != 0x003540D4u) [[unlikely]] return; }
L_003540D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353C44u | kUnwind; return; } [[clang::musttail]] return unit_0054(c, 310u, depth); } }
L_003540DC:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29238u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29238u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353CC0u | kUnwind; return; } [[clang::musttail]] return unit_0054(c, 311u, depth); } }
L_003540F0:
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 1936u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353D00u | kUnwind; return; } [[clang::musttail]] return unit_0054(c, 314u, depth); } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1940u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353D00u | kUnwind; return; } [[clang::musttail]] return unit_0054(c, 314u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354118u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_001F(c, 321u, depth + 1u); else { c.pc = 0x0027E740u; return; } if (c.pc != 0x00354118u) [[unlikely]] return; }
L_00354118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 195u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353D04u | kUnwind; return; } [[clang::musttail]] return unit_0054(c, 315u, depth); } }
L_00354120:
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 1936u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353D0Cu | kUnwind; return; } [[clang::musttail]] return unit_0054(c, 316u, depth); } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1940u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353D0Cu | kUnwind; return; } [[clang::musttail]] return unit_0054(c, 316u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354148u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001F(c, 321u, depth + 1u); else { c.pc = 0x0027E740u; return; } if (c.pc != 0x00354148u) [[unlikely]] return; }
L_00354148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 229u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353D10u | kUnwind; return; } [[clang::musttail]] return unit_0054(c, 317u, depth); } }
L_00354150:
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[4].w[0] + 27296u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354164u); st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00B2(c, 7u, depth + 1u); else { c.pc = 0x004C8080u; return; } if (c.pc != 0x00354164u) [[unlikely]] return; }
L_00354164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 145u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353D1Cu | kUnwind; return; } [[clang::musttail]] return unit_0054(c, 318u, depth); } }
L_0035416C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354178u); set32(c.r[4], c.r[4].w[0] + 26720u);  if (depth < kMaxDepth) unit_00B0(c, 62u, depth + 1u); else { c.pc = 0x004C07B0u; return; } if (c.pc != 0x00354178u) [[unlikely]] return; }
L_00354178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353D24u | kUnwind; return; } [[clang::musttail]] return unit_0054(c, 319u, depth); } }
L_00354180:
    set32(c.r[2], ld32((c.r[28].w[0] - 28176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00354194; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[2].w[0] + 24u)));  if (t) { goto L_00354198; } }
L_00354194:
    set32(c.r[6], 0u - 1u);
    c.budget -= 1;
L_00354198:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003541A4u); set32(c.r[4], c.r[4].w[0] + 26720u);  if (depth < kMaxDepth) unit_00B0(c, 78u, depth + 1u); else { c.pc = 0x004C0910u; return; } if (c.pc != 0x003541A4u) [[unlikely]] return; }
L_003541A4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 75u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353D7Cu | kUnwind; return; } [[clang::musttail]] return unit_0054(c, 321u, depth); } }
L_003541B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003541BCu); set32(c.r[4], c.r[4].w[0] + 26720u);  if (depth < kMaxDepth) unit_00B0(c, 73u, depth + 1u); else { c.pc = 0x004C08A0u; return; } if (c.pc != 0x003541BCu) [[unlikely]] return; }
L_003541BC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 75u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353D7Cu | kUnwind; return; } [[clang::musttail]] return unit_0054(c, 321u, depth); } }
L_003541C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003541D4u); set32(c.r[4], c.r[4].w[0] + 26720u);  if (depth < kMaxDepth) unit_00B0(c, 68u, depth + 1u); else { c.pc = 0x004C0830u; return; } if (c.pc != 0x003541D4u) [[unlikely]] return; }
L_003541D4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 75u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353D7Cu | kUnwind; return; } [[clang::musttail]] return unit_0054(c, 321u, depth); } }
L_003541E0:
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 1972u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00354210; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1972u)));
    set32(c.r[2], c.r[2].w[0] - 20u);
    st32((c.r[17].w[0] + 1972u), c.r[2].w[0]);
    c.budget -= 3;
L_00354200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354208u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 153u, depth + 1u); else { c.pc = 0x00355610u; return; } if (c.pc != 0x00354208u) [[unlikely]] return; }
L_00354208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 288u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353D8Cu | kUnwind; return; } [[clang::musttail]] return unit_0054(c, 322u, depth); } }
L_00354210:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035421Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002E(c, 297u, depth + 1u); else { c.pc = 0x002BBF10u; return; } if (c.pc != 0x0035421Cu) [[unlikely]] return; }
L_0035421C:
    set32(c.r[3], 0u + 20u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354234u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002E(c, 297u, depth + 1u); else { c.pc = 0x002BBF10u; return; } if (c.pc != 0x00354234u) [[unlikely]] return; }
L_00354234:
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1972u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354200u | kUnwind; return; } goto L_00354200; } }
L_00354240:
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 1972u)));
    set32(c.r[2], c.r[2].w[0] + 20u);
    st32((c.r[17].w[0] + 1972u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 1972u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354264u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002E(c, 297u, depth + 1u); else { c.pc = 0x002BBF10u; return; } if (c.pc != 0x00354264u) [[unlikely]] return; }
L_00354264:
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00354280; } }
L_00354270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354278u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 153u, depth + 1u); else { c.pc = 0x00355610u; return; } if (c.pc != 0x00354278u) [[unlikely]] return; }
L_00354278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].sd[0] < 268ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353D98u | kUnwind; return; } [[clang::musttail]] return unit_0054(c, 323u, depth); } }
L_00354280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1972u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354270u | kUnwind; return; } goto L_00354270; } }
L_00354288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 270u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00353DECu | kUnwind; return; } [[clang::musttail]] return unit_0054(c, 327u, depth); } }
L_00354290:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003542B0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[21].w[0] + c.r[20].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[22].d[0] = c.r[20].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 23024u);
    set32(c.r[16], c.r[2].w[0] + 40u);
    c.budget -= 18;
L_003542F8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00354348; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00354348; } }
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_00354348; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 2u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[22].d[0] = ld16((c.r[17].w[0] + 2u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035433Cu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 45u, depth + 1u); else { c.pc = 0x003542B0u; return; } if (c.pc != 0x0035433Cu) [[unlikely]] return; }
L_0035433C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00354378; } }
    c.budget -= 1;
L_00354348:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_00354378; } }
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[19].d[0] == 0ull; st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00354378; } }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 2u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354378u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0055(c, 45u, depth + 1u); else { c.pc = 0x003542B0u; return; } if (c.pc != 0x00354378u) [[unlikely]] return; }
L_00354378:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 6u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003542F8u | kUnwind; return; } goto L_003542F8; } }
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003543C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 1928u)));
    c.budget -= 8;
L_003543E0:
    set32(c.r[3], c.r[18].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 40u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00354408; } }
L_003543F0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 358ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003543E0u | kUnwind; return; } goto L_003543E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1928u), c.r[16].w[0]);  if (t) { goto L_00354430; } }
L_00354408:
    st32((c.r[18].w[0] + 1928u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 1928u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354418u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 212u, depth + 1u); else { c.pc = 0x00352E60u; return; } if (c.pc != 0x00354418u) [[unlikely]] return; }
L_00354418:
    set32(c.r[5], ld32((c.r[18].w[0] + 1928u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354424u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 212u, depth + 1u); else { c.pc = 0x00352E60u; return; } if (c.pc != 0x00354424u) [[unlikely]] return; }
L_00354424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003543F0u | kUnwind; return; } goto L_003543F0; } }
    c.budget -= 1;
L_00354430:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00354450:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1943u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00354FB4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1941u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00354668; } }
L_00354480:
    set32(c.r[3], ld32((c.r[17].w[0] + 1988u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00354680; } }
L_0035448C:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[18], c.r[18].w[0] + 3324u);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 1932u)));  if (t) { goto L_003546A8; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003546A8; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 42u));
    c.budget -= 1;
L_003544B4:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003546B0; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00354730; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00354730; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 42u));
    c.budget -= 1;
L_003544E8:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00354738; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003547B8; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003547B8; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 42u));
    c.budget -= 1;
L_0035451C:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003547C0; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00354838; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00354838; } }
L_0035454C:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 42u));
    c.budget -= 1;
L_00354550:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00354864; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 1928u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 23300u);
    c.budget -= 4;
L_00354574:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003545B0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 1944u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 1928u)));
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[3].w[0] + 400u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00354840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1928u), c.r[3].w[0]);  if (t) { goto L_003545C0; } }
L_003545B0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(24ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354574u | kUnwind; return; } goto L_00354574; } }
L_003545C0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1944u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00354FB4; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 1932u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] - 23304u);
    set32(c.r[2], c.r[2].w[0] - 23308u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[19], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00354FA4; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[18], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00354614:
    set32(c.r[5], ld32((c.r[18].w[0] + 496u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354628u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x00354628u) [[unlikely]] return; }
L_00354628:
    set32(c.r[2], 0u - 1u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    st32((c.r[18].w[0] + 496u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 1932u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 23312u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[1].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354614u | kUnwind; return; } goto L_00354614; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00354FA8; } }
L_00354668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354670u);  if (depth < kMaxDepth) unit_0055(c, 132u, depth + 1u); else { c.pc = 0x003552B0u; return; } if (c.pc != 0x00354670u) [[unlikely]] return; }
L_00354670:
    st8((c.r[17].w[0] + 1941u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1942u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354480u | kUnwind; return; } goto L_00354480; } }
L_00354680:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 1988u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 1988u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035448Cu | kUnwind; return; } goto L_0035448C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035469Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 119u, depth + 1u); else { c.pc = 0x00354FD0u; return; } if (c.pc != 0x0035469Cu) [[unlikely]] return; }
L_0035469C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1944u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035448Cu | kUnwind; return; } goto L_0035448C; } }
L_003546A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003544B4u | kUnwind; return; } goto L_003544B4; } }
L_003546B0:
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[17].w[0] + 1944u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 19312u);
    set32(c.r[7], c.r[7].w[0] - 23312u);
    c.budget -= 6;
L_003546C8:
    set32(c.r[3], ld32((c.r[17].w[0] + 1928u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 1928u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 1932u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 1928u)));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00354720; } }
    c.budget -= 1;
L_00354700:
    set32(c.r[3], ld32((c.r[17].w[0] + 1928u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003546C8u | kUnwind; return; } goto L_003546C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003545C0u | kUnwind; return; } goto L_003545C0; } }
L_00354720:
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1928u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354700u | kUnwind; return; } goto L_00354700; } }
L_00354730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003544E8u | kUnwind; return; } goto L_003544E8; } }
L_00354738:
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[17].w[0] + 1944u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 19312u);
    set32(c.r[7], c.r[7].w[0] - 23312u);
    c.budget -= 6;
L_00354750:
    set32(c.r[3], ld32((c.r[17].w[0] + 1928u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 1928u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 1932u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 1928u)));
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003547A8; } }
    c.budget -= 1;
L_00354788:
    set32(c.r[3], ld32((c.r[17].w[0] + 1928u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354750u | kUnwind; return; } goto L_00354750; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003545C0u | kUnwind; return; } goto L_003545C0; } }
L_003547A8:
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1928u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354788u | kUnwind; return; } goto L_00354788; } }
    c.budget -= 1;
L_003547B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035451Cu | kUnwind; return; } goto L_0035451C; } }
L_003547C0:
    set32(c.r[4], 0u + 1u);
    st8((c.r[17].w[0] + 1944u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 1932u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003547F4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1928u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003547E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1928u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003545C0u | kUnwind; return; } goto L_003545C0; } }
L_003547E8:
    set32(c.r[3], 0u + 22u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1928u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003545C0u | kUnwind; return; } goto L_003545C0; } }
L_003547F4:
    st8((c.r[17].w[0] + 1944u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 1932u)));
    set32(c.r[3], c.r[3].w[0] - 23312u);
    set32(c.r[5], ld32((c.r[17].w[0] + 1928u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    st32((c.r[4].w[0] + 400u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 1932u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1928u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003545C0u | kUnwind; return; } goto L_003545C0; } }
L_00354838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354550u | kUnwind; return; } goto L_00354550; } }
L_00354840:
    set32(c.r[4], c.r[6].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] - 23308u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1928u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003545C0u | kUnwind; return; } goto L_003545C0; } }
L_00354864:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00354AD0; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00354AD0; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 42u));
    c.budget -= 1;
L_00354884:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 50;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00354AD8; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00354AF8; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00354AF8; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 42u));
    c.budget -= 1;
L_003548B8:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 49;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00354A40; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 1928u)));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], 0u + 59u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[4].d[0]; c.r[3].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00354900; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 97u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00354900; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 99u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00354900; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00354900:
    c.r[1].d[0] = c.r[5].sd[0] < 119ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00354B00; } }
    c.r[1].d[0] = c.r[5].sd[0] < 142ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00354B00; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00354B00; } }
L_00354924:
    set32(c.r[5], c.r[4].w[0] + 40u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 40u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035493C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00354944; } }
L_0035493C:
    set32(c.r[4], 0u + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_00354944:
    set32(c.r[7], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st8((c.r[17].w[0] + 1944u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] - 23300u);
    set32(c.r[5], ld32((c.r[17].w[0] + 1928u)));
    c.budget -= 5;
L_00354958:
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0035498C; } }
    set32(c.r[4], c.r[5].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 400u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00354B10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1928u), c.r[4].w[0]);  if (t) { goto L_003549A0; } }
L_0035498C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(24ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354958u | kUnwind; return; } goto L_00354958; } }
    c.budget -= 1;
L_003549A0:
    set32(c.r[7], ld32((c.r[17].w[0] + 1932u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 1928u)));
    set32(c.r[4], c.r[4].w[0] - 23308u);
    set32(c.r[5], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_00354A1C; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00354A1C; } }
    set32(c.r[4], c.r[6].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = 0ull + 0ull;
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 1932u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 1928u)));
    set32(c.r[4], c.r[4].w[0] - 23312u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 400u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 1932u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    st32((c.r[17].w[0] + 1928u), c.r[4].w[0]);
    c.budget -= 18;
L_00354A1C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003545C0u | kUnwind; return; } goto L_003545C0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 1928u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354A30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 212u, depth + 1u); else { c.pc = 0x00352E60u; return; } if (c.pc != 0x00354A30u) [[unlikely]] return; }
L_00354A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354A38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 210u, depth + 1u); else { c.pc = 0x00352CE0u; return; } if (c.pc != 0x00354A38u) [[unlikely]] return; }
L_00354A38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003545C0u | kUnwind; return; } goto L_003545C0; } }
L_00354A40:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00354B34; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00354B34; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 42u));
    c.budget -= 1;
L_00354A60:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 51;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00354B44; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00354B3C; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00354B3C; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 42u));
    c.budget -= 1;
L_00354A94:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00354B44; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 100u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003545C0u | kUnwind; return; } goto L_003545C0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 1928u)));
    set32(c.r[4], c.r[28].w[0] - 29240u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354AC8u); st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0053(c, 231u, depth + 1u); else { c.pc = 0x0034F7B0u; return; } if (c.pc != 0x00354AC8u) [[unlikely]] return; }
L_00354AC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003545C0u | kUnwind; return; } goto L_003545C0; } }
L_00354AD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354884u | kUnwind; return; } goto L_00354884; } }
L_00354AD8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 142u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 1944u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 1928u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354AF0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 212u, depth + 1u); else { c.pc = 0x00352E60u; return; } if (c.pc != 0x00354AF0u) [[unlikely]] return; }
L_00354AF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003545C0u | kUnwind; return; } goto L_003545C0; } }
L_00354AF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003548B8u | kUnwind; return; } goto L_003548B8; } }
L_00354B00:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354944u | kUnwind; return; } goto L_00354944; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354924u | kUnwind; return; } goto L_00354924; } }
L_00354B10:
    set32(c.r[5], c.r[7].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] - 23308u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1928u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003549A0u | kUnwind; return; } goto L_003549A0; } }
L_00354B34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354A60u | kUnwind; return; } goto L_00354A60; } }
L_00354B3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354A94u | kUnwind; return; } goto L_00354A94; } }
L_00354B44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354B54u); set32(c.r[5], c.r[5].w[0] + 25088u);  if (depth < kMaxDepth) unit_00A0(c, 232u, depth + 1u); else { c.pc = 0x004835D0u; return; } if (c.pc != 0x00354B54u) [[unlikely]] return; }
L_00354B54:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00354F68; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00354F68; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 42u));
    c.budget -= 1;
L_00354B74:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 51;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00354B90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00354B94; } }
L_00354B90:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00354B94:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00354F70; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00354F70; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 32u));
    c.budget -= 1;
L_00354BB4:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 53;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00354BCC; } }
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 1;
L_00354BCC:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00354F78; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00354F78; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 32u));
    c.budget -= 1;
L_00354BEC:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00354C04; } }
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 1;
L_00354C04:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00354F80; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00354F80; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 32u));
    c.budget -= 1;
L_00354C24:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 52;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00354C3C; } }
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 1;
L_00354C3C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00354F88; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00354F88; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 32u));
    c.budget -= 1;
L_00354C5C:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 54;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00354C74; } }
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 1;
L_00354C74:
    set32(c.r[4], ld32((c.r[17].w[0] + 1928u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 10u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[17].w[0] + 1988u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 1928u)));
    set32(c.r[3], c.r[3].w[0] - 119u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(23ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00354EB4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 11616u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00354000u < 16384u) { entry = entries_0055[(t - 0x00354000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00354CBC:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_00354EB4; } }
L_00354CCC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 132u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 132u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00354EB4; } }
L_00354CE0:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 133u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 133u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00354EB4; } }
L_00354CF4:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 134u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 134u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00354EB4; } }
L_00354D08:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 135u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 135u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00354EB4; } }
L_00354D1C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 112u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 112u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00354EB4; } }
L_00354D30:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 113u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 113u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00354EB4; } }
L_00354D44:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 114u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 114u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00354EB4; } }
L_00354D58:
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 80u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 80u), c.f[0]);  if (t) { goto L_00354EB4; } }
L_00354D70:
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_00354EB4; } }
L_00354D88:
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), c.f[0]);  if (t) { goto L_00354EB4; } }
L_00354DA0:
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 96u), c.f[0]);  if (t) { goto L_00354EB4; } }
L_00354DB8:
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 104u), c.f[0]);  if (t) { goto L_00354EB4; } }
L_00354DD0:
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 100u), c.f[0]);  if (t) { goto L_00354EB4; } }
L_00354DE8:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 115u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 115u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00354EB4; } }
L_00354DFC:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 116u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 116u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00354EB4; } }
L_00354E10:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 117u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 117u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00354EB4; } }
L_00354E24:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 118u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 118u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00354EB4; } }
L_00354E38:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 119u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 119u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00354EB4; } }
L_00354E4C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 120u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 120u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00354EB4; } }
L_00354E60:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[29].w[0] + 121u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 121u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00354EB4; } }
L_00354E74:
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[28].w[0] - 29168u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29168u), c.f[0]);  if (t) { goto L_00354EB4; } }
L_00354E8C:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31764u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[28].w[0] - 31764u), c.f[0]);
    c.budget -= 10;
L_00354EB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354EC4u); set32(c.r[4], c.r[4].w[0] + 25088u);  if (depth < kMaxDepth) unit_00A0(c, 229u, depth + 1u); else { c.pc = 0x00483530u; return; } if (c.pc != 0x00354EC4u) [[unlikely]] return; }
L_00354EC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354ECCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 163u, depth + 1u); else { c.pc = 0x00355730u; return; } if (c.pc != 0x00354ECCu) [[unlikely]] return; }
L_00354ECC:
    set32(c.r[5], ld32((c.r[17].w[0] + 1932u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] - 23304u);
    set32(c.r[2], c.r[2].w[0] - 23308u);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[19], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00354F90; } }
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[18], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00354F14:
    set32(c.r[5], ld32((c.r[18].w[0] + 496u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354F28u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x00354F28u) [[unlikely]] return; }
L_00354F28:
    set32(c.r[2], 0u - 1u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    st32((c.r[18].w[0] + 496u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 1932u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 23312u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[1].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354F14u | kUnwind; return; } goto L_00354F14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00354F94; } }
L_00354F68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354B74u | kUnwind; return; } goto L_00354B74; } }
L_00354F70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354BB4u | kUnwind; return; } goto L_00354BB4; } }
L_00354F78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354BECu | kUnwind; return; } goto L_00354BEC; } }
L_00354F80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354C24u | kUnwind; return; } goto L_00354C24; } }
L_00354F88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00354C5Cu | kUnwind; return; } goto L_00354C5C; } }
L_00354F90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00354F94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354F9Cu); st32((c.r[17].w[0] + 1932u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0054(c, 191u, depth + 1u); else { c.pc = 0x00352660u; return; } if (c.pc != 0x00354F9Cu) [[unlikely]] return; }
L_00354F9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1944u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003545C0u | kUnwind; return; } goto L_003545C0; } }
L_00354FA4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00354FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00354FB0u); st32((c.r[17].w[0] + 1932u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0054(c, 191u, depth + 1u); else { c.pc = 0x00352660u; return; } if (c.pc != 0x00354FB0u) [[unlikely]] return; }
L_00354FB0:
    st8((c.r[17].w[0] + 1944u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00354FB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00354FD0:
    st8((c.r[4].w[0] + 127u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 126u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 128u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 129u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 130u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 131u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 132u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 133u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 123u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 124u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 108u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 111u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
L_00355000:
    st8((c.r[4].w[0] + 112u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 214u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 76u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 88u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 89u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 90u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 99u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 85u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 86u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 159u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 160u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 161u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 162u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 163u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 170u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 171u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 172u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 173u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 174u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 175u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 176u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 177u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 178u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 179u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 180u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 181u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 154u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 155u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 156u), static_cast<std::uint8_t>(0u));
    c.budget -= 31;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 142u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00355080:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] - 23304u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 23308u);
    st8((c.r[4].w[0] + 1943u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[4].w[0] + 1932u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[17], c.r[3].w[0] - 1u);
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003551FC; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 98u));
    c.budget -= 1;
L_003550E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355120; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 29024u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00355150; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], ld32((c.r[2].w[0] - 20360u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 811u));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 811u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00355150; } }
L_00355120:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 29024u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00355150; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[5], ld32((c.r[2].w[0] - 20360u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 811u));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 811u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_00355150:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 97u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355180; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 29024u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355258; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 3744u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355180u); set32(c.r[5], c.r[5].w[0] - 3658u);  if (depth < kMaxDepth) unit_006F(c, 58u, depth + 1u); else { c.pc = 0x003BD1A0u; return; } if (c.pc != 0x00355180u) [[unlikely]] return; }
L_00355180:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 304u));
    c.budget -= 1;
L_00355184:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003551B8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 1992u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003551B8; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 31228u));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 118u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003551B8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003551B8u); st8((c.r[18].w[0] + 118u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0054(c, 210u, depth + 1u); else { c.pc = 0x00352CE0u; return; } if (c.pc != 0x003551B8u) [[unlikely]] return; }
L_003551B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003551C4u); st32((c.r[18].w[0] + 1992u), 0u);  if (depth < kMaxDepth) unit_0055(c, 119u, depth + 1u); else { c.pc = 0x00354FD0u; return; } if (c.pc != 0x003551C4u) [[unlikely]] return; }
L_003551C4:
    st8((c.r[18].w[0] + 1941u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st8((c.r[18].w[0] + 1942u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 20848u);
    set32(c.r[5], c.r[5].w[0] + 12165u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003551E4u); st32((c.r[18].w[0] + 1988u), 0u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003551E4u) [[unlikely]] return; }
L_003551E4:
    set32(c.r[4], ld32((c.r[18].w[0] + 1932u)));
    set32(c.r[3], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00355284; } }
L_003551F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00355290; } }
L_003551FC:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[16], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00355204:
    set32(c.r[5], ld32((c.r[16].w[0] + 496u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355218u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x00355218u) [[unlikely]] return; }
L_00355218:
    set32(c.r[2], 0u - 1u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    st32((c.r[16].w[0] + 496u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 1932u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], c.r[2].w[0] - 23312u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[1].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355204u | kUnwind; return; } goto L_00355204; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[18].w[0] + 98u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003550E0u | kUnwind; return; } goto L_003550E0; } }
L_00355258:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20360u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355180u | kUnwind; return; } goto L_00355180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035527Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 312u, depth + 1u); else { c.pc = 0x00283F50u; return; } if (c.pc != 0x0035527Cu) [[unlikely]] return; }
L_0035527C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[18].w[0] + 304u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355184u | kUnwind; return; } goto L_00355184; } }
L_00355284:
    st32((c.r[18].w[0] + 1932u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 1928u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003551F4u | kUnwind; return; } goto L_003551F4; } }
L_00355290:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003552B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 1943u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1941u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003552E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1941u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003555EC; } }
L_003552E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003552ECu); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0052(c, 189u, depth + 1u); else { c.pc = 0x0034BDC0u; return; } if (c.pc != 0x003552ECu) [[unlikely]] return; }
L_003552EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003552F8u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 3u, depth + 1u); else { c.pc = 0x002BC040u; return; } if (c.pc != 0x003552F8u) [[unlikely]] return; }
L_003552F8:
    st8((c.r[18].w[0] + 242u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[17], 0u + 290u);
    set32(c.r[3], ld32((c.r[2].w[0] - 10284u)));
    set32(c.r[16], c.r[16].w[0] - 27664u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 1980u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 21216u)));
    st32((c.r[18].w[0] + 1984u), c.r[2].w[0]);
    c.budget -= 10;
L_00355320:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355330u); set32(c.r[5], c.r[5].w[0] + 12165u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00355330u) [[unlikely]] return; }
L_00355330:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(358ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355320u | kUnwind; return; } goto L_00355320; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 12166u);
    set32(c.r[5], c.r[5].w[0] - 27664u);
    c.budget -= 4;
L_00355350:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355350u | kUnwind; return; } goto L_00355350; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 12166u);
    set32(c.r[5], c.r[5].w[0] - 25488u);
    c.budget -= 4;
L_0035537C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035537Cu | kUnwind; return; } goto L_0035537C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355530; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 31504u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003553BCu); set32(c.r[5], c.r[5].w[0] + 12171u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x003553BCu) [[unlikely]] return; }
L_003553BC:
    set32(c.r[2], ld32((c.r[18].w[0] + 1980u)));
    c.budget -= 1;
L_003553C0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00355564; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1984u)));
    c.budget -= 1;
L_003553D0:
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00355438; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] - 21424u);
    set32(c.r[4], c.r[4].w[0] + 19312u);
    c.budget -= 4;
L_003553EC:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + 325u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[3], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[8], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[3].w[0] + 4u);
    c.budget -= 7;
L_00355408:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355408u | kUnwind; return; } goto L_00355408; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1984u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003553ECu | kUnwind; return; } goto L_003553EC; } }
L_00355438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355440u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 163u, depth + 1u); else { c.pc = 0x00355730u; return; } if (c.pc != 0x00355440u) [[unlikely]] return; }
L_00355440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355448u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 153u, depth + 1u); else { c.pc = 0x00355610u; return; } if (c.pc != 0x00355448u) [[unlikely]] return; }
L_00355448:
    st8((c.r[18].w[0] + 67u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[18].w[0] + 68u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 69u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 70u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[2].w[0] - 17640u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003555D8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003555E4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00355488; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035548C; } }
L_00355488:
    st8((c.r[18].w[0] + 67u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_0035548C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355498u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_0032(c, 10u, depth + 1u); else { c.pc = 0x002C82C0u; return; } if (c.pc != 0x00355498u) [[unlikely]] return; }
L_00355498:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < 501ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003554B4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 83u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003554B8; } }
L_003554B4:
    st8((c.r[18].w[0] + 83u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003554B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 20360u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 811u));
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003554E4; } }
    c.r[2].d[0] = c.r[3].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_003554E4:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st8((c.r[18].w[0] + 98u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 98u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] + 18224u);
    set32(c.r[4], c.r[4].w[0] + 26544u);
    set32(c.r[5], c.r[5].w[0] + 12131u);
    st8((c.r[18].w[0] + 116u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[18].w[0] + 1996u), 0u);
    set32(c.r[7], ld32((c.r[18].w[0] + 1996u)));
    set32(c.r[3], c.r[7].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355524u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00355524u) [[unlikely]] return; }
L_00355524:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 1944u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003555EC; } }
L_00355530:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[4].w[0] + 12186u);
    set32(c.r[5], c.r[5].w[0] - 31504u);
    c.budget -= 4;
L_00355540:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355540u | kUnwind; return; } goto L_00355540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 1980u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003553C0u | kUnwind; return; } goto L_003553C0; } }
L_00355564:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00355568:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 10288u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00355588u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00355588u) [[unlikely]] return; }
L_00355588:
    set32(c.r[4], c.r[16].w[0] + 291u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + 19312u);
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
L_003555A0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003555A0u | kUnwind; return; } goto L_003555A0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 1980u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355568u | kUnwind; return; } goto L_00355568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 1984u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003553D0u | kUnwind; return; } goto L_003553D0; } }
L_003555D8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 70u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035548Cu | kUnwind; return; } goto L_0035548C; } }
L_003555E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 69u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035548Cu | kUnwind; return; } goto L_0035548C; } }
L_003555EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00355610:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[4].w[0] + 1972u)));
    set32(c.r[16], 0u + 268u);
    set32(c.r[18], c.r[18].w[0] - 29072u);
    c.budget -= 12;
L_00355640:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(288ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003556C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355658u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002E(c, 297u, depth + 1u); else { c.pc = 0x002BBF10u; return; } if (c.pc != 0x00355658u) [[unlikely]] return; }
L_00355658:
    c.r[1].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003556C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355678u); set32(c.r[20], c.r[20].w[0] + 1u);  if (depth < kMaxDepth) unit_002E(c, 296u, depth + 1u); else { c.pc = 0x002BBEF0u; return; } if (c.pc != 0x00355678u) [[unlikely]] return; }
L_00355678:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035568Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035568Cu) [[unlikely]] return; }
L_0035568C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035569Cu); set32(c.r[6], 0u + 40u);  if (depth < kMaxDepth) unit_000D(c, 72u, depth + 1u); else { c.pc = 0x00235488u; return; } if (c.pc != 0x0035569Cu) [[unlikely]] return; }
L_0035569C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003556A8u); st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x003556A8u) [[unlikely]] return; }
L_003556A8:
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[18], c.r[18].w[0] + 64u);
    st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355640u | kUnwind; return; } goto L_00355640; } }
    c.budget -= 1;
L_003556C0:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(288ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003556D4; } }
L_003556CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00355714; } }
L_003556D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[16].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + 19312u);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_003556E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003556F4u); set32(c.r[5], c.r[5].w[0] + 12165u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003556F4u) [[unlikely]] return; }
L_003556F4:
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(288ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003556E4u | kUnwind; return; } goto L_003556E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003556CCu | kUnwind; return; } goto L_003556CC; } }
L_00355714:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00355730:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355748u); set32(c.r[5], c.r[5].w[0] + 25088u);  if (depth < kMaxDepth) unit_00A0(c, 232u, depth + 1u); else { c.pc = 0x004835D0u; return; } if (c.pc != 0x00355748u) [[unlikely]] return; }
L_00355748:
    set32(c.r[6], ld32((c.r[29].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 26941u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355760u); set32(c.r[5], c.r[5].w[0] + 12200u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00355760u) [[unlikely]] return; }
L_00355760:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 68u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 27005u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355778u); set32(c.r[5], c.r[5].w[0] + 12200u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00355778u) [[unlikely]] return; }
L_00355778:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 69u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 27069u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355790u); set32(c.r[5], c.r[5].w[0] + 12200u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00355790u) [[unlikely]] return; }
L_00355790:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 70u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 27133u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003557A8u); set32(c.r[5], c.r[5].w[0] + 12200u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x003557A8u) [[unlikely]] return; }
L_003557A8:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 71u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 27197u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003557C0u); set32(c.r[5], c.r[5].w[0] + 12200u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x003557C0u) [[unlikely]] return; }
L_003557C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003557C8u); c.f[12] = ld32((c.r[29].w[0] + 16u));  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x003557C8u) [[unlikely]] return; }
L_003557C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 27261u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003557E0u); set32(c.r[5], c.r[5].w[0] + 12203u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x003557E0u) [[unlikely]] return; }
L_003557E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003557E8u); c.f[12] = ld32((c.r[29].w[0] + 24u));  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x003557E8u) [[unlikely]] return; }
L_003557E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 27325u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355800u); set32(c.r[5], c.r[5].w[0] + 12203u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00355800u) [[unlikely]] return; }
L_00355800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355808u); c.f[12] = ld32((c.r[29].w[0] + 20u));  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x00355808u) [[unlikely]] return; }
L_00355808:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 27389u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355820u); set32(c.r[5], c.r[5].w[0] + 12203u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00355820u) [[unlikely]] return; }
L_00355820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355828u); c.f[12] = ld32((c.r[29].w[0] + 32u));  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x00355828u) [[unlikely]] return; }
L_00355828:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 27453u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355840u); set32(c.r[5], c.r[5].w[0] + 12203u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00355840u) [[unlikely]] return; }
L_00355840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355848u); c.f[12] = ld32((c.r[29].w[0] + 40u));  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x00355848u) [[unlikely]] return; }
L_00355848:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 27517u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355860u); set32(c.r[5], c.r[5].w[0] + 12203u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00355860u) [[unlikely]] return; }
L_00355860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355868u); c.f[12] = ld32((c.r[29].w[0] + 36u));  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x00355868u) [[unlikely]] return; }
L_00355868:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 27581u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355880u); set32(c.r[5], c.r[5].w[0] + 12203u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00355880u) [[unlikely]] return; }
L_00355880:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 48u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 27645u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355898u); set32(c.r[5], c.r[5].w[0] + 12200u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00355898u) [[unlikely]] return; }
L_00355898:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 49u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 27709u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003558B0u); set32(c.r[5], c.r[5].w[0] + 12200u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x003558B0u) [[unlikely]] return; }
L_003558B0:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 50u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 27773u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003558C8u); set32(c.r[5], c.r[5].w[0] + 12200u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x003558C8u) [[unlikely]] return; }
L_003558C8:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 51u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 27837u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003558E0u); set32(c.r[5], c.r[5].w[0] + 12200u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x003558E0u) [[unlikely]] return; }
L_003558E0:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 52u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 27901u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003558F8u); set32(c.r[5], c.r[5].w[0] + 12200u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x003558F8u) [[unlikely]] return; }
L_003558F8:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 53u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 27965u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355910u); set32(c.r[5], c.r[5].w[0] + 12200u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00355910u) [[unlikely]] return; }
L_00355910:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 54u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 28029u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355928u); set32(c.r[5], c.r[5].w[0] + 12200u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00355928u) [[unlikely]] return; }
L_00355928:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 55u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 28093u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355940u); set32(c.r[5], c.r[5].w[0] + 12200u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00355940u) [[unlikely]] return; }
L_00355940:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 56u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 28157u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355958u); set32(c.r[5], c.r[5].w[0] + 12200u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00355958u) [[unlikely]] return; }
L_00355958:
    c.r[6].d[0] = ld8((c.r[29].w[0] + 57u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 28221u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355970u); set32(c.r[5], c.r[5].w[0] + 12200u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00355970u) [[unlikely]] return; }
L_00355970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355978u); c.f[12] = ld32((c.r[28].w[0] - 29168u));  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x00355978u) [[unlikely]] return; }
L_00355978:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28285u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355990u); set32(c.r[5], c.r[5].w[0] + 12206u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00355990u) [[unlikely]] return; }
L_00355990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355998u); c.f[12] = ld32((c.r[28].w[0] - 31764u));  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x00355998u) [[unlikely]] return; }
L_00355998:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 28349u);
    set32(c.r[5], c.r[5].w[0] + 12212u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003559B0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x003559B0u) [[unlikely]] return; }
L_003559B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003559C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41500000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[4].w[0] + 1928u), 0u);
    st32((c.r[4].w[0] + 1932u), 0u);
    st8((c.r[2].w[0] - 27728u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003559F8u); st32((c.r[4].w[0] + 1996u), 0u);  if (depth < kMaxDepth) unit_0054(c, 206u, depth + 1u); else { c.pc = 0x00352B60u; return; } if (c.pc != 0x003559F8u) [[unlikely]] return; }
L_003559F8:
    set32(c.r[2], 0u + 64u);
    set32(c.r[8], 0u + 128u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x43160000u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x47800000u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[4], 0u + 400u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 100u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[16].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 1941u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1942u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1943u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1968u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 1969u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1972u), 0u);
    st32((c.r[16].w[0] + 1992u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00355A80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00355AE8; } }
    set32(c.r[2], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355AD0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 3240u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355AD0; } }
L_00355AB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 3240u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 3240u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 3240u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355AB0u | kUnwind; return; } goto L_00355AB0; } }
    c.budget -= 1;
L_00355AD0:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00355AE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355AE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00355AE8u) [[unlikely]] return; }
L_00355AE8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00355B00:
    set32(c.r[29], c.r[29].w[0] - 1184u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355B28u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0056(c, 446u, depth + 1u); else { c.pc = 0x0035B830u; return; } if (c.pc != 0x00355B28u) [[unlikely]] return; }
L_00355B28:
    st32((c.r[18].w[0] + 12u), 0u);
    set32(c.r[4], c.r[29].w[0] + 976u);
    set32(c.r[5], c.r[18].w[0] + 220u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355B3Cu); st32((c.r[18].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_0056(c, 445u, depth + 1u); else { c.pc = 0x0035B810u; return; } if (c.pc != 0x00355B3Cu) [[unlikely]] return; }
L_00355B3C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355B48u); set32(c.r[5], c.r[18].w[0] + 220u);  if (depth < kMaxDepth) unit_0056(c, 96u, depth + 1u); else { c.pc = 0x00358880u; return; } if (c.pc != 0x00355B48u) [[unlikely]] return; }
L_00355B48:
    set32(c.r[4], c.r[29].w[0] + 976u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355B54u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0056(c, 93u, depth + 1u); else { c.pc = 0x00358830u; return; } if (c.pc != 0x00355B54u) [[unlikely]] return; }
L_00355B54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355C1C; } }
L_00355B5C:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[29].w[0] + 976u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355B6Cu); st32((c.r[18].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 444u, depth + 1u); else { c.pc = 0x0035B800u; return; } if (c.pc != 0x00355B6Cu) [[unlikely]] return; }
L_00355B6C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 976u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355B7Cu); st32((c.r[18].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 444u, depth + 1u); else { c.pc = 0x0035B800u; return; } if (c.pc != 0x00355B7Cu) [[unlikely]] return; }
L_00355B7C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[17], c.r[2].w[0] + 4u);
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355B90u); set32(c.r[5], c.r[5].w[0] + 12359u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00355B90u) [[unlikely]] return; }
L_00355B90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355B9Cu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00355B9Cu) [[unlikely]] return; }
L_00355B9C:
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00355C24; } }
L_00355BA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 1156u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355BB8u); set32(c.r[5], c.r[5].w[0] + 12362u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00355BB8u) [[unlikely]] return; }
L_00355BB8:
    c.r[5].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355BC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00355BC4u) [[unlikely]] return; }
L_00355BC4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1152u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355BD4u); set32(c.r[6], c.r[29].w[0] + 1156u);  if (depth < kMaxDepth) unit_000E(c, 302u, depth + 1u); else { c.pc = 0x0023B790u; return; } if (c.pc != 0x00355BD4u) [[unlikely]] return; }
L_00355BD4:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355BE0u); set32(c.r[5], c.r[29].w[0] + 1152u);  if (depth < kMaxDepth) unit_0056(c, 441u, depth + 1u); else { c.pc = 0x0035B7A0u; return; } if (c.pc != 0x00355BE0u) [[unlikely]] return; }
L_00355BE0:
    set32(c.r[4], c.r[29].w[0] + 1152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355BECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00355BECu) [[unlikely]] return; }
L_00355BEC:
    set32(c.r[4], c.r[29].w[0] + 1156u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355BF8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00355BF8u) [[unlikely]] return; }
L_00355BF8:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355C08u); c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00355C08u) [[unlikely]] return; }
L_00355C08:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355BA8u | kUnwind; return; } goto L_00355BA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00355C28; } }
L_00355C1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_00355C24:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00355C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355C30u);  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00355C30u) [[unlikely]] return; }
L_00355C30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356694; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355C44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00355C44u) [[unlikely]] return; }
L_00355C44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355C54u); set32(c.r[5], c.r[5].w[0] + 12364u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00355C54u) [[unlikely]] return; }
L_00355C54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00356694; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355C68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00355C68u) [[unlikely]] return; }
L_00355C68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355C78u); set32(c.r[5], c.r[5].w[0] + 12367u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00355C78u) [[unlikely]] return; }
L_00355C78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00356694; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355C8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00355C8Cu) [[unlikely]] return; }
L_00355C8C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355C9Cu); set32(c.r[5], c.r[5].w[0] + 12373u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00355C9Cu) [[unlikely]] return; }
L_00355C9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355D94; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355CB0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00355CB0u) [[unlikely]] return; }
L_00355CB0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355CC0u); set32(c.r[5], c.r[18].w[0] + 80u);  if (depth < kMaxDepth) unit_0056(c, 434u, depth + 1u); else { c.pc = 0x0035B690u; return; } if (c.pc != 0x00355CC0u) [[unlikely]] return; }
L_00355CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355CC8u); set32(c.r[4], c.r[29].w[0] + 1128u);  if (depth < kMaxDepth) unit_0056(c, 415u, depth + 1u); else { c.pc = 0x0035B4D0u; return; } if (c.pc != 0x00355CC8u) [[unlikely]] return; }
L_00355CC8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355CD8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0056(c, 412u, depth + 1u); else { c.pc = 0x0035B470u; return; } if (c.pc != 0x00355CD8u) [[unlikely]] return; }
L_00355CD8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355CE4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x00355CE4u) [[unlikely]] return; }
L_00355CE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003566D0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355CF8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_005C(c, 44u, depth + 1u); else { c.pc = 0x00370390u; return; } if (c.pc != 0x00355CF8u) [[unlikely]] return; }
L_00355CF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003566D0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355D0Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00355D0Cu) [[unlikely]] return; }
L_00355D0C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355D18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00355D18u) [[unlikely]] return; }
L_00355D18:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355D24u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00355D24u) [[unlikely]] return; }
L_00355D24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355D34u); set32(c.r[5], c.r[5].w[0] + 12378u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00355D34u) [[unlikely]] return; }
L_00355D34:
    set32(c.r[25], ld32((c.r[16].w[0] + 12u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00355D48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00355D48u) [[unlikely]] return; }
L_00355D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355D50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00355D50u) [[unlikely]] return; }
L_00355D50:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00356694; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355D68u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00355D68u) [[unlikely]] return; }
L_00355D68:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355D74u); set32(c.r[4], c.r[29].w[0] + 1148u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x00355D74u) [[unlikely]] return; }
L_00355D74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355D7Cu); set32(c.r[4], c.r[29].w[0] + 1148u);  if (depth < kMaxDepth) unit_005C(c, 73u, depth + 1u); else { c.pc = 0x003705F0u; return; } if (c.pc != 0x00355D7Cu) [[unlikely]] return; }
L_00355D7C:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1148u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355D8Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00355D8Cu) [[unlikely]] return; }
L_00355D8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 1180u);  if (t) { goto L_00356698; } }
L_00355D94:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355DA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00355DA0u) [[unlikely]] return; }
L_00355DA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355DB0u); set32(c.r[5], c.r[5].w[0] + 12383u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00355DB0u) [[unlikely]] return; }
L_00355DB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355EA8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355DC4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00355DC4u) [[unlikely]] return; }
L_00355DC4:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355DD4u); set32(c.r[5], c.r[18].w[0] + 100u);  if (depth < kMaxDepth) unit_0056(c, 409u, depth + 1u); else { c.pc = 0x0035B410u; return; } if (c.pc != 0x00355DD4u) [[unlikely]] return; }
L_00355DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355DDCu); set32(c.r[4], c.r[29].w[0] + 1120u);  if (depth < kMaxDepth) unit_0056(c, 407u, depth + 1u); else { c.pc = 0x0035B3E0u; return; } if (c.pc != 0x00355DDCu) [[unlikely]] return; }
L_00355DDC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355DECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0056(c, 404u, depth + 1u); else { c.pc = 0x0035B380u; return; } if (c.pc != 0x00355DECu) [[unlikely]] return; }
L_00355DEC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355DF8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x00355DF8u) [[unlikely]] return; }
L_00355DF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003566E4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355E0Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_005C(c, 37u, depth + 1u); else { c.pc = 0x00370300u; return; } if (c.pc != 0x00355E0Cu) [[unlikely]] return; }
L_00355E0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003566E4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355E20u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00355E20u) [[unlikely]] return; }
L_00355E20:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355E2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00355E2Cu) [[unlikely]] return; }
L_00355E2C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355E38u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00355E38u) [[unlikely]] return; }
L_00355E38:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355E44u); set32(c.r[4], c.r[29].w[0] + 1144u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x00355E44u) [[unlikely]] return; }
L_00355E44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355E4Cu); set32(c.r[4], c.r[29].w[0] + 1144u);  if (depth < kMaxDepth) unit_005C(c, 73u, depth + 1u); else { c.pc = 0x003705F0u; return; } if (c.pc != 0x00355E4Cu) [[unlikely]] return; }
L_00355E4C:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 1144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355E5Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00355E5Cu) [[unlikely]] return; }
L_00355E5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355E64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00355E64u) [[unlikely]] return; }
L_00355E64:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00356694; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355E7Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00355E7Cu) [[unlikely]] return; }
L_00355E7C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355E88u); set32(c.r[4], c.r[29].w[0] + 1140u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x00355E88u) [[unlikely]] return; }
L_00355E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355E90u); set32(c.r[4], c.r[29].w[0] + 1140u);  if (depth < kMaxDepth) unit_005C(c, 73u, depth + 1u); else { c.pc = 0x003705F0u; return; } if (c.pc != 0x00355E90u) [[unlikely]] return; }
L_00355E90:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355EA0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00355EA0u) [[unlikely]] return; }
L_00355EA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00356694; } }
L_00355EA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355EB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00355EB4u) [[unlikely]] return; }
L_00355EB4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355EC4u); set32(c.r[5], c.r[5].w[0] + 12387u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00355EC4u) [[unlikely]] return; }
L_00355EC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003566F8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355ED8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00355ED8u) [[unlikely]] return; }
L_00355ED8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355EE8u); set32(c.r[5], c.r[5].w[0] + 12392u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00355EE8u) [[unlikely]] return; }
L_00355EE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003568A8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355EFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00355EFCu) [[unlikely]] return; }
L_00355EFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F0Cu); set32(c.r[5], c.r[5].w[0] + 12397u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00355F0Cu) [[unlikely]] return; }
L_00355F0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00355FB8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F20u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00355F20u) [[unlikely]] return; }
L_00355F20:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F30u); set32(c.r[5], c.r[18].w[0] + 140u);  if (depth < kMaxDepth) unit_0056(c, 291u, depth + 1u); else { c.pc = 0x00359FB0u; return; } if (c.pc != 0x00355F30u) [[unlikely]] return; }
L_00355F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F38u); set32(c.r[4], c.r[29].w[0] + 1104u);  if (depth < kMaxDepth) unit_0056(c, 289u, depth + 1u); else { c.pc = 0x00359F80u; return; } if (c.pc != 0x00355F38u) [[unlikely]] return; }
L_00355F38:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F48u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0056(c, 286u, depth + 1u); else { c.pc = 0x00359F20u; return; } if (c.pc != 0x00355F48u) [[unlikely]] return; }
    goto L_00355F48;
L_00355F44:
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_00355F48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F54u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x00355F54u) [[unlikely]] return; }
L_00355F54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003568F0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F68u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00355F68u) [[unlikely]] return; }
L_00355F68:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00355F74u) [[unlikely]] return; }
L_00355F74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F80u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00355F80u) [[unlikely]] return; }
L_00355F80:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F8Cu); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00355F8Cu) [[unlikely]] return; }
L_00355F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355F94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x00355F94u) [[unlikely]] return; }
L_00355F94:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355FA0u); set32(c.r[4], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_0056(c, 293u, depth + 1u); else { c.pc = 0x0035A000u; return; } if (c.pc != 0x00355FA0u) [[unlikely]] return; }
L_00355FA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355FB0u); set32(c.r[4], c.r[4].w[0] + 3376u);  if (depth < kMaxDepth) unit_001B(c, 91u, depth + 1u); else { c.pc = 0x0026CD90u; return; } if (c.pc != 0x00355FB0u) [[unlikely]] return; }
L_00355FB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00356694; } }
L_00355FB8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355FC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00355FC4u) [[unlikely]] return; }
L_00355FC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355FD4u); set32(c.r[5], c.r[5].w[0] + 12403u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00355FD4u) [[unlikely]] return; }
L_00355FD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356148; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355FE8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00355FE8u) [[unlikely]] return; }
L_00355FE8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1096u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00355FF8u); set32(c.r[5], c.r[18].w[0] + 160u);  if (depth < kMaxDepth) unit_0056(c, 284u, depth + 1u); else { c.pc = 0x00359ED0u; return; } if (c.pc != 0x00355FF8u) [[unlikely]] return; }
L_00355FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356000u); set32(c.r[4], c.r[29].w[0] + 1096u);  if (depth < kMaxDepth) unit_0056(c, 282u, depth + 1u); else { c.pc = 0x00359EA0u; return; } if (c.pc != 0x00356000u) [[unlikely]] return; }
L_00356000:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1096u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356010u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0056(c, 279u, depth + 1u); else { c.pc = 0x00359E40u; return; } if (c.pc != 0x00356010u) [[unlikely]] return; }
L_00356010:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035601Cu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035601Cu) [[unlikely]] return; }
L_0035601C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356918; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356030u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x00356030u) [[unlikely]] return; }
L_00356030:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356918; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356044u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x00356044u) [[unlikely]] return; }
L_00356044:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356918; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356058u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x00356058u) [[unlikely]] return; }
L_00356058:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356918; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035606Cu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x0035606Cu) [[unlikely]] return; }
L_0035606C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356918; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356080u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356080u) [[unlikely]] return; }
L_00356080:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035608Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x0035608Cu) [[unlikely]] return; }
L_0035608C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356098u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356098u) [[unlikely]] return; }
L_00356098:
    set32(c.r[4], c.r[18].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003560A4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 262u, depth + 1u); else { c.pc = 0x00359CB0u; return; } if (c.pc != 0x003560A4u) [[unlikely]] return; }
L_003560A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356904; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003560C4u); st32((c.r[29].w[0] + 1176u), 0u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003560C4u) [[unlikely]] return; }
L_003560C4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003560D0u); set32(c.r[5], c.r[29].w[0] + 1176u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x003560D0u) [[unlikely]] return; }
L_003560D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 1176u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003560E8u); st32((c.r[29].w[0] + 1172u), 0u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003560E8u) [[unlikely]] return; }
L_003560E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003560F4u); set32(c.r[5], c.r[29].w[0] + 1172u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x003560F4u) [[unlikely]] return; }
L_003560F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 1172u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    st16((c.r[16].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035610Cu); st32((c.r[29].w[0] + 1168u), 0u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035610Cu) [[unlikely]] return; }
L_0035610C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356118u); set32(c.r[5], c.r[29].w[0] + 1168u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00356118u) [[unlikely]] return; }
L_00356118:
    set32(c.r[2], ld32((c.r[29].w[0] + 1168u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356130u); st32((c.r[29].w[0] + 1164u), 0u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356130u) [[unlikely]] return; }
L_00356130:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035613Cu); set32(c.r[5], c.r[29].w[0] + 1164u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035613Cu) [[unlikely]] return; }
L_0035613C:
    set32(c.r[2], ld32((c.r[29].w[0] + 1164u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00356694; } }
L_00356148:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356154u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356154u) [[unlikely]] return; }
L_00356154:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356164u); set32(c.r[5], c.r[5].w[0] + 12411u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00356164u) [[unlikely]] return; }
L_00356164:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035692C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356178u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356178u) [[unlikely]] return; }
L_00356178:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356188u); set32(c.r[5], c.r[5].w[0] + 12418u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00356188u) [[unlikely]] return; }
L_00356188:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00356C2C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035619Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035619Cu) [[unlikely]] return; }
L_0035619C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003561ACu); set32(c.r[5], c.r[5].w[0] + 12427u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x003561ACu) [[unlikely]] return; }
L_003561AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00356FBC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003561C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003561C0u) [[unlikely]] return; }
L_003561C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003561D0u); set32(c.r[5], c.r[5].w[0] + 12434u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x003561D0u) [[unlikely]] return; }
L_003561D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003573C0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003561E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003561E4u) [[unlikely]] return; }
L_003561E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003561F4u); set32(c.r[5], c.r[5].w[0] + 12441u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x003561F4u) [[unlikely]] return; }
L_003561F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356294; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356208u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356208u) [[unlikely]] return; }
L_00356208:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356218u); set32(c.r[5], c.r[18].w[0] + 180u);  if (depth < kMaxDepth) unit_0056(c, 186u, depth + 1u); else { c.pc = 0x00359270u; return; } if (c.pc != 0x00356218u) [[unlikely]] return; }
L_00356218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356220u); set32(c.r[4], c.r[29].w[0] + 1040u);  if (depth < kMaxDepth) unit_0056(c, 184u, depth + 1u); else { c.pc = 0x00359240u; return; } if (c.pc != 0x00356220u) [[unlikely]] return; }
L_00356220:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356230u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0056(c, 181u, depth + 1u); else { c.pc = 0x003591E0u; return; } if (c.pc != 0x00356230u) [[unlikely]] return; }
L_00356230:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035623Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035623Cu) [[unlikely]] return; }
L_0035623C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003578A0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356250u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356250u) [[unlikely]] return; }
L_00356250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356258u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x00356258u) [[unlikely]] return; }
L_00356258:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356264u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0056(c, 293u, depth + 1u); else { c.pc = 0x0035A000u; return; } if (c.pc != 0x00356264u) [[unlikely]] return; }
L_00356264:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 648u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0035627Cu); set32(c.r[5], c.r[29].w[0] + 176u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0035627Cu) [[unlikely]] return; }
L_0035627C:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 648u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035628Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 180u, depth + 1u); else { c.pc = 0x003591C0u; return; } if (c.pc != 0x0035628Cu) [[unlikely]] return; }
L_0035628C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00356694; } }
L_00356294:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003562A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003562A0u) [[unlikely]] return; }
L_003562A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003562B0u); set32(c.r[5], c.r[5].w[0] + 12447u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x003562B0u) [[unlikely]] return; }
L_003562B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003578B4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003562C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003562C4u) [[unlikely]] return; }
L_003562C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003562D4u); set32(c.r[5], c.r[5].w[0] + 12451u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x003562D4u) [[unlikely]] return; }
L_003562D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00357AE0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003562E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003562E8u) [[unlikely]] return; }
L_003562E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003562F8u); set32(c.r[5], c.r[5].w[0] + 12456u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x003562F8u) [[unlikely]] return; }
L_003562F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00357F98; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035630Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035630Cu) [[unlikely]] return; }
L_0035630C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035631Cu); set32(c.r[5], c.r[5].w[0] + 12461u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035631Cu) [[unlikely]] return; }
L_0035631C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 14u, depth); } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356330u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356330u) [[unlikely]] return; }
L_00356330:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356340u); set32(c.r[5], c.r[5].w[0] + 12469u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00356340u) [[unlikely]] return; }
L_00356340:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356378; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 248u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035635Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 447u, depth + 1u); else { c.pc = 0x0035B840u; return; } if (c.pc != 0x0035635Cu) [[unlikely]] return; }
L_0035635C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00356694; } }
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356370u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00356370u) [[unlikely]] return; }
L_00356370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_00356378:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356384u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356384u) [[unlikely]] return; }
L_00356384:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356394u); set32(c.r[5], c.r[5].w[0] + 12472u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00356394u) [[unlikely]] return; }
L_00356394:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003563D0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 248u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003563B4u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 447u, depth + 1u); else { c.pc = 0x0035B840u; return; } if (c.pc != 0x003563B4u) [[unlikely]] return; }
L_003563B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00356694; } }
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003563C8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003563C8u) [[unlikely]] return; }
L_003563C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_003563D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003563DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003563DCu) [[unlikely]] return; }
L_003563DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003563ECu); set32(c.r[5], c.r[5].w[0] + 12477u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x003563ECu) [[unlikely]] return; }
L_003563EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356428; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 248u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035640Cu); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 447u, depth + 1u); else { c.pc = 0x0035B840u; return; } if (c.pc != 0x0035640Cu) [[unlikely]] return; }
L_0035640C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00356694; } }
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356420u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00356420u) [[unlikely]] return; }
L_00356420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_00356428:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356434u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356434u) [[unlikely]] return; }
L_00356434:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356444u); set32(c.r[5], c.r[5].w[0] + 12482u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00356444u) [[unlikely]] return; }
L_00356444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356480; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 248u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356464u); set32(c.r[5], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0056(c, 447u, depth + 1u); else { c.pc = 0x0035B840u; return; } if (c.pc != 0x00356464u) [[unlikely]] return; }
L_00356464:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00356694; } }
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356478u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00356478u) [[unlikely]] return; }
L_00356478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_00356480:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035648Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035648Cu) [[unlikely]] return; }
L_0035648C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035649Cu); set32(c.r[5], c.r[5].w[0] + 12488u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035649Cu) [[unlikely]] return; }
L_0035649C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003564D8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 248u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003564BCu); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0056(c, 447u, depth + 1u); else { c.pc = 0x0035B840u; return; } if (c.pc != 0x003564BCu) [[unlikely]] return; }
L_003564BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00356694; } }
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003564D0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003564D0u) [[unlikely]] return; }
L_003564D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_003564D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003564E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003564E4u) [[unlikely]] return; }
L_003564E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003564F4u); set32(c.r[5], c.r[5].w[0] + 12497u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x003564F4u) [[unlikely]] return; }
L_003564F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356530; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 248u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356514u); set32(c.r[5], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_0056(c, 447u, depth + 1u); else { c.pc = 0x0035B840u; return; } if (c.pc != 0x00356514u) [[unlikely]] return; }
L_00356514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00356694; } }
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356528u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00356528u) [[unlikely]] return; }
L_00356528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_00356530:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035653Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035653Cu) [[unlikely]] return; }
L_0035653C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035654Cu); set32(c.r[5], c.r[5].w[0] + 12503u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035654Cu) [[unlikely]] return; }
L_0035654C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356588; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 248u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035656Cu); set32(c.r[5], c.r[2].w[0] + 24u);  if (depth < kMaxDepth) unit_0056(c, 447u, depth + 1u); else { c.pc = 0x0035B840u; return; } if (c.pc != 0x0035656Cu) [[unlikely]] return; }
L_0035656C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00356694; } }
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356580u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00356580u) [[unlikely]] return; }
L_00356580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_00356588:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356594u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356594u) [[unlikely]] return; }
L_00356594:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003565A4u); set32(c.r[5], c.r[5].w[0] + 12510u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x003565A4u) [[unlikely]] return; }
L_003565A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003565E0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 248u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003565C4u); set32(c.r[5], c.r[2].w[0] + 28u);  if (depth < kMaxDepth) unit_0056(c, 447u, depth + 1u); else { c.pc = 0x0035B840u; return; } if (c.pc != 0x003565C4u) [[unlikely]] return; }
L_003565C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00356694; } }
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003565D8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003565D8u) [[unlikely]] return; }
L_003565D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_003565E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003565ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003565ECu) [[unlikely]] return; }
L_003565EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003565FCu); set32(c.r[5], c.r[5].w[0] + 12517u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x003565FCu) [[unlikely]] return; }
L_003565FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356638; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 248u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035661Cu); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0056(c, 447u, depth + 1u); else { c.pc = 0x0035B840u; return; } if (c.pc != 0x0035661Cu) [[unlikely]] return; }
L_0035661C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00356694; } }
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356630u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00356630u) [[unlikely]] return; }
L_00356630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_00356638:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356644u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356644u) [[unlikely]] return; }
L_00356644:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356654u); set32(c.r[5], c.r[5].w[0] + 12523u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00356654u) [[unlikely]] return; }
L_00356654:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 76u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356664u); set32(c.r[4], ld32((c.r[18].w[0] + 244u)));  if (depth < kMaxDepth) unit_0056(c, 102u, depth + 1u); else { c.pc = 0x003589A0u; return; } if (c.pc != 0x00356664u) [[unlikely]] return; }
L_00356664:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356678u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 447u, depth + 1u); else { c.pc = 0x0035B840u; return; } if (c.pc != 0x00356678u) [[unlikely]] return; }
L_00356678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00356694; } }
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035668Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x0035668Cu) [[unlikely]] return; }
L_0035668C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_00356694:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 1;
L_00356698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003566A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003566A0u) [[unlikely]] return; }
L_003566A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003566A8u); set32(c.r[4], c.r[29].w[0] + 976u);  if (depth < kMaxDepth) unit_0056(c, 100u, depth + 1u); else { c.pc = 0x00358900u; return; } if (c.pc != 0x003566A8u) [[unlikely]] return; }
L_003566A8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003566B4u); set32(c.r[5], c.r[18].w[0] + 220u);  if (depth < kMaxDepth) unit_0056(c, 96u, depth + 1u); else { c.pc = 0x00358880u; return; } if (c.pc != 0x003566B4u) [[unlikely]] return; }
L_003566B4:
    set32(c.r[4], c.r[29].w[0] + 976u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003566C0u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0056(c, 93u, depth + 1u); else { c.pc = 0x00358830u; return; } if (c.pc != 0x003566C0u) [[unlikely]] return; }
L_003566C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355B5Cu | kUnwind; return; } goto L_00355B5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00355C1Cu | kUnwind; return; } goto L_00355C1C; } }
L_003566D0:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003566DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003566DCu) [[unlikely]] return; }
L_003566DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_003566E4:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003566F0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003566F0u) [[unlikely]] return; }
L_003566F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_003566F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356704u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356704u) [[unlikely]] return; }
L_00356704:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356714u); set32(c.r[5], c.r[18].w[0] + 120u);  if (depth < kMaxDepth) unit_0056(c, 402u, depth + 1u); else { c.pc = 0x0035B330u; return; } if (c.pc != 0x00356714u) [[unlikely]] return; }
L_00356714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035671Cu); set32(c.r[4], c.r[29].w[0] + 1112u);  if (depth < kMaxDepth) unit_0056(c, 383u, depth + 1u); else { c.pc = 0x0035B170u; return; } if (c.pc != 0x0035671Cu) [[unlikely]] return; }
L_0035671C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035672Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0056(c, 380u, depth + 1u); else { c.pc = 0x0035B110u; return; } if (c.pc != 0x0035672Cu) [[unlikely]] return; }
L_0035672C:
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[20].w[0] + 24u);
    set32(c.r[2], c.r[20].w[0] + 64u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    st32((c.r[20].w[0] + 104u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 244u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356750u); st32((c.r[18].w[0] + 248u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x00356750u) [[unlikely]] return; }
L_00356750:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356894; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356764u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356764u) [[unlikely]] return; }
L_00356764:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356770u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00356770u) [[unlikely]] return; }
L_00356770:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035677Cu); c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x0035677Cu) [[unlikely]] return; }
L_0035677C:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356694u | kUnwind; return; } goto L_00356694; } }
L_00356788:
    c.r[21].d[0] = c.r[19].d[0] & 65535ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356798u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356798u) [[unlikely]] return; }
L_00356798:
    set32(c.r[4], c.r[18].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003567A4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 363u, depth + 1u); else { c.pc = 0x0035AF80u; return; } if (c.pc != 0x003567A4u) [[unlikely]] return; }
L_003567A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0035684C; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 944u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003567C0u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x003567C0u) [[unlikely]] return; }
L_003567C0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003567D0u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x003567D0u) [[unlikely]] return; }
L_003567D0:
    set32(c.r[4], c.r[29].w[0] + 944u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003567DCu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x003567DCu) [[unlikely]] return; }
L_003567DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356828; } }
    c.budget -= 1;
L_003567E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003567F0u); set32(c.r[4], c.r[29].w[0] + 944u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x003567F0u) [[unlikely]] return; }
L_003567F0:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003567FCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 315u, depth + 1u); else { c.pc = 0x0035A2C0u; return; } if (c.pc != 0x003567FCu) [[unlikely]] return; }
L_003567FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356804u); set32(c.r[4], c.r[29].w[0] + 944u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x00356804u) [[unlikely]] return; }
L_00356804:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356814u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00356814u) [[unlikely]] return; }
L_00356814:
    set32(c.r[4], c.r[29].w[0] + 944u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356820u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00356820u) [[unlikely]] return; }
L_00356820:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003567E8u | kUnwind; return; } goto L_003567E8; } }
L_00356828:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356838u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00356838u) [[unlikely]] return; }
L_00356838:
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356788u | kUnwind; return; } goto L_00356788; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356694u | kUnwind; return; } goto L_00356694; } }
L_0035684C:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356858u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356858u) [[unlikely]] return; }
L_00356858:
    set32(c.r[4], c.r[18].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356864u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 294u, depth + 1u); else { c.pc = 0x0035A030u; return; } if (c.pc != 0x00356864u) [[unlikely]] return; }
L_00356864:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356880; } }
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356878u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 315u, depth + 1u); else { c.pc = 0x0035A2C0u; return; } if (c.pc != 0x00356878u) [[unlikely]] return; }
L_00356878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356828u | kUnwind; return; } goto L_00356828; } }
L_00356880:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035688Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x0035688Cu) [[unlikely]] return; }
L_0035688C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_00356894:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003568A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003568A0u) [[unlikely]] return; }
L_003568A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_003568A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003568B4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003568B4u) [[unlikely]] return; }
L_003568B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003568BCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x003568BCu) [[unlikely]] return; }
L_003568BC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003568C8u); set32(c.r[4], c.r[29].w[0] + 688u);  if (depth < kMaxDepth) unit_0056(c, 293u, depth + 1u); else { c.pc = 0x0035A000u; return; } if (c.pc != 0x003568C8u) [[unlikely]] return; }
L_003568C8:
    set32(c.r[6], ld32((c.r[18].w[0] + 252u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], c.r[29].w[0] + 688u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003568E8u); st32((c.r[18].w[0] + 252u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003B(c, 191u, depth + 1u); else { c.pc = 0x002EFD90u; return; } if (c.pc != 0x003568E8u) [[unlikely]] return; }
L_003568E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356694u | kUnwind; return; } goto L_00356694; } }
L_003568F0:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003568FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003568FCu) [[unlikely]] return; }
L_003568FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_00356904:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356910u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00356910u) [[unlikely]] return; }
L_00356910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_00356918:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356924u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00356924u) [[unlikely]] return; }
L_00356924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_0035692C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356938u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356938u) [[unlikely]] return; }
L_00356938:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1088u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356948u); set32(c.r[5], c.r[18].w[0] + 20u);  if (depth < kMaxDepth) unit_0056(c, 253u, depth + 1u); else { c.pc = 0x00359B90u; return; } if (c.pc != 0x00356948u) [[unlikely]] return; }
L_00356948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356950u); set32(c.r[4], c.r[29].w[0] + 1088u);  if (depth < kMaxDepth) unit_0056(c, 251u, depth + 1u); else { c.pc = 0x00359B60u; return; } if (c.pc != 0x00356950u) [[unlikely]] return; }
L_00356950:
    st32((c.r[18].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1088u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356960u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0056(c, 248u, depth + 1u); else { c.pc = 0x00359B00u; return; } if (c.pc != 0x00356960u) [[unlikely]] return; }
L_00356960:
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], c.r[2].w[0] + 136u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356978u); st32((c.r[18].w[0] + 248u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x00356978u) [[unlikely]] return; }
L_00356978:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356C18; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035698Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x0035698Cu) [[unlikely]] return; }
L_0035698C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356C18; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003569A0u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x003569A0u) [[unlikely]] return; }
L_003569A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356C18; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003569B4u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x003569B4u) [[unlikely]] return; }
L_003569B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356C18; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003569C8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x003569C8u) [[unlikely]] return; }
L_003569C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356C18; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003569DCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003569DCu) [[unlikely]] return; }
L_003569DC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003569ECu); set32(c.r[4], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x003569ECu) [[unlikely]] return; }
L_003569EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003569F8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003569F8u) [[unlikely]] return; }
L_003569F8:
    set32(c.r[4], c.r[18].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356A04u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 231u, depth + 1u); else { c.pc = 0x00359970u; return; } if (c.pc != 0x00356A04u) [[unlikely]] return; }
L_00356A04:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00356B88; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[5], 0u + 3u);
    st32((c.r[2].w[0] + 224u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    st32((c.r[2].w[0] + 220u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    st32((c.r[2].w[0] + 216u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356A40u); st32((c.r[2].w[0] + 212u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356A40u) [[unlikely]] return; }
L_00356A40:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356A50u); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00356A50u) [[unlikely]] return; }
L_00356A50:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356A78u); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356A78u) [[unlikely]] return; }
L_00356A78:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356A88u); set32(c.r[5], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00356A88u) [[unlikely]] return; }
L_00356A88:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356AB0u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356AB0u) [[unlikely]] return; }
L_00356AB0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356AC0u); set32(c.r[5], c.r[2].w[0] + 44u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00356AC0u) [[unlikely]] return; }
L_00356AC0:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356ADCu); st32((c.r[3].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356ADCu) [[unlikely]] return; }
L_00356ADC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356AECu); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00356AECu) [[unlikely]] return; }
L_00356AEC:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356B04u); st32((c.r[3].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00356B04u) [[unlikely]] return; }
L_00356B04:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00356B9C; } }
L_00356B10:
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    st32((c.r[2].w[0] + 52u), 0u);
    c.budget -= 2;
L_00356B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356B20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00356B20u) [[unlikely]] return; }
L_00356B20:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00356BE0; } }
L_00356B2C:
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
L_00356B38:
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 224u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 8u));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    st16((c.r[2].w[0] + 234u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    st16((c.r[2].w[0] + 232u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    st16((c.r[2].w[0] + 230u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 13;
L_00356B6C:
    st16((c.r[2].w[0] + 228u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356694u | kUnwind; return; } goto L_00356694; } }
L_00356B88:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356B94u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00356B94u) [[unlikely]] return; }
L_00356B94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_00356B9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356BA8u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x00356BA8u) [[unlikely]] return; }
L_00356BA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356B10u | kUnwind; return; } goto L_00356B10; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356BBCu); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356BBCu) [[unlikely]] return; }
L_00356BBC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356BCCu); set32(c.r[5], c.r[2].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00356BCCu) [[unlikely]] return; }
L_00356BCC:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 52u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356B18u | kUnwind; return; } goto L_00356B18; } }
L_00356BE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356BECu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x00356BECu) [[unlikely]] return; }
L_00356BEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356B2Cu | kUnwind; return; } goto L_00356B2C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356C00u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356C00u) [[unlikely]] return; }
L_00356C00:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356C10u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00356C10u) [[unlikely]] return; }
L_00356C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356B38u | kUnwind; return; } goto L_00356B38; } }
L_00356C18:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356C24u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00356C24u) [[unlikely]] return; }
L_00356C24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_00356C2C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356C38u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356C38u) [[unlikely]] return; }
L_00356C38:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1080u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356C48u); set32(c.r[5], c.r[18].w[0] + 20u);  if (depth < kMaxDepth) unit_0056(c, 253u, depth + 1u); else { c.pc = 0x00359B90u; return; } if (c.pc != 0x00356C48u) [[unlikely]] return; }
L_00356C48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356C50u); set32(c.r[4], c.r[29].w[0] + 1080u);  if (depth < kMaxDepth) unit_0056(c, 251u, depth + 1u); else { c.pc = 0x00359B60u; return; } if (c.pc != 0x00356C50u) [[unlikely]] return; }
L_00356C50:
    st32((c.r[18].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1080u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356C60u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0056(c, 248u, depth + 1u); else { c.pc = 0x00359B00u; return; } if (c.pc != 0x00356C60u) [[unlikely]] return; }
L_00356C60:
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + 136u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356C78u); st32((c.r[18].w[0] + 248u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x00356C78u) [[unlikely]] return; }
L_00356C78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356FA8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356C8Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x00356C8Cu) [[unlikely]] return; }
L_00356C8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356FA8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356CA0u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x00356CA0u) [[unlikely]] return; }
L_00356CA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356FA8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356CB4u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x00356CB4u) [[unlikely]] return; }
L_00356CB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356FA8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356CC8u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x00356CC8u) [[unlikely]] return; }
L_00356CC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356FA8; } }
    set32(c.r[20], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356CE0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356CE0u) [[unlikely]] return; }
L_00356CE0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356CF0u); set32(c.r[4], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00356CF0u) [[unlikely]] return; }
L_00356CF0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356CFCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356CFCu) [[unlikely]] return; }
L_00356CFC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356D0Cu); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00356D0Cu) [[unlikely]] return; }
L_00356D0C:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356D34u); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356D34u) [[unlikely]] return; }
L_00356D34:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356D44u); set32(c.r[5], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00356D44u) [[unlikely]] return; }
L_00356D44:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356D6Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356D6Cu) [[unlikely]] return; }
L_00356D6C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356D7Cu); set32(c.r[5], c.r[2].w[0] + 44u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00356D7Cu) [[unlikely]] return; }
L_00356D7C:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356D98u); st32((c.r[3].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356D98u) [[unlikely]] return; }
L_00356D98:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356DA8u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00356DA8u) [[unlikely]] return; }
L_00356DA8:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(6ll);
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356DC4u); st32((c.r[3].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00356DC4u) [[unlikely]] return; }
L_00356DC4:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00356EC8; } }
L_00356DD0:
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    st32((c.r[2].w[0] + 52u), 0u);
    c.budget -= 2;
L_00356DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356DE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00356DE0u) [[unlikely]] return; }
L_00356DE0:
    c.r[19].d[0] = c.r[16].d[0] & 65535ull;
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00356F14; } }
L_00356DF0:
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    st32((c.r[2].w[0] + 16u), 0u);
    c.budget -= 2;
L_00356DF8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356E04u); c.r[19].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00356E04u) [[unlikely]] return; }
L_00356E04:
    set32(c.r[3], c.r[19].w[0] + 2u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00356F50; } }
    c.r[21].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356E24u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356E24u) [[unlikely]] return; }
L_00356E24:
    set32(c.r[4], c.r[18].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356E30u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 231u, depth + 1u); else { c.pc = 0x00359970u; return; } if (c.pc != 0x00356E30u) [[unlikely]] return; }
L_00356E30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356F50; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356E48u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x00356E48u) [[unlikely]] return; }
L_00356E48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356F50; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356E5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356E5Cu) [[unlikely]] return; }
L_00356E5C:
    set32(c.r[4], c.r[18].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356E68u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 231u, depth + 1u); else { c.pc = 0x00359970u; return; } if (c.pc != 0x00356E68u) [[unlikely]] return; }
L_00356E68:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356E7Cu); st32((c.r[29].w[0] + 1160u), 0u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356E7Cu) [[unlikely]] return; }
L_00356E7C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356E88u); set32(c.r[5], c.r[29].w[0] + 1160u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00356E88u) [[unlikely]] return; }
L_00356E88:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[6].d[0] = ld16((c.r[29].w[0] + 1160u));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[7].d[0] = ld16((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[7].w[0] + 1u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356EACu); set32(c.r[4], c.r[29].w[0] + 1072u);  if (depth < kMaxDepth) unit_0056(c, 230u, depth + 1u); else { c.pc = 0x00359950u; return; } if (c.pc != 0x00356EACu) [[unlikely]] return; }
L_00356EAC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356EB8u); set32(c.r[4], c.r[20].w[0] + 240u);  if (depth < kMaxDepth) unit_0056(c, 220u, depth + 1u); else { c.pc = 0x003597F0u; return; } if (c.pc != 0x00356EB8u) [[unlikely]] return; }
L_00356EB8:
    set32(c.r[2], c.r[16].w[0] + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356DF8u | kUnwind; return; } goto L_00356DF8; } }
    c.budget -= 1;
L_00356EC8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356ED4u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x00356ED4u) [[unlikely]] return; }
L_00356ED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356DD0u | kUnwind; return; } goto L_00356DD0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356EE8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356EE8u) [[unlikely]] return; }
L_00356EE8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356EF8u); set32(c.r[5], c.r[2].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00356EF8u) [[unlikely]] return; }
L_00356EF8:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 52u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356DD8u | kUnwind; return; } goto L_00356DD8; } }
L_00356F14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356F20u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x00356F20u) [[unlikely]] return; }
L_00356F20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356DF0u | kUnwind; return; } goto L_00356DF0; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356F34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356F34u) [[unlikely]] return; }
L_00356F34:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356F44u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00356F44u) [[unlikely]] return; }
L_00356F44:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356DF8u | kUnwind; return; } goto L_00356DF8; } }
L_00356F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356F58u); set32(c.r[4], c.r[20].w[0] + 240u);  if (depth < kMaxDepth) unit_0056(c, 210u, depth + 1u); else { c.pc = 0x00359620u; return; } if (c.pc != 0x00356F58u) [[unlikely]] return; }
L_00356F58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00356F94; } }
    set32(c.r[4], c.r[20].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356F6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0056(c, 206u, depth + 1u); else { c.pc = 0x00359480u; return; } if (c.pc != 0x00356F6Cu) [[unlikely]] return; }
L_00356F6C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    st32((c.r[2].w[0] + 224u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    st32((c.r[2].w[0] + 220u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    st32((c.r[2].w[0] + 216u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 212u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356694u | kUnwind; return; } goto L_00356694; } }
L_00356F94:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356FA0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00356FA0u) [[unlikely]] return; }
L_00356FA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_00356FA8:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356FB4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00356FB4u) [[unlikely]] return; }
L_00356FB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_00356FBC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356FC8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00356FC8u) [[unlikely]] return; }
L_00356FC8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1064u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356FD8u); set32(c.r[5], c.r[18].w[0] + 20u);  if (depth < kMaxDepth) unit_0056(c, 253u, depth + 1u); else { c.pc = 0x00359B90u; return; } if (c.pc != 0x00356FD8u) [[unlikely]] return; }
L_00356FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356FE0u); set32(c.r[4], c.r[29].w[0] + 1064u);  if (depth < kMaxDepth) unit_0056(c, 251u, depth + 1u); else { c.pc = 0x00359B60u; return; } if (c.pc != 0x00356FE0u) [[unlikely]] return; }
L_00356FE0:
    st32((c.r[18].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1064u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00356FF0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0056(c, 248u, depth + 1u); else { c.pc = 0x00359B00u; return; } if (c.pc != 0x00356FF0u) [[unlikely]] return; }
L_00356FF0:
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    set32(c.r[2], c.r[2].w[0] + 136u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357008u); st32((c.r[18].w[0] + 248u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x00357008u) [[unlikely]] return; }
L_00357008:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003573AC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035701Cu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x0035701Cu) [[unlikely]] return; }
L_0035701C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003573AC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357030u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x00357030u) [[unlikely]] return; }
L_00357030:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003573AC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357044u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x00357044u) [[unlikely]] return; }
L_00357044:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003573AC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357058u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x00357058u) [[unlikely]] return; }
L_00357058:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003573AC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035706Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035706Cu) [[unlikely]] return; }
L_0035706C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035707Cu); set32(c.r[4], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x0035707Cu) [[unlikely]] return; }
L_0035707C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357088u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357088u) [[unlikely]] return; }
L_00357088:
    set32(c.r[4], c.r[18].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357094u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 231u, depth + 1u); else { c.pc = 0x00359970u; return; } if (c.pc != 0x00357094u) [[unlikely]] return; }
L_00357094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003572E0; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003570B4u); st32((c.r[2].w[0] + 212u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003570B4u) [[unlikely]] return; }
L_003570B4:
    set32(c.r[4], c.r[18].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003570C0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 231u, depth + 1u); else { c.pc = 0x00359970u; return; } if (c.pc != 0x003570C0u) [[unlikely]] return; }
L_003570C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003572F4; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003570E0u); st32((c.r[2].w[0] + 216u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003570E0u) [[unlikely]] return; }
L_003570E0:
    set32(c.r[4], c.r[18].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003570ECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 231u, depth + 1u); else { c.pc = 0x00359970u; return; } if (c.pc != 0x003570ECu) [[unlikely]] return; }
L_003570EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00357308; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035710Cu); st32((c.r[2].w[0] + 220u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035710Cu) [[unlikely]] return; }
L_0035710C:
    set32(c.r[4], c.r[18].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357118u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 231u, depth + 1u); else { c.pc = 0x00359970u; return; } if (c.pc != 0x00357118u) [[unlikely]] return; }
L_00357118:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035731C; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357138u); st32((c.r[2].w[0] + 224u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357138u) [[unlikely]] return; }
L_00357138:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357148u); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00357148u) [[unlikely]] return; }
L_00357148:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357170u); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357170u) [[unlikely]] return; }
L_00357170:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357180u); set32(c.r[5], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00357180u) [[unlikely]] return; }
L_00357180:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003571A8u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003571A8u) [[unlikely]] return; }
L_003571A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003571B8u); set32(c.r[5], c.r[2].w[0] + 44u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x003571B8u) [[unlikely]] return; }
L_003571B8:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003571D4u); st32((c.r[3].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003571D4u) [[unlikely]] return; }
L_003571D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003571E4u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x003571E4u) [[unlikely]] return; }
L_003571E4:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003571FCu); st32((c.r[3].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x003571FCu) [[unlikely]] return; }
L_003571FC:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00357330; } }
L_00357208:
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    st32((c.r[2].w[0] + 52u), 0u);
    c.budget -= 2;
L_00357210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357218u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00357218u) [[unlikely]] return; }
L_00357218:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00357374; } }
L_00357224:
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 3;
L_00357230:
    set32(c.r[2], ld32((c.r[3].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 8u));
    st16((c.r[3].w[0] + 228u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 8u));
    st16((c.r[3].w[0] + 230u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 216u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 8u));
    st16((c.r[3].w[0] + 232u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 8u));
    st16((c.r[3].w[0] + 234u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 224u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 44;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356694u | kUnwind; return; } goto L_00356694; } }
L_003572E0:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003572ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003572ECu) [[unlikely]] return; }
L_003572EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_003572F4:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357300u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00357300u) [[unlikely]] return; }
L_00357300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_00357308:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357314u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00357314u) [[unlikely]] return; }
L_00357314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_0035731C:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357328u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00357328u) [[unlikely]] return; }
L_00357328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_00357330:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035733Cu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x0035733Cu) [[unlikely]] return; }
L_0035733C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00357208u | kUnwind; return; } goto L_00357208; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357350u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357350u) [[unlikely]] return; }
L_00357350:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357360u); set32(c.r[5], c.r[2].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00357360u) [[unlikely]] return; }
L_00357360:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 52u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00357210u | kUnwind; return; } goto L_00357210; } }
L_00357374:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357380u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x00357380u) [[unlikely]] return; }
L_00357380:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00357224u | kUnwind; return; } goto L_00357224; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357394u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357394u) [[unlikely]] return; }
L_00357394:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003573A4u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x003573A4u) [[unlikely]] return; }
L_003573A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 240u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00357230u | kUnwind; return; } goto L_00357230; } }
L_003573AC:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003573B8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003573B8u) [[unlikely]] return; }
L_003573B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_003573C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003573CCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003573CCu) [[unlikely]] return; }
L_003573CC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1056u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003573DCu); set32(c.r[5], c.r[18].w[0] + 20u);  if (depth < kMaxDepth) unit_0056(c, 253u, depth + 1u); else { c.pc = 0x00359B90u; return; } if (c.pc != 0x003573DCu) [[unlikely]] return; }
L_003573DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003573E4u); set32(c.r[4], c.r[29].w[0] + 1056u);  if (depth < kMaxDepth) unit_0056(c, 251u, depth + 1u); else { c.pc = 0x00359B60u; return; } if (c.pc != 0x003573E4u) [[unlikely]] return; }
L_003573E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1056u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003573F8u); st32((c.r[18].w[0] + 240u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0056(c, 248u, depth + 1u); else { c.pc = 0x00359B00u; return; } if (c.pc != 0x003573F8u) [[unlikely]] return; }
L_003573F8:
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 13u);
    set32(c.r[2], c.r[2].w[0] + 136u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357410u); st32((c.r[18].w[0] + 248u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x00357410u) [[unlikely]] return; }
L_00357410:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035788C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357424u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x00357424u) [[unlikely]] return; }
L_00357424:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035788C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357438u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x00357438u) [[unlikely]] return; }
L_00357438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035788C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035744Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x0035744Cu) [[unlikely]] return; }
L_0035744C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035788C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357460u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x00357460u) [[unlikely]] return; }
L_00357460:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035788C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357474u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357474u) [[unlikely]] return; }
L_00357474:
    set32(c.r[4], c.r[18].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357480u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 189u, depth + 1u); else { c.pc = 0x003592F0u; return; } if (c.pc != 0x00357480u) [[unlikely]] return; }
L_00357480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035788C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357494u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357494u) [[unlikely]] return; }
L_00357494:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003574A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 301u, depth + 1u); else { c.pc = 0x0023B770u; return; } if (c.pc != 0x003574A4u) [[unlikely]] return; }
L_003574A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003574ACu); set32(c.r[4], c.r[29].w[0] + 1136u);  if (depth < kMaxDepth) unit_0056(c, 188u, depth + 1u); else { c.pc = 0x003592C0u; return; } if (c.pc != 0x003574ACu) [[unlikely]] return; }
L_003574AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035788C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003574C0u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x003574C0u) [[unlikely]] return; }
L_003574C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035788C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003574D4u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x003574D4u) [[unlikely]] return; }
L_003574D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035788C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003574E8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003574E8u) [[unlikely]] return; }
L_003574E8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003574F8u); set32(c.r[4], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x003574F8u) [[unlikely]] return; }
L_003574F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357504u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357504u) [[unlikely]] return; }
L_00357504:
    set32(c.r[4], c.r[18].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357510u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 231u, depth + 1u); else { c.pc = 0x00359970u; return; } if (c.pc != 0x00357510u) [[unlikely]] return; }
L_00357510:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003577C0; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357530u); st32((c.r[2].w[0] + 212u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357530u) [[unlikely]] return; }
L_00357530:
    set32(c.r[4], c.r[18].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035753Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 231u, depth + 1u); else { c.pc = 0x00359970u; return; } if (c.pc != 0x0035753Cu) [[unlikely]] return; }
L_0035753C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003577D4; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035755Cu); st32((c.r[2].w[0] + 216u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035755Cu) [[unlikely]] return; }
L_0035755C:
    set32(c.r[4], c.r[18].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357568u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 231u, depth + 1u); else { c.pc = 0x00359970u; return; } if (c.pc != 0x00357568u) [[unlikely]] return; }
L_00357568:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003577E8; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357588u); st32((c.r[2].w[0] + 220u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357588u) [[unlikely]] return; }
L_00357588:
    set32(c.r[4], c.r[18].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357594u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 231u, depth + 1u); else { c.pc = 0x00359970u; return; } if (c.pc != 0x00357594u) [[unlikely]] return; }
L_00357594:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003577FC; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003575B4u); st32((c.r[2].w[0] + 224u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003575B4u) [[unlikely]] return; }
L_003575B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003575C4u); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x003575C4u) [[unlikely]] return; }
L_003575C4:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003575ECu); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003575ECu) [[unlikely]] return; }
L_003575EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003575FCu); set32(c.r[5], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x003575FCu) [[unlikely]] return; }
L_003575FC:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357624u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357624u) [[unlikely]] return; }
L_00357624:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357634u); set32(c.r[5], c.r[2].w[0] + 44u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00357634u) [[unlikely]] return; }
L_00357634:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357650u); st32((c.r[3].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357650u) [[unlikely]] return; }
L_00357650:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357660u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00357660u) [[unlikely]] return; }
L_00357660:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035767Cu); st32((c.r[3].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035767Cu) [[unlikely]] return; }
L_0035767C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1048u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035768Cu); set32(c.r[5], c.r[18].w[0] + 100u);  if (depth < kMaxDepth) unit_0056(c, 409u, depth + 1u); else { c.pc = 0x0035B410u; return; } if (c.pc != 0x0035768Cu) [[unlikely]] return; }
L_0035768C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357694u); set32(c.r[4], c.r[29].w[0] + 1048u);  if (depth < kMaxDepth) unit_0056(c, 407u, depth + 1u); else { c.pc = 0x0035B3E0u; return; } if (c.pc != 0x00357694u) [[unlikely]] return; }
L_00357694:
    st32((c.r[16].w[0] + 248u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1048u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003576A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0056(c, 404u, depth + 1u); else { c.pc = 0x0035B380u; return; } if (c.pc != 0x003576A4u) [[unlikely]] return; }
L_003576A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003576B0u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003576B0u) [[unlikely]] return; }
L_003576B0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003576BCu); set32(c.r[5], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x003576BCu) [[unlikely]] return; }
L_003576BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003576C8u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003576C8u) [[unlikely]] return; }
L_003576C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003576D4u); set32(c.r[5], c.r[16].w[0] + 244u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x003576D4u) [[unlikely]] return; }
L_003576D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003576DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x003576DCu) [[unlikely]] return; }
L_003576DC:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00357810; } }
L_003576E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    st32((c.r[2].w[0] + 52u), 0u);
    c.budget -= 2;
L_003576F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003576F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x003576F8u) [[unlikely]] return; }
L_003576F8:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00357854; } }
L_00357704:
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 3;
L_00357710:
    set32(c.r[2], ld32((c.r[3].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 8u));
    st16((c.r[3].w[0] + 228u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 8u));
    st16((c.r[3].w[0] + 230u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 216u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 8u));
    st16((c.r[3].w[0] + 232u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 8u));
    st16((c.r[3].w[0] + 234u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 224u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 44;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356694u | kUnwind; return; } goto L_00356694; } }
L_003577C0:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003577CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003577CCu) [[unlikely]] return; }
L_003577CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_003577D4:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003577E0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003577E0u) [[unlikely]] return; }
L_003577E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_003577E8:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003577F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003577F4u) [[unlikely]] return; }
L_003577F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_003577FC:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357808u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00357808u) [[unlikely]] return; }
L_00357808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_00357810:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035781Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x0035781Cu) [[unlikely]] return; }
L_0035781C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003576E8u | kUnwind; return; } goto L_003576E8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357830u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357830u) [[unlikely]] return; }
L_00357830:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357840u); set32(c.r[5], c.r[2].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00357840u) [[unlikely]] return; }
L_00357840:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 52u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003576F0u | kUnwind; return; } goto L_003576F0; } }
L_00357854:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357860u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x00357860u) [[unlikely]] return; }
L_00357860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00357704u | kUnwind; return; } goto L_00357704; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357874u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357874u) [[unlikely]] return; }
L_00357874:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357884u); set32(c.r[5], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00357884u) [[unlikely]] return; }
L_00357884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 240u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00357710u | kUnwind; return; } goto L_00357710; } }
L_0035788C:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357898u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00357898u) [[unlikely]] return; }
L_00357898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_003578A0:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003578ACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003578ACu) [[unlikely]] return; }
L_003578AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_003578B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003578C0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003578C0u) [[unlikely]] return; }
L_003578C0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1032u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003578D0u); set32(c.r[5], c.r[18].w[0] + 20u);  if (depth < kMaxDepth) unit_0056(c, 253u, depth + 1u); else { c.pc = 0x00359B90u; return; } if (c.pc != 0x003578D0u) [[unlikely]] return; }
L_003578D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003578D8u); set32(c.r[4], c.r[29].w[0] + 1032u);  if (depth < kMaxDepth) unit_0056(c, 251u, depth + 1u); else { c.pc = 0x00359B60u; return; } if (c.pc != 0x003578D8u) [[unlikely]] return; }
L_003578D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1032u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003578ECu); st32((c.r[18].w[0] + 240u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0056(c, 248u, depth + 1u); else { c.pc = 0x00359B00u; return; } if (c.pc != 0x003578ECu) [[unlikely]] return; }
L_003578EC:
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[2], c.r[2].w[0] + 136u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357904u); st32((c.r[18].w[0] + 248u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x00357904u) [[unlikely]] return; }
L_00357904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00357ACC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357918u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357918u) [[unlikely]] return; }
L_00357918:
    set32(c.r[4], c.r[18].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357924u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 189u, depth + 1u); else { c.pc = 0x003592F0u; return; } if (c.pc != 0x00357924u) [[unlikely]] return; }
L_00357924:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00357A8C; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357940u); st32((c.r[16].w[0] + 240u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357940u) [[unlikely]] return; }
L_00357940:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035794Cu); set32(c.r[5], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035794Cu) [[unlikely]] return; }
L_0035794C:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357968u); st32((c.r[3].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357968u) [[unlikely]] return; }
L_00357968:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357974u); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00357974u) [[unlikely]] return; }
L_00357974:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035798Cu); st32((c.r[3].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x0035798Cu) [[unlikely]] return; }
L_0035798C:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00357A3C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003579A4u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003579A4u) [[unlikely]] return; }
L_003579A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003579B0u); set32(c.r[5], c.r[16].w[0] + 44u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x003579B0u) [[unlikely]] return; }
L_003579B0:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003579CCu); st32((c.r[3].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003579CCu) [[unlikely]] return; }
L_003579CC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003579D8u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x003579D8u) [[unlikely]] return; }
L_003579D8:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003579F4u); st32((c.r[3].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003579F4u) [[unlikely]] return; }
L_003579F4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357A00u); set32(c.r[5], c.r[16].w[0] + 244u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00357A00u) [[unlikely]] return; }
L_00357A00:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357A0Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x00357A0Cu) [[unlikely]] return; }
L_00357A0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00357AA0; } }
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
L_00357A20:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00357AC0; } }
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00357A68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_00357AC4; } }
L_00357A3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[5], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357A54u); st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357A54u) [[unlikely]] return; }
L_00357A54:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357A60u); set32(c.r[5], c.r[16].w[0] + 244u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00357A60u) [[unlikely]] return; }
L_00357A60:
    set32(c.r[2], 0u + 7u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_00357A68:
    set32(c.r[2], ld32((c.r[16].w[0] + 244u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356694u | kUnwind; return; } goto L_00356694; } }
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357A84u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00357A84u) [[unlikely]] return; }
L_00357A84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_00357A8C:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357A98u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00357A98u) [[unlikely]] return; }
L_00357A98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_00357AA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357AACu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357AACu) [[unlikely]] return; }
L_00357AAC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357AB8u); set32(c.r[5], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00357AB8u) [[unlikely]] return; }
L_00357AB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 52u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00357A20u | kUnwind; return; } goto L_00357A20; } }
L_00357AC0:
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_00357AC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00357A68u | kUnwind; return; } goto L_00357A68; } }
L_00357ACC:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357AD8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00357AD8u) [[unlikely]] return; }
L_00357AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_00357AE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357AECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357AECu) [[unlikely]] return; }
L_00357AEC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357AFCu); set32(c.r[5], c.r[18].w[0] + 20u);  if (depth < kMaxDepth) unit_0056(c, 253u, depth + 1u); else { c.pc = 0x00359B90u; return; } if (c.pc != 0x00357AFCu) [[unlikely]] return; }
L_00357AFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357B04u); set32(c.r[4], c.r[29].w[0] + 1024u);  if (depth < kMaxDepth) unit_0056(c, 251u, depth + 1u); else { c.pc = 0x00359B60u; return; } if (c.pc != 0x00357B04u) [[unlikely]] return; }
L_00357B04:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1024u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357B18u); st32((c.r[18].w[0] + 240u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0056(c, 248u, depth + 1u); else { c.pc = 0x00359B00u; return; } if (c.pc != 0x00357B18u) [[unlikely]] return; }
L_00357B18:
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + 136u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357B30u); st32((c.r[18].w[0] + 248u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x00357B30u) [[unlikely]] return; }
L_00357B30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00357F84; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357B4Cu); st32((c.r[16].w[0] + 272u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357B4Cu) [[unlikely]] return; }
L_00357B4C:
    set32(c.r[4], c.r[18].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357B58u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 163u, depth + 1u); else { c.pc = 0x00359030u; return; } if (c.pc != 0x00357B58u) [[unlikely]] return; }
L_00357B58:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357B68u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357B68u) [[unlikely]] return; }
L_00357B68:
    set32(c.r[4], c.r[18].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357B74u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 189u, depth + 1u); else { c.pc = 0x003592F0u; return; } if (c.pc != 0x00357B74u) [[unlikely]] return; }
L_00357B74:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00357E04; } }
L_00357B7C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00357B8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0])));  if (t) { goto L_00357B90; } }
L_00357B8C:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00357B90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 240u), c.r[3].w[0]);  if (t) { goto L_00357BA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_00357BA4; } }
L_00357BA0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00357BA4:
    st32((c.r[16].w[0] + 256u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357BB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00357BB0u) [[unlikely]] return; }
L_00357BB0:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00357E54; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357BC8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357BC8u) [[unlikely]] return; }
L_00357BC8:
    set32(c.r[4], c.r[18].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357BD4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 163u, depth + 1u); else { c.pc = 0x00359030u; return; } if (c.pc != 0x00357BD4u) [[unlikely]] return; }
L_00357BD4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357BE4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357BE4u) [[unlikely]] return; }
L_00357BE4:
    set32(c.r[4], c.r[18].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357BF0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 189u, depth + 1u); else { c.pc = 0x003592F0u; return; } if (c.pc != 0x00357BF0u) [[unlikely]] return; }
L_00357BF0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00357C00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0])));  if (t) { goto L_00357C04; } }
L_00357C00:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00357C04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 244u), c.r[3].w[0]);  if (t) { goto L_00357C14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_00357C18; } }
L_00357C14:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00357C18:
    st32((c.r[16].w[0] + 260u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357C28u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357C28u) [[unlikely]] return; }
L_00357C28:
    set32(c.r[4], c.r[18].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357C34u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 163u, depth + 1u); else { c.pc = 0x00359030u; return; } if (c.pc != 0x00357C34u) [[unlikely]] return; }
L_00357C34:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357C44u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357C44u) [[unlikely]] return; }
L_00357C44:
    set32(c.r[4], c.r[18].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357C50u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 189u, depth + 1u); else { c.pc = 0x003592F0u; return; } if (c.pc != 0x00357C50u) [[unlikely]] return; }
L_00357C50:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00357C60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0])));  if (t) { goto L_00357C64; } }
L_00357C60:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00357C64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 248u), c.r[3].w[0]);  if (t) { goto L_00357C74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_00357C78; } }
L_00357C74:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00357C78:
    st32((c.r[16].w[0] + 264u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357C88u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357C88u) [[unlikely]] return; }
L_00357C88:
    set32(c.r[4], c.r[18].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357C94u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 163u, depth + 1u); else { c.pc = 0x00359030u; return; } if (c.pc != 0x00357C94u) [[unlikely]] return; }
L_00357C94:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357CA4u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357CA4u) [[unlikely]] return; }
L_00357CA4:
    set32(c.r[4], c.r[18].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357CB0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 189u, depth + 1u); else { c.pc = 0x003592F0u; return; } if (c.pc != 0x00357CB0u) [[unlikely]] return; }
L_00357CB0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00357CC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0])));  if (t) { goto L_00357CC4; } }
L_00357CC0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00357CC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 252u), c.r[3].w[0]);  if (t) { goto L_00357CD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_00357CD8; } }
L_00357CD4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00357CD8:
    st32((c.r[16].w[0] + 268u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357CE8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357CE8u) [[unlikely]] return; }
L_00357CE8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357CF4u); set32(c.r[5], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00357CF4u) [[unlikely]] return; }
L_00357CF4:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357D1Cu); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357D1Cu) [[unlikely]] return; }
L_00357D1C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357D28u); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00357D28u) [[unlikely]] return; }
L_00357D28:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357D50u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357D50u) [[unlikely]] return; }
L_00357D50:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357D5Cu); set32(c.r[5], c.r[16].w[0] + 44u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00357D5Cu) [[unlikely]] return; }
L_00357D5C:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357D78u); st32((c.r[3].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357D78u) [[unlikely]] return; }
L_00357D78:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357D84u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00357D84u) [[unlikely]] return; }
L_00357D84:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357DA0u); st32((c.r[3].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357DA0u) [[unlikely]] return; }
L_00357DA0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357DACu); set32(c.r[5], c.r[16].w[0] + 288u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00357DACu) [[unlikely]] return; }
L_00357DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357DB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00357DB4u) [[unlikely]] return; }
L_00357DB4:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00357E20; } }
L_00357DC0:
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_00357DC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 1;
L_00357DCC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00357F78; } }
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00357F78; } }
L_00357DE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 288u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356694u | kUnwind; return; } goto L_00356694; } }
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357DFCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00357DFCu) [[unlikely]] return; }
L_00357DFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_00357E04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00357B7Cu | kUnwind; return; } goto L_00357B7C; } }
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357E18u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00357E18u) [[unlikely]] return; }
L_00357E18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_00357E20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357E2Cu); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x00357E2Cu) [[unlikely]] return; }
L_00357E2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00357DC0u | kUnwind; return; } goto L_00357DC0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357E40u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357E40u) [[unlikely]] return; }
L_00357E40:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357E4Cu); set32(c.r[5], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00357E4Cu) [[unlikely]] return; }
L_00357E4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 52u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00357DCCu | kUnwind; return; } goto L_00357DCC; } }
L_00357E54:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357E60u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357E60u) [[unlikely]] return; }
L_00357E60:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357E6Cu); set32(c.r[5], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00357E6Cu) [[unlikely]] return; }
L_00357E6C:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357E94u); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357E94u) [[unlikely]] return; }
L_00357E94:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357EA0u); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00357EA0u) [[unlikely]] return; }
L_00357EA0:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357EC8u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357EC8u) [[unlikely]] return; }
L_00357EC8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357ED4u); set32(c.r[5], c.r[16].w[0] + 44u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00357ED4u) [[unlikely]] return; }
L_00357ED4:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357EF0u); st32((c.r[3].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357EF0u) [[unlikely]] return; }
L_00357EF0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357EFCu); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00357EFCu) [[unlikely]] return; }
L_00357EFC:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357F18u); st32((c.r[3].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357F18u) [[unlikely]] return; }
L_00357F18:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357F24u); set32(c.r[5], c.r[16].w[0] + 288u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00357F24u) [[unlikely]] return; }
L_00357F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357F2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00357F2Cu) [[unlikely]] return; }
L_00357F2C:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00357F44; } }
L_00357F38:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00357DC8u | kUnwind; return; } goto L_00357DC8; } }
L_00357F44:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357F50u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_005C(c, 29u, depth + 1u); else { c.pc = 0x00370260u; return; } if (c.pc != 0x00357F50u) [[unlikely]] return; }
L_00357F50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00357F38u | kUnwind; return; } goto L_00357F38; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357F64u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357F64u) [[unlikely]] return; }
L_00357F64:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357F70u); set32(c.r[5], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00357F70u) [[unlikely]] return; }
L_00357F70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00357DC8u | kUnwind; return; } goto L_00357DC8; } }
L_00357F78:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00357DE0u | kUnwind; return; } goto L_00357DE0; } }
L_00357F84:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357F90u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00357F90u) [[unlikely]] return; }
L_00357F90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 92u, depth); } }
L_00357F98:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357FA4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357FA4u) [[unlikely]] return; }
L_00357FA4:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1016u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357FB4u); set32(c.r[5], c.r[18].w[0] + 20u);  if (depth < kMaxDepth) unit_0056(c, 253u, depth + 1u); else { c.pc = 0x00359B90u; return; } if (c.pc != 0x00357FB4u) [[unlikely]] return; }
L_00357FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357FBCu); set32(c.r[4], c.r[29].w[0] + 1016u);  if (depth < kMaxDepth) unit_0056(c, 251u, depth + 1u); else { c.pc = 0x00359B60u; return; } if (c.pc != 0x00357FBCu) [[unlikely]] return; }
L_00357FBC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1016u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357FD0u); st32((c.r[18].w[0] + 240u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0056(c, 248u, depth + 1u); else { c.pc = 0x00359B00u; return; } if (c.pc != 0x00357FD0u) [[unlikely]] return; }
L_00357FD0:
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], c.r[2].w[0] + 136u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357FE8u); st32((c.r[18].w[0] + 248u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x00357FE8u) [[unlikely]] return; }
L_00357FE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0056(c, 12u, depth); } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00357FFCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00357FFCu) [[unlikely]] return; }
L_00357FFC:
    set32(c.r[4], c.r[18].w[0] + 160u);
    c.budget -= 1;
    [[clang::musttail]] return unit_0056(c, 1u, depth);
}

}

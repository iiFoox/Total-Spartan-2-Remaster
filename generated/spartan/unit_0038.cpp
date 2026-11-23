#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0038[4096] = {
    1, 0, 0, 2, 0, 0, 3, 0, 4, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 9, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0,
    0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 19, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 25, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0,
    0, 30, 0, 31, 0, 0, 32, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 0,
    41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0,
    0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55,
    0, 56, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0,
    0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 74, 0, 0, 75, 0, 76,
    0, 77, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0,
    85, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 93,
    0, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0,
    0, 103, 0, 104, 0, 0, 105, 0, 106, 0, 107, 0, 0, 108, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 113, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 118, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0,
    0, 0, 123, 124, 0, 0, 0, 0, 125, 0, 0, 126, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144,
    0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 149,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0,
    160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 168,
    0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 176, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 185,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0,
    0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0,
    0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 208, 0, 0, 209, 0, 0, 0, 0, 210, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0,
    0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 221, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 228, 0, 229, 0, 230, 0, 231, 0, 0, 0, 0, 232, 0,
    233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 239, 0, 240, 0,
    0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 247, 0,
    248, 0, 0, 0, 249, 0, 0, 250, 0, 251, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 256, 0, 0,
    257, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 262, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0, 267, 0, 0,
    0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274,
    0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 278, 0, 0, 279, 0, 280, 0, 281, 0, 282, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 287, 0, 288, 0, 289, 0,
    290, 0, 0, 0, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0, 296, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0,
    0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0,
    0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0,
    0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 322, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0,
    328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0,
    0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0,
    0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0,
    0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0,
    0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0,
    0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0,
    0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 373, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 378, 0,
    379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0,
    0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0,
    0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0,
    0, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0,
    404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 408, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0,
    420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0,
    0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472,
    0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0038(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002E0000;
    case 2u: goto L_002E000C;
    case 3u: goto L_002E0018;
    case 4u: goto L_002E0020;
    case 5u: goto L_002E0028;
    case 6u: goto L_002E0034;
    case 7u: goto L_002E0040;
    case 8u: goto L_002E004C;
    case 9u: goto L_002E0054;
    case 10u: goto L_002E0060;
    case 11u: goto L_002E006C;
    case 12u: goto L_002E0078;
    case 13u: goto L_002E0084;
    case 14u: goto L_002E0090;
    case 15u: goto L_002E009C;
    case 16u: goto L_002E00A8;
    case 17u: goto L_002E00B4;
    case 18u: goto L_002E00C0;
    case 19u: goto L_002E00C8;
    case 20u: goto L_002E00D0;
    case 21u: goto L_002E00E8;
    case 22u: goto L_002E012C;
    case 23u: goto L_002E0138;
    case 24u: goto L_002E0144;
    case 25u: goto L_002E014C;
    case 26u: goto L_002E0154;
    case 27u: goto L_002E0160;
    case 28u: goto L_002E016C;
    case 29u: goto L_002E0178;
    case 30u: goto L_002E0184;
    case 31u: goto L_002E018C;
    case 32u: goto L_002E0198;
    case 33u: goto L_002E01A0;
    case 34u: goto L_002E01AC;
    case 35u: goto L_002E01B8;
    case 36u: goto L_002E01C4;
    case 37u: goto L_002E01CC;
    case 38u: goto L_002E01D8;
    case 39u: goto L_002E01E4;
    case 40u: goto L_002E01F0;
    case 41u: goto L_002E0200;
    case 42u: goto L_002E0210;
    case 43u: goto L_002E024C;
    case 44u: goto L_002E0268;
    case 45u: goto L_002E0290;
    case 46u: goto L_002E02A0;
    case 47u: goto L_002E02B0;
    case 48u: goto L_002E02D8;
    case 49u: goto L_002E02E8;
    case 50u: goto L_002E02F8;
    case 51u: goto L_002E030C;
    case 52u: goto L_002E031C;
    case 53u: goto L_002E0340;
    case 54u: goto L_002E035C;
    case 55u: goto L_002E037C;
    case 56u: goto L_002E0384;
    case 57u: goto L_002E038C;
    case 58u: goto L_002E0398;
    case 59u: goto L_002E03A4;
    case 60u: goto L_002E03B0;
    case 61u: goto L_002E03BC;
    case 62u: goto L_002E03C8;
    case 63u: goto L_002E03D4;
    case 64u: goto L_002E03E0;
    case 65u: goto L_002E03EC;
    case 66u: goto L_002E03F8;
    case 67u: goto L_002E0404;
    case 68u: goto L_002E0410;
    case 69u: goto L_002E041C;
    case 70u: goto L_002E0428;
    case 71u: goto L_002E0434;
    case 72u: goto L_002E04D4;
    case 73u: goto L_002E04DC;
    case 74u: goto L_002E04E8;
    case 75u: goto L_002E04F4;
    case 76u: goto L_002E04FC;
    case 77u: goto L_002E0504;
    case 78u: goto L_002E0510;
    case 79u: goto L_002E0518;
    case 80u: goto L_002E0530;
    case 81u: goto L_002E053C;
    case 82u: goto L_002E0548;
    case 83u: goto L_002E0568;
    case 84u: goto L_002E0574;
    case 85u: goto L_002E0580;
    case 86u: goto L_002E058C;
    case 87u: goto L_002E0598;
    case 88u: goto L_002E05C4;
    case 89u: goto L_002E05D0;
    case 90u: goto L_002E05DC;
    case 91u: goto L_002E05E8;
    case 92u: goto L_002E05F4;
    case 93u: goto L_002E05FC;
    case 94u: goto L_002E060C;
    case 95u: goto L_002E0618;
    case 96u: goto L_002E0624;
    case 97u: goto L_002E0630;
    case 98u: goto L_002E0644;
    case 99u: goto L_002E064C;
    case 100u: goto L_002E0660;
    case 101u: goto L_002E066C;
    case 102u: goto L_002E0678;
    case 103u: goto L_002E0684;
    case 104u: goto L_002E068C;
    case 105u: goto L_002E0698;
    case 106u: goto L_002E06A0;
    case 107u: goto L_002E06A8;
    case 108u: goto L_002E06B4;
    case 109u: goto L_002E06C0;
    case 110u: goto L_002E06C8;
    case 111u: goto L_002E06D0;
    case 112u: goto L_002E06E0;
    case 113u: goto L_002E0708;
    case 114u: goto L_002E070C;
    case 115u: goto L_002E0720;
    case 116u: goto L_002E073C;
    case 117u: goto L_002E0760;
    case 118u: goto L_002E0784;
    case 119u: goto L_002E078C;
    case 120u: goto L_002E079C;
    case 121u: goto L_002E07B8;
    case 122u: goto L_002E07F8;
    case 123u: goto L_002E0808;
    case 124u: goto L_002E080C;
    case 125u: goto L_002E0820;
    case 126u: goto L_002E082C;
    case 127u: goto L_002E0834;
    case 128u: goto L_002E0840;
    case 129u: goto L_002E0850;
    case 130u: goto L_002E085C;
    case 131u: goto L_002E088C;
    case 132u: goto L_002E0898;
    case 133u: goto L_002E08CC;
    case 134u: goto L_002E0918;
    case 135u: goto L_002E094C;
    case 136u: goto L_002E0978;
    case 137u: goto L_002E09C0;
    case 138u: goto L_002E09E8;
    case 139u: goto L_002E0A14;
    case 140u: goto L_002E0A20;
    case 141u: goto L_002E0A78;
    case 142u: goto L_002E0AC0;
    case 143u: goto L_002E0AF0;
    case 144u: goto L_002E0AFC;
    case 145u: goto L_002E0B1C;
    case 146u: goto L_002E0B28;
    case 147u: goto L_002E0B58;
    case 148u: goto L_002E0B74;
    case 149u: goto L_002E0B7C;
    case 150u: goto L_002E0BB0;
    case 151u: goto L_002E0BBC;
    case 152u: goto L_002E0BC8;
    case 153u: goto L_002E0BD4;
    case 154u: goto L_002E0C1C;
    case 155u: goto L_002E0C30;
    case 156u: goto L_002E0C3C;
    case 157u: goto L_002E0C48;
    case 158u: goto L_002E0C54;
    case 159u: goto L_002E0C60;
    case 160u: goto L_002E0C80;
    case 161u: goto L_002E0CA0;
    case 162u: goto L_002E0CAC;
    case 163u: goto L_002E0CB8;
    case 164u: goto L_002E0CC4;
    case 165u: goto L_002E0CD0;
    case 166u: goto L_002E0CE4;
    case 167u: goto L_002E0CF0;
    case 168u: goto L_002E0CFC;
    case 169u: goto L_002E0D08;
    case 170u: goto L_002E0D3C;
    case 171u: goto L_002E0D74;
    case 172u: goto L_002E0DA8;
    case 173u: goto L_002E0DD0;
    case 174u: goto L_002E0DE0;
    case 175u: goto L_002E0DF0;
    case 176u: goto L_002E0E08;
    case 177u: goto L_002E0E10;
    case 178u: goto L_002E0E1C;
    case 179u: goto L_002E0E28;
    case 180u: goto L_002E0E44;
    case 181u: goto L_002E0E50;
    case 182u: goto L_002E0E5C;
    case 183u: goto L_002E0E68;
    case 184u: goto L_002E0E74;
    case 185u: goto L_002E0E7C;
    case 186u: goto L_002E0ED0;
    case 187u: goto L_002E0EE4;
    case 188u: goto L_002E0EF0;
    case 189u: goto L_002E0F04;
    case 190u: goto L_002E0F8C;
    case 191u: goto L_002E10B0;
    case 192u: goto L_002E10C0;
    case 193u: goto L_002E10F0;
    case 194u: goto L_002E1114;
    case 195u: goto L_002E111C;
    case 196u: goto L_002E1134;
    case 197u: goto L_002E1140;
    case 198u: goto L_002E1154;
    case 199u: goto L_002E11A8;
    case 200u: goto L_002E11D4;
    case 201u: goto L_002E11E8;
    case 202u: goto L_002E1204;
    case 203u: goto L_002E1210;
    case 204u: goto L_002E121C;
    case 205u: goto L_002E1228;
    case 206u: goto L_002E123C;
    case 207u: goto L_002E1250;
    case 208u: goto L_002E1258;
    case 209u: goto L_002E1264;
    case 210u: goto L_002E1278;
    case 211u: goto L_002E1290;
    case 212u: goto L_002E12A4;
    case 213u: goto L_002E12B0;
    case 214u: goto L_002E12C4;
    case 215u: goto L_002E12D0;
    case 216u: goto L_002E12E0;
    case 217u: goto L_002E12F8;
    case 218u: goto L_002E1308;
    case 219u: goto L_002E1324;
    case 220u: goto L_002E1338;
    case 221u: goto L_002E1340;
    case 222u: goto L_002E1348;
    case 223u: goto L_002E1360;
    case 224u: goto L_002E1374;
    case 225u: goto L_002E1390;
    case 226u: goto L_002E13AC;
    case 227u: goto L_002E13C4;
    case 228u: goto L_002E13CC;
    case 229u: goto L_002E13D4;
    case 230u: goto L_002E13DC;
    case 231u: goto L_002E13E4;
    case 232u: goto L_002E13F8;
    case 233u: goto L_002E1400;
    case 234u: goto L_002E140C;
    case 235u: goto L_002E14B0;
    case 236u: goto L_002E14BC;
    case 237u: goto L_002E14D0;
    case 238u: goto L_002E14DC;
    case 239u: goto L_002E14F0;
    case 240u: goto L_002E14F8;
    case 241u: goto L_002E151C;
    case 242u: goto L_002E152C;
    case 243u: goto L_002E1540;
    case 244u: goto L_002E1548;
    case 245u: goto L_002E155C;
    case 246u: goto L_002E1564;
    case 247u: goto L_002E1578;
    case 248u: goto L_002E1580;
    case 249u: goto L_002E1590;
    case 250u: goto L_002E159C;
    case 251u: goto L_002E15A4;
    case 252u: goto L_002E15B8;
    case 253u: goto L_002E15C4;
    case 254u: goto L_002E15D8;
    case 255u: goto L_002E15E0;
    case 256u: goto L_002E15F4;
    case 257u: goto L_002E1600;
    case 258u: goto L_002E1614;
    case 259u: goto L_002E1620;
    case 260u: goto L_002E162C;
    case 261u: goto L_002E1638;
    case 262u: goto L_002E1640;
    case 263u: goto L_002E1648;
    case 264u: goto L_002E1654;
    case 265u: goto L_002E1660;
    case 266u: goto L_002E166C;
    case 267u: goto L_002E1674;
    case 268u: goto L_002E1688;
    case 269u: goto L_002E1690;
    case 270u: goto L_002E16B0;
    case 271u: goto L_002E16C0;
    case 272u: goto L_002E16DC;
    case 273u: goto L_002E16EC;
    case 274u: goto L_002E16FC;
    case 275u: goto L_002E1714;
    case 276u: goto L_002E1734;
    case 277u: goto L_002E173C;
    case 278u: goto L_002E1750;
    case 279u: goto L_002E175C;
    case 280u: goto L_002E1764;
    case 281u: goto L_002E176C;
    case 282u: goto L_002E1774;
    case 283u: goto L_002E17B0;
    case 284u: goto L_002E17BC;
    case 285u: goto L_002E17D0;
    case 286u: goto L_002E17E0;
    case 287u: goto L_002E17E8;
    case 288u: goto L_002E17F0;
    case 289u: goto L_002E17F8;
    case 290u: goto L_002E1800;
    case 291u: goto L_002E1814;
    case 292u: goto L_002E181C;
    case 293u: goto L_002E1824;
    case 294u: goto L_002E182C;
    case 295u: goto L_002E1834;
    case 296u: goto L_002E183C;
    case 297u: goto L_002E1850;
    case 298u: goto L_002E185C;
    case 299u: goto L_002E1870;
    case 300u: goto L_002E1890;
    case 301u: goto L_002E18DC;
    case 302u: goto L_002E18F0;
    case 303u: goto L_002E1908;
    case 304u: goto L_002E1960;
    case 305u: goto L_002E1998;
    case 306u: goto L_002E19B0;
    case 307u: goto L_002E19D8;
    case 308u: goto L_002E19F0;
    case 309u: goto L_002E1A20;
    case 310u: goto L_002E1A40;
    case 311u: goto L_002E1A74;
    case 312u: goto L_002E1A84;
    case 313u: goto L_002E1AA0;
    case 314u: goto L_002E1AC4;
    case 315u: goto L_002E1ADC;
    case 316u: goto L_002E1AF0;
    case 317u: goto L_002E1B0C;
    case 318u: goto L_002E1B58;
    case 319u: goto L_002E1BA0;
    case 320u: goto L_002E1BDC;
    case 321u: goto L_002E1BE8;
    case 322u: goto L_002E1BF8;
    case 323u: goto L_002E1D08;
    case 324u: goto L_002E1D40;
    case 325u: goto L_002E1D68;
    case 326u: goto L_002E1D94;
    case 327u: goto L_002E1E64;
    case 328u: goto L_002E1E80;
    case 329u: goto L_002E1EBC;
    case 330u: goto L_002E1ED8;
    case 331u: goto L_002E2080;
    case 332u: goto L_002E20F4;
    case 333u: goto L_002E2108;
    case 334u: goto L_002E2120;
    case 335u: goto L_002E2128;
    case 336u: goto L_002E2150;
    case 337u: goto L_002E217C;
    case 338u: goto L_002E2190;
    case 339u: goto L_002E21B0;
    case 340u: goto L_002E21C0;
    case 341u: goto L_002E21E4;
    case 342u: goto L_002E21EC;
    case 343u: goto L_002E2204;
    case 344u: goto L_002E2210;
    case 345u: goto L_002E2244;
    case 346u: goto L_002E2274;
    case 347u: goto L_002E2288;
    case 348u: goto L_002E22C0;
    case 349u: goto L_002E22F0;
    case 350u: goto L_002E2304;
    case 351u: goto L_002E2334;
    case 352u: goto L_002E2364;
    case 353u: goto L_002E238C;
    case 354u: goto L_002E23B4;
    case 355u: goto L_002E23C8;
    case 356u: goto L_002E23E8;
    case 357u: goto L_002E2408;
    case 358u: goto L_002E241C;
    case 359u: goto L_002E2428;
    case 360u: goto L_002E2498;
    case 361u: goto L_002E24A0;
    case 362u: goto L_002E24CC;
    case 363u: goto L_002E24D8;
    case 364u: goto L_002E24F4;
    case 365u: goto L_002E2504;
    case 366u: goto L_002E251C;
    case 367u: goto L_002E2530;
    case 368u: goto L_002E2554;
    case 369u: goto L_002E2598;
    case 370u: goto L_002E2708;
    case 371u: goto L_002E2798;
    case 372u: goto L_002E27A0;
    case 373u: goto L_002E27A8;
    case 374u: goto L_002E27B0;
    case 375u: goto L_002E27BC;
    case 376u: goto L_002E27E0;
    case 377u: goto L_002E27F0;
    case 378u: goto L_002E27F8;
    case 379u: goto L_002E2800;
    case 380u: goto L_002E2810;
    case 381u: goto L_002E2830;
    case 382u: goto L_002E2850;
    case 383u: goto L_002E2874;
    case 384u: goto L_002E2890;
    case 385u: goto L_002E28BC;
    case 386u: goto L_002E28D8;
    case 387u: goto L_002E2900;
    case 388u: goto L_002E2930;
    case 389u: goto L_002E2950;
    case 390u: goto L_002E2974;
    case 391u: goto L_002E2990;
    case 392u: goto L_002E29B0;
    case 393u: goto L_002E29D8;
    case 394u: goto L_002E29F0;
    case 395u: goto L_002E2A1C;
    case 396u: goto L_002E2A30;
    case 397u: goto L_002E2A40;
    case 398u: goto L_002E2A60;
    case 399u: goto L_002E2A84;
    case 400u: goto L_002E2AA4;
    case 401u: goto L_002E2AC0;
    case 402u: goto L_002E2B40;
    case 403u: goto L_002E2B68;
    case 404u: goto L_002E2B80;
    case 405u: goto L_002E2C00;
    case 406u: goto L_002E2C20;
    case 407u: goto L_002E2C50;
    case 408u: goto L_002E2C88;
    case 409u: goto L_002E2C90;
    case 410u: goto L_002E2CA0;
    case 411u: goto L_002E2CD0;
    case 412u: goto L_002E2D00;
    case 413u: goto L_002E2D1C;
    case 414u: goto L_002E2D40;
    case 415u: goto L_002E2D50;
    case 416u: goto L_002E2D80;
    case 417u: goto L_002E2DA0;
    case 418u: goto L_002E2DC0;
    case 419u: goto L_002E2DF0;
    case 420u: goto L_002E2E00;
    case 421u: goto L_002E2E30;
    case 422u: goto L_002E2E50;
    case 423u: goto L_002E2EA8;
    case 424u: goto L_002E2F20;
    case 425u: goto L_002E2F90;
    case 426u: goto L_002E2FBC;
    case 427u: goto L_002E2FD4;
    case 428u: goto L_002E2FF0;
    case 429u: goto L_002E3018;
    case 430u: goto L_002E3060;
    case 431u: goto L_002E30E0;
    case 432u: goto L_002E3110;
    case 433u: goto L_002E3130;
    case 434u: goto L_002E3140;
    case 435u: goto L_002E31E8;
    case 436u: goto L_002E3230;
    case 437u: goto L_002E3298;
    case 438u: goto L_002E32B0;
    case 439u: goto L_002E3304;
    case 440u: goto L_002E3384;
    case 441u: goto L_002E33A0;
    case 442u: goto L_002E3418;
    case 443u: goto L_002E3440;
    case 444u: goto L_002E34FC;
    case 445u: goto L_002E35A0;
    case 446u: goto L_002E3694;
    case 447u: goto L_002E36B0;
    case 448u: goto L_002E3720;
    case 449u: goto L_002E3798;
    case 450u: goto L_002E37A8;
    case 451u: goto L_002E37F0;
    case 452u: goto L_002E383C;
    case 453u: goto L_002E3850;
    case 454u: goto L_002E38D4;
    case 455u: goto L_002E38E8;
    case 456u: goto L_002E3960;
    case 457u: goto L_002E3978;
    case 458u: goto L_002E3984;
    case 459u: goto L_002E39C0;
    case 460u: goto L_002E39C8;
    case 461u: goto L_002E39E0;
    case 462u: goto L_002E3A0C;
    case 463u: goto L_002E3AB4;
    case 464u: goto L_002E3ACC;
    case 465u: goto L_002E3AF0;
    case 466u: goto L_002E3BB0;
    case 467u: goto L_002E3D04;
    case 468u: goto L_002E3D2C;
    case 469u: goto L_002E3D70;
    case 470u: goto L_002E3DBC;
    case 471u: goto L_002E3DD0;
    case 472u: goto L_002E3DFC;
    case 473u: goto L_002E3E08;
    case 474u: goto L_002E3E1C;
    case 475u: goto L_002E3EA4;
    case 476u: goto L_002E3EB0;
    case 477u: goto L_002E3EF8;
    case 478u: goto L_002E3F20;
    case 479u: goto L_002E3F84;
    case 480u: goto L_002E3FD0;
    default: bad_entry(c, 0x002E0000u); return;
    }
L_002E0000:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E000Cu); set32(c.r[4], c.r[4].w[0] + 3184u);  if (depth < kMaxDepth) unit_0018(c, 229u, depth + 1u); else { c.pc = 0x00263490u; return; } if (c.pc != 0x002E000Cu) [[unlikely]] return; }
L_002E000C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0018u); set32(c.r[4], c.r[4].w[0] + 3312u);  if (depth < kMaxDepth) unit_0018(c, 198u, depth + 1u); else { c.pc = 0x00262AB0u; return; } if (c.pc != 0x002E0018u) [[unlikely]] return; }
L_002E0018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0020u);  if (depth < kMaxDepth) unit_001E(c, 34u, depth + 1u); else { c.pc = 0x00278420u; return; } if (c.pc != 0x002E0020u) [[unlikely]] return; }
L_002E0020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0028u);  if (depth < kMaxDepth) unit_0096(c, 224u, depth + 1u); else { c.pc = 0x0045BD10u; return; } if (c.pc != 0x002E0028u) [[unlikely]] return; }
L_002E0028:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0034u); set32(c.r[4], c.r[4].w[0] + 8704u);  if (depth < kMaxDepth) unit_0045(c, 20u, depth + 1u); else { c.pc = 0x00314420u; return; } if (c.pc != 0x002E0034u) [[unlikely]] return; }
L_002E0034:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0040u); set32(c.r[4], c.r[4].w[0] + 8704u);  if (depth < kMaxDepth) unit_0044(c, 473u, depth + 1u); else { c.pc = 0x00313F80u; return; } if (c.pc != 0x002E0040u) [[unlikely]] return; }
L_002E0040:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E004Cu); set32(c.r[4], c.r[4].w[0] - 3768u);  if (depth < kMaxDepth) unit_006E(c, 279u, depth + 1u); else { c.pc = 0x003BBE10u; return; } if (c.pc != 0x002E004Cu) [[unlikely]] return; }
L_002E004C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0054u); set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));  if (depth < kMaxDepth) unit_0029(c, 214u, depth + 1u); else { c.pc = 0x002A6E40u; return; } if (c.pc != 0x002E0054u) [[unlikely]] return; }
L_002E0054:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0060u); set32(c.r[4], c.r[4].w[0] + 23936u);  if (depth < kMaxDepth) unit_0050(c, 203u, depth + 1u); else { c.pc = 0x00343650u; return; } if (c.pc != 0x002E0060u) [[unlikely]] return; }
L_002E0060:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E006Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 153u, depth + 1u); else { c.pc = 0x002BD490u; return; } if (c.pc != 0x002E006Cu) [[unlikely]] return; }
L_002E006C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0078u); set32(c.r[4], c.r[4].w[0] - 15952u);  if (depth < kMaxDepth) unit_0090(c, 64u, depth + 1u); else { c.pc = 0x00440CC0u; return; } if (c.pc != 0x002E0078u) [[unlikely]] return; }
L_002E0078:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0084u); set32(c.r[4], c.r[4].w[0] + 20192u);  if (depth < kMaxDepth) unit_009F(c, 16u, depth + 1u); else { c.pc = 0x0047C9A0u; return; } if (c.pc != 0x002E0084u) [[unlikely]] return; }
L_002E0084:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0090u); set32(c.r[4], c.r[4].w[0] + 21824u);  if (depth < kMaxDepth) unit_009F(c, 16u, depth + 1u); else { c.pc = 0x0047C9A0u; return; } if (c.pc != 0x002E0090u) [[unlikely]] return; }
L_002E0090:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E009Cu); set32(c.r[4], c.r[4].w[0] + 23456u);  if (depth < kMaxDepth) unit_009F(c, 16u, depth + 1u); else { c.pc = 0x0047C9A0u; return; } if (c.pc != 0x002E009Cu) [[unlikely]] return; }
L_002E009C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E00A8u); set32(c.r[4], c.r[4].w[0] + 31536u);  if (depth < kMaxDepth) unit_00BE(c, 228u, depth + 1u); else { c.pc = 0x004FB340u; return; } if (c.pc != 0x002E00A8u) [[unlikely]] return; }
L_002E00A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E00B4u); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_003A(c, 15u, depth + 1u); else { c.pc = 0x002E81C0u; return; } if (c.pc != 0x002E00B4u) [[unlikely]] return; }
L_002E00B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E00C0u); set32(c.r[4], c.r[4].w[0] - 11680u);  if (depth < kMaxDepth) unit_009A(c, 6u, depth + 1u); else { c.pc = 0x00468080u; return; } if (c.pc != 0x002E00C0u) [[unlikely]] return; }
L_002E00C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E00C8u); set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));  if (depth < kMaxDepth) unit_0088(c, 56u, depth + 1u); else { c.pc = 0x00420340u; return; } if (c.pc != 0x002E00C8u) [[unlikely]] return; }
L_002E00C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E00D0u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 314u, depth + 1u); else { c.pc = 0x003F71C0u; return; } if (c.pc != 0x002E00D0u) [[unlikely]] return; }
L_002E00D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 20360u)));
    set32(c.r[4], c.r[4].w[0] - 1808u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E00E8u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0012(c, 52u, depth + 1u); else { c.pc = 0x00248F30u; return; } if (c.pc != 0x002E00E8u) [[unlikely]] return; }
L_002E00E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 20360u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[3] = c.r[3].w[0];
    set32(c.r[4], c.r[4].w[0] - 1808u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.f[2] = ld32((c.r[2].w[0] + 40u));
    c.f[1] = ld32((c.r[2].w[0] + 36u));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E012Cu); st32((c.r[29].w[0] + 16u), c.f[0]);  if (depth < kMaxDepth) unit_0012(c, 51u, depth + 1u); else { c.pc = 0x00248EF0u; return; } if (c.pc != 0x002E012Cu) [[unlikely]] return; }
L_002E012C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0138u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x002BD740u; return; } if (c.pc != 0x002E0138u) [[unlikely]] return; }
L_002E0138:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0144u); set32(c.r[4], c.r[4].w[0] - 3744u);  if (depth < kMaxDepth) unit_006F(c, 78u, depth + 1u); else { c.pc = 0x003BD4E0u; return; } if (c.pc != 0x002E0144u) [[unlikely]] return; }
L_002E0144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E014Cu); set32(c.r[4], c.r[28].w[0] - 29240u);  if (depth < kMaxDepth) unit_0053(c, 268u, depth + 1u); else { c.pc = 0x0034FBA0u; return; } if (c.pc != 0x002E014Cu) [[unlikely]] return; }
L_002E014C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0154u); set32(c.r[4], ld32((c.r[28].w[0] - 29684u)));  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00314650u; return; } if (c.pc != 0x002E0154u) [[unlikely]] return; }
L_002E0154:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0160u); set32(c.r[4], c.r[4].w[0] + 29568u);  if (depth < kMaxDepth) unit_0053(c, 209u, depth + 1u); else { c.pc = 0x0034F5A0u; return; } if (c.pc != 0x002E0160u) [[unlikely]] return; }
L_002E0160:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E016Cu); set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));  if (depth < kMaxDepth) unit_003B(c, 135u, depth + 1u); else { c.pc = 0x002EEE50u; return; } if (c.pc != 0x002E016Cu) [[unlikely]] return; }
L_002E016C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0178u); set32(c.r[4], c.r[4].w[0] + 27296u);  if (depth < kMaxDepth) unit_00B1(c, 221u, depth + 1u); else { c.pc = 0x004C7B20u; return; } if (c.pc != 0x002E0178u) [[unlikely]] return; }
L_002E0178:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0184u); set32(c.r[4], c.r[4].w[0] + 19136u);  if (depth < kMaxDepth) unit_009D(c, 206u, depth + 1u); else { c.pc = 0x00477CC0u; return; } if (c.pc != 0x002E0184u) [[unlikely]] return; }
L_002E0184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E018Cu); set32(c.r[4], ld32((c.r[28].w[0] - 29688u)));  if (depth < kMaxDepth) unit_004B(c, 115u, depth + 1u); else { c.pc = 0x0032E710u; return; } if (c.pc != 0x002E018Cu) [[unlikely]] return; }
L_002E018C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0198u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 56u, depth + 1u); else { c.pc = 0x0034C9A0u; return; } if (c.pc != 0x002E0198u) [[unlikely]] return; }
L_002E0198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E01A0u);  if (depth < kMaxDepth) unit_0076(c, 201u, depth + 1u); else { c.pc = 0x003DB000u; return; } if (c.pc != 0x002E01A0u) [[unlikely]] return; }
L_002E01A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E01ACu); set32(c.r[4], c.r[4].w[0] + 24016u);  if (depth < kMaxDepth) unit_0052(c, 16u, depth + 1u); else { c.pc = 0x003484A0u; return; } if (c.pc != 0x002E01ACu) [[unlikely]] return; }
L_002E01AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E01B8u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 268u, depth + 1u); else { c.pc = 0x002BDF70u; return; } if (c.pc != 0x002E01B8u) [[unlikely]] return; }
L_002E01B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E01C4u); set32(c.r[4], c.r[4].w[0] + 24016u);  if (depth < kMaxDepth) unit_0051(c, 215u, depth + 1u); else { c.pc = 0x00346BF0u; return; } if (c.pc != 0x002E01C4u) [[unlikely]] return; }
L_002E01C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E01CCu);  if (depth < kMaxDepth) unit_0002(c, 61u, depth + 1u); else { c.pc = 0x002096D0u; return; } if (c.pc != 0x002E01CCu) [[unlikely]] return; }
L_002E01CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E01D8u); set32(c.r[4], c.r[4].w[0] - 23008u);  if (depth < kMaxDepth) unit_0054(c, 202u, depth + 1u); else { c.pc = 0x003529C0u; return; } if (c.pc != 0x002E01D8u) [[unlikely]] return; }
L_002E01D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E01E4u); set32(c.r[4], c.r[4].w[0] - 23008u);  if (depth < kMaxDepth) unit_0055(c, 49u, depth + 1u); else { c.pc = 0x003543C0u; return; } if (c.pc != 0x002E01E4u) [[unlikely]] return; }
L_002E01E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E01F0u); set32(c.r[4], c.r[4].w[0] - 288u);  if (depth < kMaxDepth) unit_0016(c, 17u, depth + 1u); else { c.pc = 0x00258BC0u; return; } if (c.pc != 0x002E01F0u) [[unlikely]] return; }
L_002E01F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0200u); set32(c.r[4], c.r[4].w[0] + 3040u);  if (depth < kMaxDepth) unit_0018(c, 20u, depth + 1u); else { c.pc = 0x00260650u; return; } if (c.pc != 0x002E0200u) [[unlikely]] return; }
L_002E0200:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E0210:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22933u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E02D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22934u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0300; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[17], 0u + 325u);
    set32(c.r[3], c.r[3].w[0] - 22683u);
    c.budget -= 3;
L_002E024C:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 40u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E02B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0268u); st8((c.r[16].w[0] + 560u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 216u, depth + 1u); else { c.pc = 0x00477E40u; return; } if (c.pc != 0x002E0268u) [[unlikely]] return; }
L_002E0268:
    set32(c.r[3], c.r[17].w[0] - 325u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 21344u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] - 21424u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0290u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0037(c, 176u, depth + 1u); else { c.pc = 0x002DF930u; return; } if (c.pc != 0x002E0290u) [[unlikely]] return; }
L_002E0290:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E02A0u); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 217u, depth + 1u); else { c.pc = 0x002DFEE0u; return; } if (c.pc != 0x002E02A0u) [[unlikely]] return; }
L_002E02A0:
    set32(c.r[3], 0u + 999u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E02B0u); st32((c.r[2].w[0] - 17652u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 1u, depth + 1u); else { c.pc = 0x00500000u; return; } if (c.pc != 0x002E02B0u) [[unlikely]] return; }
L_002E02B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E0320; } }
L_002E02B8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(358ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E024Cu | kUnwind; return; } goto L_002E024C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E0320; } }
L_002E02D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E02D8u); st8((c.r[16].w[0] + 560u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 216u, depth + 1u); else { c.pc = 0x00477E40u; return; } if (c.pc != 0x002E02D8u) [[unlikely]] return; }
L_002E02D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E02E8u); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 217u, depth + 1u); else { c.pc = 0x002DFEE0u; return; } if (c.pc != 0x002E02E8u) [[unlikely]] return; }
L_002E02E8:
    set32(c.r[3], 0u + 999u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E02F8u); st32((c.r[2].w[0] - 17652u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 1u, depth + 1u); else { c.pc = 0x00500000u; return; } if (c.pc != 0x002E02F8u) [[unlikely]] return; }
L_002E02F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E0320; } }
L_002E0300:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E030Cu); st8((c.r[16].w[0] + 560u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 216u, depth + 1u); else { c.pc = 0x00477E40u; return; } if (c.pc != 0x002E030Cu) [[unlikely]] return; }
L_002E030C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E031Cu); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 217u, depth + 1u); else { c.pc = 0x002DFEE0u; return; } if (c.pc != 0x002E031Cu) [[unlikely]] return; }
L_002E031C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002E0320:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E0340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E035Cu); set32(c.r[4], c.r[4].w[0] + 3040u);  if (depth < kMaxDepth) unit_0018(c, 31u, depth + 1u); else { c.pc = 0x00260760u; return; } if (c.pc != 0x002E035Cu) [[unlikely]] return; }
L_002E035C:
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 212u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 216u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 220u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E037Cu); st32((c.r[2].w[0] - 17644u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001E(c, 18u, depth + 1u); else { c.pc = 0x00278270u; return; } if (c.pc != 0x002E037Cu) [[unlikely]] return; }
L_002E037C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0384u);  if (depth < kMaxDepth) unit_0096(c, 224u, depth + 1u); else { c.pc = 0x0045BD10u; return; } if (c.pc != 0x002E0384u) [[unlikely]] return; }
L_002E0384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E038Cu); set32(c.r[4], c.r[28].w[0] - 29240u);  if (depth < kMaxDepth) unit_0053(c, 268u, depth + 1u); else { c.pc = 0x0034FBA0u; return; } if (c.pc != 0x002E038Cu) [[unlikely]] return; }
L_002E038C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0398u); set32(c.r[4], c.r[4].w[0] + 29568u);  if (depth < kMaxDepth) unit_0053(c, 209u, depth + 1u); else { c.pc = 0x0034F5A0u; return; } if (c.pc != 0x002E0398u) [[unlikely]] return; }
L_002E0398:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E03A4u); set32(c.r[4], c.r[4].w[0] + 24016u);  if (depth < kMaxDepth) unit_0052(c, 31u, depth + 1u); else { c.pc = 0x003486C0u; return; } if (c.pc != 0x002E03A4u) [[unlikely]] return; }
L_002E03A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E03B0u); set32(c.r[4], c.r[4].w[0] - 15952u);  if (depth < kMaxDepth) unit_0090(c, 64u, depth + 1u); else { c.pc = 0x00440CC0u; return; } if (c.pc != 0x002E03B0u) [[unlikely]] return; }
L_002E03B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E03BCu); set32(c.r[4], c.r[4].w[0] + 20192u);  if (depth < kMaxDepth) unit_009F(c, 16u, depth + 1u); else { c.pc = 0x0047C9A0u; return; } if (c.pc != 0x002E03BCu) [[unlikely]] return; }
L_002E03BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E03C8u); set32(c.r[4], c.r[4].w[0] + 21824u);  if (depth < kMaxDepth) unit_009F(c, 16u, depth + 1u); else { c.pc = 0x0047C9A0u; return; } if (c.pc != 0x002E03C8u) [[unlikely]] return; }
L_002E03C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E03D4u); set32(c.r[4], c.r[4].w[0] + 23456u);  if (depth < kMaxDepth) unit_009F(c, 16u, depth + 1u); else { c.pc = 0x0047C9A0u; return; } if (c.pc != 0x002E03D4u) [[unlikely]] return; }
L_002E03D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E03E0u); set32(c.r[4], c.r[4].w[0] + 31536u);  if (depth < kMaxDepth) unit_00BE(c, 228u, depth + 1u); else { c.pc = 0x004FB340u; return; } if (c.pc != 0x002E03E0u) [[unlikely]] return; }
L_002E03E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E03ECu); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_003A(c, 154u, depth + 1u); else { c.pc = 0x002E9AC0u; return; } if (c.pc != 0x002E03ECu) [[unlikely]] return; }
L_002E03EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E03F8u); set32(c.r[4], c.r[4].w[0] - 11680u);  if (depth < kMaxDepth) unit_009A(c, 6u, depth + 1u); else { c.pc = 0x00468080u; return; } if (c.pc != 0x002E03F8u) [[unlikely]] return; }
L_002E03F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0404u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 56u, depth + 1u); else { c.pc = 0x0034C9A0u; return; } if (c.pc != 0x002E0404u) [[unlikely]] return; }
L_002E0404:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0410u); set32(c.r[4], c.r[4].w[0] + 23936u);  if (depth < kMaxDepth) unit_0050(c, 188u, depth + 1u); else { c.pc = 0x003434D0u; return; } if (c.pc != 0x002E0410u) [[unlikely]] return; }
L_002E0410:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E041Cu); set32(c.r[4], c.r[4].w[0] + 19136u);  if (depth < kMaxDepth) unit_009D(c, 206u, depth + 1u); else { c.pc = 0x00477CC0u; return; } if (c.pc != 0x002E041Cu) [[unlikely]] return; }
L_002E041C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0428u); set32(c.r[4], c.r[4].w[0] - 17552u);  if (depth < kMaxDepth) unit_007A(c, 99u, depth + 1u); else { c.pc = 0x003E8F80u; return; } if (c.pc != 0x002E0428u) [[unlikely]] return; }
L_002E0428:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 29600u);
    c.budget -= 3;
L_002E0434:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 8u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[5].sd[0] < 77ll ? 1ull : 0ull;
    st8((c.r[3].w[0] + 152u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 153u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 304u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 305u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 456u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 457u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 608u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 609u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 760u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 761u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 912u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 913u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 1064u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 1065u), static_cast<std::uint8_t>(0u));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1216u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0434u | kUnwind; return; } goto L_002E0434; } }
    set32(c.r[3], c.r[5].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 29600u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[28].w[0] - 28560u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 152u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 153u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 304u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 305u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 456u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 457u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 608u), static_cast<std::uint8_t>(0u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E04D4u); st8((c.r[2].w[0] + 609u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0079(c, 265u, depth + 1u); else { c.pc = 0x003E78C0u; return; } if (c.pc != 0x002E04D4u) [[unlikely]] return; }
L_002E04D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E04DCu); set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));  if (depth < kMaxDepth) unit_0029(c, 210u, depth + 1u); else { c.pc = 0x002A6DD0u; return; } if (c.pc != 0x002E04DCu) [[unlikely]] return; }
L_002E04DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E04E8u); set32(c.r[4], c.r[4].w[0] - 16128u);  if (depth < kMaxDepth) unit_0086(c, 168u, depth + 1u); else { c.pc = 0x0041A4A0u; return; } if (c.pc != 0x002E04E8u) [[unlikely]] return; }
L_002E04E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E04F4u); set32(c.r[4], c.r[4].w[0] - 16848u);  if (depth < kMaxDepth) unit_007A(c, 235u, depth + 1u); else { c.pc = 0x003EA1C0u; return; } if (c.pc != 0x002E04F4u) [[unlikely]] return; }
L_002E04F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E04FCu); set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));  if (depth < kMaxDepth) unit_0029(c, 185u, depth + 1u); else { c.pc = 0x002A6540u; return; } if (c.pc != 0x002E04FCu) [[unlikely]] return; }
L_002E04FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0504u);  if (depth < kMaxDepth) unit_0038(c, 376u, depth + 1u); else { c.pc = 0x002E27E0u; return; } if (c.pc != 0x002E0504u) [[unlikely]] return; }
L_002E0504:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0510u); set32(c.r[4], c.r[4].w[0] - 3744u);  if (depth < kMaxDepth) unit_006F(c, 78u, depth + 1u); else { c.pc = 0x003BD4E0u; return; } if (c.pc != 0x002E0510u) [[unlikely]] return; }
L_002E0510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0518u); set32(c.r[4], ld32((c.r[28].w[0] - 29688u)));  if (depth < kMaxDepth) unit_004B(c, 261u, depth + 1u); else { c.pc = 0x0032F5B0u; return; } if (c.pc != 0x002E0518u) [[unlikely]] return; }
L_002E0518:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0604; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0530u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0029(c, 217u, depth + 1u); else { c.pc = 0x002A6EA0u; return; } if (c.pc != 0x002E0530u) [[unlikely]] return; }
L_002E0530:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E053Cu); set32(c.r[4], c.r[4].w[0] - 3872u);  if (depth < kMaxDepth) unit_006E(c, 203u, depth + 1u); else { c.pc = 0x003BB530u; return; } if (c.pc != 0x002E053Cu) [[unlikely]] return; }
L_002E053C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0548u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 44u, depth + 1u); else { c.pc = 0x002F03C0u; return; } if (c.pc != 0x002E0548u) [[unlikely]] return; }
L_002E0548:
    set32(c.r[16], ld32((c.r[28].w[0] - 29688u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E05FC; } }
    set32(c.r[4], c.r[16].w[0] + 6084u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E0568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0568u);  if (depth < kMaxDepth) unit_0038(c, 306u, depth + 1u); else { c.pc = 0x002E19B0u; return; } if (c.pc != 0x002E0568u) [[unlikely]] return; }
L_002E0568:
    set32(c.r[4], c.r[16].w[0] + 6068u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0574u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 113u, depth + 1u); else { c.pc = 0x00325770u; return; } if (c.pc != 0x002E0574u) [[unlikely]] return; }
L_002E0574:
    set32(c.r[4], c.r[16].w[0] + 2060u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0580u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0048(c, 18u, depth + 1u); else { c.pc = 0x00320280u; return; } if (c.pc != 0x002E0580u) [[unlikely]] return; }
L_002E0580:
    set32(c.r[4], c.r[16].w[0] + 2036u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E058Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0047(c, 27u, depth + 1u); else { c.pc = 0x0031C6B0u; return; } if (c.pc != 0x002E058Cu) [[unlikely]] return; }
L_002E058C:
    set32(c.r[4], c.r[16].w[0] + 2008u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0598u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0048(c, 84u, depth + 1u); else { c.pc = 0x003222B0u; return; } if (c.pc != 0x002E0598u) [[unlikely]] return; }
L_002E0598:
    set32(c.r[2], c.r[16].w[0] + 528u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E05C4; } }
    set32(c.r[4], c.r[16].w[0] + 536u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E05C4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    set32(c.r[6], 0u + 56u);
    set32(c.r[5], c.r[5].w[0] + 1760u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E05C4u); set32(c.r[7], 0u + 26u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x002E05C4u) [[unlikely]] return; }
L_002E05C4:
    set32(c.r[4], c.r[16].w[0] + 472u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E05D0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_004A(c, 4u, depth + 1u); else { c.pc = 0x003287A0u; return; } if (c.pc != 0x002E05D0u) [[unlikely]] return; }
L_002E05D0:
    set32(c.r[4], c.r[16].w[0] + 412u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E05DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_004A(c, 33u, depth + 1u); else { c.pc = 0x00329620u; return; } if (c.pc != 0x002E05DCu) [[unlikely]] return; }
L_002E05DC:
    set32(c.r[4], c.r[16].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E05E8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0049(c, 133u, depth + 1u); else { c.pc = 0x00326C80u; return; } if (c.pc != 0x002E05E8u) [[unlikely]] return; }
L_002E05E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E05F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_004B(c, 111u, depth + 1u); else { c.pc = 0x0032E680u; return; } if (c.pc != 0x002E05F4u) [[unlikely]] return; }
L_002E05F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E05FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002E05FCu) [[unlikely]] return; }
L_002E05FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29688u), 0u);  if (t) { goto L_002E0618; } }
L_002E0604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E060Cu); set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));  if (depth < kMaxDepth) unit_0029(c, 180u, depth + 1u); else { c.pc = 0x002A64C0u; return; } if (c.pc != 0x002E060Cu) [[unlikely]] return; }
L_002E060C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0618u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 58u, depth + 1u); else { c.pc = 0x002F0560u; return; } if (c.pc != 0x002E0618u) [[unlikely]] return; }
L_002E0618:
    set32(c.r[4], ld32((c.r[28].w[0] - 29812u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0624u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 77u, depth + 1u); else { c.pc = 0x00288F20u; return; } if (c.pc != 0x002E0624u) [[unlikely]] return; }
L_002E0624:
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0630u); st32((c.r[28].w[0] - 29812u), 0u);  if (depth < kMaxDepth) unit_0088(c, 68u, depth + 1u); else { c.pc = 0x004203C0u; return; } if (c.pc != 0x002E0630u) [[unlikely]] return; }
L_002E0630:
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E0644; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0644u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002E0644u) [[unlikely]] return; }
L_002E0644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E064Cu); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 251u, depth + 1u); else { c.pc = 0x003F6DF0u; return; } if (c.pc != 0x002E064Cu) [[unlikely]] return; }
L_002E064C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E0660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0660u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002E0660u) [[unlikely]] return; }
L_002E0660:
    set32(c.r[4], ld32((c.r[28].w[0] - 29684u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E066Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0045(c, 75u, depth + 1u); else { c.pc = 0x00314E10u; return; } if (c.pc != 0x002E066Cu) [[unlikely]] return; }
L_002E066C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0678u); set32(c.r[4], c.r[4].w[0] + 3856u);  if (depth < kMaxDepth) unit_0041(c, 67u, depth + 1u); else { c.pc = 0x00304BA0u; return; } if (c.pc != 0x002E0678u) [[unlikely]] return; }
L_002E0678:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0684u); set32(c.r[4], c.r[4].w[0] + 27296u);  if (depth < kMaxDepth) unit_00B1(c, 229u, depth + 1u); else { c.pc = 0x004C7DF0u; return; } if (c.pc != 0x002E0684u) [[unlikely]] return; }
L_002E0684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E068Cu);  if (depth < kMaxDepth) unit_0021(c, 343u, depth + 1u); else { c.pc = 0x00287AE0u; return; } if (c.pc != 0x002E068Cu) [[unlikely]] return; }
L_002E068C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0698u); st32((c.r[2].w[0] - 20416u), 0u);  if (depth < kMaxDepth) unit_0011(c, 365u, depth + 1u); else { c.pc = 0x00247890u; return; } if (c.pc != 0x002E0698u) [[unlikely]] return; }
L_002E0698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E06A0u);  if (depth < kMaxDepth) unit_0077(c, 69u, depth + 1u); else { c.pc = 0x003DD040u; return; } if (c.pc != 0x002E06A0u) [[unlikely]] return; }
L_002E06A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E06A8u);  if (depth < kMaxDepth) unit_0086(c, 114u, depth + 1u); else { c.pc = 0x00419BB0u; return; } if (c.pc != 0x002E06A8u) [[unlikely]] return; }
L_002E06A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E06B4u); set32(c.r[4], c.r[4].w[0] + 26720u);  if (depth < kMaxDepth) unit_00B0(c, 146u, depth + 1u); else { c.pc = 0x004C1130u; return; } if (c.pc != 0x002E06B4u) [[unlikely]] return; }
L_002E06B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E06C0u); set32(c.r[4], c.r[4].w[0] + 25328u);  if (depth < kMaxDepth) unit_00A1(c, 16u, depth + 1u); else { c.pc = 0x004843F0u; return; } if (c.pc != 0x002E06C0u) [[unlikely]] return; }
L_002E06C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E06C8u);  if (depth < kMaxDepth) unit_0002(c, 143u, depth + 1u); else { c.pc = 0x0020ADF0u; return; } if (c.pc != 0x002E06C8u) [[unlikely]] return; }
L_002E06C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E06D0u);  if (depth < kMaxDepth) unit_0002(c, 60u, depth + 1u); else { c.pc = 0x002096C0u; return; } if (c.pc != 0x002E06D0u) [[unlikely]] return; }
L_002E06D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E06E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E0720; } }
    set32(c.r[2], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0728; } }
L_002E0708:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002E070C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002E0720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0720u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002E0720u) [[unlikely]] return; }
L_002E0720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002E0744; } }
L_002E0728:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 24u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0708u | kUnwind; return; } goto L_002E0708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E073Cu);  if (depth < kMaxDepth) unit_0018(c, 157u, depth + 1u); else { c.pc = 0x00261CA0u; return; } if (c.pc != 0x002E073Cu) [[unlikely]] return; }
L_002E073C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E070Cu | kUnwind; return; } goto L_002E070C; } }
L_002E0744:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E0760:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[28].w[0] - 30636u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0784u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0011(c, 379u, depth + 1u); else { c.pc = 0x00247B00u; return; } if (c.pc != 0x002E0784u) [[unlikely]] return; }
L_002E0784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E078Cu); set32(c.r[4], c.r[28].w[0] - 30636u);  if (depth < kMaxDepth) unit_0011(c, 378u, depth + 1u); else { c.pc = 0x00247A70u; return; } if (c.pc != 0x002E078Cu) [[unlikely]] return; }
L_002E078C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[28].w[0] - 30496u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E079Cu); st32((c.r[3].w[0] - 17736u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0018(c, 196u, depth + 1u); else { c.pc = 0x00262A90u; return; } if (c.pc != 0x002E079Cu) [[unlikely]] return; }
L_002E079C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22961u));
    set32(c.r[4], c.r[4].w[0] + 3376u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E07B8u); st8((c.r[28].w[0] - 30492u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 104u, depth + 1u); else { c.pc = 0x0026D080u; return; } if (c.pc != 0x002E07B8u) [[unlikely]] return; }
L_002E07B8:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29239u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E07D0; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29240u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002E07D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0BA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 21065u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0BDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 21066u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0BDC; } }
L_002E07F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0808u); set32(c.r[4], c.r[4].w[0] - 3872u);  if (depth < kMaxDepth) unit_006E(c, 210u, depth + 1u); else { c.pc = 0x003BB5A0u; return; } if (c.pc != 0x002E0808u) [[unlikely]] return; }
L_002E0808:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29239u));
    c.budget -= 1;
L_002E080C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E082C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0820u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 42u, depth + 1u); else { c.pc = 0x0034C780u; return; } if (c.pc != 0x002E0820u) [[unlikely]] return; }
L_002E0820:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E082Cu); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 29u, depth + 1u); else { c.pc = 0x0034C5C0u; return; } if (c.pc != 0x002E082Cu) [[unlikely]] return; }
L_002E082C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0834u);  if (depth < kMaxDepth) unit_0053(c, 96u, depth + 1u); else { c.pc = 0x0034D700u; return; } if (c.pc != 0x002E0834u) [[unlikely]] return; }
L_002E0834:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0840u); set32(c.r[4], c.r[4].w[0] + 26720u);  if (depth < kMaxDepth) unit_00B0(c, 134u, depth + 1u); else { c.pc = 0x004C0F10u; return; } if (c.pc != 0x002E0840u) [[unlikely]] return; }
L_002E0840:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0850u); set32(c.r[4], c.r[4].w[0] + 3040u);  if (depth < kMaxDepth) unit_0018(c, 17u, depth + 1u); else { c.pc = 0x00260620u; return; } if (c.pc != 0x002E0850u) [[unlikely]] return; }
L_002E0850:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E085Cu); set32(c.r[4], c.r[4].w[0] + 26720u);  if (depth < kMaxDepth) unit_00B0(c, 143u, depth + 1u); else { c.pc = 0x004C10F0u; return; } if (c.pc != 0x002E085Cu) [[unlikely]] return; }
L_002E085C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22791u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E087C; } }
    set32(c.r[3], 0u + 255u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0] + 224u), c.r[3].d[0]);  if (t) { goto L_002E0884; } }
L_002E087C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[2].w[0] + 224u), 0ull);
    c.budget -= 2;
L_002E0884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E088Cu);  if (depth < kMaxDepth) unit_0001(c, 194u, depth + 1u); else { c.pc = 0x00207E60u; return; } if (c.pc != 0x002E088Cu) [[unlikely]] return; }
L_002E088C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0898u); set32(c.r[4], c.r[4].w[0] + 9056u);  if (depth < kMaxDepth) unit_0018(c, 101u, depth + 1u); else { c.pc = 0x00261060u; return; } if (c.pc != 0x002E0898u) [[unlikely]] return; }
L_002E0898:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22791u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E08BC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[3].d[0] = c.r[3].d[0] | 25800ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0] + 224u), c.r[3].d[0]);  if (t) { goto L_002E08C4; } }
L_002E08BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[2].w[0] + 224u), 0ull);
    c.budget -= 2;
L_002E08C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E08CCu);  if (depth < kMaxDepth) unit_0001(c, 139u, depth + 1u); else { c.pc = 0x00206E20u; return; } if (c.pc != 0x002E08CCu) [[unlikely]] return; }
L_002E08CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22791u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E08F0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[3].d[0] = c.r[3].d[0] | 12850ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0] + 224u), c.r[3].d[0]);  if (t) { goto L_002E08F8; } }
L_002E08F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[2].w[0] + 224u), 0ull);
    c.budget -= 2;
L_002E08F8:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29239u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0910; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29240u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002E0910:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0C24; } }
L_002E0918:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22791u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0938; } }
    c.r[3].d[0] = 0ull | 65280ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0] + 224u), c.r[3].d[0]);  if (t) { goto L_002E0940; } }
L_002E0938:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[2].w[0] + 224u), 0ull);
    c.budget -= 2;
L_002E0940:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E094Cu); set32(c.r[4], c.r[4].w[0] + 9056u);  if (depth < kMaxDepth) unit_0018(c, 93u, depth + 1u); else { c.pc = 0x00260EB0u; return; } if (c.pc != 0x002E094Cu) [[unlikely]] return; }
L_002E094C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22791u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0968; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0] + 224u), 0ull);  if (t) { goto L_002E0970; } }
L_002E0968:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[2].w[0] + 224u), 0ull);
    c.budget -= 2;
L_002E0970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0978u);  if (depth < kMaxDepth) unit_0002(c, 39u, depth + 1u); else { c.pc = 0x002093F0u; return; } if (c.pc != 0x002E0978u) [[unlikely]] return; }
L_002E0978:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22791u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0998; } }
    set32(c.r[3], 0u + 255u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0] + 224u), c.r[3].d[0]);  if (t) { goto L_002E09A0; } }
L_002E0998:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[2].w[0] + 224u), 0ull);
    c.budget -= 2;
L_002E09A0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29239u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E09B8; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29240u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002E09B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E09C0u); c.r[4].d[0] = c.r[2].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_0021(c, 338u, depth + 1u); else { c.pc = 0x00287A50u; return; } if (c.pc != 0x002E09C0u) [[unlikely]] return; }
L_002E09C0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29239u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E09D8; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29240u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002E09D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E09E8u); set32(c.r[4], c.r[4].w[0] - 16128u);  if (depth < kMaxDepth) unit_0086(c, 179u, depth + 1u); else { c.pc = 0x0041A610u; return; } if (c.pc != 0x002E09E8u) [[unlikely]] return; }
L_002E09E8:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29239u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0A00; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29240u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002E0A00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0A14; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0A14u); set32(c.r[4], c.r[4].w[0] - 15952u);  if (depth < kMaxDepth) unit_0090(c, 41u, depth + 1u); else { c.pc = 0x00440580u; return; } if (c.pc != 0x002E0A14u) [[unlikely]] return; }
L_002E0A14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0A20u); set32(c.r[4], c.r[4].w[0] + 3376u);  if (depth < kMaxDepth) unit_001B(c, 290u, depth + 1u); else { c.pc = 0x0026F9C0u; return; } if (c.pc != 0x002E0A20u) [[unlikely]] return; }
L_002E0A20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22791u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0A40; } }
    c.r[3].d[0] = 0ull | 65280ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0] + 224u), c.r[3].d[0]);  if (t) { goto L_002E0A48; } }
L_002E0A40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[2].w[0] + 224u), 0ull);
    c.budget -= 2;
L_002E0A48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22791u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0A64; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0] + 224u), 0ull);  if (t) { goto L_002E0A6C; } }
L_002E0A64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[2].w[0] + 224u), 0ull);
    c.budget -= 2;
L_002E0A6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0A78u); set32(c.r[4], c.r[4].w[0] + 27296u);  if (depth < kMaxDepth) unit_00B1(c, 174u, depth + 1u); else { c.pc = 0x004C6FE0u; return; } if (c.pc != 0x002E0A78u) [[unlikely]] return; }
L_002E0A78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22791u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0A98; } }
    c.r[3].d[0] = 0ull | 65280ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0] + 224u), c.r[3].d[0]);  if (t) { goto L_002E0AA0; } }
L_002E0A98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[2].w[0] + 224u), 0ull);
    c.budget -= 2;
L_002E0AA0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29239u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0AB8; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29240u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002E0AB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0CD8; } }
L_002E0AC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22791u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0AE0; } }
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0] + 224u), c.r[3].d[0]);  if (t) { goto L_002E0AE8; } }
L_002E0AE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[2].w[0] + 224u), 0ull);
    c.budget -= 2;
L_002E0AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0AF0u); set32(c.r[4], c.r[28].w[0] - 29240u);  if (depth < kMaxDepth) unit_0053(c, 235u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x002E0AF0u) [[unlikely]] return; }
L_002E0AF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0AFCu); set32(c.r[4], c.r[4].w[0] + 24016u);  if (depth < kMaxDepth) unit_0051(c, 225u, depth + 1u); else { c.pc = 0x00346D10u; return; } if (c.pc != 0x002E0AFCu) [[unlikely]] return; }
L_002E0AFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 10284u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002E0B48; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 23008u);
    c.budget -= 3;
L_002E0B1C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 331u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0DB0; } }
L_002E0B28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 10284u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0B1Cu | kUnwind; return; } goto L_002E0B1C; } }
    c.budget -= 1;
L_002E0B48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22962u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0DD8; } }
L_002E0B58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 6u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 24140u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002E0B74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0B74u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0037(c, 222u, depth + 1u); else { c.pc = 0x002DFFE0u; return; } if (c.pc != 0x002E0B74u) [[unlikely]] return; }
L_002E0B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0B7Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 42u, depth + 1u); else { c.pc = 0x002E0210u; return; } if (c.pc != 0x002E0B7Cu) [[unlikely]] return; }
L_002E0B7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0DF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 10278u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0E00; } }
    st8((c.r[19].w[0] + 560u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E1088; } }
L_002E0BA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0BB0u); set32(c.r[4], c.r[4].w[0] - 3872u);  if (depth < kMaxDepth) unit_006E(c, 210u, depth + 1u); else { c.pc = 0x003BB5A0u; return; } if (c.pc != 0x002E0BB0u) [[unlikely]] return; }
L_002E0BB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0BBCu); set32(c.r[4], c.r[4].w[0] - 14752u);  if (depth < kMaxDepth) unit_0022(c, 27u, depth + 1u); else { c.pc = 0x002883F0u; return; } if (c.pc != 0x002E0BBCu) [[unlikely]] return; }
L_002E0BBC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0BC8u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 42u, depth + 1u); else { c.pc = 0x0034C780u; return; } if (c.pc != 0x002E0BC8u) [[unlikely]] return; }
L_002E0BC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0BD4u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 29u, depth + 1u); else { c.pc = 0x0034C5C0u; return; } if (c.pc != 0x002E0BD4u) [[unlikely]] return; }
L_002E0BD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[28].w[0] - 29239u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E080Cu | kUnwind; return; } goto L_002E080C; } }
L_002E0BDC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 25152u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = ld8((c.r[2].w[0] + 25153u));
    set32(c.r[4], c.r[4].w[0] - 1280u);
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st8((c.r[29].w[0] + 92u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 25154u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25155u));
    st8((c.r[29].w[0] + 93u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[29].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0C1Cu); st8((c.r[29].w[0] + 95u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0014(c, 15u, depth + 1u); else { c.pc = 0x00250850u; return; } if (c.pc != 0x002E0C1Cu) [[unlikely]] return; }
L_002E0C1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E07F8u | kUnwind; return; } goto L_002E07F8; } }
L_002E0C24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0C30u); set32(c.r[4], c.r[4].w[0] + 23936u);  if (depth < kMaxDepth) unit_0050(c, 219u, depth + 1u); else { c.pc = 0x00343960u; return; } if (c.pc != 0x002E0C30u) [[unlikely]] return; }
L_002E0C30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0C3Cu); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_0039(c, 211u, depth + 1u); else { c.pc = 0x002E7950u; return; } if (c.pc != 0x002E0C3Cu) [[unlikely]] return; }
L_002E0C3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0C48u); set32(c.r[4], c.r[4].w[0] - 16848u);  if (depth < kMaxDepth) unit_007A(c, 225u, depth + 1u); else { c.pc = 0x003E9E10u; return; } if (c.pc != 0x002E0C48u) [[unlikely]] return; }
L_002E0C48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0C54u); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_0039(c, 172u, depth + 1u); else { c.pc = 0x002E6D60u; return; } if (c.pc != 0x002E0C54u) [[unlikely]] return; }
L_002E0C54:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0C60u); set32(c.r[4], c.r[4].w[0] - 16848u);  if (depth < kMaxDepth) unit_007A(c, 222u, depth + 1u); else { c.pc = 0x003E9DA0u; return; } if (c.pc != 0x002E0C60u) [[unlikely]] return; }
L_002E0C60:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29239u));
    c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002E0C78; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29240u));
    c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002E0C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0C80u); set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));  if (depth < kMaxDepth) unit_0088(c, 44u, depth + 1u); else { c.pc = 0x00420220u; return; } if (c.pc != 0x002E0C80u) [[unlikely]] return; }
L_002E0C80:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29239u));
    c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002E0C98; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29240u));
    c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002E0C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0CA0u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 373u, depth + 1u); else { c.pc = 0x003F7670u; return; } if (c.pc != 0x002E0CA0u) [[unlikely]] return; }
L_002E0CA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0CACu); set32(c.r[4], c.r[4].w[0] + 20192u);  if (depth < kMaxDepth) unit_009E(c, 247u, depth + 1u); else { c.pc = 0x0047B920u; return; } if (c.pc != 0x002E0CACu) [[unlikely]] return; }
L_002E0CAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0CB8u); set32(c.r[4], c.r[4].w[0] + 21824u);  if (depth < kMaxDepth) unit_009E(c, 247u, depth + 1u); else { c.pc = 0x0047B920u; return; } if (c.pc != 0x002E0CB8u) [[unlikely]] return; }
L_002E0CB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0CC4u); set32(c.r[4], c.r[4].w[0] + 23456u);  if (depth < kMaxDepth) unit_009E(c, 247u, depth + 1u); else { c.pc = 0x0047B920u; return; } if (c.pc != 0x002E0CC4u) [[unlikely]] return; }
L_002E0CC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0CD0u); set32(c.r[4], c.r[4].w[0] + 31536u);  if (depth < kMaxDepth) unit_00BE(c, 234u, depth + 1u); else { c.pc = 0x004FB990u; return; } if (c.pc != 0x002E0CD0u) [[unlikely]] return; }
L_002E0CD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0918u | kUnwind; return; } goto L_002E0918; } }
L_002E0CD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0CE4u); set32(c.r[4], c.r[4].w[0] + 8912u);  if (depth < kMaxDepth) unit_004F(c, 69u, depth + 1u); else { c.pc = 0x0033D610u; return; } if (c.pc != 0x002E0CE4u) [[unlikely]] return; }
L_002E0CE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0CF0u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 503u, depth + 1u); else { c.pc = 0x002C2020u; return; } if (c.pc != 0x002E0CF0u) [[unlikely]] return; }
L_002E0CF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0CFCu); set32(c.r[4], c.r[4].w[0] - 11680u);  if (depth < kMaxDepth) unit_0099(c, 210u, depth + 1u); else { c.pc = 0x00467280u; return; } if (c.pc != 0x002E0CFCu) [[unlikely]] return; }
L_002E0CFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D08u); set32(c.r[4], c.r[4].w[0] + 19136u);  if (depth < kMaxDepth) unit_009D(c, 201u, depth + 1u); else { c.pc = 0x00477B70u; return; } if (c.pc != 0x002E0D08u) [[unlikely]] return; }
L_002E0D08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22791u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0D28; } }
    c.r[3].d[0] = 0ull | 65280ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0] + 224u), c.r[3].d[0]);  if (t) { goto L_002E0D30; } }
L_002E0D28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[2].w[0] + 224u), 0ull);
    c.budget -= 2;
L_002E0D30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D3Cu); set32(c.r[4], c.r[4].w[0] + 24224u);  if (depth < kMaxDepth) unit_0052(c, 68u, depth + 1u); else { c.pc = 0x00349110u; return; } if (c.pc != 0x002E0D3Cu) [[unlikely]] return; }
L_002E0D3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22791u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0D60; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00320000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[3].d[0] = c.r[3].d[0] | 48690ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0] + 224u), c.r[3].d[0]);  if (t) { goto L_002E0D68; } }
L_002E0D60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[2].w[0] + 224u), 0ull);
    c.budget -= 2;
L_002E0D68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0D74u); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_0039(c, 244u, depth + 1u); else { c.pc = 0x002E7F20u; return; } if (c.pc != 0x002E0D74u) [[unlikely]] return; }
L_002E0D74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22791u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0D94; } }
    c.r[3].d[0] = 0ull | 65280ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0] + 224u), c.r[3].d[0]);  if (t) { goto L_002E0D9C; } }
L_002E0D94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[2].w[0] + 224u), 0ull);
    c.budget -= 2;
L_002E0D9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0DA8u); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_0039(c, 229u, depth + 1u); else { c.pc = 0x002E7C20u; return; } if (c.pc != 0x002E0DA8u) [[unlikely]] return; }
L_002E0DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0AC0u | kUnwind; return; } goto L_002E0AC0; } }
L_002E0DB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 10288u)));
    set32(c.r[4], c.r[4].w[0] + 24016u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0DD0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0051(c, 222u, depth + 1u); else { c.pc = 0x00346CA0u; return; } if (c.pc != 0x002E0DD0u) [[unlikely]] return; }
L_002E0DD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0B28u | kUnwind; return; } goto L_002E0B28; } }
L_002E0DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0DE0u);  if (depth < kMaxDepth) unit_009D(c, 216u, depth + 1u); else { c.pc = 0x00477E40u; return; } if (c.pc != 0x002E0DE0u) [[unlikely]] return; }
L_002E0DE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0DF0u); set32(c.r[4], c.r[4].w[0] + 24016u);  if (depth < kMaxDepth) unit_0051(c, 217u, depth + 1u); else { c.pc = 0x00346C20u; return; } if (c.pc != 0x002E0DF0u) [[unlikely]] return; }
L_002E0DF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0B58u | kUnwind; return; } goto L_002E0B58; } }
L_002E0DF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E1088; } }
L_002E0E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0E08u);  if (depth < kMaxDepth) unit_001D(c, 201u, depth + 1u); else { c.pc = 0x00277C70u; return; } if (c.pc != 0x002E0E08u) [[unlikely]] return; }
L_002E0E08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0E10u);  if (depth < kMaxDepth) unit_0075(c, 200u, depth + 1u); else { c.pc = 0x003D74B0u; return; } if (c.pc != 0x002E0E10u) [[unlikely]] return; }
L_002E0E10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0E1Cu); set32(c.r[4], c.r[4].w[0] + 26720u);  if (depth < kMaxDepth) unit_00B0(c, 140u, depth + 1u); else { c.pc = 0x004C1090u; return; } if (c.pc != 0x002E0E1Cu) [[unlikely]] return; }
L_002E0E1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0E28u); set32(c.r[4], c.r[4].w[0] + 26720u);  if (depth < kMaxDepth) unit_00B0(c, 136u, depth + 1u); else { c.pc = 0x004C0F70u; return; } if (c.pc != 0x002E0E28u) [[unlikely]] return; }
L_002E0E28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2076u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0E44; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0E44u); set32(c.r[4], c.r[4].w[0] - 3744u);  if (depth < kMaxDepth) unit_007A(c, 278u, depth + 1u); else { c.pc = 0x003EADC0u; return; } if (c.pc != 0x002E0E44u) [[unlikely]] return; }
L_002E0E44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0E50u); set32(c.r[4], c.r[4].w[0] + 3040u);  if (depth < kMaxDepth) unit_0018(c, 22u, depth + 1u); else { c.pc = 0x00260680u; return; } if (c.pc != 0x002E0E50u) [[unlikely]] return; }
L_002E0E50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0E5Cu); set32(c.r[4], c.r[4].w[0] + 3376u);  if (depth < kMaxDepth) unit_001B(c, 246u, depth + 1u); else { c.pc = 0x0026F090u; return; } if (c.pc != 0x002E0E5Cu) [[unlikely]] return; }
L_002E0E5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0E68u); set32(c.r[4], c.r[4].w[0] - 1280u);  if (depth < kMaxDepth) unit_0013(c, 59u, depth + 1u); else { c.pc = 0x0024F280u; return; } if (c.pc != 0x002E0E68u) [[unlikely]] return; }
L_002E0E68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0E74u); set32(c.r[4], c.r[4].w[0] - 3872u);  if (depth < kMaxDepth) unit_006E(c, 237u, depth + 1u); else { c.pc = 0x003BB950u; return; } if (c.pc != 0x002E0E74u) [[unlikely]] return; }
L_002E0E74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0E7Cu); set32(c.r[4], c.r[28].w[0] - 30636u);  if (depth < kMaxDepth) unit_0011(c, 378u, depth + 1u); else { c.pc = 0x00247A70u; return; } if (c.pc != 0x002E0E7Cu) [[unlikely]] return; }
L_002E0E7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] - 17732u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[7], ld32((c.r[4].w[0] - 17736u)));
    set32(c.r[6], ld32((c.r[3].w[0] - 17740u)));
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] - 17744u)));
    set32(c.r[3], 0u + 100u);
    c.budget -= 14;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; st32((c.r[4].w[0] - 17740u), c.r[2].w[0]);  if (t) { goto L_002E1060; } }
    mmi::divu(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 17724u)));
    c.r[3].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002E1054; } }
L_002E0ED0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] - 17740u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 17744u), 0u);  if (t) { goto L_002E1060; } }
L_002E0EE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0] + 224u), c.r[3].d[0]);  if (t) { goto L_002E0EF8; } }
L_002E0EF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[2].w[0] + 224u), 0ull);
    c.budget -= 2;
L_002E0EF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0F04u); set32(c.r[4], c.r[4].w[0] - 288u);  if (depth < kMaxDepth) unit_0016(c, 17u, depth + 1u); else { c.pc = 0x00258BC0u; return; } if (c.pc != 0x002E0F04u) [[unlikely]] return; }
L_002E0F04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22764u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0F34; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29239u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0F2C; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29240u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002E0F2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0F44; } }
L_002E0F34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 27235u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0F50; } }
L_002E0F44:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[2].w[0] + 2076u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002E0F50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22791u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0F74; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0] + 224u), c.r[3].d[0]);  if (t) { goto L_002E0F7C; } }
L_002E0F74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[2].w[0] + 224u), 0ull);
    c.budget -= 2;
L_002E0F7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E0F8Cu); set32(c.r[4], c.r[4].w[0] + 3040u);  if (depth < kMaxDepth) unit_0018(c, 20u, depth + 1u); else { c.pc = 0x00260650u; return; } if (c.pc != 0x002E0F8Cu) [[unlikely]] return; }
L_002E0F8C:
    st32((c.r[19].w[0] + 576u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22791u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E0FAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st64((c.r[2].w[0] + 224u), 0ull);  if (t) { goto L_002E0FB4; } }
L_002E0FAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12000000u);
    st64((c.r[2].w[0] + 224u), 0ull);
    c.budget -= 2;
L_002E0FB4:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29239u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E0FCC; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29240u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002E0FCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E104C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 20408u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E1020; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[2] = ld32((c.r[2].w[0] - 20404u));
    c.f[3] = ld32((c.r[28].w[0] - 29672u));
    c.f[0] = 0u;
    c.f[4] = ld32((c.r[28].w[0] - 29672u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[2].w[0] - 20416u));
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[2]);
    st32((c.r[3].w[0] - 20416u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 20412u), c.f[0]);  if (t) { goto L_002E1044; } }
L_002E1020:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    c.f[1] = ld32((c.r[28].w[0] - 29672u));
    c.f[4] = ld32((c.r[28].w[0] - 29672u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] - 20412u), c.f[1]);
    st32((c.r[3].w[0] - 20416u), c.f[0]);
    c.budget -= 9;
L_002E1044:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[2].w[0] - 20400u), c.f[4]);
    c.budget -= 2;
L_002E104C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002E1088; } }
L_002E1054:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 17724u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0ED0u | kUnwind; return; } goto L_002E0ED0; } }
L_002E1060:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 17744u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22791u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[3].w[0] - 17744u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0EF0u | kUnwind; return; } goto L_002E0EF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E0EE4u | kUnwind; return; } goto L_002E0EE4; } }
L_002E1088:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002E10B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_002E10C0:
    set32(c.r[29], c.r[29].w[0] - 480u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 13416u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[6], c.r[19].w[0] + 36u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E10F0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x002E10F0u) [[unlikely]] return; }
L_002E10F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[29].w[0] + 476u);
    set32(c.r[2], c.r[2].w[0] - 28400u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 176u), 0u);
    st32((c.r[29].w[0] + 192u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1114u); st8((c.r[29].w[0] + 200u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002E1114u) [[unlikely]] return; }
L_002E1114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E111Cu); set32(c.r[4], c.r[29].w[0] + 476u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002E111Cu) [[unlikely]] return; }
L_002E111C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1134u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E1134u) [[unlikely]] return; }
L_002E1134:
    set32(c.r[4], c.r[29].w[0] + 476u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1140u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002E1140u) [[unlikely]] return; }
L_002E1140:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1154u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E1154u) [[unlikely]] return; }
L_002E1154:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E11F8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[18], c.r[3].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[18].sd[0] < 81ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002E1178; } }
    set32(c.r[18], 0u + 80u);
    c.budget -= 1;
L_002E1178:
    set32(c.r[17], c.r[29].w[0] + 196u);
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E11DC; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[16], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E11A8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002E11A8u) [[unlikely]] return; }
L_002E11A8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[16].d[0]; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002E11F4; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[6], c.r[18].w[0] - c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E11D4u); set32(c.r[5], c.r[2].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E11D4u) [[unlikely]] return; }
L_002E11D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 160u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E11F8; } }
L_002E11DC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E11E8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002E11E8u) [[unlikely]] return; }
L_002E11E8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002E11F4:
    st8((c.r[29].w[0] + 160u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002E11F8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1204u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002E1204u) [[unlikely]] return; }
L_002E1204:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1210u); set32(c.r[4], c.r[4].w[0] + 26720u);  if (depth < kMaxDepth) unit_00B0(c, 147u, depth + 1u); else { c.pc = 0x004C1140u; return; } if (c.pc != 0x002E1210u) [[unlikely]] return; }
L_002E1210:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E121Cu); set32(c.r[4], c.r[4].w[0] + 26720u);  if (depth < kMaxDepth) unit_00B0(c, 135u, depth + 1u); else { c.pc = 0x004C0F40u; return; } if (c.pc != 0x002E121Cu) [[unlikely]] return; }
L_002E121C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1228u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 184u, depth + 1u); else { c.pc = 0x004867A0u; return; } if (c.pc != 0x002E1228u) [[unlikely]] return; }
L_002E1228:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E123Cu); set32(c.r[5], c.r[5].w[0] - 13399u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002E123Cu) [[unlikely]] return; }
L_002E123C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1250u); set32(c.r[5], c.r[5].w[0] - 13376u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002E1250u) [[unlikely]] return; }
L_002E1250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1258u); set32(c.r[4], c.r[19].w[0] + 36u);  if (depth < kMaxDepth) unit_0086(c, 120u, depth + 1u); else { c.pc = 0x00419C20u; return; } if (c.pc != 0x002E1258u) [[unlikely]] return; }
L_002E1258:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1264u); set32(c.r[4], c.r[4].w[0] + 3856u);  if (depth < kMaxDepth) unit_0041(c, 72u, depth + 1u); else { c.pc = 0x00304C50u; return; } if (c.pc != 0x002E1264u) [[unlikely]] return; }
L_002E1264:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1278u); set32(c.r[5], c.r[5].w[0] - 13353u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002E1278u) [[unlikely]] return; }
L_002E1278:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 560u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E1848; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1290u); set32(c.r[4], c.r[4].w[0] - 3872u);  if (depth < kMaxDepth) unit_006E(c, 204u, depth + 1u); else { c.pc = 0x003BB540u; return; } if (c.pc != 0x002E1290u) [[unlikely]] return; }
L_002E1290:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E12A4u); set32(c.r[5], c.r[5].w[0] - 13327u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002E12A4u) [[unlikely]] return; }
L_002E12A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E12B0u); set32(c.r[4], c.r[4].w[0] - 15728u);  if (depth < kMaxDepth) unit_0064(c, 159u, depth + 1u); else { c.pc = 0x003913F0u; return; } if (c.pc != 0x002E12B0u) [[unlikely]] return; }
L_002E12B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E12C4u); set32(c.r[5], c.r[5].w[0] - 13294u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002E12C4u) [[unlikely]] return; }
L_002E12C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00070000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E12D0u); c.r[4].d[0] = c.r[2].d[0] | 2064ull;  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E12D0u) [[unlikely]] return; }
L_002E12D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E12E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E12E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0029(c, 252u, depth + 1u); else { c.pc = 0x002A7150u; return; } if (c.pc != 0x002E12E0u) [[unlikely]] return; }
L_002E12E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[28].w[0] - 29752u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E12F8u); set32(c.r[5], c.r[5].w[0] - 13271u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002E12F8u) [[unlikely]] return; }
L_002E12F8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 29192u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1308u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 66u, depth + 1u); else { c.pc = 0x002F0690u; return; } if (c.pc != 0x002E1308u) [[unlikely]] return; }
L_002E1308:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], c.r[5].w[0] - 13245u);
    set32(c.r[6], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1324u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003B(c, 191u, depth + 1u); else { c.pc = 0x002EFD90u; return; } if (c.pc != 0x002E1324u) [[unlikely]] return; }
L_002E1324:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1338u); set32(c.r[5], c.r[5].w[0] - 13233u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002E1338u) [[unlikely]] return; }
L_002E1338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1340u); set32(c.r[4], 0u + 6112u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E1340u) [[unlikely]] return; }
L_002E1340:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E17D8; } }
L_002E1348:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    set32(c.r[5], c.r[5].w[0] - 13211u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1360u); st32((c.r[28].w[0] - 29688u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002E1360u) [[unlikely]] return; }
L_002E1360:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 3376u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1374u); set32(c.r[5], c.r[5].w[0] - 13194u);  if (depth < kMaxDepth) unit_001B(c, 91u, depth + 1u); else { c.pc = 0x0026CD90u; return; } if (c.pc != 0x002E1374u) [[unlikely]] return; }
L_002E1374:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[17].d[0] = c.r[2].d[0] << 56;
    set32(c.r[4], c.r[4].w[0] + 3376u);
    set32(c.r[5], c.r[5].w[0] - 13185u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1390u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);  if (depth < kMaxDepth) unit_001B(c, 91u, depth + 1u); else { c.pc = 0x0026CD90u; return; } if (c.pc != 0x002E1390u) [[unlikely]] return; }
L_002E1390:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    set32(c.r[4], c.r[4].w[0] + 3376u);
    set32(c.r[5], c.r[5].w[0] - 13176u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E13ACu); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);  if (depth < kMaxDepth) unit_001B(c, 91u, depth + 1u); else { c.pc = 0x0026CD90u; return; } if (c.pc != 0x002E13ACu) [[unlikely]] return; }
L_002E13AC:
    set32(c.r[4], ld32((c.r[28].w[0] - 29688u)));
    c.r[7].d[0] = c.r[2].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E13C4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 318u, depth + 1u); else { c.pc = 0x0032FF60u; return; } if (c.pc != 0x002E13C4u) [[unlikely]] return; }
L_002E13C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E13CCu);  if (depth < kMaxDepth) unit_001E(c, 34u, depth + 1u); else { c.pc = 0x00278420u; return; } if (c.pc != 0x002E13CCu) [[unlikely]] return; }
L_002E13CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E13D4u);  if (depth < kMaxDepth) unit_0077(c, 69u, depth + 1u); else { c.pc = 0x003DD040u; return; } if (c.pc != 0x002E13D4u) [[unlikely]] return; }
L_002E13D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E13DCu);  if (depth < kMaxDepth) unit_0076(c, 233u, depth + 1u); else { c.pc = 0x003DB450u; return; } if (c.pc != 0x002E13DCu) [[unlikely]] return; }
L_002E13DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E13E4u);  if (depth < kMaxDepth) unit_0083(c, 175u, depth + 1u); else { c.pc = 0x0040DB90u; return; } if (c.pc != 0x002E13E4u) [[unlikely]] return; }
L_002E13E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E13F8u); set32(c.r[5], c.r[5].w[0] - 13167u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002E13F8u) [[unlikely]] return; }
L_002E13F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1400u);  if (depth < kMaxDepth) unit_0096(c, 224u, depth + 1u); else { c.pc = 0x0045BD10u; return; } if (c.pc != 0x002E1400u) [[unlikely]] return; }
L_002E1400:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 29600u);
    c.budget -= 3;
L_002E140C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 8u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[5].sd[0] < 77ll ? 1ull : 0ull;
    st8((c.r[3].w[0] + 152u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 153u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 304u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 305u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 456u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 457u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 608u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 609u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 760u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 761u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 912u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 913u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 1064u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 1065u), static_cast<std::uint8_t>(0u));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1216u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E140Cu | kUnwind; return; } goto L_002E140C; } }
    set32(c.r[3], c.r[5].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 29600u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 16128u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 152u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 153u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 304u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 305u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 456u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 457u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 608u), static_cast<std::uint8_t>(0u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E14B0u); st8((c.r[2].w[0] + 609u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0086(c, 175u, depth + 1u); else { c.pc = 0x0041A580u; return; } if (c.pc != 0x002E14B0u) [[unlikely]] return; }
L_002E14B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E14BCu); set32(c.r[4], c.r[4].w[0] - 16848u);  if (depth < kMaxDepth) unit_007A(c, 235u, depth + 1u); else { c.pc = 0x003EA1C0u; return; } if (c.pc != 0x002E14BCu) [[unlikely]] return; }
L_002E14BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E14D0u); set32(c.r[5], c.r[5].w[0] - 13143u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002E14D0u) [[unlikely]] return; }
L_002E14D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E14DCu); set32(c.r[4], c.r[4].w[0] + 23936u);  if (depth < kMaxDepth) unit_0050(c, 207u, depth + 1u); else { c.pc = 0x003436C0u; return; } if (c.pc != 0x002E14DCu) [[unlikely]] return; }
L_002E14DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E14F0u); set32(c.r[5], c.r[5].w[0] - 13112u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002E14F0u) [[unlikely]] return; }
L_002E14F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E14F8u); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E14F8u) [[unlikely]] return; }
L_002E14F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E151C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[28].w[0] - 32232u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 19120u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E151Cu); set32(c.r[7], c.r[7].w[0] - 13083u);  if (depth < kMaxDepth) unit_0041(c, 331u, depth + 1u); else { c.pc = 0x00307980u; return; } if (c.pc != 0x002E151Cu) [[unlikely]] return; }
L_002E151C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E152Cu); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 68u, depth + 1u); else { c.pc = 0x002F06D0u; return; } if (c.pc != 0x002E152Cu) [[unlikely]] return; }
L_002E152C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1540u); set32(c.r[5], c.r[5].w[0] - 13075u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002E1540u) [[unlikely]] return; }
L_002E1540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1548u); set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));  if (depth < kMaxDepth) unit_002B(c, 9u, depth + 1u); else { c.pc = 0x002AC110u; return; } if (c.pc != 0x002E1548u) [[unlikely]] return; }
L_002E1548:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E155Cu); set32(c.r[5], c.r[5].w[0] - 13037u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002E155Cu) [[unlikely]] return; }
L_002E155C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1564u);  if (depth < kMaxDepth) unit_0038(c, 336u, depth + 1u); else { c.pc = 0x002E2150u; return; } if (c.pc != 0x002E1564u) [[unlikely]] return; }
L_002E1564:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1578u); set32(c.r[5], c.r[5].w[0] - 13001u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002E1578u) [[unlikely]] return; }
L_002E1578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1580u); set32(c.r[4], 0u + 6408u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E1580u) [[unlikely]] return; }
L_002E1580:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E1590; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1590u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 85u, depth + 1u); else { c.pc = 0x00289010u; return; } if (c.pc != 0x002E1590u) [[unlikely]] return; }
L_002E1590:
    st32((c.r[28].w[0] - 29812u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E159Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 82u, depth + 1u); else { c.pc = 0x00288FC0u; return; } if (c.pc != 0x002E159Cu) [[unlikely]] return; }
L_002E159C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E1864; } }
L_002E15A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E15B8u); set32(c.r[5], c.r[5].w[0] - 12972u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002E15B8u) [[unlikely]] return; }
L_002E15B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E15C4u); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_003A(c, 173u, depth + 1u); else { c.pc = 0x002E9EA0u; return; } if (c.pc != 0x002E15C4u) [[unlikely]] return; }
L_002E15C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E15D8u); set32(c.r[5], c.r[5].w[0] - 12945u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002E15D8u) [[unlikely]] return; }
L_002E15D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E15E0u);  if (depth < kMaxDepth) unit_0038(c, 328u, depth + 1u); else { c.pc = 0x002E1E80u; return; } if (c.pc != 0x002E15E0u) [[unlikely]] return; }
L_002E15E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E15F4u); set32(c.r[5], c.r[5].w[0] - 12909u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002E15F4u) [[unlikely]] return; }
L_002E15F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1600u); set32(c.r[4], c.r[4].w[0] + 27296u);  if (depth < kMaxDepth) unit_00B1(c, 234u, depth + 1u); else { c.pc = 0x004C7F20u; return; } if (c.pc != 0x002E1600u) [[unlikely]] return; }
L_002E1600:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1614u); set32(c.r[5], c.r[5].w[0] - 12865u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002E1614u) [[unlikely]] return; }
L_002E1614:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1620u); set32(c.r[4], c.r[4].w[0] - 11680u);  if (depth < kMaxDepth) unit_009A(c, 6u, depth + 1u); else { c.pc = 0x00468080u; return; } if (c.pc != 0x002E1620u) [[unlikely]] return; }
L_002E1620:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E162Cu); set32(c.r[4], c.r[4].w[0] - 15952u);  if (depth < kMaxDepth) unit_0090(c, 64u, depth + 1u); else { c.pc = 0x00440CC0u; return; } if (c.pc != 0x002E162Cu) [[unlikely]] return; }
L_002E162C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1638u); set32(c.r[4], c.r[4].w[0] + 19136u);  if (depth < kMaxDepth) unit_009D(c, 209u, depth + 1u); else { c.pc = 0x00477D50u; return; } if (c.pc != 0x002E1638u) [[unlikely]] return; }
L_002E1638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1640u);  if (depth < kMaxDepth) unit_0076(c, 224u, depth + 1u); else { c.pc = 0x003DB3A0u; return; } if (c.pc != 0x002E1640u) [[unlikely]] return; }
L_002E1640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1648u);  if (depth < kMaxDepth) unit_0076(c, 201u, depth + 1u); else { c.pc = 0x003DB000u; return; } if (c.pc != 0x002E1648u) [[unlikely]] return; }
L_002E1648:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1654u); set32(c.r[4], c.r[4].w[0] - 3744u);  if (depth < kMaxDepth) unit_006F(c, 121u, depth + 1u); else { c.pc = 0x003BDCD0u; return; } if (c.pc != 0x002E1654u) [[unlikely]] return; }
L_002E1654:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1660u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0053(c, 63u, depth + 1u); else { c.pc = 0x0034CBE0u; return; } if (c.pc != 0x002E1660u) [[unlikely]] return; }
L_002E1660:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E166Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 268u, depth + 1u); else { c.pc = 0x002BDF70u; return; } if (c.pc != 0x002E166Cu) [[unlikely]] return; }
L_002E166C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1674u); set32(c.r[4], ld32((c.r[28].w[0] - 29688u)));  if (depth < kMaxDepth) unit_004B(c, 288u, depth + 1u); else { c.pc = 0x0032F830u; return; } if (c.pc != 0x002E1674u) [[unlikely]] return; }
L_002E1674:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1688u); set32(c.r[5], c.r[5].w[0] - 12834u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002E1688u) [[unlikely]] return; }
L_002E1688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1690u); set32(c.r[4], 0u + 260u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002E1690u) [[unlikely]] return; }
L_002E1690:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E16C4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 3376u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E16B0u); set32(c.r[5], c.r[5].w[0] - 13194u);  if (depth < kMaxDepth) unit_001B(c, 91u, depth + 1u); else { c.pc = 0x0026CD90u; return; } if (c.pc != 0x002E16B0u) [[unlikely]] return; }
L_002E16B0:
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E16C0u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_0045(c, 134u, depth + 1u); else { c.pc = 0x00315670u; return; } if (c.pc != 0x002E16C0u) [[unlikely]] return; }
L_002E16C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002E16C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    set32(c.r[5], c.r[5].w[0] - 12812u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E16DCu); st32((c.r[28].w[0] - 29684u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002E16DCu) [[unlikely]] return; }
L_002E16DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E16ECu); set32(c.r[4], c.r[4].w[0] - 1504u);  if (depth < kMaxDepth) unit_0012(c, 63u, depth + 1u); else { c.pc = 0x00249500u; return; } if (c.pc != 0x002E16ECu) [[unlikely]] return; }
L_002E16EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E16FCu); set32(c.r[4], c.r[4].w[0] - 1504u);  if (depth < kMaxDepth) unit_0012(c, 62u, depth + 1u); else { c.pc = 0x002494F0u; return; } if (c.pc != 0x002E16FCu) [[unlikely]] return; }
L_002E16FC:
    set32(c.r[5], ld32((c.r[28].w[0] - 28172u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002E1714; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1714u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002E(c, 287u, depth + 1u); else { c.pc = 0x002BBD90u; return; } if (c.pc != 0x002E1714u) [[unlikely]] return; }
L_002E1714:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 3184u)));
    set32(c.r[4], c.r[4].w[0] - 23008u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1734u); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0054(c, 206u, depth + 1u); else { c.pc = 0x00352B60u; return; } if (c.pc != 0x002E1734u) [[unlikely]] return; }
L_002E1734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E173Cu);  if (depth < kMaxDepth) unit_0002(c, 143u, depth + 1u); else { c.pc = 0x0020ADF0u; return; } if (c.pc != 0x002E173Cu) [[unlikely]] return; }
L_002E173C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] + 25328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1750u); set32(c.r[5], c.r[5].w[0] - 12780u);  if (depth < kMaxDepth) unit_00A1(c, 29u, depth + 1u); else { c.pc = 0x00484570u; return; } if (c.pc != 0x002E1750u) [[unlikely]] return; }
L_002E1750:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E175Cu); set32(c.r[4], c.r[4].w[0] + 25328u);  if (depth < kMaxDepth) unit_00A1(c, 19u, depth + 1u); else { c.pc = 0x00484430u; return; } if (c.pc != 0x002E175Cu) [[unlikely]] return; }
L_002E175C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1764u);  if (depth < kMaxDepth) unit_0002(c, 61u, depth + 1u); else { c.pc = 0x002096D0u; return; } if (c.pc != 0x002E1764u) [[unlikely]] return; }
L_002E1764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E176Cu);  if (depth < kMaxDepth) unit_0086(c, 117u, depth + 1u); else { c.pc = 0x00419BF0u; return; } if (c.pc != 0x002E176Cu) [[unlikely]] return; }
L_002E176C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1774u);  if (depth < kMaxDepth) unit_001E(c, 21u, depth + 1u); else { c.pc = 0x002782A0u; return; } if (c.pc != 0x002E1774u) [[unlikely]] return; }
L_002E1774:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] - 17744u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] - 17740u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] - 17736u), 0u);
    st32((c.r[2].w[0] - 17732u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[3].w[0] - 17728u), 0u);
    set32(c.r[4], c.r[4].w[0] + 3040u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E17B0u); st32((c.r[2].w[0] - 17724u), 0u);  if (depth < kMaxDepth) unit_0018(c, 22u, depth + 1u); else { c.pc = 0x00260680u; return; } if (c.pc != 0x002E17B0u) [[unlikely]] return; }
L_002E17B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E17BCu); set32(c.r[4], c.r[4].w[0] + 3376u);  if (depth < kMaxDepth) unit_001B(c, 246u, depth + 1u); else { c.pc = 0x0026F090u; return; } if (c.pc != 0x002E17BCu) [[unlikely]] return; }
L_002E17BC:
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 3872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E17D0u); st8((c.r[28].w[0] - 32508u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006E(c, 237u, depth + 1u); else { c.pc = 0x003BB950u; return; } if (c.pc != 0x002E17D0u) [[unlikely]] return; }
L_002E17D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002E1878; } }
L_002E17D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E17E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004B(c, 114u, depth + 1u); else { c.pc = 0x0032E6E0u; return; } if (c.pc != 0x002E17E0u) [[unlikely]] return; }
L_002E17E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E17E8u); set32(c.r[4], c.r[16].w[0] + 208u);  if (depth < kMaxDepth) unit_0049(c, 135u, depth + 1u); else { c.pc = 0x00326CD0u; return; } if (c.pc != 0x002E17E8u) [[unlikely]] return; }
L_002E17E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E17F0u); set32(c.r[4], c.r[16].w[0] + 412u);  if (depth < kMaxDepth) unit_004A(c, 38u, depth + 1u); else { c.pc = 0x003296A0u; return; } if (c.pc != 0x002E17F0u) [[unlikely]] return; }
L_002E17F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E17F8u); set32(c.r[4], c.r[16].w[0] + 472u);  if (depth < kMaxDepth) unit_004A(c, 6u, depth + 1u); else { c.pc = 0x003287F0u; return; } if (c.pc != 0x002E17F8u) [[unlikely]] return; }
L_002E17F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1800u); set32(c.r[4], c.r[16].w[0] + 528u);  if (depth < kMaxDepth) unit_0049(c, 102u, depth + 1u); else { c.pc = 0x00325130u; return; } if (c.pc != 0x002E1800u) [[unlikely]] return; }
L_002E1800:
    st8((c.r[16].w[0] + 2024u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 2032u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1814u); set32(c.r[4], c.r[16].w[0] + 2036u);  if (depth < kMaxDepth) unit_0047(c, 32u, depth + 1u); else { c.pc = 0x0031C730u; return; } if (c.pc != 0x002E1814u) [[unlikely]] return; }
L_002E1814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E181Cu); set32(c.r[4], c.r[16].w[0] + 2060u);  if (depth < kMaxDepth) unit_0048(c, 30u, depth + 1u); else { c.pc = 0x00320440u; return; } if (c.pc != 0x002E181Cu) [[unlikely]] return; }
L_002E181C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1824u); set32(c.r[4], c.r[16].w[0] + 5632u);  if (depth < kMaxDepth) unit_0047(c, 125u, depth + 1u); else { c.pc = 0x0031D520u; return; } if (c.pc != 0x002E1824u) [[unlikely]] return; }
L_002E1824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E182Cu); set32(c.r[4], c.r[16].w[0] + 6032u);  if (depth < kMaxDepth) unit_0047(c, 55u, depth + 1u); else { c.pc = 0x0031CDE0u; return; } if (c.pc != 0x002E182Cu) [[unlikely]] return; }
L_002E182C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1834u); set32(c.r[4], c.r[16].w[0] + 6052u);  if (depth < kMaxDepth) unit_0047(c, 39u, depth + 1u); else { c.pc = 0x0031C9A0u; return; } if (c.pc != 0x002E1834u) [[unlikely]] return; }
L_002E1834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E183Cu); set32(c.r[4], c.r[16].w[0] + 6068u);  if (depth < kMaxDepth) unit_0049(c, 117u, depth + 1u); else { c.pc = 0x003257F0u; return; } if (c.pc != 0x002E183Cu) [[unlikely]] return; }
L_002E183C:
    st32((c.r[16].w[0] + 6084u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 6088u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1348u | kUnwind; return; } goto L_002E1348; } }
L_002E1848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1850u); set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));  if (depth < kMaxDepth) unit_002B(c, 5u, depth + 1u); else { c.pc = 0x002AC080u; return; } if (c.pc != 0x002E1850u) [[unlikely]] return; }
L_002E1850:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E185Cu); set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));  if (depth < kMaxDepth) unit_003B(c, 188u, depth + 1u); else { c.pc = 0x002EFD30u; return; } if (c.pc != 0x002E185Cu) [[unlikely]] return; }
L_002E185C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 560u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1360u | kUnwind; return; } goto L_002E1360; } }
L_002E1864:
    set32(c.r[4], ld32((c.r[28].w[0] - 29812u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1870u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 77u, depth + 1u); else { c.pc = 0x00288F20u; return; } if (c.pc != 0x002E1870u) [[unlikely]] return; }
L_002E1870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29812u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E15A4u | kUnwind; return; } goto L_002E15A4; } }
L_002E1878:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_002E1890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E18DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 15408u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_002E18C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 15376u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002E18C4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002E18DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E18DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002E18DCu) [[unlikely]] return; }
L_002E18DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E18F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 15408u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st8((c.r[4].w[0] + 560u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_002E1908:
    st32((c.r[3].w[0] + 164u), 0u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    st32((c.r[3].w[0] + 168u), 0u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(91ll) ? 1ull : 0ull;
    st32((c.r[3].w[0] + 172u), 0u);
    st32((c.r[3].w[0] + 176u), 0u);
    st32((c.r[3].w[0] + 180u), 0u);
    st32((c.r[3].w[0] + 184u), 0u);
    st32((c.r[3].w[0] + 188u), 0u);
    st32((c.r[3].w[0] + 192u), 0u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1908u | kUnwind; return; } goto L_002E1908; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 164u), 0u);
    st32((c.r[3].w[0] + 168u), 0u);
    st32((c.r[3].w[0] + 172u), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 561u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002E1960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E1998; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 15376u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_002E1998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1998u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002E1998u) [[unlikely]] return; }
L_002E1998:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E19B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E19D8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E19D8u); set32(c.r[5], c.r[5].w[0] + 6640u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x002E19D8u) [[unlikely]] return; }
L_002E19D8:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E19F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E1A20; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002E1A20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1A20u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002E1A20u) [[unlikely]] return; }
L_002E1A20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E1A40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29556u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E1D18; } }
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002E1AC0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29540u)));
    c.budget -= 1;
L_002E1A74:
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002E1AB8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E1A84:
    set32(c.r[3], ld32((c.r[28].w[0] - 29544u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 28u)));
    c.r[1].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E1CFC; } }
    c.budget -= 1;
L_002E1AA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 29540u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1A84u | kUnwind; return; } goto L_002E1A84; } }
    c.budget -= 1;
L_002E1AB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E1D18; } }
L_002E1AC0:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E1AC4:
    set32(c.r[2], ld32((c.r[28].w[0] - 29560u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1ADCu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002E(c, 299u, depth + 1u); else { c.pc = 0x002BBF40u; return; } if (c.pc != 0x002E1ADCu) [[unlikely]] return; }
L_002E1ADC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1AF0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x002E1AF0u) [[unlikely]] return; }
L_002E1AF0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002E1CE0; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 208u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1B0Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E1B0Cu) [[unlikely]] return; }
L_002E1B0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E1CE0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29560u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 29544u)));
    set32(c.r[18], c.r[3].w[0] + c.r[17].w[0]);
    c.r[7].d[0] = ld16((c.r[18].w[0]));
    c.r[6].d[0] = ld16((c.r[18].w[0] + 2u));
    set32(c.r[3], c.r[7].w[0] << 5);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.r[1].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_002E1B80; } }
    set32(c.r[8], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 2;
L_002E1B58:
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002E1B70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_002E1B80; } }
    c.budget -= 1;
L_002E1B70:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1B58u | kUnwind; return; } goto L_002E1B58; } }
L_002E1B80:
    set32(c.r[3], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.r[1].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002E1BC8; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 1;
L_002E1BA0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_002E1BB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E1BC8; } }
    c.budget -= 1;
L_002E1BB8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1BA0u | kUnwind; return; } goto L_002E1BA0; } }
L_002E1BC8:
    st32((c.r[19].w[0] + 152u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 156u), c.r[8].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 148u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1BDCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 95u, depth + 1u); else { c.pc = 0x00469450u; return; } if (c.pc != 0x002E1BDCu) [[unlikely]] return; }
L_002E1BDC:
    c.r[5].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1BE8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 94u, depth + 1u); else { c.pc = 0x00469400u; return; } if (c.pc != 0x002E1BE8u) [[unlikely]] return; }
L_002E1BE8:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 2u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1BF8u); c.r[19].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_009A(c, 94u, depth + 1u); else { c.pc = 0x00469400u; return; } if (c.pc != 0x002E1BF8u) [[unlikely]] return; }
L_002E1BF8:
    c.r[13].d[0] = ld16((c.r[18].w[0]));
    c.r[3].d[0] = c.r[19].d[0] & 1ull;
    set32(c.r[12], ld32((c.r[28].w[0] - 29544u)));
    set32(c.r[10], c.r[3].w[0] << 1);
    set32(c.r[7], c.r[3].w[0] << 2);
    set32(c.r[11], 0u - 3u);
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[8], 0u - 5u);
    set32(c.r[9], c.r[3].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[5], 0u - 9u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[3], c.r[13].w[0] << 5);
    set32(c.r[12], c.r[12].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[12].w[0] + 26u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[11].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[10].d[0];
    st16((c.r[12].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[10].d[0] = ld16((c.r[18].w[0] + 2u));
    set32(c.r[3], ld32((c.r[28].w[0] - 29544u)));
    set32(c.r[10], c.r[10].w[0] << 5);
    set32(c.r[10], c.r[3].w[0] + c.r[10].w[0]);
    c.r[3].d[0] = ld16((c.r[10].w[0] + 26u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[11].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    st16((c.r[10].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[9].d[0] = ld16((c.r[18].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 29544u)));
    set32(c.r[9], c.r[9].w[0] << 5);
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    c.r[3].d[0] = ld16((c.r[9].w[0] + 26u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    st16((c.r[9].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[7].d[0] = ld16((c.r[18].w[0] + 2u));
    set32(c.r[3], ld32((c.r[28].w[0] - 29544u)));
    set32(c.r[7], c.r[7].w[0] << 5);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].d[0] = ld16((c.r[7].w[0] + 26u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[7].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 29544u)));
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 26u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st16((c.r[4].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[18].w[0] + 2u));
    set32(c.r[3], ld32((c.r[28].w[0] - 29544u)));
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 26u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st16((c.r[4].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 58;
L_002E1CE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 29556u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1AC4u | kUnwind; return; } goto L_002E1AC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 29540u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1A74u | kUnwind; return; } goto L_002E1A74; } }
L_002E1CFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D08u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002E(c, 299u, depth + 1u); else { c.pc = 0x002BBF40u; return; } if (c.pc != 0x002E1D08u) [[unlikely]] return; }
L_002E1D08:
    set32(c.r[3], ld32((c.r[28].w[0] - 29544u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 28u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1AA0u | kUnwind; return; } goto L_002E1AA0; } }
L_002E1D18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E1D40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1D68u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002E(c, 298u, depth + 1u); else { c.pc = 0x002BBF20u; return; } if (c.pc != 0x002E1D68u) [[unlikely]] return; }
L_002E1D68:
    set32(c.r[3], ld32((c.r[28].w[0] - 29540u)));
    c.r[12].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_002E1E58; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[4], 0u - 9u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
L_002E1D94:
    set32(c.r[6], ld32((c.r[28].w[0] - 29544u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[8], c.r[12].w[0] + c.r[8].w[0]);
    c.budget -= 6;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] - 1u);  if (t) { goto L_002E1DE8; } }
    c.r[1].d[0] = c.r[17].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E1DE8; } }
    set32(c.r[13], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[15], c.r[17].w[0] - c.r[12].w[0]);
    set32(c.r[14], c.r[15].w[0] << 1);
    c.r[11].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[13].w[0]);
    c.r[13].d[0] = ld16((c.r[6].w[0] + 26u));
    c.r[13].d[0] = c.r[13].d[0] & c.r[4].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[5].d[0];
    st16((c.r[6].w[0] + 26u), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.budget -= 12;
L_002E1DE8:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_002E1E30; } }
    c.r[1].d[0] = c.r[16].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E1E30; } }
    set32(c.r[14], c.r[16].w[0] - c.r[12].w[0]);
    c.r[10].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[12], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[13], c.r[14].w[0] << 1);
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    set32(c.r[13], c.r[13].w[0] << 2);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[12].w[0]);
    c.r[12].d[0] = ld16((c.r[6].w[0] + 26u));
    c.r[12].d[0] = c.r[12].d[0] & c.r[4].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[5].d[0];
    st16((c.r[6].w[0] + 26u), static_cast<std::uint16_t>(c.r[12].w[0]));
    c.budget -= 13;
L_002E1E30:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_002E1E40; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_002E1E58; } }
L_002E1E40:
    set32(c.r[6], ld32((c.r[28].w[0] - 29540u)));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[12].d[0] = c.r[8].d[0] + 0ull;
    c.r[6].d[0] = c.r[9].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1D94u | kUnwind; return; } goto L_002E1D94; } }
L_002E1E58:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1E64u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 303u, depth + 1u); else { c.pc = 0x003FF200u; return; } if (c.pc != 0x002E1E64u) [[unlikely]] return; }
L_002E1E64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E1E80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29552u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E212C; } }
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[17], c.r[3].w[0] + 4u);
    set32(c.r[4], c.r[28].w[0] - 29560u);
    set32(c.r[6], c.r[6].w[0] - 12688u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E1EBCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 380u, depth + 1u); else { c.pc = 0x002E2810u; return; } if (c.pc != 0x002E1EBCu) [[unlikely]] return; }
L_002E1EBC:
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002E20C8; } }
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] - 8u);  if (t) { goto L_002E2070; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E1ED8:
    set32(c.r[6], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[7], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[6].w[0] + 8u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[6].w[0] + 10u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0] + 12u), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[6].w[0] + 16u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[6].w[0] + 18u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0] + 20u), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[6].w[0] + 24u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[6].w[0] + 26u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0] + 28u), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[6].w[0] + 32u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[6].w[0] + 34u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0] + 36u), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[6].w[0] + 40u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[6].w[0] + 42u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0] + 44u), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[6].w[0] + 48u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[6].w[0] + 50u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0] + 52u), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[6].w[0] + 56u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st16((c.r[6].w[0] + 58u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 96u);
    st32((c.r[6].w[0] + 60u), c.r[7].w[0]);
    c.budget -= 101;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E1ED8u | kUnwind; return; } goto L_002E1ED8; } }
    c.budget -= 1;
L_002E2070:
    c.r[1].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E20C8; } }
    set32(c.r[6], c.r[4].w[0] << 3);
    c.budget -= 1;
L_002E2080:
    set32(c.r[3], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 29560u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[17], c.r[17].w[0] + 12u);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2080u | kUnwind; return; } goto L_002E2080; } }
    c.budget -= 1;
L_002E20C8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { goto L_002E2118; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xAAAA0000u);
    c.r[2].d[0] = c.r[2].d[0] | 43691ull;
    mmi::multu(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[16], c.r[2].w[0] >> 1);
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002E2118; } }
L_002E20F4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2108u); set32(c.r[17], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_0038(c, 324u, depth + 1u); else { c.pc = 0x002E1D40u; return; } if (c.pc != 0x002E2108u) [[unlikely]] return; }
L_002E2108:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E20F4u | kUnwind; return; } goto L_002E20F4; } }
L_002E2118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2120u);  if (depth < kMaxDepth) unit_0038(c, 310u, depth + 1u); else { c.pc = 0x002E1A40u; return; } if (c.pc != 0x002E2120u) [[unlikely]] return; }
L_002E2120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2128u); set32(c.r[4], ld32((c.r[28].w[0] - 29552u)));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002E2128u) [[unlikely]] return; }
L_002E2128:
    st32((c.r[28].w[0] - 29552u), 0u);
    c.budget -= 1;
L_002E212C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E2150:
    set32(c.r[29], c.r[29].w[0] - 416u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 21424u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E217Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002E217Cu) [[unlikely]] return; }
L_002E217C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E248C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[4], c.r[4].w[0] - 22000u);
    c.budget -= 3;
L_002E2190:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2190u | kUnwind; return; } goto L_002E2190; } }
    c.budget -= 1;
L_002E21B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E21C0u); set32(c.r[5], c.r[5].w[0] - 12673u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002E21C0u) [[unlikely]] return; }
L_002E21C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[29].w[0] + 404u);
    set32(c.r[2], c.r[2].w[0] - 28400u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E21E4u); st8((c.r[29].w[0] + 136u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x002E21E4u) [[unlikely]] return; }
L_002E21E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E21ECu); set32(c.r[4], c.r[29].w[0] + 404u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x002E21ECu) [[unlikely]] return; }
L_002E21EC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2204u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E2204u) [[unlikely]] return; }
L_002E2204:
    set32(c.r[4], c.r[29].w[0] + 404u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2210u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x002E2210u) [[unlikely]] return; }
L_002E2210:
    set32(c.r[17], c.r[29].w[0] + 132u);
    set32(c.r[16], c.r[29].w[0] + 120u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E227C; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 412u);
    set32(c.r[18], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2244u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002E2244u) [[unlikely]] return; }
L_002E2244:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_002E2294; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2274u); set32(c.r[5], c.r[2].w[0] + 412u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E2274u) [[unlikely]] return; }
L_002E2274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0])));  if (t) { goto L_002E2298; } }
L_002E227C:
    set32(c.r[4], c.r[29].w[0] + 412u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2288u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002E2288u) [[unlikely]] return; }
L_002E2288:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002E2294:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_002E2298:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E22F8; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 408u);
    set32(c.r[18], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E22C0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002E22C0u) [[unlikely]] return; }
L_002E22C0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_002E2310; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E22F0u); set32(c.r[5], c.r[2].w[0] + 408u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E22F0u) [[unlikely]] return; }
L_002E22F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 412u)));  if (t) { goto L_002E2314; } }
L_002E22F8:
    set32(c.r[4], c.r[29].w[0] + 408u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2304u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002E2304u) [[unlikely]] return; }
L_002E2304:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002E2310:
    set32(c.r[18], ld32((c.r[29].w[0] + 412u)));
    c.budget -= 1;
L_002E2314:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[28].w[0] - 29552u), 0u);  if (t) { goto L_002E24C4; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002E24C4; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2334u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x002E2334u) [[unlikely]] return; }
L_002E2334:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_002E24E0; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E24E0; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_002E2364:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E23BC; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E238Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002E238Cu) [[unlikely]] return; }
L_002E238C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[16].d[0]; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002E23D4; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[20].w[0] + c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E23B4u); set32(c.r[6], c.r[18].w[0] - c.r[16].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E23B4u) [[unlikely]] return; }
L_002E23B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 408u)));  if (t) { goto L_002E23D8; } }
L_002E23BC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E23C8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002E23C8u) [[unlikely]] return; }
L_002E23C8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002E23D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 408u)));
    c.budget -= 1;
L_002E23D8:
    set32(c.r[5], c.r[18].w[0] - c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002E24FC; } }
    set32(c.r[17], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 1;
L_002E23E8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[4], c.r[28].w[0] - 29544u);
    set32(c.r[6], c.r[6].w[0] - 12655u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[28].w[0] - 29536u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2408u); set32(c.r[20], c.r[20].w[0] + 20u);  if (depth < kMaxDepth) unit_0038(c, 398u, depth + 1u); else { c.pc = 0x002E2A60u; return; } if (c.pc != 0x002E2408u) [[unlikely]] return; }
L_002E2408:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[28].w[0] - 29592u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E241Cu); set32(c.r[6], c.r[6].w[0] - 12645u);  if (depth < kMaxDepth) unit_0038(c, 387u, depth + 1u); else { c.pc = 0x002E2900u; return; } if (c.pc != 0x002E241Cu) [[unlikely]] return; }
L_002E241C:
    c.r[1].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002E2524; } }
L_002E2428:
    set32(c.r[3], ld32((c.r[28].w[0] - 29544u)));
    set32(c.r[5], c.r[6].w[0] << 5);
    c.f[3] = ld32((c.r[20].w[0] + 4u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.f[2] = ld32((c.r[20].w[0] + 8u));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.f[1] = ld32((c.r[20].w[0] + 12u));
    c.f[0] = ld32((c.r[20].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[3]);
    st32((c.r[3].w[0] + 8u), c.f[2]);
    st32((c.r[3].w[0] + 12u), c.f[1]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29544u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st16((c.r[3].w[0] + 24u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 29544u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[20], c.r[20].w[0] + 24u);
    c.budget -= 23;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 28u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2428u | kUnwind; return; } goto L_002E2428; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_002E2528; } }
L_002E248C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2498u); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x002E2498u) [[unlikely]] return; }
L_002E2498:
    set32(c.r[4], c.r[2].w[0] + 36u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 2;
L_002E24A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E24A0u | kUnwind; return; } goto L_002E24A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E21B0u | kUnwind; return; } goto L_002E21B0; } }
L_002E24C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E24CCu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x002E24CCu) [[unlikely]] return; }
L_002E24CC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E24D8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002E24D8u) [[unlikely]] return; }
L_002E24D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_002E27C0; } }
L_002E24E0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E24F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E24F4u) [[unlikely]] return; }
L_002E24F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2364u | kUnwind; return; } goto L_002E2364; } }
L_002E24FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2504u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x002E2504u) [[unlikely]] return; }
L_002E2504:
    st32((c.r[28].w[0] - 29552u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 408u)));
    set32(c.r[6], c.r[18].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E251Cu); set32(c.r[5], c.r[20].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x002E251Cu) [[unlikely]] return; }
L_002E251C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[20].w[0] + 12u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E23E8u | kUnwind; return; } goto L_002E23E8; } }
L_002E2524:
    c.r[1].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002E2528:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002E2790; } }
L_002E2530:
    set32(c.r[2], ld32((c.r[28].w[0] - 29544u)));
    set32(c.r[18], c.r[19].w[0] << 5);
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[5], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[2].w[0] + 16u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2554u); set32(c.r[20], c.r[20].w[0] + 4u);  if (depth < kMaxDepth) unit_0038(c, 384u, depth + 1u); else { c.pc = 0x002E2890u; return; } if (c.pc != 0x002E2554u) [[unlikely]] return; }
L_002E2554:
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002E2750; } }
    c.r[1].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] - 8u);  if (t) { goto L_002E26F8; } }
    c.r[1].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002E2590; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E2590; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002E2590:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E26F8; } }
L_002E2598:
    set32(c.r[6], ld32((c.r[28].w[0] - 29544u)));
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[8], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.r[5].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[6].w[0] + c.r[18].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0]), c.r[8].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 29544u)));
    c.f[0] = ld32((c.r[20].w[0] + 16u));
    set32(c.r[8], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[7], c.r[6].w[0] + c.r[18].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 12u), c.r[8].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 16u), c.f[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 29544u)));
    c.f[0] = ld32((c.r[20].w[0] + 28u));
    set32(c.r[8], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[7], c.r[6].w[0] + c.r[18].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 24u), c.r[8].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 28u), c.f[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 29544u)));
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    set32(c.r[8], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[7], c.r[6].w[0] + c.r[18].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 36u), c.r[8].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 40u), c.f[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 29544u)));
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    set32(c.r[8], ld32((c.r[20].w[0] + 48u)));
    set32(c.r[7], c.r[6].w[0] + c.r[18].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 48u), c.r[8].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 52u), c.f[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 29544u)));
    c.f[0] = ld32((c.r[20].w[0] + 64u));
    set32(c.r[8], ld32((c.r[20].w[0] + 60u)));
    set32(c.r[7], c.r[6].w[0] + c.r[18].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 60u), c.r[8].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 64u), c.f[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 29544u)));
    c.f[0] = ld32((c.r[20].w[0] + 76u));
    set32(c.r[8], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[7], c.r[6].w[0] + c.r[18].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 72u), c.r[8].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 76u), c.f[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 29544u)));
    c.f[0] = ld32((c.r[20].w[0] + 88u));
    set32(c.r[8], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[7], c.r[6].w[0] + c.r[18].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[20], c.r[20].w[0] + 96u);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 84u), c.r[8].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 87;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[2].w[0] + 88u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2598u | kUnwind; return; } goto L_002E2598; } }
    c.budget -= 1;
L_002E26F8:
    c.r[1].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E2750; } }
    c.budget -= 1;
L_002E2708:
    set32(c.r[3], ld32((c.r[28].w[0] - 29544u)));
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[7], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[20], c.r[20].w[0] + 12u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2708u | kUnwind; return; } goto L_002E2708; } }
    c.budget -= 1;
L_002E2750:
    set32(c.r[3], ld32((c.r[28].w[0] - 29544u)));
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[5], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 4u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2530u | kUnwind; return; } goto L_002E2530; } }
    c.budget -= 1;
L_002E2790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2798u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x002E2798u) [[unlikely]] return; }
L_002E2798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E27A0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x002E27A0u) [[unlikely]] return; }
L_002E27A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E27A8u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 101u, depth + 1u); else { c.pc = 0x00345670u; return; } if (c.pc != 0x002E27A8u) [[unlikely]] return; }
L_002E27A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E27B0u);  if (depth < kMaxDepth) unit_003F(c, 377u, depth + 1u); else { c.pc = 0x002FF600u; return; } if (c.pc != 0x002E27B0u) [[unlikely]] return; }
L_002E27B0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E27BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002E27BCu) [[unlikely]] return; }
L_002E27BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002E27C0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_002E27E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E27F0u); set32(c.r[4], c.r[28].w[0] - 29544u);  if (depth < kMaxDepth) unit_0038(c, 392u, depth + 1u); else { c.pc = 0x002E29B0u; return; } if (c.pc != 0x002E27F0u) [[unlikely]] return; }
L_002E27F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E27F8u); set32(c.r[4], c.r[28].w[0] - 29560u);  if (depth < kMaxDepth) unit_0038(c, 382u, depth + 1u); else { c.pc = 0x002E2850u; return; } if (c.pc != 0x002E27F8u) [[unlikely]] return; }
L_002E27F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2800u); set32(c.r[4], c.r[28].w[0] - 29592u);  if (depth < kMaxDepth) unit_0038(c, 389u, depth + 1u); else { c.pc = 0x002E2950u; return; } if (c.pc != 0x002E2800u) [[unlikely]] return; }
L_002E2800:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002E2810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2830u); set32(c.r[4], c.r[16].w[0] << 3);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002E2830u) [[unlikely]] return; }
L_002E2830:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E2850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E2874; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2874u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002E2874u) [[unlikely]] return; }
L_002E2874:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E2890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E28BCu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002E28BCu) [[unlikely]] return; }
L_002E28BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 10640u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E28D8u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x002E28D8u) [[unlikely]] return; }
L_002E28D8:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E2900:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2930u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002E2930u) [[unlikely]] return; }
L_002E2930:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E2950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E2974; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2974u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002E2974u) [[unlikely]] return; }
L_002E2974:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E2990:
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_002E29B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E29D8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E29D8u); set32(c.r[5], c.r[5].w[0] + 10736u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x002E29D8u) [[unlikely]] return; }
L_002E29D8:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E29F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E2A30; } }
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E2A38; } }
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002E2A1C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002E2A30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2A30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002E2A30u) [[unlikely]] return; }
L_002E2A30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002E2A48; } }
L_002E2A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2A40u);  if (depth < kMaxDepth) unit_0038(c, 402u, depth + 1u); else { c.pc = 0x002E2B40u; return; } if (c.pc != 0x002E2A40u) [[unlikely]] return; }
L_002E2A40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2A1Cu | kUnwind; return; } goto L_002E2A1C; } }
L_002E2A48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E2A60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 5);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2A84u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002E2A84u) [[unlikely]] return; }
L_002E2A84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 10944u);
    set32(c.r[6], c.r[6].w[0] + 10736u);
    set32(c.r[7], 0u + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2AA4u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x002E2AA4u) [[unlikely]] return; }
L_002E2AA4:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E2AC0:
    st32((c.r[4].w[0] + 16u), 0u);
    c.r[2].d[0] = 0ull & 1ull;
    st32((c.r[4].w[0] + 20u), 0u);
    set32(c.r[13], 0u - 2u);
    st16((c.r[4].w[0] + 24u), static_cast<std::uint16_t>(c.r[13].w[0]));
    set32(c.r[6], c.r[2].w[0] << 3);
    c.r[11].d[0] = ld16((c.r[4].w[0] + 26u));
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[9], 0u - 3u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[7], 0u - 5u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[5], 0u - 9u);
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[11].d[0] = c.r[11].d[0] & c.r[13].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st16((c.r[4].w[0] + 26u), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld16((c.r[4].w[0] + 26u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st16((c.r[4].w[0] + 26u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[4].w[0] + 26u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[4].w[0] + 26u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[4].w[0] + 26u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[4].w[0] + 26u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[3].w[0]);  c.pc = t; return; }
L_002E2B40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E2B68; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E2B68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2B68u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002E2B68u) [[unlikely]] return; }
L_002E2B68:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E2B80:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32276u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E2BB0; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32279u));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[28].w[0] - 32279u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32279u));
    c.r[1].d[0] = c.r[3].sd[0] < 161ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002E2BD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 32276u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002E2BD4; } }
L_002E2BB0:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32279u));
    set32(c.r[3], c.r[3].w[0] - 2u);
    st8((c.r[28].w[0] - 32279u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32279u));
    c.r[1].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E2BD4; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 32276u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002E2BD4:
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32280u));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32279u));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32278u));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32277u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002E2C00:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[3].d[0] = c.r[3].d[0] & 191ull;
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 191ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002E2C20:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002E2C50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2C88u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x002E2C88u) [[unlikely]] return; }
L_002E2C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2C90u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002E2C90u) [[unlikely]] return; }
L_002E2C90:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2CA0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002E2CA0u) [[unlikely]] return; }
L_002E2CA0:
    st32((c.r[20].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002E2CD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E2D1C; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002E2D04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2D00u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002E2D00u) [[unlikely]] return; }
L_002E2D00:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_002E2D04:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002E2D1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2D1Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002E2D1Cu) [[unlikely]] return; }
L_002E2D1C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E2D40:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_002E2D50:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[30]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[30]);  c.pc = t; return; }
L_002E2D80:
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E2DA8; } }
L_002E2DA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E2DB4; } }
L_002E2DA8:
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 44u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2DA0u | kUnwind; return; } goto L_002E2DA0; } }
L_002E2DB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E2DC0:
    st32((c.r[4].w[0] + 44u), 0u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 55u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 55u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_002E2DF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 52u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002E2E00:
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  c.pc = t; return; }
L_002E2E30:
    st32((c.r[4].w[0] + 44u), 0u);
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 55u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002E2E50:
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 53u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E2F10; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 48u), c.r[3].w[0]);  if (t) { goto L_002E2EE8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E2EE8; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 55u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E2F08; } }
L_002E2EA8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 54u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E2EE8; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 52u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002E2EDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 44u), 0u);  if (t) { goto L_002E2EE8; } }
L_002E2EDC:
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 3;
L_002E2EE8:
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_002E2F10; } }
L_002E2F08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E2EA8u | kUnwind; return; } goto L_002E2EA8; } }
L_002E2F10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E2F20:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[30]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    set32(c.r[7], ld32((c.r[5].w[0] + 64u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[5].w[0] + 72u)));
    st32((c.r[4].w[0] + 28u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 52u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.r[3].w[0]);  c.pc = t; return; }
L_002E2F90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002E2FD4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002E2FBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2FBCu);  if (depth < kMaxDepth) unit_0018(c, 157u, depth + 1u); else { c.pc = 0x00261CA0u; return; } if (c.pc != 0x002E2FBCu) [[unlikely]] return; }
L_002E2FBC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002E2FD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E2FD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002E2FD4u) [[unlikely]] return; }
L_002E2FD4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002E2FF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3018u); st32((c.r[4].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0018(c, 158u, depth + 1u); else { c.pc = 0x00261CB0u; return; } if (c.pc != 0x002E3018u) [[unlikely]] return; }
L_002E3018:
    st32((c.r[16].w[0] + 32u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 36u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 44u), 0u);
    st8((c.r[16].w[0] + 53u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 54u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 55u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E3060:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E3080; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42480000u);
    set32(c.r[3], 0u + 50u);
    st32((c.r[28].w[0] - 32272u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 32268u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002E3090; } }
L_002E3080:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x42700000u);
    set32(c.r[3], 0u + 60u);
    st32((c.r[28].w[0] - 32272u), c.r[4].w[0]);
    st8((c.r[28].w[0] - 32268u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002E3090:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[3].w[0];
    c.f[4] = ld32((c.r[28].w[0] - 32272u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[3].w[0];
    c.f[3] = fp::ee::div(c.fcr31, c.f[3], c.f[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::ee::div(c.fcr31, c.f[2], c.f[4]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[4]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[4]);
    st32((c.r[28].w[0] - 29656u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    st32((c.r[28].w[0] - 29664u), c.f[2]);
    st32((c.r[28].w[0] - 29660u), c.f[1]);
    st32((c.r[28].w[0] - 29672u), c.f[3]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 29668u), c.f[0]);  c.pc = t; return; }
L_002E30E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E3110; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002E3110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3110u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002E3110u) [[unlikely]] return; }
L_002E3110:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E3130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_002E3140:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.f[9] = ld32((c.r[6].w[0] + 4u));
    c.f[8] = ld32((c.r[4].w[0] + 4u));
    c.f[7] = ld32((c.r[6].w[0]));
    c.f[5] = ld32((c.r[4].w[0]));
    c.f[6] = ld32((c.r[6].w[0] + 8u));
    c.f[4] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    c.facc = fp::ee::mul(c.fcr31, c.f[8], c.f[9]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[7]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[6]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[3]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[10] = ld32((c.r[29].w[0] + 12u));  if (t) { goto L_002E31F0; } }
    c.f[0] = fp::ee::mul(c.fcr31, c.f[8], c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x37270000u);
    c.r[3].d[0] = c.r[3].d[0] | 50604ull;
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E3208; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    c.f[2] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[5], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[7], c.f[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[9], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[6], c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    st32((c.r[5].w[0] + 12u), c.f[10]);
    c.budget -= 13;
L_002E31E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[29], c.r[29].w[0] + 16u);  if (t) { goto L_002E3220; } }
L_002E31F0:
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[5].w[0]), c.f[7]);
    st32((c.r[5].w[0] + 4u), c.f[9]);
    st32((c.r[5].w[0] + 8u), c.f[6]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 12u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E31E8u | kUnwind; return; } goto L_002E31E8; } }
L_002E3208:
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[5].w[0]), c.f[7]);
    st32((c.r[5].w[0] + 4u), c.f[9]);
    st32((c.r[5].w[0] + 8u), c.f[6]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 12u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E31E8u | kUnwind; return; } goto L_002E31E8; } }
L_002E3220:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E3230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E3298; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[3].w[0] - 15344u);
    set32(c.r[6], 0u - 33u);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[7], c.r[2].w[0] << 5);
    set32(c.r[9], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[8].d[0] = ld8((c.r[9].w[0] + 526u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[9].w[0] + 526u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[6].d[0] = ld8((c.r[7].w[0] + 1496u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3298u); st8((c.r[7].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x002E3298u) [[unlikely]] return; }
L_002E3298:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E32B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u - 5u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u - 3u);
    c.r[8].d[0] = ld16((c.r[4].w[0]));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E337C; } }
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002E3304:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 360u), 0u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { goto L_002E338C; } }
L_002E337C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3384u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002E3384u) [[unlikely]] return; }
L_002E3384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3304u | kUnwind; return; } goto L_002E3304; } }
L_002E338C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E33A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002E33CC; } }
    c.r[3].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002E33CC; } }
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 1;
L_002E33CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = ld8((c.r[3].w[0] + 526u));
    set32(c.r[6], c.r[3].w[0] + 526u);
    c.r[3].d[0] = c.r[5].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E340C; } }
    c.r[3].d[0] = c.r[5].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E340C; } }
    set32(c.r[3], 0u - 33u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_002E340C:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E3420; } }
L_002E3418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002E3588; } }
L_002E3420:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.f[3] = ld32((c.r[3].w[0] + 32u));
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[2] = ld32((c.r[2].w[0] + 32u));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3440u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x002E3440u) [[unlikely]] return; }
L_002E3440:
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[3].d[0] = c.r[3].d[0] | 63875ull;
    c.f[1] = c.r[3].w[0];
    c.f[6] = ld32((c.r[6].w[0] + 104u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[0], c.f[6]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    set32(c.r[5], c.f[0]);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[5] = c.r[3].w[0];
    c.f[5] = fp::ee::add(c.fcr31, c.f[0], c.f[5]);
    c.f[5] = fp::cvt_w_s(c.f[5]);
    c.f[5] = fp::cvt_s_w(c.f[5]);
    set32(c.r[4], ld32((c.r[6].w[0] + 752u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[5].d[0] = c.r[3].d[0] | 4059ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[2] = 0u;
    c.f[3] = c.r[5].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    c.f[2] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[5]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = c.f[2] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 37;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E3580; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E34E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[6] = fp::ee::add(c.fcr31, c.f[6], c.f[1]);  if (t) { goto L_002E34FC; } }
L_002E34E8:
    c.f[0] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002E34FC; } }
    c.f[6] = fp::ee::sub(c.fcr31, c.f[6], c.f[1]);
    c.budget -= 1;
L_002E34FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[3].d[0] = c.r[3].d[0] | 63875ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[6]);
    set32(c.r[5], c.f[0]);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[6].w[0] + 104u));
    c.f[2] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[6]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 29;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E3578; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[6].w[0] + 404u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002E3578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 104u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3418u | kUnwind; return; } goto L_002E3418; } }
L_002E3580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[6] = fp::ee::add(c.fcr31, c.f[6], c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E34FCu | kUnwind; return; } goto L_002E34FC; } }
L_002E3588:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E35A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[15], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.r[24].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[2], 0u - 5u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[13], 0u - 9u);
    set32(c.r[14], c.r[3].w[0] << 3);
    set32(c.r[11], 0u - 17u);
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[9], 0u - 33u);
    set32(c.r[10], c.r[3].w[0] << 5);
    set32(c.r[8], c.r[3].w[0] << 11);
    set32(c.r[7], 0u - 2049u);
    set32(c.r[6], 0u + 54u);
    c.r[2].d[0] = c.r[24].d[0] & c.r[2].d[0];
    set32(c.r[5], c.r[5].w[0] - 15344u);
    c.r[15].d[0] = c.r[2].d[0] | c.r[15].d[0];
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[15].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < 245ll ? 1ull : 0ull;
    c.r[15].d[0] = ld16((c.r[4].w[0]));
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld16((c.r[4].w[0]));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld16((c.r[4].w[0]));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[4].w[0]));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[19].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 56;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 16u), 0u);  if (t) { goto L_002E369C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002E369C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3694u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 25u, depth + 1u); else { c.pc = 0x00468770u; return; } if (c.pc != 0x002E3694u) [[unlikely]] return; }
L_002E3694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = ld8((c.r[19].w[0] + 736u));  if (t) { goto L_002E36B4; } }
L_002E369C:
    set32(c.r[2], 0u + 256u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E36B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E36B0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_009A(c, 18u, depth + 1u); else { c.pc = 0x004686B0u; return; } if (c.pc != 0x002E36B0u) [[unlikely]] return; }
L_002E36B0:
    c.r[8].d[0] = ld8((c.r[19].w[0] + 736u));
    c.budget -= 1;
L_002E36B4:
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[6], 0u - 33u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    set32(c.r[4], 0u - 3u);
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], 0u - 5u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[19].w[0] + 736u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[20].w[0]));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[20].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[20].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 20;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[20].w[0] + 16u), c.r[18].w[0]);  if (t) { goto L_002E370C; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 6u));
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_002E370C:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 382u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002E37A0; } }
    st16((c.r[19].w[0] + 380u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 1;
L_002E3720:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 360u), 0u);
    st32((c.r[19].w[0] + 364u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = ld32((c.r[19].w[0] + 360u));
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[19].w[0] + 356u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[19].w[0] + 382u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[19].w[0] + 382u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 360u));
    st32((c.r[19].w[0] + 368u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 356u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[19].w[0] + 376u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[19].w[0] + 376u));
    c.f[0] = ld32((c.r[19].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 30;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[19].w[0] + 372u), c.f[0]);  if (t) { goto L_002E37B0; } }
L_002E3798:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002E37CC; } }
L_002E37A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E37A8u); set32(c.r[4], c.r[19].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002E37A8u) [[unlikely]] return; }
L_002E37A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 380u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3720u | kUnwind; return; } goto L_002E3720; } }
L_002E37B0:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 1496u));
    set32(c.r[2], 0u - 3u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3798u | kUnwind; return; } goto L_002E3798; } }
L_002E37CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002E37F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E383C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[3].w[0] - 15312u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], 0u - 33u);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 526u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E383Cu); st8((c.r[7].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x002E383Cu) [[unlikely]] return; }
L_002E383C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E3850:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002E3A90; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E389C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_002E3A90; } }
L_002E389C:
    c.r[7].d[0] = ld16((c.r[18].w[0]));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[5], 0u - 5u);
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[18].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002E3A90; } }
L_002E38D4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E3AAC; } }
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002E38E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 360u), 0u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 30;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 372u), c.f[0]);  if (t) { goto L_002E3A88; } }
L_002E3960:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 344u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 1040u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E3ABC; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E3978:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3984u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x002E3984u) [[unlikely]] return; }
L_002E3984:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[17], c.r[2].w[0] + 257u);
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0] + 344u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E39B0; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002E39B0:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3978u | kUnwind; return; } goto L_002E3978; } }
L_002E39C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E39C8u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x002E39C8u) [[unlikely]] return; }
L_002E39C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[20] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E39E0u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x002E39E0u) [[unlikely]] return; }
L_002E39E0:
    set32(c.r[16], ld32((c.r[18].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[21]);  if (t) { goto L_002E3AC4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002E3A0C:
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.f[0] = c.r[3].w[0];
    st32((c.r[16].w[0] + 360u), 0u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st32((c.r[16].w[0] + 364u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    c.budget -= 31;
L_002E3A88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002E3AD4; } }
L_002E3A90:
    c.r[3].d[0] = ld16((c.r[18].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3960u | kUnwind; return; } goto L_002E3960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E38D4u | kUnwind; return; } goto L_002E38D4; } }
L_002E3AAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3AB4u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002E3AB4u) [[unlikely]] return; }
L_002E3AB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E38E8u | kUnwind; return; } goto L_002E38E8; } }
L_002E3ABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E39C0u | kUnwind; return; } goto L_002E39C0; } }
L_002E3AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3ACCu); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002E3ACCu) [[unlikely]] return; }
L_002E3ACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3A0Cu | kUnwind; return; } goto L_002E3A0C; } }
L_002E3AD4:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002E3AF0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 526u));
    set32(c.r[7], c.r[3].w[0] + 526u);
    c.r[3].d[0] = c.r[6].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E3B30; } }
    c.r[3].d[0] = c.r[6].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E3B30; } }
    set32(c.r[3], 0u - 33u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_002E3B30:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E3B9C; } }
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002E3B6C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.f[0]);  if (t) { goto L_002E3B9C; } }
L_002E3B6C:
    c.r[8].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[6], 0u - 5u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[3], 0u - 3u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 12;
L_002E3B9C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E3BB0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[9].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[8], c.r[9].w[0] << 2);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], 0u - 5u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[21], c.r[9].w[0] << 3);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[9].w[0] << 5);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[24], c.r[9].w[0] << 11);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[20], 0u - 9u);
    c.r[10].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[25], 0u - 17u);
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[17], 0u - 33u);
    set32(c.r[15], 0u - 2049u);
    set32(c.r[14], 0u + 13u);
    set32(c.r[12], c.r[12].w[0] - 15312u);
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[9].d[0] = c.r[10].d[0] & c.r[3].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[8].d[0];
    set32(c.r[10], 0u - 3u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[22].d[0] = ld16((c.r[4].w[0]));
    c.r[9].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[20].d[0] = c.r[22].d[0] & c.r[20].d[0];
    c.r[20].d[0] = c.r[20].d[0] | c.r[21].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.r[20].d[0] = ld16((c.r[4].w[0]));
    c.r[25].d[0] = c.r[20].d[0] & c.r[25].d[0];
    c.r[25].d[0] = c.r[25].d[0] | c.r[19].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[25].w[0]));
    c.r[25].d[0] = ld16((c.r[4].w[0]));
    c.r[25].d[0] = c.r[25].d[0] & c.r[17].d[0];
    c.r[25].d[0] = c.r[25].d[0] | c.r[18].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[25].w[0]));
    c.r[25].d[0] = ld16((c.r[4].w[0]));
    c.r[15].d[0] = c.r[25].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[24].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[15].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[14].w[0]));
    st32((c.r[4].w[0] + 12u), c.r[12].w[0]);
    c.r[12].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[12].d[0] = c.r[12].d[0] & c.r[17].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st8((c.r[5].w[0] + 736u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[8].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & c.r[10].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[11].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 16u), c.r[9].w[0]);
    c.budget -= 70;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; st32((c.r[4].w[0] + 20u), 0u);  if (t) { goto L_002E3D34; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002E3D04; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_002E3CE4; } }
    c.f[0] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002E3D00; } }
L_002E3CE4:
    set32(c.r[3], c.r[6].w[0] >> 1);
    c.r[2].d[0] = c.r[6].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_002E3D00:
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.budget -= 1;
L_002E3D04:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002E3D18; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_002E3D1C; } }
L_002E3D18:
    st32((c.r[16].w[0] + 24u), c.r[7].w[0]);
    c.budget -= 1;
L_002E3D1C:
    set32(c.r[25], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3D2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E3D2Cu) [[unlikely]] return; }
L_002E3D2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002E3D3C; } }
L_002E3D34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3D04u | kUnwind; return; } goto L_002E3D04; } }
L_002E3D3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002E3D70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002E3DBC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[3].w[0] - 15280u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], 0u - 33u);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 526u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3DBCu); st8((c.r[7].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 159u, depth + 1u); else { c.pc = 0x00289BD0u; return; } if (c.pc != 0x002E3DBCu) [[unlikely]] return; }
L_002E3DBC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002E3DD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[17].d[0] = ld16((c.r[2].w[0] + 380u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3DFCu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x002E3DFCu) [[unlikely]] return; }
L_002E3DFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E3EA0; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_002E3E08:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E3EF0; } }
    st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 1;
L_002E3E1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 360u), 0u);
    st32((c.r[16].w[0] + 364u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0] + 356u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 382u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 382u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 360u));
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 356u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[16].w[0] + 376u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 376u));
    c.f[0] = ld32((c.r[16].w[0] + 368u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 372u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[3].w[0] + 360u), 0u);
    c.budget -= 33;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 356u), 0u);  if (t) { goto L_002E3F00; } }
L_002E3EA0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002E3EA4:
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3EB0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A1(c, 180u, depth + 1u); else { c.pc = 0x00486760u; return; } if (c.pc != 0x002E3EB0u) [[unlikely]] return; }
L_002E3EB0:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[17], c.r[2].w[0] + 119u);
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[5].w[0] + 344u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002E3ED8; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002E3ED8:
    c.r[3].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3EA4u | kUnwind; return; } goto L_002E3EA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3E08u | kUnwind; return; } goto L_002E3E08; } }
L_002E3EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E3EF8u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_003D(c, 14u, depth + 1u); else { c.pc = 0x002F49B0u; return; } if (c.pc != 0x002E3EF8u) [[unlikely]] return; }
L_002E3EF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 380u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3E1Cu | kUnwind; return; } goto L_002E3E1C; } }
L_002E3F00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002E3F20:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 526u));
    set32(c.r[7], c.r[3].w[0] + 526u);
    c.r[3].d[0] = c.r[6].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E3F60; } }
    c.r[3].d[0] = c.r[6].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002E3F60; } }
    set32(c.r[3], 0u - 33u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_002E3F60:
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002E3F8C; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002E3FC0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 3;
L_002E3F84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002E3FC0; } }
L_002E3F8C:
    c.r[8].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[6], 0u - 5u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[3], 0u - 3u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002E3F84u | kUnwind; return; } goto L_002E3F84; } }
L_002E3FC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002E3FD0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].d[0] = 0ull & 1ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[7], c.r[3].w[0] << 2);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[20], c.r[3].w[0] << 3);
    c.budget -= 12;
    [[clang::musttail]] return unit_0039(c, 1u, depth);
}

}

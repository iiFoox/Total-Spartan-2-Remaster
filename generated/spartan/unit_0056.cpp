#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0056[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 14, 0, 0, 15, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19,
    0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0,
    0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 0,
    0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0,
    51, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0,
    0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0,
    65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0,
    83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0,
    0, 0, 91, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 120, 0, 121, 0, 0, 122, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0,
    0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145,
    0, 0, 0, 0, 0, 146, 0, 147, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0,
    0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 166,
    0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196,
    0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0,
    0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0,
    224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 234, 0, 235, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238,
    0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0,
    0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0,
    0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 265,
    0, 266, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 297,
    0, 298, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340,
    0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0,
    360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 366, 0, 367, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0,
    0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 375, 0,
    0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0,
    0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 388, 0, 389, 0, 0,
    390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395,
    0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0,
    404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0,
    0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0,
    417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 420, 0, 421, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0,
    0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 429, 0,
    0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 438,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    444, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0,
    0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0,
    0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0,
    0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0,
    0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0,
    0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0,
    0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0,
    0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0,
    0, 496, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0,
    0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0,
    0, 508, 0, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0,
    0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0,
    0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0,
    0, 526, 0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0,
    0, 532, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0,
};

void unit_0056(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00358000;
    case 2u: goto L_00358008;
    case 3u: goto L_00358054;
    case 4u: goto L_00358060;
    case 5u: goto L_00358088;
    case 6u: goto L_00358094;
    case 7u: goto L_003580BC;
    case 8u: goto L_003580C8;
    case 9u: goto L_003580E4;
    case 10u: goto L_003580F0;
    case 11u: goto L_00358110;
    case 12u: goto L_00358118;
    case 13u: goto L_00358124;
    case 14u: goto L_0035812C;
    case 15u: goto L_00358138;
    case 16u: goto L_00358148;
    case 17u: goto L_00358150;
    case 18u: goto L_00358164;
    case 19u: goto L_0035817C;
    case 20u: goto L_00358190;
    case 21u: goto L_0035819C;
    case 22u: goto L_003581B8;
    case 23u: goto L_003581C4;
    case 24u: goto L_003581E8;
    case 25u: goto L_003581F4;
    case 26u: goto L_00358218;
    case 27u: goto L_00358224;
    case 28u: goto L_0035823C;
    case 29u: goto L_00358248;
    case 30u: goto L_00358260;
    case 31u: goto L_0035826C;
    case 32u: goto L_00358284;
    case 33u: goto L_00358290;
    case 34u: goto L_0035829C;
    case 35u: goto L_003582A8;
    case 36u: goto L_003582B4;
    case 37u: goto L_003582C0;
    case 38u: goto L_003582CC;
    case 39u: goto L_003582D8;
    case 40u: goto L_003582E4;
    case 41u: goto L_003582F0;
    case 42u: goto L_00358308;
    case 43u: goto L_00358314;
    case 44u: goto L_0035832C;
    case 45u: goto L_00358338;
    case 46u: goto L_00358344;
    case 47u: goto L_00358350;
    case 48u: goto L_0035835C;
    case 49u: goto L_00358368;
    case 50u: goto L_00358374;
    case 51u: goto L_00358380;
    case 52u: goto L_0035838C;
    case 53u: goto L_00358398;
    case 54u: goto L_003583A4;
    case 55u: goto L_003583B0;
    case 56u: goto L_003583E0;
    case 57u: goto L_003583EC;
    case 58u: goto L_003583F8;
    case 59u: goto L_00358404;
    case 60u: goto L_00358410;
    case 61u: goto L_0035841C;
    case 62u: goto L_00358450;
    case 63u: goto L_00358460;
    case 64u: goto L_00358470;
    case 65u: goto L_00358480;
    case 66u: goto L_00358490;
    case 67u: goto L_003584A0;
    case 68u: goto L_003584B0;
    case 69u: goto L_003584C0;
    case 70u: goto L_003584D0;
    case 71u: goto L_003584E0;
    case 72u: goto L_00358584;
    case 73u: goto L_003586A0;
    case 74u: goto L_003586E4;
    case 75u: goto L_00358710;
    case 76u: goto L_00358718;
    case 77u: goto L_00358724;
    case 78u: goto L_00358734;
    case 79u: goto L_0035873C;
    case 80u: goto L_0035874C;
    case 81u: goto L_00358760;
    case 82u: goto L_00358774;
    case 83u: goto L_00358780;
    case 84u: goto L_0035878C;
    case 85u: goto L_00358798;
    case 86u: goto L_003587A4;
    case 87u: goto L_003587B0;
    case 88u: goto L_003587C4;
    case 89u: goto L_003587D8;
    case 90u: goto L_003587E8;
    case 91u: goto L_00358808;
    case 92u: goto L_0035880C;
    case 93u: goto L_00358830;
    case 94u: goto L_00358848;
    case 95u: goto L_00358860;
    case 96u: goto L_00358880;
    case 97u: goto L_00358890;
    case 98u: goto L_003588A4;
    case 99u: goto L_003588C0;
    case 100u: goto L_00358900;
    case 101u: goto L_00358918;
    case 102u: goto L_003589A0;
    case 103u: goto L_003589D4;
    case 104u: goto L_003589EC;
    case 105u: goto L_00358A00;
    case 106u: goto L_00358A24;
    case 107u: goto L_00358A2C;
    case 108u: goto L_00358A50;
    case 109u: goto L_00358A8C;
    case 110u: goto L_00358AB0;
    case 111u: goto L_00358AD0;
    case 112u: goto L_00358B0C;
    case 113u: goto L_00358B24;
    case 114u: goto L_00358B3C;
    case 115u: goto L_00358B60;
    case 116u: goto L_00358B68;
    case 117u: goto L_00358B90;
    case 118u: goto L_00358BBC;
    case 119u: goto L_00358BD4;
    case 120u: goto L_00358BDC;
    case 121u: goto L_00358BE4;
    case 122u: goto L_00358BF0;
    case 123u: goto L_00358C00;
    case 124u: goto L_00358C1C;
    case 125u: goto L_00358C30;
    case 126u: goto L_00358C40;
    case 127u: goto L_00358C6C;
    case 128u: goto L_00358C78;
    case 129u: goto L_00358C88;
    case 130u: goto L_00358CA4;
    case 131u: goto L_00358CB8;
    case 132u: goto L_00358CC8;
    case 133u: goto L_00358D10;
    case 134u: goto L_00358D20;
    case 135u: goto L_00358D30;
    case 136u: goto L_00358D4C;
    case 137u: goto L_00358D58;
    case 138u: goto L_00358D70;
    case 139u: goto L_00358DC0;
    case 140u: goto L_00358DE8;
    case 141u: goto L_00358E00;
    case 142u: goto L_00358E20;
    case 143u: goto L_00358E34;
    case 144u: goto L_00358E50;
    case 145u: goto L_00358E7C;
    case 146u: goto L_00358E94;
    case 147u: goto L_00358E9C;
    case 148u: goto L_00358EA4;
    case 149u: goto L_00358EB0;
    case 150u: goto L_00358EC0;
    case 151u: goto L_00358EDC;
    case 152u: goto L_00358EF0;
    case 153u: goto L_00358F00;
    case 154u: goto L_00358F2C;
    case 155u: goto L_00358F38;
    case 156u: goto L_00358F48;
    case 157u: goto L_00358F64;
    case 158u: goto L_00358F78;
    case 159u: goto L_00358F88;
    case 160u: goto L_00358FD0;
    case 161u: goto L_00358FE0;
    case 162u: goto L_00359010;
    case 163u: goto L_00359030;
    case 164u: goto L_0035905C;
    case 165u: goto L_00359074;
    case 166u: goto L_0035907C;
    case 167u: goto L_00359084;
    case 168u: goto L_00359090;
    case 169u: goto L_003590A0;
    case 170u: goto L_003590BC;
    case 171u: goto L_003590D0;
    case 172u: goto L_003590E0;
    case 173u: goto L_0035910C;
    case 174u: goto L_00359118;
    case 175u: goto L_00359128;
    case 176u: goto L_00359144;
    case 177u: goto L_00359158;
    case 178u: goto L_00359168;
    case 179u: goto L_003591B0;
    case 180u: goto L_003591C0;
    case 181u: goto L_003591E0;
    case 182u: goto L_00359208;
    case 183u: goto L_00359220;
    case 184u: goto L_00359240;
    case 185u: goto L_00359254;
    case 186u: goto L_00359270;
    case 187u: goto L_003592A0;
    case 188u: goto L_003592C0;
    case 189u: goto L_003592F0;
    case 190u: goto L_0035931C;
    case 191u: goto L_00359334;
    case 192u: goto L_0035933C;
    case 193u: goto L_00359344;
    case 194u: goto L_00359350;
    case 195u: goto L_00359360;
    case 196u: goto L_0035937C;
    case 197u: goto L_00359390;
    case 198u: goto L_003593A0;
    case 199u: goto L_003593CC;
    case 200u: goto L_003593D8;
    case 201u: goto L_003593E8;
    case 202u: goto L_00359404;
    case 203u: goto L_00359418;
    case 204u: goto L_00359428;
    case 205u: goto L_00359470;
    case 206u: goto L_00359480;
    case 207u: goto L_0035954C;
    case 208u: goto L_003595B0;
    case 209u: goto L_003595DC;
    case 210u: goto L_00359620;
    case 211u: goto L_0035972C;
    case 212u: goto L_00359734;
    case 213u: goto L_0035973C;
    case 214u: goto L_00359744;
    case 215u: goto L_0035974C;
    case 216u: goto L_00359754;
    case 217u: goto L_0035975C;
    case 218u: goto L_00359764;
    case 219u: goto L_0035976C;
    case 220u: goto L_003597F0;
    case 221u: goto L_0035982C;
    case 222u: goto L_00359844;
    case 223u: goto L_0035985C;
    case 224u: goto L_00359880;
    case 225u: goto L_00359894;
    case 226u: goto L_003598B0;
    case 227u: goto L_003598EC;
    case 228u: goto L_00359910;
    case 229u: goto L_00359930;
    case 230u: goto L_00359950;
    case 231u: goto L_00359970;
    case 232u: goto L_0035999C;
    case 233u: goto L_003599B4;
    case 234u: goto L_003599BC;
    case 235u: goto L_003599C4;
    case 236u: goto L_003599D0;
    case 237u: goto L_003599E0;
    case 238u: goto L_003599FC;
    case 239u: goto L_00359A10;
    case 240u: goto L_00359A20;
    case 241u: goto L_00359A4C;
    case 242u: goto L_00359A58;
    case 243u: goto L_00359A68;
    case 244u: goto L_00359A84;
    case 245u: goto L_00359A98;
    case 246u: goto L_00359AA8;
    case 247u: goto L_00359AF0;
    case 248u: goto L_00359B00;
    case 249u: goto L_00359B28;
    case 250u: goto L_00359B40;
    case 251u: goto L_00359B60;
    case 252u: goto L_00359B74;
    case 253u: goto L_00359B90;
    case 254u: goto L_00359BC0;
    case 255u: goto L_00359BE0;
    case 256u: goto L_00359C08;
    case 257u: goto L_00359C20;
    case 258u: goto L_00359C3C;
    case 259u: goto L_00359C48;
    case 260u: goto L_00359C58;
    case 261u: goto L_00359C80;
    case 262u: goto L_00359CB0;
    case 263u: goto L_00359CDC;
    case 264u: goto L_00359CF4;
    case 265u: goto L_00359CFC;
    case 266u: goto L_00359D04;
    case 267u: goto L_00359D10;
    case 268u: goto L_00359D20;
    case 269u: goto L_00359D3C;
    case 270u: goto L_00359D50;
    case 271u: goto L_00359D60;
    case 272u: goto L_00359D8C;
    case 273u: goto L_00359D98;
    case 274u: goto L_00359DA8;
    case 275u: goto L_00359DC4;
    case 276u: goto L_00359DD8;
    case 277u: goto L_00359DE8;
    case 278u: goto L_00359E30;
    case 279u: goto L_00359E40;
    case 280u: goto L_00359E68;
    case 281u: goto L_00359E80;
    case 282u: goto L_00359EA0;
    case 283u: goto L_00359EB4;
    case 284u: goto L_00359ED0;
    case 285u: goto L_00359F00;
    case 286u: goto L_00359F20;
    case 287u: goto L_00359F48;
    case 288u: goto L_00359F60;
    case 289u: goto L_00359F80;
    case 290u: goto L_00359F94;
    case 291u: goto L_00359FB0;
    case 292u: goto L_00359FE0;
    case 293u: goto L_0035A000;
    case 294u: goto L_0035A030;
    case 295u: goto L_0035A05C;
    case 296u: goto L_0035A074;
    case 297u: goto L_0035A07C;
    case 298u: goto L_0035A084;
    case 299u: goto L_0035A090;
    case 300u: goto L_0035A0A0;
    case 301u: goto L_0035A0BC;
    case 302u: goto L_0035A0D0;
    case 303u: goto L_0035A0E0;
    case 304u: goto L_0035A10C;
    case 305u: goto L_0035A118;
    case 306u: goto L_0035A128;
    case 307u: goto L_0035A144;
    case 308u: goto L_0035A158;
    case 309u: goto L_0035A168;
    case 310u: goto L_0035A1B0;
    case 311u: goto L_0035A1C0;
    case 312u: goto L_0035A1E0;
    case 313u: goto L_0035A220;
    case 314u: goto L_0035A238;
    case 315u: goto L_0035A2C0;
    case 316u: goto L_0035A2FC;
    case 317u: goto L_0035A348;
    case 318u: goto L_0035A388;
    case 319u: goto L_0035A3D4;
    case 320u: goto L_0035A410;
    case 321u: goto L_0035A45C;
    case 322u: goto L_0035A498;
    case 323u: goto L_0035A4E4;
    case 324u: goto L_0035A520;
    case 325u: goto L_0035A56C;
    case 326u: goto L_0035A5A8;
    case 327u: goto L_0035A5F4;
    case 328u: goto L_0035A630;
    case 329u: goto L_0035A670;
    case 330u: goto L_0035A6AC;
    case 331u: goto L_0035A6C4;
    case 332u: goto L_0035A6DC;
    case 333u: goto L_0035A818;
    case 334u: goto L_0035A840;
    case 335u: goto L_0035A880;
    case 336u: goto L_0035A8CC;
    case 337u: goto L_0035A908;
    case 338u: goto L_0035A93C;
    case 339u: goto L_0035A954;
    case 340u: goto L_0035A97C;
    case 341u: goto L_0035A990;
    case 342u: goto L_0035A9DC;
    case 343u: goto L_0035AA18;
    case 344u: goto L_0035AA64;
    case 345u: goto L_0035AAA0;
    case 346u: goto L_0035AAEC;
    case 347u: goto L_0035AB28;
    case 348u: goto L_0035AB74;
    case 349u: goto L_0035ABB0;
    case 350u: goto L_0035ABFC;
    case 351u: goto L_0035AC38;
    case 352u: goto L_0035AC78;
    case 353u: goto L_0035ACB4;
    case 354u: goto L_0035ACCC;
    case 355u: goto L_0035ACE4;
    case 356u: goto L_0035AE68;
    case 357u: goto L_0035AE70;
    case 358u: goto L_0035AEA0;
    case 359u: goto L_0035AEE8;
    case 360u: goto L_0035AF00;
    case 361u: goto L_0035AF20;
    case 362u: goto L_0035AF30;
    case 363u: goto L_0035AF80;
    case 364u: goto L_0035AFAC;
    case 365u: goto L_0035AFC4;
    case 366u: goto L_0035AFCC;
    case 367u: goto L_0035AFD4;
    case 368u: goto L_0035AFE0;
    case 369u: goto L_0035AFF0;
    case 370u: goto L_0035B00C;
    case 371u: goto L_0035B020;
    case 372u: goto L_0035B030;
    case 373u: goto L_0035B05C;
    case 374u: goto L_0035B068;
    case 375u: goto L_0035B078;
    case 376u: goto L_0035B094;
    case 377u: goto L_0035B0A8;
    case 378u: goto L_0035B0B8;
    case 379u: goto L_0035B100;
    case 380u: goto L_0035B110;
    case 381u: goto L_0035B138;
    case 382u: goto L_0035B150;
    case 383u: goto L_0035B170;
    case 384u: goto L_0035B184;
    case 385u: goto L_0035B1A0;
    case 386u: goto L_0035B1CC;
    case 387u: goto L_0035B1E4;
    case 388u: goto L_0035B1EC;
    case 389u: goto L_0035B1F4;
    case 390u: goto L_0035B200;
    case 391u: goto L_0035B210;
    case 392u: goto L_0035B22C;
    case 393u: goto L_0035B240;
    case 394u: goto L_0035B250;
    case 395u: goto L_0035B27C;
    case 396u: goto L_0035B288;
    case 397u: goto L_0035B298;
    case 398u: goto L_0035B2B4;
    case 399u: goto L_0035B2C8;
    case 400u: goto L_0035B2D8;
    case 401u: goto L_0035B320;
    case 402u: goto L_0035B330;
    case 403u: goto L_0035B360;
    case 404u: goto L_0035B380;
    case 405u: goto L_0035B3A8;
    case 406u: goto L_0035B3C0;
    case 407u: goto L_0035B3E0;
    case 408u: goto L_0035B3F4;
    case 409u: goto L_0035B410;
    case 410u: goto L_0035B440;
    case 411u: goto L_0035B460;
    case 412u: goto L_0035B470;
    case 413u: goto L_0035B498;
    case 414u: goto L_0035B4B0;
    case 415u: goto L_0035B4D0;
    case 416u: goto L_0035B4E4;
    case 417u: goto L_0035B500;
    case 418u: goto L_0035B52C;
    case 419u: goto L_0035B544;
    case 420u: goto L_0035B54C;
    case 421u: goto L_0035B554;
    case 422u: goto L_0035B560;
    case 423u: goto L_0035B570;
    case 424u: goto L_0035B58C;
    case 425u: goto L_0035B5A0;
    case 426u: goto L_0035B5B0;
    case 427u: goto L_0035B5DC;
    case 428u: goto L_0035B5E8;
    case 429u: goto L_0035B5F8;
    case 430u: goto L_0035B614;
    case 431u: goto L_0035B628;
    case 432u: goto L_0035B638;
    case 433u: goto L_0035B680;
    case 434u: goto L_0035B690;
    case 435u: goto L_0035B6C0;
    case 436u: goto L_0035B6E0;
    case 437u: goto L_0035B6F4;
    case 438u: goto L_0035B6FC;
    case 439u: goto L_0035B750;
    case 440u: goto L_0035B780;
    case 441u: goto L_0035B7A0;
    case 442u: goto L_0035B7B0;
    case 443u: goto L_0035B7D4;
    case 444u: goto L_0035B800;
    case 445u: goto L_0035B810;
    case 446u: goto L_0035B830;
    case 447u: goto L_0035B840;
    case 448u: goto L_0035B884;
    case 449u: goto L_0035B894;
    case 450u: goto L_0035B8A8;
    case 451u: goto L_0035B8C4;
    case 452u: goto L_0035B8D4;
    case 453u: goto L_0035B8E8;
    case 454u: goto L_0035B904;
    case 455u: goto L_0035B914;
    case 456u: goto L_0035B928;
    case 457u: goto L_0035B944;
    case 458u: goto L_0035B954;
    case 459u: goto L_0035B968;
    case 460u: goto L_0035B984;
    case 461u: goto L_0035B994;
    case 462u: goto L_0035B9A8;
    case 463u: goto L_0035B9C4;
    case 464u: goto L_0035B9D4;
    case 465u: goto L_0035B9E8;
    case 466u: goto L_0035BA04;
    case 467u: goto L_0035BA14;
    case 468u: goto L_0035BA28;
    case 469u: goto L_0035BA44;
    case 470u: goto L_0035BA54;
    case 471u: goto L_0035BA68;
    case 472u: goto L_0035BA84;
    case 473u: goto L_0035BA94;
    case 474u: goto L_0035BAA8;
    case 475u: goto L_0035BAC4;
    case 476u: goto L_0035BAD4;
    case 477u: goto L_0035BAE8;
    case 478u: goto L_0035BB04;
    case 479u: goto L_0035BB14;
    case 480u: goto L_0035BB28;
    case 481u: goto L_0035BB44;
    case 482u: goto L_0035BB54;
    case 483u: goto L_0035BB68;
    case 484u: goto L_0035BB84;
    case 485u: goto L_0035BB94;
    case 486u: goto L_0035BBA8;
    case 487u: goto L_0035BBC4;
    case 488u: goto L_0035BBD4;
    case 489u: goto L_0035BBE8;
    case 490u: goto L_0035BC04;
    case 491u: goto L_0035BC14;
    case 492u: goto L_0035BC28;
    case 493u: goto L_0035BC44;
    case 494u: goto L_0035BC54;
    case 495u: goto L_0035BC68;
    case 496u: goto L_0035BC84;
    case 497u: goto L_0035BC94;
    case 498u: goto L_0035BCA8;
    case 499u: goto L_0035BCC4;
    case 500u: goto L_0035BCD4;
    case 501u: goto L_0035BCE8;
    case 502u: goto L_0035BD04;
    case 503u: goto L_0035BD14;
    case 504u: goto L_0035BD28;
    case 505u: goto L_0035BD44;
    case 506u: goto L_0035BD54;
    case 507u: goto L_0035BD68;
    case 508u: goto L_0035BD84;
    case 509u: goto L_0035BD94;
    case 510u: goto L_0035BDA8;
    case 511u: goto L_0035BDC4;
    case 512u: goto L_0035BDD4;
    case 513u: goto L_0035BDE8;
    case 514u: goto L_0035BE04;
    case 515u: goto L_0035BE14;
    case 516u: goto L_0035BE28;
    case 517u: goto L_0035BE44;
    case 518u: goto L_0035BE54;
    case 519u: goto L_0035BE68;
    case 520u: goto L_0035BE84;
    case 521u: goto L_0035BE94;
    case 522u: goto L_0035BEA8;
    case 523u: goto L_0035BEC4;
    case 524u: goto L_0035BED4;
    case 525u: goto L_0035BEE8;
    case 526u: goto L_0035BF04;
    case 527u: goto L_0035BF14;
    case 528u: goto L_0035BF28;
    case 529u: goto L_0035BF44;
    case 530u: goto L_0035BF54;
    case 531u: goto L_0035BF68;
    case 532u: goto L_0035BF84;
    case 533u: goto L_0035BF94;
    case 534u: goto L_0035BFA8;
    case 535u: goto L_0035BFC4;
    case 536u: goto L_0035BFD4;
    case 537u: goto L_0035BFE8;
    default: bad_entry(c, 0x00358000u); return;
    }
L_00358000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358008u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 231u, depth + 1u); else { c.pc = 0x00359970u; return; } if (c.pc != 0x00358008u) [[unlikely]] return; }
L_00358008:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358104; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    st32((c.r[2].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 8u));
    st16((c.r[3].w[0] + 228u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358054u); st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00358054u) [[unlikely]] return; }
L_00358054:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358060u); set32(c.r[5], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00358060u) [[unlikely]] return; }
L_00358060:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358088u); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00358088u) [[unlikely]] return; }
L_00358088:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358094u); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00358094u) [[unlikely]] return; }
L_00358094:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003580BCu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003580BCu) [[unlikely]] return; }
L_003580BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003580C8u); set32(c.r[5], c.r[16].w[0] + 44u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x003580C8u) [[unlikely]] return; }
L_003580C8:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003580E4u); st32((c.r[3].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003580E4u) [[unlikely]] return; }
L_003580E4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003580F0u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x003580F0u) [[unlikely]] return; }
L_003580F0:
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 48u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356694u | kUnwind; return; } [[clang::musttail]] return unit_0055(c, 373u, depth); } }
L_00358104:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358110u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00358110u) [[unlikely]] return; }
L_00358110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035880C; } }
L_00358118:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358124u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00358124u) [[unlikely]] return; }
L_00358124:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035880C; } }
L_0035812C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358138u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00358138u) [[unlikely]] return; }
L_00358138:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1008u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358148u); set32(c.r[5], c.r[18].w[0] + 20u);  if (depth < kMaxDepth) unit_0056(c, 253u, depth + 1u); else { c.pc = 0x00359B90u; return; } if (c.pc != 0x00358148u) [[unlikely]] return; }
L_00358148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358150u); set32(c.r[4], c.r[29].w[0] + 1008u);  if (depth < kMaxDepth) unit_0056(c, 251u, depth + 1u); else { c.pc = 0x00359B60u; return; } if (c.pc != 0x00358150u) [[unlikely]] return; }
L_00358150:
    st32((c.r[18].w[0] + 240u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1008u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358164u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0056(c, 248u, depth + 1u); else { c.pc = 0x00359B00u; return; } if (c.pc != 0x00358164u) [[unlikely]] return; }
L_00358164:
    set32(c.r[2], ld32((c.r[18].w[0] + 240u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] + 136u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035817Cu); st32((c.r[18].w[0] + 248u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035817Cu) [[unlikely]] return; }
L_0035817C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358704; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358190u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00358190u) [[unlikely]] return; }
L_00358190:
    set32(c.r[4], c.r[18].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035819Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 231u, depth + 1u); else { c.pc = 0x00359970u; return; } if (c.pc != 0x0035819Cu) [[unlikely]] return; }
L_0035819C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358694; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003581B8u); st32((c.r[16].w[0] + 212u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003581B8u) [[unlikely]] return; }
L_003581B8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003581C4u); set32(c.r[5], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x003581C4u) [[unlikely]] return; }
L_003581C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] << 16);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003581E8u); st32((c.r[3].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003581E8u) [[unlikely]] return; }
L_003581E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003581F4u); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x003581F4u) [[unlikely]] return; }
L_003581F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    set32(c.r[2], c.r[2].w[0] << 16);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358218u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00358218u) [[unlikely]] return; }
L_00358218:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358224u); set32(c.r[5], c.r[16].w[0] + 44u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00358224u) [[unlikely]] return; }
L_00358224:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035823Cu); st32((c.r[16].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035823Cu) [[unlikely]] return; }
L_0035823C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358248u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00358248u) [[unlikely]] return; }
L_00358248:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358260u); st32((c.r[16].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00358260u) [[unlikely]] return; }
L_00358260:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035826Cu); set32(c.r[5], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x0035826Cu) [[unlikely]] return; }
L_0035826C:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358284u); st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00358284u) [[unlikely]] return; }
L_00358284:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358290u); set32(c.r[5], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00358290u) [[unlikely]] return; }
L_00358290:
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003586A8; } }
L_0035829C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003582A8u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003582A8u) [[unlikely]] return; }
L_003582A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003582B4u); set32(c.r[5], c.r[16].w[0] + 244u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x003582B4u) [[unlikely]] return; }
L_003582B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003582C0u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003582C0u) [[unlikely]] return; }
L_003582C0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003582CCu); set32(c.r[5], c.r[16].w[0] + 248u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x003582CCu) [[unlikely]] return; }
L_003582CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003586B4; } }
L_003582D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003582E4u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003582E4u) [[unlikely]] return; }
L_003582E4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003582F0u); set32(c.r[5], c.r[16].w[0] + 252u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x003582F0u) [[unlikely]] return; }
L_003582F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 252u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 12u);
    set32(c.r[2], c.r[2].w[0] << 10);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358308u); st32((c.r[16].w[0] + 252u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00358308u) [[unlikely]] return; }
L_00358308:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358314u); set32(c.r[5], c.r[16].w[0] + 256u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00358314u) [[unlikely]] return; }
L_00358314:
    set32(c.r[2], ld32((c.r[16].w[0] + 256u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 13u);
    set32(c.r[2], c.r[2].w[0] << 10);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035832Cu); st32((c.r[16].w[0] + 256u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035832Cu) [[unlikely]] return; }
L_0035832C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358338u); set32(c.r[5], c.r[16].w[0] + 260u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00358338u) [[unlikely]] return; }
L_00358338:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358344u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00358344u) [[unlikely]] return; }
L_00358344:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358350u); set32(c.r[5], c.r[16].w[0] + 264u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00358350u) [[unlikely]] return; }
L_00358350:
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003586C0; } }
L_0035835C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358368u); set32(c.r[5], 0u + 15u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00358368u) [[unlikely]] return; }
L_00358368:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358374u); set32(c.r[5], c.r[16].w[0] + 268u);  if (depth < kMaxDepth) unit_000E(c, 327u, depth + 1u); else { c.pc = 0x0023BED0u; return; } if (c.pc != 0x00358374u) [[unlikely]] return; }
L_00358374:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358380u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00358380u) [[unlikely]] return; }
L_00358380:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035838Cu); set32(c.r[5], c.r[16].w[0] + 272u);  if (depth < kMaxDepth) unit_000E(c, 327u, depth + 1u); else { c.pc = 0x0023BED0u; return; } if (c.pc != 0x0035838Cu) [[unlikely]] return; }
L_0035838C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358398u); set32(c.r[5], 0u + 17u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00358398u) [[unlikely]] return; }
L_00358398:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003583A4u); set32(c.r[5], c.r[16].w[0] + 276u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x003583A4u) [[unlikely]] return; }
L_003583A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003586CC; } }
L_003583B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 276u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 268u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003586D8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 272u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003586D8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003583E0u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003583E0u) [[unlikely]] return; }
L_003583E0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003583ECu); set32(c.r[5], c.r[16].w[0] + 280u);  if (depth < kMaxDepth) unit_000E(c, 327u, depth + 1u); else { c.pc = 0x0023BED0u; return; } if (c.pc != 0x003583ECu) [[unlikely]] return; }
L_003583EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003586EC; } }
L_003583F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358404u); set32(c.r[5], 0u + 19u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00358404u) [[unlikely]] return; }
L_00358404:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358410u); set32(c.r[5], c.r[16].w[0] + 284u);  if (depth < kMaxDepth) unit_000E(c, 327u, depth + 1u); else { c.pc = 0x0023BED0u; return; } if (c.pc != 0x00358410u) [[unlikely]] return; }
L_00358410:
    set32(c.r[2], ld32((c.r[16].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003586F8; } }
L_0035841C:
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 8u));
    st16((c.r[16].w[0] + 228u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 280u));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358450u); set32(c.r[4], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00358450u) [[unlikely]] return; }
L_00358450:
    st32((c.r[16].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358460u); set32(c.r[4], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00358460u) [[unlikely]] return; }
L_00358460:
    st32((c.r[16].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358470u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00358470u) [[unlikely]] return; }
L_00358470:
    st32((c.r[16].w[0] + 296u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358480u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00358480u) [[unlikely]] return; }
L_00358480:
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358490u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00358490u) [[unlikely]] return; }
L_00358490:
    st32((c.r[16].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003584A0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003584A0u) [[unlikely]] return; }
L_003584A0:
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003584B0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003584B0u) [[unlikely]] return; }
L_003584B0:
    st32((c.r[16].w[0] + 312u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003584C0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003584C0u) [[unlikely]] return; }
L_003584C0:
    st32((c.r[16].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003584D0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003584D0u) [[unlikely]] return; }
L_003584D0:
    st32((c.r[16].w[0] + 320u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003584E0u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003584E0u) [[unlikely]] return; }
L_003584E0:
    st32((c.r[16].w[0] + 324u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 268u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 272u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[4], ld32((c.r[16].w[0] + 280u)));  if (t) { goto L_00358504; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00358520; } }
L_00358504:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_00358520:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_00358534; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00358550; } }
L_00358534:
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_00358550:
    c.f[2] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[1].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356694u | kUnwind; return; } [[clang::musttail]] return unit_0055(c, 373u, depth); } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[4].d[0] = 0ull + 0ull;
    c.f[1] = c.r[6].w[0];
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[7], 0u - 1u);
    c.budget -= 6;
L_00358584:
    set32(c.r[6], ld32((c.r[16].w[0] + 288u)));
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[8], ld32((c.r[16].w[0] + 284u)));
    mmi::divu(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[6].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 9;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_003585B4; } }
    c.f[0] = c.r[6].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003585D0; } }
L_003585B4:
    set32(c.r[8], c.r[6].w[0] >> 1);
    c.r[6].d[0] = c.r[6].d[0] & 1ull;
    c.r[8].d[0] = c.r[8].d[0] | c.r[6].d[0];
    c.f[0] = c.r[8].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003585D0:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003585F0; } }
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[8].d[0] & 65535ull;  if (t) { goto L_00358608; } }
L_003585F0:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[8], c.f[0]);
    c.r[8].d[0] = c.r[8].d[0] | c.r[2].d[0];
    c.r[8].d[0] = c.r[8].d[0] & 65535ull;
    c.budget -= 6;
L_00358608:
    set32(c.r[6], ld32((c.r[16].w[0] + 292u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2u);
    set32(c.r[6], ld32((c.r[16].w[0] + 296u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), 0u);
    set32(c.r[6], ld32((c.r[16].w[0] + 300u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), 0u);
    set32(c.r[6], ld32((c.r[16].w[0] + 304u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), 0u);
    set32(c.r[6], ld32((c.r[16].w[0] + 308u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 312u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), 0u);
    set32(c.r[6], ld32((c.r[16].w[0] + 316u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), 0u);
    set32(c.r[6], ld32((c.r[16].w[0] + 320u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), 0u);
    set32(c.r[6], ld32((c.r[16].w[0] + 324u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), 0u);
    set32(c.r[6], ld32((c.r[16].w[0] + 280u)));
    c.r[6].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 33;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358584u | kUnwind; return; } goto L_00358584; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356694u | kUnwind; return; } [[clang::musttail]] return unit_0055(c, 373u, depth); } }
L_00358694:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003586A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003586A0u) [[unlikely]] return; }
L_003586A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035880C; } }
L_003586A8:
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 240u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035829Cu | kUnwind; return; } goto L_0035829C; } }
L_003586B4:
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 248u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003582D8u | kUnwind; return; } goto L_003582D8; } }
L_003586C0:
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 264u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035835Cu | kUnwind; return; } goto L_0035835C; } }
L_003586CC:
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 276u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003583B0u | kUnwind; return; } goto L_003583B0; } }
L_003586D8:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003586E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003586E4u) [[unlikely]] return; }
L_003586E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035880C; } }
L_003586EC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 280u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003583F8u | kUnwind; return; } goto L_003583F8; } }
L_003586F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 284u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035841Cu | kUnwind; return; } goto L_0035841C; } }
L_00358704:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358710u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00358710u) [[unlikely]] return; }
L_00358710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035880C; } }
L_00358718:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358724u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00358724u) [[unlikely]] return; }
L_00358724:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358734u); set32(c.r[5], c.r[18].w[0] + 60u);  if (depth < kMaxDepth) unit_0056(c, 161u, depth + 1u); else { c.pc = 0x00358FE0u; return; } if (c.pc != 0x00358734u) [[unlikely]] return; }
L_00358734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035873Cu); set32(c.r[4], c.r[29].w[0] + 1000u);  if (depth < kMaxDepth) unit_0056(c, 142u, depth + 1u); else { c.pc = 0x00358E20u; return; } if (c.pc != 0x0035873Cu) [[unlikely]] return; }
L_0035873C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 1000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035874Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0056(c, 139u, depth + 1u); else { c.pc = 0x00358DC0u; return; } if (c.pc != 0x0035874Cu) [[unlikely]] return; }
L_0035874C:
    set32(c.r[2], c.r[16].w[0] + 20u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358760u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x00358760u) [[unlikely]] return; }
L_00358760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003587FC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358774u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00358774u) [[unlikely]] return; }
L_00358774:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358780u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 116u, depth + 1u); else { c.pc = 0x0023D120u; return; } if (c.pc != 0x00358780u) [[unlikely]] return; }
L_00358780:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035878Cu); c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x0035878Cu) [[unlikely]] return; }
L_0035878C:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356694u | kUnwind; return; } [[clang::musttail]] return unit_0055(c, 373u, depth); } }
L_00358798:
    c.r[5].d[0] = c.r[19].d[0] & 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003587A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x003587A4u) [[unlikely]] return; }
L_003587A4:
    set32(c.r[4], c.r[18].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003587B0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 117u, depth + 1u); else { c.pc = 0x00358B90u; return; } if (c.pc != 0x003587B0u) [[unlikely]] return; }
L_003587B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003587CC; } }
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003587C4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003587C4u) [[unlikely]] return; }
L_003587C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035880C; } }
L_003587CC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003587D8u); set32(c.r[4], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0056(c, 111u, depth + 1u); else { c.pc = 0x00358AD0u; return; } if (c.pc != 0x003587D8u) [[unlikely]] return; }
L_003587D8:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003587E8u); c.r[19].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x003587E8u) [[unlikely]] return; }
L_003587E8:
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358798u | kUnwind; return; } goto L_00358798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00356694u | kUnwind; return; } [[clang::musttail]] return unit_0055(c, 373u, depth); } }
L_003587FC:
    set32(c.r[4], c.r[29].w[0] + 1180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358808u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00358808u) [[unlikely]] return; }
L_00358808:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035880C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1184u);  c.pc = t; return; }
L_00358830:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358848u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 95u, depth + 1u); else { c.pc = 0x00358860u; return; } if (c.pc != 0x00358848u) [[unlikely]] return; }
L_00358848:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00358860:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00358880:
    c.budget -= 2;
    { c.r[6].d[0] = 0ull + 0ull;  goto L_00358890; }
L_00358890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003588A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 99u, depth + 1u); else { c.pc = 0x003588C0u; return; } if (c.pc != 0x003588A4u) [[unlikely]] return; }
L_003588A4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003588C0:
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[5].w[0])));
    set32(c.r[7], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[5], c.r[8].w[0] - 24u);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[5], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  c.pc = t; return; }
L_00358900:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[2].w[0] + 24u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00358920; } }
L_00358918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00358994; } }
L_00358920:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035898C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035898C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 24u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 24u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358918u | kUnwind; return; } goto L_00358918; } }
L_0035898C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358918u | kUnwind; return; } goto L_00358918; } }
L_00358994:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003589A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00358A08; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003589F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003589D4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003589D4u) [[unlikely]] return; }
L_003589D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003589EC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003589ECu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0056(c, 108u, depth + 1u); else { c.pc = 0x00358A50u; return; } if (c.pc != 0x003589ECu) [[unlikely]] return; }
L_003589EC:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_003589F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358A00u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0056(c, 102u, depth + 1u); else { c.pc = 0x003589A0u; return; } if (c.pc != 0x00358A00u) [[unlikely]] return; }
L_00358A00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00358A40; } }
L_00358A08:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358A24u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00358A24u) [[unlikely]] return; }
L_00358A24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00358A34; } }
L_00358A2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00358A3C; } }
L_00358A34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358A2Cu | kUnwind; return; } goto L_00358A2C; } }
L_00358A3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00358A40:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00358A50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00358A74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_00358A7C; } }
L_00358A74:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_00358A7C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358A8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 110u, depth + 1u); else { c.pc = 0x00358AB0u; return; } if (c.pc != 0x00358A8Cu) [[unlikely]] return; }
L_00358A8C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00358AB0:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00358AD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00358B44; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00358B30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358B0Cu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00358B0Cu) [[unlikely]] return; }
L_00358B0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00358B24; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358B24u); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0056(c, 108u, depth + 1u); else { c.pc = 0x00358A50u; return; } if (c.pc != 0x00358B24u) [[unlikely]] return; }
L_00358B24:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_00358B30:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358B3Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 111u, depth + 1u); else { c.pc = 0x00358AD0u; return; } if (c.pc != 0x00358B3Cu) [[unlikely]] return; }
L_00358B3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00358B80; } }
L_00358B44:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358B60u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00358B60u) [[unlikely]] return; }
L_00358B60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00358B70; } }
L_00358B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00358B7C; } }
L_00358B70:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358B68u | kUnwind; return; } goto L_00358B68; } }
L_00358B7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00358B80:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00358B90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358BBCu); set32(c.r[4], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 135u, depth + 1u); else { c.pc = 0x00358D30u; return; } if (c.pc != 0x00358BBCu) [[unlikely]] return; }
L_00358BBC:
    mmi::divu(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00358BE4; } }
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00358BD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00358C6C; } }
L_00358BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00358CEC; } }
L_00358BE4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358BF0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 134u, depth + 1u); else { c.pc = 0x00358D20u; return; } if (c.pc != 0x00358BF0u) [[unlikely]] return; }
L_00358BF0:
    set32(c.r[4], c.r[19].w[0] + 9u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358C00u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00358C00u) [[unlikely]] return; }
L_00358C00:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00358C24; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358C1Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 134u, depth + 1u); else { c.pc = 0x00358D20u; return; } if (c.pc != 0x00358C1Cu) [[unlikely]] return; }
L_00358C1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { goto L_00358CEC; } }
L_00358C24:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358C30u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 134u, depth + 1u); else { c.pc = 0x00358D20u; return; } if (c.pc != 0x00358C30u) [[unlikely]] return; }
L_00358C30:
    set32(c.r[4], c.r[19].w[0] + 9u);
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358C40u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00358C40u) [[unlikely]] return; }
L_00358C40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00358C64; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358BE4u | kUnwind; return; } goto L_00358BE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358BD4u | kUnwind; return; } goto L_00358BD4; } }
L_00358C64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00358CEC; } }
L_00358C6C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358C78u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 134u, depth + 1u); else { c.pc = 0x00358D20u; return; } if (c.pc != 0x00358C78u) [[unlikely]] return; }
L_00358C78:
    set32(c.r[4], c.r[19].w[0] + 9u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358C88u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00358C88u) [[unlikely]] return; }
L_00358C88:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00358CAC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358CA4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 134u, depth + 1u); else { c.pc = 0x00358D20u; return; } if (c.pc != 0x00358CA4u) [[unlikely]] return; }
L_00358CA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { goto L_00358CEC; } }
L_00358CAC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358CB8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 134u, depth + 1u); else { c.pc = 0x00358D20u; return; } if (c.pc != 0x00358CB8u) [[unlikely]] return; }
L_00358CB8:
    set32(c.r[4], c.r[19].w[0] + 9u);
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358CC8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00358CC8u) [[unlikely]] return; }
L_00358CC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00358CE8; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358C6Cu | kUnwind; return; } goto L_00358C6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358BDCu | kUnwind; return; } goto L_00358BDC; } }
L_00358CE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00358CEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00358D10:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023B4B0u | kUnwind; return; } [[clang::musttail]] return unit_000E(c, 290u, depth); }
L_00358D20:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_00358D30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358D4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x00358D4Cu) [[unlikely]] return; }
L_00358D4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358D58u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 281u, depth + 1u); else { c.pc = 0x0023B2A0u; return; } if (c.pc != 0x00358D58u) [[unlikely]] return; }
L_00358D58:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_00358DA0; } }
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00358D70:
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[3].w[0] + 44u);
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] - 2u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[6].sd[0] >= 0; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358D70u | kUnwind; return; } goto L_00358D70; } }
    c.budget -= 1;
L_00358DA0:
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00358DC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00358E00; } }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358DE8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00358DE8u) [[unlikely]] return; }
L_00358DE8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00358E00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358E00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00358E00u) [[unlikely]] return; }
L_00358E00:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00358E20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[4].w[0] + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358E34u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0056(c, 144u, depth + 1u); else { c.pc = 0x00358E50u; return; } if (c.pc != 0x00358E34u) [[unlikely]] return; }
L_00358E34:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00358E50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358E7Cu); set32(c.r[4], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 135u, depth + 1u); else { c.pc = 0x00358D30u; return; } if (c.pc != 0x00358E7Cu) [[unlikely]] return; }
L_00358E7C:
    mmi::divu(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00358EA4; } }
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00358E94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00358F2C; } }
L_00358E9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00358FAC; } }
L_00358EA4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358EB0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x00358EB0u) [[unlikely]] return; }
L_00358EB0:
    set32(c.r[4], c.r[19].w[0] + 9u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358EC0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00358EC0u) [[unlikely]] return; }
L_00358EC0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00358EE4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358EDCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x00358EDCu) [[unlikely]] return; }
L_00358EDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { goto L_00358FAC; } }
L_00358EE4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358EF0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x00358EF0u) [[unlikely]] return; }
L_00358EF0:
    set32(c.r[4], c.r[19].w[0] + 9u);
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358F00u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00358F00u) [[unlikely]] return; }
L_00358F00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00358F24; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358EA4u | kUnwind; return; } goto L_00358EA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358E94u | kUnwind; return; } goto L_00358E94; } }
L_00358F24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00358FAC; } }
L_00358F2C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358F38u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x00358F38u) [[unlikely]] return; }
L_00358F38:
    set32(c.r[4], c.r[19].w[0] + 9u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358F48u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00358F48u) [[unlikely]] return; }
L_00358F48:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00358F6C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358F64u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x00358F64u) [[unlikely]] return; }
L_00358F64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { goto L_00358FAC; } }
L_00358F6C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358F78u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 160u, depth + 1u); else { c.pc = 0x00358FD0u; return; } if (c.pc != 0x00358F78u) [[unlikely]] return; }
L_00358F78:
    set32(c.r[4], c.r[19].w[0] + 9u);
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00358F88u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00358F88u) [[unlikely]] return; }
L_00358F88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00358FA8; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358F2Cu | kUnwind; return; } goto L_00358F2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00358E9Cu | kUnwind; return; } goto L_00358E9C; } }
L_00358FA8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00358FAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00358FD0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_00358FE0:
    c.budget -= 2;
    {  goto L_00358FF0; }
L_00358FF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359010u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x00359010u) [[unlikely]] return; }
L_00359010:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00359030:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035905Cu); set32(c.r[4], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 135u, depth + 1u); else { c.pc = 0x00358D30u; return; } if (c.pc != 0x0035905Cu) [[unlikely]] return; }
L_0035905C:
    mmi::divu(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00359084; } }
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00359074:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0035910C; } }
L_0035907C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035918C; } }
L_00359084:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359090u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00359090u) [[unlikely]] return; }
L_00359090:
    set32(c.r[4], c.r[19].w[0] + 9u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003590A0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003590A0u) [[unlikely]] return; }
L_003590A0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003590C4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003590BCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x003590BCu) [[unlikely]] return; }
L_003590BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { goto L_0035918C; } }
L_003590C4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003590D0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x003590D0u) [[unlikely]] return; }
L_003590D0:
    set32(c.r[4], c.r[19].w[0] + 9u);
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003590E0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003590E0u) [[unlikely]] return; }
L_003590E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00359104; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00359084u | kUnwind; return; } goto L_00359084; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00359074u | kUnwind; return; } goto L_00359074; } }
L_00359104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035918C; } }
L_0035910C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359118u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00359118u) [[unlikely]] return; }
L_00359118:
    set32(c.r[4], c.r[19].w[0] + 9u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359128u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00359128u) [[unlikely]] return; }
L_00359128:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035914C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359144u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00359144u) [[unlikely]] return; }
L_00359144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { goto L_0035918C; } }
L_0035914C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359158u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 179u, depth + 1u); else { c.pc = 0x003591B0u; return; } if (c.pc != 0x00359158u) [[unlikely]] return; }
L_00359158:
    set32(c.r[4], c.r[19].w[0] + 9u);
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359168u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00359168u) [[unlikely]] return; }
L_00359168:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00359188; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035910Cu | kUnwind; return; } goto L_0035910C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035907Cu | kUnwind; return; } goto L_0035907C; } }
L_00359188:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035918C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003591B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_003591C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_003591E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00359220; } }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359208u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00359208u) [[unlikely]] return; }
L_00359208:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00359220; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359220u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00359220u) [[unlikely]] return; }
L_00359220:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00359240:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[4].w[0] + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359254u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0056(c, 163u, depth + 1u); else { c.pc = 0x00359030u; return; } if (c.pc != 0x00359254u) [[unlikely]] return; }
L_00359254:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00359270:
    c.budget -= 2;
    {  goto L_00359280; }
L_00359280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003592A0u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x003592A0u) [[unlikely]] return; }
L_003592A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003592C0:
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[4].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003592E0; } }
    c.r[1].d[0] = c.r[4].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003592E0; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003592E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003592F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035931Cu); set32(c.r[4], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 135u, depth + 1u); else { c.pc = 0x00358D30u; return; } if (c.pc != 0x0035931Cu) [[unlikely]] return; }
L_0035931C:
    mmi::divu(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00359344; } }
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00359334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003593CC; } }
L_0035933C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035944C; } }
L_00359344:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359350u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 205u, depth + 1u); else { c.pc = 0x00359470u; return; } if (c.pc != 0x00359350u) [[unlikely]] return; }
L_00359350:
    set32(c.r[4], c.r[19].w[0] + 9u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359360u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00359360u) [[unlikely]] return; }
L_00359360:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00359384; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035937Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 205u, depth + 1u); else { c.pc = 0x00359470u; return; } if (c.pc != 0x0035937Cu) [[unlikely]] return; }
L_0035937C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { goto L_0035944C; } }
L_00359384:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359390u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 205u, depth + 1u); else { c.pc = 0x00359470u; return; } if (c.pc != 0x00359390u) [[unlikely]] return; }
L_00359390:
    set32(c.r[4], c.r[19].w[0] + 9u);
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003593A0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003593A0u) [[unlikely]] return; }
L_003593A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003593C4; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00359344u | kUnwind; return; } goto L_00359344; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00359334u | kUnwind; return; } goto L_00359334; } }
L_003593C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035944C; } }
L_003593CC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003593D8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 205u, depth + 1u); else { c.pc = 0x00359470u; return; } if (c.pc != 0x003593D8u) [[unlikely]] return; }
L_003593D8:
    set32(c.r[4], c.r[19].w[0] + 9u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003593E8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003593E8u) [[unlikely]] return; }
L_003593E8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035940C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359404u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 205u, depth + 1u); else { c.pc = 0x00359470u; return; } if (c.pc != 0x00359404u) [[unlikely]] return; }
L_00359404:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { goto L_0035944C; } }
L_0035940C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359418u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 205u, depth + 1u); else { c.pc = 0x00359470u; return; } if (c.pc != 0x00359418u) [[unlikely]] return; }
L_00359418:
    set32(c.r[4], c.r[19].w[0] + 9u);
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359428u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00359428u) [[unlikely]] return; }
L_00359428:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00359448; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003593CCu | kUnwind; return; } goto L_003593CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035933Cu | kUnwind; return; } goto L_0035933C; } }
L_00359448:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035944C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00359470:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_00359480:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00359608; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003595F8; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003595A4; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00359590; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035957C; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00359568; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00359554; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003595B8; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_0035954C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359560; } }
L_00359554:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_00359560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359574; } }
L_00359568:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_00359574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00359588; } }
L_0035957C:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_00359588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035959C; } }
L_00359590:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_0035959C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003595B0; } }
L_003595A4:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_003595B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00359618; } }
L_003595B8:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003595E4; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003595DCu); set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0056(c, 206u, depth + 1u); else { c.pc = 0x00359480u; return; } if (c.pc != 0x003595DCu) [[unlikely]] return; }
L_003595DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003595F0; } }
L_003595E4:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_003595F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035954Cu | kUnwind; return; } goto L_0035954C; } }
L_003595F8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003595B0u | kUnwind; return; } goto L_003595B0; } }
L_00359608:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_00359618:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00359620:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[21], ld32((c.r[4].w[0] + 4u)));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { const bool t = c.r[21].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003597B8; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003597B8; } }
    set32(c.r[20], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_003597B0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003597B0; } }
    set32(c.r[19], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003597A8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003597A8; } }
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003597A0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003597A0; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00359798; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359798; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00359790; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359790; } }
    set32(c.r[22], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00359788; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359788; } }
    set32(c.r[23], ld32((c.r[22].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_00359780; } }
    set32(c.r[2], ld32((c.r[23].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359780; } }
    set32(c.r[4], ld32((c.r[23].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00359778; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035972Cu);  if (depth < kMaxDepth) unit_0056(c, 210u, depth + 1u); else { c.pc = 0x00359620u; return; } if (c.pc != 0x0035972Cu) [[unlikely]] return; }
L_0035972C:
    set32(c.r[3], ld32((c.r[23].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00359734:
    set32(c.r[2], ld32((c.r[22].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_0035973C:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_00359744:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_0035974C:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_00359754:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_0035975C:
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_00359764:
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_0035976C:
    set32(c.r[2], ld32((c.r[30].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_003597BC; } }
L_00359778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[23].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00359734u | kUnwind; return; } goto L_00359734; } }
L_00359780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[22].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035973Cu | kUnwind; return; } goto L_0035973C; } }
L_00359788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00359744u | kUnwind; return; } goto L_00359744; } }
L_00359790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035974Cu | kUnwind; return; } goto L_0035974C; } }
L_00359798:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00359754u | kUnwind; return; } goto L_00359754; } }
L_003597A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035975Cu | kUnwind; return; } goto L_0035975C; } }
L_003597A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00359764u | kUnwind; return; } goto L_00359764; } }
L_003597B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035976Cu | kUnwind; return; } goto L_0035976C; } }
L_003597B8:
    set32(c.r[2], ld32((c.r[30].w[0] + 16u)));
    c.budget -= 1;
L_003597BC:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003597F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00359864; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00359850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035982Cu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035982Cu) [[unlikely]] return; }
L_0035982C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359844; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359844u); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0056(c, 226u, depth + 1u); else { c.pc = 0x003598B0u; return; } if (c.pc != 0x00359844u) [[unlikely]] return; }
L_00359844:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_00359850:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035985Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 220u, depth + 1u); else { c.pc = 0x003597F0u; return; } if (c.pc != 0x0035985Cu) [[unlikely]] return; }
L_0035985C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00359898; } }
L_00359864:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 8u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359880u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00359880u) [[unlikely]] return; }
L_00359880:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359894; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359894u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 229u, depth + 1u); else { c.pc = 0x00359930u; return; } if (c.pc != 0x00359894u) [[unlikely]] return; }
L_00359894:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00359898:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003598B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_003598D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_003598DC; } }
L_003598D4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_003598DC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003598ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 228u, depth + 1u); else { c.pc = 0x00359910u; return; } if (c.pc != 0x003598ECu) [[unlikely]] return; }
L_003598EC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00359910:
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_00359930:
    set32(c.r[7], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[5].w[0] + 4u));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 6u));
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00359950:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[7].w[0]));  c.pc = t; return; }
L_00359970:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035999Cu); set32(c.r[4], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 135u, depth + 1u); else { c.pc = 0x00358D30u; return; } if (c.pc != 0x0035999Cu) [[unlikely]] return; }
L_0035999C:
    mmi::divu(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003599C4; } }
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003599B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00359A4C; } }
L_003599BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00359ACC; } }
L_003599C4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003599D0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x003599D0u) [[unlikely]] return; }
L_003599D0:
    set32(c.r[4], c.r[19].w[0] + 9u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003599E0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x003599E0u) [[unlikely]] return; }
L_003599E0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00359A04; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003599FCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x003599FCu) [[unlikely]] return; }
L_003599FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { goto L_00359ACC; } }
L_00359A04:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359A10u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x00359A10u) [[unlikely]] return; }
L_00359A10:
    set32(c.r[4], c.r[19].w[0] + 9u);
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359A20u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00359A20u) [[unlikely]] return; }
L_00359A20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00359A44; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003599C4u | kUnwind; return; } goto L_003599C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003599B4u | kUnwind; return; } goto L_003599B4; } }
L_00359A44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00359ACC; } }
L_00359A4C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359A58u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x00359A58u) [[unlikely]] return; }
L_00359A58:
    set32(c.r[4], c.r[19].w[0] + 9u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359A68u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00359A68u) [[unlikely]] return; }
L_00359A68:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00359A8C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359A84u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x00359A84u) [[unlikely]] return; }
L_00359A84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { goto L_00359ACC; } }
L_00359A8C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359A98u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 247u, depth + 1u); else { c.pc = 0x00359AF0u; return; } if (c.pc != 0x00359A98u) [[unlikely]] return; }
L_00359A98:
    set32(c.r[4], c.r[19].w[0] + 9u);
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359AA8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00359AA8u) [[unlikely]] return; }
L_00359AA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00359AC8; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00359A4Cu | kUnwind; return; } goto L_00359A4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003599BCu | kUnwind; return; } goto L_003599BC; } }
L_00359AC8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00359ACC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00359AF0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_00359B00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00359B40; } }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359B28u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00359B28u) [[unlikely]] return; }
L_00359B28:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00359B40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359B40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00359B40u) [[unlikely]] return; }
L_00359B40:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00359B60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[4].w[0] + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359B74u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0056(c, 294u, depth + 1u); else { c.pc = 0x0035A030u; return; } if (c.pc != 0x00359B74u) [[unlikely]] return; }
L_00359B74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00359B90:
    c.budget -= 2;
    {  goto L_00359BA0; }
L_00359BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359BC0u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x00359BC0u) [[unlikely]] return; }
L_00359BC0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00359BE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 52u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359C08u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 301u, depth + 1u); else { c.pc = 0x0023B770u; return; } if (c.pc != 0x00359C08u) [[unlikely]] return; }
L_00359C08:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 52u));
    set32(c.r[2], 0u + 45u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00359C74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359C20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 281u, depth + 1u); else { c.pc = 0x0023B2A0u; return; } if (c.pc != 0x00359C20u) [[unlikely]] return; }
L_00359C20:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[7].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359C3Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 282u, depth + 1u); else { c.pc = 0x0023B2B0u; return; } if (c.pc != 0x00359C3Cu) [[unlikely]] return; }
L_00359C3C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359C48u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_000E(c, 327u, depth + 1u); else { c.pc = 0x0023BED0u; return; } if (c.pc != 0x00359C48u) [[unlikely]] return; }
L_00359C48:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359C58u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00359C58u) [[unlikely]] return; }
L_00359C58:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00359C98; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00359C9C; } }
L_00359C74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359C80u); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_000E(c, 327u, depth + 1u); else { c.pc = 0x0023BED0u; return; } if (c.pc != 0x00359C80u) [[unlikely]] return; }
L_00359C80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00359C98; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00359C9C; } }
L_00359C98:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00359C9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00359CB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359CDCu); set32(c.r[4], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 135u, depth + 1u); else { c.pc = 0x00358D30u; return; } if (c.pc != 0x00359CDCu) [[unlikely]] return; }
L_00359CDC:
    mmi::divu(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00359D04; } }
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00359CF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00359D8C; } }
L_00359CFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00359E0C; } }
L_00359D04:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359D10u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00359D10u) [[unlikely]] return; }
L_00359D10:
    set32(c.r[4], c.r[19].w[0] + 9u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359D20u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00359D20u) [[unlikely]] return; }
L_00359D20:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00359D44; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359D3Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00359D3Cu) [[unlikely]] return; }
L_00359D3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { goto L_00359E0C; } }
L_00359D44:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359D50u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00359D50u) [[unlikely]] return; }
L_00359D50:
    set32(c.r[4], c.r[19].w[0] + 9u);
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359D60u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00359D60u) [[unlikely]] return; }
L_00359D60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00359D84; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00359D04u | kUnwind; return; } goto L_00359D04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00359CF4u | kUnwind; return; } goto L_00359CF4; } }
L_00359D84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00359E0C; } }
L_00359D8C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359D98u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00359D98u) [[unlikely]] return; }
L_00359D98:
    set32(c.r[4], c.r[19].w[0] + 9u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359DA8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00359DA8u) [[unlikely]] return; }
L_00359DA8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00359DCC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359DC4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00359DC4u) [[unlikely]] return; }
L_00359DC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { goto L_00359E0C; } }
L_00359DCC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359DD8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 278u, depth + 1u); else { c.pc = 0x00359E30u; return; } if (c.pc != 0x00359DD8u) [[unlikely]] return; }
L_00359DD8:
    set32(c.r[4], c.r[19].w[0] + 9u);
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359DE8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x00359DE8u) [[unlikely]] return; }
L_00359DE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00359E08; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00359D8Cu | kUnwind; return; } goto L_00359D8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00359CFCu | kUnwind; return; } goto L_00359CFC; } }
L_00359E08:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00359E0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00359E30:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_00359E40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00359E80; } }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359E68u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00359E68u) [[unlikely]] return; }
L_00359E68:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00359E80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359E80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00359E80u) [[unlikely]] return; }
L_00359E80:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00359EA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[4].w[0] + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359EB4u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0056(c, 231u, depth + 1u); else { c.pc = 0x00359970u; return; } if (c.pc != 0x00359EB4u) [[unlikely]] return; }
L_00359EB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00359ED0:
    c.budget -= 2;
    {  goto L_00359EE0; }
L_00359EE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359F00u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x00359F00u) [[unlikely]] return; }
L_00359F00:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00359F20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00359F60; } }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359F48u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00359F48u) [[unlikely]] return; }
L_00359F48:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00359F60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359F60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00359F60u) [[unlikely]] return; }
L_00359F60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00359F80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[4].w[0] + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359F94u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0056(c, 262u, depth + 1u); else { c.pc = 0x00359CB0u; return; } if (c.pc != 0x00359F94u) [[unlikely]] return; }
L_00359F94:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00359FB0:
    c.budget -= 2;
    {  goto L_00359FC0; }
L_00359FC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00359FE0u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x00359FE0u) [[unlikely]] return; }
L_00359FE0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035A000:
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035A028; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035A000u | kUnwind; return; } goto L_0035A000; } }
L_0035A028:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0035A030:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A05Cu); set32(c.r[4], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 135u, depth + 1u); else { c.pc = 0x00358D30u; return; } if (c.pc != 0x0035A05Cu) [[unlikely]] return; }
L_0035A05C:
    mmi::divu(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0035A084; } }
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0035A074:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0035A10C; } }
L_0035A07C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035A18C; } }
L_0035A084:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A090u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x0035A090u) [[unlikely]] return; }
L_0035A090:
    set32(c.r[4], c.r[19].w[0] + 9u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A0A0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0035A0A0u) [[unlikely]] return; }
L_0035A0A0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035A0C4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A0BCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x0035A0BCu) [[unlikely]] return; }
L_0035A0BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { goto L_0035A18C; } }
L_0035A0C4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A0D0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x0035A0D0u) [[unlikely]] return; }
L_0035A0D0:
    set32(c.r[4], c.r[19].w[0] + 9u);
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A0E0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0035A0E0u) [[unlikely]] return; }
L_0035A0E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035A104; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035A084u | kUnwind; return; } goto L_0035A084; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035A074u | kUnwind; return; } goto L_0035A074; } }
L_0035A104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035A18C; } }
L_0035A10C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A118u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x0035A118u) [[unlikely]] return; }
L_0035A118:
    set32(c.r[4], c.r[19].w[0] + 9u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A128u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0035A128u) [[unlikely]] return; }
L_0035A128:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035A14C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A144u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x0035A144u) [[unlikely]] return; }
L_0035A144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { goto L_0035A18C; } }
L_0035A14C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A158u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x0035A158u) [[unlikely]] return; }
L_0035A158:
    set32(c.r[4], c.r[19].w[0] + 9u);
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A168u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0035A168u) [[unlikely]] return; }
L_0035A168:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035A188; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035A10Cu | kUnwind; return; } goto L_0035A10C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035A07Cu | kUnwind; return; } goto L_0035A07C; } }
L_0035A188:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035A18C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0035A1B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0035A1C0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_0035A1E0:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 4u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  c.pc = t; return; }
L_0035A220:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[2].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035A240; } }
L_0035A238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035A2AC; } }
L_0035A240:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035A2A4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035A2A4; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 4u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035A238u | kUnwind; return; } goto L_0035A238; } }
L_0035A2A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035A238u | kUnwind; return; } goto L_0035A238; } }
L_0035A2AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035A2C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0035A6E4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035A35C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A2FCu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035A2FCu) [[unlikely]] return; }
L_0035A2FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0035A34C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_0035A324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0035A32C; } }
L_0035A324:
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0035A32C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A348u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0035A348u) [[unlikely]] return; }
L_0035A348:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0035A34C:
    st32((c.r[17].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_0035A35C:
    set32(c.r[17], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035A70C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035A3E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A388u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035A388u) [[unlikely]] return; }
L_0035A388:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0035A3D8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_0035A3B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0035A3B8; } }
L_0035A3B0:
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0035A3B8:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A3D4u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0035A3D4u) [[unlikely]] return; }
L_0035A3D4:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0035A3D8:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_0035A3E4:
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035A734; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035A46C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A410u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035A410u) [[unlikely]] return; }
L_0035A410:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0035A460; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_0035A438; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0035A440; } }
L_0035A438:
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0035A440:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A45Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0035A45Cu) [[unlikely]] return; }
L_0035A45C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0035A460:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_0035A46C:
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035A75C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035A4F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A498u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035A498u) [[unlikely]] return; }
L_0035A498:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0035A4E8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_0035A4C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0035A4C8; } }
L_0035A4C0:
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0035A4C8:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A4E4u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0035A4E4u) [[unlikely]] return; }
L_0035A4E4:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0035A4E8:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_0035A4F4:
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035A784; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035A57C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A520u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035A520u) [[unlikely]] return; }
L_0035A520:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0035A570; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_0035A548; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0035A550; } }
L_0035A548:
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0035A550:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A56Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0035A56Cu) [[unlikely]] return; }
L_0035A56C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0035A570:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_0035A57C:
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035A7AC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035A604; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A5A8u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035A5A8u) [[unlikely]] return; }
L_0035A5A8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0035A5F8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_0035A5D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0035A5D8; } }
L_0035A5D0:
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0035A5D8:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A5F4u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0035A5F4u) [[unlikely]] return; }
L_0035A5F4:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0035A5F8:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_0035A604:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035A7D4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035A680; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A630u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035A630u) [[unlikely]] return; }
L_0035A630:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0035A674; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_0035A658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0035A660; } }
L_0035A658:
    set32(c.r[2], 0u + 8u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0035A660:
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A670u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 360u, depth + 1u); else { c.pc = 0x0035AF00u; return; } if (c.pc != 0x0035A670u) [[unlikely]] return; }
L_0035A670:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0035A674:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035A680:
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035A7FC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035A6D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A6ACu); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035A6ACu) [[unlikely]] return; }
L_0035A6AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035A6C4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A6C4u); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0056(c, 358u, depth + 1u); else { c.pc = 0x0035AEA0u; return; } if (c.pc != 0x0035A6C4u) [[unlikely]] return; }
L_0035A6C4:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_0035A6D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A6DCu); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0056(c, 334u, depth + 1u); else { c.pc = 0x0035A840u; return; } if (c.pc != 0x0035A6DCu) [[unlikely]] return; }
L_0035A6DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0035A830; } }
L_0035A6E4:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[5].w[0] << 2);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035A82C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035A6DCu | kUnwind; return; } goto L_0035A6DC; } }
L_0035A70C:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035A82C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035A6DCu | kUnwind; return; } goto L_0035A6DC; } }
L_0035A734:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035A82C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035A6DCu | kUnwind; return; } goto L_0035A6DC; } }
L_0035A75C:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035A82C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035A6DCu | kUnwind; return; } goto L_0035A6DC; } }
L_0035A784:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035A82C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035A6DCu | kUnwind; return; } goto L_0035A6DC; } }
L_0035A7AC:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035A82C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035A6DCu | kUnwind; return; } goto L_0035A6DC; } }
L_0035A7D4:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035A82C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035A6DCu | kUnwind; return; } goto L_0035A6DC; } }
L_0035A7FC:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A818u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035A818u) [[unlikely]] return; }
L_0035A818:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035A82C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035A6DCu | kUnwind; return; } goto L_0035A6DC; } }
L_0035A82C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0035A830:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035A840:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0035ACEC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035A8DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A880u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035A880u) [[unlikely]] return; }
L_0035A880:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0035A8D0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_0035A8A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0035A8B0; } }
L_0035A8A8:
    set32(c.r[2], 0u + 8u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0035A8B0:
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A8CCu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0035A8CCu) [[unlikely]] return; }
L_0035A8CC:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0035A8D0:
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 3;
L_0035A8DC:
    set32(c.r[18], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035AD18; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035A964; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A908u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035A908u) [[unlikely]] return; }
L_0035A908:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0035A958; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_0035A930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0035A938; } }
L_0035A930:
    set32(c.r[2], 0u + 8u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0035A938:
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 1;
L_0035A93C:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A954u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0035A954u) [[unlikely]] return; }
L_0035A954:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0035A958:
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 3;
L_0035A964:
    set32(c.r[18], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035AD44; } }
L_0035A97C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035A9EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A990u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035A990u) [[unlikely]] return; }
L_0035A990:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0035A9E0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_0035A9B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0035A9C0; } }
L_0035A9B8:
    set32(c.r[2], 0u + 8u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0035A9C0:
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035A9DCu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0035A9DCu) [[unlikely]] return; }
L_0035A9DC:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0035A9E0:
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 3;
L_0035A9EC:
    set32(c.r[18], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035AD70; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035AA74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AA18u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035AA18u) [[unlikely]] return; }
L_0035AA18:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0035AA68; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_0035AA40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0035AA48; } }
L_0035AA40:
    set32(c.r[2], 0u + 8u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0035AA48:
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AA64u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0035AA64u) [[unlikely]] return; }
L_0035AA64:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0035AA68:
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 3;
L_0035AA74:
    set32(c.r[18], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035AD9C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035AAFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AAA0u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035AAA0u) [[unlikely]] return; }
L_0035AAA0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0035AAF0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_0035AAC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0035AAD0; } }
L_0035AAC8:
    set32(c.r[2], 0u + 8u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0035AAD0:
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AAECu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0035AAECu) [[unlikely]] return; }
L_0035AAEC:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0035AAF0:
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 3;
L_0035AAFC:
    set32(c.r[18], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035ADC8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035AB84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AB28u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035AB28u) [[unlikely]] return; }
L_0035AB28:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0035AB78; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_0035AB50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0035AB58; } }
L_0035AB50:
    set32(c.r[2], 0u + 8u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0035AB58:
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AB74u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0035AB74u) [[unlikely]] return; }
L_0035AB74:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0035AB78:
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 3;
L_0035AB84:
    set32(c.r[18], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035ADF4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035AC0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ABB0u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035ABB0u) [[unlikely]] return; }
L_0035ABB0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0035AC00; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_0035ABD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0035ABE0; } }
L_0035ABD8:
    set32(c.r[2], 0u + 8u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0035ABE0:
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ABFCu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0035ABFCu) [[unlikely]] return; }
L_0035ABFC:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0035AC00:
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[18].w[0]);
    c.budget -= 3;
L_0035AC0C:
    set32(c.r[17], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035AE20; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035AC88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AC38u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035AC38u) [[unlikely]] return; }
L_0035AC38:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0035AC7C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 8u), 0u);  if (t) { goto L_0035AC60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_0035AC68; } }
L_0035AC60:
    set32(c.r[2], 0u + 8u);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0035AC68:
    st32((c.r[18].w[0] + 16u), 0u);
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AC78u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 360u, depth + 1u); else { c.pc = 0x0035AF00u; return; } if (c.pc != 0x0035AC78u) [[unlikely]] return; }
L_0035AC78:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0035AC7C:
    st32((c.r[17].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_0035AC88:
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035AE4C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035ACD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ACB4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0035ACB4u) [[unlikely]] return; }
L_0035ACB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035ACCC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ACCCu); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0056(c, 358u, depth + 1u); else { c.pc = 0x0035AEA0u; return; } if (c.pc != 0x0035ACCCu) [[unlikely]] return; }
L_0035ACCC:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_0035ACD8:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ACE4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 334u, depth + 1u); else { c.pc = 0x0035A840u; return; } if (c.pc != 0x0035ACE4u) [[unlikely]] return; }
L_0035ACE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0035AE88; } }
L_0035ACEC:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035AE84; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035AE84; } }
L_0035AD18:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035AE84; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035ACE4u | kUnwind; return; } goto L_0035ACE4; } }
L_0035AD44:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035ACE4u | kUnwind; return; } goto L_0035ACE4; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035ACE4u | kUnwind; return; } goto L_0035ACE4; } }
L_0035AD70:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035ACE4u | kUnwind; return; } goto L_0035ACE4; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035ACE4u | kUnwind; return; } goto L_0035ACE4; } }
L_0035AD9C:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035ACE4u | kUnwind; return; } goto L_0035ACE4; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035ACE4u | kUnwind; return; } goto L_0035ACE4; } }
L_0035ADC8:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035ACE4u | kUnwind; return; } goto L_0035ACE4; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035ACE4u | kUnwind; return; } goto L_0035ACE4; } }
L_0035ADF4:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035ACE4u | kUnwind; return; } goto L_0035ACE4; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035ACE4u | kUnwind; return; } goto L_0035ACE4; } }
L_0035AE20:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035ACE4u | kUnwind; return; } goto L_0035ACE4; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035ACE4u | kUnwind; return; } goto L_0035ACE4; } }
L_0035AE4C:
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AE68u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x0035AE68u) [[unlikely]] return; }
L_0035AE68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035AE78; } }
L_0035AE70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035ACE4u | kUnwind; return; } goto L_0035ACE4; } }
L_0035AE78:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035AE70u | kUnwind; return; } goto L_0035AE70; } }
L_0035AE84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0035AE88:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0035AEA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_0035AEC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0035AECC; } }
L_0035AEC4:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_0035AECC:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AEE8u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0035AEE8u) [[unlikely]] return; }
L_0035AEE8:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035AF00:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 5;
    { set32(c.r[4], c.r[2].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0020B190u | kUnwind; return; } [[clang::musttail]] return unit_0002(c, 167u, depth); }
L_0035AF20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_0035AF30:
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035AF44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[5].w[0])));  if (t) { goto L_0035AF48; } }
L_0035AF44:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035AF48:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 4u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  c.pc = t; return; }
L_0035AF80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AFACu); set32(c.r[4], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 135u, depth + 1u); else { c.pc = 0x00358D30u; return; } if (c.pc != 0x0035AFACu) [[unlikely]] return; }
L_0035AFAC:
    mmi::divu(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0035AFD4; } }
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0035AFC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0035B05C; } }
L_0035AFCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035B0DC; } }
L_0035AFD4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AFE0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0035AFE0u) [[unlikely]] return; }
L_0035AFE0:
    set32(c.r[4], c.r[19].w[0] + 9u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035AFF0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0035AFF0u) [[unlikely]] return; }
L_0035AFF0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035B014; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B00Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0035B00Cu) [[unlikely]] return; }
L_0035B00C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { goto L_0035B0DC; } }
L_0035B014:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B020u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0035B020u) [[unlikely]] return; }
L_0035B020:
    set32(c.r[4], c.r[19].w[0] + 9u);
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B030u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0035B030u) [[unlikely]] return; }
L_0035B030:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035B054; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035AFD4u | kUnwind; return; } goto L_0035AFD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035AFC4u | kUnwind; return; } goto L_0035AFC4; } }
L_0035B054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035B0DC; } }
L_0035B05C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B068u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0035B068u) [[unlikely]] return; }
L_0035B068:
    set32(c.r[4], c.r[19].w[0] + 9u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B078u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0035B078u) [[unlikely]] return; }
L_0035B078:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035B09C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B094u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0035B094u) [[unlikely]] return; }
L_0035B094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { goto L_0035B0DC; } }
L_0035B09C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B0A8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x0035B0A8u) [[unlikely]] return; }
L_0035B0A8:
    set32(c.r[4], c.r[19].w[0] + 9u);
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B0B8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0035B0B8u) [[unlikely]] return; }
L_0035B0B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035B0D8; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035B05Cu | kUnwind; return; } goto L_0035B05C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035AFCCu | kUnwind; return; } goto L_0035AFCC; } }
L_0035B0D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035B0DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0035B100:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0035B110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0035B150; } }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B138u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x0035B138u) [[unlikely]] return; }
L_0035B138:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0035B150; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B150u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0035B150u) [[unlikely]] return; }
L_0035B150:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0035B170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[4].w[0] + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B184u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0056(c, 385u, depth + 1u); else { c.pc = 0x0035B1A0u; return; } if (c.pc != 0x0035B184u) [[unlikely]] return; }
L_0035B184:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035B1A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B1CCu); set32(c.r[4], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 135u, depth + 1u); else { c.pc = 0x00358D30u; return; } if (c.pc != 0x0035B1CCu) [[unlikely]] return; }
L_0035B1CC:
    mmi::divu(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0035B1F4; } }
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0035B1E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0035B27C; } }
L_0035B1EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035B2FC; } }
L_0035B1F4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B200u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x0035B200u) [[unlikely]] return; }
L_0035B200:
    set32(c.r[4], c.r[19].w[0] + 9u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B210u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0035B210u) [[unlikely]] return; }
L_0035B210:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035B234; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B22Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x0035B22Cu) [[unlikely]] return; }
L_0035B22C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { goto L_0035B2FC; } }
L_0035B234:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B240u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x0035B240u) [[unlikely]] return; }
L_0035B240:
    set32(c.r[4], c.r[19].w[0] + 9u);
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B250u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0035B250u) [[unlikely]] return; }
L_0035B250:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035B274; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035B1F4u | kUnwind; return; } goto L_0035B1F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035B1E4u | kUnwind; return; } goto L_0035B1E4; } }
L_0035B274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035B2FC; } }
L_0035B27C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B288u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x0035B288u) [[unlikely]] return; }
L_0035B288:
    set32(c.r[4], c.r[19].w[0] + 9u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B298u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0035B298u) [[unlikely]] return; }
L_0035B298:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035B2BC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B2B4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x0035B2B4u) [[unlikely]] return; }
L_0035B2B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { goto L_0035B2FC; } }
L_0035B2BC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B2C8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 401u, depth + 1u); else { c.pc = 0x0035B320u; return; } if (c.pc != 0x0035B2C8u) [[unlikely]] return; }
L_0035B2C8:
    set32(c.r[4], c.r[19].w[0] + 9u);
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B2D8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0035B2D8u) [[unlikely]] return; }
L_0035B2D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035B2F8; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035B27Cu | kUnwind; return; } goto L_0035B27C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035B1ECu | kUnwind; return; } goto L_0035B1EC; } }
L_0035B2F8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035B2FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0035B320:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0035B330:
    c.budget -= 2;
    {  goto L_0035B340; }
L_0035B340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B360u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x0035B360u) [[unlikely]] return; }
L_0035B360:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035B380:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0035B3C0; } }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B3A8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x0035B3A8u) [[unlikely]] return; }
L_0035B3A8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0035B3C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B3C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0035B3C0u) [[unlikely]] return; }
L_0035B3C0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0035B3E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[4].w[0] + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B3F4u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0056(c, 189u, depth + 1u); else { c.pc = 0x003592F0u; return; } if (c.pc != 0x0035B3F4u) [[unlikely]] return; }
L_0035B3F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035B410:
    c.budget -= 2;
    {  goto L_0035B420; }
L_0035B420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B440u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x0035B440u) [[unlikely]] return; }
L_0035B440:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035B460:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0035B470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0035B4B0; } }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B498u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x0035B498u) [[unlikely]] return; }
L_0035B498:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0035B4B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B4B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0035B4B0u) [[unlikely]] return; }
L_0035B4B0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0035B4D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[4].w[0] + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B4E4u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0056(c, 417u, depth + 1u); else { c.pc = 0x0035B500u; return; } if (c.pc != 0x0035B4E4u) [[unlikely]] return; }
L_0035B4E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035B500:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B52Cu); set32(c.r[4], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_0056(c, 135u, depth + 1u); else { c.pc = 0x00358D30u; return; } if (c.pc != 0x0035B52Cu) [[unlikely]] return; }
L_0035B52C:
    mmi::divu(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[16].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0035B554; } }
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0035B544:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0035B5DC; } }
L_0035B54C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035B65C; } }
L_0035B554:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B560u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x0035B560u) [[unlikely]] return; }
L_0035B560:
    set32(c.r[4], c.r[19].w[0] + 9u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B570u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0035B570u) [[unlikely]] return; }
L_0035B570:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035B594; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B58Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x0035B58Cu) [[unlikely]] return; }
L_0035B58C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { goto L_0035B65C; } }
L_0035B594:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B5A0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x0035B5A0u) [[unlikely]] return; }
L_0035B5A0:
    set32(c.r[4], c.r[19].w[0] + 9u);
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B5B0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0035B5B0u) [[unlikely]] return; }
L_0035B5B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035B5D4; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035B554u | kUnwind; return; } goto L_0035B554; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035B544u | kUnwind; return; } goto L_0035B544; } }
L_0035B5D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0035B65C; } }
L_0035B5DC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B5E8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x0035B5E8u) [[unlikely]] return; }
L_0035B5E8:
    set32(c.r[4], c.r[19].w[0] + 9u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B5F8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0035B5F8u) [[unlikely]] return; }
L_0035B5F8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035B61C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B614u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x0035B614u) [[unlikely]] return; }
L_0035B614:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { goto L_0035B65C; } }
L_0035B61C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B628u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 433u, depth + 1u); else { c.pc = 0x0035B680u; return; } if (c.pc != 0x0035B628u) [[unlikely]] return; }
L_0035B628:
    set32(c.r[4], c.r[19].w[0] + 9u);
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B638u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 133u, depth + 1u); else { c.pc = 0x00358D10u; return; } if (c.pc != 0x0035B638u) [[unlikely]] return; }
L_0035B638:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035B658; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035B5DCu | kUnwind; return; } goto L_0035B5DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035B54Cu | kUnwind; return; } goto L_0035B54C; } }
L_0035B658:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035B65C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0035B680:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_0035B690:
    c.budget -= 2;
    {  goto L_0035B6A0; }
L_0035B6A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B6C0u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x0035B6C0u) [[unlikely]] return; }
L_0035B6C0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035B6E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B6F4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x0035B6F4u) [[unlikely]] return; }
L_0035B6F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = ld16((c.r[3].w[0] - 29800u));
    c.budget -= 2;
L_0035B6FC:
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0035B728; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0035B728; } }
    set32(c.r[2], c.r[2].w[0] + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035B6FCu | kUnwind; return; } goto L_0035B6FC; } }
    c.budget -= 1;
L_0035B728:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035B750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035B78C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035B78C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B780u);  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x0035B780u) [[unlikely]] return; }
L_0035B780:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0035B790; } }
L_0035B78C:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0035B790:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035B7A0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0023BC80u | kUnwind; return; } [[clang::musttail]] return unit_000E(c, 319u, depth); }
L_0035B7B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035B7DC; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B7D4u); set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035B7D4u) [[unlikely]] return; }
L_0035B7D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0035B7EC; } }
L_0035B7DC:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_0035B7EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035B800:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_0035B810:
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035B824; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[5].w[0])));  if (t) { goto L_0035B828; } }
L_0035B824:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0035B828:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00358890u | kUnwind; return; } goto L_00358890; }
L_0035B830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035B840:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B884u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035B884u) [[unlikely]] return; }
L_0035B884:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B894u); set32(c.r[5], c.r[5].w[0] + 12531u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035B894u) [[unlikely]] return; }
L_0035B894:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035B8B8; } }
    set32(c.r[5], c.r[18].w[0] + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B8A8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035B8A8u) [[unlikely]] return; }
L_0035B8A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 54u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035B8B8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B8C4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035B8C4u) [[unlikely]] return; }
L_0035B8C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B8D4u); set32(c.r[5], c.r[5].w[0] + 12534u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035B8D4u) [[unlikely]] return; }
L_0035B8D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035B8F8; } }
    set32(c.r[5], c.r[18].w[0] + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B8E8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035B8E8u) [[unlikely]] return; }
L_0035B8E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 69u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035B8F8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B904u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035B904u) [[unlikely]] return; }
L_0035B904:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B914u); set32(c.r[5], c.r[5].w[0] + 12538u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035B914u) [[unlikely]] return; }
L_0035B914:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035B938; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B928u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035B928u) [[unlikely]] return; }
L_0035B928:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 101u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035B938:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B944u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035B944u) [[unlikely]] return; }
L_0035B944:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B954u); set32(c.r[5], c.r[5].w[0] + 12542u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035B954u) [[unlikely]] return; }
L_0035B954:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035B978; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B968u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035B968u) [[unlikely]] return; }
L_0035B968:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 108u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035B978:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B984u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035B984u) [[unlikely]] return; }
L_0035B984:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B994u); set32(c.r[5], c.r[5].w[0] + 12546u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035B994u) [[unlikely]] return; }
L_0035B994:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035B9B8; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B9A8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035B9A8u) [[unlikely]] return; }
L_0035B9A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 115u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035B9B8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B9C4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035B9C4u) [[unlikely]] return; }
L_0035B9C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B9D4u); set32(c.r[5], c.r[5].w[0] + 12563u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035B9D4u) [[unlikely]] return; }
L_0035B9D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035B9F8; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035B9E8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035B9E8u) [[unlikely]] return; }
L_0035B9E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 117u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035B9F8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BA04u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035BA04u) [[unlikely]] return; }
L_0035BA04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BA14u); set32(c.r[5], c.r[5].w[0] + 12575u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035BA14u) [[unlikely]] return; }
L_0035BA14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BA38; } }
    set32(c.r[5], c.r[18].w[0] + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BA28u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035BA28u) [[unlikely]] return; }
L_0035BA28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 119u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035BA38:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BA44u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035BA44u) [[unlikely]] return; }
L_0035BA44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BA54u); set32(c.r[5], c.r[5].w[0] + 12580u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035BA54u) [[unlikely]] return; }
L_0035BA54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BA78; } }
    set32(c.r[5], c.r[18].w[0] + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BA68u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035BA68u) [[unlikely]] return; }
L_0035BA68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 123u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035BA78:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BA84u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035BA84u) [[unlikely]] return; }
L_0035BA84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BA94u); set32(c.r[5], c.r[5].w[0] + 12585u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035BA94u) [[unlikely]] return; }
L_0035BA94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BAB8; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BAA8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035BAA8u) [[unlikely]] return; }
L_0035BAA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 127u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035BAB8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BAC4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035BAC4u) [[unlikely]] return; }
L_0035BAC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BAD4u); set32(c.r[5], c.r[5].w[0] + 12597u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035BAD4u) [[unlikely]] return; }
L_0035BAD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BAF8; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BAE8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035BAE8u) [[unlikely]] return; }
L_0035BAE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 129u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035BAF8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BB04u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035BB04u) [[unlikely]] return; }
L_0035BB04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BB14u); set32(c.r[5], c.r[5].w[0] + 12609u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035BB14u) [[unlikely]] return; }
L_0035BB14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BB38; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BB28u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035BB28u) [[unlikely]] return; }
L_0035BB28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 131u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035BB38:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BB44u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035BB44u) [[unlikely]] return; }
L_0035BB44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BB54u); set32(c.r[5], c.r[5].w[0] + 12628u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035BB54u) [[unlikely]] return; }
L_0035BB54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BB78; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BB68u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035BB68u) [[unlikely]] return; }
L_0035BB68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 133u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035BB78:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BB84u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035BB84u) [[unlikely]] return; }
L_0035BB84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BB94u); set32(c.r[5], c.r[5].w[0] + 12642u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035BB94u) [[unlikely]] return; }
L_0035BB94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BBB8; } }
    set32(c.r[5], c.r[18].w[0] + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BBA8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035BBA8u) [[unlikely]] return; }
L_0035BBA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 135u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035BBB8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BBC4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035BBC4u) [[unlikely]] return; }
L_0035BBC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BBD4u); set32(c.r[5], c.r[5].w[0] + 12649u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035BBD4u) [[unlikely]] return; }
L_0035BBD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BBF8; } }
    set32(c.r[5], c.r[18].w[0] + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BBE8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035BBE8u) [[unlikely]] return; }
L_0035BBE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 139u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035BBF8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BC04u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035BC04u) [[unlikely]] return; }
L_0035BC04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BC14u); set32(c.r[5], c.r[5].w[0] + 12656u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035BC14u) [[unlikely]] return; }
L_0035BC14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BC38; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BC28u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035BC28u) [[unlikely]] return; }
L_0035BC28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 143u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035BC38:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BC44u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035BC44u) [[unlikely]] return; }
L_0035BC44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BC54u); set32(c.r[5], c.r[5].w[0] + 12670u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035BC54u) [[unlikely]] return; }
L_0035BC54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BC78; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BC68u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035BC68u) [[unlikely]] return; }
L_0035BC68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 145u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035BC78:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BC84u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035BC84u) [[unlikely]] return; }
L_0035BC84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BC94u); set32(c.r[5], c.r[5].w[0] + 12684u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035BC94u) [[unlikely]] return; }
L_0035BC94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BCB8; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BCA8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035BCA8u) [[unlikely]] return; }
L_0035BCA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 147u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035BCB8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BCC4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035BCC4u) [[unlikely]] return; }
L_0035BCC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BCD4u); set32(c.r[5], c.r[5].w[0] + 12698u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035BCD4u) [[unlikely]] return; }
L_0035BCD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BCF8; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BCE8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035BCE8u) [[unlikely]] return; }
L_0035BCE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 149u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035BCF8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BD04u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035BD04u) [[unlikely]] return; }
L_0035BD04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BD14u); set32(c.r[5], c.r[5].w[0] + 12708u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035BD14u) [[unlikely]] return; }
L_0035BD14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BD38; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BD28u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035BD28u) [[unlikely]] return; }
L_0035BD28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 151u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035BD38:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BD44u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035BD44u) [[unlikely]] return; }
L_0035BD44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BD54u); set32(c.r[5], c.r[5].w[0] + 12722u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035BD54u) [[unlikely]] return; }
L_0035BD54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BD78; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BD68u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035BD68u) [[unlikely]] return; }
L_0035BD68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 153u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035BD78:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BD84u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035BD84u) [[unlikely]] return; }
L_0035BD84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BD94u); set32(c.r[5], c.r[5].w[0] + 12727u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035BD94u) [[unlikely]] return; }
L_0035BD94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BDB8; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BDA8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035BDA8u) [[unlikely]] return; }
L_0035BDA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 162u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035BDB8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BDC4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035BDC4u) [[unlikely]] return; }
L_0035BDC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BDD4u); set32(c.r[5], c.r[5].w[0] + 12732u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035BDD4u) [[unlikely]] return; }
L_0035BDD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BDF8; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BDE8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035BDE8u) [[unlikely]] return; }
L_0035BDE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 171u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035BDF8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BE04u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035BE04u) [[unlikely]] return; }
L_0035BE04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BE14u); set32(c.r[5], c.r[5].w[0] + 12737u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035BE14u) [[unlikely]] return; }
L_0035BE14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BE38; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BE28u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035BE28u) [[unlikely]] return; }
L_0035BE28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 179u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035BE38:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BE44u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035BE44u) [[unlikely]] return; }
L_0035BE44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BE54u); set32(c.r[5], c.r[5].w[0] + 12744u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035BE54u) [[unlikely]] return; }
L_0035BE54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BE78; } }
    set32(c.r[5], c.r[18].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BE68u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035BE68u) [[unlikely]] return; }
L_0035BE68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 187u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035BE78:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BE84u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035BE84u) [[unlikely]] return; }
L_0035BE84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BE94u); set32(c.r[5], c.r[5].w[0] + 12750u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035BE94u) [[unlikely]] return; }
L_0035BE94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BEB8; } }
    set32(c.r[5], c.r[18].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BEA8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035BEA8u) [[unlikely]] return; }
L_0035BEA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 199u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035BEB8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BEC4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035BEC4u) [[unlikely]] return; }
L_0035BEC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BED4u); set32(c.r[5], c.r[5].w[0] + 12763u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035BED4u) [[unlikely]] return; }
L_0035BED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BEF8; } }
    set32(c.r[5], c.r[18].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BEE8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035BEE8u) [[unlikely]] return; }
L_0035BEE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 220u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035BEF8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BF04u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035BF04u) [[unlikely]] return; }
L_0035BF04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BF14u); set32(c.r[5], c.r[5].w[0] + 12771u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035BF14u) [[unlikely]] return; }
L_0035BF14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BF38; } }
    set32(c.r[5], c.r[18].w[0] + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BF28u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035BF28u) [[unlikely]] return; }
L_0035BF28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 241u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035BF38:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BF44u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035BF44u) [[unlikely]] return; }
L_0035BF44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BF54u); set32(c.r[5], c.r[5].w[0] + 12781u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035BF54u) [[unlikely]] return; }
L_0035BF54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BF78; } }
    set32(c.r[5], c.r[18].w[0] + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BF68u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035BF68u) [[unlikely]] return; }
L_0035BF68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 256u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035BF78:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BF84u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035BF84u) [[unlikely]] return; }
L_0035BF84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BF94u); set32(c.r[5], c.r[5].w[0] + 12798u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035BF94u) [[unlikely]] return; }
L_0035BF94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BFB8; } }
    set32(c.r[5], c.r[18].w[0] + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BFA8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035BFA8u) [[unlikely]] return; }
L_0035BFA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 271u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035BFB8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BFC4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035BFC4u) [[unlikely]] return; }
L_0035BFC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BFD4u); set32(c.r[5], c.r[5].w[0] + 12805u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0035BFD4u) [[unlikely]] return; }
L_0035BFD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035BFF8; } }
    set32(c.r[5], c.r[18].w[0] + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035BFE8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 50u, depth + 1u); else { c.pc = 0x00370410u; return; } if (c.pc != 0x0035BFE8u) [[unlikely]] return; }
L_0035BFE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 286u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0057(c, 389u, depth); } }
L_0035BFF8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C004u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x0035C004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0057(c, 2u, depth);
}

}

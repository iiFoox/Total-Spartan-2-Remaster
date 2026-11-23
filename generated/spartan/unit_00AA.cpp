#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AA[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0,
    0, 19, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0,
    43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0,
    0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0,
    0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 75, 0,
    0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0,
    0, 90, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0,
    98, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0,
    0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0,
    0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136,
    0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144,
    0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168,
    0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0,
    0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0,
    0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 192, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217,
    0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221,
    0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227,
    0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0,
    0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 246, 0, 247, 0, 0, 0, 0, 0, 248, 0, 249, 0, 250, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0,
    0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0,
    270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 274, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0,
    286, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0,
    0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305,
    0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0,
    0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0,
    0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 326, 0,
    0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0,
    339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0,
    0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0,
    0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0,
    0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0,
    0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0,
    395, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0,
    403, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 414,
    0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0,
    0, 0, 0, 422, 0, 423, 0, 0, 424, 0, 425, 0, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0,
    429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0,
    431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0,
    441, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0,
    0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0,
    458, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 463,
    0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0,
    0, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0,
    0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0,
    476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0,
    0, 0, 0, 479, 0, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0,
    484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 493, 0,
    0, 0, 0, 0, 494, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 504, 505, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 507,
};

void unit_00AA(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004A8000;
    case 2u: goto L_004A8004;
    case 3u: goto L_004A8020;
    case 4u: goto L_004A8044;
    case 5u: goto L_004A8050;
    case 6u: goto L_004A8070;
    case 7u: goto L_004A8084;
    case 8u: goto L_004A8098;
    case 9u: goto L_004A80AC;
    case 10u: goto L_004A80C4;
    case 11u: goto L_004A80CC;
    case 12u: goto L_004A80D4;
    case 13u: goto L_004A80F0;
    case 14u: goto L_004A8104;
    case 15u: goto L_004A8114;
    case 16u: goto L_004A81A0;
    case 17u: goto L_004A8248;
    case 18u: goto L_004A8264;
    case 19u: goto L_004A8284;
    case 20u: goto L_004A8290;
    case 21u: goto L_004A82A0;
    case 22u: goto L_004A82C0;
    case 23u: goto L_004A82CC;
    case 24u: goto L_004A8300;
    case 25u: goto L_004A8310;
    case 26u: goto L_004A8328;
    case 27u: goto L_004A8344;
    case 28u: goto L_004A8350;
    case 29u: goto L_004A838C;
    case 30u: goto L_004A83A0;
    case 31u: goto L_004A83B8;
    case 32u: goto L_004A83D4;
    case 33u: goto L_004A83E0;
    case 34u: goto L_004A841C;
    case 35u: goto L_004A8430;
    case 36u: goto L_004A8448;
    case 37u: goto L_004A8464;
    case 38u: goto L_004A8470;
    case 39u: goto L_004A84AC;
    case 40u: goto L_004A84C0;
    case 41u: goto L_004A84D8;
    case 42u: goto L_004A84F4;
    case 43u: goto L_004A8500;
    case 44u: goto L_004A853C;
    case 45u: goto L_004A8550;
    case 46u: goto L_004A8564;
    case 47u: goto L_004A8578;
    case 48u: goto L_004A858C;
    case 49u: goto L_004A85A0;
    case 50u: goto L_004A85B0;
    case 51u: goto L_004A85E0;
    case 52u: goto L_004A8610;
    case 53u: goto L_004A8638;
    case 54u: goto L_004A8644;
    case 55u: goto L_004A8690;
    case 56u: goto L_004A86C8;
    case 57u: goto L_004A86E0;
    case 58u: goto L_004A86F8;
    case 59u: goto L_004A8708;
    case 60u: goto L_004A874C;
    case 61u: goto L_004A8770;
    case 62u: goto L_004A87A0;
    case 63u: goto L_004A87CC;
    case 64u: goto L_004A87E8;
    case 65u: goto L_004A8810;
    case 66u: goto L_004A8860;
    case 67u: goto L_004A8870;
    case 68u: goto L_004A88A4;
    case 69u: goto L_004A88B4;
    case 70u: goto L_004A88CC;
    case 71u: goto L_004A88D8;
    case 72u: goto L_004A8930;
    case 73u: goto L_004A8958;
    case 74u: goto L_004A8960;
    case 75u: goto L_004A8978;
    case 76u: goto L_004A8988;
    case 77u: goto L_004A89A0;
    case 78u: goto L_004A89A8;
    case 79u: goto L_004A89C0;
    case 80u: goto L_004A89D4;
    case 81u: goto L_004A89E0;
    case 82u: goto L_004A89E8;
    case 83u: goto L_004A8A10;
    case 84u: goto L_004A8A48;
    case 85u: goto L_004A8A5C;
    case 86u: goto L_004A8AA4;
    case 87u: goto L_004A8AD0;
    case 88u: goto L_004A8B60;
    case 89u: goto L_004A8B70;
    case 90u: goto L_004A8B84;
    case 91u: goto L_004A8B90;
    case 92u: goto L_004A8BA0;
    case 93u: goto L_004A8BB0;
    case 94u: goto L_004A8BC4;
    case 95u: goto L_004A8BCC;
    case 96u: goto L_004A8BDC;
    case 97u: goto L_004A8BF0;
    case 98u: goto L_004A8C00;
    case 99u: goto L_004A8C14;
    case 100u: goto L_004A8C1C;
    case 101u: goto L_004A8C2C;
    case 102u: goto L_004A8C40;
    case 103u: goto L_004A8C50;
    case 104u: goto L_004A8C60;
    case 105u: goto L_004A8C8C;
    case 106u: goto L_004A8CA0;
    case 107u: goto L_004A8CCC;
    case 108u: goto L_004A8CF0;
    case 109u: goto L_004A8D04;
    case 110u: goto L_004A8D14;
    case 111u: goto L_004A8D24;
    case 112u: goto L_004A8D40;
    case 113u: goto L_004A8D50;
    case 114u: goto L_004A8D64;
    case 115u: goto L_004A8D74;
    case 116u: goto L_004A8D84;
    case 117u: goto L_004A8DA0;
    case 118u: goto L_004A8DC8;
    case 119u: goto L_004A8DE8;
    case 120u: goto L_004A8E14;
    case 121u: goto L_004A8E24;
    case 122u: goto L_004A8E38;
    case 123u: goto L_004A8E60;
    case 124u: goto L_004A8E6C;
    case 125u: goto L_004A8E84;
    case 126u: goto L_004A8EA8;
    case 127u: goto L_004A8ED0;
    case 128u: goto L_004A8EF8;
    case 129u: goto L_004A8F18;
    case 130u: goto L_004A8F44;
    case 131u: goto L_004A8F54;
    case 132u: goto L_004A8F68;
    case 133u: goto L_004A8FA4;
    case 134u: goto L_004A8FBC;
    case 135u: goto L_004A8FD4;
    case 136u: goto L_004A8FFC;
    case 137u: goto L_004A9020;
    case 138u: goto L_004A9068;
    case 139u: goto L_004A90A0;
    case 140u: goto L_004A90EC;
    case 141u: goto L_004A9120;
    case 142u: goto L_004A915C;
    case 143u: goto L_004A916C;
    case 144u: goto L_004A917C;
    case 145u: goto L_004A9198;
    case 146u: goto L_004A91D0;
    case 147u: goto L_004A91E4;
    case 148u: goto L_004A91F0;
    case 149u: goto L_004A922C;
    case 150u: goto L_004A9270;
    case 151u: goto L_004A92A4;
    case 152u: goto L_004A92B0;
    case 153u: goto L_004A92BC;
    case 154u: goto L_004A92C4;
    case 155u: goto L_004A9308;
    case 156u: goto L_004A9318;
    case 157u: goto L_004A9328;
    case 158u: goto L_004A9338;
    case 159u: goto L_004A9348;
    case 160u: goto L_004A9370;
    case 161u: goto L_004A9410;
    case 162u: goto L_004A9434;
    case 163u: goto L_004A9450;
    case 164u: goto L_004A9470;
    case 165u: goto L_004A9498;
    case 166u: goto L_004A94B0;
    case 167u: goto L_004A94E0;
    case 168u: goto L_004A94FC;
    case 169u: goto L_004A9510;
    case 170u: goto L_004A951C;
    case 171u: goto L_004A9530;
    case 172u: goto L_004A9550;
    case 173u: goto L_004A9570;
    case 174u: goto L_004A9584;
    case 175u: goto L_004A9598;
    case 176u: goto L_004A95C0;
    case 177u: goto L_004A95E0;
    case 178u: goto L_004A95F4;
    case 179u: goto L_004A960C;
    case 180u: goto L_004A9630;
    case 181u: goto L_004A9644;
    case 182u: goto L_004A9678;
    case 183u: goto L_004A9684;
    case 184u: goto L_004A968C;
    case 185u: goto L_004A96B0;
    case 186u: goto L_004A96D0;
    case 187u: goto L_004A96F0;
    case 188u: goto L_004A9704;
    case 189u: goto L_004A9718;
    case 190u: goto L_004A9740;
    case 191u: goto L_004A9754;
    case 192u: goto L_004A9788;
    case 193u: goto L_004A9794;
    case 194u: goto L_004A979C;
    case 195u: goto L_004A97C0;
    case 196u: goto L_004A97E0;
    case 197u: goto L_004A9800;
    case 198u: goto L_004A9810;
    case 199u: goto L_004A9824;
    case 200u: goto L_004A9834;
    case 201u: goto L_004A9844;
    case 202u: goto L_004A9860;
    case 203u: goto L_004A9880;
    case 204u: goto L_004A9894;
    case 205u: goto L_004A98A8;
    case 206u: goto L_004A98D0;
    case 207u: goto L_004A98E4;
    case 208u: goto L_004A9918;
    case 209u: goto L_004A9924;
    case 210u: goto L_004A992C;
    case 211u: goto L_004A9950;
    case 212u: goto L_004A9970;
    case 213u: goto L_004A9998;
    case 214u: goto L_004A99B0;
    case 215u: goto L_004A99C0;
    case 216u: goto L_004A99F4;
    case 217u: goto L_004A99FC;
    case 218u: goto L_004A9A14;
    case 219u: goto L_004A9A50;
    case 220u: goto L_004A9A58;
    case 221u: goto L_004A9A7C;
    case 222u: goto L_004A9A98;
    case 223u: goto L_004A9AA8;
    case 224u: goto L_004A9ABC;
    case 225u: goto L_004A9B34;
    case 226u: goto L_004A9B70;
    case 227u: goto L_004A9B7C;
    case 228u: goto L_004A9BA0;
    case 229u: goto L_004A9BF0;
    case 230u: goto L_004A9BF8;
    case 231u: goto L_004A9C18;
    case 232u: goto L_004A9C2C;
    case 233u: goto L_004A9C60;
    case 234u: goto L_004A9C80;
    case 235u: goto L_004A9D00;
    case 236u: goto L_004A9D54;
    case 237u: goto L_004A9D70;
    case 238u: goto L_004A9DA8;
    case 239u: goto L_004A9DB8;
    case 240u: goto L_004A9DF0;
    case 241u: goto L_004A9E08;
    case 242u: goto L_004A9E68;
    case 243u: goto L_004A9EC8;
    case 244u: goto L_004A9ED4;
    case 245u: goto L_004A9F00;
    case 246u: goto L_004A9F08;
    case 247u: goto L_004A9F10;
    case 248u: goto L_004A9F28;
    case 249u: goto L_004A9F30;
    case 250u: goto L_004A9F38;
    case 251u: goto L_004A9F4C;
    case 252u: goto L_004A9F58;
    case 253u: goto L_004A9FB0;
    case 254u: goto L_004A9FC4;
    case 255u: goto L_004A9FF0;
    case 256u: goto L_004A9FF8;
    case 257u: goto L_004AA038;
    case 258u: goto L_004AA054;
    case 259u: goto L_004AA070;
    case 260u: goto L_004AA0B8;
    case 261u: goto L_004AA0D0;
    case 262u: goto L_004AA0D8;
    case 263u: goto L_004AA0E8;
    case 264u: goto L_004AA0F8;
    case 265u: goto L_004AA104;
    case 266u: goto L_004AA110;
    case 267u: goto L_004AA138;
    case 268u: goto L_004AA144;
    case 269u: goto L_004AA15C;
    case 270u: goto L_004AA180;
    case 271u: goto L_004AA1A8;
    case 272u: goto L_004AA21C;
    case 273u: goto L_004AA244;
    case 274u: goto L_004AA284;
    case 275u: goto L_004AA298;
    case 276u: goto L_004AA2A4;
    case 277u: goto L_004AA2E0;
    case 278u: goto L_004AA2F4;
    case 279u: goto L_004AA320;
    case 280u: goto L_004AA32C;
    case 281u: goto L_004AA348;
    case 282u: goto L_004AA390;
    case 283u: goto L_004AA3D0;
    case 284u: goto L_004AA3E0;
    case 285u: goto L_004AA3F0;
    case 286u: goto L_004AA400;
    case 287u: goto L_004AA410;
    case 288u: goto L_004AA420;
    case 289u: goto L_004AA490;
    case 290u: goto L_004AA4A4;
    case 291u: goto L_004AA4D0;
    case 292u: goto L_004AA500;
    case 293u: goto L_004AA54C;
    case 294u: goto L_004AA594;
    case 295u: goto L_004AA5B0;
    case 296u: goto L_004AA5C0;
    case 297u: goto L_004AA5E0;
    case 298u: goto L_004AA604;
    case 299u: goto L_004AA628;
    case 300u: goto L_004AA638;
    case 301u: goto L_004AA650;
    case 302u: goto L_004AA660;
    case 303u: goto L_004AA6A0;
    case 304u: goto L_004AA6D0;
    case 305u: goto L_004AA6FC;
    case 306u: goto L_004AA714;
    case 307u: goto L_004AA724;
    case 308u: goto L_004AA740;
    case 309u: goto L_004AA754;
    case 310u: goto L_004AA780;
    case 311u: goto L_004AA790;
    case 312u: goto L_004AA7BC;
    case 313u: goto L_004AA7E0;
    case 314u: goto L_004AA7F0;
    case 315u: goto L_004AA808;
    case 316u: goto L_004AA818;
    case 317u: goto L_004AA83C;
    case 318u: goto L_004AA850;
    case 319u: goto L_004AA8C8;
    case 320u: goto L_004AA8E0;
    case 321u: goto L_004AA8F0;
    case 322u: goto L_004AA910;
    case 323u: goto L_004AA920;
    case 324u: goto L_004AA95C;
    case 325u: goto L_004AA970;
    case 326u: goto L_004AA978;
    case 327u: goto L_004AA990;
    case 328u: goto L_004AA9AC;
    case 329u: goto L_004AA9DC;
    case 330u: goto L_004AAA0C;
    case 331u: goto L_004AAA38;
    case 332u: goto L_004AAA50;
    case 333u: goto L_004AAA8C;
    case 334u: goto L_004AAAB0;
    case 335u: goto L_004AAAC4;
    case 336u: goto L_004AAB14;
    case 337u: goto L_004AAB30;
    case 338u: goto L_004AAB6C;
    case 339u: goto L_004AAB80;
    case 340u: goto L_004AABA4;
    case 341u: goto L_004AABB4;
    case 342u: goto L_004AABCC;
    case 343u: goto L_004AABDC;
    case 344u: goto L_004AABF4;
    case 345u: goto L_004AAC04;
    case 346u: goto L_004AAC20;
    case 347u: goto L_004AAC34;
    case 348u: goto L_004AAC84;
    case 349u: goto L_004AAC94;
    case 350u: goto L_004AACB8;
    case 351u: goto L_004AACC8;
    case 352u: goto L_004AACE0;
    case 353u: goto L_004AACF0;
    case 354u: goto L_004AAD08;
    case 355u: goto L_004AAD18;
    case 356u: goto L_004AAD30;
    case 357u: goto L_004AAD80;
    case 358u: goto L_004AAD9C;
    case 359u: goto L_004AADB0;
    case 360u: goto L_004AADC0;
    case 361u: goto L_004AADD4;
    case 362u: goto L_004AADEC;
    case 363u: goto L_004AAE0C;
    case 364u: goto L_004AAE20;
    case 365u: goto L_004AAE38;
    case 366u: goto L_004AAE50;
    case 367u: goto L_004AAE70;
    case 368u: goto L_004AAEAC;
    case 369u: goto L_004AAED0;
    case 370u: goto L_004AAEF0;
    case 371u: goto L_004AAF14;
    case 372u: goto L_004AAF24;
    case 373u: goto L_004AAF3C;
    case 374u: goto L_004AAF4C;
    case 375u: goto L_004AAF74;
    case 376u: goto L_004AAFC0;
    case 377u: goto L_004AB010;
    case 378u: goto L_004AB028;
    case 379u: goto L_004AB044;
    case 380u: goto L_004AB054;
    case 381u: goto L_004AB070;
    case 382u: goto L_004AB0B4;
    case 383u: goto L_004AB0C0;
    case 384u: goto L_004AB114;
    case 385u: goto L_004AB198;
    case 386u: goto L_004AB1B0;
    case 387u: goto L_004AB218;
    case 388u: goto L_004AB240;
    case 389u: goto L_004AB260;
    case 390u: goto L_004AB2C4;
    case 391u: goto L_004AB30C;
    case 392u: goto L_004AB330;
    case 393u: goto L_004AB3E0;
    case 394u: goto L_004AB3F0;
    case 395u: goto L_004AB400;
    case 396u: goto L_004AB410;
    case 397u: goto L_004AB420;
    case 398u: goto L_004AB430;
    case 399u: goto L_004AB440;
    case 400u: goto L_004AB450;
    case 401u: goto L_004AB460;
    case 402u: goto L_004AB470;
    case 403u: goto L_004AB480;
    case 404u: goto L_004AB490;
    case 405u: goto L_004AB4A0;
    case 406u: goto L_004AB4B0;
    case 407u: goto L_004AB4C0;
    case 408u: goto L_004AB51C;
    case 409u: goto L_004AB530;
    case 410u: goto L_004AB538;
    case 411u: goto L_004AB544;
    case 412u: goto L_004AB560;
    case 413u: goto L_004AB568;
    case 414u: goto L_004AB57C;
    case 415u: goto L_004AB5A0;
    case 416u: goto L_004AB5B4;
    case 417u: goto L_004AB62C;
    case 418u: goto L_004AB648;
    case 419u: goto L_004AB650;
    case 420u: goto L_004AB65C;
    case 421u: goto L_004AB678;
    case 422u: goto L_004AB68C;
    case 423u: goto L_004AB694;
    case 424u: goto L_004AB6A0;
    case 425u: goto L_004AB6A8;
    case 426u: goto L_004AB6BC;
    case 427u: goto L_004AB6C8;
    case 428u: goto L_004AB6EC;
    case 429u: goto L_004AB700;
    case 430u: goto L_004AB778;
    case 431u: goto L_004AB780;
    case 432u: goto L_004AB794;
    case 433u: goto L_004AB7B0;
    case 434u: goto L_004AB7C8;
    case 435u: goto L_004AB7E0;
    case 436u: goto L_004AB7F8;
    case 437u: goto L_004AB820;
    case 438u: goto L_004AB840;
    case 439u: goto L_004AB85C;
    case 440u: goto L_004AB870;
    case 441u: goto L_004AB880;
    case 442u: goto L_004AB890;
    case 443u: goto L_004AB8A0;
    case 444u: goto L_004AB8B4;
    case 445u: goto L_004AB8BC;
    case 446u: goto L_004AB8D0;
    case 447u: goto L_004AB8E0;
    case 448u: goto L_004AB8F8;
    case 449u: goto L_004AB910;
    case 450u: goto L_004AB920;
    case 451u: goto L_004AB940;
    case 452u: goto L_004AB9A4;
    case 453u: goto L_004AB9C0;
    case 454u: goto L_004ABA14;
    case 455u: goto L_004ABA24;
    case 456u: goto L_004ABA40;
    case 457u: goto L_004ABA6C;
    case 458u: goto L_004ABA80;
    case 459u: goto L_004ABA90;
    case 460u: goto L_004ABAA0;
    case 461u: goto L_004ABAB8;
    case 462u: goto L_004ABAF0;
    case 463u: goto L_004ABAFC;
    case 464u: goto L_004ABB20;
    case 465u: goto L_004ABB3C;
    case 466u: goto L_004ABB6C;
    case 467u: goto L_004ABB90;
    case 468u: goto L_004ABBA4;
    case 469u: goto L_004ABBBC;
    case 470u: goto L_004ABBE8;
    case 471u: goto L_004ABBF8;
    case 472u: goto L_004ABC10;
    case 473u: goto L_004ABC30;
    case 474u: goto L_004ABC4C;
    case 475u: goto L_004ABC64;
    case 476u: goto L_004ABC80;
    case 477u: goto L_004ABCBC;
    case 478u: goto L_004ABCF4;
    case 479u: goto L_004ABD0C;
    case 480u: goto L_004ABD18;
    case 481u: goto L_004ABD30;
    case 482u: goto L_004ABD40;
    case 483u: goto L_004ABD70;
    case 484u: goto L_004ABD80;
    case 485u: goto L_004ABD94;
    case 486u: goto L_004ABDA8;
    case 487u: goto L_004ABDC0;
    case 488u: goto L_004ABDD0;
    case 489u: goto L_004ABE04;
    case 490u: goto L_004ABE1C;
    case 491u: goto L_004ABE34;
    case 492u: goto L_004ABE60;
    case 493u: goto L_004ABE78;
    case 494u: goto L_004ABE90;
    case 495u: goto L_004ABE9C;
    case 496u: goto L_004ABEB0;
    case 497u: goto L_004ABF20;
    case 498u: goto L_004ABF30;
    case 499u: goto L_004ABF40;
    case 500u: goto L_004ABF54;
    case 501u: goto L_004ABF80;
    case 502u: goto L_004ABFAC;
    case 503u: goto L_004ABFC0;
    case 504u: goto L_004ABFCC;
    case 505u: goto L_004ABFD0;
    case 506u: goto L_004ABFD8;
    case 507u: goto L_004ABFFC;
    default: bad_entry(c, 0x004A8000u); return;
    }
L_004A8000:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004A8004:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004A8010; } }
    set32(c.r[18], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_004A8010:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8020u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004A8020u) [[unlikely]] return; }
L_004A8020:
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 23936u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8044u); c.r[9].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 228u, depth + 1u); else { c.pc = 0x00343BA0u; return; } if (c.pc != 0x004A8044u) [[unlikely]] return; }
L_004A8044:
    st32((c.r[17].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 120u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_004A8050:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[17].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8070u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004A8070u) [[unlikely]] return; }
L_004A8070:
    st32((c.r[17].w[0] + 136u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8084u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004A8084u) [[unlikely]] return; }
L_004A8084:
    st32((c.r[17].w[0] + 140u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8098u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004A8098u) [[unlikely]] return; }
L_004A8098:
    st32((c.r[17].w[0] + 144u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A80ACu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004A80ACu) [[unlikely]] return; }
L_004A80AC:
    st32((c.r[17].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[17].w[0] + 152u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004A80DC; } }
L_004A80C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_004A8178; } }
L_004A80CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 112u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A7FD4u | kUnwind; return; } [[clang::musttail]] return unit_00A9(c, 370u, depth); } }
L_004A80D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 120u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8050u | kUnwind; return; } goto L_004A8050; } }
L_004A80DC:
    set32(c.r[5], ld32((c.r[17].w[0] + 132u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[17].w[0] + 160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A80F0u); set32(c.r[6], c.r[6].w[0] - 27807u);  if (depth < kMaxDepth) unit_0011(c, 366u, depth + 1u); else { c.pc = 0x002478A0u; return; } if (c.pc != 0x004A80F0u) [[unlikely]] return; }
L_004A80F0:
    set32(c.r[5], ld32((c.r[17].w[0] + 132u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[17].w[0] + 168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8104u); set32(c.r[6], c.r[6].w[0] - 27775u);  if (depth < kMaxDepth) unit_0011(c, 366u, depth + 1u); else { c.pc = 0x002478A0u; return; } if (c.pc != 0x004A8104u) [[unlikely]] return; }
L_004A8104:
    set32(c.r[3], ld32((c.r[17].w[0] + 132u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004A8174; } }
L_004A8114:
    set32(c.r[5], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 168u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 29280u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 160u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 132u)));
    c.r[3].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8114u | kUnwind; return; } goto L_004A8114; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A80C4u | kUnwind; return; } goto L_004A80C4; } }
L_004A8174:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_004A8178:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004A81A0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[10], ld32((c.r[5].w[0] + 20u)));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[18].w[0] + 32u) & ~15u, c.r[3]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    set32(c.r[9], ld32((c.r[5].w[0] + 24u)));
    st32((c.r[4].w[0] + 52u), c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 40u)));
    st32((c.r[4].w[0] + 56u), c.r[9].w[0]);
    set32(c.r[10], ld32((c.r[5].w[0] + 44u)));
    st32((c.r[4].w[0] + 60u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[9], ld32((c.r[5].w[0] + 48u)));
    st32((c.r[4].w[0] + 76u), c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0] + 52u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 60u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 64u));
    st32((c.r[4].w[0] + 80u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 92u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 65u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 66u)));
    st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 40;
    { const bool t = c.r[17].d[0] == 0ull; st8((c.r[4].w[0] + 98u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004A82E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8248u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x004A8248u) [[unlikely]] return; }
L_004A8248:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(100ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004A82E8; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8264u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x004A8264u) [[unlikely]] return; }
L_004A8264:
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_004A82B0; } }
    set32(c.r[7], c.r[29].w[0] + 64u);
    set32(c.r[3], 0u + 40u);
    set32(c.r[5], 0u + 93u);
    set32(c.r[2], 0u + 41u);
    set32(c.r[6], 0u + 91u);
    c.budget -= 5;
L_004A8284:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_004A82D4; } }
L_004A8290:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_004A82E0; } }
    c.budget -= 1;
L_004A82A0:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[4].d[0] = c.r[8].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8284u | kUnwind; return; } goto L_004A8284; } }
L_004A82B0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A82C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x004A82C0u) [[unlikely]] return; }
L_004A82C0:
    set32(c.r[4], c.r[18].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A82CCu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0075(c, 183u, depth + 1u); else { c.pc = 0x003D7090u; return; } if (c.pc != 0x004A82CCu) [[unlikely]] return; }
L_004A82CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A82E8; } }
L_004A82D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8290u | kUnwind; return; } goto L_004A8290; } }
    c.budget -= 1;
L_004A82E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A82A0u | kUnwind; return; } goto L_004A82A0; } }
L_004A82E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004A8300:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004A7C40u | kUnwind; return; } [[clang::musttail]] return unit_00A9(c, 349u, depth); }
L_004A8310:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8328u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004A8328u) [[unlikely]] return; }
L_004A8328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A8370; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 47u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004A838C; } }
    st32((c.r[28].w[0] - 28308u), c.r[16].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004A8344:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8350u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 55u, depth + 1u); else { c.pc = 0x004A8690u; return; } if (c.pc != 0x004A8350u) [[unlikely]] return; }
L_004A8350:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8344u | kUnwind; return; } goto L_004A8344; } }
    st32((c.r[28].w[0] - 28396u), c.r[16].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004A838C; } }
L_004A8370:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 47u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A838C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A838Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A838Cu) [[unlikely]] return; }
L_004A838C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A83A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A83B8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004A83B8u) [[unlikely]] return; }
L_004A83B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A8400; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 47u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004A841C; } }
    st32((c.r[28].w[0] - 28308u), c.r[16].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004A83D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A83E0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 55u, depth + 1u); else { c.pc = 0x004A8690u; return; } if (c.pc != 0x004A83E0u) [[unlikely]] return; }
L_004A83E0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A83D4u | kUnwind; return; } goto L_004A83D4; } }
    st32((c.r[28].w[0] - 28396u), c.r[16].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004A841C; } }
L_004A8400:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 47u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A841C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A841Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A841Cu) [[unlikely]] return; }
L_004A841C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A8430:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8448u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004A8448u) [[unlikely]] return; }
L_004A8448:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A8490; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 47u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004A84AC; } }
    st32((c.r[28].w[0] - 28308u), c.r[16].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004A8464:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8470u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 55u, depth + 1u); else { c.pc = 0x004A8690u; return; } if (c.pc != 0x004A8470u) [[unlikely]] return; }
L_004A8470:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8464u | kUnwind; return; } goto L_004A8464; } }
    st32((c.r[28].w[0] - 28396u), c.r[16].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004A84AC; } }
L_004A8490:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 47u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A84AC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A84ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A84ACu) [[unlikely]] return; }
L_004A84AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A84C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A84D8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004A84D8u) [[unlikely]] return; }
L_004A84D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A8520; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 47u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004A853C; } }
    st32((c.r[28].w[0] - 28308u), c.r[16].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004A84F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8500u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 55u, depth + 1u); else { c.pc = 0x004A8690u; return; } if (c.pc != 0x004A8500u) [[unlikely]] return; }
L_004A8500:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A84F4u | kUnwind; return; } goto L_004A84F4; } }
    st32((c.r[28].w[0] - 28396u), c.r[16].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 47u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004A853C; } }
L_004A8520:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 47u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A853C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A853Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A853Cu) [[unlikely]] return; }
L_004A853C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A8550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8564u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004A8564u) [[unlikely]] return; }
L_004A8564:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A8580; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8578u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A8578u) [[unlikely]] return; }
L_004A8578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004A8590; } }
L_004A8580:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A858Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A858Cu) [[unlikely]] return; }
L_004A858C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004A8590:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A85A0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x004A8000u < 16384u) { entry = entries_00AA[(t - 0x004A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004A85B0:
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 255u);
    st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 37u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 46u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 39u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 47u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004A85F4; } }
L_004A85E0:
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 47u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 40u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004A8600; } }
L_004A85F4:
    st32((c.r[28].w[0] - 28396u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28308u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A85E0u | kUnwind; return; } goto L_004A85E0; } }
L_004A8600:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A8610:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 10;
L_004A8638:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8644u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x004A8644u) [[unlikely]] return; }
L_004A8644:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A8658; } }
    set32(c.r[2], c.r[17].w[0] + c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 36u));  if (t) { goto L_004A866C; } }
L_004A8658:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8638u | kUnwind; return; } goto L_004A8638; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_004A866C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004A8690:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 41u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A8768; } }
    c.r[17].d[0] = ld8((c.r[19].w[0] + 42u));
    c.r[1].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004A86F8; } }
L_004A86C8:
    c.r[16].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004A8700; } }
L_004A86E0:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A86C8u | kUnwind; return; } goto L_004A86C8; } }
    c.budget -= 1;
L_004A86F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_004A877C; } }
L_004A8700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8708u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x004A8708u) [[unlikely]] return; }
L_004A8708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A86E0u | kUnwind; return; } goto L_004A86E0; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[18].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - 11888u);
    c.r[6].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] - 30608u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A874Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001E(c, 10u, depth + 1u); else { c.pc = 0x00278080u; return; } if (c.pc != 0x004A874Cu) [[unlikely]] return; }
L_004A874C:
    set32(c.r[4], c.r[16].w[0] + c.r[19].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[17].w[0] + 1u);
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[19].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[18].w[0]));  if (t) { goto L_004A8778; } }
L_004A8768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8770u); st32((c.r[28].w[0] - 28396u), 0u);  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x004A8770u) [[unlikely]] return; }
L_004A8770:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A86F8u | kUnwind; return; } goto L_004A86F8; } }
L_004A8778:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004A877C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004A87A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 11;
L_004A87CC:
    c.r[16].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004A8808; } }
    c.budget -= 1;
L_004A87E8:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A87CCu | kUnwind; return; } goto L_004A87CC; } }
    c.r[2].d[0] = c.r[19].d[0] ^ c.r[18].d[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_004A8838; } }
L_004A8808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8810u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x004A8810u) [[unlikely]] return; }
L_004A8810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A87E8u | kUnwind; return; } goto L_004A87E8; } }
    set32(c.r[2], c.r[20].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 43u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A87E8u | kUnwind; return; } goto L_004A87E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A87E8u | kUnwind; return; } goto L_004A87E8; } }
    c.budget -= 1;
L_004A8838:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004A8860:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 28308u)));  c.pc = t; return; }
L_004A8870:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[7].w[0] + 40u));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004A88B4; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 41u));
    c.budget -= 1;
L_004A88A4:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004A8908; } }
L_004A88B4:
    c.r[19].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A88CCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x004A88CCu) [[unlikely]] return; }
L_004A88CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A88F8; } }
    c.budget -= 1;
L_004A88D8:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[17].w[0] + 40u));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A88B4u | kUnwind; return; } goto L_004A88B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 41u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A88A4u | kUnwind; return; } goto L_004A88A4; } }
L_004A88F8:
    set32(c.r[2], c.r[17].w[0] + c.r[19].w[0]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 43u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A88D8u | kUnwind; return; } goto L_004A88D8; } }
L_004A8908:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004A8930:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8958u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x004A8958u) [[unlikely]] return; }
L_004A8958:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A8968; } }
L_004A8960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 47u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004A89F4; } }
L_004A8968:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8978u); set32(c.r[6], 0u + 200u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x004A8978u) [[unlikely]] return; }
L_004A8978:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 40u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8988u); st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0086(c, 116u, depth + 1u); else { c.pc = 0x00419BE0u; return; } if (c.pc != 0x004A8988u) [[unlikely]] return; }
L_004A8988:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A89A0u); set32(c.r[5], c.r[5].w[0] - 27472u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x004A89A0u) [[unlikely]] return; }
L_004A89A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A89A8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x004A89A8u) [[unlikely]] return; }
L_004A89A8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[18].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A89C0u); set32(c.r[17], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_0002(c, 154u, depth + 1u); else { c.pc = 0x0020AF90u; return; } if (c.pc != 0x004A89C0u) [[unlikely]] return; }
L_004A89C0:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[18].w[0] + 1u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A89D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x004A89D4u) [[unlikely]] return; }
L_004A89D4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A89E0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x004A89E0u) [[unlikely]] return; }
L_004A89E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A89E8u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_001E(c, 31u, depth + 1u); else { c.pc = 0x002783D0u; return; } if (c.pc != 0x004A89E8u) [[unlikely]] return; }
L_004A89E8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8960u | kUnwind; return; } goto L_004A8960; } }
L_004A89F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_004A8A10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A8AA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 24864u);
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_004A8A48:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A8A60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8A5Cu);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x004A8A5Cu) [[unlikely]] return; }
L_004A8A5C:
    st32((c.r[18].w[0] + 20u), 0u);
    c.budget -= 1;
L_004A8A60:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8A48u | kUnwind; return; } goto L_004A8A48; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004A8A8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_004A8A8C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004A8AA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8AA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004A8AA4u) [[unlikely]] return; }
L_004A8AA4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004A8AD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    set32(c.r[7], 0u - 2u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], 0u - 3u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + 24864u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 24u), 0u);
    st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 28u), 0u);
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 32u), 0u);
    st8((c.r[4].w[0] + 46u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(0u));
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 47u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_004A8B60:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BABE0u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 213u, depth); }
L_004A8B70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8B84u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 212u, depth + 1u); else { c.pc = 0x002BABD0u; return; } if (c.pc != 0x004A8B84u) [[unlikely]] return; }
L_004A8B84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8B90u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A8B90u) [[unlikely]] return; }
L_004A8B90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A8BA0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAAF0u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 202u, depth); }
L_004A8BB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8BC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004A8BC4u) [[unlikely]] return; }
L_004A8BC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A8BD4; } }
L_004A8BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004A8BE4; } }
L_004A8BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8BDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004A8BDCu) [[unlikely]] return; }
L_004A8BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8BCCu | kUnwind; return; } goto L_004A8BCC; } }
L_004A8BE4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A8BF0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAAF0u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 202u, depth); }
L_004A8C00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8C14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004A8C14u) [[unlikely]] return; }
L_004A8C14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A8C24; } }
L_004A8C1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004A8C34; } }
L_004A8C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8C2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004A8C2Cu) [[unlikely]] return; }
L_004A8C2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8C1Cu | kUnwind; return; } goto L_004A8C1C; } }
L_004A8C34:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A8C40:
    c.budget -= 2;
    {  goto L_004A8DA0; }
L_004A8C50:
    c.budget -= 2;
    {  goto L_004A8ED0; }
L_004A8C60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004A8CB8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004A8C8C:
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004A8CC0; } }
L_004A8CA0:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8C8Cu | kUnwind; return; } goto L_004A8C8C; } }
    c.budget -= 1;
L_004A8CB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A8CD8; } }
L_004A8CC0:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8CCCu); set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0085(c, 118u, depth + 1u); else { c.pc = 0x00416580u; return; } if (c.pc != 0x004A8CCCu) [[unlikely]] return; }
L_004A8CCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8CA0u | kUnwind; return; } goto L_004A8CA0; } }
    c.budget -= 1;
L_004A8CD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A8CF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8D04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 185u, depth + 1u); else { c.pc = 0x002BA8A0u; return; } if (c.pc != 0x004A8D04u) [[unlikely]] return; }
L_004A8D04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A8D24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8D14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004A8D14u) [[unlikely]] return; }
L_004A8D14:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8D24u); c.r[5].d[0] = c.r[2].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A8D24u) [[unlikely]] return; }
L_004A8D24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A8D40:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAAF0u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 202u, depth); }
L_004A8D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8D64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004A8D64u) [[unlikely]] return; }
L_004A8D64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A8D7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8D74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004A8D74u) [[unlikely]] return; }
L_004A8D74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004A8D88; } }
L_004A8D7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8D84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004A8D84u) [[unlikely]] return; }
L_004A8D84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004A8D88:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A8DA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A8E00; } }
L_004A8DC8:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[5], c.r[17].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004A8E58; } }
    c.budget -= 1;
L_004A8DE8:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8DC8u | kUnwind; return; } goto L_004A8DC8; } }
    c.budget -= 1;
L_004A8E00:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004A8E68; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_004A8E14:
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004A8E50; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004A8E24:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004A8EA0; } }
L_004A8E38:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8E24u | kUnwind; return; } goto L_004A8E24; } }
    c.budget -= 1;
L_004A8E50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A8EB0; } }
L_004A8E58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8E60u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x004A8E60u) [[unlikely]] return; }
L_004A8E60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8DE8u | kUnwind; return; } goto L_004A8DE8; } }
L_004A8E68:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004A8E6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8E84u); set32(c.r[4], c.r[4].w[0] - 14752u);  if (depth < kMaxDepth) unit_0022(c, 3u, depth + 1u); else { c.pc = 0x00288020u; return; } if (c.pc != 0x004A8E84u) [[unlikely]] return; }
L_004A8E84:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8E6Cu | kUnwind; return; } goto L_004A8E6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8E14u | kUnwind; return; } goto L_004A8E14; } }
L_004A8EA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8EA8u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x004A8EA8u) [[unlikely]] return; }
L_004A8EA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8E38u | kUnwind; return; } goto L_004A8E38; } }
L_004A8EB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A8ED0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A8F30; } }
L_004A8EF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[17], c.r[18].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004A8F88; } }
    c.budget -= 1;
L_004A8F18:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8EF8u | kUnwind; return; } goto L_004A8EF8; } }
    c.budget -= 1;
L_004A8F30:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004A8FB8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_004A8F44:
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004A8F80; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004A8F54:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004A8FF0; } }
L_004A8F68:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8F54u | kUnwind; return; } goto L_004A8F54; } }
    c.budget -= 1;
L_004A8F80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A9008; } }
L_004A8F88:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], c.r[18].w[0] << 4);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8FA4u); set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_007D(c, 246u, depth + 1u); else { c.pc = 0x003F6CE0u; return; } if (c.pc != 0x004A8FA4u) [[unlikely]] return; }
L_004A8FA4:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8F18u | kUnwind; return; } goto L_004A8F18; } }
    c.budget -= 1;
L_004A8FB8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004A8FBC:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8FD4u); set32(c.r[4], c.r[4].w[0] - 14752u);  if (depth < kMaxDepth) unit_0021(c, 358u, depth + 1u); else { c.pc = 0x00287EE0u; return; } if (c.pc != 0x004A8FD4u) [[unlikely]] return; }
L_004A8FD4:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8FBCu | kUnwind; return; } goto L_004A8FBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8F44u | kUnwind; return; } goto L_004A8F44; } }
L_004A8FF0:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A8FFCu); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x004A8FFCu) [[unlikely]] return; }
L_004A8FFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A8F68u | kUnwind; return; } goto L_004A8F68; } }
    c.budget -= 1;
L_004A9008:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A9020:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004A90C0; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_004A9068:
    set32(c.r[4], ld32((c.r[21].w[0] + 52u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    set32(c.r[5], 0u - 1u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[4].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.f[12] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004A90C8; } }
    c.budget -= 1;
L_004A90A0:
    set32(c.r[3], ld32((c.r[21].w[0] + 56u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 12u);
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A9068u | kUnwind; return; } goto L_004A9068; } }
    c.budget -= 1;
L_004A90C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004A90F8; } }
L_004A90C8:
    set32(c.r[3], ld32((c.r[21].w[0] + 60u)));
    set32(c.r[5], c.r[20].w[0] << 1);
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 14752u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[22], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A90ECu); set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0022(c, 11u, depth + 1u); else { c.pc = 0x002881A0u; return; } if (c.pc != 0x004A90ECu) [[unlikely]] return; }
L_004A90EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A90A0u | kUnwind; return; } goto L_004A90A0; } }
    c.budget -= 1;
L_004A90F8:
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
L_004A9120:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[4].w[0] + 32u), c.r[6].w[0]);
    set32(c.r[4], c.r[20].w[0] + 36u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A915Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 46u, depth + 1u); else { c.pc = 0x00480970u; return; } if (c.pc != 0x004A915Cu) [[unlikely]] return; }
L_004A915C:
    set32(c.r[4], c.r[20].w[0] + 44u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A916Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 161u, depth + 1u); else { c.pc = 0x004A9410u; return; } if (c.pc != 0x004A916Cu) [[unlikely]] return; }
L_004A916C:
    c.r[2].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004A91EC; } }
    c.r[1].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_004A917C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004A91C0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
L_004A9198:
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004A91B0; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_004A91B0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A9198u | kUnwind; return; } goto L_004A9198; } }
L_004A91C0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[20].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A91D0u); set32(c.r[6], c.r[6].w[0] - 27168u);  if (depth < kMaxDepth) unit_0032(c, 71u, depth + 1u); else { c.pc = 0x002CB5A0u; return; } if (c.pc != 0x004A91D0u) [[unlikely]] return; }
L_004A91D0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[20].w[0] + 52u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A91E4u); set32(c.r[6], c.r[6].w[0] - 27148u);  if (depth < kMaxDepth) unit_0031(c, 122u, depth + 1u); else { c.pc = 0x002C5050u; return; } if (c.pc != 0x004A91E4u) [[unlikely]] return; }
L_004A91E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_004A9248; } }
L_004A91EC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004A91F0:
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    c.f[3] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[19].w[0] + 4u));
    set32(c.r[5], 0u + 62u);
    c.f[1] = ld32((c.r[19].w[0] + 8u));
    c.r[6].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A922Cu); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0085(c, 148u, depth + 1u); else { c.pc = 0x00416AD0u; return; } if (c.pc != 0x004A922Cu) [[unlikely]] return; }
L_004A922C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A91F0u | kUnwind; return; } goto L_004A91F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A917Cu | kUnwind; return; } goto L_004A917C; } }
L_004A9248:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004A9270:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A9308; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[17].w[0] + 60u);
    set32(c.r[2], c.r[2].w[0] + 25152u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A9310; } }
    set32(c.r[4], c.r[17].w[0] + 52u);
    c.budget -= 1;
L_004A92A4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004A9320; } }
    set32(c.r[4], c.r[17].w[0] + 44u);
    c.budget -= 1;
L_004A92B0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004A9330; } }
    set32(c.r[4], c.r[17].w[0] + 36u);
    c.budget -= 1;
L_004A92BC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004A9340; } }
L_004A92C4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004A92F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004A92F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_004A92F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004A9308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9308u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004A9308u) [[unlikely]] return; }
L_004A9308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004A9350; } }
L_004A9310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9318u);  if (depth < kMaxDepth) unit_0029(c, 284u, depth + 1u); else { c.pc = 0x002A73F0u; return; } if (c.pc != 0x004A9318u) [[unlikely]] return; }
L_004A9318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 52u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A92A4u | kUnwind; return; } goto L_004A92A4; } }
L_004A9320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9328u);  if (depth < kMaxDepth) unit_0031(c, 124u, depth + 1u); else { c.pc = 0x002C5090u; return; } if (c.pc != 0x004A9328u) [[unlikely]] return; }
L_004A9328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 44u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A92B0u | kUnwind; return; } goto L_004A92B0; } }
L_004A9330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9338u);  if (depth < kMaxDepth) unit_00AA(c, 164u, depth + 1u); else { c.pc = 0x004A9470u; return; } if (c.pc != 0x004A9338u) [[unlikely]] return; }
L_004A9338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 36u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A92BCu | kUnwind; return; } goto L_004A92BC; } }
L_004A9340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9348u);  if (depth < kMaxDepth) unit_00A0(c, 49u, depth + 1u); else { c.pc = 0x004809D0u; return; } if (c.pc != 0x004A9348u) [[unlikely]] return; }
L_004A9348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A92C4u | kUnwind; return; } goto L_004A92C4; } }
L_004A9350:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A9370:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[8], 0u - 2u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u - 3u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[5], c.r[5].w[0] - 12672u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 25152u);
    c.r[10].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    c.budget -= 39;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), 0u);  c.pc = t; return; }
L_004A9410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 4);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9434u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004A9434u) [[unlikely]] return; }
L_004A9434:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 27472u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9450u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004A9450u) [[unlikely]] return; }
L_004A9450:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004A9470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A9498; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004A9498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9498u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004A9498u) [[unlikely]] return; }
L_004A9498:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A94B0:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[3], 0u - 2u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[5].d[0] = 0ull & 1ull;
    c.r[6].d[0] = ld8((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), 0u);  c.pc = t; return; }
L_004A94E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004A9524; } }
L_004A94FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A9510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9510u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x004A9510u) [[unlikely]] return; }
L_004A9510:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A951Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A951Cu) [[unlikely]] return; }
L_004A951C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004A953C; } }
L_004A9524:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9530u); set32(c.r[5], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x004A9530u) [[unlikely]] return; }
L_004A9530:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A94FCu | kUnwind; return; } goto L_004A94FC; } }
L_004A953C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A9550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004A958C; } }
L_004A9570:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A95A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9584u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x004A9584u) [[unlikely]] return; }
L_004A9584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004A95A8; } }
L_004A958C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9598u); set32(c.r[5], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x004A9598u) [[unlikely]] return; }
L_004A9598:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A9570u | kUnwind; return; } goto L_004A9570; } }
L_004A95A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004A95A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A95C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004A95FC; } }
L_004A95E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A9618; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A95F4u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x004A95F4u) [[unlikely]] return; }
L_004A95F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004A961C; } }
L_004A95FC:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A960Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_007D(c, 416u, depth + 1u); else { c.pc = 0x003F7B90u; return; } if (c.pc != 0x004A960Cu) [[unlikely]] return; }
L_004A960C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A95E0u | kUnwind; return; } goto L_004A95E0; } }
L_004A9618:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004A961C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A9630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9644u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004A9644u) [[unlikely]] return; }
L_004A9644:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A96B4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004A96B4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A9684; } }
    set32(c.r[4], 0u + 60u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9678u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x004A9678u) [[unlikely]] return; }
L_004A9678:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9684u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x004A9684u) [[unlikely]] return; }
L_004A9684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A968Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 212u, depth + 1u); else { c.pc = 0x002BABD0u; return; } if (c.pc != 0x004A968Cu) [[unlikely]] return; }
L_004A968C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[8], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A96B0u); c.r[9].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_007D(c, 231u, depth + 1u); else { c.pc = 0x003F68E0u; return; } if (c.pc != 0x004A96B0u) [[unlikely]] return; }
L_004A96B0:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 1;
L_004A96B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A96D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004A970C; } }
L_004A96F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A9724; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9704u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x004A9704u) [[unlikely]] return; }
L_004A9704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004A9728; } }
L_004A970C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9718u); set32(c.r[5], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x004A9718u) [[unlikely]] return; }
L_004A9718:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A96F0u | kUnwind; return; } goto L_004A96F0; } }
L_004A9724:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004A9728:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A9740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9754u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004A9754u) [[unlikely]] return; }
L_004A9754:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A97C4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004A97C4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A9794; } }
    set32(c.r[4], 0u + 60u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9788u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x004A9788u) [[unlikely]] return; }
L_004A9788:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9794u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x004A9794u) [[unlikely]] return; }
L_004A9794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A979Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 212u, depth + 1u); else { c.pc = 0x002BABD0u; return; } if (c.pc != 0x004A979Cu) [[unlikely]] return; }
L_004A979C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[8], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A97C0u); c.r[9].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_007D(c, 231u, depth + 1u); else { c.pc = 0x003F68E0u; return; } if (c.pc != 0x004A97C0u) [[unlikely]] return; }
L_004A97C0:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 1;
L_004A97C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A97E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A9800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9800u); set32(c.r[5], c.r[3].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 118u, depth + 1u); else { c.pc = 0x00416580u; return; } if (c.pc != 0x004A9800u) [[unlikely]] return; }
L_004A9800:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004A9810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9824u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 185u, depth + 1u); else { c.pc = 0x002BA8A0u; return; } if (c.pc != 0x004A9824u) [[unlikely]] return; }
L_004A9824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A9844; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9834u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004A9834u) [[unlikely]] return; }
L_004A9834:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9844u); c.r[5].d[0] = c.r[2].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004A9844u) [[unlikely]] return; }
L_004A9844:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A9860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004A989C; } }
L_004A9880:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A98B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9894u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x004A9894u) [[unlikely]] return; }
L_004A9894:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004A98B8; } }
L_004A989C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A98A8u); set32(c.r[5], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x004A98A8u) [[unlikely]] return; }
L_004A98A8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A9880u | kUnwind; return; } goto L_004A9880; } }
L_004A98B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004A98B8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A98D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A98E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004A98E4u) [[unlikely]] return; }
L_004A98E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A9954; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004A9954; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A9924; } }
    set32(c.r[4], 0u + 60u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9918u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x004A9918u) [[unlikely]] return; }
L_004A9918:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9924u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x004A9924u) [[unlikely]] return; }
L_004A9924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A992Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 212u, depth + 1u); else { c.pc = 0x002BABD0u; return; } if (c.pc != 0x004A992Cu) [[unlikely]] return; }
L_004A992C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[8], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9950u); c.r[9].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_007D(c, 231u, depth + 1u); else { c.pc = 0x003F68E0u; return; } if (c.pc != 0x004A9950u) [[unlikely]] return; }
L_004A9950:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 1;
L_004A9954:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A9970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 48u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9998u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_007E(c, 183u, depth + 1u); else { c.pc = 0x003F9080u; return; } if (c.pc != 0x004A9998u) [[unlikely]] return; }
L_004A9998:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A99B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004A99C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 16u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A99F4u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004A99F4u) [[unlikely]] return; }
L_004A99F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004A9A60; } }
L_004A99FC:
    st32((c.r[20].w[0] + 64u), c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9A14u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0087(c, 208u, depth + 1u); else { c.pc = 0x0041F9E0u; return; } if (c.pc != 0x004A9A14u) [[unlikely]] return; }
L_004A9A14:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[20].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[20].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[20].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[20].w[0] + 44u), c.f[0]);
    st32((c.r[20].w[0] + 20u), c.r[19].w[0]);
    st32((c.r[20].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9A50u); set32(c.r[5], c.r[5].w[0] - 26848u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x004A9A50u) [[unlikely]] return; }
L_004A9A50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A9B2C; } }
L_004A9A58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_004A9B84; } }
L_004A9A60:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[16].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9A7Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004A9A7Cu) [[unlikely]] return; }
L_004A9A7C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00340000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 17680u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9A98u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004A9A98u) [[unlikely]] return; }
L_004A9A98:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9AA8u); set32(c.r[4], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004A9AA8u) [[unlikely]] return; }
L_004A9AA8:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004A9B18; } }
L_004A9ABC:
    c.r[4].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] << 1);
    set32(c.r[6], c.r[18].w[0] + c.r[2].w[0]);
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    set32(c.r[4], c.r[2].w[0] << 2);
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[2], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.r[2].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A9ABCu | kUnwind; return; } goto L_004A9ABC; } }
L_004A9B18:
    set32(c.r[2], ld32((c.r[28].w[0] - 28496u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[28].w[0] - 28496u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A99FCu | kUnwind; return; } goto L_004A99FC; } }
L_004A9B2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9B34u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004A9B34u) [[unlikely]] return; }
L_004A9B34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A9B60; } }
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], 0u - 2u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[5].d[0] = ld8((c.r[2].w[0] + 8u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 9;
L_004A9B60:
    st32((c.r[20].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], 0u + 61u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9B70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0077(c, 54u, depth + 1u); else { c.pc = 0x003DCAB0u; return; } if (c.pc != 0x004A9B70u) [[unlikely]] return; }
L_004A9B70:
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9B7Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0085(c, 151u, depth + 1u); else { c.pc = 0x00416B30u; return; } if (c.pc != 0x004A9B7Cu) [[unlikely]] return; }
L_004A9B7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A9A58u | kUnwind; return; } goto L_004A9A58; } }
L_004A9B84:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004A9BA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004A9C60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 25456u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004A9C18; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004A9C18; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004A9C10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9BF0u); set32(c.r[4], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_00A0(c, 53u, depth + 1u); else { c.pc = 0x00480A50u; return; } if (c.pc != 0x004A9BF0u) [[unlikely]] return; }
L_004A9BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9BF8u); set32(c.r[4], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_00A0(c, 51u, depth + 1u); else { c.pc = 0x00480A10u; return; } if (c.pc != 0x004A9BF8u) [[unlikely]] return; }
L_004A9BF8:
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0] + 8u), 0u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 28496u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[28].w[0] - 28496u), c.r[2].w[0]);
    c.budget -= 6;
L_004A9C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9C18u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004A9C18u) [[unlikely]] return; }
L_004A9C18:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004A9C2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9C2Cu);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004A9C2Cu) [[unlikely]] return; }
L_004A9C2C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004A9C48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_004A9C48:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004A9C60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9C60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004A9C60u) [[unlikely]] return; }
L_004A9C60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004A9C80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    set32(c.r[8], 0u - 2u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u - 3u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[5], c.r[5].w[0] + 25456u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[3], 0u - 1u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[10].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 31;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), 0u);  c.pc = t; return; }
L_004A9D00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004A9D54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 25760u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004A9D3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004A9D3C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004A9D54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9D54u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004A9D54u) [[unlikely]] return; }
L_004A9D54:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004A9D70:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9DA8u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004A9DA8u) [[unlikely]] return; }
L_004A9DA8:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9DB8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004A9DB8u) [[unlikely]] return; }
L_004A9DB8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004AA320; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 24u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004A9ED4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 26512u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x004A8000u < 16384u) { entry = entries_00AA[(t - 0x004A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004A9DF0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AA334; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 524u));
    c.budget -= 1;
L_004A9E08:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004A9E70; } }
    c.r[10].d[0] = ld16((c.r[17].w[0] + 544u));
    set32(c.r[8], 0u - 3u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[6], 0u - 17u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[4], c.r[17].w[0] + 544u);
    set32(c.r[5], c.r[17].w[0] + 112u);
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[17].w[0] + 544u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[17].w[0] + 544u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[17].w[0] + 544u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[17].w[0] + 544u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9E68u); st16((c.r[17].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 369u, depth + 1u); else { c.pc = 0x0028B8C0u; return; } if (c.pc != 0x004A9E68u) [[unlikely]] return; }
L_004A9E68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 1356u)));  if (t) { goto L_004A9ECC; } }
L_004A9E70:
    c.r[11].d[0] = ld16((c.r[17].w[0] + 544u));
    set32(c.r[9], 0u - 3u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[7], 0u - 17u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[4], c.r[17].w[0] + 544u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st16((c.r[17].w[0] + 544u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[17].w[0] + 544u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[17].w[0] + 544u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[17].w[0] + 544u));
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9EC8u); st16((c.r[17].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0022(c, 360u, depth + 1u); else { c.pc = 0x0028B750u; return; } if (c.pc != 0x004A9EC8u) [[unlikely]] return; }
L_004A9EC8:
    set32(c.r[4], ld32((c.r[17].w[0] + 1356u)));
    c.budget -= 1;
L_004A9ECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9ED4u);  if (depth < kMaxDepth) unit_00A2(c, 17u, depth + 1u); else { c.pc = 0x004882F0u; return; } if (c.pc != 0x004A9ED4u) [[unlikely]] return; }
L_004A9ED4:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 24u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004AA320; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 26544u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x004A8000u < 16384u) { entry = entries_00AA[(t - 0x004A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004A9F00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9F08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0033(c, 317u, depth + 1u); else { c.pc = 0x002CF960u; return; } if (c.pc != 0x004A9F08u) [[unlikely]] return; }
L_004A9F08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004AA324; } }
L_004A9F10:
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9F28u); set32(c.r[4], c.r[3].w[0] + 416u);  if (depth < kMaxDepth) unit_00A9(c, 65u, depth + 1u); else { c.pc = 0x004A4C90u; return; } if (c.pc != 0x004A9F28u) [[unlikely]] return; }
L_004A9F28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004AA320; } }
L_004A9F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9F38u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004A9F38u) [[unlikely]] return; }
L_004A9F38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9F4Cu); c.f[21] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004A9F4Cu) [[unlikely]] return; }
L_004A9F4C:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9F58u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004A9F58u) [[unlikely]] return; }
L_004A9F58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 148u), c.f[20]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 152u), c.f[21]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 752u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 344u)));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 60u));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 61u));
    st8((c.r[29].w[0] + 172u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 62u));
    st8((c.r[29].w[0] + 173u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[29].w[0] + 174u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004AA350; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1578u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004A9FAC; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_004A9FAC:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_004A9FB0:
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    c.r[16].d[0] = c.r[2].d[0] << 56;
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9FC4u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);  if (depth < kMaxDepth) unit_0088(c, 151u, depth + 1u); else { c.pc = 0x00420780u; return; } if (c.pc != 0x004A9FC4u) [[unlikely]] return; }
L_004A9FC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AA320; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 172u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 144u);
    set32(c.r[8], 0u + 8u);
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004A9FF0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007D(c, 195u, depth + 1u); else { c.pc = 0x003F6080u; return; } if (c.pc != 0x004A9FF0u) [[unlikely]] return; }
L_004A9FF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004AA320; } }
L_004A9FF8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1497u));
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AA320; } }
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AA320; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AA040; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 16128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA038u); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0086(c, 143u, depth + 1u); else { c.pc = 0x00419F00u; return; } if (c.pc != 0x004AA038u) [[unlikely]] return; }
L_004AA038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[17].w[0] + 1497u));  if (t) { goto L_004AA058; } }
L_004AA040:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 16128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA054u); set32(c.r[6], 0u + 60u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x0041A0C0u; return; } if (c.pc != 0x004AA054u) [[unlikely]] return; }
L_004AA054:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1497u));
    c.budget -= 1;
L_004AA058:
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1497u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004AA320; } }
L_004AA070:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1497u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 1497u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1497u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AA320; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 220u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AA0C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA0B8u); set32(c.r[4], c.r[4].w[0] - 16128u);  if (depth < kMaxDepth) unit_0086(c, 141u, depth + 1u); else { c.pc = 0x00419E60u; return; } if (c.pc != 0x004AA0B8u) [[unlikely]] return; }
L_004AA0B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004AA320; } }
L_004AA0C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA0D0u); set32(c.r[4], c.r[4].w[0] - 16128u);  if (depth < kMaxDepth) unit_0086(c, 145u, depth + 1u); else { c.pc = 0x0041A030u; return; } if (c.pc != 0x004AA0D0u) [[unlikely]] return; }
L_004AA0D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004AA320; } }
L_004AA0D8:
    set32(c.r[16], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA0E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 151u, depth + 1u); else { c.pc = 0x00420780u; return; } if (c.pc != 0x004AA0E8u) [[unlikely]] return; }
L_004AA0E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AA320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA0F8u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004AA0F8u) [[unlikely]] return; }
L_004AA0F8:
    c.f[20] = c.f[0] ^ fp::kSign;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA104u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004AA104u) [[unlikely]] return; }
L_004AA104:
    c.f[22] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA110u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004AA110u) [[unlikely]] return; }
L_004AA110:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = 0u;
    c.f[3] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA138u); c.f[21] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004AA138u) [[unlikely]] return; }
L_004AA138:
    c.f[20] = c.f[0] ^ fp::kSign;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA144u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004AA144u) [[unlikely]] return; }
L_004AA144:
    c.f[0] = fp::ee::add(c.fcr31, c.f[20], c.f[0]);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    st32((c.r[29].w[0] + 132u), c.f[21]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA15Cu); st32((c.r[29].w[0] + 136u), c.f[22]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004AA15Cu) [[unlikely]] return; }
L_004AA15C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA180u); c.f[21] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004AA180u) [[unlikely]] return; }
L_004AA180:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = 0u;
    c.f[3] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA1A8u); c.f[20] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004AA1A8u) [[unlikely]] return; }
L_004AA1A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 116u), c.f[20]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 120u), c.f[21]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 752u)));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 60u));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 61u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 62u));
    st8((c.r[29].w[0] + 168u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 169u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 170u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 344u)));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004AA358; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1578u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AA20C; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_004AA20C:
    set32(c.r[2], ld32((c.r[17].w[0] + 348u)));
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_004AA21C:
    c.f[2] = ld32((c.r[2].w[0] + 56u));
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.f[1] = ld32((c.r[2].w[0] + 52u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    set32(c.r[6], c.r[29].w[0] + 168u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA244u); st32((c.r[29].w[0] + 104u), c.f[2]);  if (depth < kMaxDepth) unit_007C(c, 233u, depth + 1u); else { c.pc = 0x003F3D20u; return; } if (c.pc != 0x004AA244u) [[unlikely]] return; }
L_004AA244:
    set32(c.r[2], ld32((c.r[17].w[0] + 752u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 344u)));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 60u));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 61u));
    st8((c.r[29].w[0] + 164u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 62u));
    st8((c.r[29].w[0] + 165u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[29].w[0] + 166u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004AA364; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1578u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AA280; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_004AA280:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_004AA284:
    c.r[19].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA298u); c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);  if (depth < kMaxDepth) unit_0088(c, 151u, depth + 1u); else { c.pc = 0x00420780u; return; } if (c.pc != 0x004AA298u) [[unlikely]] return; }
L_004AA298:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AA36C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 752u)));
    c.budget -= 1;
L_004AA2A4:
    set32(c.r[3], ld32((c.r[17].w[0] + 344u)));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 60u));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 61u));
    st8((c.r[29].w[0] + 160u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 62u));
    st8((c.r[29].w[0] + 161u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[29].w[0] + 162u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004AA398; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1578u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AA2DC; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_004AA2DC:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_004AA2E0:
    c.r[19].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA2F4u); c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);  if (depth < kMaxDepth) unit_0088(c, 151u, depth + 1u); else { c.pc = 0x00420780u; return; } if (c.pc != 0x004AA2F4u) [[unlikely]] return; }
L_004AA2F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AA320; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 160u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 112u);
    set32(c.r[8], 0u + 10u);
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA320u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007D(c, 195u, depth + 1u); else { c.pc = 0x003F6080u; return; } if (c.pc != 0x004AA320u) [[unlikely]] return; }
L_004AA320:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004AA324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA32Cu);  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x004AA32Cu) [[unlikely]] return; }
L_004AA32C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_004AA3A0; } }
L_004AA334:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 762u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA348u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x004AA348u) [[unlikely]] return; }
L_004AA348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[17].w[0] + 524u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A9E08u | kUnwind; return; } goto L_004A9E08; } }
L_004AA350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004A9FB0u | kUnwind; return; } goto L_004A9FB0; } }
L_004AA358:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 26608u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA21Cu | kUnwind; return; } goto L_004AA21C; } }
L_004AA364:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA284u | kUnwind; return; } goto L_004AA284; } }
L_004AA36C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 164u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 128u);
    set32(c.r[8], 0u + 6u);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA390u); set32(c.r[11], 0u + 1u);  if (depth < kMaxDepth) unit_007D(c, 191u, depth + 1u); else { c.pc = 0x003F5FC0u; return; } if (c.pc != 0x004AA390u) [[unlikely]] return; }
L_004AA390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 752u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA2A4u | kUnwind; return; } goto L_004AA2A4; } }
L_004AA398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA2E0u | kUnwind; return; } goto L_004AA2E0; } }
L_004AA3A0:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004AA3D0:
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[6].w[0]));  c.pc = t; return; }
L_004AA3E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004AA3F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004AA400:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004AA410:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004AA420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[6].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    st32((c.r[6].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 56u));
    st32((c.r[6].w[0] + 8u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 60u));
    st32((c.r[6].w[0] + 12u), c.f[1]);
    c.f[3] = ld32((c.r[4].w[0] + 52u));
    c.f[5] = ld32((c.r[4].w[0] + 56u));
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    st32((c.r[29].w[0] + 8u), c.f[4]);
    st32((c.r[29].w[0] + 4u), c.f[2]);
    st32((c.r[29].w[0]), c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004AA490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA4A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 185u, depth + 1u); else { c.pc = 0x002BA8A0u; return; } if (c.pc != 0x004AA4A4u) [[unlikely]] return; }
L_004AA4A4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AA4B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004AA4B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AA4D0:
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 48u), c.f[3]);
    st32((c.r[4].w[0] + 52u), c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[1]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 32u), static_cast<std::uint8_t>(c.r[6].w[0]));  c.pc = t; return; }
L_004AA500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004AA594; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 26048u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AA550; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AA54C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA54Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AA54Cu) [[unlikely]] return; }
L_004AA54C:
    st32((c.r[17].w[0] + 68u), 0u);
    c.budget -= 1;
L_004AA550:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004AA57C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004AA57C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_004AA57C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004AA594; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA594u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004AA594u) [[unlikely]] return; }
L_004AA594:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AA5B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004AA5C0:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 228u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_004AA5E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA604u); st8((c.r[4].w[0] + 228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002E(c, 248u, depth + 1u); else { c.pc = 0x002BB010u; return; } if (c.pc != 0x004AA604u) [[unlikely]] return; }
L_004AA604:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AA704; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 228u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AA640; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA628u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 110u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x004AA628u) [[unlikely]] return; }
L_004AA628:
    set32(c.r[5], ld32((c.r[17].w[0] + 124u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA638u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AA638u) [[unlikely]] return; }
L_004AA638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 228u));  if (t) { goto L_004AA664; } }
L_004AA640:
    set32(c.r[5], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA650u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AA650u) [[unlikely]] return; }
L_004AA650:
    set32(c.r[5], ld32((c.r[17].w[0] + 124u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA660u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 110u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x004AA660u) [[unlikely]] return; }
L_004AA660:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 228u));
    c.budget -= 1;
L_004AA664:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004AA6FC; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_004AA6A8; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 100u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AA694; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 224u)));  if (t) { goto L_004AA6AC; } }
L_004AA694:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA6A0u); set32(c.r[4], c.r[2].w[0] + 416u);  if (depth < kMaxDepth) unit_00A5(c, 142u, depth + 1u); else { c.pc = 0x004968D0u; return; } if (c.pc != 0x004AA6A0u) [[unlikely]] return; }
L_004AA6A0:
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_004AA6A8:
    set32(c.r[4], ld32((c.r[17].w[0] + 224u)));
    c.budget -= 1;
L_004AA6AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA6D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 64u, depth + 1u); else { c.pc = 0x00345070u; return; } if (c.pc != 0x004AA6D0u) [[unlikely]] return; }
L_004AA6D0:
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA6FCu); st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 56u, depth + 1u); else { c.pc = 0x00344950u; return; } if (c.pc != 0x004AA6FCu) [[unlikely]] return; }
L_004AA6FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] + 1u);  if (t) { goto L_004AA72C; } }
L_004AA704:
    set32(c.r[5], ld32((c.r[17].w[0] + 124u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA714u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AA714u) [[unlikely]] return; }
L_004AA714:
    set32(c.r[5], ld32((c.r[17].w[0] + 116u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA724u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AA724u) [[unlikely]] return; }
L_004AA724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA660u | kUnwind; return; } goto L_004AA660; } }
L_004AA72C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AA740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA754u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004AA754u) [[unlikely]] return; }
L_004AA754:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AA76C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 228u));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_004AA76C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AA780:
    c.f[0] = 0u;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004AA790:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = ld32((c.r[29].w[0] + 60u));
    c.f[21] = ld32((c.r[29].w[0] + 76u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA7BCu); st8((c.r[4].w[0] + 228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002E(c, 248u, depth + 1u); else { c.pc = 0x002BB010u; return; } if (c.pc != 0x004AA7BCu) [[unlikely]] return; }
L_004AA7BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AA8D0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 228u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AA7F8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA7E0u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 110u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x004AA7E0u) [[unlikely]] return; }
L_004AA7E0:
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA7F0u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AA7F0u) [[unlikely]] return; }
L_004AA7F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 224u)));  if (t) { goto L_004AA81C; } }
L_004AA7F8:
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA808u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AA808u) [[unlikely]] return; }
L_004AA808:
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA818u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 110u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x004AA818u) [[unlikely]] return; }
L_004AA818:
    set32(c.r[4], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 1;
L_004AA81C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA83Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 29u, depth + 1u); else { c.pc = 0x00344540u; return; } if (c.pc != 0x004AA83Cu) [[unlikely]] return; }
L_004AA83C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA850u); st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0075(c, 188u, depth + 1u); else { c.pc = 0x003D70E0u; return; } if (c.pc != 0x004AA850u) [[unlikely]] return; }
L_004AA850:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004AA8F8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 176u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AA894; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 92u), c.f[21]);  if (t) { goto L_004AA8B0; } }
L_004AA894:
    c.f[2] = ld32((c.r[16].w[0] + 164u));
    c.f[1] = ld32((c.r[16].w[0] + 168u));
    c.f[0] = ld32((c.r[16].w[0] + 160u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    st32((c.r[29].w[0] + 92u), c.f[20]);
    c.budget -= 7;
L_004AA8B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA8C8u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AA8C8u) [[unlikely]] return; }
L_004AA8C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004AA8FC; } }
L_004AA8D0:
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA8E0u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AA8E0u) [[unlikely]] return; }
L_004AA8E0:
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA8F0u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AA8F0u) [[unlikely]] return; }
L_004AA8F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA818u | kUnwind; return; } goto L_004AA818; } }
L_004AA8F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004AA8FC:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004AA910:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004AA920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004AA964; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 100u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AA950; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004AA968; } }
L_004AA950:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA95Cu); set32(c.r[4], c.r[2].w[0] + 416u);  if (depth < kMaxDepth) unit_00A5(c, 142u, depth + 1u); else { c.pc = 0x004968D0u; return; } if (c.pc != 0x004AA95Cu) [[unlikely]] return; }
L_004AA95C:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_004AA964:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004AA968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA970u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 238u, depth + 1u); else { c.pc = 0x002BAF40u; return; } if (c.pc != 0x004AA970u) [[unlikely]] return; }
L_004AA970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA978u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004AA978u) [[unlikely]] return; }
L_004AA978:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AA990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 336u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA9ACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AA9ACu) [[unlikely]] return; }
L_004AA9AC:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_004AA9E4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 100u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AA9D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 224u)));  if (t) { goto L_004AA9E8; } }
L_004AA9D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AA9DCu); set32(c.r[4], c.r[2].w[0] + 416u);  if (depth < kMaxDepth) unit_00A5(c, 142u, depth + 1u); else { c.pc = 0x004968D0u; return; } if (c.pc != 0x004AA9DCu) [[unlikely]] return; }
L_004AA9DC:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_004AA9E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 1;
L_004AA9E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAA0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 64u, depth + 1u); else { c.pc = 0x00345070u; return; } if (c.pc != 0x004AAA0Cu) [[unlikely]] return; }
L_004AAA0C:
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAA38u); st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0051(c, 56u, depth + 1u); else { c.pc = 0x00344950u; return; } if (c.pc != 0x004AAA38u) [[unlikely]] return; }
L_004AAA38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AAA50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004AAA94; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 100u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004AAA80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004AAA98; } }
L_004AAA80:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAA8Cu); set32(c.r[4], c.r[2].w[0] + 416u);  if (depth < kMaxDepth) unit_00A5(c, 142u, depth + 1u); else { c.pc = 0x004968D0u; return; } if (c.pc != 0x004AAA8Cu) [[unlikely]] return; }
L_004AAA8C:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 2;
L_004AAA94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004AAA98:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AAAB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAAC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004AAAC4u) [[unlikely]] return; }
L_004AAAC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AAB18; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004AAB18; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 100u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004AAAF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004AAB1C; } }
L_004AAAF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.r[2].w[0];
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.f[13] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAB14u); set32(c.r[4], c.r[3].w[0] + 416u);  if (depth < kMaxDepth) unit_00A5(c, 153u, depth + 1u); else { c.pc = 0x00496A90u; return; } if (c.pc != 0x004AAB14u) [[unlikely]] return; }
L_004AAB14:
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 1;
L_004AAB18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004AAB1C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AAB30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004AAB74; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 100u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AAB60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004AAB78; } }
L_004AAB60:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAB6Cu); set32(c.r[4], c.r[2].w[0] + 416u);  if (depth < kMaxDepth) unit_00A5(c, 142u, depth + 1u); else { c.pc = 0x004968D0u; return; } if (c.pc != 0x004AAB6Cu) [[unlikely]] return; }
L_004AAB6C:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_004AAB74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004AAB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAB80u);  if (depth < kMaxDepth) unit_002E(c, 248u, depth + 1u); else { c.pc = 0x002BB010u; return; } if (c.pc != 0x004AAB80u) [[unlikely]] return; }
L_004AAB80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AABE4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 228u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AABBC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AABA4u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 110u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x004AABA4u) [[unlikely]] return; }
L_004AABA4:
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AABB4u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AABB4u) [[unlikely]] return; }
L_004AABB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004AABDC; } }
L_004AABBC:
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AABCCu); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AABCCu) [[unlikely]] return; }
L_004AABCC:
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AABDCu); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 110u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x004AABDCu) [[unlikely]] return; }
L_004AABDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004AAC0C; } }
L_004AABE4:
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AABF4u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AABF4u) [[unlikely]] return; }
L_004AABF4:
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAC04u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AAC04u) [[unlikely]] return; }
L_004AAC04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AABDCu | kUnwind; return; } goto L_004AABDC; } }
L_004AAC0C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AAC20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAC34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004AAC34u) [[unlikely]] return; }
L_004AAC34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AAC88; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004AAC88; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 100u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AAC60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004AAC8C; } }
L_004AAC60:
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.r[2].w[0];
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.f[13] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAC84u); set32(c.r[4], c.r[3].w[0] + 416u);  if (depth < kMaxDepth) unit_00A5(c, 153u, depth + 1u); else { c.pc = 0x00496A90u; return; } if (c.pc != 0x004AAC84u) [[unlikely]] return; }
L_004AAC84:
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 1;
L_004AAC88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004AAC8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAC94u);  if (depth < kMaxDepth) unit_002E(c, 248u, depth + 1u); else { c.pc = 0x002BB010u; return; } if (c.pc != 0x004AAC94u) [[unlikely]] return; }
L_004AAC94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AACF8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 228u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AACD0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AACB8u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 110u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x004AACB8u) [[unlikely]] return; }
L_004AACB8:
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AACC8u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AACC8u) [[unlikely]] return; }
L_004AACC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004AACF0; } }
L_004AACD0:
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AACE0u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AACE0u) [[unlikely]] return; }
L_004AACE0:
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AACF0u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 110u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x004AACF0u) [[unlikely]] return; }
L_004AACF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004AAD20; } }
L_004AACF8:
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAD08u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AAD08u) [[unlikely]] return; }
L_004AAD08:
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAD18u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AAD18u) [[unlikely]] return; }
L_004AAD18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AACF0u | kUnwind; return; } goto L_004AACF0; } }
L_004AAD20:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AAD30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], ld32((c.r[4].w[0] + 224u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 23936u)));
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.f[3] = ld32((c.r[3].w[0] + 52u));
    c.f[2] = ld32((c.r[3].w[0] + 56u));
    c.f[1] = ld32((c.r[3].w[0] + 48u));
    st32((c.r[4].w[0] + 48u), c.f[1]);
    st32((c.r[4].w[0] + 52u), c.f[3]);
    st32((c.r[4].w[0] + 56u), c.f[2]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004AAD80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAD9Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x004AAD9Cu) [[unlikely]] return; }
L_004AAD9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AAE58; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 228u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004AADB8; } }
L_004AADB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004AAE5C; } }
L_004AADB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AADC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004AADC0u) [[unlikely]] return; }
L_004AADC0:
    set32(c.r[5], ld32((c.r[17].w[0] + 112u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AADD4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004AADD4u) [[unlikely]] return; }
L_004AADD4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004AAE40; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AADECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AADECu) [[unlikely]] return; }
L_004AADEC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004AAE40; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 672u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AAE40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAE0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 172u, depth + 1u); else { c.pc = 0x0027DA80u; return; } if (c.pc != 0x004AAE0Cu) [[unlikely]] return; }
L_004AAE0C:
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAE20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AAE20u) [[unlikely]] return; }
L_004AAE20:
    set32(c.r[2], ld32((c.r[17].w[0] + 144u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAE38u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x004AAE38u) [[unlikely]] return; }
L_004AAE38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004AAE58; } }
L_004AAE40:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 336u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAE50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AAE50u) [[unlikely]] return; }
L_004AAE50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AADB0u | kUnwind; return; } goto L_004AADB0; } }
L_004AAE58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004AAE5C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AAE70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004AAEB4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 100u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004AAEA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004AAEB8; } }
L_004AAEA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAEACu); set32(c.r[4], c.r[2].w[0] + 416u);  if (depth < kMaxDepth) unit_00A5(c, 142u, depth + 1u); else { c.pc = 0x004968D0u; return; } if (c.pc != 0x004AAEACu) [[unlikely]] return; }
L_004AAEAC:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 2;
L_004AAEB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004AAEB8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AAED0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = ld32((c.r[29].w[0] + 60u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAEF0u); st8((c.r[4].w[0] + 228u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002E(c, 248u, depth + 1u); else { c.pc = 0x002BB010u; return; } if (c.pc != 0x004AAEF0u) [[unlikely]] return; }
L_004AAEF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AB034; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 228u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AAF2C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAF14u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 110u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x004AAF14u) [[unlikely]] return; }
L_004AAF14:
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAF24u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AAF24u) [[unlikely]] return; }
L_004AAF24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_004AAF50; } }
L_004AAF2C:
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAF3Cu); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AAF3Cu) [[unlikely]] return; }
L_004AAF3C:
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAF4Cu); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 110u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x004AAF4Cu) [[unlikely]] return; }
L_004AAF4C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_004AAF50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAF74u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0051(c, 29u, depth + 1u); else { c.pc = 0x00344540u; return; } if (c.pc != 0x004AAF74u) [[unlikely]] return; }
L_004AAF74:
    set32(c.r[6], ld32((c.r[16].w[0] + 224u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23936u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.f[2] = ld32((c.r[3].w[0] + 52u));
    c.f[1] = ld32((c.r[3].w[0] + 56u));
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[2]);
    st32((c.r[16].w[0] + 56u), c.f[1]);
    st32((c.r[16].w[0] + 60u), c.f[20]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AAFC0u); st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004AAFC0u) [[unlikely]] return; }
L_004AAFC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AB014; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004AB014; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 100u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AAFEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  if (t) { goto L_004AB018; } }
L_004AAFEC:
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[6], 0u + 1u);
    c.f[12] = c.r[2].w[0];
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.f[13] = 0u;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB010u); set32(c.r[4], c.r[3].w[0] + 416u);  if (depth < kMaxDepth) unit_00A5(c, 153u, depth + 1u); else { c.pc = 0x00496A90u; return; } if (c.pc != 0x004AB010u) [[unlikely]] return; }
L_004AB010:
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 1;
L_004AB014:
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 1;
L_004AB018:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB028u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AB028u) [[unlikely]] return; }
L_004AB028:
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 28u), 0u);  if (t) { goto L_004AB05C; } }
L_004AB034:
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB044u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AB044u) [[unlikely]] return; }
L_004AB044:
    set32(c.r[5], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB054u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AB054u) [[unlikely]] return; }
L_004AB054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AAF4Cu | kUnwind; return; } goto L_004AAF4C; } }
L_004AB05C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004AB070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    vu::sub4<0>(c.vu0, 15u, 1u, 1u, 1u);
    vu::sub4<1>(c.vu0, 15u, 2u, 2u, 2u);
    vu::mr32_4(c.vu0, 15u, 3u, 0u);
    st128((c.r[16].w[0] + 208u) & ~15u, c.vu0.vf[0]);
    vu::addbc4<0>(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    vu::addbc4<1>(c.vu0, 4u, 2u, 0u, c.vu0.vf[0].w[3]);
    st128((c.r[16].w[0] + 192u) & ~15u, c.vu0.vf[3]);
    st128((c.r[16].w[0] + 160u) & ~15u, c.vu0.vf[1]);
    st128((c.r[16].w[0] + 176u) & ~15u, c.vu0.vf[2]);
    c.f[20] = ld32((c.r[4].w[0] + 96u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB0B4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004AB0B4u) [[unlikely]] return; }
L_004AB0B4:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB0C0u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004AB0C0u) [[unlikely]] return; }
L_004AB0C0:
    st32((c.r[16].w[0] + 160u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 192u), c.f[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[3], c.r[16].w[0] + 160u);
    st32((c.r[16].w[0] + 168u), c.f[0]);
    st32((c.r[16].w[0] + 200u), c.f[20]);
    st32((c.r[16].w[0] + 220u), c.r[2].w[0]);
    c.f[3] = 0u;
    st32((c.r[16].w[0] + 180u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 172u), 0u);
    st32((c.r[16].w[0] + 164u), 0u);
    st32((c.r[16].w[0] + 204u), 0u);
    st32((c.r[16].w[0] + 196u), 0u);
    st32((c.r[16].w[0] + 188u), 0u);
    st32((c.r[16].w[0] + 184u), 0u);
    st32((c.r[16].w[0] + 176u), 0u);
    st32((c.r[16].w[0] + 216u), 0u);
    st32((c.r[16].w[0] + 212u), 0u);
    st32((c.r[16].w[0] + 208u), 0u);
    c.budget -= 21;
L_004AB114:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[2] = ld32((c.r[16].w[0] + 80u));
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = ld32((c.r[16].w[0] + 84u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[2] = ld32((c.r[16].w[0] + 88u));
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AB114u | kUnwind; return; } goto L_004AB114; } }
    set32(c.r[9], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004AB17C; } }
    set32(c.r[8], c.r[16].w[0] + 36u);
    c.budget -= 1;
L_004AB17C:
    set32(c.r[5], ld32((c.r[16].w[0] + 108u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] + 23936u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB198u); set32(c.r[10], c.r[16].w[0] + 160u);  if (depth < kMaxDepth) unit_0050(c, 228u, depth + 1u); else { c.pc = 0x00343BA0u; return; } if (c.pc != 0x004AB198u) [[unlikely]] return; }
L_004AB198:
    st32((c.r[16].w[0] + 224u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AB1B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 20u)));
    set32(c.r[8], ld32((c.r[5].w[0] + 24u)));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[5].w[0] + 28u)));
    st128((c.r[16].w[0] + 80u) & ~15u, c.r[2]);
    st32((c.r[4].w[0] + 96u), c.f[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 32u)));
    st8((c.r[4].w[0] + 100u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[4].w[0] + 104u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 36u)));
    st32((c.r[4].w[0] + 108u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 40u)));
    st32((c.r[4].w[0] + 112u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 44u)));
    st32((c.r[4].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 48u)));
    st32((c.r[4].w[0] + 124u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB218u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004AB218u) [[unlikely]] return; }
L_004AB218:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AB244; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004AB230; } }
    set32(c.r[7], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_004AB230:
    c.f[12] = ld32((c.r[16].w[0] + 96u));
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB240u); set32(c.r[6], 0u + 282u);  if (depth < kMaxDepth) unit_002C(c, 238u, depth + 1u); else { c.pc = 0x002B3AB0u; return; } if (c.pc != 0x004AB240u) [[unlikely]] return; }
L_004AB240:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004AB244:
    st32((c.r[16].w[0] + 144u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    st32((c.r[3].w[0] + 20u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AB260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004AB30C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 26416u);
    set32(c.r[3], c.r[3].w[0] + 26716u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 26740u);
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AB2C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004AB2C4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB2C4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AB2C4u) [[unlikely]] return; }
L_004AB2C4:
    st32((c.r[17].w[0] + 144u), 0u);
    c.budget -= 1;
L_004AB2C8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004AB2F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004AB2F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_004AB2F4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004AB30C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB30Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004AB30Cu) [[unlikely]] return; }
L_004AB30C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004AB330:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[12], 0u - 2u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[14].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[10], 0u - 3u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[9], c.r[9].w[0] - 12672u);
    set32(c.r[8], c.r[8].w[0] + 24528u);
    set32(c.r[7], c.r[7].w[0] + 24504u);
    set32(c.r[6], c.r[6].w[0] + 26416u);
    set32(c.r[5], c.r[5].w[0] + 26716u);
    set32(c.r[3], c.r[3].w[0] + 26740u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[4].w[0]), c.r[9].w[0]);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 32u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 44;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 144u), 0u);  c.pc = t; return; }
L_004AB3E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA910u | kUnwind; return; } goto L_004AA910; }
L_004AB3F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA5B0u | kUnwind; return; } goto L_004AA5B0; }
L_004AB400:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA780u | kUnwind; return; } goto L_004AA780; }
L_004AB410:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA790u | kUnwind; return; } goto L_004AA790; }
L_004AB420:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 36u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AA920u | kUnwind; return; } goto L_004AA920; }
L_004AB430:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004AB440:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_004AB450:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 208u));  c.pc = t; return; }
L_004AB460:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 160u);  c.pc = t; return; }
L_004AB470:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 212u));  c.pc = t; return; }
L_004AB480:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 192u);  c.pc = t; return; }
L_004AB490:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004AB4A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004AB4B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 212u));  c.pc = t; return; }
L_004AB4C0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 300u));
    c.f[23] = ld32((c.r[29].w[0] + 76u));
    c.f[22] = ld32((c.r[29].w[0] + 92u));
    c.f[21] = ld32((c.r[29].w[0] + 124u));
    c.f[20] = ld32((c.r[29].w[0] + 140u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004AB7B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 26272u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x004A8000u < 16384u) { entry = entries_00AA[(t - 0x004A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004AB51C:
    set32(c.r[2], ld32((c.r[17].w[0] + 272u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB530u); set32(c.r[4], ld32((c.r[17].w[0] + 272u)));  if (depth < kMaxDepth) unit_0038(c, 421u, depth + 1u); else { c.pc = 0x002E2E30u; return; } if (c.pc != 0x004AB530u) [[unlikely]] return; }
L_004AB530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB538u); set32(c.r[4], ld32((c.r[17].w[0] + 272u)));  if (depth < kMaxDepth) unit_0038(c, 419u, depth + 1u); else { c.pc = 0x002E2DF0u; return; } if (c.pc != 0x004AB538u) [[unlikely]] return; }
L_004AB538:
    set32(c.r[4], ld32((c.r[17].w[0] + 284u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB544u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004AB544u) [[unlikely]] return; }
L_004AB544:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 216u));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004AB7B0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 288u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB560u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004AB560u) [[unlikely]] return; }
L_004AB560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 300u));  if (t) { goto L_004AB7B4; } }
L_004AB568:
    set32(c.r[2], ld32((c.r[17].w[0] + 272u)));
    st8((c.r[2].w[0] + 53u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 284u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB57Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004AB57Cu) [[unlikely]] return; }
L_004AB57C:
    set32(c.r[4], ld32((c.r[17].w[0] + 276u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB5A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 29u, depth + 1u); else { c.pc = 0x00344540u; return; } if (c.pc != 0x004AB5A0u) [[unlikely]] return; }
L_004AB5A0:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB5B4u); st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0075(c, 188u, depth + 1u); else { c.pc = 0x003D70E0u; return; } if (c.pc != 0x004AB5B4u) [[unlikely]] return; }
L_004AB5B4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AB62C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 176u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AB5F8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    st32((c.r[29].w[0] + 152u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.f[20]);  if (t) { goto L_004AB614; } }
L_004AB5F8:
    c.f[2] = ld32((c.r[16].w[0] + 164u));
    c.f[1] = ld32((c.r[16].w[0] + 168u));
    c.f[0] = ld32((c.r[16].w[0] + 160u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    st32((c.r[29].w[0] + 152u), c.f[1]);
    st32((c.r[29].w[0] + 156u), c.f[21]);
    c.budget -= 7;
L_004AB614:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB62Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AB62Cu) [[unlikely]] return; }
L_004AB62C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 216u));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004AB7B0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 288u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB648u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004AB648u) [[unlikely]] return; }
L_004AB648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004AB7B0; } }
L_004AB650:
    set32(c.r[4], ld32((c.r[17].w[0] + 284u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB65Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004AB65Cu) [[unlikely]] return; }
L_004AB65C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 216u));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004AB678; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 288u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB678u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004AB678u) [[unlikely]] return; }
L_004AB678:
    set32(c.r[2], ld32((c.r[17].w[0] + 272u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB68Cu); set32(c.r[4], ld32((c.r[17].w[0] + 272u)));  if (depth < kMaxDepth) unit_0038(c, 421u, depth + 1u); else { c.pc = 0x002E2E30u; return; } if (c.pc != 0x004AB68Cu) [[unlikely]] return; }
L_004AB68C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB694u); set32(c.r[4], ld32((c.r[17].w[0] + 272u)));  if (depth < kMaxDepth) unit_0038(c, 419u, depth + 1u); else { c.pc = 0x002E2DF0u; return; } if (c.pc != 0x004AB694u) [[unlikely]] return; }
L_004AB694:
    set32(c.r[4], ld32((c.r[17].w[0] + 272u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB6A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0038(c, 416u, depth + 1u); else { c.pc = 0x002E2D80u; return; } if (c.pc != 0x004AB6A0u) [[unlikely]] return; }
L_004AB6A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004AB7B0; } }
L_004AB6A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 272u)));
    st8((c.r[2].w[0] + 53u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 284u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB6BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004AB6BCu) [[unlikely]] return; }
L_004AB6BC:
    set32(c.r[4], ld32((c.r[17].w[0] + 288u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB6C8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004AB6C8u) [[unlikely]] return; }
L_004AB6C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 280u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB6ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 29u, depth + 1u); else { c.pc = 0x00344540u; return; } if (c.pc != 0x004AB6ECu) [[unlikely]] return; }
L_004AB6EC:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB700u); st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0075(c, 188u, depth + 1u); else { c.pc = 0x003D70E0u; return; } if (c.pc != 0x004AB700u) [[unlikely]] return; }
L_004AB700:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AB7B0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 176u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004AB744; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), c.f[22]);  if (t) { goto L_004AB760; } }
L_004AB744:
    c.f[2] = ld32((c.r[16].w[0] + 164u));
    c.f[1] = ld32((c.r[16].w[0] + 168u));
    c.f[0] = ld32((c.r[16].w[0] + 160u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[23]);
    c.budget -= 7;
L_004AB760:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB778u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004AB778u) [[unlikely]] return; }
L_004AB778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004AB7B0; } }
L_004AB780:
    set32(c.r[2], ld32((c.r[17].w[0] + 272u)));
    st8((c.r[2].w[0] + 53u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 284u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB794u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004AB794u) [[unlikely]] return; }
L_004AB794:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 216u));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004AB7B0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 288u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB7B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004AB7B0u) [[unlikely]] return; }
L_004AB7B0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 300u));
    c.budget -= 1;
L_004AB7B4:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004AB7E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB7C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004AB7C8u) [[unlikely]] return; }
L_004AB7C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004AB7E8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 252u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 256u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB7E0u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 110u, depth + 1u); else { c.pc = 0x003458D0u; return; } if (c.pc != 0x004AB7E0u) [[unlikely]] return; }
L_004AB7E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004AB800; } }
L_004AB7E8:
    set32(c.r[5], ld32((c.r[17].w[0] + 252u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 256u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB7F8u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 117u, depth + 1u); else { c.pc = 0x00345A30u; return; } if (c.pc != 0x004AB7F8u) [[unlikely]] return; }
L_004AB7F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AB7E0u | kUnwind; return; } goto L_004AB7E0; } }
L_004AB800:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004AB820:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 300u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_004AB840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB85Cu); st8((c.r[4].w[0] + 300u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AA(c, 407u, depth + 1u); else { c.pc = 0x004AB4C0u; return; } if (c.pc != 0x004AB85Cu) [[unlikely]] return; }
L_004AB85C:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AB870:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 300u));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004AB880:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x004A8000u < 16384u) { entry = entries_00AA[(t - 0x004A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004AB890:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x004A8000u < 16384u) { entry = entries_00AA[(t - 0x004A8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004AB8A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB8B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004AB8B4u) [[unlikely]] return; }
L_004AB8B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB8BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 407u, depth + 1u); else { c.pc = 0x004AB4C0u; return; } if (c.pc != 0x004AB8BCu) [[unlikely]] return; }
L_004AB8BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004AB8D0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x004AB4C0u | kUnwind; return; } goto L_004AB4C0; }
L_004AB8E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 216u));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004AB900; } }
L_004AB8F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004AB918; } }
L_004AB900:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[4].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB910u); set32(c.r[4], c.r[2].w[0] + 528u);  if (depth < kMaxDepth) unit_00A7(c, 153u, depth + 1u); else { c.pc = 0x0049EA50u; return; } if (c.pc != 0x004AB910u) [[unlikely]] return; }
L_004AB910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AB8F8u | kUnwind; return; } goto L_004AB8F8; } }
L_004AB918:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004AB920:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 216u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004AB948; } }
L_004AB940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004AB9AC; } }
L_004AB948:
    c.f[3] = ld32((c.r[16].w[0] + 56u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    set32(c.r[6], 0u + 12u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[7], 0u - 1u);
    c.f[4] = 0u;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[9], c.r[29].w[0] + 32u);
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 40u), 0u);
    set32(c.r[4], c.r[2].w[0] + 528u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 56u), c.f[3]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004AB9A4u); st32((c.r[29].w[0] + 48u), c.f[0]);  if (depth < kMaxDepth) unit_00A7(c, 162u, depth + 1u); else { c.pc = 0x0049EB80u; return; } if (c.pc != 0x004AB9A4u) [[unlikely]] return; }
L_004AB9A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 176u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004AB940u | kUnwind; return; } goto L_004AB940; } }
L_004AB9AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004AB9C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 5u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 300u));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004ABA2C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_004ABB04; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 304u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[3].w[0] - 10224u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004ABB04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABA14u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004ABA14u) [[unlikely]] return; }
L_004ABA14:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 31060u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABA24u); st8((c.r[16].w[0] + 300u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AA(c, 407u, depth + 1u); else { c.pc = 0x004AB4C0u; return; } if (c.pc != 0x004ABA24u) [[unlikely]] return; }
L_004ABA24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004ABB08; } }
L_004ABA2C:
    set32(c.r[4], ld32((c.r[16].w[0] + 308u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004ABA40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABA40u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0085(c, 118u, depth + 1u); else { c.pc = 0x00416580u; return; } if (c.pc != 0x004ABA40u) [[unlikely]] return; }
L_004ABA40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 304u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[3].w[0] - 10224u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004ABB04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABA6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004ABA6Cu) [[unlikely]] return; }
L_004ABA6C:
    set32(c.r[4], ld32((c.r[16].w[0] + 308u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004ABA80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABA80u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x004ABA80u) [[unlikely]] return; }
L_004ABA80:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 31056u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABA90u); st8((c.r[16].w[0] + 300u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AA(c, 407u, depth + 1u); else { c.pc = 0x004AB4C0u; return; } if (c.pc != 0x004ABA90u) [[unlikely]] return; }
L_004ABA90:
    set32(c.r[4], 0u + 11u);
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABAA0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x004ABAA0u) [[unlikely]] return; }
L_004ABAA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 28492u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABAB8u); set32(c.r[4], c.r[3].w[0] + 416u);  if (depth < kMaxDepth) unit_00A9(c, 55u, depth + 1u); else { c.pc = 0x004A4B00u; return; } if (c.pc != 0x004ABAB8u) [[unlikely]] return; }
L_004ABAB8:
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st32((c.r[29].w[0] + 36u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[6], 0u + 50u);
    set32(c.r[7], c.r[29].w[0] + 32u);
    set32(c.r[8], 0u + 1u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABAF0u); st32((c.r[29].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_0029(c, 190u, depth + 1u); else { c.pc = 0x002A65C0u; return; } if (c.pc != 0x004ABAF0u) [[unlikely]] return; }
L_004ABAF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABAFCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 238u, depth + 1u); else { c.pc = 0x002BAF40u; return; } if (c.pc != 0x004ABAFCu) [[unlikely]] return; }
L_004ABAFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ABA24u | kUnwind; return; } goto L_004ABA24; } }
L_004ABB04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004ABB08:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004ABB20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABB3Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x004ABB3Cu) [[unlikely]] return; }
L_004ABB3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004ABC18; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 300u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_004ABBC4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004ABC00; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABB6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ABB6Cu) [[unlikely]] return; }
L_004ABB6C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004ABC00; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 216u));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004ABB90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABB90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 172u, depth + 1u); else { c.pc = 0x0027DA80u; return; } if (c.pc != 0x004ABB90u) [[unlikely]] return; }
L_004ABB90:
    set32(c.r[4], ld32((c.r[16].w[0] + 296u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABBA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ABBA4u) [[unlikely]] return; }
L_004ABBA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 296u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[2].w[0] + 28u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 296u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABBBCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 278u, depth + 1u); else { c.pc = 0x00283910u; return; } if (c.pc != 0x004ABBBCu) [[unlikely]] return; }
L_004ABBBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004ABC1C; } }
L_004ABBC4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 216u));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004ABC18; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_004ABC18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABBE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004ABBE8u) [[unlikely]] return; }
L_004ABBE8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 31060u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABBF8u); st8((c.r[16].w[0] + 300u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AA(c, 407u, depth + 1u); else { c.pc = 0x004AB4C0u; return; } if (c.pc != 0x004ABBF8u) [[unlikely]] return; }
L_004ABBF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004ABC18; } }
L_004ABC00:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 396u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABC10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ABC10u) [[unlikely]] return; }
L_004ABC10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ABBF8u | kUnwind; return; } goto L_004ABBF8; } }
L_004ABC18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004ABC1C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004ABC30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[28].w[0] - 28304u), 0u);
    set32(c.r[5], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_004ABC54; } }
L_004ABC4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004ABC6C; } }
L_004ABC54:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[4].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABC64u); set32(c.r[4], c.r[2].w[0] + 528u);  if (depth < kMaxDepth) unit_00A7(c, 153u, depth + 1u); else { c.pc = 0x0049EA50u; return; } if (c.pc != 0x004ABC64u) [[unlikely]] return; }
L_004ABC64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ABC4Cu | kUnwind; return; } goto L_004ABC4C; } }
L_004ABC6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004ABC80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 217u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 28304u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 24ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[28].w[0] - 28304u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 296u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABCBCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ABCBCu) [[unlikely]] return; }
L_004ABCBC:
    set32(c.r[4], ld32((c.r[16].w[0] + 296u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 176u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 216u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004ABCE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 31064u)));  if (t) { goto L_004ABD00; } }
L_004ABCE4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 31068u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABCF4u); st8((c.r[16].w[0] + 300u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AA(c, 407u, depth + 1u); else { c.pc = 0x004AB4C0u; return; } if (c.pc != 0x004ABCF4u) [[unlikely]] return; }
L_004ABCF4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_004ABD10; } }
L_004ABD00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABD0Cu); st8((c.r[16].w[0] + 300u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AA(c, 407u, depth + 1u); else { c.pc = 0x004AB4C0u; return; } if (c.pc != 0x004ABD0Cu) [[unlikely]] return; }
L_004ABD0C:
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 1;
L_004ABD10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABD18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004ABD18u) [[unlikely]] return; }
L_004ABD18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004ABD30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004ABD40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 216u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004ABD9C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 308u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004ABD70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABD70u); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x004ABD70u) [[unlikely]] return; }
L_004ABD70:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 31076u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABD80u); st8((c.r[16].w[0] + 300u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AA(c, 407u, depth + 1u); else { c.pc = 0x004AB4C0u; return; } if (c.pc != 0x004ABD80u) [[unlikely]] return; }
L_004ABD80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] - 10224u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABD94u); st32((c.r[16].w[0] + 304u), c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004ABD94u) [[unlikely]] return; }
L_004ABD94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004ABDB0; } }
L_004ABD9C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 31072u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABDA8u); st8((c.r[16].w[0] + 300u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AA(c, 407u, depth + 1u); else { c.pc = 0x004AB4C0u; return; } if (c.pc != 0x004ABDA8u) [[unlikely]] return; }
L_004ABDA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ABD94u | kUnwind; return; } goto L_004ABD94; } }
L_004ABDB0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004ABDC0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 300u));
    c.r[2].d[0] = c.r[2].d[0] ^ 6ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004ABDD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004ABE3C; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_004ABE3C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 304u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABE04u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ABE04u) [[unlikely]] return; }
L_004ABE04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004ABE3C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABE1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ABE1Cu) [[unlikely]] return; }
L_004ABE1C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 328u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABE34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004ABE34u) [[unlikely]] return; }
L_004ABE34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004ABE40; } }
L_004ABE3C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004ABE40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004ABE60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004ABE80; } }
L_004ABE78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004ABEA4; } }
L_004ABE80:
    st32((c.r[16].w[0] + 64u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 31080u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABE90u); st8((c.r[16].w[0] + 300u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AA(c, 407u, depth + 1u); else { c.pc = 0x004AB4C0u; return; } if (c.pc != 0x004ABE90u) [[unlikely]] return; }
L_004ABE90:
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABE9Cu); set32(c.r[5], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_00A8(c, 105u, depth + 1u); else { c.pc = 0x004A13D0u; return; } if (c.pc != 0x004ABE9Cu) [[unlikely]] return; }
L_004ABE9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004ABE78u | kUnwind; return; } goto L_004ABE78; } }
L_004ABEA4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004ABEB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[1] = ld32((c.r[4].w[0] + 192u));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[4] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[6].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 196u));
    st32((c.r[6].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 200u));
    st32((c.r[6].w[0] + 8u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 204u));
    st32((c.r[6].w[0] + 12u), c.f[1]);
    c.f[3] = ld32((c.r[6].w[0] + 4u));
    c.f[5] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    st32((c.r[29].w[0] + 8u), c.f[4]);
    st32((c.r[29].w[0] + 4u), c.f[2]);
    st32((c.r[29].w[0]), c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[4]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004ABF20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004ABF30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004ABF40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABF54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 289u, depth + 1u); else { c.pc = 0x004AA490u; return; } if (c.pc != 0x004ABF54u) [[unlikely]] return; }
L_004ABF54:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004ABF6C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 300u));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_004ABF6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004ABF80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 300u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00AB(c, 8u, depth); } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 31088u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABFACu); st8((c.r[17].w[0] + 300u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AA(c, 407u, depth + 1u); else { c.pc = 0x004AB4C0u; return; } if (c.pc != 0x004ABFACu) [[unlikely]] return; }
L_004ABFAC:
    set32(c.r[4], ld32((c.r[17].w[0] + 292u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00AB(c, 2u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABFC0u); set32(c.r[5], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0082(c, 178u, depth + 1u); else { c.pc = 0x004098B0u; return; } if (c.pc != 0x004ABFC0u) [[unlikely]] return; }
L_004ABFC0:
    set32(c.r[4], ld32((c.r[17].w[0] + 292u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABFCCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004ABFCCu) [[unlikely]] return; }
L_004ABFCC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004ABFD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABFD8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 238u, depth + 1u); else { c.pc = 0x002BAF40u; return; } if (c.pc != 0x004ABFD8u) [[unlikely]] return; }
L_004ABFD8:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 216u));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_00AB(c, 10u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] - 10224u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004ABFFCu); st32((c.r[17].w[0] + 304u), c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004ABFFCu) [[unlikely]] return; }
L_004ABFFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { [[clang::musttail]] return unit_00AB(c, 11u, depth); } }
    [[clang::musttail]] return unit_00AB(c, 2u, depth);
}

}

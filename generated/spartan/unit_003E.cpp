#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003E[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0,
    33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0,
    0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0,
    42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 52, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 70,
    0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0,
    0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0,
    0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 100, 101, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0,
    0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 133,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0,
    0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0,
    0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0, 0,
    0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231,
    0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 252, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261,
    0, 262, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0,
    0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 278, 0,
    0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 284, 0, 285,
    0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 289, 0, 0, 0, 290, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0,
    0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 312, 0, 313, 0, 314, 0, 0, 315, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0,
    319, 0, 0, 320, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 0,
    341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0,
    0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0,
    0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0,
    0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0,
    0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0,
    0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382,
    0, 383, 0, 384, 0, 385, 0, 386, 0, 387, 0, 388, 0, 389, 0, 390, 0, 391, 0, 0, 392, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395,
    0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 404,
    0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0,
    0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0,
    0, 0, 414, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423,
    0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0,
    449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 457, 0, 458,
    0, 459, 0, 460, 0, 461, 0, 462, 0, 463, 0, 464, 0, 0, 465, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 469, 0, 0, 470,
    0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 473, 0, 0, 474, 0, 0, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0,
    0, 0, 0, 0, 478, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 480, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0,
    0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0,
};

void unit_003E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002F8000;
    case 2u: goto L_002F8030;
    case 3u: goto L_002F8040;
    case 4u: goto L_002F8080;
    case 5u: goto L_002F808C;
    case 6u: goto L_002F80B0;
    case 7u: goto L_002F80C0;
    case 8u: goto L_002F80E0;
    case 9u: goto L_002F80F8;
    case 10u: goto L_002F8130;
    case 11u: goto L_002F819C;
    case 12u: goto L_002F81A4;
    case 13u: goto L_002F81B0;
    case 14u: goto L_002F81C0;
    case 15u: goto L_002F81C8;
    case 16u: goto L_002F8230;
    case 17u: goto L_002F8240;
    case 18u: goto L_002F8250;
    case 19u: goto L_002F8270;
    case 20u: goto L_002F8284;
    case 21u: goto L_002F8304;
    case 22u: goto L_002F8320;
    case 23u: goto L_002F8330;
    case 24u: goto L_002F8338;
    case 25u: goto L_002F8350;
    case 26u: goto L_002F8370;
    case 27u: goto L_002F838C;
    case 28u: goto L_002F8398;
    case 29u: goto L_002F83B4;
    case 30u: goto L_002F83D0;
    case 31u: goto L_002F83DC;
    case 32u: goto L_002F83F0;
    case 33u: goto L_002F8400;
    case 34u: goto L_002F8410;
    case 35u: goto L_002F8460;
    case 36u: goto L_002F846C;
    case 37u: goto L_002F8478;
    case 38u: goto L_002F849C;
    case 39u: goto L_002F84B8;
    case 40u: goto L_002F84D0;
    case 41u: goto L_002F84EC;
    case 42u: goto L_002F8500;
    case 43u: goto L_002F850C;
    case 44u: goto L_002F8530;
    case 45u: goto L_002F8540;
    case 46u: goto L_002F8564;
    case 47u: goto L_002F8580;
    case 48u: goto L_002F85B0;
    case 49u: goto L_002F8620;
    case 50u: goto L_002F8628;
    case 51u: goto L_002F8630;
    case 52u: goto L_002F8638;
    case 53u: goto L_002F8644;
    case 54u: goto L_002F8658;
    case 55u: goto L_002F8664;
    case 56u: goto L_002F8670;
    case 57u: goto L_002F8680;
    case 58u: goto L_002F86A8;
    case 59u: goto L_002F86C0;
    case 60u: goto L_002F86C8;
    case 61u: goto L_002F8734;
    case 62u: goto L_002F8744;
    case 63u: goto L_002F8770;
    case 64u: goto L_002F8784;
    case 65u: goto L_002F87A0;
    case 66u: goto L_002F87B0;
    case 67u: goto L_002F87BC;
    case 68u: goto L_002F87D8;
    case 69u: goto L_002F87F4;
    case 70u: goto L_002F87FC;
    case 71u: goto L_002F881C;
    case 72u: goto L_002F8828;
    case 73u: goto L_002F8838;
    case 74u: goto L_002F8840;
    case 75u: goto L_002F885C;
    case 76u: goto L_002F891C;
    case 77u: goto L_002F8938;
    case 78u: goto L_002F8948;
    case 79u: goto L_002F8950;
    case 80u: goto L_002F8968;
    case 81u: goto L_002F8988;
    case 82u: goto L_002F89A4;
    case 83u: goto L_002F89B4;
    case 84u: goto L_002F89D0;
    case 85u: goto L_002F89EC;
    case 86u: goto L_002F89F8;
    case 87u: goto L_002F8A14;
    case 88u: goto L_002F8A24;
    case 89u: goto L_002F8A34;
    case 90u: goto L_002F8A50;
    case 91u: goto L_002F8A60;
    case 92u: goto L_002F8A70;
    case 93u: goto L_002F8A90;
    case 94u: goto L_002F8AA0;
    case 95u: goto L_002F8AD0;
    case 96u: goto L_002F8AE4;
    case 97u: goto L_002F8B14;
    case 98u: goto L_002F8B30;
    case 99u: goto L_002F8B90;
    case 100u: goto L_002F8B98;
    case 101u: goto L_002F8B9C;
    case 102u: goto L_002F8BA8;
    case 103u: goto L_002F8BB8;
    case 104u: goto L_002F8BD4;
    case 105u: goto L_002F8C30;
    case 106u: goto L_002F8C64;
    case 107u: goto L_002F8C84;
    case 108u: goto L_002F8CA0;
    case 109u: goto L_002F8CD0;
    case 110u: goto L_002F8CF8;
    case 111u: goto L_002F8D20;
    case 112u: goto L_002F8D3C;
    case 113u: goto L_002F8D50;
    case 114u: goto L_002F8DA0;
    case 115u: goto L_002F8DD4;
    case 116u: goto L_002F8DE0;
    case 117u: goto L_002F8E20;
    case 118u: goto L_002F8E8C;
    case 119u: goto L_002F8EC0;
    case 120u: goto L_002F8F30;
    case 121u: goto L_002F8F38;
    case 122u: goto L_002F8F44;
    case 123u: goto L_002F8FAC;
    case 124u: goto L_002F8FD0;
    case 125u: goto L_002F8FFC;
    case 126u: goto L_002F9088;
    case 127u: goto L_002F90A0;
    case 128u: goto L_002F90B0;
    case 129u: goto L_002F90B8;
    case 130u: goto L_002F90D0;
    case 131u: goto L_002F90E0;
    case 132u: goto L_002F90EC;
    case 133u: goto L_002F90FC;
    case 134u: goto L_002F9140;
    case 135u: goto L_002F9150;
    case 136u: goto L_002F9160;
    case 137u: goto L_002F9170;
    case 138u: goto L_002F9194;
    case 139u: goto L_002F919C;
    case 140u: goto L_002F91C0;
    case 141u: goto L_002F9210;
    case 142u: goto L_002F9244;
    case 143u: goto L_002F9250;
    case 144u: goto L_002F9290;
    case 145u: goto L_002F92F8;
    case 146u: goto L_002F9310;
    case 147u: goto L_002F9340;
    case 148u: goto L_002F93B4;
    case 149u: goto L_002F93C8;
    case 150u: goto L_002F93D4;
    case 151u: goto L_002F93F4;
    case 152u: goto L_002F9404;
    case 153u: goto L_002F9414;
    case 154u: goto L_002F943C;
    case 155u: goto L_002F9454;
    case 156u: goto L_002F945C;
    case 157u: goto L_002F94C8;
    case 158u: goto L_002F94D8;
    case 159u: goto L_002F9500;
    case 160u: goto L_002F9520;
    case 161u: goto L_002F953C;
    case 162u: goto L_002F954C;
    case 163u: goto L_002F9558;
    case 164u: goto L_002F9574;
    case 165u: goto L_002F9590;
    case 166u: goto L_002F9598;
    case 167u: goto L_002F95B8;
    case 168u: goto L_002F95C4;
    case 169u: goto L_002F95D4;
    case 170u: goto L_002F95DC;
    case 171u: goto L_002F95F8;
    case 172u: goto L_002F9694;
    case 173u: goto L_002F96B0;
    case 174u: goto L_002F96C0;
    case 175u: goto L_002F96C8;
    case 176u: goto L_002F96E0;
    case 177u: goto L_002F9700;
    case 178u: goto L_002F971C;
    case 179u: goto L_002F9728;
    case 180u: goto L_002F9734;
    case 181u: goto L_002F9744;
    case 182u: goto L_002F9764;
    case 183u: goto L_002F9770;
    case 184u: goto L_002F978C;
    case 185u: goto L_002F979C;
    case 186u: goto L_002F97BC;
    case 187u: goto L_002F97CC;
    case 188u: goto L_002F97DC;
    case 189u: goto L_002F9800;
    case 190u: goto L_002F9810;
    case 191u: goto L_002F9820;
    case 192u: goto L_002F9860;
    case 193u: goto L_002F9888;
    case 194u: goto L_002F9898;
    case 195u: goto L_002F98D0;
    case 196u: goto L_002F98DC;
    case 197u: goto L_002F9924;
    case 198u: goto L_002F9930;
    case 199u: goto L_002F9944;
    case 200u: goto L_002F9964;
    case 201u: goto L_002F99D0;
    case 202u: goto L_002F99DC;
    case 203u: goto L_002F99E4;
    case 204u: goto L_002F9A18;
    case 205u: goto L_002F9A38;
    case 206u: goto L_002F9A58;
    case 207u: goto L_002F9A68;
    case 208u: goto L_002F9A74;
    case 209u: goto L_002F9A94;
    case 210u: goto L_002F9AB4;
    case 211u: goto L_002F9AF0;
    case 212u: goto L_002F9B14;
    case 213u: goto L_002F9B38;
    case 214u: goto L_002F9B58;
    case 215u: goto L_002F9B70;
    case 216u: goto L_002F9B80;
    case 217u: goto L_002F9BD0;
    case 218u: goto L_002F9C04;
    case 219u: goto L_002F9C10;
    case 220u: goto L_002F9C50;
    case 221u: goto L_002F9C60;
    case 222u: goto L_002F9CE8;
    case 223u: goto L_002F9D00;
    case 224u: goto L_002F9D20;
    case 225u: goto L_002F9D3C;
    case 226u: goto L_002F9D48;
    case 227u: goto L_002F9E00;
    case 228u: goto L_002F9EC4;
    case 229u: goto L_002F9ED4;
    case 230u: goto L_002F9EE0;
    case 231u: goto L_002F9EFC;
    case 232u: goto L_002F9F18;
    case 233u: goto L_002F9F20;
    case 234u: goto L_002F9F40;
    case 235u: goto L_002F9F4C;
    case 236u: goto L_002F9F5C;
    case 237u: goto L_002F9F64;
    case 238u: goto L_002F9F80;
    case 239u: goto L_002F9FA0;
    case 240u: goto L_002F9FB0;
    case 241u: goto L_002FA000;
    case 242u: goto L_002FA03C;
    case 243u: goto L_002FA048;
    case 244u: goto L_002FA068;
    case 245u: goto L_002FA094;
    case 246u: goto L_002FA0B0;
    case 247u: goto L_002FA118;
    case 248u: goto L_002FA130;
    case 249u: goto L_002FA154;
    case 250u: goto L_002FA170;
    case 251u: goto L_002FA190;
    case 252u: goto L_002FA20C;
    case 253u: goto L_002FA210;
    case 254u: goto L_002FA238;
    case 255u: goto L_002FA250;
    case 256u: goto L_002FA258;
    case 257u: goto L_002FA2C4;
    case 258u: goto L_002FA310;
    case 259u: goto L_002FA32C;
    case 260u: goto L_002FA34C;
    case 261u: goto L_002FA37C;
    case 262u: goto L_002FA384;
    case 263u: goto L_002FA38C;
    case 264u: goto L_002FA3A0;
    case 265u: goto L_002FA3E0;
    case 266u: goto L_002FA40C;
    case 267u: goto L_002FA418;
    case 268u: goto L_002FA488;
    case 269u: goto L_002FA514;
    case 270u: goto L_002FA53C;
    case 271u: goto L_002FA554;
    case 272u: goto L_002FA564;
    case 273u: goto L_002FA56C;
    case 274u: goto L_002FA584;
    case 275u: goto L_002FA5A8;
    case 276u: goto L_002FA5DC;
    case 277u: goto L_002FA5EC;
    case 278u: goto L_002FA5F8;
    case 279u: goto L_002FA614;
    case 280u: goto L_002FA630;
    case 281u: goto L_002FA638;
    case 282u: goto L_002FA658;
    case 283u: goto L_002FA664;
    case 284u: goto L_002FA674;
    case 285u: goto L_002FA67C;
    case 286u: goto L_002FA698;
    case 287u: goto L_002FA6D0;
    case 288u: goto L_002FA6DC;
    case 289u: goto L_002FA6E4;
    case 290u: goto L_002FA6F4;
    case 291u: goto L_002FA728;
    case 292u: goto L_002FA734;
    case 293u: goto L_002FA740;
    case 294u: goto L_002FA748;
    case 295u: goto L_002FA784;
    case 296u: goto L_002FA7B0;
    case 297u: goto L_002FA7BC;
    case 298u: goto L_002FA7E0;
    case 299u: goto L_002FA808;
    case 300u: goto L_002FA818;
    case 301u: goto L_002FA830;
    case 302u: goto L_002FA850;
    case 303u: goto L_002FA890;
    case 304u: goto L_002FA8A8;
    case 305u: goto L_002FA8C0;
    case 306u: goto L_002FA8E8;
    case 307u: goto L_002FA8F4;
    case 308u: goto L_002FA910;
    case 309u: goto L_002FA930;
    case 310u: goto L_002FA99C;
    case 311u: goto L_002FA9A4;
    case 312u: goto L_002FA9AC;
    case 313u: goto L_002FA9B4;
    case 314u: goto L_002FA9BC;
    case 315u: goto L_002FA9C8;
    case 316u: goto L_002FA9CC;
    case 317u: goto L_002FA9E4;
    case 318u: goto L_002FA9F4;
    case 319u: goto L_002FAA00;
    case 320u: goto L_002FAA0C;
    case 321u: goto L_002FAA18;
    case 322u: goto L_002FAA24;
    case 323u: goto L_002FAA3C;
    case 324u: goto L_002FAA58;
    case 325u: goto L_002FAA68;
    case 326u: goto L_002FAA90;
    case 327u: goto L_002FAAB4;
    case 328u: goto L_002FAB6C;
    case 329u: goto L_002FAB94;
    case 330u: goto L_002FABD8;
    case 331u: goto L_002FAC20;
    case 332u: goto L_002FAC30;
    case 333u: goto L_002FAC3C;
    case 334u: goto L_002FAC4C;
    case 335u: goto L_002FAC58;
    case 336u: goto L_002FACA0;
    case 337u: goto L_002FACCC;
    case 338u: goto L_002FACDC;
    case 339u: goto L_002FACE8;
    case 340u: goto L_002FACF4;
    case 341u: goto L_002FAD00;
    case 342u: goto L_002FAD18;
    case 343u: goto L_002FAD28;
    case 344u: goto L_002FAD50;
    case 345u: goto L_002FAD60;
    case 346u: goto L_002FAD9C;
    case 347u: goto L_002FADC0;
    case 348u: goto L_002FADD0;
    case 349u: goto L_002FADF4;
    case 350u: goto L_002FAE44;
    case 351u: goto L_002FAE50;
    case 352u: goto L_002FAE5C;
    case 353u: goto L_002FAE9C;
    case 354u: goto L_002FAEB8;
    case 355u: goto L_002FAEE8;
    case 356u: goto L_002FAF14;
    case 357u: goto L_002FAF3C;
    case 358u: goto L_002FAF5C;
    case 359u: goto L_002FAFB0;
    case 360u: goto L_002FAFD8;
    case 361u: goto L_002FAFF4;
    case 362u: goto L_002FB00C;
    case 363u: goto L_002FB054;
    case 364u: goto L_002FB070;
    case 365u: goto L_002FB130;
    case 366u: goto L_002FB168;
    case 367u: goto L_002FB178;
    case 368u: goto L_002FB190;
    case 369u: goto L_002FB19C;
    case 370u: goto L_002FB1C0;
    case 371u: goto L_002FB1E8;
    case 372u: goto L_002FB1F8;
    case 373u: goto L_002FB210;
    case 374u: goto L_002FB230;
    case 375u: goto L_002FB270;
    case 376u: goto L_002FB288;
    case 377u: goto L_002FB2A0;
    case 378u: goto L_002FB2C8;
    case 379u: goto L_002FB2D4;
    case 380u: goto L_002FB2F0;
    case 381u: goto L_002FB310;
    case 382u: goto L_002FB37C;
    case 383u: goto L_002FB384;
    case 384u: goto L_002FB38C;
    case 385u: goto L_002FB394;
    case 386u: goto L_002FB39C;
    case 387u: goto L_002FB3A4;
    case 388u: goto L_002FB3AC;
    case 389u: goto L_002FB3B4;
    case 390u: goto L_002FB3BC;
    case 391u: goto L_002FB3C4;
    case 392u: goto L_002FB3D0;
    case 393u: goto L_002FB3D4;
    case 394u: goto L_002FB3EC;
    case 395u: goto L_002FB3FC;
    case 396u: goto L_002FB408;
    case 397u: goto L_002FB414;
    case 398u: goto L_002FB420;
    case 399u: goto L_002FB43C;
    case 400u: goto L_002FB44C;
    case 401u: goto L_002FB458;
    case 402u: goto L_002FB464;
    case 403u: goto L_002FB470;
    case 404u: goto L_002FB47C;
    case 405u: goto L_002FB494;
    case 406u: goto L_002FB4B0;
    case 407u: goto L_002FB4C0;
    case 408u: goto L_002FB4D0;
    case 409u: goto L_002FB4F0;
    case 410u: goto L_002FB514;
    case 411u: goto L_002FB61C;
    case 412u: goto L_002FB644;
    case 413u: goto L_002FB678;
    case 414u: goto L_002FB688;
    case 415u: goto L_002FB694;
    case 416u: goto L_002FB6A4;
    case 417u: goto L_002FB6B4;
    case 418u: goto L_002FB6C0;
    case 419u: goto L_002FB6E4;
    case 420u: goto L_002FB6F0;
    case 421u: goto L_002FB730;
    case 422u: goto L_002FB740;
    case 423u: goto L_002FB77C;
    case 424u: goto L_002FB7A0;
    case 425u: goto L_002FB7B0;
    case 426u: goto L_002FB7D4;
    case 427u: goto L_002FB840;
    case 428u: goto L_002FB84C;
    case 429u: goto L_002FB884;
    case 430u: goto L_002FB890;
    case 431u: goto L_002FB8BC;
    case 432u: goto L_002FB8E8;
    case 433u: goto L_002FB910;
    case 434u: goto L_002FB94C;
    case 435u: goto L_002FB978;
    case 436u: goto L_002FB9A0;
    case 437u: goto L_002FB9C0;
    case 438u: goto L_002FBA14;
    case 439u: goto L_002FBA3C;
    case 440u: goto L_002FBA9C;
    case 441u: goto L_002FBAC4;
    case 442u: goto L_002FBB10;
    case 443u: goto L_002FBB30;
    case 444u: goto L_002FBBF0;
    case 445u: goto L_002FBC28;
    case 446u: goto L_002FBC38;
    case 447u: goto L_002FBC50;
    case 448u: goto L_002FBC5C;
    case 449u: goto L_002FBC80;
    case 450u: goto L_002FBC90;
    case 451u: goto L_002FBCB0;
    case 452u: goto L_002FBCC8;
    case 453u: goto L_002FBCDC;
    case 454u: goto L_002FBCF0;
    case 455u: goto L_002FBD64;
    case 456u: goto L_002FBD6C;
    case 457u: goto L_002FBD74;
    case 458u: goto L_002FBD7C;
    case 459u: goto L_002FBD84;
    case 460u: goto L_002FBD8C;
    case 461u: goto L_002FBD94;
    case 462u: goto L_002FBD9C;
    case 463u: goto L_002FBDA4;
    case 464u: goto L_002FBDAC;
    case 465u: goto L_002FBDB8;
    case 466u: goto L_002FBDBC;
    case 467u: goto L_002FBDD4;
    case 468u: goto L_002FBDE4;
    case 469u: goto L_002FBDF0;
    case 470u: goto L_002FBDFC;
    case 471u: goto L_002FBE08;
    case 472u: goto L_002FBE1C;
    case 473u: goto L_002FBE28;
    case 474u: goto L_002FBE34;
    case 475u: goto L_002FBE44;
    case 476u: goto L_002FBE50;
    case 477u: goto L_002FBE78;
    case 478u: goto L_002FBE90;
    case 479u: goto L_002FBE98;
    case 480u: goto L_002FBF04;
    case 481u: goto L_002FBF20;
    case 482u: goto L_002FBF30;
    case 483u: goto L_002FBF40;
    case 484u: goto L_002FBF50;
    case 485u: goto L_002FBF70;
    case 486u: goto L_002FBF88;
    case 487u: goto L_002FBFA4;
    case 488u: goto L_002FBFB4;
    case 489u: goto L_002FBFC0;
    case 490u: goto L_002FBFDC;
    case 491u: goto L_002FBFF8;
    default: bad_entry(c, 0x002F8000u); return;
    }
L_002F8000:
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    c.f[1] = ld32((c.r[19].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[1]);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7FD8u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 426u, depth); } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8030u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_001F(c, 379u, depth + 1u); else { c.pc = 0x0027FCE0u; return; } if (c.pc != 0x002F8030u) [[unlikely]] return; }
L_002F8030:
    set32(c.r[21], ld32((c.r[21].w[0] + 1552u)));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7CF0u | kUnwind; return; } [[clang::musttail]] return unit_003D(c, 418u, depth); } }
    c.budget -= 1;
L_002F8040:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 560u);  c.pc = t; return; }
L_002F8080:
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F8094; } }
L_002F808C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F809C; } }
L_002F8094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 84u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F808Cu | kUnwind; return; } goto L_002F808C; } }
L_002F809C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F80B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 84u), 0u);  c.pc = t; return; }
L_002F80C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 84u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 148u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F80E0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 173u, depth + 1u); else { c.pc = 0x003056E0u; return; } if (c.pc != 0x002F80E0u) [[unlikely]] return; }
L_002F80E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.f[12] = ld32((c.r[29].w[0] + 44u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 148u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F80F8u); set32(c.r[7], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 262u, depth + 1u); else { c.pc = 0x00283600u; return; } if (c.pc != 0x002F80F8u) [[unlikely]] return; }
L_002F80F8:
    set32(c.r[6], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1497u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 1497u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F8130:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F8230; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 14224u);
    set32(c.r[2], c.r[2].w[0] - 14216u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 88u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14204u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14192u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14180u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 14168u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F819Cu); st32((c.r[17].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0021(c, 242u, depth + 1u); else { c.pc = 0x00286E40u; return; } if (c.pc != 0x002F819Cu) [[unlikely]] return; }
L_002F819C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F81A4u); set32(c.r[4], c.r[17].w[0] + 100u);  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002F81A4u) [[unlikely]] return; }
L_002F81A4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F81B0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0011(c, 313u, depth + 1u); else { c.pc = 0x00246D80u; return; } if (c.pc != 0x002F81B0u) [[unlikely]] return; }
L_002F81B0:
    set32(c.r[4], c.r[17].w[0] + 100u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F8238; } }
    set32(c.r[4], c.r[17].w[0] + 88u);
    c.budget -= 1;
L_002F81C0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F8248; } }
L_002F81C8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F8218; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 15024u);
    set32(c.r[2], c.r[2].w[0] - 15016u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 15004u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14992u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14980u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 14968u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 18;
L_002F8218:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F8230; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8230u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002F8230u) [[unlikely]] return; }
L_002F8230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002F8258; } }
L_002F8238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8240u);  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002F8240u) [[unlikely]] return; }
L_002F8240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 88u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F81C0u | kUnwind; return; } goto L_002F81C0; } }
L_002F8248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8250u);  if (depth < kMaxDepth) unit_0021(c, 242u, depth + 1u); else { c.pc = 0x00286E40u; return; } if (c.pc != 0x002F8250u) [[unlikely]] return; }
L_002F8250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F81C8u | kUnwind; return; } goto L_002F81C8; } }
L_002F8258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F8270:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8284u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 178u, depth + 1u); else { c.pc = 0x003057A0u; return; } if (c.pc != 0x002F8284u) [[unlikely]] return; }
L_002F8284:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 14224u);
    set32(c.r[2], c.r[2].w[0] - 14216u);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14204u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14192u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14180u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14168u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], 0u + 10u);
    st32((c.r[16].w[0] + 88u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[16].w[0] + 92u), 0u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st8((c.r[16].w[0] + 148u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 148u));
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8304u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F8304u) [[unlikely]] return; }
L_002F8304:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 148u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 9952u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8320u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F8320u) [[unlikely]] return; }
L_002F8320:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8330u); set32(c.r[5], c.r[5].w[0] - 6258u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F8330u) [[unlikely]] return; }
L_002F8330:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8338u); set32(c.r[4], 0u + 1648u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002F8338u) [[unlikely]] return; }
L_002F8338:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F8350; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 148u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8350u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 316u, depth + 1u); else { c.pc = 0x00246DE0u; return; } if (c.pc != 0x002F8350u) [[unlikely]] return; }
L_002F8350:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 148u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8370u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F8370u) [[unlikely]] return; }
L_002F8370:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 148u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 9952u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F838Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F838Cu) [[unlikely]] return; }
L_002F838C:
    set32(c.r[4], c.r[16].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8398u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0021(c, 244u, depth + 1u); else { c.pc = 0x00286E80u; return; } if (c.pc != 0x002F8398u) [[unlikely]] return; }
L_002F8398:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 148u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F83B4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F83B4u) [[unlikely]] return; }
L_002F83B4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 148u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 9952u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F83D0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F83D0u) [[unlikely]] return; }
L_002F83D0:
    set32(c.r[4], c.r[16].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F83DCu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x00286D80u; return; } if (c.pc != 0x002F83DCu) [[unlikely]] return; }
L_002F83DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_002F83F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8400:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F84C0; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F84C0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F84A4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 288u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8460u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F8460u) [[unlikely]] return; }
L_002F8460:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    st32((c.r[28].w[0] - 29836u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
L_002F846C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8478u); set32(c.r[4], c.r[2].w[0] + 3504u);  if (depth < kMaxDepth) unit_0001(c, 162u, depth + 1u); else { c.pc = 0x00207380u; return; } if (c.pc != 0x002F8478u) [[unlikely]] return; }
L_002F8478:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    set32(c.r[6], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 348u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F849Cu); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 115u, depth + 1u); else { c.pc = 0x0025B180u; return; } if (c.pc != 0x002F849Cu) [[unlikely]] return; }
L_002F849C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002F84C4; } }
L_002F84A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F84B8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F84B8u) [[unlikely]] return; }
L_002F84B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 84u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F846Cu | kUnwind; return; } goto L_002F846C; } }
L_002F84C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002F84C4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F84D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F84EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F84ECu);  if (depth < kMaxDepth) unit_0001(c, 188u, depth + 1u); else { c.pc = 0x00207D20u; return; } if (c.pc != 0x002F84ECu) [[unlikely]] return; }
L_002F84EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F8500:
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F8514; } }
L_002F850C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F851C; } }
L_002F8514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 180u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F850Cu | kUnwind; return; } goto L_002F850C; } }
L_002F851C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 180u), 0u);  c.pc = t; return; }
L_002F8540:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 60u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8564u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0041(c, 173u, depth + 1u); else { c.pc = 0x003056E0u; return; } if (c.pc != 0x002F8564u) [[unlikely]] return; }
L_002F8564:
    st32((c.r[17].w[0] + 180u), c.r[16].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 180u)));
    c.f[12] = ld32((c.r[29].w[0] + 60u));
    set32(c.r[6], 0u + 9u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8580u); set32(c.r[7], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 262u, depth + 1u); else { c.pc = 0x00283600u; return; } if (c.pc != 0x002F8580u) [[unlikely]] return; }
L_002F8580:
    set32(c.r[6], ld32((c.r[17].w[0] + 180u)));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[5].d[0] = ld8((c.r[6].w[0] + 1497u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 1497u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F85B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F8734; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 14112u);
    set32(c.r[2], c.r[2].w[0] - 14104u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 132u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14092u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14080u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14068u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 14056u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8620u); st32((c.r[17].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002F8620u) [[unlikely]] return; }
L_002F8620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8628u); set32(c.r[4], c.r[17].w[0] + 148u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002F8628u) [[unlikely]] return; }
L_002F8628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8630u); set32(c.r[4], c.r[17].w[0] + 84u);  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002F8630u) [[unlikely]] return; }
L_002F8630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8638u); set32(c.r[4], c.r[17].w[0] + 164u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002F8638u) [[unlikely]] return; }
L_002F8638:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8644u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0011(c, 313u, depth + 1u); else { c.pc = 0x00246D80u; return; } if (c.pc != 0x002F8644u) [[unlikely]] return; }
L_002F8644:
    set32(c.r[4], c.r[17].w[0] + 164u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F8658; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8658u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002F8658u) [[unlikely]] return; }
L_002F8658:
    set32(c.r[4], c.r[17].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8664u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002F8664u) [[unlikely]] return; }
L_002F8664:
    set32(c.r[4], c.r[17].w[0] + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8670u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002F8670u) [[unlikely]] return; }
L_002F8670:
    set32(c.r[4], c.r[17].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F873C; } }
    set32(c.r[2], c.r[17].w[0] + 84u);
    c.budget -= 1;
L_002F8680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F86CC; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29608u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F86CC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29600u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F86AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F86A8u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002F86A8u) [[unlikely]] return; }
L_002F86A8:
    st32((c.r[28].w[0] - 29600u), 0u);
    c.budget -= 1;
L_002F86AC:
    set32(c.r[18], ld32((c.r[28].w[0] - 29604u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002F86C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F86C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002F86C0u) [[unlikely]] return; }
L_002F86C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F86C8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002F86C8u) [[unlikely]] return; }
L_002F86C8:
    st8((c.r[28].w[0] - 29608u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002F86CC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F871C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 15024u);
    set32(c.r[2], c.r[2].w[0] - 15016u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 15004u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14992u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14980u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 14968u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 18;
L_002F871C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F8734; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8734u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002F8734u) [[unlikely]] return; }
L_002F8734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002F874C; } }
L_002F873C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8744u);  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002F8744u) [[unlikely]] return; }
L_002F8744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[17].w[0] + 84u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F8680u | kUnwind; return; } goto L_002F8680; } }
L_002F874C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F8770:
    set32(c.r[29], c.r[29].w[0] - 592u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8784u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 178u, depth + 1u); else { c.pc = 0x003057A0u; return; } if (c.pc != 0x002F8784u) [[unlikely]] return; }
L_002F8784:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29608u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F8864; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F87A0u); set32(c.r[5], c.r[5].w[0] - 6324u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F87A0u) [[unlikely]] return; }
L_002F87A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F87B0u); set32(c.r[5], c.r[5].w[0] - 6292u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F87B0u) [[unlikely]] return; }
L_002F87B0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F87BCu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0017(c, 104u, depth + 1u); else { c.pc = 0x0025EED0u; return; } if (c.pc != 0x002F87BCu) [[unlikely]] return; }
L_002F87BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] - 6384u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F87D8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 189u, depth + 1u); else { c.pc = 0x0025FD10u; return; } if (c.pc != 0x002F87D8u) [[unlikely]] return; }
L_002F87D8:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F87F4u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 165u, depth + 1u); else { c.pc = 0x0025F870u; return; } if (c.pc != 0x002F87F4u) [[unlikely]] return; }
L_002F87F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F87FCu); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002F87FCu) [[unlikely]] return; }
L_002F87FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F881C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F881Cu); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 83u, depth + 1u); else { c.pc = 0x0025E610u; return; } if (c.pc != 0x002F881Cu) [[unlikely]] return; }
L_002F881C:
    st32((c.r[28].w[0] - 29600u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8828u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0017(c, 94u, depth + 1u); else { c.pc = 0x0025EDF0u; return; } if (c.pc != 0x002F8828u) [[unlikely]] return; }
L_002F8828:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8838u); set32(c.r[5], c.r[5].w[0] - 6284u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F8838u) [[unlikely]] return; }
L_002F8838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8840u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002F8840u) [[unlikely]] return; }
L_002F8840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F884C; } }
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 1;
L_002F884C:
    st32((c.r[28].w[0] - 29604u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F885Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x00286D80u; return; } if (c.pc != 0x002F885Cu) [[unlikely]] return; }
L_002F885C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 29608u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002F8864:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 14112u);
    set32(c.r[2], c.r[2].w[0] - 14104u);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[6], 0u + 9u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14092u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14080u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14068u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14056u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[16].w[0] + 124u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[16].w[0] + 132u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[16].w[0] + 136u), 0u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    st32((c.r[16].w[0] + 140u), 0u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    st32((c.r[16].w[0] + 144u), 0u);
    st32((c.r[16].w[0] + 148u), 0u);
    st32((c.r[16].w[0] + 152u), 0u);
    st32((c.r[16].w[0] + 156u), 0u);
    st32((c.r[16].w[0] + 160u), 0u);
    st32((c.r[16].w[0] + 164u), 0u);
    st32((c.r[16].w[0] + 168u), 0u);
    st32((c.r[16].w[0] + 172u), 0u);
    st32((c.r[16].w[0] + 176u), 0u);
    st32((c.r[16].w[0] + 180u), 0u);
    st8((c.r[16].w[0] + 184u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 64u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 184u));
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 46;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F891Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F891Cu) [[unlikely]] return; }
L_002F891C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 184u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 9952u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8938u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F8938u) [[unlikely]] return; }
L_002F8938:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8948u); set32(c.r[5], c.r[5].w[0] - 6258u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F8948u) [[unlikely]] return; }
L_002F8948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8950u); set32(c.r[4], 0u + 1648u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002F8950u) [[unlikely]] return; }
L_002F8950:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F8968; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 184u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8968u); set32(c.r[6], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0011(c, 316u, depth + 1u); else { c.pc = 0x00246DE0u; return; } if (c.pc != 0x002F8968u) [[unlikely]] return; }
L_002F8968:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 184u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8988u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F8988u) [[unlikely]] return; }
L_002F8988:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 184u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 9952u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F89A4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F89A4u) [[unlikely]] return; }
L_002F89A4:
    set32(c.r[4], c.r[16].w[0] + 132u);
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F89B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 317u, depth + 1u); else { c.pc = 0x002877F0u; return; } if (c.pc != 0x002F89B4u) [[unlikely]] return; }
L_002F89B4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 184u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F89D0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F89D0u) [[unlikely]] return; }
L_002F89D0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 184u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 9952u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F89ECu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F89ECu) [[unlikely]] return; }
L_002F89EC:
    set32(c.r[4], c.r[16].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F89F8u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x00286D80u; return; } if (c.pc != 0x002F89F8u) [[unlikely]] return; }
L_002F89F8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 184u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A14u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F8A14u) [[unlikely]] return; }
L_002F8A14:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A24u); set32(c.r[5], c.r[5].w[0] - 6133u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F8A24u) [[unlikely]] return; }
L_002F8A24:
    set32(c.r[4], c.r[16].w[0] + 148u);
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A34u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0021(c, 317u, depth + 1u); else { c.pc = 0x002877F0u; return; } if (c.pc != 0x002F8A34u) [[unlikely]] return; }
L_002F8A34:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 184u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A50u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F8A50u) [[unlikely]] return; }
L_002F8A50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A60u); set32(c.r[5], c.r[5].w[0] - 6152u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F8A60u) [[unlikely]] return; }
L_002F8A60:
    set32(c.r[4], c.r[16].w[0] + 164u);
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A70u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 317u, depth + 1u); else { c.pc = 0x002877F0u; return; } if (c.pc != 0x002F8A70u) [[unlikely]] return; }
L_002F8A70:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_002F8A90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8AA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F8B1C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F8AD8; } }
L_002F8AD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002F8B20; } }
L_002F8AD8:
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8AE4u); set32(c.r[6], c.r[29].w[0] + 111u);  if (depth < kMaxDepth) unit_0002(c, 32u, depth + 1u); else { c.pc = 0x00209170u; return; } if (c.pc != 0x002F8AE4u) [[unlikely]] return; }
L_002F8AE4:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F8B1C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    set32(c.r[8], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 176u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 348u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8B14u); set32(c.r[9], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0002(c, 22u, depth + 1u); else { c.pc = 0x00208B80u; return; } if (c.pc != 0x002F8B14u) [[unlikely]] return; }
L_002F8B14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F8AD0u | kUnwind; return; } goto L_002F8AD0; } }
L_002F8B1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002F8B20:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002F8B30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F8D00; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F8D00; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 77u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F8C38; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F8C8C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 288u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8B90u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F8B90u) [[unlikely]] return; }
L_002F8B90:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    st32((c.r[28].w[0] - 29836u), c.r[2].w[0]);
    c.budget -= 2;
L_002F8B98:
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 1;
L_002F8B9C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8BA8u); set32(c.r[4], c.r[2].w[0] + 3504u);  if (depth < kMaxDepth) unit_0001(c, 162u, depth + 1u); else { c.pc = 0x00207380u; return; } if (c.pc != 0x002F8BA8u) [[unlikely]] return; }
L_002F8BA8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32204u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F8CA8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 77u));
    c.budget -= 1;
L_002F8BB8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F8D00; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 29600u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8BD4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F8BD4u) [[unlikely]] return; }
L_002F8BD4:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32196u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F8D00; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 32200u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002F8BF8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002F8C14; } }
L_002F8BF8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::ee::add(c.fcr31, c.f[12], c.f[12]);
    c.budget -= 7;
L_002F8C14:
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 348u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8C30u); set32(c.r[4], c.r[4].w[0] - 224u);  if (depth < kMaxDepth) unit_0016(c, 136u, depth + 1u); else { c.pc = 0x0025BE80u; return; } if (c.pc != 0x002F8C30u) [[unlikely]] return; }
L_002F8C30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002F8D04; } }
L_002F8C38:
    set32(c.r[17], ld32((c.r[28].w[0] - 29604u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F8C70; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8C64u); set32(c.r[5], c.r[2].w[0] + 288u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F8C64u) [[unlikely]] return; }
L_002F8C64:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29836u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F8B98u | kUnwind; return; } goto L_002F8B98; } }
L_002F8C70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8C84u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F8C84u) [[unlikely]] return; }
L_002F8C84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 180u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F8B9Cu | kUnwind; return; } goto L_002F8B9C; } }
L_002F8C8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8CA0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F8CA0u) [[unlikely]] return; }
L_002F8CA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F8B98u | kUnwind; return; } goto L_002F8B98; } }
L_002F8CA8:
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[9], 0u + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 140u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    set32(c.r[6], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 348u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8CD0u); c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002F8CD0u) [[unlikely]] return; }
L_002F8CD0:
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[9], 0u + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 156u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    set32(c.r[6], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 348u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8CF8u); c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002F8CF8u) [[unlikely]] return; }
L_002F8CF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 77u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F8BB8u | kUnwind; return; } goto L_002F8BB8; } }
L_002F8D00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002F8D04:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F8D20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F8D3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8D3Cu);  if (depth < kMaxDepth) unit_0001(c, 188u, depth + 1u); else { c.pc = 0x00207D20u; return; } if (c.pc != 0x002F8D3Cu) [[unlikely]] return; }
L_002F8D3C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F8D50:
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F8D70; } }
    st32((c.r[4].w[0] + 108u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 104u), c.r[5].w[0]);
    st32((c.r[5].w[0] + 1552u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 1548u), 0u);  if (t) { goto L_002F8D88; } }
L_002F8D70:
    set32(c.r[3], ld32((c.r[4].w[0] + 108u)));
    st32((c.r[3].w[0] + 1552u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 108u)));
    st32((c.r[5].w[0] + 1548u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 1552u), 0u);
    st32((c.r[4].w[0] + 108u), c.r[5].w[0]);
    c.budget -= 6;
L_002F8D88:
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 112u), c.r[3].w[0]);  c.pc = t; return; }
L_002F8DA0:
    set32(c.r[6], ld32((c.r[5].w[0] + 1548u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002F8DB4; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 1552u)));
    st32((c.r[6].w[0] + 1552u), c.r[3].w[0]);
    c.budget -= 2;
L_002F8DB4:
    set32(c.r[6], ld32((c.r[5].w[0] + 1552u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002F8DC8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 1548u)));
    st32((c.r[6].w[0] + 1548u), c.r[3].w[0]);
    c.budget -= 2;
L_002F8DC8:
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002F8DF8; } }
L_002F8DD4:
    set32(c.r[3], ld32((c.r[4].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002F8E04; } }
L_002F8DE0:
    st32((c.r[5].w[0] + 1552u), 0u);
    st32((c.r[5].w[0] + 1548u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_002F8E10; } }
L_002F8DF8:
    set32(c.r[3], ld32((c.r[5].w[0] + 1552u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 104u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F8DD4u | kUnwind; return; } goto L_002F8DD4; } }
L_002F8E04:
    set32(c.r[3], ld32((c.r[5].w[0] + 1548u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 108u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F8DE0u | kUnwind; return; } goto L_002F8DE0; } }
L_002F8E10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8E20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F8E50; } }
    st32((c.r[5].w[0] + 108u), c.r[16].w[0]);
    st32((c.r[5].w[0] + 104u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 1552u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1548u), 0u);  if (t) { goto L_002F8E68; } }
L_002F8E50:
    set32(c.r[2], ld32((c.r[5].w[0] + 108u)));
    st32((c.r[2].w[0] + 1552u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 108u)));
    st32((c.r[16].w[0] + 1548u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1552u), 0u);
    st32((c.r[5].w[0] + 108u), c.r[16].w[0]);
    c.budget -= 6;
L_002F8E68:
    set32(c.r[3], ld32((c.r[5].w[0] + 112u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0] + 112u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 116u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8E8Cu); set32(c.r[7], c.r[5].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 262u, depth + 1u); else { c.pc = 0x00283600u; return; } if (c.pc != 0x002F8E8Cu) [[unlikely]] return; }
L_002F8E8C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1497u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 1497u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F8EC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F8FAC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 14000u);
    set32(c.r[2], c.r[2].w[0] - 13992u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13980u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13968u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13956u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 13944u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8F30u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0011(c, 313u, depth + 1u); else { c.pc = 0x00246D80u; return; } if (c.pc != 0x002F8F30u) [[unlikely]] return; }
L_002F8F30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8F38u); set32(c.r[4], c.r[17].w[0] + 84u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002F8F38u) [[unlikely]] return; }
L_002F8F38:
    set32(c.r[4], c.r[17].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8F44u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002F8F44u) [[unlikely]] return; }
L_002F8F44:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F8F94; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 15024u);
    set32(c.r[2], c.r[2].w[0] - 15016u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 15004u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14992u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14980u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 14968u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 18;
L_002F8F94:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F8FAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8FACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002F8FACu) [[unlikely]] return; }
L_002F8FAC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F8FD0:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8FFCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0041(c, 178u, depth + 1u); else { c.pc = 0x003057A0u; return; } if (c.pc != 0x002F8FFCu) [[unlikely]] return; }
L_002F8FFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 14000u);
    set32(c.r[3], c.r[3].w[0] - 13992u);
    st32((c.r[20].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[20].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13980u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[20].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13968u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[20].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13956u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[20].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13944u);
    st32((c.r[20].w[0] + 60u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    st32((c.r[20].w[0] + 84u), 0u);
    set32(c.r[16], c.r[2].w[0] << 6);
    st32((c.r[20].w[0] + 88u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[20].w[0] + 92u), 0u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    st32((c.r[20].w[0] + 96u), 0u);
    set32(c.r[17], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[20].w[0] + 100u), c.r[18].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[20].w[0] + 108u), 0u);
    st32((c.r[20].w[0] + 104u), 0u);
    st32((c.r[20].w[0] + 112u), 0u);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9088u); st8((c.r[20].w[0] + 116u), static_cast<std::uint8_t>(c.r[19].w[0]));  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F9088u) [[unlikely]] return; }
L_002F9088:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + 9952u);
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F90A0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F90A0u) [[unlikely]] return; }
L_002F90A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F90B0u); set32(c.r[5], c.r[5].w[0] - 6126u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F90B0u) [[unlikely]] return; }
L_002F90B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F90B8u); set32(c.r[4], 0u + 1648u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002F90B8u) [[unlikely]] return; }
L_002F90B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F90D0; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F90D0u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0011(c, 316u, depth + 1u); else { c.pc = 0x00246DE0u; return; } if (c.pc != 0x002F90D0u) [[unlikely]] return; }
L_002F90D0:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F90E0u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F90E0u) [[unlikely]] return; }
L_002F90E0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F90ECu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F90ECu) [[unlikely]] return; }
L_002F90EC:
    set32(c.r[4], c.r[20].w[0] + 84u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F90FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 317u, depth + 1u); else { c.pc = 0x002877F0u; return; } if (c.pc != 0x002F90FCu) [[unlikely]] return; }
L_002F90FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FEB0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x406B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 34079ull;
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    st32((c.r[20].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 68u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40200000u);
    st32((c.r[20].w[0] + 72u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_002F9140:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F9150:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F9160:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F9170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F91B0; } }
    set32(c.r[16], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F91B0; } }
L_002F9194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F919Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 361u, depth + 1u); else { c.pc = 0x0027F740u; return; } if (c.pc != 0x002F919Cu) [[unlikely]] return; }
L_002F919C:
    set32(c.r[16], ld32((c.r[16].w[0] + 1552u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9194u | kUnwind; return; } goto L_002F9194; } }
L_002F91B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F91C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F91E0; } }
    st32((c.r[4].w[0] + 88u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[5].w[0]);
    st32((c.r[5].w[0] + 1552u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 1548u), 0u);  if (t) { goto L_002F91F8; } }
L_002F91E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    st32((c.r[3].w[0] + 1552u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    st32((c.r[5].w[0] + 1548u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 1552u), 0u);
    st32((c.r[4].w[0] + 88u), c.r[5].w[0]);
    c.budget -= 6;
L_002F91F8:
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 92u), c.r[3].w[0]);  c.pc = t; return; }
L_002F9210:
    set32(c.r[6], ld32((c.r[5].w[0] + 1548u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002F9224; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 1552u)));
    st32((c.r[6].w[0] + 1552u), c.r[3].w[0]);
    c.budget -= 2;
L_002F9224:
    set32(c.r[6], ld32((c.r[5].w[0] + 1552u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002F9238; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 1548u)));
    st32((c.r[6].w[0] + 1548u), c.r[3].w[0]);
    c.budget -= 2;
L_002F9238:
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002F9268; } }
L_002F9244:
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002F9274; } }
L_002F9250:
    st32((c.r[5].w[0] + 1552u), 0u);
    st32((c.r[5].w[0] + 1548u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_002F9280; } }
L_002F9268:
    set32(c.r[3], ld32((c.r[5].w[0] + 1552u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 84u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9244u | kUnwind; return; } goto L_002F9244; } }
L_002F9274:
    set32(c.r[3], ld32((c.r[5].w[0] + 1548u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 88u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9250u | kUnwind; return; } goto L_002F9250; } }
L_002F9280:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F9290:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F92C4; } }
    st32((c.r[17].w[0] + 88u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 1552u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1548u), 0u);  if (t) { goto L_002F92DC; } }
L_002F92C4:
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    st32((c.r[2].w[0] + 1552u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    st32((c.r[16].w[0] + 1548u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1552u), 0u);
    st32((c.r[17].w[0] + 88u), c.r[16].w[0]);
    c.budget -= 6;
L_002F92DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 108u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F92F8u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0041(c, 173u, depth + 1u); else { c.pc = 0x003056E0u; return; } if (c.pc != 0x002F92F8u) [[unlikely]] return; }
L_002F92F8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 108u)));
    c.f[12] = ld32((c.r[29].w[0] + 60u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9310u); set32(c.r[7], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 262u, depth + 1u); else { c.pc = 0x00283600u; return; } if (c.pc != 0x002F9310u) [[unlikely]] return; }
L_002F9310:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1497u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 1497u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F9340:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002F94C8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 13888u);
    set32(c.r[2], c.r[2].w[0] - 13880u);
    st32((c.r[19].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], c.r[19].w[0] + 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[19].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13868u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13856u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[19].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13844u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 13832u);
    st32((c.r[19].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F93B4u); st32((c.r[19].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0021(c, 242u, depth + 1u); else { c.pc = 0x00286E40u; return; } if (c.pc != 0x002F93B4u) [[unlikely]] return; }
L_002F93B4:
    set32(c.r[2], ld32((c.r[28].w[0] - 29612u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F93F8; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002F93C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 29612u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F93D4u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002F93D4u) [[unlikely]] return; }
L_002F93D4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F93C8u | kUnwind; return; } goto L_002F93C8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29612u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F93F4u); set32(c.r[5], c.r[5].w[0] + 23344u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x002F93F4u) [[unlikely]] return; }
L_002F93F4:
    st32((c.r[28].w[0] - 29612u), 0u);
    c.budget -= 1;
L_002F93F8:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9404u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0011(c, 313u, depth + 1u); else { c.pc = 0x00246D80u; return; } if (c.pc != 0x002F9404u) [[unlikely]] return; }
L_002F9404:
    set32(c.r[4], c.r[19].w[0] + 96u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F94D0; } }
    set32(c.r[2], c.r[19].w[0] + 84u);
    c.budget -= 1;
L_002F9414:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F9460; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29608u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F9460; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29600u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F9440; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F943Cu);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002F943Cu) [[unlikely]] return; }
L_002F943C:
    st32((c.r[28].w[0] - 29600u), 0u);
    c.budget -= 1;
L_002F9440:
    set32(c.r[16], ld32((c.r[28].w[0] - 29604u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F945C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9454u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002F9454u) [[unlikely]] return; }
L_002F9454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F945Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002F945Cu) [[unlikely]] return; }
L_002F945C:
    st8((c.r[28].w[0] - 29608u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002F9460:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002F94B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 15024u);
    set32(c.r[2], c.r[2].w[0] - 15016u);
    st32((c.r[19].w[0] + 80u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[19].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 15004u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14992u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[19].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14980u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 14968u);
    st32((c.r[19].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 18;
L_002F94B0:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F94C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F94C8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002F94C8u) [[unlikely]] return; }
L_002F94C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_002F94E0; } }
L_002F94D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F94D8u);  if (depth < kMaxDepth) unit_0021(c, 242u, depth + 1u); else { c.pc = 0x00286E40u; return; } if (c.pc != 0x002F94D8u) [[unlikely]] return; }
L_002F94D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[19].w[0] + 84u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9414u | kUnwind; return; } goto L_002F9414; } }
L_002F94E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F9500:
    set32(c.r[29], c.r[29].w[0] - 624u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9520u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 178u, depth + 1u); else { c.pc = 0x003057A0u; return; } if (c.pc != 0x002F9520u) [[unlikely]] return; }
L_002F9520:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29608u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F9600; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F953Cu); set32(c.r[5], c.r[5].w[0] - 6324u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F953Cu) [[unlikely]] return; }
L_002F953C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F954Cu); set32(c.r[5], c.r[5].w[0] - 6292u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F954Cu) [[unlikely]] return; }
L_002F954C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9558u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0017(c, 104u, depth + 1u); else { c.pc = 0x0025EED0u; return; } if (c.pc != 0x002F9558u) [[unlikely]] return; }
L_002F9558:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[5].w[0] - 6384u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9574u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 189u, depth + 1u); else { c.pc = 0x0025FD10u; return; } if (c.pc != 0x002F9574u) [[unlikely]] return; }
L_002F9574:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9590u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 165u, depth + 1u); else { c.pc = 0x0025F870u; return; } if (c.pc != 0x002F9590u) [[unlikely]] return; }
L_002F9590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9598u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002F9598u) [[unlikely]] return; }
L_002F9598:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F95B8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F95B8u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 83u, depth + 1u); else { c.pc = 0x0025E610u; return; } if (c.pc != 0x002F95B8u) [[unlikely]] return; }
L_002F95B8:
    st32((c.r[28].w[0] - 29600u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F95C4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0017(c, 94u, depth + 1u); else { c.pc = 0x0025EDF0u; return; } if (c.pc != 0x002F95C4u) [[unlikely]] return; }
L_002F95C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F95D4u); set32(c.r[5], c.r[5].w[0] - 6284u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F95D4u) [[unlikely]] return; }
L_002F95D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F95DCu); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002F95DCu) [[unlikely]] return; }
L_002F95DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F95E8; } }
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 1;
L_002F95E8:
    st32((c.r[28].w[0] - 29604u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F95F8u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x00286D80u; return; } if (c.pc != 0x002F95F8u) [[unlikely]] return; }
L_002F95F8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 29608u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002F9600:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 13888u);
    set32(c.r[3], c.r[3].w[0] - 13880u);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13868u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13856u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13844u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13832u);
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    st32((c.r[17].w[0] + 88u), 0u);
    c.r[3].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[17].w[0] + 84u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[17].w[0] + 92u), 0u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 100u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    st8((c.r[17].w[0] + 108u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[17].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 108u));
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9694u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F9694u) [[unlikely]] return; }
L_002F9694:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 108u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 9952u);
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F96B0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F96B0u) [[unlikely]] return; }
L_002F96B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F96C0u); set32(c.r[5], c.r[5].w[0] - 6258u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F96C0u) [[unlikely]] return; }
L_002F96C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F96C8u); set32(c.r[4], 0u + 1648u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002F96C8u) [[unlikely]] return; }
L_002F96C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F96E0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 108u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F96E0u); set32(c.r[6], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0011(c, 316u, depth + 1u); else { c.pc = 0x00246DE0u; return; } if (c.pc != 0x002F96E0u) [[unlikely]] return; }
L_002F96E0:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 108u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9700u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F9700u) [[unlikely]] return; }
L_002F9700:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 108u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 9952u);
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F971Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F971Cu) [[unlikely]] return; }
L_002F971C:
    set32(c.r[4], c.r[17].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9728u); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0021(c, 244u, depth + 1u); else { c.pc = 0x00286E80u; return; } if (c.pc != 0x002F9728u) [[unlikely]] return; }
L_002F9728:
    set32(c.r[2], ld32((c.r[28].w[0] - 29612u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F973C; } }
L_002F9734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002F97E4; } }
L_002F973C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9744u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002F9744u) [[unlikely]] return; }
L_002F9744:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 25056u);
    set32(c.r[6], c.r[6].w[0] + 23344u);
    set32(c.r[7], 0u + 48u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9764u); set32(c.r[8], 0u + 5u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x002F9764u) [[unlikely]] return; }
L_002F9764:
    st32((c.r[28].w[0] - 29612u), c.r[2].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002F9770:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[7], c.r[18].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[5], c.r[5].w[0] - 6121u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F978Cu); set32(c.r[6], c.r[6].w[0] + 4576u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x002F978Cu) [[unlikely]] return; }
L_002F978C:
    set32(c.r[2], ld32((c.r[28].w[0] - 29612u)));
    set32(c.r[5], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F979Cu); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x00286D80u; return; } if (c.pc != 0x002F979Cu) [[unlikely]] return; }
L_002F979C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9770u | kUnwind; return; } goto L_002F9770; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F97BCu); set32(c.r[5], c.r[5].w[0] + 8800u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F97BCu) [[unlikely]] return; }
L_002F97BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F97CCu); set32(c.r[5], c.r[5].w[0] + 14240u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F97CCu) [[unlikely]] return; }
L_002F97CC:
    set32(c.r[2], ld32((c.r[28].w[0] - 29612u)));
    set32(c.r[5], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F97DCu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x00286D80u; return; } if (c.pc != 0x002F97DCu) [[unlikely]] return; }
L_002F97DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9734u | kUnwind; return; } goto L_002F9734; } }
L_002F97E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 624u);  c.pc = t; return; }
L_002F9800:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F9810:
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F9820:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F9ABC; } }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 5u);  if (t) { goto L_002F987C; } }
L_002F9860:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9860u | kUnwind; return; } goto L_002F9860; } }
L_002F987C:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[29].w[0] + 136u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_002F9888:
    set32(c.r[19], ld32((c.r[20].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002F9988; } }
    c.budget -= 1;
L_002F9898:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F9978; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F9970; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F9A50; } }
    c.budget -= 1;
L_002F98D0:
    set32(c.r[4], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F98DCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 83u, depth + 1u); else { c.pc = 0x003D19E0u; return; } if (c.pc != 0x002F98DCu) [[unlikely]] return; }
L_002F98DC:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[3].d[0];  if (t) { goto L_002F9978; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F9938; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29612u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    set32(c.r[21], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 40u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F9A80; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 288u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9924u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F9924u) [[unlikely]] return; }
L_002F9924:
    set32(c.r[2], ld32((c.r[21].w[0] + 40u)));
    st32((c.r[28].w[0] - 29836u), c.r[2].w[0]);
    c.budget -= 3;
L_002F9930:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002F9938:
    set32(c.r[4], c.r[19].w[0] + 3504u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9944u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 162u, depth + 1u); else { c.pc = 0x00207380u; return; } if (c.pc != 0x002F9944u) [[unlikely]] return; }
L_002F9944:
    set32(c.r[5], ld32((c.r[20].w[0] + 96u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[20].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    set32(c.r[7], ld32((c.r[19].w[0] + 348u)));
    set32(c.r[8], ld32((c.r[20].w[0] + 100u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9964u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 115u, depth + 1u); else { c.pc = 0x0025B180u; return; } if (c.pc != 0x002F9964u) [[unlikely]] return; }
L_002F9964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F9978; } }
    c.budget -= 1;
L_002F9970:
    c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_002F9978:
    set32(c.r[19], ld32((c.r[19].w[0] + 1552u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9898u | kUnwind; return; } goto L_002F9898; } }
    c.budget -= 1;
L_002F9988:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9888u | kUnwind; return; } goto L_002F9888; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002F9A48; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 29604u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F9AA0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F99D0u); set32(c.r[5], c.r[2].w[0] + 288u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F99D0u) [[unlikely]] return; }
L_002F99D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    st32((c.r[28].w[0] - 29836u), c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[20].w[0] + 84u)));
    c.budget -= 3;
L_002F99DC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F9A48; } }
L_002F99E4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F9A38; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F9A38; } }
    set32(c.r[4], c.r[16].w[0] + 3504u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9A18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 162u, depth + 1u); else { c.pc = 0x00207380u; return; } if (c.pc != 0x002F9A18u) [[unlikely]] return; }
L_002F9A18:
    set32(c.r[5], ld32((c.r[20].w[0] + 96u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[20].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    set32(c.r[7], ld32((c.r[16].w[0] + 348u)));
    set32(c.r[8], ld32((c.r[20].w[0] + 100u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9A38u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 115u, depth + 1u); else { c.pc = 0x0025B180u; return; } if (c.pc != 0x002F9A38u) [[unlikely]] return; }
L_002F9A38:
    set32(c.r[16], ld32((c.r[16].w[0] + 1552u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F99E4u | kUnwind; return; } goto L_002F99E4; } }
    c.budget -= 1;
L_002F9A48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_002F9AC0; } }
L_002F9A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9A58u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002F9A58u) [[unlikely]] return; }
L_002F9A58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F9A68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9A68u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x002F9A68u) [[unlikely]] return; }
L_002F9A68:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9A74u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x002F9A74u) [[unlikely]] return; }
L_002F9A74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F98D0u | kUnwind; return; } goto L_002F98D0; } }
    c.budget -= 1;
L_002F9A80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9A94u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F9A94u) [[unlikely]] return; }
L_002F9A94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9930u | kUnwind; return; } goto L_002F9930; } }
    c.budget -= 1;
L_002F9AA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9AB4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F9AB4u) [[unlikely]] return; }
L_002F9AB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[20].w[0] + 84u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F99DCu | kUnwind; return; } goto L_002F99DC; } }
L_002F9ABC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_002F9AC0:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002F9AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F9B60; } }
    set32(c.r[16], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F9B48; } }
L_002F9B14:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 220u));
    set32(c.r[2], 0u + 69u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F9B50; } }
    set32(c.r[2], 0u + 38u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F9B50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9B38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 364u, depth + 1u); else { c.pc = 0x0027F880u; return; } if (c.pc != 0x002F9B38u) [[unlikely]] return; }
L_002F9B38:
    set32(c.r[16], ld32((c.r[16].w[0] + 1552u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9B14u | kUnwind; return; } goto L_002F9B14; } }
    c.budget -= 1;
L_002F9B48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F9B60; } }
L_002F9B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9B58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001F(c, 369u, depth + 1u); else { c.pc = 0x0027F9B0u; return; } if (c.pc != 0x002F9B58u) [[unlikely]] return; }
L_002F9B58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9B38u | kUnwind; return; } goto L_002F9B38; } }
L_002F9B60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F9B70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F9B80:
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F9BA0; } }
    st32((c.r[4].w[0] + 92u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[5].w[0]);
    st32((c.r[5].w[0] + 1552u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 1548u), 0u);  if (t) { goto L_002F9BB8; } }
L_002F9BA0:
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    st32((c.r[3].w[0] + 1552u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    st32((c.r[5].w[0] + 1548u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 1552u), 0u);
    st32((c.r[4].w[0] + 92u), c.r[5].w[0]);
    c.budget -= 6;
L_002F9BB8:
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 96u), c.r[3].w[0]);  c.pc = t; return; }
L_002F9BD0:
    set32(c.r[6], ld32((c.r[5].w[0] + 1548u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002F9BE4; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 1552u)));
    st32((c.r[6].w[0] + 1552u), c.r[3].w[0]);
    c.budget -= 2;
L_002F9BE4:
    set32(c.r[6], ld32((c.r[5].w[0] + 1552u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002F9BF8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 1548u)));
    st32((c.r[6].w[0] + 1548u), c.r[3].w[0]);
    c.budget -= 2;
L_002F9BF8:
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002F9C28; } }
L_002F9C04:
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002F9C34; } }
L_002F9C10:
    st32((c.r[5].w[0] + 1552u), 0u);
    st32((c.r[5].w[0] + 1548u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_002F9C40; } }
L_002F9C28:
    set32(c.r[3], ld32((c.r[5].w[0] + 1552u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 88u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9C04u | kUnwind; return; } goto L_002F9C04; } }
L_002F9C34:
    set32(c.r[3], ld32((c.r[5].w[0] + 1548u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 92u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9C10u | kUnwind; return; } goto L_002F9C10; } }
L_002F9C40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F9C50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F9C60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F9D00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 13776u);
    set32(c.r[3], c.r[3].w[0] - 13768u);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13756u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13744u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13732u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13720u);
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 100u));
    set32(c.r[2], c.r[2].w[0] - 19024u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9CE8u); st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003E(c, 251u, depth + 1u); else { c.pc = 0x002FA190u; return; } if (c.pc != 0x002F9CE8u) [[unlikely]] return; }
L_002F9CE8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F9D00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9D00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002F9D00u) [[unlikely]] return; }
L_002F9D00:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F9D20:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9D3Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 178u, depth + 1u); else { c.pc = 0x003057A0u; return; } if (c.pc != 0x002F9D3Cu) [[unlikely]] return; }
L_002F9D3C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29608u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F9EB4; } }
L_002F9D48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 13664u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13656u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13644u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13632u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13620u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13608u);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 84u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 92u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 88u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[7], c.r[7].w[0] - 13776u);
    st32((c.r[17].w[0] + 96u), 0u);
    set32(c.r[6], c.r[6].w[0] - 13768u);
    st32((c.r[17].w[0] + 80u), c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] - 13756u);
    st32((c.r[17].w[0] + 44u), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] - 13744u);
    st32((c.r[17].w[0] + 48u), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 13732u);
    st32((c.r[17].w[0] + 52u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13720u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29616u));
    c.budget -= 43;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F9E78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 19024u);
    c.budget -= 3;
L_002F9E00:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 8u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[5].sd[0] < 77ll ? 1ull : 0ull;
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9E00u | kUnwind; return; } goto L_002F9E00; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] - 19024u);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[5].w[0] + 2u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[5].w[0] + 3u);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] + 4u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 29616u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 18;
L_002F9E78:
    st32((c.r[17].w[0] + 84u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st8((c.r[17].w[0] + 100u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[4], c.r[4].w[0] - 19024u);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 100u));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 101u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 76u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F9F8C; } }
L_002F9EB4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9EC4u); set32(c.r[5], c.r[5].w[0] - 6324u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F9EC4u) [[unlikely]] return; }
L_002F9EC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9ED4u); set32(c.r[5], c.r[5].w[0] - 6292u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F9ED4u) [[unlikely]] return; }
L_002F9ED4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9EE0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0017(c, 104u, depth + 1u); else { c.pc = 0x0025EED0u; return; } if (c.pc != 0x002F9EE0u) [[unlikely]] return; }
L_002F9EE0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 6384u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9EFCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 189u, depth + 1u); else { c.pc = 0x0025FD10u; return; } if (c.pc != 0x002F9EFCu) [[unlikely]] return; }
L_002F9EFC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9F18u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 165u, depth + 1u); else { c.pc = 0x0025F870u; return; } if (c.pc != 0x002F9F18u) [[unlikely]] return; }
L_002F9F18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9F20u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002F9F20u) [[unlikely]] return; }
L_002F9F20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F9F40; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9F40u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 83u, depth + 1u); else { c.pc = 0x0025E610u; return; } if (c.pc != 0x002F9F40u) [[unlikely]] return; }
L_002F9F40:
    st32((c.r[28].w[0] - 29600u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9F4Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0017(c, 94u, depth + 1u); else { c.pc = 0x0025EDF0u; return; } if (c.pc != 0x002F9F4Cu) [[unlikely]] return; }
L_002F9F4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9F5Cu); set32(c.r[5], c.r[5].w[0] - 6284u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F9F5Cu) [[unlikely]] return; }
L_002F9F5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9F64u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002F9F64u) [[unlikely]] return; }
L_002F9F64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F9F70; } }
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 1;
L_002F9F70:
    st32((c.r[28].w[0] - 29604u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9F80u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x00286D80u; return; } if (c.pc != 0x002F9F80u) [[unlikely]] return; }
L_002F9F80:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29608u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9D48u | kUnwind; return; } goto L_002F9D48; } }
L_002F9F8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_002F9FA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F9FB0:
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F9FD0; } }
    st32((c.r[4].w[0] + 92u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[5].w[0]);
    st32((c.r[5].w[0] + 1552u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 1548u), 0u);  if (t) { goto L_002F9FE8; } }
L_002F9FD0:
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    st32((c.r[3].w[0] + 1552u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    st32((c.r[5].w[0] + 1548u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 1552u), 0u);
    st32((c.r[4].w[0] + 92u), c.r[5].w[0]);
    c.budget -= 6;
L_002F9FE8:
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 96u), c.r[3].w[0]);  c.pc = t; return; }
L_002FA000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 1548u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002FA01C; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 1552u)));
    st32((c.r[6].w[0] + 1552u), c.r[3].w[0]);
    c.budget -= 2;
L_002FA01C:
    set32(c.r[6], ld32((c.r[5].w[0] + 1552u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002FA030; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 1548u)));
    st32((c.r[6].w[0] + 1548u), c.r[3].w[0]);
    c.budget -= 2;
L_002FA030:
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002FA070; } }
L_002FA03C:
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002FA07C; } }
L_002FA048:
    st32((c.r[5].w[0] + 1552u), 0u);
    st32((c.r[5].w[0] + 1548u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 101u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FA088; } }
L_002FA068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002FA09C; } }
L_002FA070:
    set32(c.r[3], ld32((c.r[5].w[0] + 1552u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 88u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA03Cu | kUnwind; return; } goto L_002FA03C; } }
L_002FA07C:
    set32(c.r[3], ld32((c.r[5].w[0] + 1548u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 92u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA048u | kUnwind; return; } goto L_002FA048; } }
L_002FA088:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA094u); set32(c.r[4], c.r[4].w[0] - 16128u);  if (depth < kMaxDepth) unit_0086(c, 141u, depth + 1u); else { c.pc = 0x00419E60u; return; } if (c.pc != 0x002FA094u) [[unlikely]] return; }
L_002FA094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA068u | kUnwind; return; } goto L_002FA068; } }
L_002FA09C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002FA0B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FA0E4; } }
    st32((c.r[17].w[0] + 92u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 1552u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1548u), 0u);  if (t) { goto L_002FA0FC; } }
L_002FA0E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    st32((c.r[2].w[0] + 1552u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    st32((c.r[16].w[0] + 1548u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1552u), 0u);
    st32((c.r[17].w[0] + 92u), c.r[16].w[0]);
    c.budget -= 6;
L_002FA0FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 100u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA118u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0041(c, 173u, depth + 1u); else { c.pc = 0x003056E0u; return; } if (c.pc != 0x002FA118u) [[unlikely]] return; }
L_002FA118:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 100u)));
    c.f[12] = ld32((c.r[29].w[0] + 60u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA130u); set32(c.r[7], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 262u, depth + 1u); else { c.pc = 0x00283600u; return; } if (c.pc != 0x002FA130u) [[unlikely]] return; }
L_002FA130:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 101u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FA15C; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1497u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 1497u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002FA154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002FA178; } }
L_002FA15C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 101u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA170u); set32(c.r[4], c.r[4].w[0] - 16128u);  if (depth < kMaxDepth) unit_0086(c, 155u, depth + 1u); else { c.pc = 0x0041A390u; return; } if (c.pc != 0x002FA170u) [[unlikely]] return; }
L_002FA170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA154u | kUnwind; return; } goto L_002FA154; } }
L_002FA178:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FA190:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FA2C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 13664u);
    set32(c.r[3], c.r[3].w[0] - 13656u);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13644u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13632u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13620u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13608u);
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], 0u + 22u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 100u));
    c.budget -= 22;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FA2CC; } }
L_002FA20C:
    set32(c.r[2], c.r[17].w[0] + 84u);
    c.budget -= 1;
L_002FA210:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FA25C; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29608u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FA25C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29600u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FA23C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA238u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002FA238u) [[unlikely]] return; }
L_002FA238:
    st32((c.r[28].w[0] - 29600u), 0u);
    c.budget -= 1;
L_002FA23C:
    set32(c.r[18], ld32((c.r[28].w[0] - 29604u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002FA258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA250u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002FA250u) [[unlikely]] return; }
L_002FA250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA258u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002FA258u) [[unlikely]] return; }
L_002FA258:
    st8((c.r[28].w[0] - 29608u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002FA25C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002FA2AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 15024u);
    set32(c.r[2], c.r[2].w[0] - 15016u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 15004u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14992u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14980u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 14968u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 18;
L_002FA2AC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002FA2C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA2C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002FA2C4u) [[unlikely]] return; }
L_002FA2C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002FA3C0; } }
L_002FA2CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 19024u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 100u));
    set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA20Cu | kUnwind; return; } goto L_002FA20C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 18576u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA310u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0021(c, 268u, depth + 1u); else { c.pc = 0x00287140u; return; } if (c.pc != 0x002FA310u) [[unlikely]] return; }
L_002FA310:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 100u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 18928u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA32Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002FA32Cu) [[unlikely]] return; }
L_002FA32C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 100u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 18576u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA34Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0021(c, 262u, depth + 1u); else { c.pc = 0x00287080u; return; } if (c.pc != 0x002FA34Cu) [[unlikely]] return; }
L_002FA34C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 100u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 18928u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002FA384; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002FA384; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA37Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002FA37Cu) [[unlikely]] return; }
L_002FA37C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA384u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002FA384u) [[unlikely]] return; }
L_002FA384:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_002FA38C:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FA3A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA3A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0011(c, 313u, depth + 1u); else { c.pc = 0x00246D80u; return; } if (c.pc != 0x002FA3A0u) [[unlikely]] return; }
L_002FA3A0:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    c.r[2].d[0] = c.r[19].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA38Cu | kUnwind; return; } goto L_002FA38C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[17].w[0] + 84u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA210u | kUnwind; return; } goto L_002FA210; } }
L_002FA3C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FA3E0:
    set32(c.r[29], c.r[29].w[0] - 656u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA40Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 178u, depth + 1u); else { c.pc = 0x003057A0u; return; } if (c.pc != 0x002FA40Cu) [[unlikely]] return; }
L_002FA40C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29608u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FA5CC; } }
L_002FA418:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 13664u);
    set32(c.r[2], c.r[2].w[0] - 13656u);
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13644u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13632u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13620u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 13608u);
    st32((c.r[18].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 84u), 0u);
    st32((c.r[18].w[0] + 92u), 0u);
    st32((c.r[18].w[0] + 88u), 0u);
    st32((c.r[18].w[0] + 96u), 0u);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29616u));
    c.budget -= 25;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FA500; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 19024u);
    c.budget -= 3;
L_002FA488:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] + 8u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[5].sd[0] < 77ll ? 1ull : 0ull;
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA488u | kUnwind; return; } goto L_002FA488; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] - 19024u);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[5].w[0] + 2u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[5].w[0] + 3u);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] + 4u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 29616u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 18;
L_002FA500:
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] - 46u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st8((c.r[18].w[0] + 100u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_002FA6A4; } }
L_002FA514:
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    set32(c.r[19], c.r[2].w[0] << 6);
    st8((c.r[18].w[0] + 76u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[20], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA53Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FA53Cu) [[unlikely]] return; }
L_002FA53C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[2], c.r[2].w[0] + 9952u);
    set32(c.r[19], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA554u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FA554u) [[unlikely]] return; }
L_002FA554:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA564u); set32(c.r[5], c.r[5].w[0] - 6139u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FA564u) [[unlikely]] return; }
L_002FA564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA56Cu); set32(c.r[4], 0u + 1648u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002FA56Cu) [[unlikely]] return; }
L_002FA56C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FA584; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA584u); set32(c.r[6], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_0011(c, 316u, depth + 1u); else { c.pc = 0x00246DE0u; return; } if (c.pc != 0x002FA584u) [[unlikely]] return; }
L_002FA584:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 100u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 19024u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FA6C4; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 100u));
    c.budget -= 1;
L_002FA5A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] - 19024u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 101u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (t) { goto L_002FA78C; } }
L_002FA5CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA5DCu); set32(c.r[5], c.r[5].w[0] - 6324u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FA5DCu) [[unlikely]] return; }
L_002FA5DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA5ECu); set32(c.r[5], c.r[5].w[0] - 6292u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FA5ECu) [[unlikely]] return; }
L_002FA5EC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA5F8u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0017(c, 104u, depth + 1u); else { c.pc = 0x0025EED0u; return; } if (c.pc != 0x002FA5F8u) [[unlikely]] return; }
L_002FA5F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] - 6384u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA614u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 189u, depth + 1u); else { c.pc = 0x0025FD10u; return; } if (c.pc != 0x002FA614u) [[unlikely]] return; }
L_002FA614:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA630u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 165u, depth + 1u); else { c.pc = 0x0025F870u; return; } if (c.pc != 0x002FA630u) [[unlikely]] return; }
L_002FA630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA638u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002FA638u) [[unlikely]] return; }
L_002FA638:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FA658; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA658u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 83u, depth + 1u); else { c.pc = 0x0025E610u; return; } if (c.pc != 0x002FA658u) [[unlikely]] return; }
L_002FA658:
    st32((c.r[28].w[0] - 29600u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA664u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0017(c, 94u, depth + 1u); else { c.pc = 0x0025EDF0u; return; } if (c.pc != 0x002FA664u) [[unlikely]] return; }
L_002FA664:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA674u); set32(c.r[5], c.r[5].w[0] - 6284u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FA674u) [[unlikely]] return; }
L_002FA674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA67Cu); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002FA67Cu) [[unlikely]] return; }
L_002FA67C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FA688; } }
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 1;
L_002FA688:
    st32((c.r[28].w[0] - 29604u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA698u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x00286D80u; return; } if (c.pc != 0x002FA698u) [[unlikely]] return; }
L_002FA698:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29608u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA418u | kUnwind; return; } goto L_002FA418; } }
L_002FA6A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40530000u);
    st32((c.r[18].w[0] + 64u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    st32((c.r[18].w[0] + 68u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 72u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA514u | kUnwind; return; } goto L_002FA514; } }
L_002FA6C4:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA6D0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FA6D0u) [[unlikely]] return; }
L_002FA6D0:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA6DCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FA6DCu) [[unlikely]] return; }
L_002FA6DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA6E4u); set32(c.r[4], 0u + 104u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002FA6E4u) [[unlikely]] return; }
L_002FA6E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FA6F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA6F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 265u, depth + 1u); else { c.pc = 0x002870E0u; return; } if (c.pc != 0x002FA6F4u) [[unlikely]] return; }
L_002FA6F4:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 100u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 18576u);
    set32(c.r[5], c.r[29].w[0] + 400u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 100u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA728u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 272u, depth + 1u); else { c.pc = 0x00287200u; return; } if (c.pc != 0x002FA728u) [[unlikely]] return; }
L_002FA728:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA734u); set32(c.r[4], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FA734u) [[unlikely]] return; }
L_002FA734:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA740u); set32(c.r[4], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FA740u) [[unlikely]] return; }
L_002FA740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA748u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002FA748u) [[unlikely]] return; }
L_002FA748:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FA754; } }
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 1;
L_002FA754:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 100u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 18928u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 100u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA784u); set32(c.r[5], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x00286D80u; return; } if (c.pc != 0x002FA784u) [[unlikely]] return; }
L_002FA784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[18].w[0] + 100u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA5A8u | kUnwind; return; } goto L_002FA5A8; } }
L_002FA78C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_002FA7B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FA7C4; } }
L_002FA7BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FA7CC; } }
L_002FA7C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 264u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA7BCu | kUnwind; return; } goto L_002FA7BC; } }
L_002FA7CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FA7E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 264u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA808u); set32(c.r[4], c.r[4].w[0] + 496u);  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x003D9720u; return; } if (c.pc != 0x002FA808u) [[unlikely]] return; }
L_002FA808:
    st32((c.r[17].w[0] + 264u), 0u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 237u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FA820; } }
L_002FA818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002FA838; } }
L_002FA820:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA830u); set32(c.r[4], c.r[4].w[0] - 16128u);  if (depth < kMaxDepth) unit_0086(c, 141u, depth + 1u); else { c.pc = 0x00419E60u; return; } if (c.pc != 0x002FA830u) [[unlikely]] return; }
L_002FA830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA818u | kUnwind; return; } goto L_002FA818; } }
L_002FA838:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FA850:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002FA894; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FA894; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA890u); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x002E8B40u; return; } if (c.pc != 0x002FA890u) [[unlikely]] return; }
L_002FA890:
    st32((c.r[17].w[0] + 264u), 0u);
    c.budget -= 1;
L_002FA894:
    st32((c.r[17].w[0] + 264u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 236u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA8A8u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0041(c, 173u, depth + 1u); else { c.pc = 0x003056E0u; return; } if (c.pc != 0x002FA8A8u) [[unlikely]] return; }
L_002FA8A8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 236u)));
    c.f[12] = ld32((c.r[29].w[0] + 60u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA8C0u); set32(c.r[7], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 262u, depth + 1u); else { c.pc = 0x00283600u; return; } if (c.pc != 0x002FA8C0u) [[unlikely]] return; }
L_002FA8C0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 237u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FA8FC; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1497u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 1497u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 264u)));
    c.budget -= 7;
L_002FA8E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA8F4u); set32(c.r[4], c.r[4].w[0] + 496u);  if (depth < kMaxDepth) unit_0076(c, 103u, depth + 1u); else { c.pc = 0x003D97B0u; return; } if (c.pc != 0x002FA8F4u) [[unlikely]] return; }
L_002FA8F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002FA918; } }
L_002FA8FC:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 237u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA910u); set32(c.r[4], c.r[4].w[0] - 16128u);  if (depth < kMaxDepth) unit_0086(c, 155u, depth + 1u); else { c.pc = 0x0041A390u; return; } if (c.pc != 0x002FA910u) [[unlikely]] return; }
L_002FA910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 264u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA8E8u | kUnwind; return; } goto L_002FA8E8; } }
L_002FA918:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FA930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FAA3C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 13552u);
    set32(c.r[2], c.r[2].w[0] - 13544u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 272u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13532u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13520u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13508u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 13496u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA99Cu); st32((c.r[17].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002FA99Cu) [[unlikely]] return; }
L_002FA99C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA9A4u); set32(c.r[4], c.r[17].w[0] + 288u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002FA9A4u) [[unlikely]] return; }
L_002FA9A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA9ACu); set32(c.r[4], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002FA9ACu) [[unlikely]] return; }
L_002FA9AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA9B4u); set32(c.r[4], c.r[17].w[0] + 336u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002FA9B4u) [[unlikely]] return; }
L_002FA9B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA9BCu); set32(c.r[4], c.r[17].w[0] + 320u);  if (depth < kMaxDepth) unit_0021(c, 242u, depth + 1u); else { c.pc = 0x00286E40u; return; } if (c.pc != 0x002FA9BCu) [[unlikely]] return; }
L_002FA9BC:
    set32(c.r[2], c.r[17].w[0] + 352u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FAA44; } }
L_002FA9C8:
    set32(c.r[2], c.r[17].w[0] + 268u);
    c.budget -= 1;
L_002FA9CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FAA18; } }
    set32(c.r[4], c.r[17].w[0] + 336u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002FAA60; } }
    set32(c.r[4], c.r[17].w[0] + 320u);
    c.budget -= 1;
L_002FA9E4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FA9F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA9F4u);  if (depth < kMaxDepth) unit_0021(c, 242u, depth + 1u); else { c.pc = 0x00286E40u; return; } if (c.pc != 0x002FA9F4u) [[unlikely]] return; }
L_002FA9F4:
    set32(c.r[4], c.r[17].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAA00u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002FAA00u) [[unlikely]] return; }
L_002FAA00:
    set32(c.r[4], c.r[17].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAA0Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002FAA0Cu) [[unlikely]] return; }
L_002FAA0C:
    set32(c.r[4], c.r[17].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAA18u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002FAA18u) [[unlikely]] return; }
L_002FAA18:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAA24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 85u, depth + 1u); else { c.pc = 0x002F5700u; return; } if (c.pc != 0x002FAA24u) [[unlikely]] return; }
L_002FAA24:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002FAA3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAA3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002FAA3Cu) [[unlikely]] return; }
L_002FAA3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002FAA70; } }
L_002FAA44:
    set32(c.r[4], c.r[17].w[0] + 360u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 352u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA9C8u | kUnwind; return; } goto L_002FA9C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAA58u);  if (depth < kMaxDepth) unit_0018(c, 157u, depth + 1u); else { c.pc = 0x00261CA0u; return; } if (c.pc != 0x002FAA58u) [[unlikely]] return; }
L_002FAA58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[17].w[0] + 268u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA9CCu | kUnwind; return; } goto L_002FA9CC; } }
L_002FAA60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAA68u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002FAA68u) [[unlikely]] return; }
L_002FAA68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 320u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA9E4u | kUnwind; return; } goto L_002FA9E4; } }
L_002FAA70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FAA90:
    set32(c.r[29], c.r[29].w[0] - 592u);
    set32(c.r[5], 0u + 53u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], 0u + 10u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAAB4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003D(c, 99u, depth + 1u); else { c.pc = 0x002F58A0u; return; } if (c.pc != 0x002FAAB4u) [[unlikely]] return; }
L_002FAAB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 13552u);
    set32(c.r[16], c.r[17].w[0] + 352u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13544u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13532u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13520u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13508u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 13496u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 8u);
    st8((c.r[17].w[0] + 268u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 48u);
    st32((c.r[17].w[0] + 272u), 0u);
    st32((c.r[17].w[0] + 276u), 0u);
    st32((c.r[17].w[0] + 280u), 0u);
    st32((c.r[17].w[0] + 284u), 0u);
    st32((c.r[17].w[0] + 288u), 0u);
    st32((c.r[17].w[0] + 292u), 0u);
    st32((c.r[17].w[0] + 296u), 0u);
    st32((c.r[17].w[0] + 300u), 0u);
    st32((c.r[17].w[0] + 304u), 0u);
    st32((c.r[17].w[0] + 308u), 0u);
    st32((c.r[17].w[0] + 312u), 0u);
    st32((c.r[17].w[0] + 316u), 0u);
    st32((c.r[17].w[0] + 320u), 0u);
    st32((c.r[17].w[0] + 324u), 0u);
    st32((c.r[17].w[0] + 328u), 0u);
    st32((c.r[17].w[0] + 336u), 0u);
    st32((c.r[17].w[0] + 340u), 0u);
    st32((c.r[17].w[0] + 344u), 0u);
    st32((c.r[17].w[0] + 348u), 0u);
    st8((c.r[17].w[0] + 363u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 362u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 360u), static_cast<std::uint16_t>(0u));
    c.budget -= 46;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAB6Cu); st32((c.r[17].w[0] + 364u), 0u);  if (depth < kMaxDepth) unit_0018(c, 158u, depth + 1u); else { c.pc = 0x00261CB0u; return; } if (c.pc != 0x002FAB6Cu) [[unlikely]] return; }
L_002FAB6C:
    st32((c.r[16].w[0]), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 10u));
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 4512u);
    c.r[3].d[0] = c.r[3].d[0] | 19ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAB94u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0041(c, 131u, depth + 1u); else { c.pc = 0x00305280u; return; } if (c.pc != 0x002FAB94u) [[unlikely]] return; }
L_002FAB94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[8].d[0] = ld8((c.r[3].w[0] + 3920u));
    set32(c.r[16], c.r[29].w[0] + 52u);
    c.r[7].d[0] = ld8((c.r[2].w[0] + 3921u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], c.r[6].w[0] + 3924u);
    set32(c.r[4], 0u + 128u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 3922u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 3923u));
    st8((c.r[29].w[0] + 49u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 17;
L_002FABD8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FABD8u | kUnwind; return; } goto L_002FABD8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 4180u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4181u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 4512u);
    st8((c.r[29].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAC20u); st8((c.r[29].w[0] + 309u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FAC20u) [[unlikely]] return; }
L_002FAC20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAC30u); set32(c.r[5], c.r[5].w[0] - 6108u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FAC30u) [[unlikely]] return; }
L_002FAC30:
    set32(c.r[4], c.r[17].w[0] + 268u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAC3Cu); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003F(c, 180u, depth + 1u); else { c.pc = 0x002FD6B0u; return; } if (c.pc != 0x002FAC3Cu) [[unlikely]] return; }
L_002FAC3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 39u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAC4Cu); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x002FAC4Cu) [[unlikely]] return; }
L_002FAC4C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAC58u); set32(c.r[4], c.r[17].w[0] + 352u);  if (depth < kMaxDepth) unit_0041(c, 85u, depth + 1u); else { c.pc = 0x00304E30u; return; } if (c.pc != 0x002FAC58u) [[unlikely]] return; }
L_002FAC58:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 362u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st8((c.r[17].w[0] + 362u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 372u)));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 362u));
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 384u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_002FACA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FAD18; } }
    set32(c.r[4], c.r[17].w[0] + 68u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002FAD20; } }
    set32(c.r[4], c.r[17].w[0] + 52u);
    c.budget -= 1;
L_002FACCC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FACDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FACDCu);  if (depth < kMaxDepth) unit_0021(c, 242u, depth + 1u); else { c.pc = 0x00286E40u; return; } if (c.pc != 0x002FACDCu) [[unlikely]] return; }
L_002FACDC:
    set32(c.r[4], c.r[17].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FACE8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002FACE8u) [[unlikely]] return; }
L_002FACE8:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FACF4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002FACF4u) [[unlikely]] return; }
L_002FACF4:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAD00u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002FAD00u) [[unlikely]] return; }
L_002FAD00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002FAD18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAD18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002FAD18u) [[unlikely]] return; }
L_002FAD18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002FAD30; } }
L_002FAD20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAD28u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002FAD28u) [[unlikely]] return; }
L_002FAD28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 52u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FACCCu | kUnwind; return; } goto L_002FACCC; } }
L_002FAD30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FAD50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FAD60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FADC0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FADC0; } }
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAD9Cu); set32(c.r[6], c.r[29].w[0] + 111u);  if (depth < kMaxDepth) unit_0002(c, 32u, depth + 1u); else { c.pc = 0x00209170u; return; } if (c.pc != 0x002FAD9Cu) [[unlikely]] return; }
L_002FAD9C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FADC0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[4], c.r[16].w[0] + 84u);
    c.r[7].d[0] = ld8((c.r[29].w[0] + 111u));
    set32(c.r[5], ld32((c.r[2].w[0] + 348u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FADC0u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0002(c, 36u, depth + 1u); else { c.pc = 0x00209370u; return; } if (c.pc != 0x002FADC0u) [[unlikely]] return; }
L_002FADC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002FADD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002FB05C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FADF4u);  if (depth < kMaxDepth) unit_003D(c, 54u, depth + 1u); else { c.pc = 0x002F52F0u; return; } if (c.pc != 0x002FADF4u) [[unlikely]] return; }
L_002FADF4:
    set32(c.r[3], ld32((c.r[16].w[0] + 264u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FB05C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 77u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FAE4C; } }
    set32(c.r[17], ld32((c.r[28].w[0] - 29632u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FAFE0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAE44u); set32(c.r[5], c.r[2].w[0] + 288u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002FAE44u) [[unlikely]] return; }
L_002FAE44:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[28].w[0] - 29836u), c.r[3].w[0]);
    c.budget -= 2;
L_002FAE4C:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 29220u));
    c.budget -= 1;
L_002FAE50:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002FAFFC; } }
L_002FAE5C:
    set32(c.r[5], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 216u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 29u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 28u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002FAE7C; } }
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002FAE7C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FAE98; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 552u));
    set32(c.r[3], 0u + 208u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002FAE98; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FAE98:
    st8((c.r[16].w[0] + 384u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 1;
L_002FAE9C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 384u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FB01C; } }
    c.r[4].d[0] = ld8((c.r[28].w[0] - 29220u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002FB044; } }
L_002FAEB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 284u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 348u)));  if (t) { goto L_002FAEE8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 272u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAEE8u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002FAEE8u) [[unlikely]] return; }
L_002FAEE8:
    set32(c.r[6], ld32((c.r[16].w[0] + 300u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002FAF14; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 288u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 296u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAF14u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002FAF14u) [[unlikely]] return; }
L_002FAF14:
    set32(c.r[6], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002FAF3C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 320u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 324u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAF3Cu); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 115u, depth + 1u); else { c.pc = 0x0025B180u; return; } if (c.pc != 0x002FAF3Cu) [[unlikely]] return; }
L_002FAF3C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 77u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FB05C; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 29600u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAF5Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002FAF5Cu) [[unlikely]] return; }
L_002FAF5C:
    set32(c.r[3], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 300u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 348u)));  if (t) { goto L_002FAFB0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 332u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FAF84; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002FAFA0; } }
L_002FAF84:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::ee::add(c.fcr31, c.f[12], c.f[12]);
    c.budget -= 7;
L_002FAFA0:
    set32(c.r[5], ld32((c.r[16].w[0] + 288u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAFB0u); set32(c.r[4], c.r[4].w[0] - 224u);  if (depth < kMaxDepth) unit_0016(c, 136u, depth + 1u); else { c.pc = 0x0025BE80u; return; } if (c.pc != 0x002FAFB0u) [[unlikely]] return; }
L_002FAFB0:
    set32(c.r[3], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 316u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 348u)));  if (t) { goto L_002FB05C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAFD8u); set32(c.r[4], c.r[4].w[0] - 224u);  if (depth < kMaxDepth) unit_0016(c, 136u, depth + 1u); else { c.pc = 0x0025BE80u; return; } if (c.pc != 0x002FAFD8u) [[unlikely]] return; }
L_002FAFD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002FB060; } }
L_002FAFE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAFF4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002FAFF4u) [[unlikely]] return; }
L_002FAFF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[28].w[0] - 29220u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FAE50u | kUnwind; return; } goto L_002FAE50; } }
L_002FAFFC:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB00Cu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0028(c, 146u, depth + 1u); else { c.pc = 0x002A19B0u; return; } if (c.pc != 0x002FB00Cu) [[unlikely]] return; }
L_002FB00C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FAE5Cu | kUnwind; return; } goto L_002FAE5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 384u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FAE9Cu | kUnwind; return; } goto L_002FAE9C; } }
L_002FB01C:
    set32(c.r[7], ld32((c.r[16].w[0] + 380u)));
    set32(c.r[6], 0u + 255u);
    set32(c.r[5], 0u + 200u);
    set32(c.r[4], 0u + 140u);
    set32(c.r[3], 0u + 128u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002FB05C; } }
L_002FB044:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB054u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0028(c, 146u, depth + 1u); else { c.pc = 0x002A19B0u; return; } if (c.pc != 0x002FB054u) [[unlikely]] return; }
L_002FB054:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FAEB8u | kUnwind; return; } goto L_002FAEB8; } }
L_002FB05C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002FB060:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FB070:
    set32(c.r[5], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002FB124; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 384u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FB124; } }
    set32(c.r[8], ld32((c.r[5].w[0] + 348u)));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(576ll);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 376u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[4].w[0] + 360u);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[7].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[7].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[7].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    set32(c.r[7], ld32((c.r[4].w[0] + 352u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[4], c.r[6].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 1064u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 1056u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 1064u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[6].w[0] + 1064u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 1064u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 1056u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 1064u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[6].w[0] + 1064u), c.r[3].w[0]);
    c.budget -= 39;
L_002FB124:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FB130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FB178; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FB178; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 529u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FB170; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB168u);  if (depth < kMaxDepth) unit_001F(c, 369u, depth + 1u); else { c.pc = 0x0027F9B0u; return; } if (c.pc != 0x002FB168u) [[unlikely]] return; }
L_002FB168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FB178; } }
L_002FB170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB178u);  if (depth < kMaxDepth) unit_0001(c, 188u, depth + 1u); else { c.pc = 0x00207D20u; return; } if (c.pc != 0x002FB178u) [[unlikely]] return; }
L_002FB178:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002FB190:
    set32(c.r[3], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FB1A4; } }
L_002FB19C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FB1AC; } }
L_002FB1A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 264u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB19Cu | kUnwind; return; } goto L_002FB19C; } }
L_002FB1AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FB1C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 264u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB1E8u); set32(c.r[4], c.r[4].w[0] + 496u);  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x003D9720u; return; } if (c.pc != 0x002FB1E8u) [[unlikely]] return; }
L_002FB1E8:
    st32((c.r[17].w[0] + 264u), 0u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 237u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FB200; } }
L_002FB1F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002FB218; } }
L_002FB200:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB210u); set32(c.r[4], c.r[4].w[0] - 16128u);  if (depth < kMaxDepth) unit_0086(c, 141u, depth + 1u); else { c.pc = 0x00419E60u; return; } if (c.pc != 0x002FB210u) [[unlikely]] return; }
L_002FB210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB1F8u | kUnwind; return; } goto L_002FB1F8; } }
L_002FB218:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FB230:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002FB274; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FB274; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB270u); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x002E8B40u; return; } if (c.pc != 0x002FB270u) [[unlikely]] return; }
L_002FB270:
    st32((c.r[17].w[0] + 264u), 0u);
    c.budget -= 1;
L_002FB274:
    st32((c.r[17].w[0] + 264u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 236u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB288u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0041(c, 173u, depth + 1u); else { c.pc = 0x003056E0u; return; } if (c.pc != 0x002FB288u) [[unlikely]] return; }
L_002FB288:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 236u)));
    c.f[12] = ld32((c.r[29].w[0] + 60u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB2A0u); set32(c.r[7], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 262u, depth + 1u); else { c.pc = 0x00283600u; return; } if (c.pc != 0x002FB2A0u) [[unlikely]] return; }
L_002FB2A0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 237u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FB2DC; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1497u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 1497u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 264u)));
    c.budget -= 7;
L_002FB2C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB2D4u); set32(c.r[4], c.r[4].w[0] + 496u);  if (depth < kMaxDepth) unit_0076(c, 103u, depth + 1u); else { c.pc = 0x003D97B0u; return; } if (c.pc != 0x002FB2D4u) [[unlikely]] return; }
L_002FB2D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002FB2F8; } }
L_002FB2DC:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 237u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB2F0u); set32(c.r[4], c.r[4].w[0] - 16128u);  if (depth < kMaxDepth) unit_0086(c, 155u, depth + 1u); else { c.pc = 0x0041A390u; return; } if (c.pc != 0x002FB2F0u) [[unlikely]] return; }
L_002FB2F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 264u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB2C8u | kUnwind; return; } goto L_002FB2C8; } }
L_002FB2F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FB310:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FB494; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 13440u);
    set32(c.r[2], c.r[2].w[0] - 13432u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 272u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13420u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13408u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13396u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 13384u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB37Cu); st32((c.r[17].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002FB37Cu) [[unlikely]] return; }
L_002FB37C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB384u); set32(c.r[4], c.r[17].w[0] + 288u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002FB384u) [[unlikely]] return; }
L_002FB384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB38Cu); set32(c.r[4], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002FB38Cu) [[unlikely]] return; }
L_002FB38C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB394u); set32(c.r[4], c.r[17].w[0] + 336u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002FB394u) [[unlikely]] return; }
L_002FB394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB39Cu); set32(c.r[4], c.r[17].w[0] + 320u);  if (depth < kMaxDepth) unit_0021(c, 242u, depth + 1u); else { c.pc = 0x00286E40u; return; } if (c.pc != 0x002FB39Cu) [[unlikely]] return; }
L_002FB39C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB3A4u); set32(c.r[4], c.r[17].w[0] + 356u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002FB3A4u) [[unlikely]] return; }
L_002FB3A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB3ACu); set32(c.r[4], c.r[17].w[0] + 372u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002FB3ACu) [[unlikely]] return; }
L_002FB3AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB3B4u); set32(c.r[4], c.r[17].w[0] + 388u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002FB3B4u) [[unlikely]] return; }
L_002FB3B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB3BCu); set32(c.r[4], c.r[17].w[0] + 420u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002FB3BCu) [[unlikely]] return; }
L_002FB3BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB3C4u); set32(c.r[4], c.r[17].w[0] + 404u);  if (depth < kMaxDepth) unit_0021(c, 242u, depth + 1u); else { c.pc = 0x00286E40u; return; } if (c.pc != 0x002FB3C4u) [[unlikely]] return; }
L_002FB3C4:
    set32(c.r[2], c.r[17].w[0] + 440u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FB49C; } }
L_002FB3D0:
    set32(c.r[2], c.r[17].w[0] + 352u);
    c.budget -= 1;
L_002FB3D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FB420; } }
    set32(c.r[4], c.r[17].w[0] + 420u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002FB4B8; } }
    set32(c.r[4], c.r[17].w[0] + 404u);
    c.budget -= 1;
L_002FB3EC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FB3FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB3FCu);  if (depth < kMaxDepth) unit_0021(c, 242u, depth + 1u); else { c.pc = 0x00286E40u; return; } if (c.pc != 0x002FB3FCu) [[unlikely]] return; }
L_002FB3FC:
    set32(c.r[4], c.r[17].w[0] + 388u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB408u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002FB408u) [[unlikely]] return; }
L_002FB408:
    set32(c.r[4], c.r[17].w[0] + 372u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB414u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002FB414u) [[unlikely]] return; }
L_002FB414:
    set32(c.r[4], c.r[17].w[0] + 356u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB420u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002FB420u) [[unlikely]] return; }
L_002FB420:
    set32(c.r[2], c.r[17].w[0] + 268u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FB470; } }
    set32(c.r[4], c.r[17].w[0] + 336u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002FB4C8; } }
    set32(c.r[4], c.r[17].w[0] + 320u);
    c.budget -= 1;
L_002FB43C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FB44C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB44Cu);  if (depth < kMaxDepth) unit_0021(c, 242u, depth + 1u); else { c.pc = 0x00286E40u; return; } if (c.pc != 0x002FB44Cu) [[unlikely]] return; }
L_002FB44C:
    set32(c.r[4], c.r[17].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB458u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002FB458u) [[unlikely]] return; }
L_002FB458:
    set32(c.r[4], c.r[17].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB464u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002FB464u) [[unlikely]] return; }
L_002FB464:
    set32(c.r[4], c.r[17].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB470u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002FB470u) [[unlikely]] return; }
L_002FB470:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB47Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 85u, depth + 1u); else { c.pc = 0x002F5700u; return; } if (c.pc != 0x002FB47Cu) [[unlikely]] return; }
L_002FB47C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002FB494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB494u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002FB494u) [[unlikely]] return; }
L_002FB494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002FB4D8; } }
L_002FB49C:
    set32(c.r[4], c.r[17].w[0] + 448u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 440u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB3D0u | kUnwind; return; } goto L_002FB3D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB4B0u);  if (depth < kMaxDepth) unit_0018(c, 157u, depth + 1u); else { c.pc = 0x00261CA0u; return; } if (c.pc != 0x002FB4B0u) [[unlikely]] return; }
L_002FB4B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[17].w[0] + 352u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB3D4u | kUnwind; return; } goto L_002FB3D4; } }
L_002FB4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB4C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002FB4C0u) [[unlikely]] return; }
L_002FB4C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 404u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB3ECu | kUnwind; return; } goto L_002FB3EC; } }
L_002FB4C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB4D0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002FB4D0u) [[unlikely]] return; }
L_002FB4D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 320u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB43Cu | kUnwind; return; } goto L_002FB43C; } }
L_002FB4D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FB4F0:
    set32(c.r[29], c.r[29].w[0] - 592u);
    set32(c.r[5], 0u + 16u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB514u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 99u, depth + 1u); else { c.pc = 0x002F58A0u; return; } if (c.pc != 0x002FB514u) [[unlikely]] return; }
L_002FB514:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 13440u);
    set32(c.r[17], c.r[16].w[0] + 440u);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13432u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13420u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13408u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13396u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 13384u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 8u);
    st8((c.r[16].w[0] + 268u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 48u);
    st32((c.r[16].w[0] + 272u), 0u);
    st32((c.r[16].w[0] + 276u), 0u);
    st32((c.r[16].w[0] + 280u), 0u);
    st32((c.r[16].w[0] + 284u), 0u);
    st32((c.r[16].w[0] + 288u), 0u);
    st32((c.r[16].w[0] + 292u), 0u);
    st32((c.r[16].w[0] + 296u), 0u);
    st32((c.r[16].w[0] + 300u), 0u);
    st32((c.r[16].w[0] + 304u), 0u);
    st32((c.r[16].w[0] + 308u), 0u);
    st32((c.r[16].w[0] + 312u), 0u);
    st32((c.r[16].w[0] + 316u), 0u);
    st32((c.r[16].w[0] + 320u), 0u);
    st32((c.r[16].w[0] + 324u), 0u);
    st32((c.r[16].w[0] + 328u), 0u);
    st32((c.r[16].w[0] + 336u), 0u);
    st32((c.r[16].w[0] + 340u), 0u);
    st32((c.r[16].w[0] + 344u), 0u);
    st32((c.r[16].w[0] + 348u), 0u);
    st8((c.r[16].w[0] + 352u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 356u), 0u);
    st32((c.r[16].w[0] + 360u), 0u);
    st32((c.r[16].w[0] + 364u), 0u);
    st32((c.r[16].w[0] + 368u), 0u);
    st32((c.r[16].w[0] + 372u), 0u);
    st32((c.r[16].w[0] + 376u), 0u);
    st32((c.r[16].w[0] + 380u), 0u);
    st32((c.r[16].w[0] + 384u), 0u);
    st32((c.r[16].w[0] + 388u), 0u);
    st32((c.r[16].w[0] + 392u), 0u);
    st32((c.r[16].w[0] + 396u), 0u);
    st32((c.r[16].w[0] + 400u), 0u);
    st32((c.r[16].w[0] + 404u), 0u);
    st32((c.r[16].w[0] + 408u), 0u);
    st32((c.r[16].w[0] + 412u), 0u);
    st32((c.r[16].w[0] + 420u), 0u);
    st32((c.r[16].w[0] + 424u), 0u);
    st32((c.r[16].w[0] + 428u), 0u);
    st32((c.r[16].w[0] + 432u), 0u);
    st8((c.r[16].w[0] + 451u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 450u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 448u), static_cast<std::uint16_t>(0u));
    c.budget -= 66;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB61Cu); st32((c.r[16].w[0] + 452u), 0u);  if (depth < kMaxDepth) unit_0018(c, 158u, depth + 1u); else { c.pc = 0x00261CB0u; return; } if (c.pc != 0x002FB61Cu) [[unlikely]] return; }
L_002FB61C:
    st32((c.r[17].w[0]), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 10u));
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + 4512u);
    c.r[3].d[0] = c.r[3].d[0] | 19ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB644u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0041(c, 131u, depth + 1u); else { c.pc = 0x00305280u; return; } if (c.pc != 0x002FB644u) [[unlikely]] return; }
L_002FB644:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 200u);
    set32(c.r[17], c.r[29].w[0] + 52u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st8((c.r[29].w[0] + 49u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4512u);
    st8((c.r[29].w[0] + 308u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB678u); st8((c.r[29].w[0] + 309u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FB678u) [[unlikely]] return; }
L_002FB678:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB688u); set32(c.r[5], c.r[5].w[0] - 6091u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FB688u) [[unlikely]] return; }
L_002FB688:
    set32(c.r[4], c.r[16].w[0] + 268u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB694u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003F(c, 180u, depth + 1u); else { c.pc = 0x002FD6B0u; return; } if (c.pc != 0x002FB694u) [[unlikely]] return; }
L_002FB694:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB6A4u); set32(c.r[5], c.r[5].w[0] + 4512u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FB6A4u) [[unlikely]] return; }
L_002FB6A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB6B4u); set32(c.r[5], c.r[5].w[0] - 6071u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FB6B4u) [[unlikely]] return; }
L_002FB6B4:
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB6C0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003F(c, 180u, depth + 1u); else { c.pc = 0x002FD6B0u; return; } if (c.pc != 0x002FB6C0u) [[unlikely]] return; }
L_002FB6C0:
    set32(c.r[3], c.r[16].w[0] + 352u);
    set32(c.r[2], c.r[16].w[0] + 268u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[28].w[0] - 29628u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 29624u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 9992u);
    set32(c.r[5], 0u + 35u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB6E4u); st8((c.r[16].w[0] + 436u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x002FB6E4u) [[unlikely]] return; }
L_002FB6E4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB6F0u); set32(c.r[4], c.r[16].w[0] + 440u);  if (depth < kMaxDepth) unit_0041(c, 85u, depth + 1u); else { c.pc = 0x00304E30u; return; } if (c.pc != 0x002FB6F0u) [[unlikely]] return; }
L_002FB6F0:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 450u));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 64ull;
    st8((c.r[16].w[0] + 450u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], ld32((c.r[16].w[0] + 460u)));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 450u));
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[28].w[0] - 32208u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 592u);  c.pc = t; return; }
L_002FB730:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FB740:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FB7A0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FB7A0; } }
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB77Cu); set32(c.r[6], c.r[29].w[0] + 111u);  if (depth < kMaxDepth) unit_0002(c, 32u, depth + 1u); else { c.pc = 0x00209170u; return; } if (c.pc != 0x002FB77Cu) [[unlikely]] return; }
L_002FB77C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FB7A0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[4], c.r[16].w[0] + 84u);
    c.r[7].d[0] = ld8((c.r[29].w[0] + 111u));
    set32(c.r[5], ld32((c.r[2].w[0] + 348u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB7A0u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0002(c, 36u, depth + 1u); else { c.pc = 0x00209370u; return; } if (c.pc != 0x002FB7A0u) [[unlikely]] return; }
L_002FB7A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002FB7B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002FBB18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB7D4u);  if (depth < kMaxDepth) unit_003D(c, 54u, depth + 1u); else { c.pc = 0x002F52F0u; return; } if (c.pc != 0x002FB7D4u) [[unlikely]] return; }
L_002FB7D4:
    set32(c.r[5], ld32((c.r[16].w[0] + 264u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FBB18; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32208u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FBB18; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FBACC; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 216u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 29u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 28u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002FB820; } }
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002FB820:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FB83C; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 552u));
    set32(c.r[3], 0u + 38u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002FB83C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FB83C:
    st8((c.r[16].w[0] + 436u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 1;
L_002FB840:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 436u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FBAD4; } }
L_002FB84C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 77u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FB88C; } }
    set32(c.r[17], ld32((c.r[28].w[0] - 29632u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FBAFC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB884u); set32(c.r[5], c.r[2].w[0] + 288u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002FB884u) [[unlikely]] return; }
L_002FB884:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[28].w[0] - 29836u), c.r[3].w[0]);
    c.budget -= 2;
L_002FB88C:
    set32(c.r[3], ld32((c.r[16].w[0] + 264u)));
    c.budget -= 1;
L_002FB890:
    set32(c.r[6], ld32((c.r[16].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 348u)));  if (t) { goto L_002FB8BC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 272u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB8BCu); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002FB8BCu) [[unlikely]] return; }
L_002FB8BC:
    set32(c.r[6], ld32((c.r[16].w[0] + 300u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002FB8E8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 288u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 296u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB8E8u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002FB8E8u) [[unlikely]] return; }
L_002FB8E8:
    set32(c.r[6], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002FB910; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 320u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 324u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB910u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 115u, depth + 1u); else { c.pc = 0x0025B180u; return; } if (c.pc != 0x002FB910u) [[unlikely]] return; }
L_002FB910:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 436u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FB9A0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 368u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[17], ld32((c.r[3].w[0] + 348u)));  if (t) { goto L_002FB94C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 356u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 364u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB94Cu); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002FB94Cu) [[unlikely]] return; }
L_002FB94C:
    set32(c.r[6], ld32((c.r[16].w[0] + 384u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002FB978; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 372u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 380u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB978u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002FB978u) [[unlikely]] return; }
L_002FB978:
    set32(c.r[6], ld32((c.r[16].w[0] + 412u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002FB9A0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 404u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 408u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB9A0u); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 115u, depth + 1u); else { c.pc = 0x0025B180u; return; } if (c.pc != 0x002FB9A0u) [[unlikely]] return; }
L_002FB9A0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 77u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FBB18; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 29600u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB9C0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002FB9C0u) [[unlikely]] return; }
L_002FB9C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 300u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 348u)));  if (t) { goto L_002FBA14; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 332u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FB9E8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002FBA04; } }
L_002FB9E8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::ee::add(c.fcr31, c.f[12], c.f[12]);
    c.budget -= 7;
L_002FBA04:
    set32(c.r[5], ld32((c.r[16].w[0] + 288u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBA14u); set32(c.r[4], c.r[4].w[0] - 224u);  if (depth < kMaxDepth) unit_0016(c, 136u, depth + 1u); else { c.pc = 0x0025BE80u; return; } if (c.pc != 0x002FBA14u) [[unlikely]] return; }
L_002FBA14:
    set32(c.r[3], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 316u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 348u)));  if (t) { goto L_002FBA3C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBA3Cu); set32(c.r[4], c.r[4].w[0] - 224u);  if (depth < kMaxDepth) unit_0016(c, 136u, depth + 1u); else { c.pc = 0x0025BE80u; return; } if (c.pc != 0x002FBA3Cu) [[unlikely]] return; }
L_002FBA3C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 436u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FBB18; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 384u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 348u)));  if (t) { goto L_002FBA9C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 416u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002FBA70; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002FBA8C; } }
L_002FBA70:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::ee::add(c.fcr31, c.f[12], c.f[12]);
    c.budget -= 7;
L_002FBA8C:
    set32(c.r[5], ld32((c.r[16].w[0] + 372u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBA9Cu); set32(c.r[4], c.r[4].w[0] - 224u);  if (depth < kMaxDepth) unit_0016(c, 136u, depth + 1u); else { c.pc = 0x0025BE80u; return; } if (c.pc != 0x002FBA9Cu) [[unlikely]] return; }
L_002FBA9C:
    set32(c.r[3], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 400u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 348u)));  if (t) { goto L_002FBB18; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 388u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBAC4u); set32(c.r[4], c.r[4].w[0] - 224u);  if (depth < kMaxDepth) unit_0016(c, 136u, depth + 1u); else { c.pc = 0x0025BE80u; return; } if (c.pc != 0x002FBAC4u) [[unlikely]] return; }
L_002FBAC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002FBB1C; } }
L_002FBACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 436u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB840u | kUnwind; return; } goto L_002FB840; } }
L_002FBAD4:
    set32(c.r[7], ld32((c.r[16].w[0] + 468u)));
    set32(c.r[6], 0u + 255u);
    set32(c.r[5], 0u + 200u);
    set32(c.r[4], 0u + 140u);
    set32(c.r[3], 0u + 128u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB84Cu | kUnwind; return; } goto L_002FB84C; } }
L_002FBAFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBB10u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002FBB10u) [[unlikely]] return; }
L_002FBB10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 264u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB890u | kUnwind; return; } goto L_002FB890; } }
L_002FBB18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002FBB1C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FBB30:
    set32(c.r[5], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002FBBE4; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 436u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FBBE4; } }
    set32(c.r[8], ld32((c.r[5].w[0] + 348u)));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(576ll);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 464u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[4].w[0] + 448u);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[7].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[7].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[7].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    set32(c.r[7], ld32((c.r[4].w[0] + 440u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[4], c.r[6].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 1064u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 1056u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 1064u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[6].w[0] + 1064u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 1064u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 1056u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 1064u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[6].w[0] + 1064u), c.r[3].w[0]);
    c.budget -= 39;
L_002FBBE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FBBF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FBC38; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FBC38; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 529u));
    c.r[2].d[0] = c.r[2].d[0] << 58;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FBC30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBC28u);  if (depth < kMaxDepth) unit_001F(c, 369u, depth + 1u); else { c.pc = 0x0027F9B0u; return; } if (c.pc != 0x002FBC28u) [[unlikely]] return; }
L_002FBC28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FBC38; } }
L_002FBC30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBC38u);  if (depth < kMaxDepth) unit_0001(c, 188u, depth + 1u); else { c.pc = 0x00207D20u; return; } if (c.pc != 0x002FBC38u) [[unlikely]] return; }
L_002FBC38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002FBC50:
    set32(c.r[3], ld32((c.r[4].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FBC64; } }
L_002FBC5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FBC6C; } }
L_002FBC64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 192u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FBC5Cu | kUnwind; return; } goto L_002FBC5C; } }
L_002FBC6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FBC80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 192u), 0u);  c.pc = t; return; }
L_002FBC90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 192u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 196u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBCB0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 173u, depth + 1u); else { c.pc = 0x003056E0u; return; } if (c.pc != 0x002FBCB0u) [[unlikely]] return; }
L_002FBCB0:
    set32(c.r[4], ld32((c.r[16].w[0] + 192u)));
    c.f[12] = ld32((c.r[29].w[0] + 44u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 196u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBCC8u); set32(c.r[7], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 262u, depth + 1u); else { c.pc = 0x00283600u; return; } if (c.pc != 0x002FBCC8u) [[unlikely]] return; }
L_002FBCC8:
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], c.r[4].w[0] - 16128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBCDCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0086(c, 155u, depth + 1u); else { c.pc = 0x0041A390u; return; } if (c.pc != 0x002FBCDCu) [[unlikely]] return; }
L_002FBCDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FBCF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002FBF04; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 13328u);
    set32(c.r[2], c.r[2].w[0] - 13320u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13308u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 13296u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13284u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 13272u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBD64u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0011(c, 313u, depth + 1u); else { c.pc = 0x00246D80u; return; } if (c.pc != 0x002FBD64u) [[unlikely]] return; }
L_002FBD64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBD6Cu); set32(c.r[4], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002FBD6Cu) [[unlikely]] return; }
L_002FBD6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBD74u); set32(c.r[4], c.r[17].w[0] + 132u);  if (depth < kMaxDepth) unit_0021(c, 242u, depth + 1u); else { c.pc = 0x00286E40u; return; } if (c.pc != 0x002FBD74u) [[unlikely]] return; }
L_002FBD74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBD7Cu); set32(c.r[4], c.r[17].w[0] + 84u);  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002FBD7Cu) [[unlikely]] return; }
L_002FBD7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBD84u); set32(c.r[4], c.r[17].w[0] + 160u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002FBD84u) [[unlikely]] return; }
L_002FBD84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBD8Cu); set32(c.r[4], c.r[17].w[0] + 204u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002FBD8Cu) [[unlikely]] return; }
L_002FBD8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBD94u); set32(c.r[4], c.r[17].w[0] + 220u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002FBD94u) [[unlikely]] return; }
L_002FBD94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBD9Cu); set32(c.r[4], c.r[17].w[0] + 236u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002FBD9Cu) [[unlikely]] return; }
L_002FBD9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBDA4u); set32(c.r[4], c.r[17].w[0] + 268u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002FBDA4u) [[unlikely]] return; }
L_002FBDA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBDACu); set32(c.r[4], c.r[17].w[0] + 252u);  if (depth < kMaxDepth) unit_0021(c, 242u, depth + 1u); else { c.pc = 0x00286E40u; return; } if (c.pc != 0x002FBDACu) [[unlikely]] return; }
L_002FBDAC:
    set32(c.r[2], c.r[17].w[0] + 288u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FBF0C; } }
L_002FBDB8:
    set32(c.r[2], c.r[17].w[0] + 200u);
    c.budget -= 1;
L_002FBDBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FBE08; } }
    set32(c.r[4], c.r[17].w[0] + 268u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002FBF28; } }
    set32(c.r[4], c.r[17].w[0] + 252u);
    c.budget -= 1;
L_002FBDD4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FBDE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBDE4u);  if (depth < kMaxDepth) unit_0021(c, 242u, depth + 1u); else { c.pc = 0x00286E40u; return; } if (c.pc != 0x002FBDE4u) [[unlikely]] return; }
L_002FBDE4:
    set32(c.r[4], c.r[17].w[0] + 236u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBDF0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002FBDF0u) [[unlikely]] return; }
L_002FBDF0:
    set32(c.r[4], c.r[17].w[0] + 220u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBDFCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002FBDFCu) [[unlikely]] return; }
L_002FBDFC:
    set32(c.r[4], c.r[17].w[0] + 204u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBE08u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002FBE08u) [[unlikely]] return; }
L_002FBE08:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FBE1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBE1Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002FBE1Cu) [[unlikely]] return; }
L_002FBE1C:
    set32(c.r[4], c.r[17].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBE28u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002FBE28u) [[unlikely]] return; }
L_002FBE28:
    set32(c.r[4], c.r[17].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBE34u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002FBE34u) [[unlikely]] return; }
L_002FBE34:
    set32(c.r[4], c.r[17].w[0] + 132u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002FBF38; } }
    set32(c.r[4], c.r[17].w[0] + 84u);
    c.budget -= 1;
L_002FBE44:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002FBF48; } }
    set32(c.r[2], c.r[17].w[0] + 84u);
    c.budget -= 1;
L_002FBE50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FBE9C; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29608u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FBE9C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29600u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FBE7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBE78u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002FBE78u) [[unlikely]] return; }
L_002FBE78:
    st32((c.r[28].w[0] - 29600u), 0u);
    c.budget -= 1;
L_002FBE7C:
    set32(c.r[18], ld32((c.r[28].w[0] - 29604u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002FBE98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBE90u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002FBE90u) [[unlikely]] return; }
L_002FBE90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBE98u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002FBE98u) [[unlikely]] return; }
L_002FBE98:
    st8((c.r[28].w[0] - 29608u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002FBE9C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002FBEEC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 15024u);
    set32(c.r[2], c.r[2].w[0] - 15016u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 15004u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14992u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14980u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 14968u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 18;
L_002FBEEC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002FBF04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBF04u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002FBF04u) [[unlikely]] return; }
L_002FBF04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002FBF58; } }
L_002FBF0C:
    set32(c.r[4], c.r[17].w[0] + 296u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 288u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FBDB8u | kUnwind; return; } goto L_002FBDB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBF20u);  if (depth < kMaxDepth) unit_0018(c, 157u, depth + 1u); else { c.pc = 0x00261CA0u; return; } if (c.pc != 0x002FBF20u) [[unlikely]] return; }
L_002FBF20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[17].w[0] + 200u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FBDBCu | kUnwind; return; } goto L_002FBDBC; } }
L_002FBF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBF30u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002FBF30u) [[unlikely]] return; }
L_002FBF30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 252u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FBDD4u | kUnwind; return; } goto L_002FBDD4; } }
L_002FBF38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBF40u);  if (depth < kMaxDepth) unit_0021(c, 242u, depth + 1u); else { c.pc = 0x00286E40u; return; } if (c.pc != 0x002FBF40u) [[unlikely]] return; }
L_002FBF40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 84u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FBE44u | kUnwind; return; } goto L_002FBE44; } }
L_002FBF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBF50u);  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002FBF50u) [[unlikely]] return; }
L_002FBF50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[17].w[0] + 84u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FBE50u | kUnwind; return; } goto L_002FBE50; } }
L_002FBF58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FBF70:
    set32(c.r[29], c.r[29].w[0] - 1152u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBF88u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0041(c, 178u, depth + 1u); else { c.pc = 0x003057A0u; return; } if (c.pc != 0x002FBF88u) [[unlikely]] return; }
L_002FBF88:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29608u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_003F(c, 7u, depth); } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBFA4u); set32(c.r[5], c.r[5].w[0] - 6324u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002FBFA4u) [[unlikely]] return; }
L_002FBFA4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBFB4u); set32(c.r[5], c.r[5].w[0] - 6292u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002FBFB4u) [[unlikely]] return; }
L_002FBFB4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBFC0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0017(c, 104u, depth + 1u); else { c.pc = 0x0025EED0u; return; } if (c.pc != 0x002FBFC0u) [[unlikely]] return; }
L_002FBFC0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 6384u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBFDCu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 189u, depth + 1u); else { c.pc = 0x0025FD10u; return; } if (c.pc != 0x002FBFDCu) [[unlikely]] return; }
L_002FBFDC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBFF8u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 165u, depth + 1u); else { c.pc = 0x0025F870u; return; } if (c.pc != 0x002FBFF8u) [[unlikely]] return; }
L_002FBFF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC000u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002FC000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_003F(c, 1u, depth);
}

}

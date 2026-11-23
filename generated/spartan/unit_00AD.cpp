#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AD[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0,
    0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0,
    17, 0, 0, 18, 0, 19, 20, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 62, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0,
    0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0,
    0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0,
    0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129,
    0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0,
    140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0,
    0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0,
    0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0,
    0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0,
    177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 188, 0,
    0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0,
    0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213,
    0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0,
    0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 226, 0, 227, 0, 0, 228, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 236, 0, 237, 0, 0,
    238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 245, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0,
    0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    265, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 275, 0, 0, 0, 0, 0, 0,
    0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0,
    0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 284,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 295, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0,
    0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00AD(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004B4000;
    case 2u: goto L_004B4080;
    case 3u: goto L_004B40F4;
    case 4u: goto L_004B4110;
    case 5u: goto L_004B4140;
    case 6u: goto L_004B4150;
    case 7u: goto L_004B4160;
    case 8u: goto L_004B41AC;
    case 9u: goto L_004B41D8;
    case 10u: goto L_004B41E4;
    case 11u: goto L_004B4234;
    case 12u: goto L_004B4250;
    case 13u: goto L_004B42B4;
    case 14u: goto L_004B42C4;
    case 15u: goto L_004B42E0;
    case 16u: goto L_004B42F0;
    case 17u: goto L_004B4300;
    case 18u: goto L_004B430C;
    case 19u: goto L_004B4314;
    case 20u: goto L_004B4318;
    case 21u: goto L_004B432C;
    case 22u: goto L_004B433C;
    case 23u: goto L_004B4360;
    case 24u: goto L_004B4378;
    case 25u: goto L_004B43D8;
    case 26u: goto L_004B43EC;
    case 27u: goto L_004B4420;
    case 28u: goto L_004B4428;
    case 29u: goto L_004B4470;
    case 30u: goto L_004B4480;
    case 31u: goto L_004B449C;
    case 32u: goto L_004B44F8;
    case 33u: goto L_004B450C;
    case 34u: goto L_004B451C;
    case 35u: goto L_004B4530;
    case 36u: goto L_004B4544;
    case 37u: goto L_004B454C;
    case 38u: goto L_004B4554;
    case 39u: goto L_004B4590;
    case 40u: goto L_004B45A0;
    case 41u: goto L_004B45B0;
    case 42u: goto L_004B45C0;
    case 43u: goto L_004B45D0;
    case 44u: goto L_004B45F8;
    case 45u: goto L_004B4608;
    case 46u: goto L_004B4628;
    case 47u: goto L_004B46C0;
    case 48u: goto L_004B46D0;
    case 49u: goto L_004B46F0;
    case 50u: goto L_004B470C;
    case 51u: goto L_004B472C;
    case 52u: goto L_004B4744;
    case 53u: goto L_004B4760;
    case 54u: goto L_004B4770;
    case 55u: goto L_004B47D0;
    case 56u: goto L_004B47F8;
    case 57u: goto L_004B480C;
    case 58u: goto L_004B4818;
    case 59u: goto L_004B4830;
    case 60u: goto L_004B4858;
    case 61u: goto L_004B486C;
    case 62u: goto L_004B4878;
    case 63u: goto L_004B4890;
    case 64u: goto L_004B48BC;
    case 65u: goto L_004B48D0;
    case 66u: goto L_004B48DC;
    case 67u: goto L_004B48F0;
    case 68u: goto L_004B4900;
    case 69u: goto L_004B4924;
    case 70u: goto L_004B4938;
    case 71u: goto L_004B4944;
    case 72u: goto L_004B4960;
    case 73u: goto L_004B4994;
    case 74u: goto L_004B49A8;
    case 75u: goto L_004B49B4;
    case 76u: goto L_004B49D0;
    case 77u: goto L_004B49F4;
    case 78u: goto L_004B4A08;
    case 79u: goto L_004B4A1C;
    case 80u: goto L_004B4A30;
    case 81u: goto L_004B4A40;
    case 82u: goto L_004B4A94;
    case 83u: goto L_004B4AB0;
    case 84u: goto L_004B4B20;
    case 85u: goto L_004B4B74;
    case 86u: goto L_004B4B90;
    case 87u: goto L_004B4BB0;
    case 88u: goto L_004B4BCC;
    case 89u: goto L_004B4BE0;
    case 90u: goto L_004B4C00;
    case 91u: goto L_004B4C1C;
    case 92u: goto L_004B4C30;
    case 93u: goto L_004B4C5C;
    case 94u: goto L_004B4C74;
    case 95u: goto L_004B4CA0;
    case 96u: goto L_004B4CB0;
    case 97u: goto L_004B4CC0;
    case 98u: goto L_004B4CF0;
    case 99u: goto L_004B4D14;
    case 100u: goto L_004B4D28;
    case 101u: goto L_004B4D3C;
    case 102u: goto L_004B4D54;
    case 103u: goto L_004B4D6C;
    case 104u: goto L_004B4D8C;
    case 105u: goto L_004B4DA4;
    case 106u: goto L_004B4DE0;
    case 107u: goto L_004B4E34;
    case 108u: goto L_004B4E50;
    case 109u: goto L_004B4EB4;
    case 110u: goto L_004B4F30;
    case 111u: goto L_004B4F50;
    case 112u: goto L_004B4F90;
    case 113u: goto L_004B4FA8;
    case 114u: goto L_004B4FBC;
    case 115u: goto L_004B4FF4;
    case 116u: goto L_004B5008;
    case 117u: goto L_004B5018;
    case 118u: goto L_004B5060;
    case 119u: goto L_004B50A0;
    case 120u: goto L_004B50F4;
    case 121u: goto L_004B5110;
    case 122u: goto L_004B5180;
    case 123u: goto L_004B5198;
    case 124u: goto L_004B51B0;
    case 125u: goto L_004B51C0;
    case 126u: goto L_004B5218;
    case 127u: goto L_004B522C;
    case 128u: goto L_004B5268;
    case 129u: goto L_004B527C;
    case 130u: goto L_004B52A0;
    case 131u: goto L_004B52B0;
    case 132u: goto L_004B52D0;
    case 133u: goto L_004B5334;
    case 134u: goto L_004B5350;
    case 135u: goto L_004B53D0;
    case 136u: goto L_004B5424;
    case 137u: goto L_004B5440;
    case 138u: goto L_004B5450;
    case 139u: goto L_004B5474;
    case 140u: goto L_004B5480;
    case 141u: goto L_004B5490;
    case 142u: goto L_004B54A0;
    case 143u: goto L_004B54E0;
    case 144u: goto L_004B5554;
    case 145u: goto L_004B5570;
    case 146u: goto L_004B5580;
    case 147u: goto L_004B5590;
    case 148u: goto L_004B55AC;
    case 149u: goto L_004B5674;
    case 150u: goto L_004B5694;
    case 151u: goto L_004B56B8;
    case 152u: goto L_004B56D0;
    case 153u: goto L_004B56F0;
    case 154u: goto L_004B5718;
    case 155u: goto L_004B5740;
    case 156u: goto L_004B575C;
    case 157u: goto L_004B5810;
    case 158u: goto L_004B5830;
    case 159u: goto L_004B5854;
    case 160u: goto L_004B586C;
    case 161u: goto L_004B588C;
    case 162u: goto L_004B58B4;
    case 163u: goto L_004B58D0;
    case 164u: goto L_004B58F4;
    case 165u: goto L_004B59A8;
    case 166u: goto L_004B59C8;
    case 167u: goto L_004B59F4;
    case 168u: goto L_004B5A0C;
    case 169u: goto L_004B5A2C;
    case 170u: goto L_004B5A64;
    case 171u: goto L_004B5A8C;
    case 172u: goto L_004B5AB0;
    case 173u: goto L_004B5AC0;
    case 174u: goto L_004B5AD0;
    case 175u: goto L_004B5AE0;
    case 176u: goto L_004B5AF0;
    case 177u: goto L_004B5B00;
    case 178u: goto L_004B5B10;
    case 179u: goto L_004B5B20;
    case 180u: goto L_004B5B60;
    case 181u: goto L_004B5B8C;
    case 182u: goto L_004B5BFC;
    case 183u: goto L_004B5C10;
    case 184u: goto L_004B5C90;
    case 185u: goto L_004B5CA0;
    case 186u: goto L_004B5CD8;
    case 187u: goto L_004B5CE4;
    case 188u: goto L_004B5CF8;
    case 189u: goto L_004B5D04;
    case 190u: goto L_004B5D1C;
    case 191u: goto L_004B5D74;
    case 192u: goto L_004B5D94;
    case 193u: goto L_004B5DA4;
    case 194u: goto L_004B5DC0;
    case 195u: goto L_004B5DD0;
    case 196u: goto L_004B5E00;
    case 197u: goto L_004B5E20;
    case 198u: goto L_004B5E4C;
    case 199u: goto L_004B5E58;
    case 200u: goto L_004B5E70;
    case 201u: goto L_004B5EB0;
    case 202u: goto L_004B5EE0;
    case 203u: goto L_004B5EF8;
    case 204u: goto L_004B5F10;
    case 205u: goto L_004B5F20;
    case 206u: goto L_004B5F38;
    case 207u: goto L_004B5F80;
    case 208u: goto L_004B5FA4;
    case 209u: goto L_004B5FAC;
    case 210u: goto L_004B5FBC;
    case 211u: goto L_004B5FD0;
    case 212u: goto L_004B5FF4;
    case 213u: goto L_004B5FFC;
    case 214u: goto L_004B600C;
    case 215u: goto L_004B6020;
    case 216u: goto L_004B6040;
    case 217u: goto L_004B6050;
    case 218u: goto L_004B6070;
    case 219u: goto L_004B6084;
    case 220u: goto L_004B6090;
    case 221u: goto L_004B60F8;
    case 222u: goto L_004B611C;
    case 223u: goto L_004B6130;
    case 224u: goto L_004B61A8;
    case 225u: goto L_004B61B4;
    case 226u: goto L_004B61BC;
    case 227u: goto L_004B61C4;
    case 228u: goto L_004B61D0;
    case 229u: goto L_004B61DC;
    case 230u: goto L_004B61E4;
    case 231u: goto L_004B6228;
    case 232u: goto L_004B624C;
    case 233u: goto L_004B6260;
    case 234u: goto L_004B62D8;
    case 235u: goto L_004B62E4;
    case 236u: goto L_004B62EC;
    case 237u: goto L_004B62F4;
    case 238u: goto L_004B6300;
    case 239u: goto L_004B6320;
    case 240u: goto L_004B63A0;
    case 241u: goto L_004B63E4;
    case 242u: goto L_004B6424;
    case 243u: goto L_004B6440;
    case 244u: goto L_004B6448;
    case 245u: goto L_004B6454;
    case 246u: goto L_004B645C;
    case 247u: goto L_004B646C;
    case 248u: goto L_004B6480;
    case 249u: goto L_004B64A0;
    case 250u: goto L_004B6508;
    case 251u: goto L_004B6524;
    case 252u: goto L_004B6544;
    case 253u: goto L_004B6558;
    case 254u: goto L_004B65A4;
    case 255u: goto L_004B65C0;
    case 256u: goto L_004B65E0;
    case 257u: goto L_004B65F4;
    case 258u: goto L_004B6608;
    case 259u: goto L_004B6624;
    case 260u: goto L_004B6638;
    case 261u: goto L_004B6650;
    case 262u: goto L_004B668C;
    case 263u: goto L_004B66BC;
    case 264u: goto L_004B66D0;
    case 265u: goto L_004B6780;
    case 266u: goto L_004B678C;
    case 267u: goto L_004B6794;
    case 268u: goto L_004B67E0;
    case 269u: goto L_004B6850;
    case 270u: goto L_004B68C0;
    case 271u: goto L_004B68E0;
    case 272u: goto L_004B6980;
    case 273u: goto L_004B6990;
    case 274u: goto L_004B69E0;
    case 275u: goto L_004B69E4;
    case 276u: goto L_004B6A08;
    case 277u: goto L_004B6A28;
    case 278u: goto L_004B6A54;
    case 279u: goto L_004B6A78;
    case 280u: goto L_004B6A98;
    case 281u: goto L_004B6B40;
    case 282u: goto L_004B6B58;
    case 283u: goto L_004B6B74;
    case 284u: goto L_004B6B7C;
    case 285u: goto L_004B6BC0;
    case 286u: goto L_004B6C10;
    case 287u: goto L_004B6C30;
    case 288u: goto L_004B6C50;
    case 289u: goto L_004B6C70;
    case 290u: goto L_004B6D00;
    case 291u: goto L_004B6D18;
    case 292u: goto L_004B6D38;
    case 293u: goto L_004B6F08;
    case 294u: goto L_004B6F58;
    case 295u: goto L_004B6F90;
    case 296u: goto L_004B6F9C;
    case 297u: goto L_004B6FA4;
    case 298u: goto L_004B6FE0;
    case 299u: goto L_004B7020;
    case 300u: goto L_004B7038;
    case 301u: goto L_004B7048;
    case 302u: goto L_004B70E0;
    case 303u: goto L_004B7120;
    case 304u: goto L_004B7138;
    case 305u: goto L_004B7148;
    case 306u: goto L_004B71E0;
    case 307u: goto L_004B72B8;
    case 308u: goto L_004B74A0;
    case 309u: goto L_004B75A4;
    case 310u: goto L_004B75D0;
    case 311u: goto L_004B75D4;
    case 312u: goto L_004B7604;
    case 313u: goto L_004B762C;
    case 314u: goto L_004B7664;
    case 315u: goto L_004B7688;
    case 316u: goto L_004B76BC;
    case 317u: goto L_004B76E4;
    case 318u: goto L_004B76F8;
    case 319u: goto L_004B7740;
    case 320u: goto L_004B77B0;
    case 321u: goto L_004B7928;
    case 322u: goto L_004B7934;
    case 323u: goto L_004B7940;
    case 324u: goto L_004B794C;
    case 325u: goto L_004B795C;
    case 326u: goto L_004B7A08;
    case 327u: goto L_004B7AF8;
    case 328u: goto L_004B7C00;
    case 329u: goto L_004B7C24;
    case 330u: goto L_004B7D1C;
    case 331u: goto L_004B7D40;
    case 332u: goto L_004B7DB8;
    case 333u: goto L_004B7E54;
    case 334u: goto L_004B7EEC;
    case 335u: goto L_004B7F84;
    default: bad_entry(c, 0x004B4000u); return;
    }
L_004B4000:
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[10], 0u - 2u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[8], 0u - 3u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[7], c.r[7].w[0] - 31088u);
    c.r[12].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[29].w[0] + 12u));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 13u));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 14u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 22u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 24u), c.f[12]);
    c.budget -= 31;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004B4080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004B40F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 30800u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004B40DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 16976u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004B40DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004B40DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004B40DC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004B40F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B40F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004B40F4u) [[unlikely]] return; }
L_004B40F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B4110:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[9].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], 0u + 20u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 12;
L_004B4140:
    set32(c.r[4], ld32((c.r[7].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_004B41EC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004B4160; } }
    goto L_004B4154;
L_004B4150:
    c.budget -= 1;
L_004B4154:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[6].d[0];  if (t) { goto L_004B4160; } }
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_004B4160:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[4].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4140u | kUnwind; return; } goto L_004B4140; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_004B41F8; } }
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0] + 84u), c.r[5].w[0]);
    set32(c.r[16], c.r[3].w[0] + 84u);
    st32((c.r[3].w[0] + 164u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 68u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004B4214; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 68u));
    c.budget -= 1;
L_004B41AC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004B41D8; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] - 11680u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B41D8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00466520u; return; } if (c.pc != 0x004B41D8u) [[unlikely]] return; }
L_004B41D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B41E4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 12u, depth + 1u); else { c.pc = 0x004B4250u; return; } if (c.pc != 0x004B41E4u) [[unlikely]] return; }
L_004B41E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004B423C; } }
L_004B41EC:
    c.r[9].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4160u | kUnwind; return; } goto L_004B4160; } }
L_004B41F8:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0] + 84u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 80u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B41E4u | kUnwind; return; } goto L_004B41E4; } }
L_004B4214:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] - 11680u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4234u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0099(c, 183u, depth + 1u); else { c.pc = 0x00466BA0u; return; } if (c.pc != 0x004B4234u) [[unlikely]] return; }
L_004B4234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[18].w[0] + 68u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B41ACu | kUnwind; return; } goto L_004B41AC; } }
L_004B423C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004B4250:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 68u));
    set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[4].w[0] + 84u);  if (t) { goto L_004B42CC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004B42A0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B42A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[17].w[0])));  if (t) { goto L_004B42F4; } }
L_004B42A0:
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B42B4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x004B42B4u) [[unlikely]] return; }
L_004B42B4:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B42C4u); set32(c.r[4], c.r[4].w[0] - 11680u);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00466B00u; return; } if (c.pc != 0x004B42C4u) [[unlikely]] return; }
L_004B42C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B42F0; } }
L_004B42CC:
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B42E0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x002805A0u; return; } if (c.pc != 0x004B42E0u) [[unlikely]] return; }
L_004B42E0:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B42F0u); set32(c.r[4], c.r[4].w[0] - 11680u);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00466B00u; return; } if (c.pc != 0x004B42F0u) [[unlikely]] return; }
L_004B42F0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_004B42F4:
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4300u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B4300u) [[unlikely]] return; }
L_004B4300:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B4334; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 762u)));
    c.budget -= 1;
L_004B430C:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_004B4344; } }
L_004B4314:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_004B4318:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B43F4; } }
L_004B432C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004B4408; } }
L_004B4334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B433Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 56u, depth + 1u); else { c.pc = 0x00285120u; return; } if (c.pc != 0x004B433Cu) [[unlikely]] return; }
L_004B433C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 762u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B430Cu | kUnwind; return; } goto L_004B430C; } }
L_004B4344:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 220u));
    set32(c.r[2], 0u + 21u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004B4368; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4360u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0036(c, 157u, depth + 1u); else { c.pc = 0x002DA0E0u; return; } if (c.pc != 0x004B4360u) [[unlikely]] return; }
L_004B4360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4318u | kUnwind; return; } goto L_004B4318; } }
L_004B4368:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 17u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4378u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x003D8050u; return; } if (c.pc != 0x004B4378u) [[unlikely]] return; }
L_004B4378:
    c.r[9].d[0] = ld16((c.r[17].w[0] + 544u));
    set32(c.r[7], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[5], 0u - 17u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[17].w[0] + 544u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[17].w[0] + 544u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[17].w[0] + 544u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[17].w[0] + 544u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[17].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 524u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[17].w[0] + 544u);  if (t) { goto L_004B43E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B43D8u);  if (depth < kMaxDepth) unit_0022(c, 272u, depth + 1u); else { c.pc = 0x0028AB40u; return; } if (c.pc != 0x004B43D8u) [[unlikely]] return; }
L_004B43D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4314u | kUnwind; return; } goto L_004B4314; } }
L_004B43E0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B43ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0022(c, 360u, depth + 1u); else { c.pc = 0x0028B750u; return; } if (c.pc != 0x004B43ECu) [[unlikely]] return; }
L_004B43EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4314u | kUnwind; return; } goto L_004B4314; } }
L_004B43F4:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 80u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B432Cu | kUnwind; return; } goto L_004B432C; } }
L_004B4408:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004B4420:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[4].w[0] + 84u);
    c.budget -= 2;
L_004B4428:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_004B4458; } }
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 84u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_004B4468; } }
L_004B4458:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4428u | kUnwind; return; } goto L_004B4428; } }
L_004B4468:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004B4470:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004B4480:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B449Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x004B449Cu) [[unlikely]] return; }
L_004B449C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B451C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004B451C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B451C; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 220u));
    set32(c.r[4], 0u + 72u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_004B451C; } }
    set32(c.r[3], 0u + 63u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004B451C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_004B451C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004B451C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B44F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 4u, depth + 1u); else { c.pc = 0x004B4110u; return; } if (c.pc != 0x004B44F8u) [[unlikely]] return; }
L_004B44F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B4514; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B450Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004B450Cu) [[unlikely]] return; }
L_004B450C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B451C; } }
L_004B4514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B451Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004B451Cu) [[unlikely]] return; }
L_004B451C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B4530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4544u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 42u, depth + 1u); else { c.pc = 0x00470530u; return; } if (c.pc != 0x004B4544u) [[unlikely]] return; }
L_004B4544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B454Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004B454Cu) [[unlikely]] return; }
L_004B454C:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_004B4554:
    st32((c.r[4].w[0] + 84u), 0u);
    set32(c.r[5], c.r[5].w[0] + 5u);
    st32((c.r[4].w[0] + 88u), 0u);
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 100u), 0u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4554u | kUnwind; return; } goto L_004B4554; } }
    st32((c.r[16].w[0] + 80u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B4590:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x004B4000u < 16384u) { entry = entries_00AD[(t - 0x004B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004B45A0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046FFA0u | kUnwind; return; } [[clang::musttail]] return unit_009B(c, 380u, depth); }
L_004B45B0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x004B4000u < 16384u) { entry = entries_00AD[(t - 0x004B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004B45C0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046FFE0u | kUnwind; return; } [[clang::musttail]] return unit_009B(c, 383u, depth); }
L_004B45D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 10;
L_004B45F8:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B4630; } }
    c.budget -= 1;
L_004B4608:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B45F8u | kUnwind; return; } goto L_004B45F8; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B46C8; } }
L_004B4628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_004B46D8; } }
L_004B4630:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[17].w[0] + 164u));
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 164u), c.f[1]);
    set32(c.r[3], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_004B465C; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004B4678; } }
L_004B465C:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004B4678:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004B46B0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4608u | kUnwind; return; } goto L_004B4608; } }
    st32((c.r[16].w[0] + 84u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 80u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4608u | kUnwind; return; } goto L_004B4608; } }
L_004B46B0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B46C0u); st32((c.r[17].w[0] + 164u), 0u);  if (depth < kMaxDepth) unit_00AD(c, 12u, depth + 1u); else { c.pc = 0x004B4250u; return; } if (c.pc != 0x004B46C0u) [[unlikely]] return; }
L_004B46C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4608u | kUnwind; return; } goto L_004B4608; } }
L_004B46C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B46D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004B46D0u) [[unlikely]] return; }
L_004B46D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4628u | kUnwind; return; } goto L_004B4628; } }
L_004B46D8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004B46F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B470Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x004B470Cu) [[unlikely]] return; }
L_004B470C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B4744; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004B4744; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B472Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B472Cu) [[unlikely]] return; }
L_004B472C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4744u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B4744u) [[unlikely]] return; }
L_004B4744:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B4760:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x004B4000u < 16384u) { entry = entries_00AD[(t - 0x004B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004B4770:
    set32(c.r[10], ld32((c.r[5].w[0])));
    set32(c.r[3], 0u + 2u);
    set32(c.r[9], ld32((c.r[5].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 9u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 60u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[9].w[0]);
    st8((c.r[4].w[0] + 68u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 69u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[5], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[4].w[0] + 72u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 76u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 69u)));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 48u), c.r[3].w[0]);  c.pc = t; return; }
L_004B47D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 21u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004B4800; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B47F8u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 104u, depth + 1u); else { c.pc = 0x00345730u; return; } if (c.pc != 0x004B47F8u) [[unlikely]] return; }
L_004B47F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[16].w[0] + 21u));  if (t) { goto L_004B4810; } }
L_004B4800:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B480Cu); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 107u, depth + 1u); else { c.pc = 0x00345800u; return; } if (c.pc != 0x004B480Cu) [[unlikely]] return; }
L_004B480C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 21u));
    c.budget -= 1;
L_004B4810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4818u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004B4818u) [[unlikely]] return; }
L_004B4818:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B4830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 21u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004B4860; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4858u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 104u, depth + 1u); else { c.pc = 0x00345730u; return; } if (c.pc != 0x004B4858u) [[unlikely]] return; }
L_004B4858:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[16].w[0] + 21u));  if (t) { goto L_004B4870; } }
L_004B4860:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B486Cu); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 107u, depth + 1u); else { c.pc = 0x00345800u; return; } if (c.pc != 0x004B486Cu) [[unlikely]] return; }
L_004B486C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 21u));
    c.budget -= 1;
L_004B4870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4878u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004B4878u) [[unlikely]] return; }
L_004B4878:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B4890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 21u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004B48C4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B48BCu); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 104u, depth + 1u); else { c.pc = 0x00345730u; return; } if (c.pc != 0x004B48BCu) [[unlikely]] return; }
L_004B48BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[16].w[0] + 21u));  if (t) { goto L_004B48D4; } }
L_004B48C4:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B48D0u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 107u, depth + 1u); else { c.pc = 0x00345800u; return; } if (c.pc != 0x004B48D0u) [[unlikely]] return; }
L_004B48D0:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 21u));
    c.budget -= 1;
L_004B48D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B48DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004B48DCu) [[unlikely]] return; }
L_004B48DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B48F0:
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { set32(c.r[4], c.r[28].w[0] - 29280u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00345800u | kUnwind; return; } [[clang::musttail]] return unit_0051(c, 107u, depth); }
L_004B4900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 21u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004B492C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4924u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 104u, depth + 1u); else { c.pc = 0x00345730u; return; } if (c.pc != 0x004B4924u) [[unlikely]] return; }
L_004B4924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[16].w[0] + 21u));  if (t) { goto L_004B493C; } }
L_004B492C:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4938u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 107u, depth + 1u); else { c.pc = 0x00345800u; return; } if (c.pc != 0x004B4938u) [[unlikely]] return; }
L_004B4938:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 21u));
    c.budget -= 1;
L_004B493C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4944u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004B4944u) [[unlikely]] return; }
L_004B4944:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B4960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 21u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 21u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004B499C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4994u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 104u, depth + 1u); else { c.pc = 0x00345730u; return; } if (c.pc != 0x004B4994u) [[unlikely]] return; }
L_004B4994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[16].w[0] + 21u));  if (t) { goto L_004B49AC; } }
L_004B499C:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B49A8u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 107u, depth + 1u); else { c.pc = 0x00345800u; return; } if (c.pc != 0x004B49A8u) [[unlikely]] return; }
L_004B49A8:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 21u));
    c.budget -= 1;
L_004B49AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B49B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004B49B4u) [[unlikely]] return; }
L_004B49B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B49D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004B49FC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B49F4u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 104u, depth + 1u); else { c.pc = 0x00345730u; return; } if (c.pc != 0x004B49F4u) [[unlikely]] return; }
L_004B49F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));  if (t) { goto L_004B4A0C; } }
L_004B49FC:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4A08u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 107u, depth + 1u); else { c.pc = 0x00345800u; return; } if (c.pc != 0x004B4A08u) [[unlikely]] return; }
L_004B4A08:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    c.budget -= 1;
L_004B4A0C:
    st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 21u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4A1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004B4A1Cu) [[unlikely]] return; }
L_004B4A1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B4A30:
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 21u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[6].w[0]));  c.pc = t; return; }
L_004B4A40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004B4A94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 30480u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004B4A7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004B4A7C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004B4A94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4A94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004B4A94u) [[unlikely]] return; }
L_004B4A94:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B4AB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    set32(c.r[7], 0u - 2u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], 0u - 3u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] - 30480u);
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
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_004B4B20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004B4B74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 30192u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004B4B5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004B4B5C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004B4B74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4B74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004B4B74u) [[unlikely]] return; }
L_004B4B74:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B4B90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 32u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004B4BB8; } }
L_004B4BB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004B4BD4; } }
L_004B4BB8:
    c.r[5].d[0] = ld8((c.r[6].w[0] + 20u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4BCCu); set32(c.r[4], c.r[4].w[0] + 8704u);  if (depth < kMaxDepth) unit_0044(c, 468u, depth + 1u); else { c.pc = 0x00313EF0u; return; } if (c.pc != 0x004B4BCCu) [[unlikely]] return; }
L_004B4BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4BB0u | kUnwind; return; } goto L_004B4BB0; } }
L_004B4BD4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004B4BE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 32u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004B4C08; } }
L_004B4C00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004B4C24; } }
L_004B4C08:
    c.r[5].d[0] = ld8((c.r[6].w[0] + 20u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4C1Cu); set32(c.r[4], c.r[4].w[0] + 8704u);  if (depth < kMaxDepth) unit_0044(c, 468u, depth + 1u); else { c.pc = 0x00313EF0u; return; } if (c.pc != 0x004B4C1Cu) [[unlikely]] return; }
L_004B4C1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4C00u | kUnwind; return; } goto L_004B4C00; } }
L_004B4C24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004B4C30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 32u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004B4C64; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4C5Cu); set32(c.r[4], c.r[4].w[0] + 8704u);  if (depth < kMaxDepth) unit_0044(c, 468u, depth + 1u); else { c.pc = 0x00313EF0u; return; } if (c.pc != 0x004B4C5Cu) [[unlikely]] return; }
L_004B4C5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 32u));  if (t) { goto L_004B4C78; } }
L_004B4C64:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 20u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4C74u); set32(c.r[4], c.r[4].w[0] + 8704u);  if (depth < kMaxDepth) unit_0044(c, 465u, depth + 1u); else { c.pc = 0x00313EB0u; return; } if (c.pc != 0x004B4C74u) [[unlikely]] return; }
L_004B4C74:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 32u));
    c.budget -= 1;
L_004B4C78:
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[16].w[0] + 32u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B4CA0:
    st8((c.r[4].w[0] + 32u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[3].w[0]);  c.pc = t; return; }
L_004B4CB0:
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 28u), c.r[6].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.r[6].w[0]);  c.pc = t; return; }
L_004B4CC0:
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004B4CE0; } }
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B4CE0; } }
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 20u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_004B4CE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004B4CF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4D14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x004B4D14u) [[unlikely]] return; }
L_004B4D14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B4DB8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004B4DB8; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_004B4D28:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 38u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 8704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4D3Cu); set32(c.r[6], 0u + 85u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x00314110u; return; } if (c.pc != 0x004B4D3Cu) [[unlikely]] return; }
L_004B4D3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] + 8704u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4D54u); set32(c.r[6], 0u + 85u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x00314110u; return; } if (c.pc != 0x004B4D54u) [[unlikely]] return; }
L_004B4D54:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 8704u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4D6Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x00314160u; return; } if (c.pc != 0x004B4D6Cu) [[unlikely]] return; }
L_004B4D6C:
    c.r[7].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[16].w[0] + c.r[19].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004B4D90; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4D8Cu); set32(c.r[4], c.r[4].w[0] + 8704u);  if (depth < kMaxDepth) unit_0045(c, 3u, depth + 1u); else { c.pc = 0x003140F0u; return; } if (c.pc != 0x004B4D8Cu) [[unlikely]] return; }
L_004B4D8C:
    c.r[7].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_004B4D90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4DA4u); set32(c.r[4], c.r[4].w[0] + 8704u);  if (depth < kMaxDepth) unit_0045(c, 2u, depth + 1u); else { c.pc = 0x00314050u; return; } if (c.pc != 0x004B4DA4u) [[unlikely]] return; }
L_004B4DA4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(18ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4D28u | kUnwind; return; } goto L_004B4D28; } }
    c.budget -= 1;
L_004B4DB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004B4DE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004B4E34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 29904u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004B4E1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004B4E1C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004B4E34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4E34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004B4E34u) [[unlikely]] return; }
L_004B4E34:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B4E50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    set32(c.r[8], 0u - 2u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u - 3u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] - 29904u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st8((c.r[4].w[0] + 38u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 25;
L_004B4EB4:
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    st8((c.r[5].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] + 3u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    st8((c.r[5].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[2].w[0] + 4u);
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] + 5u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 6u);
    st8((c.r[5].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[2].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 28;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4EB4u | kUnwind; return; } goto L_004B4EB4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004B4F30:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4F50u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x004B4F50u) [[unlikely]] return; }
L_004B4F50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B503C; } }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[19], c.r[29].w[0] + 100u);
    set32(c.r[18], c.r[29].w[0] + 104u);
    set32(c.r[17], c.r[29].w[0] + 108u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[17].w[0]), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004B4FFC; } }
L_004B4F90:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.f[12] = ld32((c.r[16].w[0] + 52u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 56u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4FA8u); set32(c.r[4], c.r[2].w[0] + 416u);  if (depth < kMaxDepth) unit_00A9(c, 27u, depth + 1u); else { c.pc = 0x004A4780u; return; } if (c.pc != 0x004B4FA8u) [[unlikely]] return; }
L_004B4FA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] - 3744u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4FBCu); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_006F(c, 55u, depth + 1u); else { c.pc = 0x003BD150u; return; } if (c.pc != 0x004B4FBCu) [[unlikely]] return; }
L_004B4FBC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 56u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[7], c.r[29].w[0] + 80u);
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.f[12] = ld32((c.r[16].w[0] + 52u));
    set32(c.r[6], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B4FF4u); c.r[8].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0029(c, 190u, depth + 1u); else { c.pc = 0x002A65C0u; return; } if (c.pc != 0x004B4FF4u) [[unlikely]] return; }
L_004B4FF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_004B5040; } }
L_004B4FFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5008u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004B5008u) [[unlikely]] return; }
L_004B5008:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5018u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B5018u) [[unlikely]] return; }
L_004B5018:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B4F90u | kUnwind; return; } goto L_004B4F90; } }
L_004B503C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004B5040:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004B5060:
    ld128((c.r[5].w[0]) & ~15u, c.r[9]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    set32(c.r[8], ld32((c.r[5].w[0] + 16u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 32u)));
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[9]);
    st32((c.r[4].w[0] + 48u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 60u), c.r[6].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_004B50A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004B50F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 29616u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004B50DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004B50DC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004B50F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B50F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004B50F4u) [[unlikely]] return; }
L_004B50F4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B5110:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    set32(c.r[7], 0u - 2u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], 0u - 3u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] - 29616u);
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
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_004B5180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5198u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x004B5198u) [[unlikely]] return; }
L_004B5198:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B5280; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B51B0u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004B51B0u) [[unlikely]] return; }
L_004B51B0:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B51C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B51C0u) [[unlikely]] return; }
L_004B51C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B5280; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B5280; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 40u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 762u)));  if (t) { goto L_004B5234; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.r[1].d[0] = c.r[16].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004B527C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B527C; } }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5218u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004B5218u) [[unlikely]] return; }
L_004B5218:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 48u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B527C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B522Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004B522Cu) [[unlikely]] return; }
L_004B522C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.r[16].w[0]);  if (t) { goto L_004B5280; } }
L_004B5234:
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004B527C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004B527C; } }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5268u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004B5268u) [[unlikely]] return; }
L_004B5268:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 48u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B527C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B527Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004B527Cu) [[unlikely]] return; }
L_004B527C:
    st32((c.r[17].w[0] + 36u), c.r[16].w[0]);
    c.budget -= 1;
L_004B5280:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B52A0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAB50u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 206u, depth); }
L_004B52B0:
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 44u), c.r[7].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(c.r[8].w[0]));  c.pc = t; return; }
L_004B52D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004B5334; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 29328u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004B531C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004B531C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004B531C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004B5334; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5334u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004B5334u) [[unlikely]] return; }
L_004B5334:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B5350:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
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
    set32(c.r[3], c.r[3].w[0] - 29328u);
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
    c.budget -= 31;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_004B53D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004B5424; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 29024u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004B540C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004B540C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004B5424; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5424u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004B5424u) [[unlikely]] return; }
L_004B5424:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B5440:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  c.pc = t; return; }
L_004B5450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004B5468; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004B5474; } }
L_004B5468:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5474u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004B5474u) [[unlikely]] return; }
L_004B5474:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004B5480:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004B5490:
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_004B54A0:
    c.f[3] = ld32((c.r[7].w[0]));
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    st32((c.r[4].w[0] + 32u), c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    st32((c.r[4].w[0] + 60u), c.f[12]);
    st32((c.r[4].w[0] + 56u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[6].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 52u), c.r[5].w[0]);  c.pc = t; return; }
L_004B54E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004B5554; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 28720u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004B553C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 16976u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004B553C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004B553C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004B553C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004B5554; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5554u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004B5554u) [[unlikely]] return; }
L_004B5554:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B5570:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004B5580:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004B5590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B55ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x004B55ACu) [[unlikely]] return; }
L_004B55AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B5720; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B5720; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 60u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B5664; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B55FC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B55F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004B56A4; } }
L_004B55F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_004B56A4; } }
L_004B55FC:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 220u));
    set32(c.r[3], 0u + 75u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B5650; } }
    set32(c.r[3], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B5650; } }
    set32(c.r[3], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B5650; } }
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B5650; } }
    set32(c.r[3], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B5650; } }
    set32(c.r[3], 0u + 23u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B5650; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004B565C; } }
L_004B5650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004B56A4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004B565C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B56A4; } }
L_004B5664:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5674u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B5674u) [[unlikely]] return; }
L_004B5674:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B5698; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5694u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B5694u) [[unlikely]] return; }
L_004B5694:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_004B5698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_004B56A4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004B56A4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B5720; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B56F8; } }
L_004B56B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B5704; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 1;
L_004B56D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004B5720; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B56F0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004B56F0u) [[unlikely]] return; }
L_004B56F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004B5724; } }
L_004B56F8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B56B8u | kUnwind; return; } goto L_004B56B8; } }
L_004B5704:
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5718u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004B5718u) [[unlikely]] return; }
L_004B5718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B56D0u | kUnwind; return; } goto L_004B56D0; } }
L_004B5720:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004B5724:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B5740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B575Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x004B575Cu) [[unlikely]] return; }
L_004B575C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B58BC; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 60u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B5800; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B5798; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B5790; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004B5840; } }
L_004B5790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_004B5840; } }
L_004B5798:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 220u));
    set32(c.r[3], 0u + 75u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B57EC; } }
    set32(c.r[3], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B57EC; } }
    set32(c.r[3], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B57EC; } }
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B57EC; } }
    set32(c.r[3], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B57EC; } }
    set32(c.r[3], 0u + 23u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B57EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004B57F8; } }
L_004B57EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004B5840; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004B57F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B5840; } }
L_004B5800:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5810u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B5810u) [[unlikely]] return; }
L_004B5810:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B5834; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5830u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B5830u) [[unlikely]] return; }
L_004B5830:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_004B5834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_004B5840; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004B5840:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B58BC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B5894; } }
L_004B5854:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B58A0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 1;
L_004B586C:
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004B58BC; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B588Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004B588Cu) [[unlikely]] return; }
L_004B588C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004B58C0; } }
L_004B5894:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B5854u | kUnwind; return; } goto L_004B5854; } }
L_004B58A0:
    set32(c.r[5], ld32((c.r[17].w[0] + 80u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B58B4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004B58B4u) [[unlikely]] return; }
L_004B58B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B586Cu | kUnwind; return; } goto L_004B586C; } }
L_004B58BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004B58C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B58D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B58F4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x004B58F4u) [[unlikely]] return; }
L_004B58F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B5A94; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 60u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B5998; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B5930; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B5928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004B59D8; } }
L_004B5928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_004B59D8; } }
L_004B5930:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 220u));
    set32(c.r[3], 0u + 75u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B5984; } }
    set32(c.r[3], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B5984; } }
    set32(c.r[3], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B5984; } }
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B5984; } }
    set32(c.r[3], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B5984; } }
    set32(c.r[3], 0u + 23u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B5984; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004B5990; } }
L_004B5984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004B59D8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004B5990:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B59D8; } }
L_004B5998:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B59A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B59A8u) [[unlikely]] return; }
L_004B59A8:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B59CC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 188u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B59C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B59C8u) [[unlikely]] return; }
L_004B59C8:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_004B59CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_004B59D8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004B59D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B5A94; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004B5A34; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B5A6C; } }
L_004B59F4:
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B5A78; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    c.budget -= 1;
L_004B5A0C:
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004B5A94; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 68u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5A2Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004B5A2Cu) [[unlikely]] return; }
L_004B5A2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004B5A98; } }
L_004B5A34:
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004B5A94; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 76u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5A64u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004B5A64u) [[unlikely]] return; }
L_004B5A64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B5A2Cu | kUnwind; return; } goto L_004B5A2C; } }
L_004B5A6C:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 84u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B59F4u | kUnwind; return; } goto L_004B59F4; } }
L_004B5A78:
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5A8Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004B5A8Cu) [[unlikely]] return; }
L_004B5A8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B5A0Cu | kUnwind; return; } goto L_004B5A0C; } }
L_004B5A94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004B5A98:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004B5AB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 84u), 0u);  c.pc = t; return; }
L_004B5AC0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046FFA0u | kUnwind; return; } [[clang::musttail]] return unit_009B(c, 380u, depth); }
L_004B5AD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 84u), 0u);  c.pc = t; return; }
L_004B5AE0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0046FFE0u | kUnwind; return; } [[clang::musttail]] return unit_009B(c, 383u, depth); }
L_004B5AF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 84u), 0u);  c.pc = t; return; }
L_004B5B00:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00470530u | kUnwind; return; } [[clang::musttail]] return unit_009C(c, 42u, depth); }
L_004B5B10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004B5B20:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[9], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[4].w[0] + 64u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 72u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 76u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 84u), 0u);  c.pc = t; return; }
L_004B5B60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_004B5BC0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_004B5B8C:
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_004B5BB0; } }
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0])));  if (t) { goto L_004B5BC4; } }
L_004B5BB0:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B5B8Cu | kUnwind; return; } goto L_004B5B8C; } }
L_004B5BC0:
    set32(c.r[4], 0u - 1u);
    c.budget -= 1;
L_004B5BC4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_004B5BD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004B5C80; } }
L_004B5BD8:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5BFCu); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_007D(c, 410u, depth + 1u); else { c.pc = 0x003F7A70u; return; } if (c.pc != 0x004B5BFCu) [[unlikely]] return; }
L_004B5BFC:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004B5C78; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_004B5C10:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_004B5C64; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_004B5C78; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { goto L_004B5C78; } }
L_004B5C64:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B5C10u | kUnwind; return; } goto L_004B5C10; } }
    c.budget -= 1;
L_004B5C78:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_004B5C80:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B5C90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004B5CA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B5CDC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5CD8u); set32(c.r[5], c.r[5].w[0] + 24016u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004B5CD8u) [[unlikely]] return; }
L_004B5CD8:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_004B5CDC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_004B5D60; } }
L_004B5CE4:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], ld32((c.r[16].w[0])));  if (t) { goto L_004B5CFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5CF8u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004B5CF8u) [[unlikely]] return; }
L_004B5CF8:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_004B5CFC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_004B5D9C; } }
L_004B5D04:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004B5DAC; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004B5D1C:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[7].w[0]);
    st32((c.r[3].w[0] + 12u), 0u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 20u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B5D1Cu | kUnwind; return; } goto L_004B5D1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004B5DB0; } }
L_004B5D60:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5D74u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004B5D74u) [[unlikely]] return; }
L_004B5D74:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 24000u);
    set32(c.r[6], c.r[6].w[0] + 24016u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5D94u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004B5D94u) [[unlikely]] return; }
L_004B5D94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B5CE4u | kUnwind; return; } goto L_004B5CE4; } }
L_004B5D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5DA4u); set32(c.r[4], c.r[17].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004B5DA4u) [[unlikely]] return; }
L_004B5DA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B5D04u | kUnwind; return; } goto L_004B5D04; } }
L_004B5DAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004B5DB0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B5DC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004B5DD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004B5E00; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004B5E00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5E00u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004B5E00u) [[unlikely]] return; }
L_004B5E00:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B5E20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004B5E54; } }
L_004B5E4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), 0u);  if (t) { goto L_004B5E90; } }
L_004B5E54:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004B5E58:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5E70u); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x004B5E70u) [[unlikely]] return; }
L_004B5E70:
    st32((c.r[19].w[0] + 12u), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B5E58u | kUnwind; return; } goto L_004B5E58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B5E4Cu | kUnwind; return; } goto L_004B5E4C; } }
L_004B5E90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004B5EB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004B5F1C; } }
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 1;
L_004B5EE0:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B5EFC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5EF8u); set32(c.r[5], c.r[5].w[0] + 24016u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004B5EF8u) [[unlikely]] return; }
L_004B5EF8:
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 1;
L_004B5EFC:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B5F58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5F10u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004B5F10u) [[unlikely]] return; }
L_004B5F10:
    st32((c.r[18].w[0] + 12u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_004B5F5C; } }
L_004B5F1C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004B5F20:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5F38u); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x004B5F38u) [[unlikely]] return; }
L_004B5F38:
    st32((c.r[19].w[0] + 12u), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B5F20u | kUnwind; return; } goto L_004B5F20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B5EE0u | kUnwind; return; } goto L_004B5EE0; } }
L_004B5F58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004B5F5C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004B5F80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5FA4u); st32((c.r[4].w[0] + 172u), 0u);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004B5FA4u) [[unlikely]] return; }
L_004B5FA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B5FB4; } }
L_004B5FAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004B5FC4; } }
L_004B5FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5FBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004B5FBCu) [[unlikely]] return; }
L_004B5FBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B5FACu | kUnwind; return; } goto L_004B5FAC; } }
L_004B5FC4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B5FD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B5FF4u); st32((c.r[4].w[0] + 172u), 0u);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004B5FF4u) [[unlikely]] return; }
L_004B5FF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B6004; } }
L_004B5FFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004B6014; } }
L_004B6004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B600Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004B600Cu) [[unlikely]] return; }
L_004B600C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B5FFCu | kUnwind; return; } goto L_004B5FFC; } }
L_004B6014:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B6020:
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 170u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[28].w[0] - 31052u));
    c.budget -= 5;
    { st32((c.r[4].w[0] + 172u), c.f[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAB50u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 206u, depth); }
L_004B6040:
    set32(c.r[5], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 3;
    { set32(c.r[4], c.r[28].w[0] - 29280u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00345800u | kUnwind; return; } [[clang::musttail]] return unit_0051(c, 107u, depth); }
L_004B6050:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 168u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B6078; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6070u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 107u, depth + 1u); else { c.pc = 0x00345800u; return; } if (c.pc != 0x004B6070u) [[unlikely]] return; }
L_004B6070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004B6088; } }
L_004B6078:
    set32(c.r[5], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6084u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 104u, depth + 1u); else { c.pc = 0x00345730u; return; } if (c.pc != 0x004B6084u) [[unlikely]] return; }
L_004B6084:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004B6088:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004B6090:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 169u));
    c.f[20] = ld32((c.r[29].w[0] + 76u));
    c.f[21] = ld32((c.r[29].w[0] + 92u));
    c.f[23] = ld32((c.r[29].w[0] + 124u));
    c.f[22] = ld32((c.r[29].w[0] + 140u));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004B6374; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B6344; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 168u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B6344; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B60F8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004B60F8u) [[unlikely]] return; }
L_004B60F8:
    set32(c.r[4], ld32((c.r[17].w[0] + 160u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B611Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 29u, depth + 1u); else { c.pc = 0x00344540u; return; } if (c.pc != 0x004B611Cu) [[unlikely]] return; }
L_004B611C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6130u); st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0075(c, 188u, depth + 1u); else { c.pc = 0x003D70E0u; return; } if (c.pc != 0x004B6130u) [[unlikely]] return; }
L_004B6130:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B6328; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 176u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B6174; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    st32((c.r[29].w[0] + 152u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 156u), c.f[22]);  if (t) { goto L_004B6190; } }
L_004B6174:
    c.f[2] = ld32((c.r[16].w[0] + 164u));
    c.f[1] = ld32((c.r[16].w[0] + 168u));
    c.f[0] = ld32((c.r[16].w[0] + 160u));
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    st32((c.r[29].w[0] + 152u), c.f[1]);
    st32((c.r[29].w[0] + 156u), c.f[23]);
    c.budget -= 7;
L_004B6190:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 144u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B61A8u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B61A8u) [[unlikely]] return; }
L_004B61A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004B632C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 1;
L_004B61B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B61BCu); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 107u, depth + 1u); else { c.pc = 0x00345800u; return; } if (c.pc != 0x004B61BCu) [[unlikely]] return; }
L_004B61BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 176u)));  if (t) { goto L_004B6348; } }
L_004B61C4:
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B61D0u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 104u, depth + 1u); else { c.pc = 0x00345730u; return; } if (c.pc != 0x004B61D0u) [[unlikely]] return; }
L_004B61D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B6344; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 168u));
    c.budget -= 1;
L_004B61DC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B61F0; } }
L_004B61E4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 170u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B6300; } }
L_004B61F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[17].w[0] + 172u));
    c.f[0] = ld32((c.r[3].w[0] - 20412u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 172u), c.f[1]);
    c.f[0] = ld32((c.r[28].w[0] - 31052u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B6300; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 76u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6228u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004B6228u) [[unlikely]] return; }
L_004B6228:
    set32(c.r[4], ld32((c.r[17].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B624Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 29u, depth + 1u); else { c.pc = 0x00344540u; return; } if (c.pc != 0x004B624Cu) [[unlikely]] return; }
L_004B624C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6260u); st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0075(c, 188u, depth + 1u); else { c.pc = 0x003D70E0u; return; } if (c.pc != 0x004B6260u) [[unlikely]] return; }
L_004B6260:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B6358; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 176u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B62A4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[1] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 108u), c.f[21]);  if (t) { goto L_004B62C0; } }
L_004B62A4:
    c.f[2] = ld32((c.r[16].w[0] + 164u));
    c.f[1] = ld32((c.r[16].w[0] + 168u));
    c.f[0] = ld32((c.r[16].w[0] + 160u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[20]);
    c.budget -= 7;
L_004B62C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B62D8u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B62D8u) [[unlikely]] return; }
L_004B62D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004B635C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 1;
L_004B62E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B62ECu); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 107u, depth + 1u); else { c.pc = 0x00345800u; return; } if (c.pc != 0x004B62ECu) [[unlikely]] return; }
L_004B62EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 176u)));  if (t) { goto L_004B6304; } }
L_004B62F4:
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6300u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 104u, depth + 1u); else { c.pc = 0x00345730u; return; } if (c.pc != 0x004B6300u) [[unlikely]] return; }
L_004B6300:
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 1;
L_004B6304:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B6374; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 168u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B6374; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6320u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004B6320u) [[unlikely]] return; }
L_004B6320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004B6378; } }
L_004B6328:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004B632C:
    st8((c.r[17].w[0] + 169u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 168u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B61C4u | kUnwind; return; } goto L_004B61C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 84u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B61B4u | kUnwind; return; } goto L_004B61B4; } }
L_004B6344:
    set32(c.r[3], ld32((c.r[17].w[0] + 176u)));
    c.budget -= 1;
L_004B6348:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B61E4u | kUnwind; return; } goto L_004B61E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 168u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B61DCu | kUnwind; return; } goto L_004B61DC; } }
L_004B6358:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004B635C:
    st8((c.r[17].w[0] + 169u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 168u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B62F4u | kUnwind; return; } goto L_004B62F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 84u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B62E4u | kUnwind; return; } goto L_004B62E4; } }
L_004B6374:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004B6378:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004B63A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 168u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 169u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 170u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 176u), 0u);
    set32(c.r[4], ld32((c.r[4].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B63E4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0051(c, 29u, depth + 1u); else { c.pc = 0x00344540u; return; } if (c.pc != 0x004B63E4u) [[unlikely]] return; }
L_004B63E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 97u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B6474; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6424u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B6424u) [[unlikely]] return; }
L_004B6424:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B6474; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6440u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B6440u) [[unlikely]] return; }
L_004B6440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004B6478; } }
L_004B6448:
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6454u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B6454u) [[unlikely]] return; }
L_004B6454:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B646C; } }
L_004B645C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B646Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B646Cu) [[unlikely]] return; }
L_004B646C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004B6490; } }
L_004B6474:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004B6478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6480u);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004B6480u) [[unlikely]] return; }
L_004B6480:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B645Cu | kUnwind; return; } goto L_004B645C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6448u | kUnwind; return; } goto L_004B6448; } }
L_004B6490:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B64A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 169u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 168u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004B6560; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[16].w[0] + 168u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 97u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B6524; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6508u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B6508u) [[unlikely]] return; }
L_004B6508:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B6524; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6524u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B6524u) [[unlikely]] return; }
L_004B6524:
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6544u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0051(c, 29u, depth + 1u); else { c.pc = 0x00344540u; return; } if (c.pc != 0x004B6544u) [[unlikely]] return; }
L_004B6544:
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6558u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004B6558u) [[unlikely]] return; }
L_004B6558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 170u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004B660C; } }
L_004B6560:
    st8((c.r[16].w[0] + 168u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 97u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B65C0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B65A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B65A4u) [[unlikely]] return; }
L_004B65A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B65C0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004B65C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004B65C0u) [[unlikely]] return; }
L_004B65C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 160u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 23936u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B65E0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0051(c, 29u, depth + 1u); else { c.pc = 0x00344540u; return; } if (c.pc != 0x004B65E0u) [[unlikely]] return; }
L_004B65E0:
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B65F4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004B65F4u) [[unlikely]] return; }
L_004B65F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B6608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6608u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004B6608u) [[unlikely]] return; }
L_004B6608:
    st8((c.r[16].w[0] + 170u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004B660C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 168u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B662C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6624u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 107u, depth + 1u); else { c.pc = 0x00345800u; return; } if (c.pc != 0x004B6624u) [[unlikely]] return; }
L_004B6624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004B663C; } }
L_004B662C:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6638u); set32(c.r[4], c.r[28].w[0] - 29280u);  if (depth < kMaxDepth) unit_0051(c, 104u, depth + 1u); else { c.pc = 0x00345730u; return; } if (c.pc != 0x004B6638u) [[unlikely]] return; }
L_004B6638:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004B663C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004B6650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[9], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004B6670; } }
    set32(c.r[8], c.r[8].w[0] + 32u);
    c.budget -= 1;
L_004B6670:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], c.r[4].w[0] + 23936u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B668Cu); set32(c.r[10], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_0050(c, 228u, depth + 1u); else { c.pc = 0x00343BA0u; return; } if (c.pc != 0x004B668Cu) [[unlikely]] return; }
L_004B668C:
    st32((c.r[16].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[9], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004B66A0; } }
    set32(c.r[8], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_004B66A0:
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[4], c.r[4].w[0] + 23936u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B66BCu); set32(c.r[10], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_0050(c, 228u, depth + 1u); else { c.pc = 0x00343BA0u; return; } if (c.pc != 0x004B66BCu) [[unlikely]] return; }
L_004B66BC:
    st32((c.r[16].w[0] + 164u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B66D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[12], ld32((c.r[5].w[0] + 16u)));
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    vu::sub4<1>(c.vu0, 15u, 1u, 1u, 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[2] = ld32((c.r[5].w[0]));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[11], ld32((c.r[5].w[0] + 20u)));
    c.f[20] = ld32((c.r[5].w[0] + 12u));
    set32(c.r[10], ld32((c.r[5].w[0] + 24u)));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    set32(c.r[9], ld32((c.r[5].w[0] + 28u)));
    vu::sub4<1>(c.vu0, 15u, 2u, 2u, 2u);
    set32(c.r[8], ld32((c.r[5].w[0] + 32u)));
    st32((c.r[4].w[0] + 36u), c.f[2]);
    set32(c.r[7], ld32((c.r[5].w[0] + 36u)));
    st32((c.r[4].w[0] + 40u), c.f[1]);
    set32(c.r[6], ld32((c.r[5].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 44u)));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 48u)));
    vu::mr32_4(c.vu0, 15u, 3u, 0u);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 48u), c.f[20]);
    st32((c.r[4].w[0] + 52u), c.r[12].w[0]);
    c.f[12] = c.f[20];
    st32((c.r[4].w[0] + 56u), c.r[11].w[0]);
    vu::addbc4<1>(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    st32((c.r[4].w[0] + 60u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 72u), c.r[7].w[0]);
    vu::addbc4<1>(c.vu0, 4u, 2u, 0u, c.vu0.vf[0].w[3]);
    st32((c.r[4].w[0] + 76u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[2].w[0]);
    st128((c.r[17].w[0] + 144u) & ~15u, c.vu0.vf[0]);
    st128((c.r[17].w[0] + 128u) & ~15u, c.vu0.vf[3]);
    st128((c.r[17].w[0] + 96u) & ~15u, c.vu0.vf[1]);
    c.budget -= 44;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6780u); st128((c.r[17].w[0] + 112u) & ~15u, c.vu0.vf[2]);  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004B6780u) [[unlikely]] return; }
L_004B6780:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B678Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004B678Cu) [[unlikely]] return; }
L_004B678C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[17].w[0] + 96u);
    c.budget -= 2;
L_004B6794:
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[2] = ld32((c.r[4].w[0]));
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.facc = fp::ee::mul(c.fcr31, c.f[20], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    st32((c.r[4].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[20]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6794u | kUnwind; return; } goto L_004B6794; } }
    c.f[5] = ld32((c.r[16].w[0]));
    set32(c.r[4], c.r[17].w[0] + 96u);
    c.f[3] = ld32((c.r[16].w[0] + 4u));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[4] = 0u;
    c.budget -= 6;
L_004B67E0:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.r[3].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B67E0u | kUnwind; return; } goto L_004B67E0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004B6850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004B68C0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 28400u);
    set32(c.r[2], c.r[2].w[0] - 28100u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_004B68A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004B68A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004B68A8:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004B68C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B68C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004B68C0u) [[unlikely]] return; }
L_004B68C0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004B68E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[10], 0u - 2u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[8], 0u - 3u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[12].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[7], c.r[7].w[0] - 12672u);
    set32(c.r[6], c.r[6].w[0] + 24504u);
    set32(c.r[5], c.r[5].w[0] - 28400u);
    set32(c.r[3], c.r[3].w[0] - 28100u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 38;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 176u), 0u);  c.pc = t; return; }
L_004B6980:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004B64A0u | kUnwind; return; } goto L_004B64A0; }
L_004B6990:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    c.f[20] = ld32((c.r[29].w[0] + 76u));
    c.f[21] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[5].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & 6ull;
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 8u);  if (t) { goto L_004B69D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));  if (t) { goto L_004B69D8; } }
L_004B69D4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004B69D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B6A34; } }
L_004B69E0:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 316u));
    c.budget -= 1;
L_004B69E4:
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 316u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 312u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B6DC8; } }
L_004B6A08:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 291u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B6F20; } }
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004B6F20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6A28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 157u, depth + 1u); else { c.pc = 0x003BA8C0u; return; } if (c.pc != 0x004B6A28u) [[unlikely]] return; }
L_004B6A28:
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004B6FBC; } }
L_004B6A34:
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 222u)));
    set32(c.r[5], c.r[4].w[0] + 8u);
    st8((c.r[4].w[0] + 220u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 216u), 0u);
    set32(c.r[3], 0u + 10u);
    c.budget -= 8;
L_004B6A54:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004B6AC8; } }
    c.budget -= 1;
L_004B6A78:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_004B6D48; } }
    c.budget -= 1;
L_004B6A98:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_004B6D50; } }
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6A78u | kUnwind; return; } goto L_004B6A78; } }
    c.budget -= 1;
L_004B6AC8:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[11], ld32((c.r[5].w[0] + 208u)));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[10], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[10].w[0] + 16u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[11].d[0];
    c.budget -= 10;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[8], c.r[10].w[0] + 16u);  if (t) { goto L_004B6D58; } }
    set32(c.r[6], ld32((c.r[8].w[0])));
    c.r[6].d[0] = c.r[6].d[0] | c.r[11].d[0];
    st32((c.r[8].w[0]), c.r[6].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 204u)));
    set32(c.r[8], c.r[10].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 12u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[8].d[0];
    c.budget -= 13;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_004B6B58; } }
    set32(c.r[6], c.r[10].w[0] + 1u);
    st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_004B6D78; } }
    c.budget -= 1;
L_004B6B40:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_004B6B58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004B6B74; } }
L_004B6B58:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6A54u | kUnwind; return; } goto L_004B6A54; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_004B6B74:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B69E0u | kUnwind; return; } goto L_004B69E0; } }
L_004B6B7C:
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B6BC8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B6BA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B6BE8; } }
L_004B6BA0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B6BE8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6BC0u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_006E(c, 109u, depth + 1u); else { c.pc = 0x003B9C10u; return; } if (c.pc != 0x004B6BC0u) [[unlikely]] return; }
L_004B6BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B6BE8; } }
L_004B6BC8:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 4u));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004B6BE8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    st32((c.r[16].w[0] + 304u), c.f[0]);
    c.budget -= 4;
L_004B6BE8:
    set32(c.r[6], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], 0u + 10u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 220u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0] + 220u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 8u);  if (t) { goto L_004B6D80; } }
    c.budget -= 1;
L_004B6C10:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004B6D88; } }
    set32(c.r[3], 0u + 10u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
L_004B6C30:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[11], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[11].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004B6CA0; } }
L_004B6C50:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_004B6D90; } }
    c.budget -= 1;
L_004B6C70:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_004B6D98; } }
    set32(c.r[6], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[11], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[11].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6C50u | kUnwind; return; } goto L_004B6C50; } }
    c.budget -= 1;
L_004B6CA0:
    set32(c.r[10], ld32((c.r[5].w[0] + 208u)));
    set32(c.r[6], ld32((c.r[11].w[0] + 16u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[10].d[0];
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[8], c.r[11].w[0] + 16u);  if (t) { goto L_004B6DA0; } }
    set32(c.r[6], ld32((c.r[8].w[0])));
    c.r[6].d[0] = c.r[6].d[0] | c.r[10].d[0];
    st32((c.r[8].w[0]), c.r[6].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 204u)));
    set32(c.r[8], c.r[10].w[0] << 2);
    set32(c.r[8], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[8], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[8].w[0] + 12u)));
    c.r[6].d[0] = c.r[6].d[0] & c.r[8].d[0];
    c.budget -= 13;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_004B6D18; } }
    set32(c.r[6], c.r[10].w[0] + 1u);
    st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_004B6DC0; } }
L_004B6D00:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_004B6D18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004B6D38; } }
L_004B6D18:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6C30u | kUnwind; return; } goto L_004B6C30; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 212u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_004B6D38:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6B7Cu | kUnwind; return; } goto L_004B6B7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[16].w[0] + 316u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B69E4u | kUnwind; return; } goto L_004B69E4; } }
L_004B6D48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6A98u | kUnwind; return; } goto L_004B6A98; } }
L_004B6D50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6B74u | kUnwind; return; } goto L_004B6B74; } }
L_004B6D58:
    st8((c.r[10].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[10].w[0] + 12u), c.r[7].w[0]);
    st8((c.r[10].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6B58u | kUnwind; return; } goto L_004B6B58; } }
L_004B6D78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6B40u | kUnwind; return; } goto L_004B6B40; } }
L_004B6D80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6C10u | kUnwind; return; } goto L_004B6C10; } }
L_004B6D88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6D38u | kUnwind; return; } goto L_004B6D38; } }
L_004B6D90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6C70u | kUnwind; return; } goto L_004B6C70; } }
L_004B6D98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6D38u | kUnwind; return; } goto L_004B6D38; } }
L_004B6DA0:
    st8((c.r[11].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[11].w[0] + 12u), c.r[7].w[0]);
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    st8((c.r[11].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6D18u | kUnwind; return; } goto L_004B6D18; } }
L_004B6DC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6D00u | kUnwind; return; } goto L_004B6D00; } }
L_004B6DC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[6] = ld32((c.r[3].w[0] + 26512u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[8] = ld32((c.r[28].w[0] - 31048u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[2] = 0u;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[5] = ld32((c.r[3].w[0] + 26520u));
    c.f[7] = fp::ee::sub(c.fcr31, c.f[6], c.f[8]);
    st32((c.r[6].w[0] + 26592u), c.f[7]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[4] = ld32((c.r[3].w[0] + 26496u));
    c.f[6] = fp::ee::sub(c.fcr31, c.f[5], c.f[8]);
    st32((c.r[4].w[0] + 26600u), c.f[6]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[3] = ld32((c.r[3].w[0] + 26504u));
    c.f[5] = fp::ee::add(c.fcr31, c.f[4], c.f[8]);
    st32((c.r[9].w[0] + 26576u), c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[3].w[0] + 26500u));
    c.f[4] = fp::ee::add(c.fcr31, c.f[3], c.f[8]);
    st32((c.r[7].w[0] + 26584u), c.f[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] + 26588u), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[3].w[0] + 26516u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    st32((c.r[8].w[0] + 26580u), c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] + 26604u), c.f[21]);
    st32((c.r[5].w[0] + 26596u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.f[2] = c.r[10].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[5], c.f[2]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 45;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[4].w[0] + 32u);  if (t) { goto L_004B6E84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004B6ED4; } }
L_004B6E84:
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004B6EA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004B6ED4; } }
L_004B6EA0:
    c.f[0] = fp::ee::add(c.fcr31, c.f[7], c.f[2]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B6EB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004B6ED4; } }
L_004B6EB8:
    c.f[0] = fp::ee::add(c.fcr31, c.f[6], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B6ED0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004B6ED4; } }
L_004B6ED0:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004B6ED4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B6F14; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6A08u | kUnwind; return; } goto L_004B6A08; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 256u), c.r[3].w[0]);  if (t) { goto L_004B6EFC; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 6u));
    st32((c.r[16].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 2;
L_004B6EFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6F08u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_006E(c, 109u, depth + 1u); else { c.pc = 0x003B9C10u; return; } if (c.pc != 0x004B6F08u) [[unlikely]] return; }
L_004B6F08:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 312u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6A08u | kUnwind; return; } goto L_004B6A08; } }
L_004B6F14:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 312u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6A08u | kUnwind; return; } goto L_004B6A08; } }
L_004B6F20:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 316u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B6F64; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004B6F64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6F58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 157u, depth + 1u); else { c.pc = 0x003BA8C0u; return; } if (c.pc != 0x004B6F58u) [[unlikely]] return; }
L_004B6F58:
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6A28u | kUnwind; return; } goto L_004B6A28; } }
L_004B6F64:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 312u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6A28u | kUnwind; return; } goto L_004B6A28; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 23808u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x004B4000u < 16384u) { entry = entries_00AD[(t - 0x004B4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004B6F90:
    set32(c.r[3], 0u + 100u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6A28u | kUnwind; return; } goto L_004B6A28; } }
L_004B6F9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B6FA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 157u, depth + 1u); else { c.pc = 0x003BA8C0u; return; } if (c.pc != 0x004B6FA4u) [[unlikely]] return; }
L_004B6FA4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 291u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6A28u | kUnwind; return; } goto L_004B6A28; } }
    set32(c.r[3], 0u + 45u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B6A28u | kUnwind; return; } goto L_004B6A28; } }
L_004B6FBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004B6FE0:
    c.f[3] = ld32((c.r[7].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[2] = ld32((c.r[9].w[0] + 8u));
    c.f[1] = ld32((c.r[9].w[0] + 24u));
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[5].w[0] + 4u), c.f[3]);
    st32((c.r[6].w[0] + 4u), c.f[3]);
    st32((c.r[5].w[0] + 8u), c.f[2]);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    st32((c.r[5].w[0]), c.f[0]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 26528u));
    c.f[1] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B7050; } }
L_004B7020:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 26544u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004B706C; } }
L_004B7038:
    c.r[3].d[0] = c.r[8].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B7088; } }
L_004B7048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B70CC; } }
L_004B7050:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[4].w[0] + 26536u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 26552u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 8u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B7020u | kUnwind; return; } goto L_004B7020; } }
L_004B706C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[4].w[0] + 26536u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 26552u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 8u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B7038u | kUnwind; return; } goto L_004B7038; } }
L_004B7088:
    c.f[4] = ld32((c.r[5].w[0]));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    st32((c.r[6].w[0]), c.f[4]);
    st32((c.r[6].w[0] + 4u), c.f[3]);
    st32((c.r[6].w[0] + 8u), c.f[2]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B7048u | kUnwind; return; } goto L_004B7048; } }
L_004B70CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004B70E0:
    c.f[3] = ld32((c.r[7].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[2] = ld32((c.r[9].w[0]));
    c.f[1] = ld32((c.r[9].w[0] + 16u));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[5].w[0] + 4u), c.f[3]);
    st32((c.r[6].w[0] + 4u), c.f[3]);
    st32((c.r[5].w[0]), c.f[2]);
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 26536u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B7150; } }
L_004B7120:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 26552u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004B716C; } }
L_004B7138:
    c.r[3].d[0] = c.r[8].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B7188; } }
L_004B7148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004B71CC; } }
L_004B7150:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[4].w[0] + 26528u));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 26544u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B7120u | kUnwind; return; } goto L_004B7120; } }
L_004B716C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[4].w[0] + 26528u));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 26544u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B7138u | kUnwind; return; } goto L_004B7138; } }
L_004B7188:
    c.f[4] = ld32((c.r[5].w[0]));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = ld32((c.r[6].w[0]));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    st32((c.r[6].w[0]), c.f[4]);
    st32((c.r[6].w[0] + 4u), c.f[3]);
    st32((c.r[6].w[0] + 8u), c.f[2]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B7148u | kUnwind; return; } goto L_004B7148; } }
L_004B71CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004B71E0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[7] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 26512u));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.f[6] = ld32((c.r[3].w[0] + 26516u));
    set32(c.r[6], c.r[6].w[0] + 26560u);
    c.f[9] = ld32((c.r[28].w[0] - 31048u));
    c.f[20] = ld32((c.r[29].w[0] + 124u));
    c.f[21] = ld32((c.r[29].w[0] + 140u));
    c.f[22] = ld32((c.r[29].w[0] + 156u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[3] = ld32((c.r[2].w[0] + 26520u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[4] = ld32((c.r[3].w[0] + 26500u));
    c.f[8] = fp::ee::sub(c.fcr31, c.f[0], c.f[9]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[2] = ld32((c.r[2].w[0] + 26504u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[3], c.f[9]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[4], c.f[7]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[3] = fp::ee::add(c.fcr31, c.f[2], c.f[9]);
    c.f[2] = ld32((c.r[7].w[0] + 26496u));
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    c.f[6] = fp::ee::sub(c.fcr31, c.f[6], c.f[7]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[9]);
    st32((c.r[5].w[0]), c.f[2]);
    st32((c.r[5].w[0] + 4u), c.f[4]);
    st32((c.r[5].w[0] + 8u), c.f[3]);
    st32((c.r[5].w[0] + 12u), c.f[1]);
    st32((c.r[5].w[0] + 16u), c.f[8]);
    st32((c.r[5].w[0] + 20u), c.f[6]);
    st32((c.r[5].w[0] + 24u), c.f[5]);
    st32((c.r[5].w[0] + 28u), c.f[0]);
    ld128((c.r[17].w[0]) & ~15u, c.r[7]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[3].w[0] + 26576u) & ~15u, c.r[7]);
    ld128((c.r[17].w[0] + 16u) & ~15u, c.r[3]);
    c.budget -= 54;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B72B8u); st128((c.r[2].w[0] + 26592u) & ~15u, c.r[3]);  if (depth < kMaxDepth) unit_00AD(c, 328u, depth + 1u); else { c.pc = 0x004B7C00u; return; } if (c.pc != 0x004B72B8u) [[unlikely]] return; }
L_004B72B8:
    c.f[2] = ld32((c.r[18].w[0] + 308u));
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.f[3] = ld32((c.r[28].w[0] - 31048u));
    c.r[3].d[0] = c.r[5].d[0] & 4ull;
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[4] = ld32((c.r[16].w[0] + 4u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; c.f[2] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);  if (t) { goto L_004B7328; } }
    c.f[0] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004B7300; } }
    c.f[6] = c.f[0];
    c.budget -= 1;
L_004B7300:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[3].w[0] + 26544u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B7318; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_004B7318:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[5] = ld32((c.r[4].w[0] + 26536u));
    c.f[2] = ld32((c.r[3].w[0] + 26552u));
    c.budget -= 4;
L_004B7328:
    c.r[3].d[0] = c.r[5].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B7370; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[3].w[0] + 26528u));
    fpu_compare(c, fp::key(c.f[6]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004B734C; } }
    c.f[6] = c.f[0];
    c.budget -= 1;
L_004B734C:
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B7360; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_004B7360:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[5] = ld32((c.r[4].w[0] + 26536u));
    c.f[2] = ld32((c.r[3].w[0] + 26552u));
    c.budget -= 4;
L_004B7370:
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B73B8; } }
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004B7390; } }
    c.f[5] = c.f[0];
    c.budget -= 1;
L_004B7390:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[3].w[0] + 26552u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B73A8; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_004B73A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[6] = ld32((c.r[4].w[0] + 26528u));
    c.f[3] = ld32((c.r[3].w[0] + 26544u));
    c.budget -= 4;
L_004B73B8:
    c.r[3].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B7400; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[3].w[0] + 26536u));
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004B73DC; } }
    c.f[5] = c.f[0];
    c.budget -= 1;
L_004B73DC:
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B73F0; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_004B73F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[6] = ld32((c.r[4].w[0] + 26528u));
    c.f[3] = ld32((c.r[3].w[0] + 26544u));
    c.budget -= 4;
L_004B7400:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] + 26580u), c.f[4]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] + 26588u), c.f[22]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[4].w[0] + 26576u), c.f[6]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = 0u;
    st32((c.r[5].w[0] + 26596u), c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[1]);
    st32((c.r[6].w[0] + 26592u), c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 26584u), c.f[5]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] + 26604u), c.f[20]);
    st32((c.r[4].w[0] + 26600u), c.f[0]);
    st32((c.r[17].w[0]), c.f[6]);
    st32((c.r[17].w[0] + 4u), c.f[4]);
    st32((c.r[17].w[0] + 8u), c.f[5]);
    st32((c.r[17].w[0] + 12u), c.f[22]);
    st32((c.r[17].w[0] + 16u), c.f[3]);
    st32((c.r[17].w[0] + 20u), c.f[4]);
    st32((c.r[17].w[0] + 24u), c.f[2]);
    st32((c.r[17].w[0] + 28u), c.f[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 40;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004B74A0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.f[2] = c.r[2].w[0];
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.r[13].d[0] = 0ull | 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[13].d[0] = c.r[13].d[0] << 16;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[13].d[0] = c.r[13].d[0] << 16;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[13].d[0] = c.r[13].d[0] | 32768ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[13].d[0] = c.r[13].d[0] << 16;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[11].d[0] = c.r[13].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[10].d[0] = c.r[12].d[0] + 0ull;
    c.f[1] = ld32((c.r[28].w[0] - 31048u));
    set32(c.r[9], ld32((c.r[4].w[0] + 56u)));
    c.f[5] = ld32((c.r[28].w[0] - 31048u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[4].w[0] + 308u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[20] = ld32((c.r[29].w[0] + 204u));
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 272u);
    set32(c.r[6], c.r[6].w[0] + 26688u);
    c.f[3] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    c.f[21] = fp::ee::mul(c.fcr31, c.f[5], c.f[0]);
    c.f[2] = ld32((c.r[9].w[0] + 32u));
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    c.f[4] = ld32((c.r[9].w[0] + 40u));
    c.f[1] = ld32((c.r[9].w[0] + 36u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[3]);
    st32((c.r[2].w[0] + 26700u), c.f[0]);
    st32((c.r[7].w[0] + 26692u), c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[3]);
    set32(c.r[7], c.f[2]);
    set32(c.r[2], c.f[0]);
    c.r[13].d[0] = c.r[13].d[0] & c.r[7].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    c.r[11].d[0] = c.r[11].d[0] & c.r[2].d[0];
    c.f[3] = c.r[12].w[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    c.f[1] = c.r[10].w[0];
    c.f[3] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[0] = fp::cvt_s_w(c.f[3]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[5], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    st32((c.r[8].w[0] + 26688u), c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[5], c.f[0]);
    c.budget -= 65;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B75A4u); st32((c.r[3].w[0] + 26696u), c.f[0]);  if (depth < kMaxDepth) unit_00AD(c, 306u, depth + 1u); else { c.pc = 0x004B71E0u; return; } if (c.pc != 0x004B75A4u) [[unlikely]] return; }
L_004B75A4:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 316u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B7A40; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[5], c.r[3].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B75D0u); set32(c.r[6], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_00AD(c, 328u, depth + 1u); else { c.pc = 0x004B7C00u; return; } if (c.pc != 0x004B75D0u) [[unlikely]] return; }
L_004B75D0:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_004B75D4:
    c.r[16].d[0] = c.r[17].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].d[0] & 12ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B760C; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 240u);
    set32(c.r[6], c.r[29].w[0] + 224u);
    set32(c.r[7], c.r[7].w[0] + 26688u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7604u); set32(c.r[9], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_00AD(c, 302u, depth + 1u); else { c.pc = 0x004B70E0u; return; } if (c.pc != 0x004B7604u) [[unlikely]] return; }
L_004B7604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 36u)));  if (t) { goto L_004B7630; } }
L_004B760C:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 240u);
    set32(c.r[6], c.r[29].w[0] + 224u);
    set32(c.r[7], c.r[7].w[0] + 26688u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B762Cu); set32(c.r[9], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_00AD(c, 298u, depth + 1u); else { c.pc = 0x004B6FE0u; return; } if (c.pc != 0x004B762Cu) [[unlikely]] return; }
L_004B762C:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_004B7630:
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 252u)));
    c.r[3].d[0] = ld16((c.r[2].w[0] + 544u));
    c.r[2].d[0] = c.r[3].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004B7B00; } }
    c.r[2].d[0] = c.r[3].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B7B00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004B7B00; } }
L_004B7664:
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B7740; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 736u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B7740; } }
L_004B7688:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 316u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B7B10; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 216u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B76BC; } }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 29u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B76BC; } }
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004B76BC:
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42440000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004B76EC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B76E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 109u, depth + 1u); else { c.pc = 0x003B9C10u; return; } if (c.pc != 0x004B76E4u) [[unlikely]] return; }
L_004B76E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;  if (t) { goto L_004B7744; } }
L_004B76EC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B76F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 109u, depth + 1u); else { c.pc = 0x003B9C10u; return; } if (c.pc != 0x004B76F8u) [[unlikely]] return; }
L_004B76F8:
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43610000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B7B18; } }
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[21]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004B7B18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[18].w[0] + 304u));
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004B7740; } }
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004B7740:
    c.r[2].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_004B7744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B7754; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 31032u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004B7754:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004B7988; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.r[3].d[0] = c.r[16].d[0] & 28ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[2].w[0] + 32u);  if (t) { goto L_004B7B20; } }
    c.r[3].d[0] = c.r[16].d[0] & 19ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B77AC; } }
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[2] = ld32((c.r[29].w[0] + 224u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_004B77A4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004B77A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_004B77B0; } }
L_004B77AC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004B77B0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B7988; } }
    c.r[6].d[0] = ld16((c.r[2].w[0] + 544u));
    set32(c.r[4], 0u - 3u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[3], 0u - 17u);
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[25].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[24].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st16((c.r[2].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[20].d[0] = ld16((c.r[2].w[0] + 544u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = c.r[20].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[19].d[0];
    set32(c.r[20], c.r[29].w[0] + 184u);
    st16((c.r[2].w[0] + 544u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[19].d[0] = c.r[16].d[0] & 4ull;
    c.r[22].d[0] = ld16((c.r[2].w[0] + 544u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[21], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 2049u);
    c.r[22].d[0] = c.r[22].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[3].d[0] = c.r[22].d[0] | c.r[3].d[0];
    st16((c.r[2].w[0] + 544u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 228u);
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[3] = ld32((c.r[29].w[0] + 224u));
    c.f[7] = ld32((c.r[29].w[0] + 240u));
    c.f[6] = ld32((c.r[29].w[0] + 244u));
    c.f[5] = ld32((c.r[29].w[0] + 248u));
    c.f[4] = ld32((c.r[29].w[0] + 252u));
    set32(c.r[2], c.r[29].w[0] + 232u);
    c.f[1] = ld32((c.r[2].w[0]));
    st32((c.r[25].w[0] + 26624u), c.f[7]);
    st32((c.r[24].w[0] + 26628u), c.f[6]);
    st32((c.r[15].w[0] + 26632u), c.f[5]);
    st32((c.r[14].w[0] + 26636u), c.f[4]);
    st32((c.r[13].w[0] + 26656u), c.f[3]);
    set32(c.r[2], c.r[29].w[0] + 236u);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[12].w[0] + 26660u), c.f[2]);
    st32((c.r[11].w[0] + 26664u), c.f[1]);
    st32((c.r[9].w[0] + 26672u), c.f[3]);
    st32((c.r[5].w[0] + 26640u), c.f[3]);
    st32((c.r[8].w[0] + 26676u), c.f[2]);
    st32((c.r[10].w[0] + 26668u), c.f[0]);
    set32(c.r[2], 0u - 5u);
    st32((c.r[4].w[0] + 26644u), c.f[2]);
    st32((c.r[7].w[0] + 26680u), c.f[1]);
    st32((c.r[23].w[0] + 26648u), c.f[1]);
    st32((c.r[6].w[0] + 26684u), c.f[0]);
    st32((c.r[30].w[0] + 26652u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 316u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[21].d[0];
    st8((c.r[18].w[0] + 316u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 288u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 315u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], 0u - 2u);
    st8((c.r[18].w[0] + 314u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 316u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[18].w[0] + 316u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 228u);
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[3] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[2], c.r[29].w[0] + 232u);
    c.f[1] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 180u), c.f[2]);
    st32((c.r[29].w[0] + 176u), c.f[3]);
    set32(c.r[2], c.r[29].w[0] + 236u);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[20].w[0]), c.f[1]);
    c.budget -= 92;
    { const bool t = c.r[19].d[0] != 0ull; st32((c.r[29].w[0] + 188u), c.f[0]);  if (t) { goto L_004B7B54; } }
L_004B7928:
    c.r[2].d[0] = c.r[16].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B7B6C; } }
L_004B7934:
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B7B88; } }
L_004B7940:
    c.r[2].d[0] = c.r[16].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004B7BA4; } }
L_004B794C:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B795Cu); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0023(c, 17u, depth + 1u); else { c.pc = 0x0028C3D0u; return; } if (c.pc != 0x004B795Cu) [[unlikely]] return; }
L_004B795C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 316u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B797C; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 312u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004B7A38; } }
L_004B797C:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 312u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004B7A38; } }
L_004B7988:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[21]);
    c.f[1] = ld32((c.r[2].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_004B79A4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004B79A4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004B79D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    c.f[2] = ld32((c.r[18].w[0] + 304u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_004B79D4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004B79D4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B79EC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 112u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004B79F4; } }
L_004B79EC:
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    st8((c.r[2].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_004B79F4:
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7A08u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006B(c, 140u, depth + 1u); else { c.pc = 0x003AE4A0u; return; } if (c.pc != 0x004B7A08u) [[unlikely]] return; }
L_004B7A08:
    c.f[3] = ld32((c.r[29].w[0] + 240u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[2] = ld32((c.r[29].w[0] + 244u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[29].w[0] + 248u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[0] = ld32((c.r[29].w[0] + 252u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[6].w[0] + 26608u), c.f[3]);
    st32((c.r[5].w[0] + 26612u), c.f[2]);
    st32((c.r[4].w[0] + 26616u), c.f[1]);
    st32((c.r[3].w[0] + 26620u), c.f[0]);
    c.budget -= 12;
L_004B7A38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_004B7BC0; } }
L_004B7A40:
    c.f[0] = ld32((c.r[28].w[0] - 31048u));
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[8].d[0] = 0ull | 0ull;
    c.f[2] = c.r[2].w[0];
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[8].d[0] = c.r[8].d[0] | 32768ull;
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.r[8].d[0] = c.r[8].d[0] << 16;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 256u);
    c.f[3] = ld32((c.r[3].w[0] + 32u));
    c.f[4] = ld32((c.r[3].w[0] + 40u));
    c.f[1] = ld32((c.r[28].w[0] - 31048u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    set32(c.r[9], c.f[3]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    c.r[8].d[0] = c.r[8].d[0] & c.r[9].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    c.f[5] = c.r[7].w[0];
    c.f[5] = fp::ee::add(c.fcr31, c.f[3], c.f[5]);
    set32(c.r[3], c.f[2]);
    c.f[5] = fp::cvt_w_s(c.f[5]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st32((c.r[29].w[0] + 260u), c.f[0]);
    c.f[4] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[5]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[2], c.f[4]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    st32((c.r[29].w[0] + 256u), c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[4]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 268u), c.f[20]);
    st32((c.r[29].w[0] + 264u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 46;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7AF8u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_00AD(c, 328u, depth + 1u); else { c.pc = 0x004B7C00u; return; } if (c.pc != 0x004B7AF8u) [[unlikely]] return; }
L_004B7AF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B75D4u | kUnwind; return; } goto L_004B75D4; } }
L_004B7B00:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B7688u | kUnwind; return; } goto L_004B7688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[18].w[0] + 316u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B7664u | kUnwind; return; } goto L_004B7664; } }
L_004B7B10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B76BCu | kUnwind; return; } goto L_004B76BC; } }
L_004B7B18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B7740u | kUnwind; return; } goto L_004B7740; } }
L_004B7B20:
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = ld32((c.r[29].w[0] + 232u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], 0u + 1u);  if (t) { goto L_004B7B4C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004B7B4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[4].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B77B0u | kUnwind; return; } goto L_004B77B0; } }
L_004B7B54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B7928u | kUnwind; return; } goto L_004B7928; } }
L_004B7B6C:
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B7934u | kUnwind; return; } goto L_004B7934; } }
L_004B7B88:
    c.f[1] = ld32((c.r[20].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B7940u | kUnwind; return; } goto L_004B7940; } }
L_004B7BA4:
    c.f[1] = ld32((c.r[20].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1000000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B794Cu | kUnwind; return; } goto L_004B794C; } }
L_004B7BC0:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_004B7C00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[3] = ld32((c.r[6].w[0]));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[2] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[12] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004B7C24u); c.f[13] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x004B7C24u) [[unlikely]] return; }
L_004B7C24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[1] = c.r[2].w[0];
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    set32(c.r[2], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 27;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B7CD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B7D24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40160000u);
    c.r[2].d[0] = c.r[2].d[0] | 52196ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004B7CD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(4ll);  if (t) { goto L_004B7D1C; } }
L_004B7CD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (t) { goto L_004B7D1C; } }
L_004B7CD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004B7D2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0160000u);
    c.r[2].d[0] = c.r[2].d[0] | 52196ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B7D18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(8ll);  if (t) { goto L_004B7D1C; } }
L_004B7D18:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.budget -= 1;
L_004B7D1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004B7D34; } }
L_004B7D24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B7D1Cu | kUnwind; return; } goto L_004B7D1C; } }
L_004B7D2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004B7D1Cu | kUnwind; return; } goto L_004B7D1C; } }
L_004B7D34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004B7D40:
    c.r[11].d[0] = c.r[9].d[0] & 255ull;
    c.r[9].d[0] = c.r[11].d[0] & 12ull;
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_004B7DE0; } }
    c.r[3].d[0] = c.r[8].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 12ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B7DE0; } }
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.r[3].d[0] = c.r[11].d[0] & 4ull;
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[6].w[0] + 4u), c.f[0]);  if (t) { goto L_004B7D88; } }
    c.f[1] = ld32((c.r[10].w[0]));
    c.f[0] = ld32((c.r[10].w[0] + 16u));
    st32((c.r[5].w[0]), c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_004B7D98; } }
L_004B7D88:
    c.f[1] = ld32((c.r[10].w[0] + 16u));
    c.f[0] = ld32((c.r[10].w[0]));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 4;
L_004B7D98:
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 26536u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_00AE(c, 6u, depth); } }
L_004B7DB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[3].w[0] + 26552u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B7DD4; } }
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.budget -= 1;
L_004B7DD4:
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 8u), c.f[0]);  if (t) { [[clang::musttail]] return unit_00AE(c, 5u, depth); } }
L_004B7DE0:
    c.r[4].d[0] = c.r[11].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B7E7C; } }
    c.r[3].d[0] = c.r[8].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B7E7C; } }
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.r[3].d[0] = c.r[11].d[0] & 1ull;
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[6].w[0] + 4u), c.f[0]);  if (t) { goto L_004B7E24; } }
    c.f[1] = ld32((c.r[10].w[0] + 8u));
    c.f[0] = ld32((c.r[10].w[0] + 24u));
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 8u), c.f[0]);  if (t) { goto L_004B7E34; } }
L_004B7E24:
    c.f[1] = ld32((c.r[10].w[0] + 24u));
    c.f[0] = ld32((c.r[10].w[0] + 8u));
    st32((c.r[5].w[0] + 8u), c.f[1]);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.budget -= 4;
L_004B7E34:
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 26528u));
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_00AE(c, 7u, depth); } }
L_004B7E54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[3].w[0] + 26544u));
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B7E70; } }
    st32((c.r[5].w[0]), c.f[1]);
    c.budget -= 1;
L_004B7E70:
    c.f[0] = ld32((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { [[clang::musttail]] return unit_00AE(c, 5u, depth); } }
L_004B7E7C:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_004B7F14; } }
    c.r[3].d[0] = c.r[8].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 19ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B7F14; } }
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.r[3].d[0] = c.r[11].d[0] & 4ull;
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[6].w[0] + 4u), c.f[0]);  if (t) { goto L_004B7EBC; } }
    c.f[1] = ld32((c.r[10].w[0]));
    c.f[0] = ld32((c.r[10].w[0] + 16u));
    st32((c.r[5].w[0]), c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_004B7ECC; } }
L_004B7EBC:
    c.f[1] = ld32((c.r[10].w[0] + 16u));
    c.f[0] = ld32((c.r[10].w[0]));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 4;
L_004B7ECC:
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 26536u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_00AE(c, 8u, depth); } }
L_004B7EEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[3].w[0] + 26552u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B7F08; } }
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.budget -= 1;
L_004B7F08:
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 8u), c.f[0]);  if (t) { [[clang::musttail]] return unit_00AE(c, 5u, depth); } }
L_004B7F14:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004B7FAC; } }
    c.r[3].d[0] = c.r[8].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 28ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004B7FAC; } }
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.r[3].d[0] = c.r[11].d[0] & 1ull;
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[6].w[0] + 4u), c.f[0]);  if (t) { goto L_004B7F54; } }
    c.f[1] = ld32((c.r[10].w[0] + 8u));
    c.f[0] = ld32((c.r[10].w[0] + 24u));
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 8u), c.f[0]);  if (t) { goto L_004B7F64; } }
L_004B7F54:
    c.f[1] = ld32((c.r[10].w[0] + 24u));
    c.f[0] = ld32((c.r[10].w[0] + 8u));
    st32((c.r[5].w[0] + 8u), c.f[1]);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.budget -= 4;
L_004B7F64:
    c.f[0] = ld32((c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 26528u));
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_00AE(c, 9u, depth); } }
L_004B7F84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.f[1] = ld32((c.r[3].w[0] + 26544u));
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004B7FA0; } }
    st32((c.r[5].w[0]), c.f[1]);
    c.budget -= 1;
L_004B7FA0:
    c.f[0] = ld32((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { [[clang::musttail]] return unit_00AE(c, 5u, depth); } }
L_004B7FAC:
    c.r[3].d[0] = c.r[11].d[0] & 28ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00AE(c, 3u, depth); } }
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.r[3].d[0] = c.r[11].d[0] & 4ull;
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[6].w[0] + 4u), c.f[0]);  if (t) { goto L_004B7FE0; } }
    c.f[1] = ld32((c.r[10].w[0]));
    c.f[0] = ld32((c.r[10].w[0] + 16u));
    st32((c.r[5].w[0]), c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_004B7FF0; } }
L_004B7FE0:
    c.f[1] = ld32((c.r[10].w[0] + 16u));
    c.f[0] = ld32((c.r[10].w[0]));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 4;
L_004B7FF0:
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 26536u));
    c.budget -= 4;
    [[clang::musttail]] return unit_00AE(c, 1u, depth);
}

}

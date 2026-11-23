#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0,
    0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0,
    0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 38, 0, 39, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 43, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 48, 0, 49, 0, 50, 0, 0, 0, 51, 0,
    0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 57, 58, 0, 59, 60, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 65, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72,
    0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0,
    0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0,
    142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 159, 0, 0, 0, 160, 0,
    0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0,
    0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0,
    0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0,
    0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0,
    0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245,
    0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0,
    0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0,
    0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297,
    0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0,
    0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0,
    314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 342, 0, 343, 0,
};

void unit_007A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003E8000;
    case 2u: goto L_003E8048;
    case 3u: goto L_003E8078;
    case 4u: goto L_003E808C;
    case 5u: goto L_003E80B0;
    case 6u: goto L_003E80E4;
    case 7u: goto L_003E810C;
    case 8u: goto L_003E8120;
    case 9u: goto L_003E813C;
    case 10u: goto L_003E8154;
    case 11u: goto L_003E816C;
    case 12u: goto L_003E8188;
    case 13u: goto L_003E81A0;
    case 14u: goto L_003E81B8;
    case 15u: goto L_003E81D0;
    case 16u: goto L_003E81E8;
    case 17u: goto L_003E8204;
    case 18u: goto L_003E821C;
    case 19u: goto L_003E8238;
    case 20u: goto L_003E8250;
    case 21u: goto L_003E8270;
    case 22u: goto L_003E8288;
    case 23u: goto L_003E82A8;
    case 24u: goto L_003E82B8;
    case 25u: goto L_003E8304;
    case 26u: goto L_003E8354;
    case 27u: goto L_003E835C;
    case 28u: goto L_003E837C;
    case 29u: goto L_003E83D4;
    case 30u: goto L_003E83E0;
    case 31u: goto L_003E83F4;
    case 32u: goto L_003E8410;
    case 33u: goto L_003E841C;
    case 34u: goto L_003E8430;
    case 35u: goto L_003E84B0;
    case 36u: goto L_003E84C8;
    case 37u: goto L_003E84DC;
    case 38u: goto L_003E84E0;
    case 39u: goto L_003E84E8;
    case 40u: goto L_003E8544;
    case 41u: goto L_003E855C;
    case 42u: goto L_003E8570;
    case 43u: goto L_003E8574;
    case 44u: goto L_003E8614;
    case 45u: goto L_003E8628;
    case 46u: goto L_003E8640;
    case 47u: goto L_003E8654;
    case 48u: goto L_003E8658;
    case 49u: goto L_003E8660;
    case 50u: goto L_003E8668;
    case 51u: goto L_003E8678;
    case 52u: goto L_003E8698;
    case 53u: goto L_003E86B0;
    case 54u: goto L_003E86B8;
    case 55u: goto L_003E8768;
    case 56u: goto L_003E8780;
    case 57u: goto L_003E8794;
    case 58u: goto L_003E8798;
    case 59u: goto L_003E87A0;
    case 60u: goto L_003E87A4;
    case 61u: goto L_003E87B0;
    case 62u: goto L_003E87C8;
    case 63u: goto L_003E87E0;
    case 64u: goto L_003E87F4;
    case 65u: goto L_003E87F8;
    case 66u: goto L_003E8800;
    case 67u: goto L_003E8834;
    case 68u: goto L_003E884C;
    case 69u: goto L_003E8860;
    case 70u: goto L_003E88D0;
    case 71u: goto L_003E88E8;
    case 72u: goto L_003E88FC;
    case 73u: goto L_003E891C;
    case 74u: goto L_003E8934;
    case 75u: goto L_003E8948;
    case 76u: goto L_003E894C;
    case 77u: goto L_003E89B4;
    case 78u: goto L_003E89F0;
    case 79u: goto L_003E8A04;
    case 80u: goto L_003E8A30;
    case 81u: goto L_003E8A70;
    case 82u: goto L_003E8AB0;
    case 83u: goto L_003E8ADC;
    case 84u: goto L_003E8AF0;
    case 85u: goto L_003E8B20;
    case 86u: goto L_003E8BA0;
    case 87u: goto L_003E8BC0;
    case 88u: goto L_003E8BD0;
    case 89u: goto L_003E8C5C;
    case 90u: goto L_003E8D00;
    case 91u: goto L_003E8D24;
    case 92u: goto L_003E8D90;
    case 93u: goto L_003E8DB8;
    case 94u: goto L_003E8DD4;
    case 95u: goto L_003E8E28;
    case 96u: goto L_003E8EAC;
    case 97u: goto L_003E8EE0;
    case 98u: goto L_003E8F34;
    case 99u: goto L_003E8F80;
    case 100u: goto L_003E8FAC;
    case 101u: goto L_003E8FD8;
    case 102u: goto L_003E8FF0;
    case 103u: goto L_003E9010;
    case 104u: goto L_003E9038;
    case 105u: goto L_003E9040;
    case 106u: goto L_003E9060;
    case 107u: goto L_003E9078;
    case 108u: goto L_003E9090;
    case 109u: goto L_003E90B8;
    case 110u: goto L_003E90C0;
    case 111u: goto L_003E90E0;
    case 112u: goto L_003E90F0;
    case 113u: goto L_003E9120;
    case 114u: goto L_003E9130;
    case 115u: goto L_003E9180;
    case 116u: goto L_003E91B8;
    case 117u: goto L_003E91D4;
    case 118u: goto L_003E91E0;
    case 119u: goto L_003E9228;
    case 120u: goto L_003E9234;
    case 121u: goto L_003E923C;
    case 122u: goto L_003E9254;
    case 123u: goto L_003E9260;
    case 124u: goto L_003E926C;
    case 125u: goto L_003E9288;
    case 126u: goto L_003E9298;
    case 127u: goto L_003E92A8;
    case 128u: goto L_003E92D4;
    case 129u: goto L_003E9334;
    case 130u: goto L_003E9340;
    case 131u: goto L_003E9348;
    case 132u: goto L_003E9358;
    case 133u: goto L_003E9368;
    case 134u: goto L_003E93A8;
    case 135u: goto L_003E93B0;
    case 136u: goto L_003E93C0;
    case 137u: goto L_003E93D0;
    case 138u: goto L_003E9444;
    case 139u: goto L_003E9450;
    case 140u: goto L_003E9458;
    case 141u: goto L_003E9470;
    case 142u: goto L_003E9480;
    case 143u: goto L_003E949C;
    case 144u: goto L_003E94BC;
    case 145u: goto L_003E94E4;
    case 146u: goto L_003E950C;
    case 147u: goto L_003E9528;
    case 148u: goto L_003E9530;
    case 149u: goto L_003E9540;
    case 150u: goto L_003E9550;
    case 151u: goto L_003E9590;
    case 152u: goto L_003E9598;
    case 153u: goto L_003E95A8;
    case 154u: goto L_003E95B8;
    case 155u: goto L_003E9628;
    case 156u: goto L_003E9630;
    case 157u: goto L_003E9658;
    case 158u: goto L_003E9660;
    case 159u: goto L_003E9668;
    case 160u: goto L_003E9678;
    case 161u: goto L_003E9688;
    case 162u: goto L_003E96D8;
    case 163u: goto L_003E96EC;
    case 164u: goto L_003E970C;
    case 165u: goto L_003E9718;
    case 166u: goto L_003E972C;
    case 167u: goto L_003E973C;
    case 168u: goto L_003E975C;
    case 169u: goto L_003E9784;
    case 170u: goto L_003E97A4;
    case 171u: goto L_003E97C0;
    case 172u: goto L_003E97D8;
    case 173u: goto L_003E97F8;
    case 174u: goto L_003E981C;
    case 175u: goto L_003E9844;
    case 176u: goto L_003E9860;
    case 177u: goto L_003E9868;
    case 178u: goto L_003E9880;
    case 179u: goto L_003E98B8;
    case 180u: goto L_003E98C8;
    case 181u: goto L_003E98D0;
    case 182u: goto L_003E98E8;
    case 183u: goto L_003E98F8;
    case 184u: goto L_003E9900;
    case 185u: goto L_003E992C;
    case 186u: goto L_003E9934;
    case 187u: goto L_003E9970;
    case 188u: goto L_003E9978;
    case 189u: goto L_003E99A0;
    case 190u: goto L_003E99A8;
    case 191u: goto L_003E99B0;
    case 192u: goto L_003E99C0;
    case 193u: goto L_003E99D0;
    case 194u: goto L_003E9A20;
    case 195u: goto L_003E9A34;
    case 196u: goto L_003E9A54;
    case 197u: goto L_003E9A60;
    case 198u: goto L_003E9A74;
    case 199u: goto L_003E9A84;
    case 200u: goto L_003E9AA4;
    case 201u: goto L_003E9ACC;
    case 202u: goto L_003E9AEC;
    case 203u: goto L_003E9B08;
    case 204u: goto L_003E9B20;
    case 205u: goto L_003E9B40;
    case 206u: goto L_003E9B70;
    case 207u: goto L_003E9B80;
    case 208u: goto L_003E9BA8;
    case 209u: goto L_003E9BB8;
    case 210u: goto L_003E9BF4;
    case 211u: goto L_003E9C30;
    case 212u: goto L_003E9C60;
    case 213u: goto L_003E9C68;
    case 214u: goto L_003E9C90;
    case 215u: goto L_003E9CB8;
    case 216u: goto L_003E9CDC;
    case 217u: goto L_003E9D00;
    case 218u: goto L_003E9D18;
    case 219u: goto L_003E9D30;
    case 220u: goto L_003E9D50;
    case 221u: goto L_003E9D80;
    case 222u: goto L_003E9DA0;
    case 223u: goto L_003E9DC4;
    case 224u: goto L_003E9DD0;
    case 225u: goto L_003E9E10;
    case 226u: goto L_003E9E50;
    case 227u: goto L_003E9E90;
    case 228u: goto L_003E9F2C;
    case 229u: goto L_003E9FBC;
    case 230u: goto L_003EA090;
    case 231u: goto L_003EA0E0;
    case 232u: goto L_003EA10C;
    case 233u: goto L_003EA13C;
    case 234u: goto L_003EA180;
    case 235u: goto L_003EA1C0;
    case 236u: goto L_003EA1D0;
    case 237u: goto L_003EA200;
    case 238u: goto L_003EA220;
    case 239u: goto L_003EA230;
    case 240u: goto L_003EA240;
    case 241u: goto L_003EA254;
    case 242u: goto L_003EA280;
    case 243u: goto L_003EA29C;
    case 244u: goto L_003EA2D0;
    case 245u: goto L_003EA2FC;
    case 246u: goto L_003EA30C;
    case 247u: goto L_003EA344;
    case 248u: goto L_003EA388;
    case 249u: goto L_003EA3D0;
    case 250u: goto L_003EA40C;
    case 251u: goto L_003EA448;
    case 252u: goto L_003EA4A0;
    case 253u: goto L_003EA524;
    case 254u: goto L_003EA53C;
    case 255u: goto L_003EA550;
    case 256u: goto L_003EA650;
    case 257u: goto L_003EA6A0;
    case 258u: goto L_003EA6C4;
    case 259u: goto L_003EA6F4;
    case 260u: goto L_003EA718;
    case 261u: goto L_003EA72C;
    case 262u: goto L_003EA740;
    case 263u: goto L_003EA790;
    case 264u: goto L_003EA7B4;
    case 265u: goto L_003EA7C4;
    case 266u: goto L_003EA7E8;
    case 267u: goto L_003EA7F8;
    case 268u: goto L_003EA810;
    case 269u: goto L_003EA8DC;
    case 270u: goto L_003EA980;
    case 271u: goto L_003EA9AC;
    case 272u: goto L_003EAAEC;
    case 273u: goto L_003EAB50;
    case 274u: goto L_003EAC5C;
    case 275u: goto L_003EACD8;
    case 276u: goto L_003EAD24;
    case 277u: goto L_003EAD2C;
    case 278u: goto L_003EADC0;
    case 279u: goto L_003EAE1C;
    case 280u: goto L_003EAE24;
    case 281u: goto L_003EAE64;
    case 282u: goto L_003EAE7C;
    case 283u: goto L_003EAEB4;
    case 284u: goto L_003EAEE0;
    case 285u: goto L_003EAF40;
    case 286u: goto L_003EAF74;
    case 287u: goto L_003EAFA4;
    case 288u: goto L_003EAFD4;
    case 289u: goto L_003EAFE4;
    case 290u: goto L_003EAFF4;
    case 291u: goto L_003EB024;
    case 292u: goto L_003EB054;
    case 293u: goto L_003EB084;
    case 294u: goto L_003EB0B4;
    case 295u: goto L_003EB100;
    case 296u: goto L_003EB13C;
    case 297u: goto L_003EB17C;
    case 298u: goto L_003EB190;
    case 299u: goto L_003EB1B0;
    case 300u: goto L_003EB1C4;
    case 301u: goto L_003EB1E4;
    case 302u: goto L_003EB1F8;
    case 303u: goto L_003EB214;
    case 304u: goto L_003EB234;
    case 305u: goto L_003EB244;
    case 306u: goto L_003EB254;
    case 307u: goto L_003EB264;
    case 308u: goto L_003EB394;
    case 309u: goto L_003EB3B8;
    case 310u: goto L_003EB3E0;
    case 311u: goto L_003EB470;
    case 312u: goto L_003EB4E0;
    case 313u: goto L_003EB570;
    case 314u: goto L_003EB580;
    case 315u: goto L_003EB650;
    case 316u: goto L_003EB660;
    case 317u: goto L_003EB760;
    case 318u: goto L_003EB840;
    case 319u: goto L_003EB93C;
    case 320u: goto L_003EB948;
    case 321u: goto L_003EBA00;
    case 322u: goto L_003EBB2C;
    case 323u: goto L_003EBB34;
    case 324u: goto L_003EBBD0;
    case 325u: goto L_003EBBE4;
    case 326u: goto L_003EBC10;
    case 327u: goto L_003EBC20;
    case 328u: goto L_003EBC38;
    case 329u: goto L_003EBC80;
    case 330u: goto L_003EBCB0;
    case 331u: goto L_003EBD24;
    case 332u: goto L_003EBD40;
    case 333u: goto L_003EBD50;
    case 334u: goto L_003EBE30;
    case 335u: goto L_003EBE94;
    case 336u: goto L_003EBEB0;
    case 337u: goto L_003EBEC0;
    case 338u: goto L_003EBED0;
    case 339u: goto L_003EBFB0;
    case 340u: goto L_003EBFD0;
    case 341u: goto L_003EBFDC;
    case 342u: goto L_003EBFF0;
    case 343u: goto L_003EBFF8;
    default: bad_entry(c, 0x003E8000u); return;
    }
L_003E8000:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[19].w[0]);
    set32(c.r[2], c.r[29].w[0] + 264u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E8080; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 560u);
    set32(c.r[16], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8048u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003E8048u) [[unlikely]] return; }
L_003E8048:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_003E8098; } }
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8078u); set32(c.r[5], c.r[2].w[0] + 560u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E8078u) [[unlikely]] return; }
L_003E8078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 560u)));  if (t) { goto L_003E809C; } }
L_003E8080:
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E808Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003E808Cu) [[unlikely]] return; }
L_003E808C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003E8098:
    set32(c.r[16], ld32((c.r[29].w[0] + 560u)));
    c.budget -= 1;
L_003E809C:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003E835C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E80B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003E80B0u) [[unlikely]] return; }
L_003E80B0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[29].w[0] + 264u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E8114; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[20], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E80E4u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003E80E4u) [[unlikely]] return; }
L_003E80E4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[20].d[0]; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003E812C; } }
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[6], c.r[16].w[0] - c.r[20].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E810Cu); set32(c.r[5], c.r[18].w[0] + c.r[20].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E810Cu) [[unlikely]] return; }
L_003E810C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E812C; } }
L_003E8114:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8120u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003E8120u) [[unlikely]] return; }
L_003E8120:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003E812C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E813Cu); set32(c.r[5], c.r[5].w[0] + 6085u);  if (depth < kMaxDepth) unit_000D(c, 78u, depth + 1u); else { c.pc = 0x00235698u; return; } if (c.pc != 0x003E813Cu) [[unlikely]] return; }
L_003E813C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E8384; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8154u); set32(c.r[5], c.r[5].w[0] + 6104u);  if (depth < kMaxDepth) unit_000D(c, 78u, depth + 1u); else { c.pc = 0x00235698u; return; } if (c.pc != 0x003E8154u) [[unlikely]] return; }
L_003E8154:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E845C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E816Cu); set32(c.r[5], c.r[5].w[0] + 6130u);  if (depth < kMaxDepth) unit_000D(c, 78u, depth + 1u); else { c.pc = 0x00235698u; return; } if (c.pc != 0x003E816Cu) [[unlikely]] return; }
L_003E816C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E8190; } }
    c.r[6].d[0] = c.r[23].d[0] << 48;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8188u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 148u, depth + 1u); else { c.pc = 0x003E62D0u; return; } if (c.pc != 0x003E8188u) [[unlikely]] return; }
L_003E8188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E82A8; } }
L_003E8190:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E81A0u); set32(c.r[5], c.r[5].w[0] + 6149u);  if (depth < kMaxDepth) unit_000D(c, 78u, depth + 1u); else { c.pc = 0x00235698u; return; } if (c.pc != 0x003E81A0u) [[unlikely]] return; }
L_003E81A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E85D8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E81B8u); set32(c.r[5], c.r[5].w[0] + 6169u);  if (depth < kMaxDepth) unit_000D(c, 78u, depth + 1u); else { c.pc = 0x00235698u; return; } if (c.pc != 0x003E81B8u) [[unlikely]] return; }
L_003E81B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E8728; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E81D0u); set32(c.r[5], c.r[5].w[0] + 6189u);  if (depth < kMaxDepth) unit_000D(c, 78u, depth + 1u); else { c.pc = 0x00235698u; return; } if (c.pc != 0x003E81D0u) [[unlikely]] return; }
L_003E81D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E8890; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E81E8u); set32(c.r[5], c.r[5].w[0] + 6208u);  if (depth < kMaxDepth) unit_000D(c, 78u, depth + 1u); else { c.pc = 0x00235698u; return; } if (c.pc != 0x003E81E8u) [[unlikely]] return; }
L_003E81E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E820C; } }
    c.r[6].d[0] = c.r[23].d[0] << 48;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8204u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 136u, depth + 1u); else { c.pc = 0x003E5E40u; return; } if (c.pc != 0x003E8204u) [[unlikely]] return; }
L_003E8204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E82A8; } }
L_003E820C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E821Cu); set32(c.r[5], c.r[5].w[0] + 6234u);  if (depth < kMaxDepth) unit_000D(c, 78u, depth + 1u); else { c.pc = 0x00235698u; return; } if (c.pc != 0x003E821Cu) [[unlikely]] return; }
L_003E821C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E8240; } }
    c.r[6].d[0] = c.r[23].d[0] << 48;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8238u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0079(c, 112u, depth + 1u); else { c.pc = 0x003E5AA0u; return; } if (c.pc != 0x003E8238u) [[unlikely]] return; }
L_003E8238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E82A8; } }
L_003E8240:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8250u); set32(c.r[5], c.r[5].w[0] + 6263u);  if (depth < kMaxDepth) unit_000D(c, 78u, depth + 1u); else { c.pc = 0x00235698u; return; } if (c.pc != 0x003E8250u) [[unlikely]] return; }
L_003E8250:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E8278; } }
    c.r[6].d[0] = c.r[23].d[0] << 48;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8270u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0079(c, 170u, depth + 1u); else { c.pc = 0x003E67E0u; return; } if (c.pc != 0x003E8270u) [[unlikely]] return; }
L_003E8270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E82A8; } }
L_003E8278:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8288u); set32(c.r[5], c.r[5].w[0] + 6287u);  if (depth < kMaxDepth) unit_000D(c, 78u, depth + 1u); else { c.pc = 0x00235698u; return; } if (c.pc != 0x003E8288u) [[unlikely]] return; }
L_003E8288:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E82A8; } }
    c.r[6].d[0] = c.r[23].d[0] << 48;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 48);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E82A8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0079(c, 170u, depth + 1u); else { c.pc = 0x003E67E0u; return; } if (c.pc != 0x003E82A8u) [[unlikely]] return; }
L_003E82A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E82B8u); set32(c.r[5], c.r[5].w[0] + 6301u);  if (depth < kMaxDepth) unit_000D(c, 78u, depth + 1u); else { c.pc = 0x00235698u; return; } if (c.pc != 0x003E82B8u) [[unlikely]] return; }
L_003E82B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E8354; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 223u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] << 2);
    c.r[3].d[0] = ld16((c.r[19].w[0] + 12u));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 14u));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 124u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003E8998; } }
    set32(c.r[4], 0u + 12u);
    c.budget -= 1;
L_003E8304:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + 12u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[19].w[0] + 12u));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 14u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8304u | kUnwind; return; } goto L_003E8304; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[19].w[0] + 20u));  if (t) { goto L_003E899C; } }
L_003E8354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E835Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003E835Cu) [[unlikely]] return; }
L_003E835C:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[21].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E837Cu); st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x003E837Cu) [[unlikely]] return; }
L_003E837C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[22].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7A1Cu | kUnwind; return; } [[clang::musttail]] return unit_0079(c, 271u, depth); } }
L_003E8384:
    c.r[7].d[0] = ld8((c.r[19].w[0] + 48u));
    set32(c.r[8], 0u - 2u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], 0u - 255u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[28].w[0] - 31664u);
    c.r[7].d[0] = c.r[7].d[0] & c.r[8].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[9].d[0];
    st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[19].w[0] + 48u));
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 62u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E83D4u); st8((c.r[19].w[0] + 62u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000D(c, 78u, depth + 1u); else { c.pc = 0x00235698u; return; } if (c.pc != 0x003E83D4u) [[unlikely]] return; }
L_003E83D4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E83E0u); set32(c.r[4], c.r[28].w[0] - 31664u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x003E83E0u) [[unlikely]] return; }
L_003E83E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 5190u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E83F4u); set32(c.r[6], c.r[29].w[0] + 604u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003E83F4u) [[unlikely]] return; }
L_003E83F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 604u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[28].w[0] - 31656u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0] + 604u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8410u); st8((c.r[19].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000D(c, 78u, depth + 1u); else { c.pc = 0x00235698u; return; } if (c.pc != 0x003E8410u) [[unlikely]] return; }
L_003E8410:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E841Cu); set32(c.r[4], c.r[28].w[0] - 31656u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x003E841Cu) [[unlikely]] return; }
L_003E841C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 5190u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8430u); set32(c.r[6], c.r[29].w[0] + 604u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003E8430u) [[unlikely]] return; }
L_003E8430:
    set32(c.r[4], ld32((c.r[29].w[0] + 604u)));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[29].w[0] + 604u), c.r[4].w[0]);
    st8((c.r[19].w[0] + 51u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[19].w[0] + 48u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E82A8u | kUnwind; return; } goto L_003E82A8; } }
L_003E845C:
    c.r[7].d[0] = ld8((c.r[19].w[0] + 48u));
    set32(c.r[8], 0u - 2u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], 0u - 255u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 9616u);
    c.r[7].d[0] = c.r[7].d[0] & c.r[8].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[9].d[0];
    st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[19].w[0] + 48u));
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 62u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E84B0u); st8((c.r[19].w[0] + 62u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000D(c, 78u, depth + 1u); else { c.pc = 0x00235698u; return; } if (c.pc != 0x003E84B0u) [[unlikely]] return; }
L_003E84B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E85B4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E84C8u); set32(c.r[4], c.r[4].w[0] + 9616u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x003E84C8u) [[unlikely]] return; }
L_003E84C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 25416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E84DCu); set32(c.r[6], c.r[29].w[0] + 600u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003E84DCu) [[unlikely]] return; }
L_003E84DC:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003E84E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E85BC; } }
L_003E84E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 600u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003E850C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003E8528; } }
L_003E850C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003E8528:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 4996u);
    c.f[21] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8544u); st32((c.r[19].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_000D(c, 78u, depth + 1u); else { c.pc = 0x00235698u; return; } if (c.pc != 0x003E8544u) [[unlikely]] return; }
L_003E8544:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E85D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E855Cu); set32(c.r[4], c.r[4].w[0] + 4996u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x003E855Cu) [[unlikely]] return; }
L_003E855C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 25400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8570u); set32(c.r[6], c.r[29].w[0] + 596u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003E8570u) [[unlikely]] return; }
L_003E8570:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003E8574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E8580; } }
    c.f[21] = ld32((c.r[29].w[0] + 596u));
    c.budget -= 1;
L_003E8580:
    st32((c.r[19].w[0] + 32u), 0u);
    set32(c.r[4], 0u + 60u);
    st32((c.r[19].w[0] + 36u), 0u);
    set32(c.r[2], 0u - 2u);
    st32((c.r[19].w[0] + 40u), c.f[21]);
    c.r[3].d[0] = 0ull & 1ull;
    st32((c.r[19].w[0] + 44u), c.f[20]);
    st8((c.r[19].w[0] + 60u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[19].w[0] + 48u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E82A8u | kUnwind; return; } goto L_003E82A8; } }
L_003E85B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E84E0u | kUnwind; return; } goto L_003E84E0; } }
L_003E85BC:
    set32(c.r[2], ld32((c.r[29].w[0] + 600u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0] + 600u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E84E8u | kUnwind; return; } goto L_003E84E8; } }
L_003E85D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8574u | kUnwind; return; } goto L_003E8574; } }
L_003E85D8:
    c.r[8].d[0] = ld8((c.r[19].w[0] + 48u));
    set32(c.r[6], 0u - 2u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], 0u - 255u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[19].w[0] + 48u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8614u); st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0079(c, 224u, depth + 1u); else { c.pc = 0x003E70D0u; return; } if (c.pc != 0x003E8614u) [[unlikely]] return; }
L_003E8614:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[19].w[0] + 55u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8628u); set32(c.r[5], c.r[5].w[0] + 5036u);  if (depth < kMaxDepth) unit_000D(c, 78u, depth + 1u); else { c.pc = 0x00235698u; return; } if (c.pc != 0x003E8628u) [[unlikely]] return; }
L_003E8628:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E86E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8640u); set32(c.r[4], c.r[4].w[0] + 5036u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x003E8640u) [[unlikely]] return; }
L_003E8640:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 25416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8654u); set32(c.r[6], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003E8654u) [[unlikely]] return; }
L_003E8654:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003E8658:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E86E8; } }
L_003E8660:
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003E8668:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8678u); set32(c.r[5], c.r[5].w[0] + 5054u);  if (depth < kMaxDepth) unit_000D(c, 78u, depth + 1u); else { c.pc = 0x00235698u; return; } if (c.pc != 0x003E8678u) [[unlikely]] return; }
L_003E8678:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E86FC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8698u); set32(c.r[4], c.r[4].w[0] + 5054u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x003E8698u) [[unlikely]] return; }
L_003E8698:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] + 25392u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E86B0u); set32(c.r[6], c.r[29].w[0] + 588u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003E86B0u) [[unlikely]] return; }
L_003E86B0:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_003E86B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E8708; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 588u)));
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[29].w[0] + 588u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 51u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8668u | kUnwind; return; } goto L_003E8668; } }
L_003E86E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8658u | kUnwind; return; } goto L_003E8658; } }
L_003E86E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 592u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0] + 592u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8660u | kUnwind; return; } goto L_003E8660; } }
L_003E86FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E86B8u | kUnwind; return; } goto L_003E86B8; } }
    c.budget -= 1;
L_003E8708:
    st8((c.r[19].w[0] + 50u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[4].d[0] = ld8((c.r[19].w[0] + 48u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E82A8u | kUnwind; return; } goto L_003E82A8; } }
L_003E8728:
    c.r[8].d[0] = ld8((c.r[19].w[0] + 48u));
    set32(c.r[6], 0u - 2u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], 0u - 255u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 5138u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[19].w[0] + 48u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8768u); st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000D(c, 78u, depth + 1u); else { c.pc = 0x00235698u; return; } if (c.pc != 0x003E8768u) [[unlikely]] return; }
L_003E8768:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E881C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8780u); set32(c.r[4], c.r[4].w[0] + 5138u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x003E8780u) [[unlikely]] return; }
L_003E8780:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 25416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8794u); set32(c.r[6], c.r[29].w[0] + 584u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003E8794u) [[unlikely]] return; }
L_003E8794:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003E8798:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E8824; } }
L_003E87A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 584u)));
    c.budget -= 1;
L_003E87A4:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003E8868; } }
L_003E87B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 584u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 5155u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E87C8u); st8((c.r[19].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000D(c, 78u, depth + 1u); else { c.pc = 0x00235698u; return; } if (c.pc != 0x003E87C8u) [[unlikely]] return; }
L_003E87C8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E8874; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E87E0u); set32(c.r[4], c.r[4].w[0] + 5155u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x003E87E0u) [[unlikely]] return; }
L_003E87E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 25416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E87F4u); set32(c.r[6], c.r[29].w[0] + 580u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003E87F4u) [[unlikely]] return; }
L_003E87F4:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003E87F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E887C; } }
L_003E8800:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 48u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E82A8u | kUnwind; return; } goto L_003E82A8; } }
L_003E881C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8798u | kUnwind; return; } goto L_003E8798; } }
L_003E8824:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8834u); set32(c.r[5], c.r[5].w[0] + 5173u);  if (depth < kMaxDepth) unit_000D(c, 78u, depth + 1u); else { c.pc = 0x00235698u; return; } if (c.pc != 0x003E8834u) [[unlikely]] return; }
L_003E8834:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E87A0u | kUnwind; return; } goto L_003E87A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E884Cu); set32(c.r[4], c.r[4].w[0] + 5173u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x003E884Cu) [[unlikely]] return; }
L_003E884C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 25416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8860u); set32(c.r[6], c.r[29].w[0] + 584u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003E8860u) [[unlikely]] return; }
L_003E8860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 584u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E87A4u | kUnwind; return; } goto L_003E87A4; } }
L_003E8868:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 584u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E87B0u | kUnwind; return; } goto L_003E87B0; } }
L_003E8874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E87F8u | kUnwind; return; } goto L_003E87F8; } }
L_003E887C:
    set32(c.r[2], ld32((c.r[29].w[0] + 580u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0] + 580u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8800u | kUnwind; return; } goto L_003E8800; } }
L_003E8890:
    c.r[8].d[0] = ld8((c.r[19].w[0] + 48u));
    set32(c.r[6], 0u - 2u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], 0u - 255u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(6ll);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 5016u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[19].w[0] + 48u));
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E88D0u); st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000D(c, 78u, depth + 1u); else { c.pc = 0x00235698u; return; } if (c.pc != 0x003E88D0u) [[unlikely]] return; }
L_003E88D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E88FC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E88E8u); set32(c.r[4], c.r[4].w[0] + 5016u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x003E88E8u) [[unlikely]] return; }
L_003E88E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 25416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E88FCu); set32(c.r[6], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003E88FCu) [[unlikely]] return; }
L_003E88FC:
    set32(c.r[2], ld32((c.r[29].w[0] + 576u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 5027u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0] + 576u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E891Cu); st8((c.r[19].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000D(c, 78u, depth + 1u); else { c.pc = 0x00235698u; return; } if (c.pc != 0x003E891Cu) [[unlikely]] return; }
L_003E891C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E8990; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8934u); set32(c.r[4], c.r[4].w[0] + 5027u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x003E8934u) [[unlikely]] return; }
L_003E8934:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 25416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8948u); set32(c.r[6], c.r[29].w[0] + 572u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003E8948u) [[unlikely]] return; }
L_003E8948:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003E894C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E8970; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 572u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[29].w[0] + 572u), c.r[3].w[0]);
    st8((c.r[19].w[0] + 50u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 51u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003E8974; } }
L_003E8970:
    st8((c.r[19].w[0] + 51u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003E8974:
    c.r[4].d[0] = ld8((c.r[19].w[0] + 48u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E82A8u | kUnwind; return; } goto L_003E82A8; } }
L_003E8990:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E894Cu | kUnwind; return; } goto L_003E894C; } }
L_003E8998:
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    c.budget -= 1;
L_003E899C:
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[19].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 28u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8354u | kUnwind; return; } goto L_003E8354; } }
L_003E89B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
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
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 608u);  c.pc = t; return; }
L_003E89F0:
    set32(c.r[29], c.r[29].w[0] - 1120u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[7], c.r[7].w[0] + 8288u);
    set32(c.r[6], c.r[29].w[0]);
    set32(c.r[5], 0u + 140u);
    c.budget -= 5;
L_003E8A04:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8A04u | kUnwind; return; } goto L_003E8A04; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[29].w[0]);
    c.budget -= 3;
L_003E8A30:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003E8A4C; } }
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));  if (t) { goto L_003E8A60; } }
L_003E8A4C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(140ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8A30u | kUnwind; return; } goto L_003E8A30; } }
    c.budget -= 1;
L_003E8A60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1120u);  c.pc = t; return; }
L_003E8A70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[5].w[0] + 16u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003E8AE4; } }
    set32(c.r[18], c.r[3].w[0] - c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8AB0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003E8AB0u) [[unlikely]] return; }
L_003E8AB0:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], 0u + 16u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st32((c.r[17].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_003E8ADC; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[5], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8ADCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E8ADCu) [[unlikely]] return; }
L_003E8ADC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003E8B00; } }
L_003E8AE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8AF0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003E8AF0u) [[unlikely]] return; }
L_003E8AF0:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8ADCu | kUnwind; return; } goto L_003E8ADC; } }
L_003E8B00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E8B20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 80u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003E8B8C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E8B54; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E8B54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xC9740000u);  if (t) { goto L_003E8BA8; } }
L_003E8B54:
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 1388u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E8B80; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 1396u)));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E8B80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[3].w[0] + 36u));  if (t) { goto L_003E8B84; } }
L_003E8B80:
    c.f[0] = ld32((c.r[3].w[0] + 508u));
    c.budget -= 1;
L_003E8B84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003E8BB4; } }
L_003E8B8C:
    set32(c.r[4], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8BA0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E8BA0u) [[unlikely]] return; }
L_003E8BA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 4u));  if (t) { goto L_003E8BB0; } }
L_003E8BA8:
    c.r[2].d[0] = c.r[2].d[0] | 9216ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 2;
L_003E8BB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003E8BB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E8BC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 16u);  c.pc = t; return; }
L_003E8BD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 80u));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E8C44; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003E8C14; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003E8C14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));  if (t) { goto L_003E8C80; } }
L_003E8C14:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.f[0] = ld32((c.r[3].w[0] + 104u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_003E8CAC; } }
L_003E8C44:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E8C5Cu) [[unlikely]] return; }
L_003E8C5C:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_003E8CAC; } }
L_003E8C80:
    c.f[0] = ld32((c.r[3].w[0] + 104u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.budget -= 11;
L_003E8CAC:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E8D40; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1388u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E8CDC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1396u)));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
L_003E8CDC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E8D40; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 526u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E8D40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8D00u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x003E8D00u) [[unlikely]] return; }
L_003E8D00:
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[3] = ld32((c.r[28].w[0] - 31648u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8D24u); c.f[12] = ld32((c.r[16].w[0] + 16u));  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003E8D24u) [[unlikely]] return; }
L_003E8D24:
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[3] = ld32((c.r[28].w[0] - 31648u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 7;
L_003E8D40:
    c.f[3] = ld32((c.r[17].w[0] + 64u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 68u));
    c.f[1] = ld32((c.r[17].w[0] + 72u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E8D90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8DB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E8DB8u) [[unlikely]] return; }
L_003E8DB8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E8EE8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8DD4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E8DD4u) [[unlikely]] return; }
L_003E8DD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E8E60; } }
    st32((c.r[16].w[0] + 52u), c.r[17].w[0]);
    set32(c.r[5], 0u + 1u);
    st8((c.r[16].w[0] + 80u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003E8E30; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003E8E14; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_003E8E14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 84u)));  if (t) { goto L_003E8E38; } }
L_003E8E14:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8E28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E8E28u) [[unlikely]] return; }
L_003E8E28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_003E8E34; } }
L_003E8E30:
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 1;
L_003E8E34:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_003E8E38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[6].d[0] = c.r[3].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F170000u);
    c.r[4].d[0] = c.r[3].d[0] | 2621ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 96u)));
    st32((c.r[3].w[0] + 32u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 96u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[4].w[0]);  if (t) { goto L_003E8EE0; } }
L_003E8E60:
    st32((c.r[16].w[0] + 52u), c.r[17].w[0]);
    set32(c.r[5], 0u + 2u);
    st8((c.r[16].w[0] + 80u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003E8EB4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_003E8E98; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003E8E98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 84u)));  if (t) { goto L_003E8EBC; } }
L_003E8E98:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8EACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E8EACu) [[unlikely]] return; }
L_003E8EAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_003E8EB8; } }
L_003E8EB4:
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 1;
L_003E8EB8:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_003E8EBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[6].d[0] = c.r[3].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F170000u);
    c.r[4].d[0] = c.r[3].d[0] | 2621ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 96u)));
    st32((c.r[3].w[0] + 32u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 96u)));
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    c.budget -= 9;
L_003E8EE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003E8F6C; } }
L_003E8EE8:
    st32((c.r[16].w[0] + 52u), c.r[17].w[0]);
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 80u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003E8F3C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003E8F20; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003E8F20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 84u)));  if (t) { goto L_003E8F44; } }
L_003E8F20:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8F34u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E8F34u) [[unlikely]] return; }
L_003E8F34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_003E8F40; } }
L_003E8F3C:
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 1;
L_003E8F40:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_003E8F44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[6].d[0] = c.r[3].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F170000u);
    c.r[4].d[0] = c.r[3].d[0] | 2621ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 96u)));
    st32((c.r[3].w[0] + 32u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 96u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 36u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8EE0u | kUnwind; return; } goto L_003E8EE0; } }
L_003E8F6C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E8F80:
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
    c.budget -= 11;
L_003E8FAC:
    c.r[3].d[0] = c.r[20].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[16].w[0] + 340u)));
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[22], c.r[16].w[0] + 340u);  if (t) { goto L_003E9040; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003E90DC; } }
    c.budget -= 1;
L_003E8FD8:
    c.r[3].d[0] = c.r[20].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.r[1].d[0] = c.r[5].sd[0] < 85ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[22].w[0]), 0u);  if (t) { goto L_003E9028; } }
L_003E8FF0:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + 340u);
    set32(c.r[3], ld32((c.r[3].w[0] + 340u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_003E9110; } }
    c.budget -= 1;
L_003E9010:
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[5].sd[0] < 85ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8FF0u | kUnwind; return; } goto L_003E8FF0; } }
    c.budget -= 1;
L_003E9028:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003E9040; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9038u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 6u, depth + 1u); else { c.pc = 0x002A80A0u; return; } if (c.pc != 0x003E9038u) [[unlikely]] return; }
L_003E9038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9040u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E9040u) [[unlikely]] return; }
L_003E9040:
    set32(c.r[19], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003E90C0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003E9118; } }
    c.budget -= 1;
L_003E9060:
    c.r[3].d[0] = c.r[20].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.r[1].d[0] = c.r[5].sd[0] < 85ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_003E90A8; } }
L_003E9078:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_003E9150; } }
L_003E9090:
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[5].sd[0] < 85ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9078u | kUnwind; return; } goto L_003E9078; } }
    c.budget -= 1;
L_003E90A8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003E90C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E90B8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 6u, depth + 1u); else { c.pc = 0x002A80A0u; return; } if (c.pc != 0x003E90B8u) [[unlikely]] return; }
L_003E90B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E90C0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E90C0u) [[unlikely]] return; }
L_003E90C0:
    set32(c.r[3], c.r[20].w[0] + 1u);
    c.r[20].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[20].sd[0] < 85ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8FACu | kUnwind; return; } goto L_003E8FAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E9158; } }
L_003E90DC:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E90E0:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E90F0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003E90F0u) [[unlikely]] return; }
L_003E90F0:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E90E0u | kUnwind; return; } goto L_003E90E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8FD8u | kUnwind; return; } goto L_003E8FD8; } }
    c.budget -= 1;
L_003E9110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9010u | kUnwind; return; } goto L_003E9010; } }
L_003E9118:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003E9120:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9130u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003E9130u) [[unlikely]] return; }
L_003E9130:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9120u | kUnwind; return; } goto L_003E9120; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9060u | kUnwind; return; } goto L_003E9060; } }
    c.budget -= 1;
L_003E9150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9090u | kUnwind; return; } goto L_003E9090; } }
L_003E9158:
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
L_003E9180:
    set32(c.r[29], c.r[29].w[0] - 2112u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[4], c.r[29].w[0] + 2048u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E91B8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x003E91B8u) [[unlikely]] return; }
L_003E91B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[29].w[0] + 2076u);
    set32(c.r[3], c.r[3].w[0] - 28448u);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[16].d[0] = ld8((c.r[2].w[0] - 19120u));
    c.budget -= 7;
L_003E91D4:
    c.r[2].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_003E9410; } }
L_003E91E0:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E91D4u | kUnwind; return; } goto L_003E91D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[3].w[0] - 19120u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 19120u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + 16000u);
    set32(c.r[4], c.r[29].w[0] + 1536u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9228u); set32(c.r[5], c.r[5].w[0] + 6448u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x003E9228u) [[unlikely]] return; }
L_003E9228:
    set32(c.r[4], c.r[29].w[0] + 2092u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9234u); set32(c.r[5], c.r[29].w[0] + 1536u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x003E9234u) [[unlikely]] return; }
L_003E9234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E923Cu); set32(c.r[4], c.r[29].w[0] + 2092u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x003E923Cu) [[unlikely]] return; }
L_003E923C:
    set32(c.r[4], c.r[29].w[0] + 2048u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9254u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E9254u) [[unlikely]] return; }
L_003E9254:
    set32(c.r[4], c.r[29].w[0] + 2092u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9260u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003E9260u) [[unlikely]] return; }
L_003E9260:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[22], c.r[29].w[0] + 2056u);
    set32(c.r[16], c.r[29].w[0] + 2068u);
    c.budget -= 3;
L_003E926C:
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[17], c.r[29].w[0] + 1184u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[30].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 340u), 0u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 7;
L_003E9288:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E94A8; } }
L_003E9298:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_003E92A8:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9288u | kUnwind; return; } goto L_003E9288; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 1184u);
    set32(c.r[5], c.r[5].w[0] + 6471u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E92D4u); set32(c.r[6], c.r[29].w[0] + 2108u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003E92D4u) [[unlikely]] return; }
L_003E92D4:
    c.r[4].d[0] = c.r[18].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 20368u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 508u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E9308; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 2108u)));
    set32(c.r[2], c.r[4].w[0] + c.r[29].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 1440u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003E9310; } }
    c.budget -= 1;
L_003E9308:
    set32(c.r[2], c.r[4].w[0] + c.r[29].w[0]);
    st8((c.r[2].w[0] + 1440u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_003E9310:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[18].sd[0] < 85ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E926Cu | kUnwind; return; } goto L_003E926C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 2068u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 2064u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 2108u), 0u);  if (t) { goto L_003E9918; } }
L_003E9334:
    set32(c.r[2], ld32((c.r[29].w[0] + 2108u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 2108u), c.r[2].w[0]);
    c.budget -= 3;
L_003E9340:
    set32(c.r[17], c.r[29].w[0] + 1184u);
    c.budget -= 2;
L_003E9348:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E94D0; } }
L_003E9358:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_003E9368:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9348u | kUnwind; return; } goto L_003E9348; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 1184u)));
    set32(c.r[2], 0u + 123u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9340u | kUnwind; return; } goto L_003E9340; } }
    set32(c.r[2], c.r[29].w[0] + 2060u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
L_003E93A8:
    set32(c.r[19], c.r[29].w[0] + 1184u);
    c.budget -= 2;
L_003E93B0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E94F8; } }
L_003E93C0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_003E93D0:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E93B0u | kUnwind; return; } goto L_003E93B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 1184u)));
    set32(c.r[2], 0u + 125u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E9520; } }
    set32(c.r[2], 0u + 59u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E93A8u | kUnwind; return; } goto L_003E93A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E93A8u | kUnwind; return; } goto L_003E93A8; } }
    c.budget -= 1;
L_003E9410:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st8((c.r[2].w[0] - 19120u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[29].w[0] + 1792u);
    c.r[3].d[0] = ld8((c.r[2].w[0] - 19120u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 16000u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9444u); set32(c.r[5], c.r[5].w[0] + 6448u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x003E9444u) [[unlikely]] return; }
L_003E9444:
    set32(c.r[4], c.r[29].w[0] + 2096u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9450u); set32(c.r[5], c.r[29].w[0] + 1792u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x003E9450u) [[unlikely]] return; }
L_003E9450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9458u); set32(c.r[4], c.r[29].w[0] + 2096u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x003E9458u) [[unlikely]] return; }
L_003E9458:
    set32(c.r[4], c.r[29].w[0] + 2048u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9470u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E9470u) [[unlikely]] return; }
L_003E9470:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 2096u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9480u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003E9480u) [[unlikely]] return; }
L_003E9480:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E91E0u | kUnwind; return; } goto L_003E91E0; } }
    set32(c.r[4], c.r[29].w[0] + 2048u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E949Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E949Cu) [[unlikely]] return; }
L_003E949C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E91E0u | kUnwind; return; } goto L_003E91E0; } }
    c.budget -= 1;
L_003E94A8:
    set32(c.r[4], c.r[29].w[0] + 2048u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E94BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E94BCu) [[unlikely]] return; }
L_003E94BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9298u | kUnwind; return; } goto L_003E9298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E92A8u | kUnwind; return; } goto L_003E92A8; } }
    c.budget -= 1;
L_003E94D0:
    set32(c.r[4], c.r[29].w[0] + 2048u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E94E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E94E4u) [[unlikely]] return; }
L_003E94E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9358u | kUnwind; return; } goto L_003E9358; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9368u | kUnwind; return; } goto L_003E9368; } }
    c.budget -= 1;
L_003E94F8:
    set32(c.r[4], c.r[29].w[0] + 2048u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E950Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E950Cu) [[unlikely]] return; }
L_003E950C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E93C0u | kUnwind; return; } goto L_003E93C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E93D0u | kUnwind; return; } goto L_003E93D0; } }
    c.budget -= 1;
L_003E9520:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003E95F8; } }
L_003E9528:
    set32(c.r[17], c.r[29].w[0] + 1184u);
    c.budget -= 2;
L_003E9530:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E9808; } }
L_003E9540:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_003E9550:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9530u | kUnwind; return; } goto L_003E9530; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 1184u)));
    set32(c.r[2], 0u + 123u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9528u | kUnwind; return; } goto L_003E9528; } }
    set32(c.r[2], c.r[29].w[0] + 2060u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
L_003E9590:
    set32(c.r[18], c.r[29].w[0] + 1184u);
    c.budget -= 2;
L_003E9598:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E9830; } }
L_003E95A8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_003E95B8:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9598u | kUnwind; return; } goto L_003E9598; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 1184u)));
    set32(c.r[2], 0u + 125u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E9858; } }
    set32(c.r[2], 0u + 59u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9590u | kUnwind; return; } goto L_003E9590; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9590u | kUnwind; return; } goto L_003E9590; } }
    c.budget -= 1;
L_003E95F8:
    set32(c.r[2], c.r[29].w[0] + 2060u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[29].w[0] + 2052u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003E9770; } }
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E9770; } }
L_003E9628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9630u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003E9630u) [[unlikely]] return; }
L_003E9630:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_003E9648; } }
    st32((c.r[21].w[0]), 0u);
    st32((c.r[21].w[0] + 4u), 0u);
    c.budget -= 3;
L_003E9648:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9658u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 155u, depth + 1u); else { c.pc = 0x002C5490u; return; } if (c.pc != 0x003E9658u) [[unlikely]] return; }
L_003E9658:
    c.r[20].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003E9660:
    set32(c.r[17], c.r[29].w[0] + 1184u);
    c.budget -= 2;
L_003E9668:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E9790; } }
L_003E9678:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_003E9688:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9668u | kUnwind; return; } goto L_003E9668; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 1184u)));
    set32(c.r[2], 0u + 125u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9528u | kUnwind; return; } goto L_003E9528; } }
    set32(c.r[2], 0u + 59u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9660u | kUnwind; return; } goto L_003E9660; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 1184u);
    set32(c.r[5], c.r[5].w[0] + 6474u);
    set32(c.r[6], c.r[29].w[0] + 928u);
    set32(c.r[7], c.r[29].w[0] + 2104u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E96D8u); st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003E96D8u) [[unlikely]] return; }
L_003E96D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 2104u)));
    set32(c.r[4], c.r[29].w[0] + 928u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E96ECu); set32(c.r[17], c.r[2].w[0] + 1184u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x003E96ECu) [[unlikely]] return; }
L_003E96EC:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], c.r[2].w[0] + 928u);
    set32(c.r[5], c.r[5].w[0] + 6474u);
    set32(c.r[6], c.r[29].w[0] + 672u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E970Cu); set32(c.r[7], c.r[29].w[0] + 2104u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003E970Cu) [[unlikely]] return; }
L_003E970C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003E97B8; } }
L_003E9718:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 6479u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E972Cu); set32(c.r[6], c.r[29].w[0] + 672u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x003E972Cu) [[unlikely]] return; }
L_003E972C:
    set32(c.r[2], ld32((c.r[29].w[0] + 2104u)));
    set32(c.r[4], c.r[29].w[0] + 672u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E973Cu); set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x003E973Cu) [[unlikely]] return; }
L_003E973C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 6474u);
    set32(c.r[6], c.r[29].w[0] + 672u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E975Cu); set32(c.r[7], c.r[29].w[0] + 2104u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003E975Cu) [[unlikely]] return; }
L_003E975C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9718u | kUnwind; return; } goto L_003E9718; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E97B8; } }
L_003E9770:
    set32(c.r[4], c.r[29].w[0] + 2048u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9784u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E9784u) [[unlikely]] return; }
L_003E9784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9628u | kUnwind; return; } goto L_003E9628; } }
    c.budget -= 1;
L_003E9790:
    set32(c.r[4], c.r[29].w[0] + 2048u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E97A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E97A4u) [[unlikely]] return; }
L_003E97A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9678u | kUnwind; return; } goto L_003E9678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9688u | kUnwind; return; } goto L_003E9688; } }
    c.budget -= 1;
L_003E97B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E97C0u); set32(c.r[4], c.r[29].w[0] + 928u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x003E97C0u) [[unlikely]] return; }
L_003E97C0:
    st32((c.r[29].w[0] + 2104u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 2104u)));
    set32(c.r[17], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E97D8u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003E97D8u) [[unlikely]] return; }
L_003E97D8:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[5], c.r[5].w[0] + 6483u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E97F8u); set32(c.r[6], c.r[29].w[0] + 928u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x003E97F8u) [[unlikely]] return; }
L_003E97F8:
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9660u | kUnwind; return; } goto L_003E9660; } }
    c.budget -= 1;
L_003E9808:
    set32(c.r[4], c.r[29].w[0] + 2048u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E981Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E981Cu) [[unlikely]] return; }
L_003E981C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9540u | kUnwind; return; } goto L_003E9540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9550u | kUnwind; return; } goto L_003E9550; } }
    c.budget -= 1;
L_003E9830:
    set32(c.r[4], c.r[29].w[0] + 2048u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9844u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E9844u) [[unlikely]] return; }
L_003E9844:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E95A8u | kUnwind; return; } goto L_003E95A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E95B8u | kUnwind; return; } goto L_003E95B8; } }
    c.budget -= 1;
L_003E9858:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003E993C; } }
L_003E9860:
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003E9868:
    c.r[4].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] + c.r[29].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 2108u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1440u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E9B50; } }
L_003E9880:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[5].sd[0] < 85ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9868u | kUnwind; return; } goto L_003E9868; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003E9900; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_003E98D0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003E9B68; } }
    c.budget -= 1;
L_003E98B8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_003E98D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E98C8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 6u, depth + 1u); else { c.pc = 0x002A80A0u; return; } if (c.pc != 0x003E98C8u) [[unlikely]] return; }
L_003E98C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E98D0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E98D0u) [[unlikely]] return; }
L_003E98D0:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_003E9900; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003E9BA0; } }
L_003E98E8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_003E9900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E98F8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_002A(c, 6u, depth + 1u); else { c.pc = 0x002A80A0u; return; } if (c.pc != 0x003E98F8u) [[unlikely]] return; }
L_003E98F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9900u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E9900u) [[unlikely]] return; }
L_003E9900:
    set32(c.r[2], c.r[29].w[0] + 2064u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9334u | kUnwind; return; } goto L_003E9334; } }
    c.budget -= 1;
L_003E9918:
    set32(c.r[4], c.r[29].w[0] + 2048u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E992Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E992Cu) [[unlikely]] return; }
L_003E992C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E9BD8; } }
L_003E9934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003E9BFC; } }
L_003E993C:
    set32(c.r[2], c.r[29].w[0] + 2060u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[29].w[0] + 2052u);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003E9AB8; } }
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E9AB8; } }
    c.budget -= 1;
L_003E9970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9978u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003E9978u) [[unlikely]] return; }
L_003E9978:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_003E9990; } }
    st32((c.r[20].w[0]), 0u);
    st32((c.r[20].w[0] + 4u), 0u);
    c.budget -= 3;
L_003E9990:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E99A0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0031(c, 155u, depth + 1u); else { c.pc = 0x002C5490u; return; } if (c.pc != 0x003E99A0u) [[unlikely]] return; }
L_003E99A0:
    c.r[23].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003E99A8:
    set32(c.r[17], c.r[29].w[0] + 1184u);
    c.budget -= 2;
L_003E99B0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E9AD8; } }
L_003E99C0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_003E99D0:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E99B0u | kUnwind; return; } goto L_003E99B0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 1184u)));
    set32(c.r[2], 0u + 125u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9860u | kUnwind; return; } goto L_003E9860; } }
    set32(c.r[2], 0u + 59u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E99A8u | kUnwind; return; } goto L_003E99A8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 1184u);
    set32(c.r[5], c.r[5].w[0] + 6474u);
    set32(c.r[6], c.r[29].w[0] + 416u);
    set32(c.r[7], c.r[29].w[0] + 2100u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9A20u); st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003E9A20u) [[unlikely]] return; }
L_003E9A20:
    set32(c.r[2], ld32((c.r[29].w[0] + 2100u)));
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9A34u); set32(c.r[17], c.r[2].w[0] + 1184u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x003E9A34u) [[unlikely]] return; }
L_003E9A34:
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], c.r[2].w[0] + 416u);
    set32(c.r[5], c.r[5].w[0] + 6474u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9A54u); set32(c.r[7], c.r[29].w[0] + 2100u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003E9A54u) [[unlikely]] return; }
L_003E9A54:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003E9B00; } }
L_003E9A60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 6479u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9A74u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x003E9A74u) [[unlikely]] return; }
L_003E9A74:
    set32(c.r[2], ld32((c.r[29].w[0] + 2100u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9A84u); set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x003E9A84u) [[unlikely]] return; }
L_003E9A84:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 6474u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9AA4u); set32(c.r[7], c.r[29].w[0] + 2100u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003E9AA4u) [[unlikely]] return; }
L_003E9AA4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9A60u | kUnwind; return; } goto L_003E9A60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E9B00; } }
L_003E9AB8:
    set32(c.r[4], c.r[29].w[0] + 2048u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9ACCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E9ACCu) [[unlikely]] return; }
L_003E9ACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9970u | kUnwind; return; } goto L_003E9970; } }
    c.budget -= 1;
L_003E9AD8:
    set32(c.r[4], c.r[29].w[0] + 2048u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9AECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E9AECu) [[unlikely]] return; }
L_003E9AEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E99C0u | kUnwind; return; } goto L_003E99C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E99D0u | kUnwind; return; } goto L_003E99D0; } }
    c.budget -= 1;
L_003E9B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9B08u); set32(c.r[4], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x003E9B08u) [[unlikely]] return; }
L_003E9B08:
    st32((c.r[29].w[0] + 2100u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[29].w[0] + 2100u)));
    set32(c.r[17], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9B20u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x003E9B20u) [[unlikely]] return; }
L_003E9B20:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[5], c.r[5].w[0] + 6483u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9B40u); set32(c.r[6], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x003E9B40u) [[unlikely]] return; }
L_003E9B40:
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[23].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E99A8u | kUnwind; return; } goto L_003E99A8; } }
    c.budget -= 1;
L_003E9B50:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[30].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 340u), c.r[20].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[21].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9880u | kUnwind; return; } goto L_003E9880; } }
L_003E9B68:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003E9B70:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9B80u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003E9B80u) [[unlikely]] return; }
L_003E9B80:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9B70u | kUnwind; return; } goto L_003E9B70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E98B8u | kUnwind; return; } goto L_003E98B8; } }
    c.budget -= 1;
L_003E9BA0:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003E9BA8:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9BB8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003E9BB8u) [[unlikely]] return; }
L_003E9BB8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9BA8u | kUnwind; return; } goto L_003E9BA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E98E8u | kUnwind; return; } goto L_003E98E8; } }
    c.budget -= 1;
L_003E9BD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 28448u);
    set32(c.r[2], c.r[29].w[0] + 2076u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 2048u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9BF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x003E9BF4u) [[unlikely]] return; }
L_003E9BF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9934u | kUnwind; return; } goto L_003E9934; } }
L_003E9BFC:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 2112u);  c.pc = t; return; }
L_003E9C30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 92u), c.r[7].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9C60u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_000F(c, 418u, depth + 1u); else { c.pc = 0x0023FC90u; return; } if (c.pc != 0x003E9C60u) [[unlikely]] return; }
L_003E9C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9C68u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_000F(c, 418u, depth + 1u); else { c.pc = 0x0023FC90u; return; } if (c.pc != 0x003E9C68u) [[unlikely]] return; }
L_003E9C68:
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[19], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[19].w[0] + c.r[17].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 340u)));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003E9CE4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9C90u); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_000F(c, 415u, depth + 1u); else { c.pc = 0x0023FB80u; return; } if (c.pc != 0x003E9C90u) [[unlikely]] return; }
L_003E9C90:
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[29].w[0] + 92u);
    set32(c.r[17], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9CB8u); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_000F(c, 415u, depth + 1u); else { c.pc = 0x0023FB80u; return; } if (c.pc != 0x003E9CB8u) [[unlikely]] return; }
L_003E9CB8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9CDCu); set32(c.r[5], c.r[5].w[0] + 6486u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x003E9CDCu) [[unlikely]] return; }
L_003E9CDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003E9D38; } }
L_003E9CE4:
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E9D20; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9D00u); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_000F(c, 415u, depth + 1u); else { c.pc = 0x0023FB80u; return; } if (c.pc != 0x003E9D00u) [[unlikely]] return; }
L_003E9D00:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9D18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x003E9D18u) [[unlikely]] return; }
L_003E9D18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9CDCu | kUnwind; return; } goto L_003E9CDC; } }
L_003E9D20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9D30u); set32(c.r[5], c.r[5].w[0] + 6492u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x003E9D30u) [[unlikely]] return; }
L_003E9D30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9CDCu | kUnwind; return; } goto L_003E9CDC; } }
L_003E9D38:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003E9D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E9D80; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003E9D80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9D80u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003E9D80u) [[unlikely]] return; }
L_003E9D80:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E9DA0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 480u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E9DE8; } }
    c.r[8].d[0] = c.r[3].d[0] & 255ull;
    c.r[1].d[0] = 0ll < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_003E9DE8; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    set32(c.r[5], 0u - 5u);
    c.budget -= 2;
L_003E9DC4:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E9DF0; } }
L_003E9DD0:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9DC4u | kUnwind; return; } goto L_003E9DC4; } }
    c.budget -= 1;
L_003E9DE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E9E08; } }
L_003E9DF0:
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 526u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9DD0u | kUnwind; return; } goto L_003E9DD0; } }
L_003E9E08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E9E10:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 480u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003E9F58; } }
    c.r[17].d[0] = c.r[3].d[0] & 255ull;
    c.r[1].d[0] = 0ll < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003E9F58; } }
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E9E50:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 526u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[20], ld32((c.r[18].w[0])));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 526u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E9F48; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 1416u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003E9F48; } }
L_003E9E90:
    set32(c.r[3], ld32((c.r[20].w[0] + 1408u)));
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[29].w[0] + 124u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 1400u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 531u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E9ED0; } }
    c.r[3].d[0] = c.r[6].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E9F30; } }
    c.budget -= 1;
L_003E9ED0:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 526u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E9F30; } }
    c.f[3] = ld32((c.r[20].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[2] = ld32((c.r[6].w[0] + 36u));
    c.f[1] = ld32((c.r[20].w[0] + 1448u));
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = c.f[2] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003E9F30; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 20368u);
    set32(c.r[7], c.r[29].w[0] + 124u);
    set32(c.r[8], c.r[20].w[0] + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9F2Cu); set32(c.r[9], c.r[6].w[0] + 32u);  if (depth < kMaxDepth) unit_0039(c, 169u, depth + 1u); else { c.pc = 0x002E6B50u; return; } if (c.pc != 0x003E9F2Cu) [[unlikely]] return; }
L_003E9F2C:
    c.budget -= 1;
L_003E9F30:
    set32(c.r[3], ld32((c.r[20].w[0] + 1416u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9E90u | kUnwind; return; } goto L_003E9E90; } }
    c.budget -= 1;
L_003E9F48:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[3].d[0] = c.r[21].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9E50u | kUnwind; return; } goto L_003E9E50; } }
L_003E9F58:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 480u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EA0B8; } }
    c.r[6].d[0] = c.r[3].d[0] & 255ull;
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003EA0B8; } }
    c.r[1].d[0] = c.r[6].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[6].w[0] - 8u);  if (t) { goto L_003EA070; } }
    c.r[1].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003E9FA4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[6].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003E9FA4; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003E9FA4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EA070; } }
    c.r[4].d[0] = 0ull & 1ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], 0u - 5u);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 4;
L_003E9FBC:
    set32(c.r[11], ld32((c.r[7].w[0])));
    set32(c.r[8], c.r[8].w[0] + 8u);
    c.r[9].d[0] = c.r[8].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[10].d[0] = ld8((c.r[11].w[0] + 526u));
    c.r[10].d[0] = c.r[10].d[0] & c.r[3].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[4].d[0];
    st8((c.r[11].w[0] + 526u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[11], ld32((c.r[7].w[0] + 8u)));
    c.r[10].d[0] = ld8((c.r[11].w[0] + 526u));
    c.r[10].d[0] = c.r[10].d[0] & c.r[3].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[4].d[0];
    st8((c.r[11].w[0] + 526u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[11], ld32((c.r[7].w[0] + 16u)));
    c.r[10].d[0] = ld8((c.r[11].w[0] + 526u));
    c.r[10].d[0] = c.r[10].d[0] & c.r[3].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[4].d[0];
    st8((c.r[11].w[0] + 526u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[11], ld32((c.r[7].w[0] + 24u)));
    c.r[10].d[0] = ld8((c.r[11].w[0] + 526u));
    c.r[10].d[0] = c.r[10].d[0] & c.r[3].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[4].d[0];
    st8((c.r[11].w[0] + 526u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[11], ld32((c.r[7].w[0] + 32u)));
    c.r[10].d[0] = ld8((c.r[11].w[0] + 526u));
    c.r[10].d[0] = c.r[10].d[0] & c.r[3].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[4].d[0];
    st8((c.r[11].w[0] + 526u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[11], ld32((c.r[7].w[0] + 40u)));
    c.r[10].d[0] = ld8((c.r[11].w[0] + 526u));
    c.r[10].d[0] = c.r[10].d[0] & c.r[3].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[4].d[0];
    st8((c.r[11].w[0] + 526u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[11], ld32((c.r[7].w[0] + 48u)));
    c.r[10].d[0] = ld8((c.r[11].w[0] + 526u));
    c.r[10].d[0] = c.r[10].d[0] & c.r[3].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[4].d[0];
    st8((c.r[11].w[0] + 526u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[11], ld32((c.r[7].w[0] + 56u)));
    c.r[10].d[0] = ld8((c.r[11].w[0] + 526u));
    set32(c.r[7], c.r[7].w[0] + 64u);
    c.r[10].d[0] = c.r[10].d[0] & c.r[3].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[4].d[0];
    c.budget -= 44;
    { const bool t = c.r[9].d[0] != 0ull; st8((c.r[11].w[0] + 526u), static_cast<std::uint8_t>(c.r[10].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9FBCu | kUnwind; return; } goto L_003E9FBC; } }
    c.budget -= 1;
L_003EA070:
    c.r[1].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003EA0B8; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[5], 0u - 5u);
    set32(c.r[10], c.r[16].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[7], c.r[3].w[0] << 2);
    c.budget -= 5;
L_003EA090:
    set32(c.r[9], ld32((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = ld8((c.r[9].w[0] + 526u));
    set32(c.r[10], c.r[10].w[0] + 8u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[9].w[0] + 526u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA090u | kUnwind; return; } goto L_003EA090; } }
    c.budget -= 1;
L_003EA0B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003EA0E0:
    c.r[7].d[0] = ld8((c.r[5].w[0] + 531u));
    set32(c.r[3], 0u - 2u);
    c.r[6].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    st8((c.r[5].w[0] + 531u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 480u));
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003EA178; } }
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_003EA10C:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003EA168; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 480u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 480u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 480u));
    c.r[1].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003EA178; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_003EA13C:
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 12u));
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 480u));
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA13Cu | kUnwind; return; } goto L_003EA13C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EA178; } }
L_003EA168:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA10Cu | kUnwind; return; } goto L_003EA10C; } }
L_003EA178:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EA180:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 480u));
    set32(c.r[3], 0u - 2u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[8], c.r[7].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] << 3);
    st8((c.r[4].w[0] + 480u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 531u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0] + 531u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003EA1C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 480u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003EA1D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003EA200; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003EA200; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA200u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003EA200u) [[unlikely]] return; }
L_003EA200:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EA220:
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 3;
    { c.r[5].d[0] = c.r[6].d[0] + 0ull;  [[clang::musttail]] return unit_007F(c, 183u, depth); }
L_003EA230:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EA240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA254u); set32(c.r[5], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_007F(c, 181u, depth + 1u); else { c.pc = 0x003FDB50u; return; } if (c.pc != 0x003EA254u) [[unlikely]] return; }
L_003EA254:
    c.f[0] = ld32((c.r[29].w[0] + 28u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42650000u);
    c.r[2].d[0] = c.r[2].d[0] | 12000ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 28u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EA280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA29Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_007F(c, 182u, depth + 1u); else { c.pc = 0x003FDBD0u; return; } if (c.pc != 0x003EA29Cu) [[unlikely]] return; }
L_003EA29C:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EA2D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 22900u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EA68C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 28548u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EA558; } }
L_003EA2FC:
    c.f[12] = ld32((c.r[28].w[0] - 31644u));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA30Cu); set32(c.r[16], c.r[16].w[0] + 3324u);  if (depth < kMaxDepth) unit_000B(c, 76u, depth + 1u); else { c.pc = 0x0022DAB8u; return; } if (c.pc != 0x003EA30Cu) [[unlikely]] return; }
L_003EA30C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42650000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[2].d[0] | 12000ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].d[0] = ld8((c.r[28].w[0] - 32268u));
    c.f[2] = c.r[4].w[0];
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_003EA65C; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003EA65C; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 32u));
    c.budget -= 1;
L_003EA344:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 52;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EA368; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 4;
L_003EA368:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EA664; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003EA664; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 32u));
    c.budget -= 1;
L_003EA388:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 53;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EA3B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 5;
L_003EA3B0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EA66C; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003EA66C; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 42u));
    c.budget -= 1;
L_003EA3D0:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EA3EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);  if (t) { goto L_003EA4D4; } }
L_003EA3EC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EA674; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003EA674; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 42u));
    c.budget -= 1;
L_003EA40C:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EA428; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);  if (t) { goto L_003EA4D4; } }
L_003EA428:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EA67C; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003EA67C; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 32u));
    c.budget -= 1;
L_003EA448:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EA480; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003EA4D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = 0u;
    c.f[1] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[2]);  if (t) { goto L_003EA4D4; } }
L_003EA480:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EA684; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003EA684; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 32u));
    c.budget -= 1;
L_003EA4A0:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EA4D4; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003EA4D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = 0u;
    c.f[1] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.f[3] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[2]);
    c.budget -= 6;
L_003EA4D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EA4F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[20];  if (t) { goto L_003EA51C; } }
L_003EA4F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[20] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EA514; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EA518; } }
L_003EA514:
    c.f[20] = c.f[3];
    c.budget -= 1;
L_003EA518:
    c.f[12] = c.f[20];
    c.budget -= 1;
L_003EA51C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA524u);  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x003EA524u) [[unlikely]] return; }
L_003EA524:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 16336u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA53Cu); set32(c.r[5], c.r[5].w[0] + 6704u);  if (depth < kMaxDepth) unit_0054(c, 121u, depth + 1u); else { c.pc = 0x00351EE0u; return; } if (c.pc != 0x003EA53Cu) [[unlikely]] return; }
L_003EA53C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C8E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 64053ull;
    c.f[0] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA550u); c.f[12] = fp::ee::mul(c.fcr31, c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x003EA550u) [[unlikely]] return; }
L_003EA550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 31644u), c.f[0]);  if (t) { goto L_003EA68C; } }
L_003EA558:
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] - 16204u), c.r[3].w[0]);
    c.r[14].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u + 127u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st8((c.r[2].w[0] - 16196u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st8((c.r[3].w[0] - 16195u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] - 16194u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x47800000u);
    st8((c.r[2].w[0] - 16193u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[13], c.r[14].w[0] << 2);
    st32((c.r[2].w[0] - 16184u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[4].w[0] - 16200u), c.r[5].w[0]);
    set32(c.r[2], 0u + 30u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[15].d[0] = ld8((c.r[4].w[0] - 16168u));
    set32(c.r[12], 0u - 5u);
    c.r[10].d[0] = ld16((c.r[28].w[0] - 32632u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 2u);
    c.r[4].d[0] = c.r[15].d[0] & c.r[4].d[0];
    st32((c.r[7].w[0] - 16176u), c.r[10].w[0]);
    c.r[14].d[0] = c.r[4].d[0] | c.r[14].d[0];
    set32(c.r[10], 0u - 3u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st8((c.r[6].w[0] - 16168u), static_cast<std::uint8_t>(c.r[14].w[0]));
    st32((c.r[4].w[0] - 16192u), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43D70000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] - 16188u), c.r[6].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] - 16172u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 16336u);
    c.r[2].d[0] = ld8((c.r[5].w[0] - 16168u));
    set32(c.r[6], c.r[6].w[0] - 16360u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[12].d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[13].d[0];
    set32(c.r[5], c.r[5].w[0] - 208u);
    st8((c.r[9].w[0] - 16168u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[8].w[0] - 16168u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[11].d[0];
    c.budget -= 62;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA650u); st8((c.r[7].w[0] - 16168u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0002(c, 198u, depth + 1u); else { c.pc = 0x0020B6D0u; return; } if (c.pc != 0x003EA650u) [[unlikely]] return; }
L_003EA650:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 28548u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA2FCu | kUnwind; return; } goto L_003EA2FC; } }
L_003EA65C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA344u | kUnwind; return; } goto L_003EA344; } }
L_003EA664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA388u | kUnwind; return; } goto L_003EA388; } }
L_003EA66C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA3D0u | kUnwind; return; } goto L_003EA3D0; } }
L_003EA674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA40Cu | kUnwind; return; } goto L_003EA40C; } }
L_003EA67C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA448u | kUnwind; return; } goto L_003EA448; } }
L_003EA684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA4A0u | kUnwind; return; } goto L_003EA4A0; } }
L_003EA68C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EA6A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA6C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EA6C4u) [[unlikely]] return; }
L_003EA6C4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 81u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EA7CC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    st32((c.r[29].w[0] + 44u), c.f[0]);
    c.budget -= 9;
L_003EA6F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22903u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EA72C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA718u); set32(c.r[5], c.r[29].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EA718u) [[unlikely]] return; }
L_003EA718:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA72Cu); set32(c.r[5], c.r[29].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EA72Cu) [[unlikely]] return; }
L_003EA72C:
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA740u); set32(c.r[5], c.r[29].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EA740u) [[unlikely]] return; }
L_003EA740:
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[2].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[2].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[2].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[16].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    st32((c.r[16].w[0] + 124u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA790u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_007A(c, 87u, depth + 1u); else { c.pc = 0x003E8BC0u; return; } if (c.pc != 0x003EA790u) [[unlikely]] return; }
L_003EA790:
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[16].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[16].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA7B4u); st32((c.r[16].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_007A(c, 244u, depth + 1u); else { c.pc = 0x003EA2D0u; return; } if (c.pc != 0x003EA7B4u) [[unlikely]] return; }
L_003EA7B4:
    c.r[4].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[3], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003EA7F0; } }
L_003EA7C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003EA800; } }
L_003EA7CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA7E8u); set32(c.r[5], c.r[2].w[0] + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EA7E8u) [[unlikely]] return; }
L_003EA7E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA6F4u | kUnwind; return; } goto L_003EA6F4; } }
L_003EA7F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA7F8u); set32(c.r[4], ld32((c.r[16].w[0] + 92u)));  if (depth < kMaxDepth) unit_006F(c, 192u, depth + 1u); else { c.pc = 0x003BE980u; return; } if (c.pc != 0x003EA7F8u) [[unlikely]] return; }
L_003EA7F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA7C4u | kUnwind; return; } goto L_003EA7C4; } }
L_003EA800:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EA810:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[11] = ld32((c.r[29].w[0] + 124u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29239u));
    c.f[20] = ld32((c.r[29].w[0] + 108u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003EA85C; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29240u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003EA85C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EA9FC; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 56u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EA938; } }
    c.f[4] = ld32((c.r[18].w[0] + 60u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.f[2] = ld32((c.r[18].w[0] + 64u));
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.f[10] = ld32((c.r[5].w[0]));
    c.f[8] = ld32((c.r[5].w[0] + 4u));
    c.f[6] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = c.r[2].w[0];
    c.f[3] = 0u;
    c.f[9] = fp::ee::mul(c.fcr31, c.f[4], c.f[2]);
    st32((c.r[18].w[0] + 60u), c.f[9]);
    c.f[7] = ld32((c.r[18].w[0] + 76u));
    c.f[5] = ld32((c.r[18].w[0] + 16u));
    c.f[4] = ld32((c.r[18].w[0] + 20u));
    c.f[2] = ld32((c.r[18].w[0] + 24u));
    c.f[13] = fp::ee::mul(c.fcr31, c.f[9], c.f[7]);
    c.f[9] = fp::ee::sub(c.fcr31, c.f[5], c.f[10]);
    c.f[7] = fp::ee::sub(c.fcr31, c.f[4], c.f[8]);
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[7]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[2], c.f[6]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[9]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 26;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EAA44; } }
    c.f[13] = c.f[3];
    c.budget -= 1;
L_003EA8DC:
    c.f[1] = ld32((c.r[28].w[0] - 31636u));
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EA964; } }
    c.f[3] = ld32((c.r[5].w[0]));
    st8((c.r[18].w[0] + 56u), static_cast<std::uint8_t>(0u));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[2], 0u + 1u);
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[17].w[0]), c.f[3]);
    st32((c.r[17].w[0] + 4u), c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[1]);
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[18].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[18].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 28u), c.f[0]);  if (t) { goto L_003EAB2C; } }
L_003EA938:
    c.f[6] = ld32((c.r[18].w[0] + 72u));
    c.f[5] = ld32((c.r[18].w[0] + 144u));
    c.f[4] = ld32((c.r[5].w[0]));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.f[12] = fp::ee::add(c.fcr31, c.f[6], c.f[5]);
    st32((c.r[17].w[0]), c.f[4]);
    st32((c.r[17].w[0] + 4u), c.f[3]);
    st32((c.r[17].w[0] + 8u), c.f[2]);
    st32((c.r[17].w[0] + 12u), c.f[1]);
    c.budget -= 11;
L_003EA964:
    c.f[2] = ld32((c.r[18].w[0] + 144u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EAAB0; } }
L_003EA980:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 56u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = c.r[3].w[0];
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[1] = ld32((c.r[2].w[0] - 20412u));
    c.f[2] = ld32((c.r[18].w[0] + 48u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0] + 48u), c.f[1]);  if (t) { goto L_003EAB24; } }
L_003EA9AC:
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[18].w[0] + 160u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[18].w[0] + 164u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[18].w[0] + 168u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[18].w[0] + 172u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[18].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[18].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[18].w[0] + 184u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[18].w[0] + 188u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_003EAB2C; } }
L_003EA9FC:
    c.f[0] = ld32((c.r[18].w[0] + 160u));
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 164u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 168u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 172u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 176u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 180u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 184u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 188u));
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_003EAB2C; } }
L_003EAA44:
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = fp::ee::div(c.fcr31, c.f[13], c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[7], c.f[4]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[8], c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[5], c.f[4]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[6], c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[9], c.f[4]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[10], c.f[1]);
    st32((c.r[17].w[0]), c.f[1]);
    st32((c.r[17].w[0] + 4u), c.f[3]);
    st32((c.r[17].w[0] + 8u), c.f[2]);
    st32((c.r[17].w[0] + 12u), c.f[11]);
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = c.r[2].w[0];
    st32((c.r[18].w[0] + 16u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[18].w[0] + 20u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[18].w[0] + 24u), c.f[2]);
    c.f[2] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[18].w[0] + 28u), c.f[2]);
    c.f[2] = ld32((c.r[18].w[0] + 60u));
    c.budget -= 27;
    { const bool t = 0ull == 0ull; c.f[12] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA8DCu | kUnwind; return; } goto L_003EA8DC; } }
L_003EAAB0:
    c.f[1] = ld32((c.r[5].w[0]));
    set32(c.r[4], c.r[18].w[0] + 96u);
    c.f[2] = ld32((c.r[16].w[0]));
    c.f[6] = ld32((c.r[16].w[0] + 4u));
    c.f[5] = ld32((c.r[5].w[0] + 4u));
    c.f[4] = ld32((c.r[16].w[0] + 8u));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    st32((c.r[18].w[0] + 112u), c.f[1]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[18].w[0] + 116u), c.f[5]);
    st32((c.r[18].w[0] + 120u), c.f[3]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAAECu); st32((c.r[18].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_0075(c, 80u, depth + 1u); else { c.pc = 0x003D55B0u; return; } if (c.pc != 0x003EAAECu) [[unlikely]] return; }
L_003EAAEC:
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 128u));
    c.f[5] = ld32((c.r[17].w[0] + 4u));
    c.f[4] = ld32((c.r[18].w[0] + 132u));
    c.f[3] = ld32((c.r[17].w[0] + 8u));
    c.f[2] = ld32((c.r[18].w[0] + 136u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[5], c.f[4]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[3], c.f[2]);
    st32((c.r[16].w[0] + 4u), c.f[4]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[20]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA980u | kUnwind; return; } goto L_003EA980; } }
L_003EAB24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA9ACu | kUnwind; return; } goto L_003EA9AC; } }
L_003EAB2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003EAB50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[9], 0u + 1u);
    c.f[15] = ld32((c.r[5].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.f[14] = ld32((c.r[5].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[11] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.f[7] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[4].w[0] + 16u), c.f[15]);
    st32((c.r[4].w[0] + 20u), c.f[14]);
    st32((c.r[4].w[0] + 24u), c.f[11]);
    st32((c.r[4].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[4].w[0] + 48u), 0u);
    c.f[9] = fp::ee::sub(c.fcr31, c.f[1], c.f[14]);
    st8((c.r[4].w[0] + 56u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.f[7] = fp::ee::sub(c.fcr31, c.f[7], c.f[15]);
    c.f[8] = fp::ee::sub(c.fcr31, c.f[0], c.f[11]);
    st32((c.r[4].w[0] + 52u), c.f[12]);
    st32((c.r[4].w[0] + 96u), c.f[7]);
    st32((c.r[4].w[0] + 100u), c.f[9]);
    c.f[6] = ld32((c.r[29].w[0] + 28u));
    st32((c.r[4].w[0] + 104u), c.f[8]);
    c.f[5] = ld32((c.r[8].w[0] + 4u));
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.f[4] = ld32((c.r[8].w[0]));
    c.f[2] = ld32((c.r[8].w[0] + 8u));
    st32((c.r[4].w[0] + 108u), c.f[6]);
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.f[3] = ld32((c.r[29].w[0] + 12u));
    c.f[6] = fp::ee::sub(c.fcr31, c.f[5], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[14]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[11]);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[29].w[0] + 40u), c.f[1]);
    c.f[2] = c.r[3].w[0];
    c.f[10] = 0u;
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[15]);
    st32((c.r[4].w[0] + 112u), c.f[4]);
    st32((c.r[4].w[0] + 116u), c.f[6]);
    st32((c.r[4].w[0] + 120u), c.f[5]);
    st32((c.r[4].w[0] + 124u), c.f[3]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    st32((c.r[4].w[0] + 144u), 0u);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = ld32((c.r[28].w[0] - 32272u));
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[13], c.f[1]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[4].w[0] + 72u), c.f[1]);
    st32((c.r[4].w[0] + 76u), c.f[0]);
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 76u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[10]));
    c.budget -= 63;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EAD88; } }
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[10]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EAD70; } }
L_003EAC5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[2] = ld32((c.r[3].w[0] - 20412u));
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = ld32((c.r[4].w[0] + 76u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EACA0; } }
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 64u), c.f[0]);  if (t) { goto L_003EACB8; } }
L_003EACA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.budget -= 6;
L_003EACB8:
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 72u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EAD7C; } }
L_003EACD8:
    c.f[2] = ld32((c.r[4].w[0] + 76u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[8].d[0] = c.r[3].d[0] | 55050ull;
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[8].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.f[3] = ld32((c.r[28].w[0] - 31640u));
    c.f[1] = c.r[7].w[0];
    c.f[2] = fp::ee::div(c.fcr31, c.f[4], c.f[2]);
    st32((c.r[4].w[0] + 68u), c.f[2]);
    c.f[2] = ld32((c.r[4].w[0] + 76u));
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::ee::div(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 18;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 64u), c.f[1]);  if (t) { goto L_003EAD24; } }
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.budget -= 1;
L_003EAD24:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull; st32((c.r[4].w[0] + 80u), 0u);  if (t) { goto L_003EADA4; } }
L_003EAD2C:
    c.f[5] = ld32((c.r[5].w[0]));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    st32((c.r[4].w[0] + 160u), c.f[5]);
    st32((c.r[4].w[0] + 164u), c.f[4]);
    st32((c.r[4].w[0] + 168u), c.f[3]);
    st32((c.r[4].w[0] + 172u), c.f[2]);
    st32((c.r[4].w[0] + 176u), c.f[1]);
    st32((c.r[4].w[0] + 180u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[4].w[0] + 184u), c.f[1]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 188u), c.f[0]);  if (t) { goto L_003EADB0; } }
L_003EAD70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EAC5Cu | kUnwind; return; } goto L_003EAC5C; } }
L_003EAD7C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 64u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EACD8u | kUnwind; return; } goto L_003EACD8; } }
L_003EAD88:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[7].d[0] = c.r[7].d[0] | 52429ull;
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[4].w[0] + 64u), c.r[7].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 68u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EAD24u | kUnwind; return; } goto L_003EAD24; } }
L_003EADA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 144u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EAD2Cu | kUnwind; return; } goto L_003EAD2C; } }
L_003EADB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EADC0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29239u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003EADF0; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29240u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003EADF0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EB3C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 3552u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EAEAC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAE1Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EAE1Cu) [[unlikely]] return; }
L_003EAE1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAE24u); set32(c.r[4], ld32((c.r[18].w[0] + 88u)));  if (depth < kMaxDepth) unit_007A(c, 87u, depth + 1u); else { c.pc = 0x003E8BC0u; return; } if (c.pc != 0x003EAE24u) [[unlikely]] return; }
L_003EAE24:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[16], c.r[29].w[0] + 104u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[29].w[0] + 108u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAE64u); set32(c.r[5], c.r[2].w[0] + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EAE64u) [[unlikely]] return; }
L_003EAE64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[4], c.r[4].w[0] - 3552u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAE7Cu); set32(c.r[7], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_007A(c, 268u, depth + 1u); else { c.pc = 0x003EA810u; return; } if (c.pc != 0x003EAE7Cu) [[unlikely]] return; }
L_003EAE7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EAF04; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[2].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[2].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[2].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), c.f[0]);  if (t) { goto L_003EAF04; } }
L_003EAEAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAEB4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_007A(c, 257u, depth + 1u); else { c.pc = 0x003EA6A0u; return; } if (c.pc != 0x003EAEB4u) [[unlikely]] return; }
L_003EAEB4:
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 28u));
    st32((c.r[29].w[0] + 124u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAEE0u); set32(c.r[4], ld32((c.r[18].w[0] + 88u)));  if (depth < kMaxDepth) unit_007A(c, 87u, depth + 1u); else { c.pc = 0x003E8BC0u; return; } if (c.pc != 0x003EAEE0u) [[unlikely]] return; }
L_003EAEE0:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[16], c.r[29].w[0] + 104u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[29].w[0] + 108u), c.f[0]);
    c.budget -= 9;
L_003EAF04:
    st8((c.r[18].w[0] + 176u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    st8((c.r[18].w[0] + 177u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 63898ull;
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = c.r[2].w[0];
    c.f[20] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EB26C; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EAF40; } }
    st32((c.r[29].w[0] + 112u), c.f[1]);
    c.budget -= 1;
L_003EAF40:
    set32(c.r[17], c.r[29].w[0] + 120u);
    c.f[1] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EB274; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 63898ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EAF74; } }
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 1;
L_003EAF74:
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EB290; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 63898ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EAFA4; } }
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.budget -= 1;
L_003EAFA4:
    c.f[1] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EB2AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 63898ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EAFD4; } }
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 1;
L_003EAFD4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAFE4u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_006F(c, 21u, depth + 1u); else { c.pc = 0x003BC3F0u; return; } if (c.pc != 0x003EAFE4u) [[unlikely]] return; }
L_003EAFE4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAFF4u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_006F(c, 49u, depth + 1u); else { c.pc = 0x003BCD00u; return; } if (c.pc != 0x003EAFF4u) [[unlikely]] return; }
L_003EAFF4:
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EB2C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 63898ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EB024; } }
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.budget -= 1;
L_003EB024:
    c.f[1] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EB2E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 63898ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EB054; } }
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 1;
L_003EB054:
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EB300; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 63898ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EB084; } }
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.budget -= 1;
L_003EB084:
    c.f[1] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EB31C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 63898ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EB0B4; } }
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 1;
L_003EB0B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22896u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EB3A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[2].w[0] + 3324u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EB234; } }
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[4].d[0] = c.r[4].d[0] | 52429ull;
    c.f[1] = c.r[4].w[0];
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EB338; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003EB338; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 32u));
    c.budget -= 1;
L_003EB100:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 53;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EB11C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.budget -= 2;
L_003EB11C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EB340; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003EB340; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 32u));
    c.budget -= 1;
L_003EB13C:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 52;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EB15C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[1] = c.r[3].w[0];
    c.budget -= 3;
L_003EB15C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EB348; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003EB348; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 32u));
    c.budget -= 1;
L_003EB17C:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EB350; } }
L_003EB190:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EB360; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_003EB360; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 32u));
    c.budget -= 1;
L_003EB1B0:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 54;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003EB368; } }
L_003EB1C4:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EB378; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003EB378; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 42u));
    c.budget -= 1;
L_003EB1E4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003EB380; } }
L_003EB1F8:
    c.f[1] = ld32((c.r[18].w[0] + 100u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x428C0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EB39C; } }
L_003EB214:
    c.f[1] = ld32((c.r[18].w[0] + 100u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EB234; } }
    st32((c.r[18].w[0] + 100u), c.f[0]);
    c.budget -= 1;
L_003EB234:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB244u); set32(c.r[4], c.r[4].w[0] - 1808u);  if (depth < kMaxDepth) unit_0012(c, 51u, depth + 1u); else { c.pc = 0x00248EF0u; return; } if (c.pc != 0x003EB244u) [[unlikely]] return; }
L_003EB244:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB254u); set32(c.r[4], c.r[4].w[0] - 1808u);  if (depth < kMaxDepth) unit_0012(c, 52u, depth + 1u); else { c.pc = 0x00248F30u; return; } if (c.pc != 0x003EB254u) [[unlikely]] return; }
L_003EB254:
    c.f[12] = ld32((c.r[18].w[0] + 100u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB264u); set32(c.r[4], c.r[4].w[0] - 1808u);  if (depth < kMaxDepth) unit_0012(c, 44u, depth + 1u); else { c.pc = 0x00248E50u; return; } if (c.pc != 0x003EB264u) [[unlikely]] return; }
L_003EB264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003EB3C4; } }
L_003EB26C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 112u), c.f[20]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EAF40u | kUnwind; return; } goto L_003EAF40; } }
L_003EB274:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 63898ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EAF74u | kUnwind; return; } goto L_003EAF74; } }
L_003EB290:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 63898ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 96u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EAFA4u | kUnwind; return; } goto L_003EAFA4; } }
L_003EB2AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 63898ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EAFD4u | kUnwind; return; } goto L_003EAFD4; } }
L_003EB2C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 63898ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 96u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB024u | kUnwind; return; } goto L_003EB024; } }
L_003EB2E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 63898ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB054u | kUnwind; return; } goto L_003EB054; } }
L_003EB300:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 63898ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 112u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB084u | kUnwind; return; } goto L_003EB084; } }
L_003EB31C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x439F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 63898ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB0B4u | kUnwind; return; } goto L_003EB0B4; } }
L_003EB338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB100u | kUnwind; return; } goto L_003EB100; } }
L_003EB340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB13Cu | kUnwind; return; } goto L_003EB13C; } }
L_003EB348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB17Cu | kUnwind; return; } goto L_003EB17C; } }
L_003EB350:
    c.f[0] = ld32((c.r[18].w[0] + 100u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB190u | kUnwind; return; } goto L_003EB190; } }
L_003EB360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB1B0u | kUnwind; return; } goto L_003EB1B0; } }
L_003EB368:
    c.f[0] = ld32((c.r[18].w[0] + 100u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB1C4u | kUnwind; return; } goto L_003EB1C4; } }
L_003EB378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB1E4u | kUnwind; return; } goto L_003EB1E4; } }
L_003EB380:
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB394u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EB394u) [[unlikely]] return; }
L_003EB394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB1F8u | kUnwind; return; } goto L_003EB1F8; } }
L_003EB39C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB214u | kUnwind; return; } goto L_003EB214; } }
L_003EB3A4:
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB3B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EB3B8u) [[unlikely]] return; }
L_003EB3B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB234u | kUnwind; return; } goto L_003EB234; } }
L_003EB3C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003EB3C4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003EB3E0:
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[6] = ld32((c.r[6].w[0] + 4u));
    c.f[3] = ld32((c.r[7].w[0]));
    c.f[7] = ld32((c.r[6].w[0]));
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.f[4] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = c.r[3].w[0];
    c.f[5] = fp::ee::sub(c.fcr31, c.f[2], c.f[6]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[7]);
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[5]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[5], c.f[0]);
    c.budget -= 20;
    { const bool t = c.r[8].d[0] == 0ull; c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);  if (t) { goto L_003EB44C; } }
    c.f[2] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[7], c.f[3]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[6], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.f[2]);  if (t) { goto L_003EB464; } }
L_003EB44C:
    c.f[2] = fp::ee::sub(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[7], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[6], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[2]);
    c.budget -= 6;
L_003EB464:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EB470:
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[12] = ld32((c.r[4].w[0] + 36u));
    set32(c.r[2], ld32((c.r[28].w[0] - 29752u)));
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[3], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.r[3].w[0] >> 4);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[6], c.f[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] >> 4);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 25;
    { set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DC50u | kUnwind; return; } [[clang::musttail]] return unit_004F(c, 87u, depth); }
L_003EB4E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[7], 0u + 1u);
    c.f[7] = ld32((c.r[5].w[0] + 4u));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[3] = ld32((c.r[4].w[0] + 20u));
    set32(c.r[3], c.r[29].w[0] + 36u);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    set32(c.r[2], c.r[29].w[0] + 40u);
    c.f[6] = ld32((c.r[5].w[0] + 8u));
    c.r[8].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.f[8] = ld32((c.r[5].w[0]));
    c.f[5] = ld32((c.r[4].w[0] + 16u));
    c.f[3] = fp::ee::add(c.fcr31, c.f[7], c.f[3]);
    st32((c.r[29].w[0] + 44u), c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[3].w[0]), c.f[3]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[6], c.f[1]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[8], c.f[5]);
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[12] = ld32((c.r[4].w[0] + 32u));
    st32((c.r[2].w[0]), c.f[3]);
    c.f[4] = ld32((c.r[6].w[0] + 8u));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[5]);
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.f[3] = ld32((c.r[29].w[0] + 40u));
    set32(c.r[6], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    st32((c.r[29].w[0] + 32u), c.f[5]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB570u); st32((c.r[29].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 216u, depth + 1u); else { c.pc = 0x002EA5A0u; return; } if (c.pc != 0x003EB570u) [[unlikely]] return; }
L_003EB570:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EB580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[9] = ld32((c.r[5].w[0] + 4u));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[8] = ld32((c.r[6].w[0] + 4u));
    set32(c.r[3], c.r[29].w[0] + 36u);
    c.f[11] = ld32((c.r[5].w[0]));
    set32(c.r[7], 0u + 1u);
    c.f[10] = ld32((c.r[6].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    c.f[6] = ld32((c.r[6].w[0] + 8u));
    c.f[7] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[9], c.f[8]);
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[11], c.f[10]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[7], c.f[6]);
    st32((c.r[29].w[0] + 44u), c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[12] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 40u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[5], c.f[2]);
    c.f[5] = fp::ee::add(c.fcr31, c.f[10], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[4], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[8], c.f[1]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[6], c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.f[2] = ld32((c.r[4].w[0] + 16u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[9], c.f[1]);
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.f[0] = fp::ee::add(c.fcr31, c.f[7], c.f[0]);
    st32((c.r[3].w[0]), c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[11], c.f[2]);
    st32((c.r[29].w[0] + 32u), c.f[2]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[5], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[4], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 16u), c.f[2]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.budget -= 52;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB650u); st32((c.r[29].w[0] + 24u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 216u, depth + 1u); else { c.pc = 0x002EA5A0u; return; } if (c.pc != 0x003EB650u) [[unlikely]] return; }
L_003EB650:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EB660:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[8] = ld32((c.r[5].w[0] + 4u));
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[7] = ld32((c.r[6].w[0] + 4u));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[11] = ld32((c.r[5].w[0]));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[10] = ld32((c.r[6].w[0]));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.f[4] = ld32((c.r[6].w[0] + 8u));
    set32(c.r[3], c.r[29].w[0] + 132u);
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[7], c.r[29].w[0] + 96u);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[8], c.f[7]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[2], c.r[29].w[0] + 136u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.f[9] = fp::ee::sub(c.fcr31, c.f[11], c.f[10]);
    c.facc = fp::ee::mul(c.fcr31, c.f[6], c.f[6]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[9]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[9], c.f[2]);
    c.f[22] = fp::ee::add(c.fcr31, c.f[10], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[6], c.f[2]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.f[23] = fp::ee::add(c.fcr31, c.f[7], c.f[1]);
    c.f[24] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.f[2] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[29].w[0]), c.f[20]);
    c.f[3] = ld32((c.r[5].w[0] + 12u));
    c.f[12] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[8], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[5], c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    st32((c.r[3].w[0]), c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[11], c.f[2]);
    st32((c.r[29].w[0] + 128u), c.f[2]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[22], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[23], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[24], c.f[0]);
    c.f[21] = ld32((c.r[29].w[0] + 156u));
    c.f[20] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[29].w[0] + 140u), c.f[3]);
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.budget -= 64;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB760u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 268u, depth + 1u); else { c.pc = 0x002EB540u; return; } if (c.pc != 0x003EB760u) [[unlikely]] return; }
L_003EB760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EB790; } }
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { goto L_003EB7A4; } }
L_003EB790:
    st32((c.r[16].w[0]), c.f[22]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 4u), c.f[23]);
    st32((c.r[16].w[0] + 8u), c.f[24]);
    st32((c.r[16].w[0] + 12u), c.f[20]);
    c.budget -= 5;
L_003EB7A4:
    c.f[3] = ld32((c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[8] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[6] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[4] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = c.r[3].w[0];
    c.f[7] = fp::ee::sub(c.fcr31, c.f[3], c.f[8]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[2], c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[5]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[7]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[7], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[8], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[5], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[6], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    st32((c.r[16].w[0] + 12u), c.f[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 36;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003EB840:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[8] = ld32((c.r[5].w[0] + 4u));
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[7] = ld32((c.r[6].w[0] + 4u));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[11] = ld32((c.r[5].w[0]));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[10] = ld32((c.r[6].w[0]));
    set32(c.r[3], c.r[29].w[0] + 100u);
    c.f[4] = ld32((c.r[6].w[0] + 8u));
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[8], 0u + 1u);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[8], c.f[7]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[29].w[0] + 104u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.f[9] = fp::ee::sub(c.fcr31, c.f[11], c.f[10]);
    c.facc = fp::ee::mul(c.fcr31, c.f[6], c.f[6]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[9]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[9], c.f[2]);
    c.f[22] = fp::ee::add(c.fcr31, c.f[10], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[6], c.f[2]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.f[23] = fp::ee::add(c.fcr31, c.f[7], c.f[1]);
    c.f[24] = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.f[2] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[29].w[0]), c.f[20]);
    c.f[3] = ld32((c.r[5].w[0] + 12u));
    c.f[12] = ld32((c.r[4].w[0] + 32u));
    c.f[1] = fp::ee::add(c.fcr31, c.f[8], c.f[1]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[5], c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    st32((c.r[3].w[0]), c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    c.f[2] = fp::ee::add(c.fcr31, c.f[11], c.f[2]);
    st32((c.r[29].w[0] + 96u), c.f[2]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[22], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[23], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[24], c.f[0]);
    c.f[21] = ld32((c.r[29].w[0] + 124u));
    c.f[20] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[29].w[0] + 108u), c.f[3]);
    st32((c.r[29].w[0] + 80u), c.f[2]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.budget -= 63;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB93Cu); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 268u, depth + 1u); else { c.pc = 0x002EB540u; return; } if (c.pc != 0x003EB93Cu) [[unlikely]] return; }
L_003EB93C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EB9B4; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003EB948:
    c.f[3] = ld32((c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[8] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[6] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[4] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = c.r[3].w[0];
    c.f[7] = fp::ee::sub(c.fcr31, c.f[3], c.f[8]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[2], c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[5]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[7]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[7], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[8], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[5], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[6], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[21]);  if (t) { goto L_003EB9CC; } }
L_003EB9B4:
    st32((c.r[16].w[0]), c.f[22]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 4u), c.f[23]);
    st32((c.r[16].w[0] + 8u), c.f[24]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[20]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB948u | kUnwind; return; } goto L_003EB948; } }
L_003EB9CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003EBA00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[12] = ld32((c.r[6].w[0] + 4u));
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[14] = ld32((c.r[6].w[0]));
    c.f[11] = ld32((c.r[6].w[0] + 8u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[18] = c.r[2].w[0];
    c.f[8] = fp::ee::sub(c.fcr31, c.f[2], c.f[12]);
    c.f[13] = fp::ee::sub(c.fcr31, c.f[3], c.f[14]);
    c.facc = fp::ee::mul(c.fcr31, c.f[8], c.f[8]);
    c.f[10] = fp::ee::sub(c.fcr31, c.f[1], c.f[11]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[13], c.f[13]);
    c.f[7] = fp::ee::madd(c.fcr31, c.facc, c.f[10], c.f[10]);
    c.f[7] = fp::ee::sqrt(c.fcr31, c.f[7]);
    c.f[9] = fp::ee::div(c.fcr31, c.f[18], c.f[7]);
    c.f[7] = fp::ee::mul(c.fcr31, c.f[13], c.f[9]);
    c.f[8] = fp::ee::mul(c.fcr31, c.f[8], c.f[9]);
    c.f[9] = fp::ee::mul(c.fcr31, c.f[10], c.f[9]);
    c.f[8] = fp::ee::add(c.fcr31, c.f[12], c.f[8]);
    c.f[9] = fp::ee::add(c.fcr31, c.f[11], c.f[9]);
    c.f[7] = fp::ee::add(c.fcr31, c.f[14], c.f[7]);
    c.f[10] = ld32((c.r[7].w[0] + 4u));
    c.f[15] = fp::ee::sub(c.fcr31, c.f[8], c.f[2]);
    c.f[13] = ld32((c.r[7].w[0]));
    c.f[11] = ld32((c.r[7].w[0] + 8u));
    c.f[16] = fp::ee::sub(c.fcr31, c.f[7], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[10], c.f[15]);
    c.f[14] = fp::ee::sub(c.fcr31, c.f[9], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[13], c.f[16]);
    c.f[5] = ld32((c.r[29].w[0] + 28u));
    c.f[17] = ld32((c.r[4].w[0] + 36u));
    c.f[4] = ld32((c.r[29].w[0] + 12u));
    c.f[6] = ld32((c.r[29].w[0] + 44u));
    c.f[0] = 0u;
    c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[11], c.f[14]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 40;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003EBAA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003EBB2C; } }
L_003EBAA8:
    c.f[10] = fp::ee::mul(c.fcr31, c.f[10], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[10]);
    c.f[10] = fp::ee::madd(c.fcr31, c.facc, c.f[13], c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[10]);
    c.f[10] = ld32((c.r[7].w[0] + 12u));
    c.f[11] = fp::ee::madd(c.fcr31, c.facc, c.f[11], c.f[1]);
    c.f[10] = fp::ee::add(c.fcr31, c.f[17], c.f[10]);
    c.f[10] = fp::ee::sub(c.fcr31, c.f[11], c.f[10]);
    fpu_compare(c, fp::key(c.f[10]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EBBA0; } }
    c.f[10] = c.f[10] ^ fp::kSign;
    c.f[10] = fp::ee::div(c.fcr31, c.f[10], c.f[12]);
    fpu_compare(c, fp::key(c.f[10]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003EBBA8; } }
    fpu_compare(c, fp::key(c.f[10]) <= fp::key(c.f[18]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003EBBA8; } }
    c.f[0] = fp::ee::mul(c.fcr31, c.f[16], c.f[10]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = fp::ee::add(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[8].w[0]), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[15], c.f[10]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[14], c.f[10]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[8].w[0] + 4u), c.f[2]);
    st32((c.r[8].w[0] + 8u), c.f[0]);
    st32((c.r[8].w[0] + 12u), c.f[4]);
    c.budget -= 11;
L_003EBB2C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EBBB0; } }
L_003EBB34:
    c.f[3] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[9] = ld32((c.r[8].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[7] = ld32((c.r[8].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[4] = ld32((c.r[8].w[0] + 8u));
    c.f[0] = c.r[3].w[0];
    c.f[8] = fp::ee::sub(c.fcr31, c.f[3], c.f[9]);
    c.f[6] = fp::ee::sub(c.fcr31, c.f[2], c.f[7]);
    c.facc = fp::ee::mul(c.fcr31, c.f[6], c.f[6]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[8], c.f[8]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[8], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[9], c.f[0]);
    st32((c.r[8].w[0]), c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[6], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[7], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[4], c.f[0]);
    st32((c.r[8].w[0] + 4u), c.f[1]);
    st32((c.r[8].w[0] + 8u), c.f[0]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 12u), c.f[5]);  if (t) { goto L_003EBBC8; } }
L_003EBBA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EBB2Cu | kUnwind; return; } goto L_003EBB2C; } }
L_003EBBA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EBB2Cu | kUnwind; return; } goto L_003EBB2C; } }
L_003EBBB0:
    st32((c.r[8].w[0]), c.f[7]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[8].w[0] + 4u), c.f[8]);
    st32((c.r[8].w[0] + 8u), c.f[9]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 12u), c.f[6]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EBB34u | kUnwind; return; } goto L_003EBB34; } }
L_003EBBC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EBBD0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 1320u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EBC00; } }
L_003EBBE4:
    set32(c.r[3], ld32((c.r[4].w[0] + 1332u)));
    st32((c.r[4].w[0] + 1328u), 0u);
    st32((c.r[4].w[0] + 1332u), 0u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EBBE4u | kUnwind; return; } goto L_003EBBE4; } }
L_003EBC00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EBC10:
    set32(c.r[3], ld32((c.r[5].w[0] + 1328u)));
    set32(c.r[6], c.r[5].w[0] + 1324u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], ld32((c.r[5].w[0] + 1332u)));  if (t) { goto L_003EBC44; } }
L_003EBC20:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EBC5C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003EBC70; } }
    st32((c.r[3].w[0] + 1332u), c.r[5].w[0]);
    st32((c.r[5].w[0] + 1328u), c.r[3].w[0]);
    c.budget -= 2;
L_003EBC38:
    st32((c.r[6].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 8u), 0u);  if (t) { goto L_003EBC78; } }
L_003EBC44:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EBC20u | kUnwind; return; } goto L_003EBC20; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 1320u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EBC38u | kUnwind; return; } goto L_003EBC38; } }
L_003EBC5C:
    st32((c.r[5].w[0] + 1328u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 1320u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EBC38u | kUnwind; return; } goto L_003EBC38; } }
L_003EBC70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 1332u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EBC38u | kUnwind; return; } goto L_003EBC38; } }
L_003EBC78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EBC80:
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 1332u)));
    st32((c.r[4].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[5].w[0] + 1332u), c.r[3].w[0]);  if (t) { goto L_003EBCA0; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[6].w[0] + 1328u), c.r[3].w[0]);
    c.budget -= 2;
L_003EBCA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EBCB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003EBD24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 3456u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003EBD0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 2848u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003EBD0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003EBD0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_003EBD0C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003EBD24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBD24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003EBD24u) [[unlikely]] return; }
L_003EBD24:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EBD40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EBD50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[12], c.r[2].w[0] << 2);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[16], 0u - 2u);
    c.r[25].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[15], 0u - 3u);
    c.r[24].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[14], c.r[14].w[0] - 27952u);
    set32(c.r[13], 0u + 39u);
    set32(c.r[11], 0u - 5u);
    set32(c.r[10], c.r[10].w[0] - 2848u);
    set32(c.r[9], c.r[9].w[0] - 3152u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[25].d[0] = c.r[25].d[0] & c.r[16].d[0];
    c.r[25].d[0] = c.r[25].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[25].w[0]));
    c.r[25].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[15].d[0] = c.r[25].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[24].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[15].w[0]));
    st32((c.r[4].w[0]), c.r[14].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[13].d[0] = c.r[13].d[0] & c.r[16].d[0];
    c.r[3].d[0] = c.r[13].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[11].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0]), c.r[10].w[0]);
    st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0]), c.r[9].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 73u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 68u), c.r[6].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 54;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EBE30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003EBE94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 2848u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003EBE7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 27952u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003EBE7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_003EBE7C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003EBE94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBE94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003EBE94u) [[unlikely]] return; }
L_003EBE94:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EBEB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EBEC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EBED0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = 0ull & 1ull;
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[12], c.r[2].w[0] << 2);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[16], 0u - 2u);
    c.r[25].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[15], 0u - 3u);
    c.r[24].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[14], c.r[14].w[0] - 27952u);
    set32(c.r[13], 0u + 37u);
    set32(c.r[11], 0u - 5u);
    set32(c.r[10], c.r[10].w[0] - 2848u);
    set32(c.r[9], c.r[9].w[0] - 3456u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[25].d[0] = c.r[25].d[0] & c.r[16].d[0];
    c.r[25].d[0] = c.r[25].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[25].w[0]));
    c.r[25].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[15].d[0] = c.r[25].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[24].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[15].w[0]));
    st32((c.r[4].w[0]), c.r[14].w[0]);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[13].d[0] = c.r[13].d[0] & c.r[16].d[0];
    c.r[3].d[0] = c.r[13].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 25u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[11].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0]), c.r[10].w[0]);
    st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0]), c.r[9].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[7].w[0]);
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 84u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 76u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 56;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EBFB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBFD0u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x003EBFD0u) [[unlikely]] return; }
L_003EBFD0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBFDCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 298u, depth + 1u); else { c.pc = 0x004B2CA0u; return; } if (c.pc != 0x003EBFDCu) [[unlikely]] return; }
L_003EBFDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EBFF0:
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 8u);
    c.budget -= 2;
L_003EBFF8:
    c.r[7].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[9].d[0];  if (t) { [[clang::musttail]] return unit_007B(c, 4u, depth); } }
    [[clang::musttail]] return unit_007B(c, 2u, depth);
}

}

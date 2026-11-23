#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_001A[4096] = {
    1, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 11,
    0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0,
    0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0,
    0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 33,
    0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0,
    0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53,
    0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 58,
    0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 66,
    0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0,
    75, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90,
    0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0,
    0, 99, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155,
    0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 162,
    0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 184, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0,
    188, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0,
    0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 203,
    0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 210, 0,
    0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0,
    0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 227,
    0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0,
    0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0,
    0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245,
    0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256,
    0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0,
    0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 267, 0, 0,
    0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0,
    0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0,
    0, 282, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0,
    0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0,
    0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0,
    303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0,
    0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0,
    0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 329, 0, 0, 330, 0, 0, 331, 0, 0, 0,
    0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 338, 339, 0, 0,
    0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 348,
    0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0,
    0, 357, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0,
    0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0,
    371, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 375, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 378, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0,
    394, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0,
    402, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0,
    0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    419, 0, 420, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0,
    0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 435,
    0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0,
    0, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 451,
    0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0,
    0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0,
};

void unit_001A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00268000;
    case 2u: goto L_00268004;
    case 3u: goto L_0026800C;
    case 4u: goto L_00268030;
    case 5u: goto L_00268038;
    case 6u: goto L_00268058;
    case 7u: goto L_00268088;
    case 8u: goto L_002680B8;
    case 9u: goto L_002680E4;
    case 10u: goto L_002680EC;
    case 11u: goto L_002680FC;
    case 12u: goto L_00268114;
    case 13u: goto L_00268124;
    case 14u: goto L_00268130;
    case 15u: goto L_00268144;
    case 16u: goto L_00268150;
    case 17u: goto L_00268164;
    case 18u: goto L_00268170;
    case 19u: goto L_00268184;
    case 20u: goto L_00268190;
    case 21u: goto L_002681B0;
    case 22u: goto L_002681E0;
    case 23u: goto L_002681F8;
    case 24u: goto L_0026821C;
    case 25u: goto L_00268240;
    case 26u: goto L_00268248;
    case 27u: goto L_00268284;
    case 28u: goto L_002682B0;
    case 29u: goto L_002682B8;
    case 30u: goto L_002682C8;
    case 31u: goto L_002682E0;
    case 32u: goto L_002682F0;
    case 33u: goto L_002682FC;
    case 34u: goto L_00268310;
    case 35u: goto L_0026831C;
    case 36u: goto L_0026833C;
    case 37u: goto L_00268360;
    case 38u: goto L_002683C0;
    case 39u: goto L_002683E4;
    case 40u: goto L_00268408;
    case 41u: goto L_00268410;
    case 42u: goto L_00268454;
    case 43u: goto L_0026849C;
    case 44u: goto L_002684CC;
    case 45u: goto L_002684FC;
    case 46u: goto L_0026852C;
    case 47u: goto L_0026855C;
    case 48u: goto L_0026858C;
    case 49u: goto L_002685B8;
    case 50u: goto L_002685C0;
    case 51u: goto L_002685D0;
    case 52u: goto L_002685EC;
    case 53u: goto L_002685FC;
    case 54u: goto L_00268610;
    case 55u: goto L_00268620;
    case 56u: goto L_00268660;
    case 57u: goto L_00268670;
    case 58u: goto L_0026867C;
    case 59u: goto L_00268690;
    case 60u: goto L_0026869C;
    case 61u: goto L_002686B0;
    case 62u: goto L_002686BC;
    case 63u: goto L_002686D0;
    case 64u: goto L_002686DC;
    case 65u: goto L_002686F0;
    case 66u: goto L_002686FC;
    case 67u: goto L_00268710;
    case 68u: goto L_0026871C;
    case 69u: goto L_00268730;
    case 70u: goto L_0026873C;
    case 71u: goto L_0026875C;
    case 72u: goto L_002687A0;
    case 73u: goto L_002687B8;
    case 74u: goto L_002687DC;
    case 75u: goto L_00268800;
    case 76u: goto L_00268808;
    case 77u: goto L_00268814;
    case 78u: goto L_00268830;
    case 79u: goto L_0026883C;
    case 80u: goto L_00268854;
    case 81u: goto L_0026886C;
    case 82u: goto L_002688E4;
    case 83u: goto L_00268968;
    case 84u: goto L_00268998;
    case 85u: goto L_002689D0;
    case 86u: goto L_002689E8;
    case 87u: goto L_00268A18;
    case 88u: goto L_00268A3C;
    case 89u: goto L_00268A64;
    case 90u: goto L_00268A7C;
    case 91u: goto L_00268AA0;
    case 92u: goto L_00268AC4;
    case 93u: goto L_00268ACC;
    case 94u: goto L_00268AEC;
    case 95u: goto L_00268B20;
    case 96u: goto L_00268B4C;
    case 97u: goto L_00268B54;
    case 98u: goto L_00268B6C;
    case 99u: goto L_00268B84;
    case 100u: goto L_00268B94;
    case 101u: goto L_00268BA0;
    case 102u: goto L_00268BB4;
    case 103u: goto L_00268BC0;
    case 104u: goto L_00268BD4;
    case 105u: goto L_00268BE0;
    case 106u: goto L_00268C00;
    case 107u: goto L_00268C34;
    case 108u: goto L_00268C60;
    case 109u: goto L_00268CAC;
    case 110u: goto L_00268CD0;
    case 111u: goto L_00268CF4;
    case 112u: goto L_00268CFC;
    case 113u: goto L_00268D20;
    case 114u: goto L_00268D7C;
    case 115u: goto L_00268DAC;
    case 116u: goto L_00268DE0;
    case 117u: goto L_00268E08;
    case 118u: goto L_00268E30;
    case 119u: goto L_00268E68;
    case 120u: goto L_00268EC4;
    case 121u: goto L_00268EE8;
    case 122u: goto L_00268FA8;
    case 123u: goto L_00269008;
    case 124u: goto L_00269068;
    case 125u: goto L_00269134;
    case 126u: goto L_00269150;
    case 127u: goto L_002691EC;
    case 128u: goto L_00269200;
    case 129u: goto L_00269218;
    case 130u: goto L_00269230;
    case 131u: goto L_002692CC;
    case 132u: goto L_00269584;
    case 133u: goto L_00269604;
    case 134u: goto L_00269654;
    case 135u: goto L_0026981C;
    case 136u: goto L_00269A24;
    case 137u: goto L_00269B50;
    case 138u: goto L_00269BA0;
    case 139u: goto L_00269BB0;
    case 140u: goto L_00269BBC;
    case 141u: goto L_00269BD0;
    case 142u: goto L_00269BE0;
    case 143u: goto L_00269BEC;
    case 144u: goto L_00269C24;
    case 145u: goto L_00269C48;
    case 146u: goto L_00269C6C;
    case 147u: goto L_00269C90;
    case 148u: goto L_00269C98;
    case 149u: goto L_00269CC8;
    case 150u: goto L_00269CF8;
    case 151u: goto L_00269D38;
    case 152u: goto L_00269D40;
    case 153u: goto L_00269D50;
    case 154u: goto L_00269D6C;
    case 155u: goto L_00269D7C;
    case 156u: goto L_00269D90;
    case 157u: goto L_00269DA0;
    case 158u: goto L_00269DB0;
    case 159u: goto L_00269DC4;
    case 160u: goto L_00269DD8;
    case 161u: goto L_00269DEC;
    case 162u: goto L_00269DFC;
    case 163u: goto L_00269E08;
    case 164u: goto L_00269E1C;
    case 165u: goto L_00269E28;
    case 166u: goto L_00269E3C;
    case 167u: goto L_00269E48;
    case 168u: goto L_00269E68;
    case 169u: goto L_00269EA0;
    case 170u: goto L_00269ED4;
    case 171u: goto L_00269EF8;
    case 172u: goto L_00269F1C;
    case 173u: goto L_00269F24;
    case 174u: goto L_00269F2C;
    case 175u: goto L_00269F40;
    case 176u: goto L_00269F70;
    case 177u: goto L_00269FA0;
    case 178u: goto L_00269FE4;
    case 179u: goto L_0026A024;
    case 180u: goto L_0026A02C;
    case 181u: goto L_0026A03C;
    case 182u: goto L_0026A058;
    case 183u: goto L_0026A068;
    case 184u: goto L_0026A074;
    case 185u: goto L_0026A0D0;
    case 186u: goto L_0026A0E0;
    case 187u: goto L_0026A0EC;
    case 188u: goto L_0026A100;
    case 189u: goto L_0026A10C;
    case 190u: goto L_0026A120;
    case 191u: goto L_0026A12C;
    case 192u: goto L_0026A140;
    case 193u: goto L_0026A14C;
    case 194u: goto L_0026A16C;
    case 195u: goto L_0026A1A0;
    case 196u: goto L_0026A1C4;
    case 197u: goto L_0026A1E8;
    case 198u: goto L_0026A20C;
    case 199u: goto L_0026A214;
    case 200u: goto L_0026A238;
    case 201u: goto L_0026A264;
    case 202u: goto L_0026A26C;
    case 203u: goto L_0026A27C;
    case 204u: goto L_0026A298;
    case 205u: goto L_0026A2A8;
    case 206u: goto L_0026A2BC;
    case 207u: goto L_0026A2CC;
    case 208u: goto L_0026A2D8;
    case 209u: goto L_0026A2EC;
    case 210u: goto L_0026A2F8;
    case 211u: goto L_0026A318;
    case 212u: goto L_0026A340;
    case 213u: goto L_0026A368;
    case 214u: goto L_0026A38C;
    case 215u: goto L_0026A3B0;
    case 216u: goto L_0026A3B8;
    case 217u: goto L_0026A3D8;
    case 218u: goto L_0026A408;
    case 219u: goto L_0026A438;
    case 220u: goto L_0026A468;
    case 221u: goto L_0026A494;
    case 222u: goto L_0026A49C;
    case 223u: goto L_0026A4B4;
    case 224u: goto L_0026A4CC;
    case 225u: goto L_0026A4DC;
    case 226u: goto L_0026A4E8;
    case 227u: goto L_0026A4FC;
    case 228u: goto L_0026A508;
    case 229u: goto L_0026A51C;
    case 230u: goto L_0026A528;
    case 231u: goto L_0026A53C;
    case 232u: goto L_0026A548;
    case 233u: goto L_0026A55C;
    case 234u: goto L_0026A568;
    case 235u: goto L_0026A588;
    case 236u: goto L_0026A5C0;
    case 237u: goto L_0026A5D0;
    case 238u: goto L_0026A5F4;
    case 239u: goto L_0026A618;
    case 240u: goto L_0026A620;
    case 241u: goto L_0026A63C;
    case 242u: goto L_0026A644;
    case 243u: goto L_0026A654;
    case 244u: goto L_0026A66C;
    case 245u: goto L_0026A67C;
    case 246u: goto L_0026A688;
    case 247u: goto L_0026A6A8;
    case 248u: goto L_0026A6D0;
    case 249u: goto L_0026A6E0;
    case 250u: goto L_0026A704;
    case 251u: goto L_0026A728;
    case 252u: goto L_0026A730;
    case 253u: goto L_0026A74C;
    case 254u: goto L_0026A754;
    case 255u: goto L_0026A764;
    case 256u: goto L_0026A77C;
    case 257u: goto L_0026A78C;
    case 258u: goto L_0026A798;
    case 259u: goto L_0026A7B8;
    case 260u: goto L_0026A7E0;
    case 261u: goto L_0026A7F0;
    case 262u: goto L_0026A814;
    case 263u: goto L_0026A838;
    case 264u: goto L_0026A840;
    case 265u: goto L_0026A85C;
    case 266u: goto L_0026A864;
    case 267u: goto L_0026A874;
    case 268u: goto L_0026A88C;
    case 269u: goto L_0026A89C;
    case 270u: goto L_0026A8A8;
    case 271u: goto L_0026A8C8;
    case 272u: goto L_0026A8F0;
    case 273u: goto L_0026A91C;
    case 274u: goto L_0026A940;
    case 275u: goto L_0026A964;
    case 276u: goto L_0026A96C;
    case 277u: goto L_0026A98C;
    case 278u: goto L_0026A9B8;
    case 279u: goto L_0026A9C0;
    case 280u: goto L_0026A9D0;
    case 281u: goto L_0026A9F4;
    case 282u: goto L_0026AA04;
    case 283u: goto L_0026AA10;
    case 284u: goto L_0026AA24;
    case 285u: goto L_0026AA30;
    case 286u: goto L_0026AA50;
    case 287u: goto L_0026AA80;
    case 288u: goto L_0026AAA8;
    case 289u: goto L_0026AACC;
    case 290u: goto L_0026AAF0;
    case 291u: goto L_0026AAF8;
    case 292u: goto L_0026AB34;
    case 293u: goto L_0026AB6C;
    case 294u: goto L_0026AB8C;
    case 295u: goto L_0026ABB8;
    case 296u: goto L_0026ABC0;
    case 297u: goto L_0026ABD0;
    case 298u: goto L_0026ABF8;
    case 299u: goto L_0026AC1C;
    case 300u: goto L_0026AC50;
    case 301u: goto L_0026AC60;
    case 302u: goto L_0026AC6C;
    case 303u: goto L_0026AC80;
    case 304u: goto L_0026AC8C;
    case 305u: goto L_0026ACAC;
    case 306u: goto L_0026ACD0;
    case 307u: goto L_0026AD04;
    case 308u: goto L_0026AD28;
    case 309u: goto L_0026AD4C;
    case 310u: goto L_0026AD54;
    case 311u: goto L_0026AD74;
    case 312u: goto L_0026ADA4;
    case 313u: goto L_0026ADD0;
    case 314u: goto L_0026ADD8;
    case 315u: goto L_0026ADE8;
    case 316u: goto L_0026AE0C;
    case 317u: goto L_0026AE1C;
    case 318u: goto L_0026AE28;
    case 319u: goto L_0026AE3C;
    case 320u: goto L_0026AE48;
    case 321u: goto L_0026AE5C;
    case 322u: goto L_0026AE68;
    case 323u: goto L_0026AE88;
    case 324u: goto L_0026AEB0;
    case 325u: goto L_0026AF00;
    case 326u: goto L_0026AF24;
    case 327u: goto L_0026AF48;
    case 328u: goto L_0026AF50;
    case 329u: goto L_0026AF58;
    case 330u: goto L_0026AF64;
    case 331u: goto L_0026AF70;
    case 332u: goto L_0026AF90;
    case 333u: goto L_0026AFD8;
    case 334u: goto L_0026B000;
    case 335u: goto L_0026B0B8;
    case 336u: goto L_0026B0BC;
    case 337u: goto L_0026B0EC;
    case 338u: goto L_0026B0F0;
    case 339u: goto L_0026B0F4;
    case 340u: goto L_0026B114;
    case 341u: goto L_0026B158;
    case 342u: goto L_0026B188;
    case 343u: goto L_0026B1B8;
    case 344u: goto L_0026B1E8;
    case 345u: goto L_0026B218;
    case 346u: goto L_0026B248;
    case 347u: goto L_0026B274;
    case 348u: goto L_0026B27C;
    case 349u: goto L_0026B28C;
    case 350u: goto L_0026B314;
    case 351u: goto L_0026B324;
    case 352u: goto L_0026B330;
    case 353u: goto L_0026B344;
    case 354u: goto L_0026B350;
    case 355u: goto L_0026B364;
    case 356u: goto L_0026B370;
    case 357u: goto L_0026B384;
    case 358u: goto L_0026B390;
    case 359u: goto L_0026B3A4;
    case 360u: goto L_0026B3B0;
    case 361u: goto L_0026B3C4;
    case 362u: goto L_0026B3D0;
    case 363u: goto L_0026B3E4;
    case 364u: goto L_0026B3F0;
    case 365u: goto L_0026B404;
    case 366u: goto L_0026B410;
    case 367u: goto L_0026B430;
    case 368u: goto L_0026B470;
    case 369u: goto L_0026B4B8;
    case 370u: goto L_0026B4DC;
    case 371u: goto L_0026B500;
    case 372u: goto L_0026B508;
    case 373u: goto L_0026B530;
    case 374u: goto L_0026B554;
    case 375u: goto L_0026B608;
    case 376u: goto L_0026B60C;
    case 377u: goto L_0026B63C;
    case 378u: goto L_0026B640;
    case 379u: goto L_0026B644;
    case 380u: goto L_0026B660;
    case 381u: goto L_0026B6A4;
    case 382u: goto L_0026B6D4;
    case 383u: goto L_0026B704;
    case 384u: goto L_0026B734;
    case 385u: goto L_0026B764;
    case 386u: goto L_0026B790;
    case 387u: goto L_0026B798;
    case 388u: goto L_0026B7A8;
    case 389u: goto L_0026B830;
    case 390u: goto L_0026B840;
    case 391u: goto L_0026B84C;
    case 392u: goto L_0026B860;
    case 393u: goto L_0026B86C;
    case 394u: goto L_0026B880;
    case 395u: goto L_0026B88C;
    case 396u: goto L_0026B8A0;
    case 397u: goto L_0026B8AC;
    case 398u: goto L_0026B8C0;
    case 399u: goto L_0026B8CC;
    case 400u: goto L_0026B8E0;
    case 401u: goto L_0026B8EC;
    case 402u: goto L_0026B900;
    case 403u: goto L_0026B90C;
    case 404u: goto L_0026B92C;
    case 405u: goto L_0026B970;
    case 406u: goto L_0026B9A0;
    case 407u: goto L_0026B9C4;
    case 408u: goto L_0026B9E8;
    case 409u: goto L_0026B9F0;
    case 410u: goto L_0026BA34;
    case 411u: goto L_0026BA40;
    case 412u: goto L_0026BA50;
    case 413u: goto L_0026BA78;
    case 414u: goto L_0026BAC4;
    case 415u: goto L_0026BAE8;
    case 416u: goto L_0026BB0C;
    case 417u: goto L_0026BB14;
    case 418u: goto L_0026BB40;
    case 419u: goto L_0026BB80;
    case 420u: goto L_0026BB88;
    case 421u: goto L_0026BB98;
    case 422u: goto L_0026BBA0;
    case 423u: goto L_0026BBC8;
    case 424u: goto L_0026BBDC;
    case 425u: goto L_0026BBF4;
    case 426u: goto L_0026BC18;
    case 427u: goto L_0026BC3C;
    case 428u: goto L_0026BC44;
    case 429u: goto L_0026BC70;
    case 430u: goto L_0026BCB0;
    case 431u: goto L_0026BCB8;
    case 432u: goto L_0026BCC8;
    case 433u: goto L_0026BCE0;
    case 434u: goto L_0026BCF0;
    case 435u: goto L_0026BCFC;
    case 436u: goto L_0026BD10;
    case 437u: goto L_0026BD1C;
    case 438u: goto L_0026BD3C;
    case 439u: goto L_0026BD54;
    case 440u: goto L_0026BD78;
    case 441u: goto L_0026BD9C;
    case 442u: goto L_0026BDA4;
    case 443u: goto L_0026BDD0;
    case 444u: goto L_0026BE10;
    case 445u: goto L_0026BE18;
    case 446u: goto L_0026BE28;
    case 447u: goto L_0026BE40;
    case 448u: goto L_0026BE50;
    case 449u: goto L_0026BE5C;
    case 450u: goto L_0026BE70;
    case 451u: goto L_0026BE7C;
    case 452u: goto L_0026BE9C;
    case 453u: goto L_0026BEB8;
    case 454u: goto L_0026BEC8;
    case 455u: goto L_0026BED4;
    case 456u: goto L_0026BEE8;
    case 457u: goto L_0026BEF4;
    case 458u: goto L_0026BF14;
    case 459u: goto L_0026BF3C;
    case 460u: goto L_0026BF70;
    case 461u: goto L_0026BFC4;
    case 462u: goto L_0026BFE8;
    default: bad_entry(c, 0x00268000u); return;
    }
L_00268000:
    c.budget -= 1;
L_00268004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026800Cu);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0026800Cu) [[unlikely]] return; }
L_0026800C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268030u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00268030u) [[unlikely]] return; }
L_00268030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268038u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00268038u) [[unlikely]] return; }
L_00268038:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_00268108; } }
    set32(c.r[2], 0u + 21u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_00268058:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00268138; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_00268088:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00268158; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_002680B8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00268178; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 8;
L_002680E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002680ECu);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x002680ECu) [[unlikely]] return; }
L_002680EC:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00268198; } }
L_002680FC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_002681C0; } }
L_00268108:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268114u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00268114u) [[unlikely]] return; }
L_00268114:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268124u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00268124u) [[unlikely]] return; }
L_00268124:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268130u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00268130u) [[unlikely]] return; }
L_00268130:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268058u | kUnwind; return; } goto L_00268058; } }
L_00268138:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268144u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00268144u) [[unlikely]] return; }
L_00268144:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268150u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00268150u) [[unlikely]] return; }
L_00268150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268088u | kUnwind; return; } goto L_00268088; } }
L_00268158:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268164u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00268164u) [[unlikely]] return; }
L_00268164:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268170u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00268170u) [[unlikely]] return; }
L_00268170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002680B8u | kUnwind; return; } goto L_002680B8; } }
L_00268178:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268184u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00268184u) [[unlikely]] return; }
L_00268184:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268190u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00268190u) [[unlikely]] return; }
L_00268190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002680E4u | kUnwind; return; } goto L_002680E4; } }
L_00268198:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002681B0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x002681B0u) [[unlikely]] return; }
L_002681B0:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002680FCu | kUnwind; return; } goto L_002680FC; } }
L_002681C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002681E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002681F8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x002681F8u) [[unlikely]] return; }
L_002681F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00268248; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00268248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026821Cu);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0026821Cu) [[unlikely]] return; }
L_0026821C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268240u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00268240u) [[unlikely]] return; }
L_00268240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268248u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00268248u) [[unlikely]] return; }
L_00268248:
    set32(c.r[5], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[28].w[0] - 30400u);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[28].w[0] - 30384u);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[4].w[0]), 0u);  if (t) { goto L_002682D4; } }
    set32(c.r[2], 0u + 20u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_00268284:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00268304; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 8;
L_002682B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002682B8u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x002682B8u) [[unlikely]] return; }
L_002682B8:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00268324; } }
L_002682C8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_0026834C; } }
L_002682D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002682E0u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002682E0u) [[unlikely]] return; }
L_002682E0:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002682F0u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002682F0u) [[unlikely]] return; }
L_002682F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002682FCu); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002682FCu) [[unlikely]] return; }
L_002682FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268284u | kUnwind; return; } goto L_00268284; } }
L_00268304:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268310u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00268310u) [[unlikely]] return; }
L_00268310:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026831Cu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026831Cu) [[unlikely]] return; }
L_0026831C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002682B0u | kUnwind; return; } goto L_002682B0; } }
L_00268324:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026833Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026833Cu) [[unlikely]] return; }
L_0026833C:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002682C8u | kUnwind; return; } goto L_002682C8; } }
L_0026834C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00268360:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[1].d[0] = c.r[20].sd[0] < 2ll ? 1ull : 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002685E0; } }
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_002685E0; } }
    c.r[1].d[0] = c.r[19].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00268604; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002683C0u);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x002683C0u) [[unlikely]] return; }
L_002683C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00268410; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00268410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002683E4u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x002683E4u) [[unlikely]] return; }
L_002683E4:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268408u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00268408u) [[unlikely]] return; }
L_00268408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268410u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00268410u) [[unlikely]] return; }
L_00268410:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] - c.r[20].w[0]);
    set32(c.r[2], c.r[28].w[0] - 30400u);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_00268628; } }
    set32(c.r[4], c.r[28].w[0] - 30392u);
    set32(c.r[3], ld32((c.r[28].w[0] - 32568u)));
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00268640; } }
    set32(c.r[6], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_00268454:
    set32(c.r[2], c.r[28].w[0] - 30400u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0]), c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] + 304u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], c.r[28].w[0] - 30384u);
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_00268654; } }
    set32(c.r[2], 0u + 19u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_0026849C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00268684; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_002684CC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002686A4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_002684FC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002686C4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_0026852C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002686E4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_0026855C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00268704; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[21].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_0026858C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00268724; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[22].w[0]));
    c.budget -= 8;
L_002685B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002685C0u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x002685C0u) [[unlikely]] return; }
L_002685C0:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00268744; } }
L_002685D0:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_0026876C; } }
L_002685E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002685ECu); set32(c.r[4], c.r[4].w[0] - 26144u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002685ECu) [[unlikely]] return; }
L_002685EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002685FCu); set32(c.r[4], c.r[4].w[0] - 26112u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x002685FCu) [[unlikely]] return; }
L_002685FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0026876C; } }
L_00268604:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268610u); set32(c.r[4], c.r[4].w[0] - 26144u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00268610u) [[unlikely]] return; }
L_00268610:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268620u); set32(c.r[4], c.r[4].w[0] - 28352u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00268620u) [[unlikely]] return; }
L_00268620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0026876C; } }
L_00268628:
    set32(c.r[3], ld32((c.r[28].w[0] - 32568u)));
    set32(c.r[6], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[28].w[0] - 30392u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268454u | kUnwind; return; } goto L_00268454; } }
L_00268640:
    set32(c.r[3], ld32((c.r[28].w[0] - 32564u)));
    set32(c.r[6], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268454u | kUnwind; return; } goto L_00268454; } }
L_00268654:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268660u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00268660u) [[unlikely]] return; }
L_00268660:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268670u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00268670u) [[unlikely]] return; }
L_00268670:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026867Cu); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026867Cu) [[unlikely]] return; }
L_0026867C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026849Cu | kUnwind; return; } goto L_0026849C; } }
L_00268684:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268690u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00268690u) [[unlikely]] return; }
L_00268690:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026869Cu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026869Cu) [[unlikely]] return; }
L_0026869C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002684CCu | kUnwind; return; } goto L_002684CC; } }
L_002686A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002686B0u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x002686B0u) [[unlikely]] return; }
L_002686B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002686BCu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x002686BCu) [[unlikely]] return; }
L_002686BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002684FCu | kUnwind; return; } goto L_002684FC; } }
L_002686C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002686D0u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x002686D0u) [[unlikely]] return; }
L_002686D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002686DCu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x002686DCu) [[unlikely]] return; }
L_002686DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026852Cu | kUnwind; return; } goto L_0026852C; } }
L_002686E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002686F0u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x002686F0u) [[unlikely]] return; }
L_002686F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002686FCu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x002686FCu) [[unlikely]] return; }
L_002686FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026855Cu | kUnwind; return; } goto L_0026855C; } }
L_00268704:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268710u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00268710u) [[unlikely]] return; }
L_00268710:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026871Cu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026871Cu) [[unlikely]] return; }
L_0026871C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026858Cu | kUnwind; return; } goto L_0026858C; } }
L_00268724:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268730u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00268730u) [[unlikely]] return; }
L_00268730:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026873Cu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026873Cu) [[unlikely]] return; }
L_0026873C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002685B8u | kUnwind; return; } goto L_002685B8; } }
L_00268744:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026875Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026875Cu) [[unlikely]] return; }
L_0026875C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002685D0u | kUnwind; return; } goto L_002685D0; } }
L_0026876C:
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
L_002687A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002687B8u); st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x002687B8u) [[unlikely]] return; }
L_002687B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00268808; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00268808; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002687DCu);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x002687DCu) [[unlikely]] return; }
L_002687DC:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268800u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00268800u) [[unlikely]] return; }
L_00268800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268808u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00268808u) [[unlikely]] return; }
L_00268808:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_002689F8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00268814:
    set32(c.r[3], ld32((c.r[28].w[0] - 30468u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268814u | kUnwind; return; } goto L_00268814; } }
L_00268830:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026883Cu); set32(c.r[4], c.r[4].w[0] - 32640u);  if (depth < kMaxDepth) unit_0007(c, 384u, depth + 1u); else { c.pc = 0x0021FA68u; return; } if (c.pc != 0x0026883Cu) [[unlikely]] return; }
L_0026883C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268860; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00268A4C; } }
L_00268854:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[2].w[0]);  if (t) { goto L_00268C44; } }
L_00268860:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 30324u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268A74; } }
L_0026886C:
    set32(c.r[5], ld32((c.r[28].w[0] - 30264u)));
    set32(c.r[3], 0u + 70u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30488u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st16((c.r[2].w[0] + 20736u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st8((c.r[28].w[0] - 30324u), static_cast<std::uint8_t>(0u));
    st16((c.r[3].w[0] + 20738u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[4].w[0] + 2u);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00268988; } }
    c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[10], c.r[4].w[0] - 6u);  if (t) { goto L_00268938; } }
    c.r[1].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002688CC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002688CC; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002688CC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00268938; } }
    c.r[12].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[12], c.r[12].w[0] + 20736u);
    set32(c.r[11], c.r[11].w[0] + 22784u);
    c.budget -= 4;
L_002688E4:
    c.r[9].d[0] = ld16((c.r[12].w[0]));
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.r[8].d[0] = ld16((c.r[12].w[0] + 2u));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.r[7].d[0] = ld16((c.r[12].w[0] + 4u));
    c.r[6].d[0] = ld16((c.r[12].w[0] + 6u));
    c.r[5].d[0] = ld16((c.r[12].w[0] + 8u));
    c.r[4].d[0] = ld16((c.r[12].w[0] + 10u));
    st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    st16((c.r[11].w[0] + 2u), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[11].w[0] + 4u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[11].w[0] + 6u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[11].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[11].w[0] + 10u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[5].d[0] = ld16((c.r[12].w[0] + 12u));
    c.r[4].d[0] = ld16((c.r[12].w[0] + 14u));
    st16((c.r[11].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[11].w[0] + 14u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[12], c.r[12].w[0] + 16u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002688E4u | kUnwind; return; } goto L_002688E4; } }
L_00268938:
    set32(c.r[3], ld32((c.r[28].w[0] - 30488u)));
    set32(c.r[5], c.r[3].w[0] + 2u);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00268988; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + 20736u);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 22784u);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
L_00268968:
    c.r[4].d[0] = ld16((c.r[7].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268968u | kUnwind; return; } goto L_00268968; } }
    c.budget -= 1;
L_00268988:
    set32(c.r[2], ld32((c.r[28].w[0] - 30224u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[28].w[0] - 30468u), c.r[3].w[0]);  if (t) { goto L_00268C10; } }
L_00268998:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[8], 0u + 2048u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00270000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 22784u);
    set32(c.r[4], c.r[4].w[0] - 32640u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[9].w[0] + 26880u);
    c.r[10].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[11], c.r[11].w[0] - 13808u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002689D0u); st64((c.r[29].w[0]), 0ull);  if (depth < kMaxDepth) unit_0007(c, 371u, depth + 1u); else { c.pc = 0x0021F868u; return; } if (c.pc != 0x002689D0u) [[unlikely]] return; }
L_002689D0:
    set32(c.r[16], ld32((c.r[28].w[0] - 30488u)));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    st32((c.r[28].w[0] - 30264u), 0u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st32((c.r[28].w[0] - 30488u), 0u);  if (t) { goto L_00268C1C; } }
L_002689E8:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_00268C44; } }
L_002689F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30468u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268830u | kUnwind; return; } goto L_00268830; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00268A24; } }
L_00268A18:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[2].w[0]);  if (t) { goto L_00268C44; } }
L_00268A24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268A3Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00268A3Cu) [[unlikely]] return; }
L_00268A3C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268A18u | kUnwind; return; } goto L_00268A18; } }
L_00268A4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268A64u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00268A64u) [[unlikely]] return; }
L_00268A64:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268854u | kUnwind; return; } goto L_00268854; } }
L_00268A74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268A7Cu);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00268A7Cu) [[unlikely]] return; }
L_00268A7C:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00268ACC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00268ACC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268AA0u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00268AA0u) [[unlikely]] return; }
L_00268AA0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268AC4u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00268AC4u) [[unlikely]] return; }
L_00268AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268ACCu);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00268ACCu) [[unlikely]] return; }
L_00268ACC:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_00268B78; } }
    set32(c.r[2], 0u + 9u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_00268AEC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00268BA8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    c.r[5].d[0] = 0ull | 65535ull;
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 10;
L_00268B20:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00268BC8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
L_00268B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268B54u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x00268B54u) [[unlikely]] return; }
L_00268B54:
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    st8((c.r[28].w[0] - 30324u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00268BE8; } }
L_00268B6C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026886Cu | kUnwind; return; } goto L_0026886C; } }
L_00268B78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268B84u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00268B84u) [[unlikely]] return; }
L_00268B84:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268B94u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00268B94u) [[unlikely]] return; }
L_00268B94:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268BA0u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00268BA0u) [[unlikely]] return; }
L_00268BA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268AECu | kUnwind; return; } goto L_00268AEC; } }
L_00268BA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268BB4u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00268BB4u) [[unlikely]] return; }
L_00268BB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268BC0u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00268BC0u) [[unlikely]] return; }
L_00268BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268B20u | kUnwind; return; } goto L_00268B20; } }
L_00268BC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268BD4u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00268BD4u) [[unlikely]] return; }
L_00268BD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268BE0u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00268BE0u) [[unlikely]] return; }
L_00268BE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268B4Cu | kUnwind; return; } goto L_00268B4C; } }
L_00268BE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268C00u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00268C00u) [[unlikely]] return; }
L_00268C00:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268B6Cu | kUnwind; return; } goto L_00268B6C; } }
L_00268C10:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30224u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268998u | kUnwind; return; } goto L_00268998; } }
L_00268C1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268C34u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00268C34u) [[unlikely]] return; }
L_00268C34:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002689E8u | kUnwind; return; } goto L_002689E8; } }
L_00268C44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00268C60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].sd[0] < 0; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00268DB8; } }
    c.r[1].d[0] = c.r[18].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00268DB8; } }
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00268DC0; } }
    c.r[1].d[0] = c.r[17].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00268DC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268CACu);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00268CACu) [[unlikely]] return; }
L_00268CAC:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00268CFC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00268CFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268CD0u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00268CD0u) [[unlikely]] return; }
L_00268CD0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268CF4u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00268CF4u) [[unlikely]] return; }
L_00268CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268CFCu);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00268CFCu) [[unlikely]] return; }
L_00268CFC:
    c.r[1].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_00268D9C; } }
    c.r[5].d[0] = ld32((c.r[28].w[0] - 32520u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = ld32((c.r[28].w[0] - 32516u));
    set32(c.r[2], c.r[2].w[0] - 32592u);
    set32(c.r[6], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
L_00268D20:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00268D8C; } }
    c.r[1].d[0] = c.r[18].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00268D44; } }
    c.r[2].d[0] = c.r[3].d[0] << (c.r[18].w[0] & 63u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];  if (t) { goto L_00268D50; } }
L_00268D44:
    set32(c.r[2], c.r[18].w[0] - 24u);
    c.r[2].d[0] = c.r[3].d[0] << (c.r[2].w[0] & 63u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 3;
L_00268D50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268D8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] - 32592u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00268DC8; } }
L_00268D7C:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_00268E18; } }
L_00268D8C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[1].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268D20u | kUnwind; return; } goto L_00268D20; } }
L_00268D9C:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00268DF0; } }
L_00268DAC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[2].w[0]);  if (t) { goto L_00268E18; } }
L_00268DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_00268E18; } }
L_00268DC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_00268E18; } }
L_00268DC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268DE0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00268DE0u) [[unlikely]] return; }
L_00268DE0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268D7Cu | kUnwind; return; } goto L_00268D7C; } }
L_00268DF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268E08u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00268E08u) [[unlikely]] return; }
L_00268E08:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268DACu | kUnwind; return; } goto L_00268DAC; } }
L_00268E18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00268E30:
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[3], 0u + 2u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 30224u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[28].w[0] - 30468u), 0u);  if (t) { goto L_00269AB0; } }
L_00268E68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[9], ld32((c.r[3].w[0] + 26880u)));
    set32(c.r[4], c.r[4].w[0] + 26884u);
    st32((c.r[28].w[0] - 30436u), 0u);
    set32(c.r[5], c.r[9].w[0] << 3);
    set32(c.r[3], ld32((c.r[28].w[0] - 32552u)));
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[28].w[0] - 30428u), c.r[4].w[0]);  if (t) { goto L_00269B18; } }
    st32((c.r[28].w[0] - 32552u), c.r[4].w[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[10], c.r[10].w[0] + 30208u);
    set32(c.r[8], c.r[8].w[0] + 352u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 10;
L_00268EC4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_00269ABC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00269ABC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_00268EE8; } }
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_00268EE8:
    set32(c.r[11], c.r[11].w[0] + 1u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[11].sd[0] < 48ll ? 1ull : 0ull;
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268EC4u | kUnwind; return; } goto L_00268EC4; } }
    c.r[1].d[0] = 0ll < c.r[9].sd[0] ? 1ull : 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_00269120; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 352u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[3]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 32160u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[3]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 32352u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[3]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 30768u);
    set32(c.r[13], c.r[13].w[0] + 26880u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] + 30400u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 30448u);
    set32(c.r[3], c.r[3].w[0] + 30864u);
    set32(c.r[20], c.r[20].w[0] + 30544u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[3]);
    set32(c.r[22], c.r[22].w[0] + 29824u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[23], c.r[23].w[0] + 30256u);
    set32(c.r[3], c.r[3].w[0] + 30016u);
    set32(c.r[30], c.r[30].w[0] + 30352u);
    set32(c.r[15], c.r[15].w[0] + 30304u);
    set32(c.r[14], c.r[14].w[0] + 32544u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    set32(c.r[7], c.r[7].w[0] + 30208u);
    c.budget -= 38;
L_00268FA8:
    set32(c.r[3], ld32((c.r[13].w[0] + 4u)));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.r[8].d[0] = c.r[6].d[0] & 63ull;
    set32(c.r[12], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], 0u + 3u);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == c.r[6].d[0];  if (t) { goto L_00268FD8; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00268FE0; } }
    c.budget -= 1;
L_00268FD8:
    set32(c.r[6], 0u + 4u);
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_00268FE0:
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 10));
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.r[6].d[0] = c.r[6].d[0] & 63ull;
    c.r[18].d[0] = c.r[16].d[0] & 3ull;
    c.r[6].d[0] = c.r[6].d[0] << 56;
    set32(c.r[17], c.r[5].w[0] + c.r[8].w[0]);
    c.r[16].d[0] = c.r[3].d[0] & 3ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.budget -= 10;
    { const bool t = c.r[16].d[0] != 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));  if (t) { goto L_00269AC8; } }
L_00269008:
    set32(c.r[18], ld32((c.r[13].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[13].w[0] + 16u)));
    set32(c.r[16], c.r[8].w[0] << 1);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    set32(c.r[16], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[8].w[0] << 2);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[17], c.r[22].w[0] + c.r[3].w[0]);
    set32(c.r[21], ld32((c.r[13].w[0] + 8u)));
    set32(c.r[16], c.r[23].w[0] + c.r[8].w[0]);
    set32(c.r[19], c.r[20].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[18].w[0]);
    set32(c.r[24], c.r[30].w[0] + c.r[8].w[0]);
    c.r[17].d[0] = c.r[25].d[0] << 33;
    set32(c.r[18], c.r[25].w[0] >> 31);
    c.r[17].d[0] = c.r[17].d[0] >> 33;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[21].d[0] = c.r[21].d[0] << 40;
    c.r[21].d[0] = c.r[21].d[0] >> 40;
    c.r[17].d[0] = c.r[18].d[0] & 1ull;
    st32((c.r[19].w[0]), c.r[21].w[0]);
    c.budget -= 24;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[24].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_00269AD8; } }
L_00269068:
    set32(c.r[17], c.r[15].w[0] + c.r[8].w[0]);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[16], c.r[8].w[0] << 2);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[6]);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    set32(c.r[18], ld32((c.r[13].w[0] + 20u)));
    set32(c.r[17], c.r[6].w[0] + c.r[16].w[0]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[6]);
    set32(c.r[6], c.r[6].w[0] + c.r[16].w[0]);
    set32(c.r[16], ld32((c.r[13].w[0] + 24u)));
    st32((c.r[6].w[0]), c.r[16].w[0]);
    set32(c.r[6], 0u + 1u);
    c.budget -= 14;
    { const bool t = c.r[12].d[0] != c.r[6].d[0]; st32((c.r[17].w[0]), c.r[18].w[0]);  if (t) { goto L_002690B0; } }
    set32(c.r[12], ld32((c.r[13].w[0] + 28u)));
    set32(c.r[6], c.r[14].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[12].w[0]);  if (t) { goto L_002690B8; } }
L_002690B0:
    set32(c.r[6], c.r[14].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), 0u);
    c.budget -= 2;
L_002690B8:
    set32(c.r[12], c.r[8].w[0] << 1);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[8]);
    set32(c.r[6], ld32((c.r[13].w[0] + 32u)));
    set32(c.r[17], c.r[8].w[0] + c.r[12].w[0]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[8]);
    set32(c.r[16], c.r[8].w[0] + c.r[12].w[0]);
    c.r[12].d[0] = ld16((c.r[16].w[0]));
    c.r[8].d[0] = c.r[12].d[0] & 32768ull;
    c.budget -= 10;
    { const bool t = c.r[8].d[0] != 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_002690F0; } }
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_002690F8; } }
    c.budget -= 1;
L_002690F0:
    c.r[6].d[0] = c.r[12].d[0] & 32767ull;
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 2;
L_002690F8:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[6]);
    set32(c.r[8], ld32((c.r[13].w[0] + 36u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[11], c.r[11].w[0] + 9u);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[10].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    st32((c.r[6].w[0]), c.r[8].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[13], c.r[13].w[0] + 36u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268FA8u | kUnwind; return; } goto L_00268FA8; } }
    c.budget -= 1;
L_00269120:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 30208u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
L_00269134:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_00269AF0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00269150; } }
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00269150:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269134u | kUnwind; return; } goto L_00269134; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[11].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 26888u);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 26892u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    st32((c.r[28].w[0] - 32576u), c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30288u));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 30448u), c.r[5].w[0]);  if (t) { goto L_002691AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 26896u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32580u), c.r[3].w[0]);  if (t) { goto L_002691B0; } }
L_002691AC:
    st8((c.r[28].w[0] - 30288u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002691B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] + 26900u);
    c.r[13].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 26880u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[8], 0u + 30u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[10], c.r[10].w[0] - 32592u);
    st32((c.r[28].w[0] - 30452u), c.r[5].w[0]);
    c.budget -= 15;
L_002691EC:
    set32(c.r[9], ld32((c.r[17].w[0] + 24u)));
    c.r[12].d[0] = 0ull + 0ull;
    c.r[15].d[0] = 0ull + 0ull;
    set32(c.r[14], c.r[10].w[0] + c.r[16].w[0]);
    c.budget -= 5;
L_00269200:
    set32(c.r[5], c.r[8].w[0] - c.r[15].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> (c.r[5].w[0] & 31u)));
    c.r[7].d[0] = c.r[5].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00269AF8; } }
    c.budget -= 1;
L_00269218:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00269B10; } }
    c.r[5].d[0] = ld8((c.r[14].w[0]));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_00269B10; } }
    st8((c.r[14].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00269230:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.r[5].d[0] = c.r[12].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[15], c.r[15].w[0] + 2u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[14], c.r[14].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269200u | kUnwind; return; } goto L_00269200; } }
    set32(c.r[13], c.r[13].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[5].d[0] = c.r[13].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002691ECu | kUnwind; return; } goto L_002691EC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 26916u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[11].w[0] + 12u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[11], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] + 26920u);
    set32(c.r[7], c.r[7].w[0] + 31776u);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[16].w[0] + 31872u);
    set32(c.r[10], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[3].w[0] << 2);
    st32((c.r[28].w[0] - 30416u), c.r[11].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[28].w[0] - 30412u), c.r[10].w[0]);
    set32(c.r[5], c.r[5].w[0] + 26924u);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[9], ld32((c.r[5].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[28].w[0] - 30408u), c.r[9].w[0]);
    set32(c.r[5], c.r[5].w[0] + 26880u);
    set32(c.r[8], c.r[5].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] + 31824u);
    set32(c.r[5], c.r[5].w[0] + 31920u);
    c.budget -= 29;
L_002692CC:
    set32(c.r[15], ld32((c.r[8].w[0])));
    set32(c.r[4], c.r[4].w[0] + 3u);
    set32(c.r[14], ld32((c.r[8].w[0] + 36u)));
    c.r[9].d[0] = c.r[4].sd[0] < 9ll ? 1ull : 0ull;
    set32(c.r[13], ld32((c.r[8].w[0] + 72u)));
    set32(c.r[12], ld32((c.r[8].w[0] + 108u)));
    set32(c.r[11], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[10], ld32((c.r[8].w[0] + 40u)));
    st32((c.r[7].w[0]), c.r[15].w[0]);
    st32((c.r[6].w[0]), c.r[14].w[0]);
    st32((c.r[5].w[0]), c.r[13].w[0]);
    st32((c.r[16].w[0]), c.r[12].w[0]);
    st32((c.r[7].w[0] + 4u), c.r[11].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[10].w[0]);
    set32(c.r[15], ld32((c.r[8].w[0] + 76u)));
    set32(c.r[14], ld32((c.r[8].w[0] + 112u)));
    set32(c.r[13], ld32((c.r[8].w[0] + 8u)));
    set32(c.r[12], ld32((c.r[8].w[0] + 44u)));
    set32(c.r[11], ld32((c.r[8].w[0] + 80u)));
    set32(c.r[10], ld32((c.r[8].w[0] + 116u)));
    st32((c.r[5].w[0] + 4u), c.r[15].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[14].w[0]);
    st32((c.r[7].w[0] + 8u), c.r[13].w[0]);
    st32((c.r[6].w[0] + 8u), c.r[12].w[0]);
    set32(c.r[7], c.r[7].w[0] + 12u);
    st32((c.r[5].w[0] + 8u), c.r[11].w[0]);
    set32(c.r[6], c.r[6].w[0] + 12u);
    st32((c.r[16].w[0] + 8u), c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] + 12u);
    set32(c.r[5], c.r[5].w[0] + 12u);
    c.budget -= 32;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002692CCu | kUnwind; return; } goto L_002692CC; } }
    set32(c.r[4], c.r[3].w[0] + 36u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] + 26880u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 26884u);
    set32(c.r[7], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[11], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] + 26888u);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0])));
    st32((c.r[28].w[0] - 30376u), c.r[7].w[0]);
    st32((c.r[28].w[0] - 30372u), c.r[11].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[28].w[0] - 30336u), c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] + 26892u);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[10], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] + 26896u);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[9], ld32((c.r[5].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[28].w[0] - 30344u), c.r[9].w[0]);
    set32(c.r[5], c.r[5].w[0] + 26900u);
    set32(c.r[7], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[7].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 26904u);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 26908u);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[6].w[0])));
    st32((c.r[28].w[0] - 30348u), c.r[8].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 8));
    st32((c.r[28].w[0] - 30368u), c.r[7].w[0]);
    st32((c.r[28].w[0] - 32560u), c.r[6].w[0]);
    c.r[6].d[0] = c.r[10].d[0] & 255ull;
    st32((c.r[28].w[0] - 30340u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[5].d[0] = ld8((c.r[28].w[0] - 30284u));
    c.budget -= 47;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[28].w[0] - 30364u), c.r[6].w[0]);  if (t) { goto L_00269420; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 26912u);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30440u), c.r[5].w[0]);  if (t) { goto L_00269424; } }
L_00269420:
    st8((c.r[28].w[0] - 30284u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00269424:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 30280u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00269448; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 26916u);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30444u), c.r[5].w[0]);  if (t) { goto L_0026944C; } }
L_00269448:
    st8((c.r[28].w[0] - 30280u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0026944C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] + 26920u);
    set32(c.r[5], c.r[5].w[0] + 26924u);
    set32(c.r[7], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[11], ld32((c.r[7].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[10], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] + 26928u);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[9], ld32((c.r[5].w[0])));
    st32((c.r[28].w[0] - 30332u), c.r[10].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[28].w[0] - 30312u), c.r[9].w[0]);
    set32(c.r[5], c.r[5].w[0] + 26932u);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] + 26936u);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[5].w[0])));
    st32((c.r[28].w[0] - 30320u), c.r[7].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[28].w[0] - 30316u), c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] + 26940u);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[11].d[0] & 1ull;
    set32(c.r[10], ld32((c.r[6].w[0])));
    st8((c.r[28].w[0] - 30360u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], c.r[11].w[0] >> 1);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    st8((c.r[28].w[0] - 30356u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], c.r[11].w[0] >> 2);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    st32((c.r[28].w[0] - 30308u), c.r[10].w[0]);
    st8((c.r[28].w[0] - 30352u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 26944u);
    set32(c.r[7], c.r[5].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[9], ld32((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] + 26948u);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[8], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] + 26952u);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0])));
    st32((c.r[28].w[0] - 30304u), c.r[9].w[0]);
    st32((c.r[28].w[0] - 30300u), c.r[8].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[28].w[0] - 32556u), c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + 26956u);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[14], ld32((c.r[6].w[0])));
    c.r[1].d[0] = 0ll < c.r[14].sd[0] ? 1ull : 0ull;
    c.budget -= 59;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00269620; } }
    c.r[1].d[0] = c.r[14].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[13], c.r[14].w[0] - 8u);  if (t) { goto L_002695D8; } }
    c.r[1].d[0] = c.r[14].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00269568; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[14].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00269568; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00269568:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002695D8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] + 26880u);
    set32(c.r[15], c.r[15].w[0] + 31968u);
    set32(c.r[16], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_00269584:
    set32(c.r[12], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[11], ld32((c.r[16].w[0] + 84u)));
    c.r[6].d[0] = c.r[5].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    set32(c.r[10], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 100u)));
    st32((c.r[15].w[0]), c.r[12].w[0]);
    st32((c.r[15].w[0] + 4u), c.r[11].w[0]);
    st32((c.r[15].w[0] + 8u), c.r[10].w[0]);
    st32((c.r[15].w[0] + 12u), c.r[9].w[0]);
    st32((c.r[15].w[0] + 16u), c.r[8].w[0]);
    st32((c.r[15].w[0] + 20u), c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 108u)));
    st32((c.r[15].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[15].w[0] + 28u), c.r[7].w[0]);
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[15], c.r[15].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269584u | kUnwind; return; } goto L_00269584; } }
L_002695D8:
    c.r[1].d[0] = c.r[5].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00269620; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 26880u);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[8], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + 31968u);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    c.budget -= 8;
L_00269604:
    set32(c.r[6], ld32((c.r[8].w[0] + 80u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    st32((c.r[7].w[0]), c.r[6].w[0]);
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269604u | kUnwind; return; } goto L_00269604; } }
L_00269620:
    set32(c.r[10], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[10].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 26964u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[12], c.r[12].w[0] - 32160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[28].w[0] - 30296u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 26880u);
    set32(c.r[13], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 13;
L_00269654:
    set32(c.r[9], ld32((c.r[13].w[0] + 88u)));
    set32(c.r[11], c.r[11].w[0] + 8u);
    set32(c.r[8], ld32((c.r[13].w[0] + 92u)));
    c.r[3].d[0] = c.r[11].sd[0] < 48ll ? 1ull : 0ull;
    set32(c.r[7], ld32((c.r[13].w[0] + 96u)));
    set32(c.r[6], ld32((c.r[13].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[13].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[13].w[0] + 108u)));
    st32((c.r[12].w[0]), c.r[9].w[0]);
    st32((c.r[12].w[0] + 4u), c.r[8].w[0]);
    st32((c.r[12].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[12].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[12].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[12].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[13].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[13].w[0] + 116u)));
    st32((c.r[12].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[12].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[13], c.r[13].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269654u | kUnwind; return; } goto L_00269654; } }
    set32(c.r[5], c.r[10].w[0] + c.r[11].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] + 26972u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[12], ld32((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] + 26976u);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[11], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[5].w[0] + 25u);
    set32(c.r[7], c.r[3].w[0] << 2);
    st32((c.r[28].w[0] - 30464u), c.r[12].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 26880u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[8], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[28].w[0] - 30460u), c.r[11].w[0]);
    set32(c.r[7], c.r[5].w[0] + 26u);
    set32(c.r[10], ld32((c.r[8].w[0])));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[9], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[5].w[0] + 27u);
    set32(c.r[13], ld32((c.r[9].w[0])));
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[12], ld32((c.r[7].w[0])));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[6].w[0] + 30736u), c.r[10].w[0]);
    set32(c.r[6], c.r[5].w[0] + 28u);
    set32(c.r[9], c.r[6].w[0] << 2);
    st32((c.r[8].w[0] + 30740u), c.r[13].w[0]);
    set32(c.r[10], c.r[3].w[0] + c.r[9].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[9], c.r[5].w[0] + 29u);
    set32(c.r[11], ld32((c.r[10].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[9], c.r[9].w[0] << 2);
    st32((c.r[7].w[0] + 30744u), c.r[12].w[0]);
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[12], ld32((c.r[9].w[0])));
    set32(c.r[7], c.r[5].w[0] + 30u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[6].w[0] + 30748u), c.r[11].w[0]);
    set32(c.r[9], c.r[7].w[0] << 2);
    st32((c.r[8].w[0] + 30752u), c.r[12].w[0]);
    set32(c.r[10], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[5].w[0] + 32u);
    set32(c.r[9], c.r[5].w[0] + 31u);
    set32(c.r[11], ld32((c.r[10].w[0])));
    set32(c.r[6], c.r[9].w[0] << 2);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[9], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[5].w[0] + 34u);
    set32(c.r[12], ld32((c.r[9].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[10], ld32((c.r[6].w[0])));
    st32((c.r[7].w[0] + 30756u), c.r[11].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[5].w[0] + 30764u), c.r[12].w[0]);
    set32(c.r[9], c.r[9].w[0] + 27012u);
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[11], ld32((c.r[4].w[0])));
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[6].w[0] + 30760u), c.r[10].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[8].w[0] << 2);
    st32((c.r[28].w[0] - 30424u), c.r[11].w[0]);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0])));
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 76;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[28].w[0] - 30484u), c.r[6].w[0]);  if (t) { goto L_00269A68; } }
    c.r[1].d[0] = c.r[6].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[6].w[0] - 8u);  if (t) { goto L_002699F0; } }
    c.r[1].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00269808; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[6].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00269808; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00269808:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002699F0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28928u);
    c.budget -= 3;
L_0026981C:
    set32(c.r[12], c.r[9].w[0] << 1);
    set32(c.r[3], c.r[11].w[0] << 2);
    set32(c.r[12], c.r[12].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[15], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[16], c.r[4].w[0] + c.r[12].w[0]);
    set32(c.r[13], c.r[9].w[0] + 1u);
    set32(c.r[12], c.r[11].w[0] + 3u);
    set32(c.r[17], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[14], c.r[12].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + 8u);
    set32(c.r[12], c.r[13].w[0] << 1);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[13], c.r[7].w[0] + c.r[14].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[15].w[0]);
    set32(c.r[18], ld32((c.r[13].w[0])));
    set32(c.r[12], c.r[12].w[0] << 2);
    st32((c.r[16].w[0]), c.r[17].w[0]);
    set32(c.r[15], c.r[4].w[0] + c.r[12].w[0]);
    set32(c.r[12], c.r[11].w[0] + 6u);
    set32(c.r[14], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[17], c.r[9].w[0] + 2u);
    set32(c.r[12], c.r[7].w[0] + c.r[12].w[0]);
    set32(c.r[12], ld32((c.r[12].w[0])));
    set32(c.r[13], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[16], c.r[17].w[0] << 1);
    st32((c.r[15].w[0] + 8u), c.r[14].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[17], c.r[16].w[0] << 2);
    set32(c.r[16], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[17], c.r[4].w[0] + c.r[17].w[0]);
    st32((c.r[15].w[0]), c.r[13].w[0]);
    st32((c.r[15].w[0] + 4u), c.r[12].w[0]);
    set32(c.r[13], c.r[11].w[0] + 9u);
    set32(c.r[12], c.r[13].w[0] << 2);
    set32(c.r[14], c.r[7].w[0] + c.r[12].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[18].w[0]);
    set32(c.r[13], c.r[9].w[0] + 3u);
    set32(c.r[15], ld32((c.r[14].w[0])));
    set32(c.r[12], c.r[13].w[0] << 1);
    st32((c.r[17].w[0]), c.r[16].w[0]);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[18], c.r[9].w[0] + 4u);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[13], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[16], c.r[4].w[0] + c.r[12].w[0]);
    set32(c.r[12], c.r[11].w[0] + 12u);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[14], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[19], c.r[7].w[0] + c.r[12].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[15].w[0]);
    set32(c.r[12], c.r[18].w[0] << 1);
    set32(c.r[17], c.r[9].w[0] + 5u);
    set32(c.r[18], c.r[12].w[0] + c.r[18].w[0]);
    set32(c.r[12], ld32((c.r[19].w[0])));
    set32(c.r[15], c.r[18].w[0] << 2);
    set32(c.r[15], c.r[4].w[0] + c.r[15].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[14].w[0]);
    st32((c.r[16].w[0]), c.r[13].w[0]);
    set32(c.r[13], c.r[11].w[0] + 15u);
    set32(c.r[14], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[13], c.r[13].w[0] << 2);
    st32((c.r[16].w[0] + 4u), c.r[12].w[0]);
    set32(c.r[18], c.r[7].w[0] + c.r[13].w[0]);
    set32(c.r[12], ld32((c.r[18].w[0])));
    set32(c.r[16], c.r[17].w[0] << 1);
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    set32(c.r[13], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[17], c.r[16].w[0] << 2);
    st32((c.r[15].w[0] + 8u), c.r[14].w[0]);
    set32(c.r[17], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 64u)));
    st32((c.r[15].w[0]), c.r[13].w[0]);
    set32(c.r[13], c.r[11].w[0] + 18u);
    st32((c.r[15].w[0] + 4u), c.r[12].w[0]);
    set32(c.r[14], c.r[13].w[0] << 2);
    set32(c.r[13], c.r[9].w[0] + 6u);
    set32(c.r[14], c.r[7].w[0] + c.r[14].w[0]);
    set32(c.r[12], c.r[13].w[0] << 1);
    st32((c.r[17].w[0] + 8u), c.r[18].w[0]);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    st32((c.r[17].w[0]), c.r[16].w[0]);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[16], ld32((c.r[14].w[0])));
    set32(c.r[15], c.r[4].w[0] + c.r[12].w[0]);
    set32(c.r[12], c.r[11].w[0] + 21u);
    set32(c.r[18], c.r[9].w[0] + 7u);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[13], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[19], c.r[7].w[0] + c.r[12].w[0]);
    set32(c.r[11], c.r[11].w[0] + 24u);
    set32(c.r[12], c.r[18].w[0] << 1);
    set32(c.r[9], c.r[9].w[0] + 8u);
    set32(c.r[18], c.r[12].w[0] + c.r[18].w[0]);
    set32(c.r[14], ld32((c.r[3].w[0] + 76u)));
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[16], c.r[18].w[0] << 2);
    set32(c.r[12], ld32((c.r[19].w[0])));
    set32(c.r[17], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 88u)));
    st32((c.r[15].w[0] + 8u), c.r[14].w[0]);
    set32(c.r[14], ld32((c.r[3].w[0] + 92u)));
    st32((c.r[15].w[0]), c.r[13].w[0]);
    set32(c.r[13], c.r[11].w[0] << 2);
    st32((c.r[15].w[0] + 4u), c.r[12].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[13].w[0]);
    st32((c.r[17].w[0]), c.r[14].w[0]);
    set32(c.r[12], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[10].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 117;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[17].w[0] + 4u), c.r[12].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026981Cu | kUnwind; return; } goto L_0026981C; } }
L_002699F0:
    c.r[11].d[0] = c.r[6].d[0] << 32;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    c.r[1].d[0] = c.r[10].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00269A68; } }
    set32(c.r[3], c.r[9].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[4], c.r[4].w[0] + 28928u);
    set32(c.r[3], c.r[10].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[12], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[13], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 8;
L_00269A24:
    set32(c.r[3], c.r[12].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[4], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[12], c.r[12].w[0] + 3u);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[12].w[0] << 2);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st32((c.r[13].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    st32((c.r[13].w[0]), c.r[5].w[0]);
    st32((c.r[13].w[0] + 4u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[10].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[13], c.r[13].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269A24u | kUnwind; return; } goto L_00269A24; } }
    c.budget -= 1;
L_00269A68:
    set32(c.r[3], c.r[10].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 26880u);
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 26884u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[28].w[0] - 30472u), c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st8((c.r[28].w[0] - 30420u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30476u), c.r[3].w[0]);  if (t) { goto L_00269B18; } }
L_00269AB0:
    st32((c.r[28].w[0] - 30224u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30220u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268E68u | kUnwind; return; } goto L_00268E68; } }
L_00269ABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0]), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00268EE8u | kUnwind; return; } goto L_00268EE8; } }
    c.budget -= 1;
L_00269AC8:
    st32((c.r[28].w[0] - 30436u), c.r[16].w[0]);
    c.r[16].d[0] = c.r[8].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30432u), c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269008u | kUnwind; return; } goto L_00269008; } }
L_00269AD8:
    set32(c.r[16], c.r[15].w[0] + c.r[8].w[0]);
    c.r[17].d[0] = ld8((c.r[16].w[0]));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269068u | kUnwind; return; } goto L_00269068; } }
L_00269AF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269150u | kUnwind; return; } goto L_00269150; } }
L_00269AF8:
    c.r[5].d[0] = ld8((c.r[14].w[0]));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269218u | kUnwind; return; } goto L_00269218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[14].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269230u | kUnwind; return; } goto L_00269230; } }
    c.budget -= 1;
L_00269B10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[14].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269230u | kUnwind; return; } goto L_00269230; } }
L_00269B18:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00269B50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30328u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00269BC4; } }
    c.r[1].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(1024ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00269BF4; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00269BF4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269BA0u); set32(c.r[4], c.r[4].w[0] - 26080u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00269BA0u) [[unlikely]] return; }
L_00269BA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269BB0u); set32(c.r[4], c.r[4].w[0] - 26032u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00269BB0u) [[unlikely]] return; }
L_00269BB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269BBCu); set32(c.r[4], c.r[4].w[0] - 26000u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00269BBCu) [[unlikely]] return; }
L_00269BBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_00269E78; } }
L_00269BC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269BD0u); set32(c.r[4], c.r[4].w[0] - 25952u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00269BD0u) [[unlikely]] return; }
L_00269BD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269BE0u); set32(c.r[4], c.r[4].w[0] - 28432u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00269BE0u) [[unlikely]] return; }
L_00269BE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269BECu); set32(c.r[4], c.r[4].w[0] - 28400u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00269BECu) [[unlikely]] return; }
L_00269BEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00269E78; } }
L_00269BF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[18], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 31200u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269D60; } }
    set32(c.r[3], c.r[20].w[0] + 63u);
    set32(c.r[2], 0u - 64u);
    c.r[19].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[20].d[0] != c.r[19].d[0];  if (t) { goto L_00269D84; } }
L_00269C24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + 31392u);
    set32(c.r[17], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00269DB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269C48u);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00269C48u) [[unlikely]] return; }
L_00269C48:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00269C98; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_00269C98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269C6Cu);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00269C6Cu) [[unlikely]] return; }
L_00269C6C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269C90u); st32((c.r[3].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00269C90u) [[unlikely]] return; }
L_00269C90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269C98u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00269C98u) [[unlikely]] return; }
L_00269C98:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + 31584u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0]), c.r[19].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[17].w[0]);  if (t) { goto L_00269DE0; } }
    set32(c.r[2], 0u + 82u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_00269CC8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00269E10; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_00269CF8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00269E30; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[19].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.budget -= 13;
L_00269D38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269D40u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x00269D40u) [[unlikely]] return; }
L_00269D40:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00269E50; } }
L_00269D50:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_00269E78; } }
L_00269D60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269D6Cu); set32(c.r[4], c.r[4].w[0] - 26080u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00269D6Cu) [[unlikely]] return; }
L_00269D6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269D7Cu); set32(c.r[4], c.r[4].w[0] - 25904u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00269D7Cu) [[unlikely]] return; }
L_00269D7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00269E78; } }
L_00269D84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269D90u); set32(c.r[4], c.r[4].w[0] - 25840u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00269D90u) [[unlikely]] return; }
L_00269D90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269DA0u); set32(c.r[4], c.r[4].w[0] - 25792u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00269DA0u) [[unlikely]] return; }
L_00269DA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269DB0u); set32(c.r[4], c.r[4].w[0] - 25744u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00269DB0u) [[unlikely]] return; }
L_00269DB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269C24u | kUnwind; return; } goto L_00269C24; } }
L_00269DB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269DC4u); set32(c.r[4], c.r[4].w[0] - 26080u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00269DC4u) [[unlikely]] return; }
L_00269DC4:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269DD8u); set32(c.r[4], c.r[4].w[0] - 25712u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00269DD8u) [[unlikely]] return; }
L_00269DD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00269E78; } }
L_00269DE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269DECu); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00269DECu) [[unlikely]] return; }
L_00269DEC:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269DFCu); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00269DFCu) [[unlikely]] return; }
L_00269DFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269E08u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x00269E08u) [[unlikely]] return; }
L_00269E08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269CC8u | kUnwind; return; } goto L_00269CC8; } }
L_00269E10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269E1Cu); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00269E1Cu) [[unlikely]] return; }
L_00269E1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269E28u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00269E28u) [[unlikely]] return; }
L_00269E28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269CF8u | kUnwind; return; } goto L_00269CF8; } }
L_00269E30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269E3Cu); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00269E3Cu) [[unlikely]] return; }
L_00269E3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269E48u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00269E48u) [[unlikely]] return; }
L_00269E48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269D38u | kUnwind; return; } goto L_00269D38; } }
L_00269E50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269E68u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x00269E68u) [[unlikely]] return; }
L_00269E68:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269D50u | kUnwind; return; } goto L_00269D50; } }
L_00269E78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00269EA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].d[0] = c.r[19].sd[0] < 48ll ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0026A04C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269ED4u);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x00269ED4u) [[unlikely]] return; }
L_00269ED4:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026A07C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0026A07C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269EF8u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x00269EF8u) [[unlikely]] return; }
L_00269EF8:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269F1Cu); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x00269F1Cu) [[unlikely]] return; }
L_00269F1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269F24u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x00269F24u) [[unlikely]] return; }
L_00269F24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026A07C; } }
L_00269F2C:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 30960u);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00269F50; } }
L_00269F40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + 30960u);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00269F50:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026A0C4; } }
    set32(c.r[2], 0u + 13u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_00269F70:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026A0F4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_00269FA0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026A114; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[18].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 14;
L_00269FE4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026A134; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[17].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.budget -= 13;
L_0026A024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A02Cu);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x0026A02Cu) [[unlikely]] return; }
L_0026A02C:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026A154; } }
L_0026A03C:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_0026A17C; } }
L_0026A04C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A058u); set32(c.r[4], c.r[4].w[0] - 25632u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026A058u) [[unlikely]] return; }
L_0026A058:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A068u); set32(c.r[4], c.r[4].w[0] - 25584u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026A068u) [[unlikely]] return; }
L_0026A068:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A074u); set32(c.r[4], c.r[4].w[0] - 25552u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026A074u) [[unlikely]] return; }
L_0026A074:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0026A17C; } }
L_0026A07C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 31200u);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31392u);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[4].w[0]), c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31584u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 16;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; st32((c.r[3].w[0]), c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269F40u | kUnwind; return; } goto L_00269F40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269F2Cu | kUnwind; return; } goto L_00269F2C; } }
L_0026A0C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A0D0u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026A0D0u) [[unlikely]] return; }
L_0026A0D0:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A0E0u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026A0E0u) [[unlikely]] return; }
L_0026A0E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A0ECu); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026A0ECu) [[unlikely]] return; }
L_0026A0EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269F70u | kUnwind; return; } goto L_00269F70; } }
L_0026A0F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A100u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026A100u) [[unlikely]] return; }
L_0026A100:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A10Cu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026A10Cu) [[unlikely]] return; }
L_0026A10C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269FA0u | kUnwind; return; } goto L_00269FA0; } }
L_0026A114:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A120u); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026A120u) [[unlikely]] return; }
L_0026A120:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A12Cu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026A12Cu) [[unlikely]] return; }
L_0026A12C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269FE4u | kUnwind; return; } goto L_00269FE4; } }
L_0026A134:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A140u); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026A140u) [[unlikely]] return; }
L_0026A140:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A14Cu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026A14Cu) [[unlikely]] return; }
L_0026A14C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A024u | kUnwind; return; } goto L_0026A024; } }
L_0026A154:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A16Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026A16Cu) [[unlikely]] return; }
L_0026A16C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A03Cu | kUnwind; return; } goto L_0026A03C; } }
L_0026A17C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026A1A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(48ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0026A28C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A1C4u);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x0026A1C4u) [[unlikely]] return; }
L_0026A1C4:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026A214; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0026A214; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A1E8u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0026A1E8u) [[unlikely]] return; }
L_0026A1E8:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A20Cu); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0026A20Cu) [[unlikely]] return; }
L_0026A20C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A214u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x0026A214u) [[unlikely]] return; }
L_0026A214:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 30328u), c.r[17].w[0]);  if (t) { goto L_0026A2B0; } }
    set32(c.r[2], 0u + 16u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_0026A238:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026A2E0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 8;
L_0026A264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A26Cu);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x0026A26Cu) [[unlikely]] return; }
L_0026A26C:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026A300; } }
L_0026A27C:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_0026A328; } }
L_0026A28C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A298u); set32(c.r[4], c.r[4].w[0] - 25520u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026A298u) [[unlikely]] return; }
L_0026A298:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A2A8u); set32(c.r[4], c.r[4].w[0] - 25488u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026A2A8u) [[unlikely]] return; }
L_0026A2A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0026A328; } }
L_0026A2B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A2BCu); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026A2BCu) [[unlikely]] return; }
L_0026A2BC:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A2CCu); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026A2CCu) [[unlikely]] return; }
L_0026A2CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A2D8u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026A2D8u) [[unlikely]] return; }
L_0026A2D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A238u | kUnwind; return; } goto L_0026A238; } }
L_0026A2E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A2ECu); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026A2ECu) [[unlikely]] return; }
L_0026A2EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A2F8u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026A2F8u) [[unlikely]] return; }
L_0026A2F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A264u | kUnwind; return; } goto L_0026A264; } }
L_0026A300:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A318u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026A318u) [[unlikely]] return; }
L_0026A318:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A27Cu | kUnwind; return; } goto L_0026A27C; } }
L_0026A328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026A340:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A368u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x0026A368u) [[unlikely]] return; }
L_0026A368:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026A3B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0026A3B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A38Cu);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0026A38Cu) [[unlikely]] return; }
L_0026A38C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A3B0u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0026A3B0u) [[unlikely]] return; }
L_0026A3B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A3B8u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x0026A3B8u) [[unlikely]] return; }
L_0026A3B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_0026A4C0; } }
    set32(c.r[2], 0u + 12u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_0026A3D8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026A4F0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_0026A408:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026A510; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_0026A438:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026A530; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_0026A468:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 32584u)));  if (t) { goto L_0026A550; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 8;
L_0026A494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A49Cu);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x0026A49Cu) [[unlikely]] return; }
L_0026A49C:
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30228u));
    st32((c.r[28].w[0] - 30456u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0026A570; } }
L_0026A4B4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_0026A598; } }
L_0026A4C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A4CCu); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026A4CCu) [[unlikely]] return; }
L_0026A4CC:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A4DCu); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026A4DCu) [[unlikely]] return; }
L_0026A4DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A4E8u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026A4E8u) [[unlikely]] return; }
L_0026A4E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A3D8u | kUnwind; return; } goto L_0026A3D8; } }
L_0026A4F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A4FCu); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026A4FCu) [[unlikely]] return; }
L_0026A4FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A508u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026A508u) [[unlikely]] return; }
L_0026A508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A408u | kUnwind; return; } goto L_0026A408; } }
L_0026A510:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A51Cu); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026A51Cu) [[unlikely]] return; }
L_0026A51C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A528u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026A528u) [[unlikely]] return; }
L_0026A528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A438u | kUnwind; return; } goto L_0026A438; } }
L_0026A530:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A53Cu); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026A53Cu) [[unlikely]] return; }
L_0026A53C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A548u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026A548u) [[unlikely]] return; }
L_0026A548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A468u | kUnwind; return; } goto L_0026A468; } }
L_0026A550:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A55Cu); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026A55Cu) [[unlikely]] return; }
L_0026A55C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A568u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026A568u) [[unlikely]] return; }
L_0026A568:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A494u | kUnwind; return; } goto L_0026A494; } }
L_0026A570:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A588u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026A588u) [[unlikely]] return; }
L_0026A588:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A4B4u | kUnwind; return; } goto L_0026A4B4; } }
L_0026A598:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026A5C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A5D0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x0026A5D0u) [[unlikely]] return; }
L_0026A5D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026A620; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0026A620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A5F4u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0026A5F4u) [[unlikely]] return; }
L_0026A5F4:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A618u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0026A618u) [[unlikely]] return; }
L_0026A618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A620u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x0026A620u) [[unlikely]] return; }
L_0026A620:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_0026A660; } }
    set32(c.r[2], 0u + 7u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.budget -= 3;
L_0026A63C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A644u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x0026A644u) [[unlikely]] return; }
L_0026A644:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0026A690; } }
L_0026A654:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_0026A6B8; } }
L_0026A660:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A66Cu); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026A66Cu) [[unlikely]] return; }
L_0026A66C:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A67Cu); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026A67Cu) [[unlikely]] return; }
L_0026A67C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A688u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026A688u) [[unlikely]] return; }
L_0026A688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A63Cu | kUnwind; return; } goto L_0026A63C; } }
L_0026A690:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A6A8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026A6A8u) [[unlikely]] return; }
L_0026A6A8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A654u | kUnwind; return; } goto L_0026A654; } }
L_0026A6B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026A6D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A6E0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x0026A6E0u) [[unlikely]] return; }
L_0026A6E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026A730; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0026A730; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A704u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0026A704u) [[unlikely]] return; }
L_0026A704:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A728u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0026A728u) [[unlikely]] return; }
L_0026A728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A730u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x0026A730u) [[unlikely]] return; }
L_0026A730:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_0026A770; } }
    set32(c.r[2], 0u + 11u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.budget -= 3;
L_0026A74C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A754u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x0026A754u) [[unlikely]] return; }
L_0026A754:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0026A7A0; } }
L_0026A764:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_0026A7C8; } }
L_0026A770:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A77Cu); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026A77Cu) [[unlikely]] return; }
L_0026A77C:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A78Cu); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026A78Cu) [[unlikely]] return; }
L_0026A78C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A798u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026A798u) [[unlikely]] return; }
L_0026A798:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A74Cu | kUnwind; return; } goto L_0026A74C; } }
L_0026A7A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A7B8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026A7B8u) [[unlikely]] return; }
L_0026A7B8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A764u | kUnwind; return; } goto L_0026A764; } }
L_0026A7C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026A7E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A7F0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x0026A7F0u) [[unlikely]] return; }
L_0026A7F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026A840; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0026A840; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A814u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0026A814u) [[unlikely]] return; }
L_0026A814:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A838u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0026A838u) [[unlikely]] return; }
L_0026A838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A840u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x0026A840u) [[unlikely]] return; }
L_0026A840:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_0026A880; } }
    set32(c.r[2], 0u + 10u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.budget -= 3;
L_0026A85C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A864u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x0026A864u) [[unlikely]] return; }
L_0026A864:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0026A8B0; } }
L_0026A874:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_0026A8D8; } }
L_0026A880:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A88Cu); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026A88Cu) [[unlikely]] return; }
L_0026A88C:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A89Cu); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026A89Cu) [[unlikely]] return; }
L_0026A89C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A8A8u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026A8A8u) [[unlikely]] return; }
L_0026A8A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A85Cu | kUnwind; return; } goto L_0026A85C; } }
L_0026A8B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A8C8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026A8C8u) [[unlikely]] return; }
L_0026A8C8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A874u | kUnwind; return; } goto L_0026A874; } }
L_0026A8D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026A8F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[17].sd[0] < 0; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0026A9E0; } }
    c.r[1].d[0] = c.r[17].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026A9E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A91Cu);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x0026A91Cu) [[unlikely]] return; }
L_0026A91C:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026A96C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0026A96C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A940u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0026A940u) [[unlikely]] return; }
L_0026A940:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A964u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0026A964u) [[unlikely]] return; }
L_0026A964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A96Cu);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x0026A96Cu) [[unlikely]] return; }
L_0026A96C:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_0026A9E8; } }
    set32(c.r[2], 0u + 4u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_0026A98C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026AA18; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 8;
L_0026A9B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A9C0u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x0026A9C0u) [[unlikely]] return; }
L_0026A9C0:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026AA38; } }
L_0026A9D0:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_0026AA60; } }
L_0026A9E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0026AA60; } }
L_0026A9E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A9F4u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026A9F4u) [[unlikely]] return; }
L_0026A9F4:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AA04u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026AA04u) [[unlikely]] return; }
L_0026AA04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AA10u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026AA10u) [[unlikely]] return; }
L_0026AA10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A98Cu | kUnwind; return; } goto L_0026A98C; } }
L_0026AA18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AA24u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026AA24u) [[unlikely]] return; }
L_0026AA24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AA30u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026AA30u) [[unlikely]] return; }
L_0026AA30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A9B8u | kUnwind; return; } goto L_0026A9B8; } }
L_0026AA38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AA50u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026AA50u) [[unlikely]] return; }
L_0026AA50:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A9D0u | kUnwind; return; } goto L_0026A9D0; } }
L_0026AA60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026AA80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[17].sd[0] >= 0; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0026AAA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0026ACBC; } }
L_0026AAA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AAA8u);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x0026AAA8u) [[unlikely]] return; }
L_0026AAA8:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026AAF8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0026AAF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AACCu);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0026AACCu) [[unlikely]] return; }
L_0026AACC:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AAF0u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0026AAF0u) [[unlikely]] return; }
L_0026AAF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AAF8u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x0026AAF8u) [[unlikely]] return; }
L_0026AAF8:
    c.r[2].d[0] = c.r[17].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_0026AC2C; } }
    set32(c.r[4], c.r[17].w[0] - 64u);
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(48ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026ABE0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], 0u + 255u);
    set32(c.r[3], c.r[3].w[0] + 352u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_0026AB34; } }
    set32(c.r[6], 0u - 1u);
    c.budget -= 1;
L_0026AB34:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_0026ABE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[17].w[0] - 64u);
    set32(c.r[2], c.r[2].w[0] + 352u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 30208u);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
L_0026AB6C:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026AC44; } }
    set32(c.r[2], 0u + 5u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_0026AB8C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026AC74; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 8;
L_0026ABB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ABC0u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x0026ABC0u) [[unlikely]] return; }
L_0026ABC0:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026AC94; } }
L_0026ABD0:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_0026ACBC; } }
L_0026ABE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u - 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026AB34u | kUnwind; return; } goto L_0026AB34; } }
L_0026ABE8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026AC04; } }
L_0026ABF8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[2].w[0]);  if (t) { goto L_0026ACBC; } }
L_0026AC04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AC1Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026AC1Cu) [[unlikely]] return; }
L_0026AC1C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026ABF8u | kUnwind; return; } goto L_0026ABF8; } }
L_0026AC2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + 30208u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026AB6Cu | kUnwind; return; } goto L_0026AB6C; } }
L_0026AC44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AC50u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026AC50u) [[unlikely]] return; }
L_0026AC50:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AC60u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026AC60u) [[unlikely]] return; }
L_0026AC60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AC6Cu); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026AC6Cu) [[unlikely]] return; }
L_0026AC6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026AB8Cu | kUnwind; return; } goto L_0026AB8C; } }
L_0026AC74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AC80u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026AC80u) [[unlikely]] return; }
L_0026AC80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AC8Cu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026AC8Cu) [[unlikely]] return; }
L_0026AC8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026ABB8u | kUnwind; return; } goto L_0026ABB8; } }
L_0026AC94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ACACu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026ACACu) [[unlikely]] return; }
L_0026ACAC:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026ABD0u | kUnwind; return; } goto L_0026ABD0; } }
L_0026ACBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026ACD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].sd[0] < 0; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026ADF8; } }
    c.r[1].d[0] = c.r[18].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026ADF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AD04u);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x0026AD04u) [[unlikely]] return; }
L_0026AD04:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026AD54; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0026AD54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AD28u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0026AD28u) [[unlikely]] return; }
L_0026AD28:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AD4Cu); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0026AD4Cu) [[unlikely]] return; }
L_0026AD4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AD54u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x0026AD54u) [[unlikely]] return; }
L_0026AD54:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);  if (t) { goto L_0026AE00; } }
    set32(c.r[2], 0u + 3u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_0026AD74:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026AE30; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_0026ADA4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026AE50; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 8;
L_0026ADD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ADD8u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x0026ADD8u) [[unlikely]] return; }
L_0026ADD8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026AE70; } }
L_0026ADE8:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_0026AE98; } }
L_0026ADF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0026AE98; } }
L_0026AE00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AE0Cu); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026AE0Cu) [[unlikely]] return; }
L_0026AE0C:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AE1Cu); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026AE1Cu) [[unlikely]] return; }
L_0026AE1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AE28u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026AE28u) [[unlikely]] return; }
L_0026AE28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026AD74u | kUnwind; return; } goto L_0026AD74; } }
L_0026AE30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AE3Cu); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026AE3Cu) [[unlikely]] return; }
L_0026AE3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AE48u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026AE48u) [[unlikely]] return; }
L_0026AE48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026ADA4u | kUnwind; return; } goto L_0026ADA4; } }
L_0026AE50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AE5Cu); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026AE5Cu) [[unlikely]] return; }
L_0026AE5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AE68u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026AE68u) [[unlikely]] return; }
L_0026AE68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026ADD0u | kUnwind; return; } goto L_0026ADD0; } }
L_0026AE70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AE88u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026AE88u) [[unlikely]] return; }
L_0026AE88:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026ADE8u | kUnwind; return; } goto L_0026ADE8; } }
L_0026AE98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026AEB0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AF00u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x0026AF00u) [[unlikely]] return; }
L_0026AF00:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026AFA0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[20].d[0];  if (t) { goto L_0026AFA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AF24u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0026AF24u) [[unlikely]] return; }
L_0026AF24:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AF48u); st32((c.r[3].w[0]), c.r[20].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0026AF48u) [[unlikely]] return; }
L_0026AF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AF50u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x0026AF50u) [[unlikely]] return; }
L_0026AF50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[20].w[0]);  if (t) { goto L_0026AFA4; } }
L_0026AF58:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026AFC0; } }
L_0026AF64:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[2].w[0]);  if (t) { goto L_0026B440; } }
L_0026AF70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[21].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0026B010; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026AFE8; } }
L_0026AF90:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u - 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_0026B440; } }
L_0026AFA0:
    st32((c.r[28].w[0] - 32512u), c.r[20].w[0]);
    c.budget -= 1;
L_0026AFA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[20].d[0] = c.r[18].d[0] & 65535ull;
    c.r[1].d[0] = c.r[20].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[6].d[0] = c.r[18].d[0] & c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026AF70u | kUnwind; return; } goto L_0026AF70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026AF58u | kUnwind; return; } goto L_0026AF58; } }
L_0026AFC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AFD8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026AFD8u) [[unlikely]] return; }
L_0026AFD8:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026AF64u | kUnwind; return; } goto L_0026AF64; } }
L_0026AFE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B000u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026B000u) [[unlikely]] return; }
L_0026B000:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026AF90u | kUnwind; return; } goto L_0026AF90; } }
L_0026B010:
    c.r[4].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[2], c.r[23].w[0] << 8);
    set32(c.r[18], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] - 32592u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + 31008u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 32352u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0026B29C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[5], c.r[20].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - 32544u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[4], c.r[2].w[0] << 1);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 32448u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[28].w[0] - 32544u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[2].d[0] = c.r[7].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));  if (t) { goto L_0026B2B8; } }
    set32(c.r[2], 0u + 32767u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] - c.r[7].w[0]);  if (t) { goto L_0026B2B8; } }
L_0026B0B8:
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 1;
L_0026B0BC:
    set32(c.r[2], c.r[28].w[0] - 32536u);
    st32((c.r[28].w[0] - 30276u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[2].d[0] = c.r[5].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0026B2E0; } }
    set32(c.r[2], 0u + 32767u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] - c.r[5].w[0]);  if (t) { goto L_0026B2E0; } }
L_0026B0EC:
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 1;
L_0026B0F0:
    st32((c.r[28].w[0] - 30272u), c.r[3].w[0]);
    c.budget -= 1;
L_0026B0F4:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026B308; } }
    set32(c.r[2], 0u + 57u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_0026B114:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026B338; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[19].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 14;
L_0026B158:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026B358; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_0026B188:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30276u)));  if (t) { goto L_0026B378; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_0026B1B8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30272u)));  if (t) { goto L_0026B398; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_0026B1E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026B3B8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[30].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_0026B218:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026B3D8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_0026B248:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026B3F8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[21].w[0]));
    c.budget -= 8;
L_0026B274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B27Cu);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x0026B27Cu) [[unlikely]] return; }
L_0026B27C:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026B418; } }
L_0026B28C:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_0026B440; } }
L_0026B29C:
    c.r[3].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[28].w[0] - 30276u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30272u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B0F4u | kUnwind; return; } goto L_0026B0F4; } }
L_0026B2B8:
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));  if (t) { goto L_0026B2CC; } }
    set32(c.r[2], c.r[2].w[0] + 4095u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    c.budget -= 2;
L_0026B2CC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B0BCu | kUnwind; return; } goto L_0026B0BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 32767u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B0B8u | kUnwind; return; } goto L_0026B0B8; } }
L_0026B2E0:
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));  if (t) { goto L_0026B2F4; } }
    set32(c.r[2], c.r[2].w[0] + 4095u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    c.budget -= 2;
L_0026B2F4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B0F0u | kUnwind; return; } goto L_0026B0F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 32767u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B0ECu | kUnwind; return; } goto L_0026B0EC; } }
L_0026B308:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B314u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026B314u) [[unlikely]] return; }
L_0026B314:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B324u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026B324u) [[unlikely]] return; }
L_0026B324:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B330u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026B330u) [[unlikely]] return; }
L_0026B330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B114u | kUnwind; return; } goto L_0026B114; } }
L_0026B338:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B344u); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B344u) [[unlikely]] return; }
L_0026B344:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B350u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B350u) [[unlikely]] return; }
L_0026B350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B158u | kUnwind; return; } goto L_0026B158; } }
L_0026B358:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B364u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B364u) [[unlikely]] return; }
L_0026B364:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B370u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B370u) [[unlikely]] return; }
L_0026B370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B188u | kUnwind; return; } goto L_0026B188; } }
L_0026B378:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B384u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B384u) [[unlikely]] return; }
L_0026B384:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B390u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B390u) [[unlikely]] return; }
L_0026B390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B1B8u | kUnwind; return; } goto L_0026B1B8; } }
L_0026B398:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B3A4u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B3A4u) [[unlikely]] return; }
L_0026B3A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B3B0u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B3B0u) [[unlikely]] return; }
L_0026B3B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B1E8u | kUnwind; return; } goto L_0026B1E8; } }
L_0026B3B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B3C4u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B3C4u) [[unlikely]] return; }
L_0026B3C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B3D0u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B3D0u) [[unlikely]] return; }
L_0026B3D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B218u | kUnwind; return; } goto L_0026B218; } }
L_0026B3D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B3E4u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B3E4u) [[unlikely]] return; }
L_0026B3E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B3F0u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B3F0u) [[unlikely]] return; }
L_0026B3F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B248u | kUnwind; return; } goto L_0026B248; } }
L_0026B3F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B404u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B404u) [[unlikely]] return; }
L_0026B404:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B410u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B410u) [[unlikely]] return; }
L_0026B410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B274u | kUnwind; return; } goto L_0026B274; } }
L_0026B418:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B430u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026B430u) [[unlikely]] return; }
L_0026B430:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B28Cu | kUnwind; return; } goto L_0026B28C; } }
L_0026B440:
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
L_0026B470:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B4B8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x0026B4B8u) [[unlikely]] return; }
L_0026B4B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026B508; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0026B508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B4DCu);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0026B4DCu) [[unlikely]] return; }
L_0026B4DC:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B500u); st32((c.r[3].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0026B500u) [[unlikely]] return; }
L_0026B500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B508u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x0026B508u) [[unlikely]] return; }
L_0026B508:
    st32((c.r[28].w[0] - 32512u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[16].d[0] = c.r[19].d[0] & 65535ull;
    c.r[1].d[0] = c.r[16].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = c.r[19].d[0] & c.r[2].d[0];  if (t) { goto L_0026B564; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026B53C; } }
L_0026B530:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[2].w[0]);  if (t) { goto L_0026B93C; } }
L_0026B53C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B554u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026B554u) [[unlikely]] return; }
L_0026B554:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B530u | kUnwind; return; } goto L_0026B530; } }
L_0026B564:
    set32(c.r[2], c.r[22].w[0] << 8);
    set32(c.r[3], 0u + 3u);
    set32(c.r[19], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 32592u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + 31008u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 32352u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[3].w[0]), c.r[20].w[0]);  if (t) { goto L_0026B7B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[5], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - 32544u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[4], c.r[2].w[0] << 1);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 32448u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[28].w[0] - 32544u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[2].d[0] = c.r[7].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_0026B7D4; } }
    set32(c.r[2], 0u + 32767u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[2].w[0] - c.r[7].w[0]);  if (t) { goto L_0026B7D4; } }
L_0026B608:
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 1;
L_0026B60C:
    set32(c.r[2], c.r[28].w[0] - 32536u);
    st32((c.r[28].w[0] - 30276u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[2].d[0] = c.r[5].sd[0] < 16384ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0026B7FC; } }
    set32(c.r[2], 0u + 32767u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] - c.r[5].w[0]);  if (t) { goto L_0026B7FC; } }
L_0026B63C:
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 1;
L_0026B640:
    st32((c.r[28].w[0] - 30272u), c.r[3].w[0]);
    c.budget -= 1;
L_0026B644:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026B824; } }
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), 0u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 3;
L_0026B660:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026B854; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[20].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[20].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 14;
L_0026B6A4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026B874; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_0026B6D4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30276u)));  if (t) { goto L_0026B894; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_0026B704:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30272u)));  if (t) { goto L_0026B8B4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_0026B734:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026B8D4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[23].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 9;
L_0026B764:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026B8F4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30268u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 24832u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.budget -= 8;
L_0026B790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B798u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x0026B798u) [[unlikely]] return; }
L_0026B798:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026B914; } }
L_0026B7A8:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_0026B93C; } }
L_0026B7B8:
    c.r[3].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    st32((c.r[28].w[0] - 30276u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30272u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B644u | kUnwind; return; } goto L_0026B644; } }
L_0026B7D4:
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));  if (t) { goto L_0026B7E8; } }
    set32(c.r[2], c.r[2].w[0] + 4095u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    c.budget -= 2;
L_0026B7E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B60Cu | kUnwind; return; } goto L_0026B60C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 32767u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B608u | kUnwind; return; } goto L_0026B608; } }
L_0026B7FC:
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));  if (t) { goto L_0026B810; } }
    set32(c.r[2], c.r[2].w[0] + 4095u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    c.budget -= 2;
L_0026B810:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B640u | kUnwind; return; } goto L_0026B640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 32767u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B63Cu | kUnwind; return; } goto L_0026B63C; } }
L_0026B824:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B830u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026B830u) [[unlikely]] return; }
L_0026B830:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B840u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026B840u) [[unlikely]] return; }
L_0026B840:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B84Cu); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026B84Cu) [[unlikely]] return; }
L_0026B84C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B660u | kUnwind; return; } goto L_0026B660; } }
L_0026B854:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B860u); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B860u) [[unlikely]] return; }
L_0026B860:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B86Cu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B86Cu) [[unlikely]] return; }
L_0026B86C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B6A4u | kUnwind; return; } goto L_0026B6A4; } }
L_0026B874:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B880u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B880u) [[unlikely]] return; }
L_0026B880:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B88Cu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B88Cu) [[unlikely]] return; }
L_0026B88C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B6D4u | kUnwind; return; } goto L_0026B6D4; } }
L_0026B894:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B8A0u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B8A0u) [[unlikely]] return; }
L_0026B8A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B8ACu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B8ACu) [[unlikely]] return; }
L_0026B8AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B704u | kUnwind; return; } goto L_0026B704; } }
L_0026B8B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B8C0u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B8C0u) [[unlikely]] return; }
L_0026B8C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B8CCu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B8CCu) [[unlikely]] return; }
L_0026B8CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B734u | kUnwind; return; } goto L_0026B734; } }
L_0026B8D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B8E0u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B8E0u) [[unlikely]] return; }
L_0026B8E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B8ECu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B8ECu) [[unlikely]] return; }
L_0026B8EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B764u | kUnwind; return; } goto L_0026B764; } }
L_0026B8F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B900u); set32(c.r[4], c.r[4].w[0] - 28464u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B900u) [[unlikely]] return; }
L_0026B900:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B90Cu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026B90Cu) [[unlikely]] return; }
L_0026B90C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B790u | kUnwind; return; } goto L_0026B790; } }
L_0026B914:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B92Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026B92Cu) [[unlikely]] return; }
L_0026B92C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B7A8u | kUnwind; return; } goto L_0026B7A8; } }
L_0026B93C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0026B970:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B9A0u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x0026B9A0u) [[unlikely]] return; }
L_0026B9A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026B9F0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[20].d[0];  if (t) { goto L_0026B9F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B9C4u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0026B9C4u) [[unlikely]] return; }
L_0026B9C4:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B9E8u); st32((c.r[3].w[0]), c.r[20].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0026B9E8u) [[unlikely]] return; }
L_0026B9E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B9F0u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x0026B9F0u) [[unlikely]] return; }
L_0026B9F0:
    set32(c.r[2], 0u + 126u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; st32((c.r[28].w[0] - 32512u), c.r[20].w[0]);  if (t) { goto L_0026BA88; } }
    set32(c.r[2], 0u + 123u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0026BA88; } }
    set32(c.r[2], 0u + 125u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0026BA88; } }
    set32(c.r[2], 0u + 127u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0026BA88; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0026BA88; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BA34u); set32(c.r[4], c.r[4].w[0] - 25296u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026BA34u) [[unlikely]] return; }
L_0026BA34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BA40u); set32(c.r[4], c.r[4].w[0] - 25264u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026BA40u) [[unlikely]] return; }
L_0026BA40:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026BA60; } }
L_0026BA50:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u - 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_0026BF4C; } }
L_0026BA60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BA78u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026BA78u) [[unlikely]] return; }
L_0026BA78:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BA50u | kUnwind; return; } goto L_0026BA50; } }
L_0026BA88:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0026BBA0; } }
    set32(c.r[2], 0u + 126u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0026BBEC; } }
    set32(c.r[2], 0u + 127u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0026BD4C; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_0026BD4C; } }
    set32(c.r[2], 0u + 125u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_0026BBA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BAC4u);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x0026BAC4u) [[unlikely]] return; }
L_0026BAC4:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026BB14; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[20].d[0];  if (t) { goto L_0026BB14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BAE8u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0026BAE8u) [[unlikely]] return; }
L_0026BAE8:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BB0Cu); st32((c.r[3].w[0]), c.r[20].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0026BB0Cu) [[unlikely]] return; }
L_0026BB0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BB14u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x0026BB14u) [[unlikely]] return; }
L_0026BB14:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 30280u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    st32((c.r[28].w[0] - 32512u), c.r[20].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 30444u), c.r[16].w[0]);  if (t) { goto L_0026BEAC; } }
    set32(c.r[2], 0u + 50u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_0026BB40:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026BEDC; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[16].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.budget -= 13;
L_0026BB80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BB88u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x0026BB88u) [[unlikely]] return; }
L_0026BB88:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026BEFC; } }
L_0026BB98:
    set32(c.r[2], 0u - 1u);
    st32((c.r[28].w[0] - 32512u), c.r[2].w[0]);
    c.budget -= 2;
L_0026BBA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BBC8u); st64((c.r[29].w[0]), 0ull);  if (depth < kMaxDepth) unit_001A(c, 460u, depth + 1u); else { c.pc = 0x0026BF70u; return; } if (c.pc != 0x0026BBC8u) [[unlikely]] return; }
L_0026BBC8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026BF24; } }
L_0026BBDC:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[3].w[0]);  if (t) { goto L_0026BF4C; } }
L_0026BBEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BBF4u);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x0026BBF4u) [[unlikely]] return; }
L_0026BBF4:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026BC44; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[20].d[0];  if (t) { goto L_0026BC44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC18u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0026BC18u) [[unlikely]] return; }
L_0026BC18:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC3Cu); st32((c.r[3].w[0]), c.r[20].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0026BC3Cu) [[unlikely]] return; }
L_0026BC3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC44u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x0026BC44u) [[unlikely]] return; }
L_0026BC44:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 30284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    st32((c.r[28].w[0] - 32512u), c.r[20].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 30440u), c.r[16].w[0]);  if (t) { goto L_0026BCD4; } }
    set32(c.r[2], 0u + 49u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_0026BC70:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026BD04; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[16].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.budget -= 13;
L_0026BCB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BCB8u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x0026BCB8u) [[unlikely]] return; }
L_0026BCB8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026BD24; } }
L_0026BCC8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BBA0u | kUnwind; return; } goto L_0026BBA0; } }
L_0026BCD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BCE0u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026BCE0u) [[unlikely]] return; }
L_0026BCE0:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BCF0u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026BCF0u) [[unlikely]] return; }
L_0026BCF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BCFCu); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026BCFCu) [[unlikely]] return; }
L_0026BCFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BC70u | kUnwind; return; } goto L_0026BC70; } }
L_0026BD04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BD10u); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026BD10u) [[unlikely]] return; }
L_0026BD10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BD1Cu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026BD1Cu) [[unlikely]] return; }
L_0026BD1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BCB0u | kUnwind; return; } goto L_0026BCB0; } }
L_0026BD24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BD3Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026BD3Cu) [[unlikely]] return; }
L_0026BD3C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BCC8u | kUnwind; return; } goto L_0026BCC8; } }
L_0026BD4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BD54u);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x0026BD54u) [[unlikely]] return; }
L_0026BD54:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026BDA4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[20].d[0];  if (t) { goto L_0026BDA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BD78u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0026BD78u) [[unlikely]] return; }
L_0026BD78:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[28].w[0] - 30232u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BD9Cu); st32((c.r[3].w[0]), c.r[20].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0026BD9Cu) [[unlikely]] return; }
L_0026BD9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BDA4u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x0026BDA4u) [[unlikely]] return; }
L_0026BDA4:
    set32(c.r[3], ld32((c.r[28].w[0] - 32528u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 30288u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    st32((c.r[28].w[0] - 32512u), c.r[20].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 32580u), c.r[16].w[0]);  if (t) { goto L_0026BE34; } }
    set32(c.r[2], 0u + 14u);
    st32((c.r[28].w[0] - 30268u), 0u);
    st32((c.r[28].w[0] - 32528u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));
    c.budget -= 4;
L_0026BDD0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0026BE64; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 24832u);
    set32(c.r[5], c.r[16].w[0] >> 16);
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[2], c.r[6].w[0] + 2u);
    st32((c.r[28].w[0] - 30268u), c.r[2].w[0]);
    c.budget -= 13;
L_0026BE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BE18u);  if (depth < kMaxDepth) unit_001B(c, 66u, depth + 1u); else { c.pc = 0x0026C880u; return; } if (c.pc != 0x0026BE18u) [[unlikely]] return; }
L_0026BE18:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30228u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0026BE84; } }
L_0026BE28:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32512u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BBA0u | kUnwind; return; } goto L_0026BBA0; } }
L_0026BE34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BE40u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026BE40u) [[unlikely]] return; }
L_0026BE40:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BE50u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026BE50u) [[unlikely]] return; }
L_0026BE50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BE5Cu); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026BE5Cu) [[unlikely]] return; }
L_0026BE5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BDD0u | kUnwind; return; } goto L_0026BDD0; } }
L_0026BE64:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BE70u); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026BE70u) [[unlikely]] return; }
L_0026BE70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BE7Cu); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026BE7Cu) [[unlikely]] return; }
L_0026BE7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BE10u | kUnwind; return; } goto L_0026BE10; } }
L_0026BE84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BE9Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026BE9Cu) [[unlikely]] return; }
L_0026BE9C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BE28u | kUnwind; return; } goto L_0026BE28; } }
L_0026BEAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BEB8u); set32(c.r[4], c.r[4].w[0] - 28704u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026BEB8u) [[unlikely]] return; }
L_0026BEB8:
    set32(c.r[5], ld32((c.r[28].w[0] - 32528u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BEC8u); set32(c.r[4], c.r[4].w[0] - 28656u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026BEC8u) [[unlikely]] return; }
L_0026BEC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BED4u); set32(c.r[4], c.r[4].w[0] - 28608u);  if (depth < kMaxDepth) unit_0007(c, 257u, depth + 1u); else { c.pc = 0x0021E608u; return; } if (c.pc != 0x0026BED4u) [[unlikely]] return; }
L_0026BED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 30292u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BB40u | kUnwind; return; } goto L_0026BB40; } }
L_0026BEDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BEE8u); set32(c.r[4], c.r[4].w[0] - 28544u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026BEE8u) [[unlikely]] return; }
L_0026BEE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BEF4u); set32(c.r[4], c.r[4].w[0] - 28512u);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x0026BEF4u) [[unlikely]] return; }
L_0026BEF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BB80u | kUnwind; return; } goto L_0026BB80; } }
L_0026BEFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BF14u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026BF14u) [[unlikely]] return; }
L_0026BF14:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BB98u | kUnwind; return; } goto L_0026BB98; } }
L_0026BF24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BF3Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0026BF3Cu) [[unlikely]] return; }
L_0026BF3C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30228u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BBDCu | kUnwind; return; } goto L_0026BBDC; } }
L_0026BF4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0026BF70:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[10].d[0] + 0ull;
    st32((c.r[29].w[0] + 172u), c.r[9].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BFC4u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x0026BFC4u) [[unlikely]] return; }
L_0026BFC4:
    set32(c.r[3], ld32((c.r[28].w[0] - 32512u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_001B(c, 3u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[21].d[0];  if (t) { [[clang::musttail]] return unit_001B(c, 3u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BFE8u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0026BFE8u) [[unlikely]] return; }
L_0026BFE8:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30232u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    [[clang::musttail]] return unit_001B(c, 1u, depth);
}

}

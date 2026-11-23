#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0088[4096] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15, 0, 16, 0,
    17, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 28, 0, 29, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0,
    41, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0,
    53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61,
    0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 71, 0, 72, 0, 73,
    0, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 83, 0, 0, 84,
    0, 85, 0, 0, 86, 0, 87, 0, 0, 88, 0, 89, 0, 0, 90, 0, 91, 0, 0, 92, 0, 93, 0, 0, 94, 0, 95, 0, 0, 96, 0, 97,
    0, 0, 98, 0, 99, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 104, 0, 0, 105, 0, 106, 0, 0,
    107, 0, 108, 0, 0, 109, 0, 110, 0, 0, 111, 0, 112, 0, 0, 113, 0, 114, 0, 0, 115, 0, 116, 0, 0, 117, 0, 118, 0, 0, 119, 0,
    120, 0, 0, 121, 0, 122, 0, 0, 123, 0, 124, 0, 0, 125, 0, 126, 0, 0, 127, 0, 128, 0, 0, 129, 0, 130, 0, 0, 131, 0, 132, 0,
    0, 133, 0, 134, 0, 0, 135, 0, 136, 0, 0, 137, 0, 138, 0, 0, 139, 0, 140, 0, 0, 141, 0, 142, 0, 0, 143, 0, 144, 0, 0, 145,
    0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 246, 247, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 252, 253, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0,
    0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 283, 284, 0, 0,
    0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 287, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0,
    0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0,
    0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 311, 312, 0, 0, 0, 313, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 315, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 323, 324, 0,
    0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 327, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0,
    0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0088(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00420000;
    case 2u: goto L_00420008;
    case 3u: goto L_00420010;
    case 4u: goto L_00420018;
    case 5u: goto L_00420020;
    case 6u: goto L_00420028;
    case 7u: goto L_00420030;
    case 8u: goto L_00420038;
    case 9u: goto L_00420040;
    case 10u: goto L_00420048;
    case 11u: goto L_00420050;
    case 12u: goto L_00420058;
    case 13u: goto L_00420060;
    case 14u: goto L_00420068;
    case 15u: goto L_00420070;
    case 16u: goto L_00420078;
    case 17u: goto L_00420080;
    case 18u: goto L_00420088;
    case 19u: goto L_00420090;
    case 20u: goto L_00420098;
    case 21u: goto L_004200A0;
    case 22u: goto L_004200A8;
    case 23u: goto L_004200C0;
    case 24u: goto L_004200F4;
    case 25u: goto L_00420148;
    case 26u: goto L_00420160;
    case 27u: goto L_00420180;
    case 28u: goto L_00420198;
    case 29u: goto L_004201A0;
    case 30u: goto L_004201A8;
    case 31u: goto L_004201B0;
    case 32u: goto L_004201B8;
    case 33u: goto L_004201C0;
    case 34u: goto L_004201C8;
    case 35u: goto L_004201D0;
    case 36u: goto L_004201D8;
    case 37u: goto L_004201E0;
    case 38u: goto L_004201E8;
    case 39u: goto L_004201F0;
    case 40u: goto L_004201F8;
    case 41u: goto L_00420200;
    case 42u: goto L_00420208;
    case 43u: goto L_00420210;
    case 44u: goto L_00420220;
    case 45u: goto L_00420280;
    case 46u: goto L_00420290;
    case 47u: goto L_004202A0;
    case 48u: goto L_004202B0;
    case 49u: goto L_004202C0;
    case 50u: goto L_004202D0;
    case 51u: goto L_004202E0;
    case 52u: goto L_004202F0;
    case 53u: goto L_00420300;
    case 54u: goto L_00420310;
    case 55u: goto L_00420320;
    case 56u: goto L_00420340;
    case 57u: goto L_0042035C;
    case 58u: goto L_00420364;
    case 59u: goto L_0042036C;
    case 60u: goto L_00420374;
    case 61u: goto L_0042037C;
    case 62u: goto L_00420384;
    case 63u: goto L_0042038C;
    case 64u: goto L_00420394;
    case 65u: goto L_0042039C;
    case 66u: goto L_004203A4;
    case 67u: goto L_004203AC;
    case 68u: goto L_004203C0;
    case 69u: goto L_004203DC;
    case 70u: goto L_004203E4;
    case 71u: goto L_004203EC;
    case 72u: goto L_004203F4;
    case 73u: goto L_004203FC;
    case 74u: goto L_00420404;
    case 75u: goto L_0042040C;
    case 76u: goto L_00420414;
    case 77u: goto L_0042041C;
    case 78u: goto L_00420424;
    case 79u: goto L_0042042C;
    case 80u: goto L_00420440;
    case 81u: goto L_0042045C;
    case 82u: goto L_00420468;
    case 83u: goto L_00420470;
    case 84u: goto L_0042047C;
    case 85u: goto L_00420484;
    case 86u: goto L_00420490;
    case 87u: goto L_00420498;
    case 88u: goto L_004204A4;
    case 89u: goto L_004204AC;
    case 90u: goto L_004204B8;
    case 91u: goto L_004204C0;
    case 92u: goto L_004204CC;
    case 93u: goto L_004204D4;
    case 94u: goto L_004204E0;
    case 95u: goto L_004204E8;
    case 96u: goto L_004204F4;
    case 97u: goto L_004204FC;
    case 98u: goto L_00420508;
    case 99u: goto L_00420510;
    case 100u: goto L_0042051C;
    case 101u: goto L_00420530;
    case 102u: goto L_0042054C;
    case 103u: goto L_00420558;
    case 104u: goto L_00420560;
    case 105u: goto L_0042056C;
    case 106u: goto L_00420574;
    case 107u: goto L_00420580;
    case 108u: goto L_00420588;
    case 109u: goto L_00420594;
    case 110u: goto L_0042059C;
    case 111u: goto L_004205A8;
    case 112u: goto L_004205B0;
    case 113u: goto L_004205BC;
    case 114u: goto L_004205C4;
    case 115u: goto L_004205D0;
    case 116u: goto L_004205D8;
    case 117u: goto L_004205E4;
    case 118u: goto L_004205EC;
    case 119u: goto L_004205F8;
    case 120u: goto L_00420600;
    case 121u: goto L_0042060C;
    case 122u: goto L_00420614;
    case 123u: goto L_00420620;
    case 124u: goto L_00420628;
    case 125u: goto L_00420634;
    case 126u: goto L_0042063C;
    case 127u: goto L_00420648;
    case 128u: goto L_00420650;
    case 129u: goto L_0042065C;
    case 130u: goto L_00420664;
    case 131u: goto L_00420670;
    case 132u: goto L_00420678;
    case 133u: goto L_00420684;
    case 134u: goto L_0042068C;
    case 135u: goto L_00420698;
    case 136u: goto L_004206A0;
    case 137u: goto L_004206AC;
    case 138u: goto L_004206B4;
    case 139u: goto L_004206C0;
    case 140u: goto L_004206C8;
    case 141u: goto L_004206D4;
    case 142u: goto L_004206DC;
    case 143u: goto L_004206E8;
    case 144u: goto L_004206F0;
    case 145u: goto L_004206FC;
    case 146u: goto L_00420704;
    case 147u: goto L_00420710;
    case 148u: goto L_00420730;
    case 149u: goto L_00420758;
    case 150u: goto L_00420764;
    case 151u: goto L_00420780;
    case 152u: goto L_00420794;
    case 153u: goto L_00420810;
    case 154u: goto L_00420844;
    case 155u: goto L_00420860;
    case 156u: goto L_00420960;
    case 157u: goto L_00420990;
    case 158u: goto L_00420A20;
    case 159u: goto L_00420A50;
    case 160u: goto L_00420AE8;
    case 161u: goto L_00420B18;
    case 162u: goto L_00420BB0;
    case 163u: goto L_00420BE0;
    case 164u: goto L_00420C50;
    case 165u: goto L_00420C80;
    case 166u: goto L_00420D18;
    case 167u: goto L_00420D48;
    case 168u: goto L_00420DE0;
    case 169u: goto L_00420E10;
    case 170u: goto L_00420EA8;
    case 171u: goto L_00420ED8;
    case 172u: goto L_00420F70;
    case 173u: goto L_00420FA0;
    case 174u: goto L_00421018;
    case 175u: goto L_00421024;
    case 176u: goto L_00421038;
    case 177u: goto L_00421068;
    case 178u: goto L_00421100;
    case 179u: goto L_00421130;
    case 180u: goto L_004211C8;
    case 181u: goto L_004211F8;
    case 182u: goto L_00421290;
    case 183u: goto L_004212C0;
    case 184u: goto L_00421358;
    case 185u: goto L_00421388;
    case 186u: goto L_00421420;
    case 187u: goto L_00421450;
    case 188u: goto L_004214E8;
    case 189u: goto L_00421518;
    case 190u: goto L_004215B0;
    case 191u: goto L_004215E0;
    case 192u: goto L_00421678;
    case 193u: goto L_004216A8;
    case 194u: goto L_00421740;
    case 195u: goto L_00421770;
    case 196u: goto L_00421808;
    case 197u: goto L_00421818;
    case 198u: goto L_00421838;
    case 199u: goto L_004218D0;
    case 200u: goto L_00421900;
    case 201u: goto L_00421998;
    case 202u: goto L_004219C8;
    case 203u: goto L_00421A60;
    case 204u: goto L_00421A90;
    case 205u: goto L_00421B28;
    case 206u: goto L_00421B58;
    case 207u: goto L_00421BF0;
    case 208u: goto L_00421C20;
    case 209u: goto L_00421CB8;
    case 210u: goto L_00421CE8;
    case 211u: goto L_00421D80;
    case 212u: goto L_00421DB0;
    case 213u: goto L_00421E48;
    case 214u: goto L_00421E78;
    case 215u: goto L_00421FDC;
    case 216u: goto L_0042200C;
    case 217u: goto L_00422030;
    case 218u: goto L_00422070;
    case 219u: goto L_00422084;
    case 220u: goto L_004220D0;
    case 221u: goto L_004220EC;
    case 222u: goto L_00422108;
    case 223u: goto L_0042212C;
    case 224u: goto L_00422180;
    case 225u: goto L_004221B0;
    case 226u: goto L_004221D0;
    case 227u: goto L_004221F0;
    case 228u: goto L_00422210;
    case 229u: goto L_004222B8;
    case 230u: goto L_004222D0;
    case 231u: goto L_004222EC;
    case 232u: goto L_0042231C;
    case 233u: goto L_00422388;
    case 234u: goto L_004223A8;
    case 235u: goto L_004223B8;
    case 236u: goto L_004223D8;
    case 237u: goto L_004223F8;
    case 238u: goto L_00422488;
    case 239u: goto L_004224A0;
    case 240u: goto L_004224C0;
    case 241u: goto L_004225E0;
    case 242u: goto L_00422608;
    case 243u: goto L_0042265C;
    case 244u: goto L_004226DC;
    case 245u: goto L_004226E8;
    case 246u: goto L_00422720;
    case 247u: goto L_00422724;
    case 248u: goto L_00422728;
    case 249u: goto L_00422740;
    case 250u: goto L_00422750;
    case 251u: goto L_00422758;
    case 252u: goto L_00422794;
    case 253u: goto L_00422798;
    case 254u: goto L_0042279C;
    case 255u: goto L_004227AC;
    case 256u: goto L_00422810;
    case 257u: goto L_00422858;
    case 258u: goto L_004228A0;
    case 259u: goto L_004228E4;
    case 260u: goto L_004228F8;
    case 261u: goto L_0042293C;
    case 262u: goto L_00422954;
    case 263u: goto L_00422958;
    case 264u: goto L_0042296C;
    case 265u: goto L_0042298C;
    case 266u: goto L_0042299C;
    case 267u: goto L_004229B4;
    case 268u: goto L_00422A30;
    case 269u: goto L_00422A40;
    case 270u: goto L_00422A88;
    case 271u: goto L_00422AA0;
    case 272u: goto L_00422B1C;
    case 273u: goto L_00422B28;
    case 274u: goto L_00422B30;
    case 275u: goto L_00422BB0;
    case 276u: goto L_00422C60;
    case 277u: goto L_00422D20;
    case 278u: goto L_00422E0C;
    case 279u: goto L_00422E50;
    case 280u: goto L_00422E54;
    case 281u: goto L_00422E68;
    case 282u: goto L_00422EEC;
    case 283u: goto L_00422EF0;
    case 284u: goto L_00422EF4;
    case 285u: goto L_00422F04;
    case 286u: goto L_00422F40;
    case 287u: goto L_00422F44;
    case 288u: goto L_00422F48;
    case 289u: goto L_00422F58;
    case 290u: goto L_004230F0;
    case 291u: goto L_00423130;
    case 292u: goto L_00423178;
    case 293u: goto L_004231D8;
    case 294u: goto L_0042324C;
    case 295u: goto L_00423298;
    case 296u: goto L_004232F4;
    case 297u: goto L_00423460;
    case 298u: goto L_00423484;
    case 299u: goto L_004234CC;
    case 300u: goto L_00423538;
    case 301u: goto L_004235C4;
    case 302u: goto L_00423634;
    case 303u: goto L_00423690;
    case 304u: goto L_004237E4;
    case 305u: goto L_004237F8;
    case 306u: goto L_00423808;
    case 307u: goto L_0042381C;
    case 308u: goto L_00423844;
    case 309u: goto L_00423A10;
    case 310u: goto L_00423A5C;
    case 311u: goto L_00423A60;
    case 312u: goto L_00423A64;
    case 313u: goto L_00423A74;
    case 314u: goto L_00423AB0;
    case 315u: goto L_00423AB4;
    case 316u: goto L_00423AB8;
    case 317u: goto L_00423AC8;
    case 318u: goto L_00423C64;
    case 319u: goto L_00423CA0;
    case 320u: goto L_00423CE4;
    case 321u: goto L_00423D20;
    case 322u: goto L_00423D70;
    case 323u: goto L_00423D74;
    case 324u: goto L_00423D78;
    case 325u: goto L_00423D88;
    case 326u: goto L_00423DC4;
    case 327u: goto L_00423DC8;
    case 328u: goto L_00423DCC;
    case 329u: goto L_00423DDC;
    case 330u: goto L_00423E48;
    case 331u: goto L_00423E68;
    case 332u: goto L_00423E88;
    case 333u: goto L_00423F48;
    case 334u: goto L_00423F84;
    case 335u: goto L_00423FC8;
    default: bad_entry(c, 0x00420000u); return;
    }
L_00420000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420008u); set32(c.r[4], c.r[16].w[0] + 240u);  if (depth < kMaxDepth) unit_00A3(c, 17u, depth + 1u); else { c.pc = 0x0048C1C0u; return; } if (c.pc != 0x00420008u) [[unlikely]] return; }
L_00420008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420010u); set32(c.r[4], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_00AD(c, 201u, depth + 1u); else { c.pc = 0x004B5EB0u; return; } if (c.pc != 0x00420010u) [[unlikely]] return; }
L_00420010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420018u); set32(c.r[4], c.r[16].w[0] + 256u);  if (depth < kMaxDepth) unit_00A4(c, 82u, depth + 1u); else { c.pc = 0x00491C30u; return; } if (c.pc != 0x00420018u) [[unlikely]] return; }
L_00420018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420020u); set32(c.r[4], c.r[16].w[0] + 272u);  if (depth < kMaxDepth) unit_00A4(c, 158u, depth + 1u); else { c.pc = 0x00493E40u; return; } if (c.pc != 0x00420020u) [[unlikely]] return; }
L_00420020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420028u); set32(c.r[4], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_00A3(c, 126u, depth + 1u); else { c.pc = 0x0048D510u; return; } if (c.pc != 0x00420028u) [[unlikely]] return; }
L_00420028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420030u); set32(c.r[4], c.r[16].w[0] + 144u);  if (depth < kMaxDepth) unit_00A2(c, 239u, depth + 1u); else { c.pc = 0x0048B800u; return; } if (c.pc != 0x00420030u) [[unlikely]] return; }
L_00420030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420038u); set32(c.r[4], c.r[16].w[0] + 160u);  if (depth < kMaxDepth) unit_00AF(c, 18u, depth + 1u); else { c.pc = 0x004BC3F0u; return; } if (c.pc != 0x00420038u) [[unlikely]] return; }
L_00420038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420040u); set32(c.r[4], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_00AF(c, 54u, depth + 1u); else { c.pc = 0x004BCD80u; return; } if (c.pc != 0x00420040u) [[unlikely]] return; }
L_00420040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420048u); set32(c.r[4], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_00A5(c, 71u, depth + 1u); else { c.pc = 0x004958C0u; return; } if (c.pc != 0x00420048u) [[unlikely]] return; }
L_00420048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420050u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_00B0(c, 322u, depth + 1u); else { c.pc = 0x004C3B20u; return; } if (c.pc != 0x00420050u) [[unlikely]] return; }
L_00420050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420058u); set32(c.r[4], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_00BF(c, 58u, depth + 1u); else { c.pc = 0x004FC6B0u; return; } if (c.pc != 0x00420058u) [[unlikely]] return; }
L_00420058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420060u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_00C0(c, 239u, depth + 1u); else { c.pc = 0x00502810u; return; } if (c.pc != 0x00420060u) [[unlikely]] return; }
L_00420060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420068u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_00A9(c, 22u, depth + 1u); else { c.pc = 0x004A46B0u; return; } if (c.pc != 0x00420068u) [[unlikely]] return; }
L_00420068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420070u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 54u, depth + 1u); else { c.pc = 0x004C06C0u; return; } if (c.pc != 0x00420070u) [[unlikely]] return; }
L_00420070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420078u); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_00B0(c, 16u, depth + 1u); else { c.pc = 0x004C0160u; return; } if (c.pc != 0x00420078u) [[unlikely]] return; }
L_00420078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420080u); set32(c.r[4], c.r[16].w[0] + 288u);  if (depth < kMaxDepth) unit_00B6(c, 243u, depth + 1u); else { c.pc = 0x004DBD40u; return; } if (c.pc != 0x00420080u) [[unlikely]] return; }
L_00420080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420088u); set32(c.r[4], c.r[16].w[0] + 304u);  if (depth < kMaxDepth) unit_00BA(c, 112u, depth + 1u); else { c.pc = 0x004EA2E0u; return; } if (c.pc != 0x00420088u) [[unlikely]] return; }
L_00420088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420090u); set32(c.r[4], c.r[16].w[0] + 324u);  if (depth < kMaxDepth) unit_00BB(c, 87u, depth + 1u); else { c.pc = 0x004ECD30u; return; } if (c.pc != 0x00420090u) [[unlikely]] return; }
L_00420090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420098u); set32(c.r[4], c.r[16].w[0] + 340u);  if (depth < kMaxDepth) unit_00BB(c, 53u, depth + 1u); else { c.pc = 0x004EC880u; return; } if (c.pc != 0x00420098u) [[unlikely]] return; }
L_00420098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004200A0u); set32(c.r[4], c.r[16].w[0] + 356u);  if (depth < kMaxDepth) unit_00BB(c, 174u, depth + 1u); else { c.pc = 0x004EE030u; return; } if (c.pc != 0x004200A0u) [[unlikely]] return; }
L_004200A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004200A8u); set32(c.r[4], c.r[16].w[0] + 372u);  if (depth < kMaxDepth) unit_00BC(c, 106u, depth + 1u); else { c.pc = 0x004F1600u; return; } if (c.pc != 0x004200A8u) [[unlikely]] return; }
L_004200A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004200C0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[2], ld32((c.r[5].w[0] + 348u)));
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], 0u + 8u);
    set32(c.r[3], c.r[16].w[0] << 6);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
L_004200F4:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004200F4u | kUnwind; return; } goto L_004200F4; } }
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    set32(c.r[4], c.r[18].w[0] + 416u);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 8u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420148u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_00A9(c, 103u, depth + 1u); else { c.pc = 0x004A53A0u; return; } if (c.pc != 0x00420148u) [[unlikely]] return; }
L_00420148:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    set32(c.r[4], c.r[18].w[0] + 80u);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420160u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 42u, depth + 1u); else { c.pc = 0x004C5000u; return; } if (c.pc != 0x00420160u) [[unlikely]] return; }
L_00420160:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00420180:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420198u); set32(c.r[4], c.r[16].w[0] + 288u);  if (depth < kMaxDepth) unit_00A4(c, 154u, depth + 1u); else { c.pc = 0x00493C90u; return; } if (c.pc != 0x00420198u) [[unlikely]] return; }
L_00420198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004201A0u); set32(c.r[4], c.r[16].w[0] + 272u);  if (depth < kMaxDepth) unit_00A3(c, 192u, depth + 1u); else { c.pc = 0x0048EFB0u; return; } if (c.pc != 0x004201A0u) [[unlikely]] return; }
L_004201A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004201A8u); set32(c.r[4], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_00A3(c, 118u, depth + 1u); else { c.pc = 0x0048D410u; return; } if (c.pc != 0x004201A8u) [[unlikely]] return; }
L_004201A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004201B0u); set32(c.r[4], c.r[16].w[0] + 160u);  if (depth < kMaxDepth) unit_00A2(c, 110u, depth + 1u); else { c.pc = 0x00489AD0u; return; } if (c.pc != 0x004201B0u) [[unlikely]] return; }
L_004201B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004201B8u); set32(c.r[4], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_00AF(c, 14u, depth + 1u); else { c.pc = 0x004BC160u; return; } if (c.pc != 0x004201B8u) [[unlikely]] return; }
L_004201B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004201C0u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_00AF(c, 51u, depth + 1u); else { c.pc = 0x004BCCB0u; return; } if (c.pc != 0x004201C0u) [[unlikely]] return; }
L_004201C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004201C8u); set32(c.r[4], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_00A5(c, 66u, depth + 1u); else { c.pc = 0x00495380u; return; } if (c.pc != 0x004201C8u) [[unlikely]] return; }
L_004201C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004201D0u); set32(c.r[4], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_00B0(c, 317u, depth + 1u); else { c.pc = 0x004C3A20u; return; } if (c.pc != 0x004201D0u) [[unlikely]] return; }
L_004201D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004201D8u); set32(c.r[4], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_00BF(c, 53u, depth + 1u); else { c.pc = 0x004FC5B0u; return; } if (c.pc != 0x004201D8u) [[unlikely]] return; }
L_004201D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004201E0u); set32(c.r[4], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_00C0(c, 234u, depth + 1u); else { c.pc = 0x00502710u; return; } if (c.pc != 0x004201E0u) [[unlikely]] return; }
L_004201E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004201E8u); set32(c.r[4], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_00A9(c, 18u, depth + 1u); else { c.pc = 0x004A43A0u; return; } if (c.pc != 0x004201E8u) [[unlikely]] return; }
L_004201E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004201F0u); set32(c.r[4], c.r[16].w[0] + 388u);  if (depth < kMaxDepth) unit_00BC(c, 82u, depth + 1u); else { c.pc = 0x004F11F0u; return; } if (c.pc != 0x004201F0u) [[unlikely]] return; }
L_004201F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004201F8u); set32(c.r[4], c.r[16].w[0] + 416u);  if (depth < kMaxDepth) unit_00A5(c, 174u, depth + 1u); else { c.pc = 0x00497320u; return; } if (c.pc != 0x004201F8u) [[unlikely]] return; }
L_004201F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420200u); set32(c.r[4], c.r[16].w[0] + 432u);  if (depth < kMaxDepth) unit_00A6(c, 82u, depth + 1u); else { c.pc = 0x004992C0u; return; } if (c.pc != 0x00420200u) [[unlikely]] return; }
L_00420200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420208u); set32(c.r[4], c.r[16].w[0] + 464u);  if (depth < kMaxDepth) unit_00A5(c, 136u, depth + 1u); else { c.pc = 0x004967B0u; return; } if (c.pc != 0x00420208u) [[unlikely]] return; }
L_00420208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420210u); set32(c.r[4], c.r[16].w[0] + 496u);  if (depth < kMaxDepth) unit_00A6(c, 177u, depth + 1u); else { c.pc = 0x0049A790u; return; } if (c.pc != 0x00420210u) [[unlikely]] return; }
L_00420210:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00420220:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_00420320; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[20] = ld32((c.r[2].w[0] - 20412u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[20]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 29672u));
    c.f[0] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00420270; } }
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 3;
L_00420270:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420280u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0087(c, 226u, depth + 1u); else { c.pc = 0x0041FD70u; return; } if (c.pc != 0x00420280u) [[unlikely]] return; }
L_00420280:
    set32(c.r[4], c.r[17].w[0] + 416u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420290u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00A5(c, 179u, depth + 1u); else { c.pc = 0x00497450u; return; } if (c.pc != 0x00420290u) [[unlikely]] return; }
L_00420290:
    set32(c.r[4], c.r[17].w[0] + 448u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004202A0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00A5(c, 81u, depth + 1u); else { c.pc = 0x00495AF0u; return; } if (c.pc != 0x004202A0u) [[unlikely]] return; }
L_004202A0:
    set32(c.r[4], c.r[17].w[0] + 432u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004202B0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00A6(c, 57u, depth + 1u); else { c.pc = 0x00498C90u; return; } if (c.pc != 0x004202B0u) [[unlikely]] return; }
L_004202B0:
    set32(c.r[4], c.r[17].w[0] + 464u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004202C0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00A5(c, 112u, depth + 1u); else { c.pc = 0x004961F0u; return; } if (c.pc != 0x004202C0u) [[unlikely]] return; }
L_004202C0:
    set32(c.r[4], c.r[17].w[0] + 480u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004202D0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00A6(c, 4u, depth + 1u); else { c.pc = 0x00498080u; return; } if (c.pc != 0x004202D0u) [[unlikely]] return; }
L_004202D0:
    set32(c.r[4], c.r[17].w[0] + 496u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004202E0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00A6(c, 142u, depth + 1u); else { c.pc = 0x00499DF0u; return; } if (c.pc != 0x004202E0u) [[unlikely]] return; }
L_004202E0:
    set32(c.r[4], c.r[17].w[0] + 512u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004202F0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00A6(c, 97u, depth + 1u); else { c.pc = 0x00499570u; return; } if (c.pc != 0x004202F0u) [[unlikely]] return; }
L_004202F0:
    set32(c.r[4], c.r[17].w[0] + 528u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420300u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00A7(c, 175u, depth + 1u); else { c.pc = 0x0049EF60u; return; } if (c.pc != 0x00420300u) [[unlikely]] return; }
L_00420300:
    set32(c.r[4], c.r[17].w[0] + 544u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420310u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00BE(c, 180u, depth + 1u); else { c.pc = 0x004FAA50u; return; } if (c.pc != 0x00420310u) [[unlikely]] return; }
L_00420310:
    set32(c.r[4], c.r[17].w[0] + 560u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420320u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00C0(c, 171u, depth + 1u); else { c.pc = 0x00501ED0u; return; } if (c.pc != 0x00420320u) [[unlikely]] return; }
L_00420320:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00420340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042035Cu); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0087(c, 249u, depth + 1u); else { c.pc = 0x0041FF00u; return; } if (c.pc != 0x0042035Cu) [[unlikely]] return; }
L_0042035C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420364u); set32(c.r[4], c.r[16].w[0] + 416u);  if (depth < kMaxDepth) unit_00A5(c, 246u, depth + 1u); else { c.pc = 0x00497DA0u; return; } if (c.pc != 0x00420364u) [[unlikely]] return; }
L_00420364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042036Cu); set32(c.r[4], c.r[16].w[0] + 432u);  if (depth < kMaxDepth) unit_00A6(c, 84u, depth + 1u); else { c.pc = 0x00499370u; return; } if (c.pc != 0x0042036Cu) [[unlikely]] return; }
L_0042036C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420374u); set32(c.r[4], c.r[16].w[0] + 448u);  if (depth < kMaxDepth) unit_00A5(c, 104u, depth + 1u); else { c.pc = 0x00495F30u; return; } if (c.pc != 0x00420374u) [[unlikely]] return; }
L_00420374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042037Cu); set32(c.r[4], c.r[16].w[0] + 464u);  if (depth < kMaxDepth) unit_00A5(c, 138u, depth + 1u); else { c.pc = 0x00496860u; return; } if (c.pc != 0x0042037Cu) [[unlikely]] return; }
L_0042037C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420384u); set32(c.r[4], c.r[16].w[0] + 480u);  if (depth < kMaxDepth) unit_00A6(c, 47u, depth + 1u); else { c.pc = 0x00498A80u; return; } if (c.pc != 0x00420384u) [[unlikely]] return; }
L_00420384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042038Cu); set32(c.r[4], c.r[16].w[0] + 496u);  if (depth < kMaxDepth) unit_00A6(c, 179u, depth + 1u); else { c.pc = 0x0049A910u; return; } if (c.pc != 0x0042038Cu) [[unlikely]] return; }
L_0042038C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420394u); set32(c.r[4], c.r[16].w[0] + 512u);  if (depth < kMaxDepth) unit_00A6(c, 124u, depth + 1u); else { c.pc = 0x00499B50u; return; } if (c.pc != 0x00420394u) [[unlikely]] return; }
L_00420394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042039Cu); set32(c.r[4], c.r[16].w[0] + 528u);  if (depth < kMaxDepth) unit_00A7(c, 199u, depth + 1u); else { c.pc = 0x0049F270u; return; } if (c.pc != 0x0042039Cu) [[unlikely]] return; }
L_0042039C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004203A4u); set32(c.r[4], c.r[16].w[0] + 544u);  if (depth < kMaxDepth) unit_00BE(c, 204u, depth + 1u); else { c.pc = 0x004FAF10u; return; } if (c.pc != 0x004203A4u) [[unlikely]] return; }
L_004203A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004203ACu); set32(c.r[4], c.r[16].w[0] + 560u);  if (depth < kMaxDepth) unit_00C0(c, 192u, depth + 1u); else { c.pc = 0x00502170u; return; } if (c.pc != 0x004203ACu) [[unlikely]] return; }
L_004203AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004203C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004203DCu); set32(c.r[4], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0087(c, 273u, depth + 1u); else { c.pc = 0x0041FFE0u; return; } if (c.pc != 0x004203DCu) [[unlikely]] return; }
L_004203DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004203E4u); set32(c.r[4], c.r[16].w[0] + 416u);  if (depth < kMaxDepth) unit_00A5(c, 251u, depth + 1u); else { c.pc = 0x00497E70u; return; } if (c.pc != 0x004203E4u) [[unlikely]] return; }
L_004203E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004203ECu); set32(c.r[4], c.r[16].w[0] + 432u);  if (depth < kMaxDepth) unit_00A6(c, 85u, depth + 1u); else { c.pc = 0x00499380u; return; } if (c.pc != 0x004203ECu) [[unlikely]] return; }
L_004203EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004203F4u); set32(c.r[4], c.r[16].w[0] + 448u);  if (depth < kMaxDepth) unit_00A5(c, 105u, depth + 1u); else { c.pc = 0x00495F40u; return; } if (c.pc != 0x004203F4u) [[unlikely]] return; }
L_004203F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004203FCu); set32(c.r[4], c.r[16].w[0] + 464u);  if (depth < kMaxDepth) unit_00A5(c, 139u, depth + 1u); else { c.pc = 0x00496870u; return; } if (c.pc != 0x004203FCu) [[unlikely]] return; }
L_004203FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420404u); set32(c.r[4], c.r[16].w[0] + 480u);  if (depth < kMaxDepth) unit_00A6(c, 48u, depth + 1u); else { c.pc = 0x00498A90u; return; } if (c.pc != 0x00420404u) [[unlikely]] return; }
L_00420404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042040Cu); set32(c.r[4], c.r[16].w[0] + 496u);  if (depth < kMaxDepth) unit_00A6(c, 180u, depth + 1u); else { c.pc = 0x0049A920u; return; } if (c.pc != 0x0042040Cu) [[unlikely]] return; }
L_0042040C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420414u); set32(c.r[4], c.r[16].w[0] + 512u);  if (depth < kMaxDepth) unit_00A6(c, 130u, depth + 1u); else { c.pc = 0x00499C00u; return; } if (c.pc != 0x00420414u) [[unlikely]] return; }
L_00420414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042041Cu); set32(c.r[4], c.r[16].w[0] + 528u);  if (depth < kMaxDepth) unit_00A7(c, 209u, depth + 1u); else { c.pc = 0x0049F360u; return; } if (c.pc != 0x0042041Cu) [[unlikely]] return; }
L_0042041C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420424u); set32(c.r[4], c.r[16].w[0] + 544u);  if (depth < kMaxDepth) unit_00BE(c, 210u, depth + 1u); else { c.pc = 0x004FAFC0u; return; } if (c.pc != 0x00420424u) [[unlikely]] return; }
L_00420424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042042Cu); set32(c.r[4], c.r[16].w[0] + 560u);  if (depth < kMaxDepth) unit_00C0(c, 198u, depth + 1u); else { c.pc = 0x00502220u; return; } if (c.pc != 0x0042042Cu) [[unlikely]] return; }
L_0042042C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00420440:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042045Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x0042045Cu) [[unlikely]] return; }
L_0042045C:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 64u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420468u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 185u, depth + 1u); else { c.pc = 0x00497520u; return; } if (c.pc != 0x00420468u) [[unlikely]] return; }
L_00420468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420470u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x00420470u) [[unlikely]] return; }
L_00420470:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 58u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042047Cu); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_00A5(c, 92u, depth + 1u); else { c.pc = 0x00495DB0u; return; } if (c.pc != 0x0042047Cu) [[unlikely]] return; }
L_0042047C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420484u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x00420484u) [[unlikely]] return; }
L_00420484:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 62u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420490u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_00A6(c, 62u, depth + 1u); else { c.pc = 0x00498DE0u; return; } if (c.pc != 0x00420490u) [[unlikely]] return; }
L_00420490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420498u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x00420498u) [[unlikely]] return; }
L_00420498:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 56u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004204A4u); set32(c.r[4], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_00A5(c, 117u, depth + 1u); else { c.pc = 0x00496560u; return; } if (c.pc != 0x004204A4u) [[unlikely]] return; }
L_004204A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004204ACu);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x004204ACu) [[unlikely]] return; }
L_004204AC:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 60u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004204B8u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_00A6(c, 9u, depth + 1u); else { c.pc = 0x00498160u; return; } if (c.pc != 0x004204B8u) [[unlikely]] return; }
L_004204B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004204C0u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x004204C0u) [[unlikely]] return; }
L_004204C0:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004204CCu); set32(c.r[4], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_00A6(c, 147u, depth + 1u); else { c.pc = 0x0049A050u; return; } if (c.pc != 0x004204CCu) [[unlikely]] return; }
L_004204CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004204D4u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x004204D4u) [[unlikely]] return; }
L_004204D4:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 66u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004204E0u); set32(c.r[4], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_00A6(c, 110u, depth + 1u); else { c.pc = 0x004999B0u; return; } if (c.pc != 0x004204E0u) [[unlikely]] return; }
L_004204E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004204E8u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x004204E8u) [[unlikely]] return; }
L_004204E8:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 70u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004204F4u); set32(c.r[4], c.r[17].w[0] + 112u);  if (depth < kMaxDepth) unit_00A7(c, 187u, depth + 1u); else { c.pc = 0x0049F0E0u; return; } if (c.pc != 0x004204F4u) [[unlikely]] return; }
L_004204F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004204FCu);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x004204FCu) [[unlikely]] return; }
L_004204FC:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420508u); set32(c.r[4], c.r[17].w[0] + 128u);  if (depth < kMaxDepth) unit_00BE(c, 192u, depth + 1u); else { c.pc = 0x004FAD90u; return; } if (c.pc != 0x00420508u) [[unlikely]] return; }
L_00420508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420510u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x00420510u) [[unlikely]] return; }
L_00420510:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 90u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042051Cu); set32(c.r[4], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_00C0(c, 179u, depth + 1u); else { c.pc = 0x00501FF0u; return; } if (c.pc != 0x0042051Cu) [[unlikely]] return; }
L_0042051C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00420530:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042054Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x0042054Cu) [[unlikely]] return; }
L_0042054C:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 26u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420558u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_00B1(c, 133u, depth + 1u); else { c.pc = 0x004C6910u; return; } if (c.pc != 0x00420558u) [[unlikely]] return; }
L_00420558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420560u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x00420560u) [[unlikely]] return; }
L_00420560:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 28u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042056Cu); set32(c.r[4], c.r[17].w[0] + 208u);  if (depth < kMaxDepth) unit_00BC(c, 33u, depth + 1u); else { c.pc = 0x004F04B0u; return; } if (c.pc != 0x0042056Cu) [[unlikely]] return; }
L_0042056C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420574u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x00420574u) [[unlikely]] return; }
L_00420574:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 30u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420580u); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_00A2(c, 289u, depth + 1u); else { c.pc = 0x0048BFB0u; return; } if (c.pc != 0x00420580u) [[unlikely]] return; }
L_00420580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420588u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x00420588u) [[unlikely]] return; }
L_00420588:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 32u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420594u); set32(c.r[4], c.r[17].w[0] + 224u);  if (depth < kMaxDepth) unit_00AD(c, 185u, depth + 1u); else { c.pc = 0x004B5CA0u; return; } if (c.pc != 0x00420594u) [[unlikely]] return; }
L_00420594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042059Cu);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x0042059Cu) [[unlikely]] return; }
L_0042059C:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 36u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004205A8u); set32(c.r[4], c.r[17].w[0] + 272u);  if (depth < kMaxDepth) unit_00A4(c, 94u, depth + 1u); else { c.pc = 0x00491EC0u; return; } if (c.pc != 0x004205A8u) [[unlikely]] return; }
L_004205A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004205B0u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x004205B0u) [[unlikely]] return; }
L_004205B0:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 38u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004205BCu); set32(c.r[4], c.r[17].w[0] + 256u);  if (depth < kMaxDepth) unit_00A3(c, 204u, depth + 1u); else { c.pc = 0x0048F540u; return; } if (c.pc != 0x004205BCu) [[unlikely]] return; }
L_004205BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004205C4u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x004205C4u) [[unlikely]] return; }
L_004205C4:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 34u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004205D0u); set32(c.r[4], c.r[17].w[0] + 112u);  if (depth < kMaxDepth) unit_00A3(c, 60u, depth + 1u); else { c.pc = 0x0048C950u; return; } if (c.pc != 0x004205D0u) [[unlikely]] return; }
L_004205D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004205D8u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x004205D8u) [[unlikely]] return; }
L_004205D8:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 50u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004205E4u); set32(c.r[4], c.r[17].w[0] + 144u);  if (depth < kMaxDepth) unit_00A2(c, 128u, depth + 1u); else { c.pc = 0x00489DC0u; return; } if (c.pc != 0x004205E4u) [[unlikely]] return; }
L_004205E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004205ECu);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x004205ECu) [[unlikely]] return; }
L_004205EC:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 52u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004205F8u); set32(c.r[4], c.r[17].w[0] + 160u);  if (depth < kMaxDepth) unit_00AE(c, 108u, depth + 1u); else { c.pc = 0x004BA420u; return; } if (c.pc != 0x004205F8u) [[unlikely]] return; }
L_004205F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420600u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x00420600u) [[unlikely]] return; }
L_00420600:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 54u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042060Cu); set32(c.r[4], c.r[17].w[0] + 176u);  if (depth < kMaxDepth) unit_00AF(c, 32u, depth + 1u); else { c.pc = 0x004BCA60u; return; } if (c.pc != 0x0042060Cu) [[unlikely]] return; }
L_0042060C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420614u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x00420614u) [[unlikely]] return; }
L_00420614:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 40u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420620u); set32(c.r[4], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_00A5(c, 11u, depth + 1u); else { c.pc = 0x00494430u; return; } if (c.pc != 0x00420620u) [[unlikely]] return; }
L_00420620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420628u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x00420628u) [[unlikely]] return; }
L_00420628:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 42u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420634u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_00B0(c, 299u, depth + 1u); else { c.pc = 0x004C37D0u; return; } if (c.pc != 0x00420634u) [[unlikely]] return; }
L_00420634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042063Cu);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x0042063Cu) [[unlikely]] return; }
L_0042063C:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 44u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420648u); set32(c.r[4], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_00BF(c, 35u, depth + 1u); else { c.pc = 0x004FC360u; return; } if (c.pc != 0x00420648u) [[unlikely]] return; }
L_00420648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420650u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x00420650u) [[unlikely]] return; }
L_00420650:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 46u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042065Cu); set32(c.r[4], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_00C0(c, 216u, depth + 1u); else { c.pc = 0x005024C0u; return; } if (c.pc != 0x0042065Cu) [[unlikely]] return; }
L_0042065C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420664u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x00420664u) [[unlikely]] return; }
L_00420664:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 48u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420670u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_00A8(c, 268u, depth + 1u); else { c.pc = 0x004A3CC0u; return; } if (c.pc != 0x00420670u) [[unlikely]] return; }
L_00420670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420678u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x00420678u) [[unlikely]] return; }
L_00420678:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 76u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420684u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 35u, depth + 1u); else { c.pc = 0x004C0480u; return; } if (c.pc != 0x00420684u) [[unlikely]] return; }
L_00420684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042068Cu);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x0042068Cu) [[unlikely]] return; }
L_0042068C:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 78u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420698u); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_00AF(c, 269u, depth + 1u); else { c.pc = 0x004BFF40u; return; } if (c.pc != 0x00420698u) [[unlikely]] return; }
L_00420698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004206A0u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x004206A0u) [[unlikely]] return; }
L_004206A0:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 80u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004206ACu); set32(c.r[4], c.r[17].w[0] + 288u);  if (depth < kMaxDepth) unit_00B6(c, 185u, depth + 1u); else { c.pc = 0x004DAF20u; return; } if (c.pc != 0x004206ACu) [[unlikely]] return; }
L_004206AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004206B4u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x004206B4u) [[unlikely]] return; }
L_004206B4:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 24u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004206C0u); set32(c.r[4], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_00BA(c, 60u, depth + 1u); else { c.pc = 0x004E9340u; return; } if (c.pc != 0x004206C0u) [[unlikely]] return; }
L_004206C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004206C8u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x004206C8u) [[unlikely]] return; }
L_004206C8:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 18u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004206D4u); set32(c.r[4], c.r[17].w[0] + 324u);  if (depth < kMaxDepth) unit_00BB(c, 69u, depth + 1u); else { c.pc = 0x004ECB00u; return; } if (c.pc != 0x004206D4u) [[unlikely]] return; }
L_004206D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004206DCu);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x004206DCu) [[unlikely]] return; }
L_004206DC:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 82u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004206E8u); set32(c.r[4], c.r[17].w[0] + 340u);  if (depth < kMaxDepth) unit_00BB(c, 36u, depth + 1u); else { c.pc = 0x004EC650u; return; } if (c.pc != 0x004206E8u) [[unlikely]] return; }
L_004206E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004206F0u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x004206F0u) [[unlikely]] return; }
L_004206F0:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 84u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004206FCu); set32(c.r[4], c.r[17].w[0] + 356u);  if (depth < kMaxDepth) unit_00BB(c, 148u, depth + 1u); else { c.pc = 0x004ED8A0u; return; } if (c.pc != 0x004206FCu) [[unlikely]] return; }
L_004206FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420704u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x00420704u) [[unlikely]] return; }
L_00420704:
    c.r[5].d[0] = ld16((c.r[16].w[0] + 86u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420710u); set32(c.r[4], c.r[17].w[0] + 372u);  if (depth < kMaxDepth) unit_00BC(c, 92u, depth + 1u); else { c.pc = 0x004F1440u; return; } if (c.pc != 0x00420710u) [[unlikely]] return; }
L_00420710:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00420730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420758u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 101u, depth + 1u); else { c.pc = 0x00420530u; return; } if (c.pc != 0x00420758u) [[unlikely]] return; }
L_00420758:
    set32(c.r[4], c.r[17].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420764u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 80u, depth + 1u); else { c.pc = 0x00420440u; return; } if (c.pc != 0x00420764u) [[unlikely]] return; }
L_00420764:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00420780:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0042079C; } }
L_00420794:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[29], c.r[29].w[0] + 16u);  if (t) { goto L_00420804; } }
L_0042079C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[5] = ld32((c.r[3].w[0] + 2440u));
    c.f[6] = ld32((c.r[5].w[0] + 8u));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = ld32((c.r[3].w[0] + 2436u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    st32((c.r[29].w[0] + 8u), c.f[5]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[3].w[0] + 2432u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44610000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0]), c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 4u), c.f[3]);  if (t) { goto L_00420800; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00420794u | kUnwind; return; } goto L_00420794; } }
L_00420800:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 1;
L_00420804:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00420810:
    set32(c.r[29], c.r[29].w[0] - 448u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 13;
L_00420844:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8248u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[17], c.r[4].w[0] + 8248u);  if (t) { goto L_00422020; } }
    c.budget -= 1;
L_00420860:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 34ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00420844u | kUnwind; return; } goto L_00420844; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 8244u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00422040; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 21066u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00422040; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 21067u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00422040; } }
    c.r[4].d[0] = ld8((c.r[28].w[0] - 31490u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 31489u));
    set32(c.r[16], c.r[29].w[0] + 164u);
    c.r[6].d[0] = ld8((c.r[28].w[0] - 31492u));
    set32(c.r[23], c.r[29].w[0] + 441u);
    c.r[5].d[0] = ld8((c.r[28].w[0] - 31491u));
    set32(c.r[30], c.r[29].w[0] + 442u);
    c.r[18].d[0] = ld8((c.r[28].w[0] - 31488u));
    c.r[17].d[0] = ld8((c.r[28].w[0] - 31487u));
    st8((c.r[29].w[0] + 446u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 447u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[21].d[0] = ld8((c.r[28].w[0] - 31486u));
    set32(c.r[4], ld32((c.r[28].w[0] - 31480u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 31476u)));
    c.r[22].d[0] = ld8((c.r[28].w[0] - 31485u));
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x47800000u);
    st8((c.r[29].w[0] + 444u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 443u);
    st8((c.r[29].w[0] + 445u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[29].w[0] + 440u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[30].w[0]), static_cast<std::uint8_t>(c.r[21].w[0]));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[22].w[0]));
    st32((c.r[29].w[0] + 432u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 436u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8016u)));
    c.budget -= 32;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004209D4; } }
    set32(c.r[8], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[9], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_00420930; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00420934; } }
L_00420930:
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_00420934:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00420944; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00420948; } }
L_00420944:
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 1;
L_00420948:
    set32(c.r[2], ld32((c.r[20].w[0] + 8132u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 16576u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420960u); set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00420960u) [[unlikely]] return; }
L_00420960:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420990u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00420990u) [[unlikely]] return; }
L_00420990:
    st32((c.r[20].w[0] + 8248u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42280000u);
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_004209D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004209D4; } }
L_004209D0:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_004209D4:
    set32(c.r[2], ld32((c.r[20].w[0] + 8020u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00420A9C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = ld16((c.r[2].w[0] + 6u));  if (t) { goto L_004209F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004209F4; } }
L_004209F0:
    c.r[7].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 1;
L_004209F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00420A04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00420A08; } }
L_00420A04:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00420A08:
    set32(c.r[2], ld32((c.r[20].w[0] + 8136u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 16647u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420A20u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00420A20u) [[unlikely]] return; }
L_00420A20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420A50u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00420A50u) [[unlikely]] return; }
L_00420A50:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_00420A98; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00420A9C; } }
L_00420A98:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_00420A9C:
    set32(c.r[2], ld32((c.r[20].w[0] + 8024u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00420B64; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = ld16((c.r[2].w[0] + 6u));  if (t) { goto L_00420AB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00420ABC; } }
L_00420AB8:
    c.r[7].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 1;
L_00420ABC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00420ACC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00420AD0; } }
L_00420ACC:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00420AD0:
    set32(c.r[2], ld32((c.r[20].w[0] + 8140u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 16702u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420AE8u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00420AE8u) [[unlikely]] return; }
L_00420AE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420B18u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00420B18u) [[unlikely]] return; }
L_00420B18:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_00420B60; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00420B64; } }
L_00420B60:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_00420B64:
    set32(c.r[2], ld32((c.r[20].w[0] + 8028u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00420C04; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = ld8((c.r[2].w[0] + 5u));  if (t) { goto L_00420B80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00420B84; } }
L_00420B80:
    c.r[7].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 1;
L_00420B84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00420B94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00420B98; } }
L_00420B94:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00420B98:
    set32(c.r[2], ld32((c.r[20].w[0] + 8144u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 16762u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420BB0u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00420BB0u) [[unlikely]] return; }
L_00420BB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420BE0u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00420BE0u) [[unlikely]] return; }
L_00420BE0:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 9;
L_00420C04:
    set32(c.r[2], ld32((c.r[20].w[0] + 8032u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00420CCC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = ld8((c.r[2].w[0] + 5u));  if (t) { goto L_00420C20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00420C24; } }
L_00420C20:
    c.r[7].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 1;
L_00420C24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00420C34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00420C38; } }
L_00420C34:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00420C38:
    set32(c.r[2], ld32((c.r[20].w[0] + 8148u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 16823u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420C50u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00420C50u) [[unlikely]] return; }
L_00420C50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420C80u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00420C80u) [[unlikely]] return; }
L_00420C80:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_00420CC8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00420CCC; } }
L_00420CC8:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_00420CCC:
    set32(c.r[2], ld32((c.r[20].w[0] + 8036u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00420D94; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], ld32((c.r[2].w[0] + 12u)));  if (t) { goto L_00420CE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00420CEC; } }
L_00420CE8:
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_00420CEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00420CFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00420D00; } }
L_00420CFC:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00420D00:
    set32(c.r[2], ld32((c.r[20].w[0] + 8152u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 16890u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420D18u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00420D18u) [[unlikely]] return; }
L_00420D18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420D48u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00420D48u) [[unlikely]] return; }
L_00420D48:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_00420D90; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00420D94; } }
L_00420D90:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_00420D94:
    set32(c.r[2], ld32((c.r[20].w[0] + 8040u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00420E5C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = ld8((c.r[2].w[0] + 5u));  if (t) { goto L_00420DB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00420DB4; } }
L_00420DB0:
    c.r[7].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 1;
L_00420DB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00420DC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00420DC8; } }
L_00420DC4:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00420DC8:
    set32(c.r[2], ld32((c.r[20].w[0] + 8156u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 16948u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420DE0u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00420DE0u) [[unlikely]] return; }
L_00420DE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420E10u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00420E10u) [[unlikely]] return; }
L_00420E10:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_00420E58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00420E5C; } }
L_00420E58:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_00420E5C:
    set32(c.r[2], ld32((c.r[20].w[0] + 8044u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00420F24; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = ld8((c.r[2].w[0] + 5u));  if (t) { goto L_00420E78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00420E7C; } }
L_00420E78:
    c.r[7].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 1;
L_00420E7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00420E8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00420E90; } }
L_00420E8C:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00420E90:
    set32(c.r[2], ld32((c.r[20].w[0] + 8160u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 17006u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420EA8u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00420EA8u) [[unlikely]] return; }
L_00420EA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420ED8u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00420ED8u) [[unlikely]] return; }
L_00420ED8:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_00420F20; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00420F24; } }
L_00420F20:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_00420F24:
    set32(c.r[2], ld32((c.r[20].w[0] + 8088u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00420FEC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = ld16((c.r[2].w[0] + 6u));  if (t) { goto L_00420F40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00420F44; } }
L_00420F40:
    c.r[7].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 1;
L_00420F44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00420F54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00420F58; } }
L_00420F54:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00420F58:
    set32(c.r[2], ld32((c.r[20].w[0] + 8164u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 17064u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420F70u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00420F70u) [[unlikely]] return; }
L_00420F70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00420FA0u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00420FA0u) [[unlikely]] return; }
L_00420FA0:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_00420FE8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00420FEC; } }
L_00420FE8:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_00420FEC:
    set32(c.r[2], ld32((c.r[20].w[0] + 8092u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004210B4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = ld8((c.r[2].w[0] + 5u));  if (t) { goto L_00421008; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0042100C; } }
L_00421008:
    c.r[7].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 1;
L_0042100C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0042101C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00421020; } }
    goto L_0042101C;
L_00421018:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0042101C:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00421020:
    set32(c.r[2], ld32((c.r[20].w[0] + 8168u)));
    c.budget -= 1;
L_00421024:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 17121u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421038u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00421038u) [[unlikely]] return; }
L_00421038:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421068u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00421068u) [[unlikely]] return; }
L_00421068:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_004210B0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004210B4; } }
L_004210B0:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_004210B4:
    set32(c.r[2], ld32((c.r[20].w[0] + 8048u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0042117C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_004210D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004210D4; } }
L_004210D0:
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_004210D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004210E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004210E8; } }
L_004210E4:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_004210E8:
    set32(c.r[2], ld32((c.r[20].w[0] + 8176u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 17179u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421100u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00421100u) [[unlikely]] return; }
L_00421100:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421130u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00421130u) [[unlikely]] return; }
L_00421130:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_00421178; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0042117C; } }
L_00421178:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_0042117C:
    set32(c.r[2], ld32((c.r[20].w[0] + 8052u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00421244; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = ld16((c.r[2].w[0] + 6u));  if (t) { goto L_00421198; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0042119C; } }
L_00421198:
    c.r[7].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 1;
L_0042119C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004211AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004211B0; } }
L_004211AC:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_004211B0:
    set32(c.r[2], ld32((c.r[20].w[0] + 8180u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 17179u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004211C8u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x004211C8u) [[unlikely]] return; }
L_004211C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004211F8u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x004211F8u) [[unlikely]] return; }
L_004211F8:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_00421240; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00421244; } }
L_00421240:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_00421244:
    set32(c.r[2], ld32((c.r[20].w[0] + 8056u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0042130C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_00421260; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00421264; } }
L_00421260:
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_00421264:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00421274; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00421278; } }
L_00421274:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00421278:
    set32(c.r[2], ld32((c.r[20].w[0] + 8184u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 17238u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421290u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00421290u) [[unlikely]] return; }
L_00421290:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004212C0u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x004212C0u) [[unlikely]] return; }
L_004212C0:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_00421308; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0042130C; } }
L_00421308:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_0042130C:
    set32(c.r[2], ld32((c.r[20].w[0] + 8060u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004213D4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_00421328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0042132C; } }
L_00421328:
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_0042132C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0042133C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00421340; } }
L_0042133C:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00421340:
    set32(c.r[2], ld32((c.r[20].w[0] + 8188u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 17293u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421358u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00421358u) [[unlikely]] return; }
L_00421358:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421388u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00421388u) [[unlikely]] return; }
L_00421388:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_004213D0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004213D4; } }
L_004213D0:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_004213D4:
    set32(c.r[2], ld32((c.r[20].w[0] + 8064u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0042149C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_004213F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004213F4; } }
L_004213F0:
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_004213F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00421404; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00421408; } }
L_00421404:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00421408:
    set32(c.r[2], ld32((c.r[20].w[0] + 8192u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 17293u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421420u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00421420u) [[unlikely]] return; }
L_00421420:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421450u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00421450u) [[unlikely]] return; }
L_00421450:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_00421498; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0042149C; } }
L_00421498:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_0042149C:
    set32(c.r[2], ld32((c.r[20].w[0] + 8068u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00421564; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = ld16((c.r[2].w[0] + 6u));  if (t) { goto L_004214B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004214BC; } }
L_004214B8:
    c.r[7].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 1;
L_004214BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004214CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004214D0; } }
L_004214CC:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_004214D0:
    set32(c.r[2], ld32((c.r[20].w[0] + 8196u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 17353u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004214E8u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x004214E8u) [[unlikely]] return; }
L_004214E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421518u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00421518u) [[unlikely]] return; }
L_00421518:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_00421560; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00421564; } }
L_00421560:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_00421564:
    set32(c.r[2], ld32((c.r[20].w[0] + 8072u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0042162C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = ld8((c.r[2].w[0] + 5u));  if (t) { goto L_00421580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00421584; } }
L_00421580:
    c.r[7].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 1;
L_00421584:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00421594; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00421598; } }
L_00421594:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00421598:
    set32(c.r[2], ld32((c.r[20].w[0] + 8200u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 17419u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004215B0u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x004215B0u) [[unlikely]] return; }
L_004215B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004215E0u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x004215E0u) [[unlikely]] return; }
L_004215E0:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_00421628; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0042162C; } }
L_00421628:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_0042162C:
    set32(c.r[2], ld32((c.r[20].w[0] + 8120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004216F4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = ld8((c.r[2].w[0] + 5u));  if (t) { goto L_00421648; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0042164C; } }
L_00421648:
    c.r[7].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 1;
L_0042164C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0042165C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00421660; } }
L_0042165C:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00421660:
    set32(c.r[2], ld32((c.r[20].w[0] + 8232u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 17419u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421678u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00421678u) [[unlikely]] return; }
L_00421678:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004216A8u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x004216A8u) [[unlikely]] return; }
L_004216A8:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_004216F0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004216F4; } }
L_004216F0:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_004216F4:
    set32(c.r[2], ld32((c.r[20].w[0] + 8076u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004217BC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = ld8((c.r[2].w[0] + 5u));  if (t) { goto L_00421710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00421714; } }
L_00421710:
    c.r[7].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 1;
L_00421714:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00421724; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00421728; } }
L_00421724:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00421728:
    set32(c.r[2], ld32((c.r[20].w[0] + 8204u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 17483u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421740u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00421740u) [[unlikely]] return; }
L_00421740:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421770u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00421770u) [[unlikely]] return; }
L_00421770:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_004217B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004217BC; } }
L_004217B8:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_004217BC:
    set32(c.r[2], ld32((c.r[20].w[0] + 8080u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00421884; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = ld8((c.r[2].w[0] + 5u));  if (t) { goto L_004217D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004217DC; } }
L_004217D8:
    c.r[7].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 1;
L_004217DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004217EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004217F0; } }
L_004217EC:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_004217F0:
    set32(c.r[2], ld32((c.r[20].w[0] + 8208u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 17547u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421808u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00421808u) [[unlikely]] return; }
L_00421808:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.budget -= 4;
L_00421818:
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421838u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00421838u) [[unlikely]] return; }
L_00421838:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_00421880; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00421884; } }
L_00421880:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_00421884:
    set32(c.r[2], ld32((c.r[20].w[0] + 8084u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0042194C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], ld32((c.r[2].w[0] + 12u)));  if (t) { goto L_004218A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004218A4; } }
L_004218A0:
    set32(c.r[7], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_004218A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004218B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004218B8; } }
L_004218B4:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_004218B8:
    set32(c.r[2], ld32((c.r[20].w[0] + 8212u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 17609u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004218D0u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x004218D0u) [[unlikely]] return; }
L_004218D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421900u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00421900u) [[unlikely]] return; }
L_00421900:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_00421948; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0042194C; } }
L_00421948:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_0042194C:
    set32(c.r[2], ld32((c.r[20].w[0] + 8096u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00421A14; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = ld8((c.r[2].w[0] + 5u));  if (t) { goto L_00421968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0042196C; } }
L_00421968:
    c.r[7].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 1;
L_0042196C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0042197C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00421980; } }
L_0042197C:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00421980:
    set32(c.r[2], ld32((c.r[20].w[0] + 8172u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 17671u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421998u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00421998u) [[unlikely]] return; }
L_00421998:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004219C8u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x004219C8u) [[unlikely]] return; }
L_004219C8:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_00421A10; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00421A14; } }
L_00421A10:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_00421A14:
    set32(c.r[2], ld32((c.r[20].w[0] + 8100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00421ADC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = ld8((c.r[2].w[0] + 5u));  if (t) { goto L_00421A30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00421A34; } }
L_00421A30:
    c.r[7].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 1;
L_00421A34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00421A44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00421A48; } }
L_00421A44:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00421A48:
    set32(c.r[2], ld32((c.r[20].w[0] + 8216u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 17729u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421A60u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00421A60u) [[unlikely]] return; }
L_00421A60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421A90u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00421A90u) [[unlikely]] return; }
L_00421A90:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_00421AD8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00421ADC; } }
L_00421AD8:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_00421ADC:
    set32(c.r[2], ld32((c.r[20].w[0] + 8104u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00421BA4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = ld8((c.r[2].w[0] + 5u));  if (t) { goto L_00421AF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00421AFC; } }
L_00421AF8:
    c.r[7].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 1;
L_00421AFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00421B0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00421B10; } }
L_00421B0C:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00421B10:
    set32(c.r[2], ld32((c.r[20].w[0] + 8220u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 17797u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421B28u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00421B28u) [[unlikely]] return; }
L_00421B28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421B58u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00421B58u) [[unlikely]] return; }
L_00421B58:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_00421BA0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00421BA4; } }
L_00421BA0:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_00421BA4:
    set32(c.r[2], ld32((c.r[20].w[0] + 8108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00421C6C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = ld16((c.r[2].w[0] + 6u));  if (t) { goto L_00421BC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00421BC4; } }
L_00421BC0:
    c.r[7].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 1;
L_00421BC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00421BD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00421BD8; } }
L_00421BD4:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00421BD8:
    set32(c.r[2], ld32((c.r[20].w[0] + 8224u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 17863u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421BF0u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00421BF0u) [[unlikely]] return; }
L_00421BF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421C20u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00421C20u) [[unlikely]] return; }
L_00421C20:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_00421C68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00421C6C; } }
L_00421C68:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_00421C6C:
    set32(c.r[2], ld32((c.r[20].w[0] + 8112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00421D34; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_00421C88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00421C8C; } }
L_00421C88:
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_00421C8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00421C9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00421CA0; } }
L_00421C9C:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00421CA0:
    set32(c.r[2], ld32((c.r[20].w[0] + 8228u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 17919u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421CB8u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00421CB8u) [[unlikely]] return; }
L_00421CB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421CE8u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00421CE8u) [[unlikely]] return; }
L_00421CE8:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_00421D30; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00421D34; } }
L_00421D30:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_00421D34:
    set32(c.r[2], ld32((c.r[20].w[0] + 8116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00421DFC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], ld32((c.r[2].w[0] + 8u)));  if (t) { goto L_00421D50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00421D54; } }
L_00421D50:
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_00421D54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00421D64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00421D68; } }
L_00421D64:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00421D68:
    set32(c.r[2], ld32((c.r[20].w[0] + 8240u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 17979u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421D80u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00421D80u) [[unlikely]] return; }
L_00421D80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421DB0u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00421DB0u) [[unlikely]] return; }
L_00421DB0:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_00421DF8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00421DFC; } }
L_00421DF8:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_00421DFC:
    set32(c.r[2], ld32((c.r[20].w[0] + 8124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00421EC4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[8].d[0] = ld16((c.r[2].w[0] + 6u));  if (t) { goto L_00421E18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00421E1C; } }
L_00421E18:
    c.r[7].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 1;
L_00421E1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00421E2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00421E30; } }
L_00421E2C:
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_00421E30:
    set32(c.r[2], ld32((c.r[20].w[0] + 8236u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] + 17979u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421E48u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00421E48u) [[unlikely]] return; }
L_00421E48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421E78u); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x00421E78u) [[unlikely]] return; }
L_00421E78:
    set32(c.r[4], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 8248u), c.r[2].w[0]);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_00421EC0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 160u), c.r[3].w[0]);  if (t) { goto L_00421EC4; } }
L_00421EC0:
    st32((c.r[16].w[0]), c.f[1]);
    c.budget -= 1;
L_00421EC4:
    set32(c.r[2], c.r[29].w[0] + 443u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], c.r[29].w[0] + 176u);
    st8((c.r[30].w[0]), static_cast<std::uint8_t>(c.r[21].w[0]));
    set32(c.r[5], c.r[5].w[0] + 18044u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[22].w[0]));
    set32(c.r[7], 0u + 500u);
    st8((c.r[29].w[0] + 440u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[11], ld32((c.r[20].w[0] + 8132u)));
    set32(c.r[9], ld32((c.r[20].w[0] + 8136u)));
    set32(c.r[8], ld32((c.r[20].w[0] + 8140u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 8144u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8148u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 8152u)));
    set32(c.r[10], ld32((c.r[20].w[0] + 8156u)));
    set32(c.r[11], c.r[11].w[0] + c.r[9].w[0]);
    set32(c.r[11], c.r[8].w[0] + c.r[11].w[0]);
    set32(c.r[9], ld32((c.r[20].w[0] + 8160u)));
    set32(c.r[11], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[8], ld32((c.r[20].w[0] + 8164u)));
    set32(c.r[11], c.r[2].w[0] + c.r[11].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8168u)));
    set32(c.r[11], c.r[6].w[0] + c.r[11].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8176u)));
    set32(c.r[11], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[6], ld32((c.r[20].w[0] + 8180u)));
    set32(c.r[10], ld32((c.r[20].w[0] + 8184u)));
    set32(c.r[11], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[8].w[0] + c.r[11].w[0]);
    set32(c.r[9], ld32((c.r[20].w[0] + 8188u)));
    set32(c.r[11], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[8], ld32((c.r[20].w[0] + 8192u)));
    set32(c.r[11], c.r[2].w[0] + c.r[11].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8196u)));
    set32(c.r[11], c.r[6].w[0] + c.r[11].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8200u)));
    set32(c.r[11], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[6], ld32((c.r[20].w[0] + 8232u)));
    set32(c.r[10], ld32((c.r[20].w[0] + 8204u)));
    set32(c.r[11], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[8].w[0] + c.r[11].w[0]);
    set32(c.r[9], ld32((c.r[20].w[0] + 8208u)));
    set32(c.r[11], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[8], ld32((c.r[20].w[0] + 8212u)));
    set32(c.r[11], c.r[2].w[0] + c.r[11].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8172u)));
    set32(c.r[11], c.r[6].w[0] + c.r[11].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8216u)));
    set32(c.r[11], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[6], ld32((c.r[20].w[0] + 8220u)));
    set32(c.r[10], ld32((c.r[20].w[0] + 8224u)));
    set32(c.r[11], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[11], c.r[8].w[0] + c.r[11].w[0]);
    set32(c.r[9], ld32((c.r[20].w[0] + 8228u)));
    set32(c.r[11], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[8], ld32((c.r[20].w[0] + 8240u)));
    set32(c.r[11], c.r[2].w[0] + c.r[11].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8236u)));
    set32(c.r[11], c.r[6].w[0] + c.r[11].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8128u)));
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[6], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 10));
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    c.budget -= 70;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00421FDCu); set32(c.r[10], c.r[8].w[0] + c.r[9].w[0]);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00421FDCu) [[unlikely]] return; }
L_00421FDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 19112u)));
    c.f[12] = c.r[3].w[0];
    c.f[13] = 0u;
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[7], c.r[29].w[0] + 432u);
    set32(c.r[8], c.r[29].w[0] + 444u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042200Cu); set32(c.r[10], 0u + 2u);  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x002EDA10u; return; } if (c.pc != 0x0042200Cu) [[unlikely]] return; }
L_0042200C:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    st32((c.r[3].w[0] + 8248u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00422040; } }
L_00422020:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422030u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x00422030u) [[unlikely]] return; }
L_00422030:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00420860u | kUnwind; return; } goto L_00420860; } }
    c.budget -= 1;
L_00422040:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 448u);  c.pc = t; return; }
L_00422070:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[4].w[0] + 8244u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[3].w[0] + 16568u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
L_00422084:
    st32((c.r[6].w[0] + 8248u), c.r[5].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    st32((c.r[6].w[0] + 8252u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    st32((c.r[6].w[0] + 8256u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 8260u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 8264u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 8268u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 8272u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 8276u), c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422084u | kUnwind; return; } goto L_00422084; } }
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 8248u), c.r[5].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 8252u), c.r[5].w[0]);  c.pc = t; return; }
L_004220D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 7;
L_004220EC:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8248u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[18], c.r[4].w[0] + 8248u);  if (t) { goto L_00422170; } }
    c.budget -= 1;
L_00422108:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 34ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004220ECu | kUnwind; return; } goto L_004220EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st8((c.r[17].w[0] + 8244u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[3].w[0] + 16568u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
L_0042212C:
    st32((c.r[5].w[0] + 8248u), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 8252u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    st32((c.r[5].w[0] + 8256u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 8260u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 8264u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 8268u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 8272u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 8276u), c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0042212Cu | kUnwind; return; } goto L_0042212C; } }
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 8248u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8252u), c.r[4].w[0]);  if (t) { goto L_00422190; } }
L_00422170:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422180u); set32(c.r[4], c.r[4].w[0] - 19120u);  if (depth < kMaxDepth) unit_003C(c, 76u, depth + 1u); else { c.pc = 0x002F07D0u; return; } if (c.pc != 0x00422180u) [[unlikely]] return; }
L_00422180:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422108u | kUnwind; return; } goto L_00422108; } }
    c.budget -= 1;
L_00422190:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004221B0:
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 222u)));
    set32(c.r[6], c.r[5].w[0] + 8u);
    st8((c.r[5].w[0] + 220u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[5].w[0] + 216u), 0u);
    set32(c.r[3], 0u + 10u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[8], 0u + 1u);
    c.budget -= 8;
L_004221D0:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[7], c.r[9].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00422240; } }
L_004221F0:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_004224D0; } }
    c.budget -= 1;
L_00422210:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == c.r[7].d[0];  if (t) { goto L_004224D8; } }
    set32(c.r[7], c.r[9].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004221F0u | kUnwind; return; } goto L_004221F0; } }
    c.budget -= 1;
L_00422240:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[12], ld32((c.r[6].w[0] + 208u)));
    set32(c.r[7], c.r[9].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[11], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[11].w[0] + 16u)));
    c.r[7].d[0] = c.r[7].d[0] & c.r[12].d[0];
    c.budget -= 10;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[9], c.r[11].w[0] + 16u);  if (t) { goto L_004224E0; } }
    set32(c.r[7], ld32((c.r[9].w[0])));
    c.r[7].d[0] = c.r[7].d[0] | c.r[12].d[0];
    st32((c.r[9].w[0]), c.r[7].w[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[7], ld32((c.r[6].w[0] + 204u)));
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[9], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[9], ld32((c.r[9].w[0] + 12u)));
    c.r[7].d[0] = c.r[7].d[0] & c.r[9].d[0];
    c.budget -= 13;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_004222D0; } }
    set32(c.r[7], c.r[11].w[0] + 1u);
    st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = c.r[7].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_00422500; } }
    c.budget -= 1;
L_004222B8:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_004222D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_004222EC; } }
L_004222D0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004221D0u | kUnwind; return; } goto L_004221D0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 212u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[12], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_004222EC:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull;  if (t) { goto L_004224C8; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    set32(c.r[5], 0u + 10u);
    c.f[1] = c.r[9].w[0];
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[13], 0u + 1u);
    set32(c.r[8], 0u + 2u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], 0u - 1u);
    set32(c.r[14], 0u + 62u);
    set32(c.r[9], 0u + 4u);
    c.budget -= 10;
L_0042231C:
    set32(c.r[10], ld32((c.r[12].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == c.r[9].d[0];  if (t) { goto L_00422348; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == c.r[8].d[0];  if (t) { goto L_00422338; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00422388; } }
L_00422338:
    set32(c.r[10], ld32((c.r[12].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 56u), c.r[10].w[0]);  if (t) { goto L_00422388; } }
    c.budget -= 1;
L_00422348:
    c.r[10].d[0] = ld8((c.r[12].w[0] + 4u));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != c.r[7].d[0];  if (t) { goto L_00422508; } }
    st8((c.r[4].w[0] + 160u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 124u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 128u), c.f[0]);
    set32(c.r[10], ld32((c.r[12].w[0])));
    c.f[0] = ld32((c.r[10].w[0] + 32u));
    st32((c.r[4].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 36u));
    st32((c.r[4].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 40u));
    st32((c.r[4].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 44u));
    st32((c.r[4].w[0] + 92u), c.f[0]);
    c.budget -= 13;
L_00422388:
    set32(c.r[12], ld32((c.r[4].w[0] + 36u)));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0] + 220u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st8((c.r[12].w[0] + 220u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = c.r[10].d[0] << 56;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    c.budget -= 8;
    { const bool t = c.r[10].d[0] == c.r[5].d[0]; set32(c.r[11], c.r[12].w[0] + 8u);  if (t) { goto L_00422588; } }
L_004223A8:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 212u)));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[12].d[0] == c.r[10].d[0];  if (t) { goto L_00422590; } }
L_004223B8:
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 212u)));
    set32(c.r[12], c.r[15].w[0] << 2);
    set32(c.r[12], c.r[12].w[0] + c.r[15].w[0]);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[25], c.r[11].w[0] + c.r[12].w[0]);
    c.r[12].d[0] = ld8((c.r[25].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[12].d[0] == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_00422428; } }
L_004223D8:
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 212u)));
    set32(c.r[12], c.r[12].w[0] + 1u);
    st8((c.r[11].w[0] + 212u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = c.r[12].d[0] << 56;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 56);
    c.budget -= 7;
    { const bool t = c.r[12].d[0] == c.r[5].d[0];  if (t) { goto L_00422598; } }
    c.budget -= 1;
L_004223F8:
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 212u)));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == c.r[12].d[0];  if (t) { goto L_004225A0; } }
    set32(c.r[12], c.r[15].w[0] << 2);
    set32(c.r[12], c.r[12].w[0] + c.r[15].w[0]);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[25], c.r[11].w[0] + c.r[12].w[0]);
    c.r[12].d[0] = ld8((c.r[25].w[0] + 8u));
    c.budget -= 7;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004223D8u | kUnwind; return; } goto L_004223D8; } }
    c.budget -= 1;
L_00422428:
    set32(c.r[24], ld32((c.r[11].w[0] + 208u)));
    set32(c.r[12], ld32((c.r[25].w[0] + 16u)));
    c.r[12].d[0] = c.r[12].d[0] & c.r[24].d[0];
    c.budget -= 5;
    { const bool t = c.r[12].d[0] != 0ull; set32(c.r[15], c.r[25].w[0] + 16u);  if (t) { goto L_004225A8; } }
    set32(c.r[12], ld32((c.r[15].w[0])));
    c.r[12].d[0] = c.r[12].d[0] | c.r[24].d[0];
    st32((c.r[15].w[0]), c.r[12].w[0]);
    c.r[24].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 212u)));
    set32(c.r[12], ld32((c.r[11].w[0] + 204u)));
    set32(c.r[15], c.r[24].w[0] << 2);
    set32(c.r[15], c.r[15].w[0] + c.r[24].w[0]);
    set32(c.r[15], c.r[15].w[0] << 2);
    set32(c.r[15], c.r[11].w[0] + c.r[15].w[0]);
    set32(c.r[15], ld32((c.r[15].w[0] + 12u)));
    c.r[12].d[0] = c.r[12].d[0] & c.r[15].d[0];
    c.budget -= 13;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { goto L_004224A0; } }
    set32(c.r[12], c.r[24].w[0] + 1u);
    st8((c.r[11].w[0] + 212u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = c.r[12].d[0] << 56;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[12].d[0] == c.r[5].d[0]; c.r[10].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_004225C8; } }
L_00422488:
    c.r[15].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 212u)));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 214u)));
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != c.r[12].d[0];  if (t) { goto L_004224A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_004224C0; } }
L_004224A0:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004223B8u | kUnwind; return; } goto L_004223B8; } }
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 212u)));
    set32(c.r[10], c.r[12].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[12].w[0]);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[12], c.r[11].w[0] + c.r[10].w[0]);
    c.budget -= 6;
L_004224C0:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0042231Cu | kUnwind; return; } goto L_0042231C; } }
L_004224C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004225D0; } }
L_004224D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422210u | kUnwind; return; } goto L_00422210; } }
L_004224D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004222ECu | kUnwind; return; } goto L_004222EC; } }
L_004224E0:
    st8((c.r[11].w[0] + 8u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    st32((c.r[11].w[0] + 12u), c.r[8].w[0]);
    st8((c.r[11].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 213u)));
    set32(c.r[7], c.r[7].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 213u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004222D0u | kUnwind; return; } goto L_004222D0; } }
L_00422500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004222B8u | kUnwind; return; } goto L_004222B8; } }
L_00422508:
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 160u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st8((c.r[4].w[0] + 160u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[11], ld32((c.r[4].w[0] + 40u)));
    c.r[10].d[0] = ld8((c.r[11].w[0] + 552u));
    c.budget -= 7;
    { const bool t = c.r[10].d[0] != c.r[14].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422388u | kUnwind; return; } goto L_00422388; } }
    c.r[10].d[0] = ld8((c.r[12].w[0] + 4u));
    c.r[1].d[0] = c.r[10].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00422560; } }
    set32(c.r[10], ld32((c.r[12].w[0])));
    c.f[0] = ld32((c.r[10].w[0] + 32u));
    st32((c.r[4].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 36u));
    st32((c.r[4].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 40u));
    st32((c.r[4].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 44u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 92u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422388u | kUnwind; return; } goto L_00422388; } }
    c.budget -= 1;
L_00422560:
    c.f[0] = ld32((c.r[11].w[0] + 32u));
    st32((c.r[4].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 36u));
    st32((c.r[4].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 40u));
    st32((c.r[4].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 44u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 92u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422388u | kUnwind; return; } goto L_00422388; } }
    c.budget -= 1;
L_00422588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[11].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004223A8u | kUnwind; return; } goto L_004223A8; } }
L_00422590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004224C0u | kUnwind; return; } goto L_004224C0; } }
L_00422598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[11].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004223F8u | kUnwind; return; } goto L_004223F8; } }
L_004225A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004224C0u | kUnwind; return; } goto L_004224C0; } }
L_004225A8:
    st8((c.r[25].w[0] + 8u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st32((c.r[25].w[0] + 12u), c.r[13].w[0]);
    c.r[10].d[0] = c.r[3].d[0] + 0ull;
    st8((c.r[25].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 213u)));
    set32(c.r[12], c.r[12].w[0] - 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[11].w[0] + 213u), static_cast<std::uint8_t>(c.r[12].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004224A0u | kUnwind; return; } goto L_004224A0; } }
L_004225C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[11].w[0] + 212u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422488u | kUnwind; return; } goto L_00422488; } }
L_004225D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004225E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 530u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004227B4; } }
L_00422608:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 161u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00422638; } }
    c.f[1] = ld32((c.r[17].w[0] + 128u));
    c.f[0] = ld32((c.r[17].w[0] + 124u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00422638; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00422638:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 148u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 148u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042265Cu); set32(c.r[4], c.r[17].w[0] + 108u);  if (depth < kMaxDepth) unit_0089(c, 7u, depth + 1u); else { c.pc = 0x00424080u; return; } if (c.pc != 0x0042265Cu) [[unlikely]] return; }
L_0042265C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004227D4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], 0u + 100u);
    set32(c.r[11], c.r[4].w[0] + 544u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 552u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004227D4; } }
    c.r[10].d[0] = ld16((c.r[11].w[0]));
    set32(c.r[8], 0u - 3u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[6], c.r[17].w[0] + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld16((c.r[11].w[0]));
    c.r[4].d[0] = c.r[8].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[11].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[11].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004226DCu); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 203u, depth + 1u); else { c.pc = 0x0028A1F0u; return; } if (c.pc != 0x004226DCu) [[unlikely]] return; }
L_004226DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 112u));  if (t) { goto L_004227D8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 1;
L_004226E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00422740; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 188u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004227F0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00422830; } }
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 180u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004227F8; } }
L_00422720:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00422724:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00422728:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00422740; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], c.r[17].w[0] + 180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422740u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x00422740u) [[unlikely]] return; }
L_00422740:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], c.r[17].w[0] + 180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422750u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 118u, depth + 1u); else { c.pc = 0x00416580u; return; } if (c.pc != 0x00422750u) [[unlikely]] return; }
L_00422750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004227AC; } }
L_00422758:
    set32(c.r[3], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00422880; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 188u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00422838; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00422878; } }
    set32(c.r[16], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 180u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00422840; } }
L_00422794:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00422798:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0042279C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00422880; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004227ACu); set32(c.r[4], c.r[17].w[0] + 180u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x004227ACu) [[unlikely]] return; }
L_004227AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00422884; } }
L_004227B4:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 161u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 161u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422608u | kUnwind; return; } goto L_00422608; } }
L_004227D4:
    c.f[1] = ld32((c.r[17].w[0] + 112u));
    c.budget -= 1;
L_004227D8:
    c.f[0] = ld32((c.r[17].w[0] + 140u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422758u | kUnwind; return; } goto L_00422758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 184u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004226E8u | kUnwind; return; } goto L_004226E8; } }
L_004227F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422728u | kUnwind; return; } goto L_00422728; } }
L_004227F8:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], c.r[17].w[0] + 180u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422720u | kUnwind; return; } goto L_00422720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422810u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x00422810u) [[unlikely]] return; }
L_00422810:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422724u | kUnwind; return; } goto L_00422724; } }
L_00422830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422728u | kUnwind; return; } goto L_00422728; } }
L_00422838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0042279Cu | kUnwind; return; } goto L_0042279C; } }
L_00422840:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[17].w[0] + 180u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422794u | kUnwind; return; } goto L_00422794; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422858u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x00422858u) [[unlikely]] return; }
L_00422858:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422798u | kUnwind; return; } goto L_00422798; } }
L_00422878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0042279Cu | kUnwind; return; } goto L_0042279C; } }
L_00422880:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00422884:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004228A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[5].w[0] + 212u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & 6ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 8u);  if (t) { goto L_004228D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 213u)));  if (t) { goto L_004228D8; } }
L_004228D4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004228D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00422994; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_004228E4:
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004229A4; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_004228F8:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004229BC; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 552u));
    set32(c.r[3], 0u + 57u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004229BC; } }
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.f[0] = ld32((c.r[16].w[0] + 124u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00422954; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00422A38; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 161u));
    c.budget -= 1;
L_0042293C:
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 161u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 160u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00422954:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_00422958:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00422A48; } }
L_0042296C:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    c.f[1] = ld32((c.r[3].w[0] + 280u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 100u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00422A60; } }
L_0042298C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00422A90; } }
L_00422994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042299Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 225u, depth + 1u); else { c.pc = 0x004221B0u; return; } if (c.pc != 0x0042299Cu) [[unlikely]] return; }
L_0042299C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004228E4u | kUnwind; return; } goto L_004228E4; } }
L_004229A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], c.r[16].w[0] + 164u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004229B4u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 118u, depth + 1u); else { c.pc = 0x00416580u; return; } if (c.pc != 0x004229B4u) [[unlikely]] return; }
L_004229B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 40u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004228F8u | kUnwind; return; } goto L_004228F8; } }
L_004229BC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 161u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004229F0; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 752u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 160u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 92u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422954u | kUnwind; return; } goto L_00422954; } }
    c.f[0] = ld32((c.r[16].w[0] + 124u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 128u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422954u | kUnwind; return; } goto L_00422954; } }
L_004229F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[5].d[0] = c.r[3].d[0] | 42572ull;
    st32((c.r[16].w[0] + 104u), c.r[5].w[0]);
    set32(c.r[3], 0u - 2u);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 161u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 161u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422954u | kUnwind; return; } goto L_00422954; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], c.r[16].w[0] + 164u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422A30u); set32(c.r[5], c.r[2].w[0] + 32u);  if (depth < kMaxDepth) unit_0085(c, 99u, depth + 1u); else { c.pc = 0x004160C0u; return; } if (c.pc != 0x00422A30u) [[unlikely]] return; }
L_00422A30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 40u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422958u | kUnwind; return; } goto L_00422958; } }
L_00422A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422A40u); set32(c.r[4], c.r[16].w[0] + 164u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x00422A40u) [[unlikely]] return; }
L_00422A40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[16].w[0] + 161u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0042293Cu | kUnwind; return; } goto L_0042293C; } }
L_00422A48:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.f[0] = ld32((c.r[16].w[0] + 96u));
    c.f[1] = ld32((c.r[3].w[0] + 280u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0042296Cu | kUnwind; return; } goto L_0042296C; } }
L_00422A60:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] - 10288u);
    set32(c.r[7], 0u + 7u);
    set32(c.r[8], 0u + 9u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422A88u); set32(c.r[6], c.r[3].w[0] + 80u);  if (depth < kMaxDepth) unit_002F(c, 118u, depth + 1u); else { c.pc = 0x002BCC20u; return; } if (c.pc != 0x00422A88u) [[unlikely]] return; }
L_00422A88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0042298Cu | kUnwind; return; } goto L_0042298C; } }
L_00422A90:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00422AA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    c.f[1] = ld32((c.r[5].w[0] + 776u));
    set32(c.r[2], ld32((c.r[3].w[0] + 752u)));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00422AF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00422CFC; } }
L_00422AF8:
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.f[21] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[22] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[12] = c.f[21];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422B1Cu); c.f[13] = c.f[22];  if (depth < kMaxDepth) unit_000B(c, 78u, depth + 1u); else { c.pc = 0x0022DAE8u; return; } if (c.pc != 0x00422B1Cu) [[unlikely]] return; }
L_00422B1C:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422B28u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x00422B28u) [[unlikely]] return; }
L_00422B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422B30u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x00422B30u) [[unlikely]] return; }
L_00422B30:
    c.facc = fp::ee::mul(c.fcr31, c.f[22], c.f[22]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[21]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.f[6] = c.r[2].w[0];
    c.f[8] = fp::ee::div(c.fcr31, c.f[22], c.f[0]);
    c.f[7] = fp::ee::div(c.fcr31, c.f[21], c.f[0]);
    c.budget -= 14;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00422B70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[6] = c.r[2].w[0];
    c.budget -= 2;
L_00422B70:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 1416u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00422C30; } }
    c.r[4].d[0] = ld8((c.r[2].w[0] + 522u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[7], ld32((c.r[2].w[0] + 1400u)));
    c.f[5] = c.f[7] ^ fp::kSign;
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] + 8704u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 11;
L_00422BB0:
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 522u));
    set32(c.r[3], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00422C1C; } }
    c.f[2] = ld32((c.r[6].w[0] + 40u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[4] = ld32((c.r[6].w[0] + 32u));
    c.f[3] = ld32((c.r[2].w[0] + 32u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[7]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[8]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[8]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00422C1C; } }
    c.f[1] = c.f[2] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[6]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00422C1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00422CFC; } }
L_00422C1C:
    set32(c.r[3], ld32((c.r[2].w[0] + 1416u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422BB0u | kUnwind; return; } goto L_00422BB0; } }
L_00422C30:
    set32(c.r[9], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[9].w[0] + 1416u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_00422CF8; } }
    set32(c.r[8], ld32((c.r[9].w[0] + 1400u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], 0u + 1u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], c.r[4].w[0] + 8704u);
    c.f[5] = c.f[7] ^ fp::kSign;
    c.budget -= 7;
L_00422C60:
    set32(c.r[3], c.r[10].w[0] << 2);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_00422CE4; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 522u));
    c.r[5].d[0] = ld8((c.r[7].w[0] + 522u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00422CE4; } }
    c.f[2] = ld32((c.r[7].w[0] + 40u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[4] = ld32((c.r[7].w[0] + 32u));
    c.f[3] = ld32((c.r[2].w[0] + 32u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[7]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[8]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[8]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[5]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00422CE4; } }
    c.f[1] = c.f[2] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[6]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00422CE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00422CFC; } }
L_00422CE4:
    set32(c.r[3], ld32((c.r[9].w[0] + 1416u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[3].d[0] = c.r[10].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422C60u | kUnwind; return; } goto L_00422C60; } }
L_00422CF8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00422CFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00422D20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00422EB0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 530u));
    c.r[4].d[0] = c.r[4].d[0] << 57;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00423678; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[3] = ld32((c.r[3].w[0] + 40u));
    c.f[1] = ld32((c.r[3].w[0] + 468u));
    c.f[0] = c.r[2].w[0];
    c.f[6] = ld32((c.r[3].w[0] + 32u));
    c.f[7] = ld32((c.r[3].w[0] + 36u));
    c.f[2] = ld32((c.r[4].w[0] + 88u));
    c.f[5] = ld32((c.r[4].w[0] + 80u));
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[4] = ld32((c.r[4].w[0] + 84u));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    fpu_compare(c, fp::key(c.f[7]) < fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[2] = fp::ee::sub(c.fcr31, c.f[7], c.f[4]);  if (t) { goto L_004231A0; } }
    set32(c.r[12], c.r[3].w[0] + 544u);
    set32(c.r[2], 0u + 100u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 552u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00422E50; } }
    c.r[11].d[0] = ld16((c.r[12].w[0]));
    set32(c.r[9], 0u - 3u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[8], 0u + 1u);
    set32(c.r[6], c.r[16].w[0] + 64u);
    set32(c.r[7], c.r[16].w[0] + 80u);
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st16((c.r[12].w[0]), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[12].w[0]));
    c.r[4].d[0] = c.r[9].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[12].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[12].w[0]));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[12].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422E0Cu); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 200u, depth + 1u); else { c.pc = 0x0028A160u; return; } if (c.pc != 0x00422E0Cu) [[unlikely]] return; }
L_00422E0C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 161u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 161u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 128u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00422E50; } }
    st32((c.r[16].w[0] + 128u), c.f[1]);
    c.budget -= 1;
L_00422E50:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_00422E54:
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[5], c.r[2].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422E68u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 140u, depth + 1u); else { c.pc = 0x003AE4A0u; return; } if (c.pc != 0x00422E68u) [[unlikely]] return; }
L_00422E68:
    set32(c.r[9], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[5], 0u - 65u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], 0u - 33u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.r[8].d[0] = ld8((c.r[9].w[0] + 94u));
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    st8((c.r[9].w[0] + 94u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[5].w[0] + 104u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 526u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 526u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00423678; } }
L_00422EB0:
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00422F04; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 172u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00423110; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00423150; } }
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00423118; } }
L_00422EEC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00422EF0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00422EF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00422F04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422F04u); set32(c.r[4], c.r[16].w[0] + 164u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x00422F04u) [[unlikely]] return; }
L_00422F04:
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00422F58; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 188u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00423158; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00423198; } }
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00423160; } }
L_00422F40:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00422F44:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00422F48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00422F58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00422F58u); set32(c.r[4], c.r[16].w[0] + 180u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x00422F58u) [[unlikely]] return; }
L_00422F58:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 161u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 3u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 161u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 11;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_004230BC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[3], 0u + 31u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00423018; } }
    set32(c.r[3], 0u + 51u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00422FE8; } }
    set32(c.r[3], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00422FB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 152u)));  if (t) { goto L_00423048; } }
L_00422FB8:
    set32(c.r[5], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[6], 0u + 5u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], ld32((c.r[5].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 1184u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 136u), c.r[2].w[0]);  if (t) { goto L_00423044; } }
L_00422FE8:
    set32(c.r[5], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[6], 0u + 5u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], ld32((c.r[5].w[0] + 184u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 1184u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 136u), c.r[2].w[0]);  if (t) { goto L_00423044; } }
L_00423018:
    set32(c.r[5], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[6], 0u + 5u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], ld32((c.r[5].w[0] + 296u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 576u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 136u), c.r[2].w[0]);
    c.budget -= 11;
L_00423044:
    set32(c.r[4], ld32((c.r[16].w[0] + 152u)));
    c.budget -= 1;
L_00423048:
    set32(c.r[2], 0u + 17u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00423064; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 344u)));
    c.f[0] = ld32((c.r[16].w[0] + 120u));
    st32((c.r[2].w[0] + 1628u), c.f[0]);
    c.budget -= 3;
L_00423064:
    set32(c.r[8], ld32((c.r[16].w[0] + 152u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[6], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], 0u - 9u);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[7].d[0] = ld8((c.r[8].w[0] + 1496u));
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 112u), 0u);
    st8((c.r[16].w[0] + 156u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[16].w[0] + 152u)));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 526u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[6].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 148u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 148u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 22;
L_004230BC:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 148u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u - 9u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 148u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[5], c.r[2].w[0] + 32u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004230F0u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 140u, depth + 1u); else { c.pc = 0x003AE4A0u; return; } if (c.pc != 0x004230F0u) [[unlikely]] return; }
L_004230F0:
    set32(c.r[6], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 94u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00423678; } }
L_00423110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422EF4u | kUnwind; return; } goto L_00422EF4; } }
L_00423118:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], c.r[16].w[0] + 164u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422EECu | kUnwind; return; } goto L_00422EEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423130u); c.r[4].d[0] = ld8((c.r[17].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x00423130u) [[unlikely]] return; }
L_00423130:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[17].w[0] + 34u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422EF0u | kUnwind; return; } goto L_00422EF0; } }
L_00423150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422EF4u | kUnwind; return; } goto L_00422EF4; } }
L_00423158:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422F48u | kUnwind; return; } goto L_00422F48; } }
L_00423160:
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], c.r[16].w[0] + 180u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422F40u | kUnwind; return; } goto L_00422F40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423178u); c.r[4].d[0] = ld8((c.r[17].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x00423178u) [[unlikely]] return; }
L_00423178:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[17].w[0] + 34u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422F44u | kUnwind; return; } goto L_00422F44; } }
L_00423198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422F48u | kUnwind; return; } goto L_00422F48; } }
L_004231A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 252u)));
    c.r[4].d[0] = ld16((c.r[2].w[0] + 544u));
    c.r[2].d[0] = c.r[4].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0042327C; } }
    c.r[2].d[0] = c.r[4].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0042327C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0042327C; } }
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.budget -= 1;
L_004231D8:
    c.f[0] = ld32((c.r[16].w[0] + 124u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0042324C; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00423310; } }
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00423310; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 26u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00423310; } }
    c.r[4].d[0] = ld16((c.r[5].w[0] + 544u));
    c.r[2].d[0] = c.r[4].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0042328C; } }
    c.r[2].d[0] = c.r[4].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00423310; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[3].w[0] + 544u);  if (t) { goto L_00423290; } }
L_0042324C:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 736u));
    c.r[2].d[0] = c.r[2].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422E50u | kUnwind; return; } goto L_00422E50; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 161u));
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 161u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422E50u | kUnwind; return; } goto L_00422E50; } }
L_0042327C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0042324Cu | kUnwind; return; } goto L_0042324C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 128u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004231D8u | kUnwind; return; } goto L_004231D8; } }
L_0042328C:
    set32(c.r[4], c.r[3].w[0] + 544u);
    c.budget -= 1;
L_00423290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423298u);  if (depth < kMaxDepth) unit_0022(c, 194u, depth + 1u); else { c.pc = 0x0028A080u; return; } if (c.pc != 0x00423298u) [[unlikely]] return; }
L_00423298:
    set32(c.r[9], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[6], 0u - 3u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[2], 0u - 2049u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[8].d[0] = ld16((c.r[9].w[0] + 544u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st16((c.r[9].w[0] + 544u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld16((c.r[9].w[0] + 544u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st16((c.r[9].w[0] + 544u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[9].w[0] + 544u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[9].w[0] + 544u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004232F4u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 191u, depth + 1u); else { c.pc = 0x0028A020u; return; } if (c.pc != 0x004232F4u) [[unlikely]] return; }
L_004232F4:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 161u));
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 161u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00423678; } }
L_00423310:
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.f[0] = ld32((c.r[16].w[0] + 140u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004234A4; } }
    c.r[6].d[0] = ld8((c.r[3].w[0] + 552u));
    set32(c.r[2], 0u + 100u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[3].w[0] + 544u);  if (t) { goto L_004234C0; } }
    c.f[5] = ld32((c.r[16].w[0] + 96u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00423360; } }
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00423360; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00423360:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00423374; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00423390; } }
L_00423374:
    set32(c.r[4], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_00423390:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0042365C; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 811u));
    c.r[2].d[0] = c.r[4].d[0] << 62;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004233C8; } }
    c.r[2].d[0] = c.r[4].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_004233C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0042365C; } }
    c.f[4] = ld32((c.r[16].w[0] + 64u));
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    c.f[2] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);  if (t) { goto L_00423400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00423474; } }
L_00423400:
    c.f[1] = ld32((c.r[3].w[0] + 508u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40460000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_00423428; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00423428:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00423474; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43100000u);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_00423450; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00423450:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00423474; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423460u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x00423460u) [[unlikely]] return; }
L_00423460:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_00423474; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00423474:
    c.r[17].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423484u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 271u, depth + 1u); else { c.pc = 0x00422AA0u; return; } if (c.pc != 0x00423484u) [[unlikely]] return; }
L_00423484:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004234D4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422E50u | kUnwind; return; } goto L_00422E50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32506ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422E50u | kUnwind; return; } goto L_00422E50; } }
L_004234A4:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 161u));
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 161u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422E50u | kUnwind; return; } goto L_00422E50; } }
L_004234C0:
    set32(c.r[6], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004234CCu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 203u, depth + 1u); else { c.pc = 0x0028A1F0u; return; } if (c.pc != 0x004234CCu) [[unlikely]] return; }
L_004234CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422E54u | kUnwind; return; } goto L_00422E54; } }
L_004234D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 809u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004234F0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0042350C; } }
L_004234F0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_0042350C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423538u); st32((c.r[16].w[0] + 96u), c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x00423538u) [[unlikely]] return; }
L_00423538:
    c.f[2] = ld32((c.r[16].w[0] + 96u));
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[16].w[0] + 96u), c.f[0]);  if (t) { goto L_00423620; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 809u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00423570; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0042358C; } }
L_00423570:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_0042358C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    set32(c.r[6], 0u + 3u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 100u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004235C4u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 206u, depth + 1u); else { c.pc = 0x0028A270u; return; } if (c.pc != 0x004235C4u) [[unlikely]] return; }
L_004235C4:
    c.f[2] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[2].w[0] << 1);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u - 3u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[1]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 161u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 161u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.f[1] = ld32((c.r[3].w[0] + 776u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[3].w[0] + 752u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422E50u | kUnwind; return; } goto L_00422E50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 24u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422E50u | kUnwind; return; } goto L_00422E50; } }
L_00423620:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[6], c.r[16].w[0] + 64u);
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423634u); set32(c.r[4], c.r[2].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 197u, depth + 1u); else { c.pc = 0x0028A0E0u; return; } if (c.pc != 0x00423634u) [[unlikely]] return; }
L_00423634:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[4].d[0] = c.r[2].d[0] | 32506ull;
    st32((c.r[16].w[0] + 104u), c.r[4].w[0]);
    set32(c.r[2], 0u - 3u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 161u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 161u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422E50u | kUnwind; return; } goto L_00422E50; } }
L_0042365C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 161u));
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 161u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00422E50u | kUnwind; return; } goto L_00422E50; } }
L_00423678:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00423690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 8576u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16496u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16480u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16464u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 15648u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00420000u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 14864u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], 0u + 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 8544u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 32u), 0u);
    c.r[2].d[0] = 0ull & 1ull;
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 40u), c.r[6].w[0]);
    set32(c.r[15], c.r[15].w[0] + 8768u);
    st32((c.r[4].w[0] + 44u), c.r[7].w[0]);
    set32(c.r[14], c.r[14].w[0] + 8744u);
    st32((c.r[4].w[0] + 48u), c.r[8].w[0]);
    set32(c.r[12], 0u - 3u);
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[13], c.r[2].w[0] << 1);
    st32((c.r[4].w[0] + 56u), 0u);
    set32(c.r[10], 0u - 5u);
    st32((c.r[4].w[0] + 60u), 0u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(0u));
    set32(c.r[8], 0u - 65u);
    st32((c.r[4].w[0]), c.r[15].w[0]);
    set32(c.r[9], c.r[2].w[0] << 6);
    st32((c.r[4].w[0] + 108u), c.r[14].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    st32((c.r[4].w[0] + 152u), c.r[6].w[0]);
    set32(c.r[7], 0u - 2u);
    st8((c.r[4].w[0] + 156u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[4].w[0] + 148u));
    set32(c.r[5], 0u + 8u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[12].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[13].d[0];
    st8((c.r[4].w[0] + 148u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 148u));
    c.r[6].d[0] = c.r[6].d[0] & c.r[10].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[11].d[0];
    st8((c.r[4].w[0] + 148u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 148u));
    c.r[6].d[0] = c.r[6].d[0] & c.r[8].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 148u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 144u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 164u), 0u);
    st32((c.r[4].w[0] + 168u), 0u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 172u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[4].w[0] + 172u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 176u), 0u);
    st32((c.r[4].w[0] + 180u), 0u);
    st32((c.r[4].w[0] + 184u), 0u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 188u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[7].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[4].w[0] + 188u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 192u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 85;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004237E4u); set32(c.r[4], c.r[4].w[0] + 28208u);  if (depth < kMaxDepth) unit_00A0(c, 200u, depth + 1u); else { c.pc = 0x00482BC0u; return; } if (c.pc != 0x004237E4u) [[unlikely]] return; }
L_004237E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004237F8; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004237F8u); set32(c.r[4], c.r[16].w[0] + 164u);  if (depth < kMaxDepth) unit_0085(c, 151u, depth + 1u); else { c.pc = 0x00416B30u; return; } if (c.pc != 0x004237F8u) [[unlikely]] return; }
L_004237F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423808u); set32(c.r[4], c.r[4].w[0] + 28208u);  if (depth < kMaxDepth) unit_00A0(c, 200u, depth + 1u); else { c.pc = 0x00482BC0u; return; } if (c.pc != 0x00423808u) [[unlikely]] return; }
L_00423808:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0042381C; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042381Cu); set32(c.r[4], c.r[16].w[0] + 180u);  if (depth < kMaxDepth) unit_0085(c, 151u, depth + 1u); else { c.pc = 0x00416B30u; return; } if (c.pc != 0x0042381Cu) [[unlikely]] return; }
L_0042381C:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 5);
    set32(c.r[2], 0u - 33u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 525u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0] + 525u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423844u); set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_006B(c, 137u, depth + 1u); else { c.pc = 0x003AE380u; return; } if (c.pc != 0x00423844u) [[unlikely]] return; }
L_00423844:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.f[0] = ld32((c.r[2].w[0] + 464u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 468u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 472u));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 476u));
    st32((c.r[16].w[0] + 76u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 809u));
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00423884; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004238A0; } }
L_00423884:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004238A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 96u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 809u));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004238D4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004238F0; } }
L_004238D4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004238F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    set32(c.r[25], 0u - 1u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[15], 0u - 3u);
    c.f[0] = c.r[2].w[0];
    c.r[24].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    set32(c.r[13], 0u - 9u);
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[11], 0u - 17u);
    set32(c.r[14], c.r[2].w[0] << 3);
    set32(c.r[12], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    set32(c.r[9], 0u - 33u);
    c.r[4].d[0] = c.r[2].d[0] | 32506ull;
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(32ll);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40600000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    set32(c.r[3], 0u + 100u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 100u), c.f[0]);
    st32((c.r[16].w[0] + 136u), c.r[25].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 152u)));
    c.f[0] = ld32((c.r[25].w[0] + 192u));
    st32((c.r[16].w[0] + 116u), c.f[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 344u)));
    c.f[0] = ld32((c.r[25].w[0] + 1628u));
    st32((c.r[16].w[0] + 120u), c.f[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 152u)));
    st8((c.r[25].w[0] + 803u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 112u), 0u);
    c.r[25].d[0] = ld8((c.r[16].w[0] + 148u));
    c.r[15].d[0] = c.r[25].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[24].d[0];
    st8((c.r[16].w[0] + 148u), static_cast<std::uint8_t>(c.r[15].w[0]));
    st8((c.r[16].w[0] + 156u), static_cast<std::uint8_t>(0u));
    c.r[15].d[0] = ld8((c.r[16].w[0] + 148u));
    c.r[13].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.r[13].d[0] = c.r[13].d[0] | c.r[14].d[0];
    st8((c.r[16].w[0] + 148u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[13].d[0] = ld8((c.r[16].w[0] + 148u));
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[16].w[0] + 148u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[16].w[0] + 148u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[16].w[0] + 148u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[16].w[0] + 124u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 128u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 132u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 140u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 132u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 124u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 128u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 140u), c.r[5].w[0]);
    st8((c.r[16].w[0] + 160u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 104u), c.r[4].w[0]);
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 69;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00423A10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 168u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00423A74; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 172u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00423C84; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00423CC0; } }
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[16].w[0] + 164u);  if (t) { goto L_00423C8C; } }
L_00423A5C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00423A60:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00423A64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00423A74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423A74u); set32(c.r[4], c.r[16].w[0] + 164u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x00423A74u) [[unlikely]] return; }
L_00423A74:
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00423AC8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 188u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00423CC8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00423D04; } }
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[16].w[0] + 180u);  if (t) { goto L_00423CD0; } }
L_00423AB0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00423AB4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00423AB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00423AC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423AC8u); set32(c.r[4], c.r[16].w[0] + 180u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x00423AC8u) [[unlikely]] return; }
L_00423AC8:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 161u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 161u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[9], ld32((c.r[16].w[0] + 136u)));
    c.budget -= 11;
    { const bool t = c.r[9].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[16].w[0] + 136u);  if (t) { goto L_00423C2C; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 152u)));
    set32(c.r[5], 0u + 31u);
    c.r[6].d[0] = ld8((c.r[6].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[2], c.r[16].w[0] + 152u);  if (t) { goto L_00423B88; } }
    set32(c.r[5], 0u + 51u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00423B58; } }
    set32(c.r[5], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_00423B28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0])));  if (t) { goto L_00423BB8; } }
L_00423B28:
    set32(c.r[7], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[9].w[0] << 4);
    set32(c.r[6], c.r[5].w[0] - c.r[9].w[0]);
    set32(c.r[8], 0u + 5u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[5].w[0] << 4);
    set32(c.r[5], ld32((c.r[7].w[0] + 184u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st8((c.r[5].w[0] + 1184u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_00423BB4; } }
L_00423B58:
    set32(c.r[7], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[9].w[0] << 4);
    set32(c.r[6], c.r[5].w[0] - c.r[9].w[0]);
    set32(c.r[8], 0u + 5u);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[5].w[0] << 4);
    set32(c.r[5], ld32((c.r[7].w[0] + 184u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st8((c.r[5].w[0] + 1184u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_00423BB4; } }
L_00423B88:
    set32(c.r[7], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[9].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[8], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[5].w[0] << 4);
    set32(c.r[5], ld32((c.r[7].w[0] + 296u)));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st8((c.r[5].w[0] + 576u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 11;
L_00423BB4:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_00423BB8:
    set32(c.r[3], 0u + 17u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 220u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00423BD4; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 344u)));
    c.f[0] = ld32((c.r[16].w[0] + 120u));
    st32((c.r[3].w[0] + 1628u), c.f[0]);
    c.budget -= 3;
L_00423BD4:
    set32(c.r[9], ld32((c.r[2].w[0])));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[7], c.r[3].w[0] << 3);
    set32(c.r[6], 0u - 9u);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[8].d[0] = ld8((c.r[9].w[0] + 1496u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[9].w[0] + 1496u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 112u), 0u);
    st8((c.r[16].w[0] + 156u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 526u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[6].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 148u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 148u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 22;
L_00423C2C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 148u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u - 9u);
    set32(c.r[17], c.r[16].w[0] + 48u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 148u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[5], c.r[2].w[0] + 32u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423C64u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 140u, depth + 1u); else { c.pc = 0x003AE4A0u; return; } if (c.pc != 0x00423C64u) [[unlikely]] return; }
L_00423C64:
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 94u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00423D0C; } }
L_00423C84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423A64u | kUnwind; return; } goto L_00423A64; } }
L_00423C8C:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423A5Cu | kUnwind; return; } goto L_00423A5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423CA0u); c.r[4].d[0] = ld8((c.r[17].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x00423CA0u) [[unlikely]] return; }
L_00423CA0:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[17].w[0] + 34u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423A60u | kUnwind; return; } goto L_00423A60; } }
L_00423CC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423A64u | kUnwind; return; } goto L_00423A64; } }
L_00423CC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423AB8u | kUnwind; return; } goto L_00423AB8; } }
L_00423CD0:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423AB0u | kUnwind; return; } goto L_00423AB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423CE4u); c.r[4].d[0] = ld8((c.r[17].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x00423CE4u) [[unlikely]] return; }
L_00423CE4:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[17].w[0] + 34u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423AB4u | kUnwind; return; } goto L_00423AB4; } }
L_00423D04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423AB8u | kUnwind; return; } goto L_00423AB8; } }
L_00423D0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00423D20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 168u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00423D88; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 172u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00423F68; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00423FA4; } }
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[18].w[0] + 164u);  if (t) { goto L_00423F70; } }
L_00423D70:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00423D74:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00423D78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00423D88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423D88u); set32(c.r[4], c.r[18].w[0] + 164u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x00423D88u) [[unlikely]] return; }
L_00423D88:
    set32(c.r[2], ld32((c.r[18].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00423DDC; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 188u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00423FAC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00423FE8; } }
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 180u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[18].w[0] + 180u);  if (t) { goto L_00423FB4; } }
L_00423DC4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00423DC8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00423DCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00423DDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423DDCu); set32(c.r[4], c.r[18].w[0] + 180u);  if (depth < kMaxDepth) unit_0085(c, 91u, depth + 1u); else { c.pc = 0x00415F80u; return; } if (c.pc != 0x00423DDCu) [[unlikely]] return; }
L_00423DDC:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 161u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], 0u - 3u);
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[18].w[0] + 161u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[18].w[0] + 136u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[17], c.r[18].w[0] + 136u);  if (t) { goto L_00423F10; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 152u)));
    set32(c.r[2], 0u + 31u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[18].w[0] + 152u);  if (t) { goto L_00423E7C; } }
    set32(c.r[2], 0u + 51u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00423E5C; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00423E3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0])));  if (t) { goto L_00423E9C; } }
L_00423E3C:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423E48u); set32(c.r[4], c.r[2].w[0] + 184u);  if (depth < kMaxDepth) unit_0089(c, 3u, depth + 1u); else { c.pc = 0x00424030u; return; } if (c.pc != 0x00423E48u) [[unlikely]] return; }
L_00423E48:
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], 0u - 1u);
    st8((c.r[2].w[0] + 1184u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00423E98; } }
L_00423E5C:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423E68u); set32(c.r[4], c.r[2].w[0] + 184u);  if (depth < kMaxDepth) unit_0089(c, 3u, depth + 1u); else { c.pc = 0x00424030u; return; } if (c.pc != 0x00423E68u) [[unlikely]] return; }
L_00423E68:
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], 0u - 1u);
    st8((c.r[2].w[0] + 1184u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00423E98; } }
L_00423E7C:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423E88u); set32(c.r[4], c.r[2].w[0] + 296u);  if (depth < kMaxDepth) unit_0089(c, 2u, depth + 1u); else { c.pc = 0x00424010u; return; } if (c.pc != 0x00423E88u) [[unlikely]] return; }
L_00423E88:
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], 0u - 1u);
    st8((c.r[2].w[0] + 576u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_00423E98:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00423E9C:
    set32(c.r[2], 0u + 17u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 220u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00423EB8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 344u)));
    c.f[0] = ld32((c.r[18].w[0] + 120u));
    st32((c.r[2].w[0] + 1628u), c.f[0]);
    c.budget -= 3;
L_00423EB8:
    set32(c.r[8], ld32((c.r[16].w[0])));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[6], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], 0u - 9u);
    set32(c.r[4], 0u - 17u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.r[7].d[0] = ld8((c.r[8].w[0] + 1496u));
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 1496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 112u), 0u);
    st8((c.r[18].w[0] + 156u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[2].d[0] = ld8((c.r[6].w[0] + 526u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[6].w[0] + 526u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 148u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 148u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 22;
L_00423F10:
    c.r[4].d[0] = ld8((c.r[18].w[0] + 148u));
    c.r[2].d[0] = 0ull & 1ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u - 9u);
    set32(c.r[16], c.r[18].w[0] + 48u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[18].w[0] + 148u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[5], c.r[2].w[0] + 32u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423F48u); c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 140u, depth + 1u); else { c.pc = 0x003AE4A0u; return; } if (c.pc != 0x00423F48u) [[unlikely]] return; }
L_00423F48:
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 94u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0] + 94u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00423FF0; } }
L_00423F68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423D78u | kUnwind; return; } goto L_00423D78; } }
L_00423F70:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423D70u | kUnwind; return; } goto L_00423D70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423F84u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x00423F84u) [[unlikely]] return; }
L_00423F84:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423D74u | kUnwind; return; } goto L_00423D74; } }
L_00423FA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423D78u | kUnwind; return; } goto L_00423D78; } }
L_00423FAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423DCCu | kUnwind; return; } goto L_00423DCC; } }
L_00423FB4:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423DC4u | kUnwind; return; } goto L_00423DC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00423FC8u); c.r[4].d[0] = ld8((c.r[16].w[0] + 4u));  if (depth < kMaxDepth) unit_0018(c, 298u, depth + 1u); else { c.pc = 0x00263E80u; return; } if (c.pc != 0x00423FC8u) [[unlikely]] return; }
L_00423FC8:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 34u));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423DC8u | kUnwind; return; } goto L_00423DC8; } }
L_00423FE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00423DCCu | kUnwind; return; } goto L_00423DCC; } }
L_00423FF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    [[clang::musttail]] return unit_0089(c, 1u, depth);
}

}

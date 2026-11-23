#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003D[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 25, 0, 0, 26, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 38,
    0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47,
    0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 56, 0, 57, 58, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61,
    0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0,
    0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0,
    0, 88, 0, 89, 0, 0, 90, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 95, 96, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 109,
    0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 117,
    0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 124, 0, 0,
    0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0,
    0, 0, 0, 140, 0, 141, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 167, 0,
    0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 173,
    0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 180,
    0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0,
    0, 190, 0, 0, 191, 0, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0,
    197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 225,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 229, 0, 230, 0, 231, 0, 232, 0, 233, 0, 0, 234, 235, 0, 0, 0, 236, 0, 0,
    237, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0,
    244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0,
    0, 252, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0,
    258, 0, 0, 259, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0,
    0, 265, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0,
    0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284,
    0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0,
    0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 301,
    0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305,
    0, 0, 306, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0,
    0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 324,
    0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 330, 0, 331, 0, 332, 0, 333, 0, 334, 0, 0, 0, 335, 0, 0, 336, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 342, 0,
    0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0,
    348, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 0,
    0, 354, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0,
    360, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0,
    370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0,
    375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0,
    383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0,
    395, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0,
    0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0,
    0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 419, 0, 0, 420, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_003D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002F4000;
    case 2u: goto L_002F41A8;
    case 3u: goto L_002F41F4;
    case 4u: goto L_002F42B4;
    case 5u: goto L_002F42C0;
    case 6u: goto L_002F42CC;
    case 7u: goto L_002F42D8;
    case 8u: goto L_002F42E4;
    case 9u: goto L_002F42F0;
    case 10u: goto L_002F4778;
    case 11u: goto L_002F47F8;
    case 12u: goto L_002F4850;
    case 13u: goto L_002F4958;
    case 14u: goto L_002F49B0;
    case 15u: goto L_002F4AA0;
    case 16u: goto L_002F4AE0;
    case 17u: goto L_002F4B5C;
    case 18u: goto L_002F4BD4;
    case 19u: goto L_002F4C48;
    case 20u: goto L_002F4CB0;
    case 21u: goto L_002F4D10;
    case 22u: goto L_002F4D20;
    case 23u: goto L_002F4D30;
    case 24u: goto L_002F4D50;
    case 25u: goto L_002F4E08;
    case 26u: goto L_002F4E14;
    case 27u: goto L_002F4E18;
    case 28u: goto L_002F4E4C;
    case 29u: goto L_002F4E5C;
    case 30u: goto L_002F4FE8;
    case 31u: goto L_002F501C;
    case 32u: goto L_002F5050;
    case 33u: goto L_002F50B4;
    case 34u: goto L_002F50C0;
    case 35u: goto L_002F5100;
    case 36u: goto L_002F516C;
    case 37u: goto L_002F5174;
    case 38u: goto L_002F517C;
    case 39u: goto L_002F5194;
    case 40u: goto L_002F51A0;
    case 41u: goto L_002F51B8;
    case 42u: goto L_002F51D0;
    case 43u: goto L_002F51E4;
    case 44u: goto L_002F524C;
    case 45u: goto L_002F525C;
    case 46u: goto L_002F526C;
    case 47u: goto L_002F527C;
    case 48u: goto L_002F528C;
    case 49u: goto L_002F529C;
    case 50u: goto L_002F52AC;
    case 51u: goto L_002F52BC;
    case 52u: goto L_002F52CC;
    case 53u: goto L_002F52DC;
    case 54u: goto L_002F52F0;
    case 55u: goto L_002F5350;
    case 56u: goto L_002F5388;
    case 57u: goto L_002F5390;
    case 58u: goto L_002F5394;
    case 59u: goto L_002F53A0;
    case 60u: goto L_002F53B8;
    case 61u: goto L_002F53FC;
    case 62u: goto L_002F5418;
    case 63u: goto L_002F5434;
    case 64u: goto L_002F5448;
    case 65u: goto L_002F5498;
    case 66u: goto L_002F54CC;
    case 67u: goto L_002F54EC;
    case 68u: goto L_002F5508;
    case 69u: goto L_002F551C;
    case 70u: goto L_002F552C;
    case 71u: goto L_002F5548;
    case 72u: goto L_002F5580;
    case 73u: goto L_002F558C;
    case 74u: goto L_002F55B0;
    case 75u: goto L_002F55D8;
    case 76u: goto L_002F55E8;
    case 77u: goto L_002F5600;
    case 78u: goto L_002F5620;
    case 79u: goto L_002F5660;
    case 80u: goto L_002F5678;
    case 81u: goto L_002F5690;
    case 82u: goto L_002F56B8;
    case 83u: goto L_002F56C4;
    case 84u: goto L_002F56E0;
    case 85u: goto L_002F5700;
    case 86u: goto L_002F5770;
    case 87u: goto L_002F5778;
    case 88u: goto L_002F5784;
    case 89u: goto L_002F578C;
    case 90u: goto L_002F5798;
    case 91u: goto L_002F57AC;
    case 92u: goto L_002F57B4;
    case 93u: goto L_002F57D0;
    case 94u: goto L_002F57E8;
    case 95u: goto L_002F57F0;
    case 96u: goto L_002F57F4;
    case 97u: goto L_002F585C;
    case 98u: goto L_002F5870;
    case 99u: goto L_002F58A0;
    case 100u: goto L_002F58C8;
    case 101u: goto L_002F58E4;
    case 102u: goto L_002F58F4;
    case 103u: goto L_002F5900;
    case 104u: goto L_002F591C;
    case 105u: goto L_002F5938;
    case 106u: goto L_002F5940;
    case 107u: goto L_002F5960;
    case 108u: goto L_002F596C;
    case 109u: goto L_002F597C;
    case 110u: goto L_002F5984;
    case 111u: goto L_002F59A0;
    case 112u: goto L_002F59F8;
    case 113u: goto L_002F5A38;
    case 114u: goto L_002F5A4C;
    case 115u: goto L_002F5A5C;
    case 116u: goto L_002F5A64;
    case 117u: goto L_002F5A7C;
    case 118u: goto L_002F5A98;
    case 119u: goto L_002F5AB0;
    case 120u: goto L_002F5AC0;
    case 121u: goto L_002F5ACC;
    case 122u: goto L_002F5AD8;
    case 123u: goto L_002F5AE4;
    case 124u: goto L_002F5AF4;
    case 125u: goto L_002F5B04;
    case 126u: goto L_002F5B10;
    case 127u: goto L_002F5B30;
    case 128u: goto L_002F5B54;
    case 129u: goto L_002F5B6C;
    case 130u: goto L_002F5B90;
    case 131u: goto L_002F5C04;
    case 132u: goto L_002F5C0C;
    case 133u: goto L_002F5C14;
    case 134u: goto L_002F5C1C;
    case 135u: goto L_002F5C24;
    case 136u: goto L_002F5C3C;
    case 137u: goto L_002F5C50;
    case 138u: goto L_002F5C58;
    case 139u: goto L_002F5C74;
    case 140u: goto L_002F5C8C;
    case 141u: goto L_002F5C94;
    case 142u: goto L_002F5C98;
    case 143u: goto L_002F5D00;
    case 144u: goto L_002F5D20;
    case 145u: goto L_002F5D50;
    case 146u: goto L_002F5D5C;
    case 147u: goto L_002F5D80;
    case 148u: goto L_002F5D98;
    case 149u: goto L_002F5DAC;
    case 150u: goto L_002F5DC0;
    case 151u: goto L_002F5E00;
    case 152u: goto L_002F5E18;
    case 153u: goto L_002F5E30;
    case 154u: goto L_002F5E54;
    case 155u: goto L_002F5E70;
    case 156u: goto L_002F5E90;
    case 157u: goto L_002F5EBC;
    case 158u: goto L_002F5ED8;
    case 159u: goto L_002F5EE8;
    case 160u: goto L_002F5EF4;
    case 161u: goto L_002F5F10;
    case 162u: goto L_002F5F2C;
    case 163u: goto L_002F5F34;
    case 164u: goto L_002F5F54;
    case 165u: goto L_002F5F60;
    case 166u: goto L_002F5F70;
    case 167u: goto L_002F5F78;
    case 168u: goto L_002F5F94;
    case 169u: goto L_002F6004;
    case 170u: goto L_002F6034;
    case 171u: goto L_002F6058;
    case 172u: goto L_002F606C;
    case 173u: goto L_002F607C;
    case 174u: goto L_002F6084;
    case 175u: goto L_002F609C;
    case 176u: goto L_002F60B8;
    case 177u: goto L_002F60D0;
    case 178u: goto L_002F60E0;
    case 179u: goto L_002F60F0;
    case 180u: goto L_002F60FC;
    case 181u: goto L_002F6108;
    case 182u: goto L_002F6118;
    case 183u: goto L_002F6128;
    case 184u: goto L_002F6134;
    case 185u: goto L_002F6140;
    case 186u: goto L_002F6150;
    case 187u: goto L_002F615C;
    case 188u: goto L_002F6168;
    case 189u: goto L_002F6174;
    case 190u: goto L_002F6184;
    case 191u: goto L_002F6190;
    case 192u: goto L_002F61A0;
    case 193u: goto L_002F61AC;
    case 194u: goto L_002F61B8;
    case 195u: goto L_002F61E0;
    case 196u: goto L_002F61F0;
    case 197u: goto L_002F6200;
    case 198u: goto L_002F6210;
    case 199u: goto L_002F6260;
    case 200u: goto L_002F626C;
    case 201u: goto L_002F6278;
    case 202u: goto L_002F62A0;
    case 203u: goto L_002F62C4;
    case 204u: goto L_002F62D0;
    case 205u: goto L_002F62F4;
    case 206u: goto L_002F6310;
    case 207u: goto L_002F632C;
    case 208u: goto L_002F6350;
    case 209u: goto L_002F636C;
    case 210u: goto L_002F6380;
    case 211u: goto L_002F63A8;
    case 212u: goto L_002F63B0;
    case 213u: goto L_002F63F8;
    case 214u: goto L_002F6420;
    case 215u: goto L_002F644C;
    case 216u: goto L_002F6450;
    case 217u: goto L_002F6498;
    case 218u: goto L_002F64B0;
    case 219u: goto L_002F64D4;
    case 220u: goto L_002F6520;
    case 221u: goto L_002F6530;
    case 222u: goto L_002F6540;
    case 223u: goto L_002F6558;
    case 224u: goto L_002F656C;
    case 225u: goto L_002F657C;
    case 226u: goto L_002F65B0;
    case 227u: goto L_002F6624;
    case 228u: goto L_002F662C;
    case 229u: goto L_002F6634;
    case 230u: goto L_002F663C;
    case 231u: goto L_002F6644;
    case 232u: goto L_002F664C;
    case 233u: goto L_002F6654;
    case 234u: goto L_002F6660;
    case 235u: goto L_002F6664;
    case 236u: goto L_002F6674;
    case 237u: goto L_002F6680;
    case 238u: goto L_002F668C;
    case 239u: goto L_002F6698;
    case 240u: goto L_002F66A4;
    case 241u: goto L_002F66B4;
    case 242u: goto L_002F66C0;
    case 243u: goto L_002F66E8;
    case 244u: goto L_002F6700;
    case 245u: goto L_002F6708;
    case 246u: goto L_002F6774;
    case 247u: goto L_002F6790;
    case 248u: goto L_002F67A0;
    case 249u: goto L_002F67B0;
    case 250u: goto L_002F67D0;
    case 251u: goto L_002F67E8;
    case 252u: goto L_002F6804;
    case 253u: goto L_002F6814;
    case 254u: goto L_002F6820;
    case 255u: goto L_002F683C;
    case 256u: goto L_002F6858;
    case 257u: goto L_002F6860;
    case 258u: goto L_002F6880;
    case 259u: goto L_002F688C;
    case 260u: goto L_002F689C;
    case 261u: goto L_002F68A4;
    case 262u: goto L_002F68C0;
    case 263u: goto L_002F6988;
    case 264u: goto L_002F69F4;
    case 265u: goto L_002F6A04;
    case 266u: goto L_002F6A0C;
    case 267u: goto L_002F6A24;
    case 268u: goto L_002F6A44;
    case 269u: goto L_002F6A54;
    case 270u: goto L_002F6A64;
    case 271u: goto L_002F6A80;
    case 272u: goto L_002F6A90;
    case 273u: goto L_002F6AA0;
    case 274u: goto L_002F6ABC;
    case 275u: goto L_002F6ACC;
    case 276u: goto L_002F6ADC;
    case 277u: goto L_002F6AF8;
    case 278u: goto L_002F6B08;
    case 279u: goto L_002F6B18;
    case 280u: goto L_002F6B34;
    case 281u: goto L_002F6B44;
    case 282u: goto L_002F6B50;
    case 283u: goto L_002F6B6C;
    case 284u: goto L_002F6B7C;
    case 285u: goto L_002F6B88;
    case 286u: goto L_002F6BA4;
    case 287u: goto L_002F6BB4;
    case 288u: goto L_002F6BC4;
    case 289u: goto L_002F6BD8;
    case 290u: goto L_002F6BE4;
    case 291u: goto L_002F6C08;
    case 292u: goto L_002F6C20;
    case 293u: goto L_002F6C30;
    case 294u: goto L_002F6C5C;
    case 295u: goto L_002F6C8C;
    case 296u: goto L_002F6CB8;
    case 297u: goto L_002F6CF0;
    case 298u: goto L_002F6D20;
    case 299u: goto L_002F6D70;
    case 300u: goto L_002F6D78;
    case 301u: goto L_002F6D7C;
    case 302u: goto L_002F6D84;
    case 303u: goto L_002F6DA8;
    case 304u: goto L_002F6DCC;
    case 305u: goto L_002F6DFC;
    case 306u: goto L_002F6E08;
    case 307u: goto L_002F6E0C;
    case 308u: goto L_002F6E4C;
    case 309u: goto L_002F6E6C;
    case 310u: goto L_002F6E88;
    case 311u: goto L_002F6EA4;
    case 312u: goto L_002F6EC8;
    case 313u: goto L_002F6EEC;
    case 314u: goto L_002F6F18;
    case 315u: goto L_002F6F60;
    case 316u: goto L_002F6FA8;
    case 317u: goto L_002F6FC0;
    case 318u: goto L_002F7018;
    case 319u: goto L_002F7050;
    case 320u: goto L_002F7110;
    case 321u: goto L_002F7134;
    case 322u: goto L_002F7148;
    case 323u: goto L_002F7170;
    case 324u: goto L_002F717C;
    case 325u: goto L_002F71A0;
    case 326u: goto L_002F71B0;
    case 327u: goto L_002F71D0;
    case 328u: goto L_002F71E8;
    case 329u: goto L_002F7220;
    case 330u: goto L_002F7290;
    case 331u: goto L_002F7298;
    case 332u: goto L_002F72A0;
    case 333u: goto L_002F72A8;
    case 334u: goto L_002F72B0;
    case 335u: goto L_002F72C0;
    case 336u: goto L_002F72CC;
    case 337u: goto L_002F72D8;
    case 338u: goto L_002F72E0;
    case 339u: goto L_002F7348;
    case 340u: goto L_002F7358;
    case 341u: goto L_002F7368;
    case 342u: goto L_002F7378;
    case 343u: goto L_002F7388;
    case 344u: goto L_002F73B0;
    case 345u: goto L_002F73C4;
    case 346u: goto L_002F7454;
    case 347u: goto L_002F7470;
    case 348u: goto L_002F7480;
    case 349u: goto L_002F7488;
    case 350u: goto L_002F74A0;
    case 351u: goto L_002F74C0;
    case 352u: goto L_002F74DC;
    case 353u: goto L_002F74E8;
    case 354u: goto L_002F7504;
    case 355u: goto L_002F7514;
    case 356u: goto L_002F7520;
    case 357u: goto L_002F753C;
    case 358u: goto L_002F7558;
    case 359u: goto L_002F7564;
    case 360u: goto L_002F7580;
    case 361u: goto L_002F7590;
    case 362u: goto L_002F759C;
    case 363u: goto L_002F75B0;
    case 364u: goto L_002F75C0;
    case 365u: goto L_002F75D0;
    case 366u: goto L_002F7620;
    case 367u: goto L_002F762C;
    case 368u: goto L_002F7638;
    case 369u: goto L_002F765C;
    case 370u: goto L_002F7680;
    case 371u: goto L_002F768C;
    case 372u: goto L_002F76AC;
    case 373u: goto L_002F76C8;
    case 374u: goto L_002F76E4;
    case 375u: goto L_002F7700;
    case 376u: goto L_002F771C;
    case 377u: goto L_002F7730;
    case 378u: goto L_002F7780;
    case 379u: goto L_002F77B4;
    case 380u: goto L_002F77C0;
    case 381u: goto L_002F7800;
    case 382u: goto L_002F7868;
    case 383u: goto L_002F7880;
    case 384u: goto L_002F78B0;
    case 385u: goto L_002F791C;
    case 386u: goto L_002F7928;
    case 387u: goto L_002F7934;
    case 388u: goto L_002F7940;
    case 389u: goto L_002F79A8;
    case 390u: goto L_002F79B8;
    case 391u: goto L_002F79E0;
    case 392u: goto L_002F79FC;
    case 393u: goto L_002F7A50;
    case 394u: goto L_002F7A70;
    case 395u: goto L_002F7A80;
    case 396u: goto L_002F7A90;
    case 397u: goto L_002F7A98;
    case 398u: goto L_002F7AB0;
    case 399u: goto L_002F7AC4;
    case 400u: goto L_002F7AD4;
    case 401u: goto L_002F7AE4;
    case 402u: goto L_002F7AF4;
    case 403u: goto L_002F7B04;
    case 404u: goto L_002F7B10;
    case 405u: goto L_002F7B40;
    case 406u: goto L_002F7B50;
    case 407u: goto L_002F7B60;
    case 408u: goto L_002F7BA0;
    case 409u: goto L_002F7BAC;
    case 410u: goto L_002F7BB4;
    case 411u: goto L_002F7BC8;
    case 412u: goto L_002F7BF4;
    case 413u: goto L_002F7C08;
    case 414u: goto L_002F7C20;
    case 415u: goto L_002F7C40;
    case 416u: goto L_002F7C88;
    case 417u: goto L_002F7CB4;
    case 418u: goto L_002F7CF0;
    case 419u: goto L_002F7E0C;
    case 420u: goto L_002F7E18;
    case 421u: goto L_002F7E20;
    case 422u: goto L_002F7E60;
    case 423u: goto L_002F7E6C;
    case 424u: goto L_002F7F0C;
    case 425u: goto L_002F7F18;
    case 426u: goto L_002F7FD8;
    default: bad_entry(c, 0x002F4000u); return;
    }
L_002F4000:
    c.f[2] = ld32((c.r[20].w[0] + 4u));
    c.f[4] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[23], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[3], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[23], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.facc = fp::ee::sub(c.fcr31, c.f[3], c.f[0]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[23], c.f[4]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.f[2] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[4]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[3]);
    st32((c.r[4].w[0]), c.f[2]);
    st32((c.r[4].w[0] + 20u), c.f[1]);
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.f[3] = ld32((c.r[20].w[0]));
    c.f[1] = ld32((c.r[20].w[0] + 12u));
    c.f[2] = ld32((c.r[20].w[0] + 4u));
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[23], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[23], c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[3] = ld32((c.r[20].w[0]));
    c.f[1] = ld32((c.r[20].w[0] + 12u));
    c.f[2] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[23], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[23], c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[3] = ld32((c.r[20].w[0] + 4u));
    c.f[1] = ld32((c.r[20].w[0] + 12u));
    c.f[2] = ld32((c.r[20].w[0] + 8u));
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[23], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[23], c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 24u), c.f[1]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 108u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.f[1] = ld32((c.r[3].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 56u), c.f[0]);
    set32(c.r[8], ld32((c.r[21].w[0] + 108u)));
    ld128((c.r[21].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[21].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[8].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[8].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[8].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    ld128((c.r[21].w[0] + 32u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[21].w[0] + 48u) & ~15u, c.vu0.vf[8]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[1].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[1].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[1].w[2]);
    vu::maddbc4<0>(c.vu0, 15u, 9u, 8u, c.vu0.vf[1].w[3]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[2].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[2].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[2].w[2]);
    vu::maddbc4<0>(c.vu0, 15u, 10u, 8u, c.vu0.vf[2].w[3]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[3].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[3].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[3].w[2]);
    vu::maddbc4<0>(c.vu0, 15u, 11u, 8u, c.vu0.vf[3].w[3]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[4].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[4].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[4].w[2]);
    vu::maddbc4<1>(c.vu0, 15u, 12u, 8u, c.vu0.vf[4].w[3]);
    set32(c.r[7], c.r[29].w[0] + 560u);
    set32(c.r[4], 0u + 8u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[9]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[10]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[11]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[6]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[5]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[6]);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[5]);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[2]);
    c.budget -= 106;
L_002F41A8:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    st32((c.r[8].w[0]), c.r[3].w[0]);
    st32((c.r[8].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F41A8u | kUnwind; return; } goto L_002F41A8; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_002F47B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[22], c.r[29].w[0] + 548u);
    c.f[26] = c.r[2].w[0];
    set32(c.r[23], c.r[29].w[0] + 552u);
    c.f[25] = 0u;
    set32(c.r[30], c.r[29].w[0] + 556u);
    c.budget -= 6;
L_002F41F4:
    set32(c.r[16], c.r[18].w[0] << 4);
    set32(c.r[4], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    c.f[6] = ld32((c.r[4].w[0]));
    set32(c.r[2], c.r[20].w[0] + c.r[16].w[0]);
    c.f[4] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[5] = 0u;
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[6]);
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[6]);
    c.f[6] = fp::ee::madd(c.fcr31, c.facc, c.f[27], c.f[4]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[2]);
    c.f[4] = fp::ee::madd(c.fcr31, c.facc, c.f[27], c.f[0]);
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[3]);
    st32((c.r[29].w[0] + 544u), c.f[6]);
    st32((c.r[22].w[0]), c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.f[2] = fp::ee::madd(c.fcr31, c.facc, c.f[27], c.f[2]);
    st32((c.r[2].w[0]), c.f[6]);
    st32((c.r[2].w[0] + 4u), c.f[4]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[5], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[27], c.f[0]);
    st32((c.r[2].w[0] + 8u), c.f[2]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 148u)));
    st32((c.r[23].w[0]), c.f[2]);
    c.budget -= 35;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[30].w[0]), c.f[0]);  if (t) { goto L_002F4570; } }
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 800u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F4570; } }
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[21] = fp::ee::mul(c.fcr31, c.f[26], c.f[2]);
    c.f[20] = fp::ee::mul(c.fcr31, c.f[26], c.f[1]);
    c.f[28] = fp::ee::mul(c.fcr31, c.f[26], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F42B4u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002F42B4u) [[unlikely]] return; }
L_002F42B4:
    c.f[12] = c.f[21];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F42C0u); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002F42C0u) [[unlikely]] return; }
L_002F42C0:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F42CCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002F42CCu) [[unlikely]] return; }
L_002F42CC:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F42D8u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002F42D8u) [[unlikely]] return; }
L_002F42D8:
    c.f[29] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F42E4u); c.f[12] = c.f[28];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002F42E4u) [[unlikely]] return; }
L_002F42E4:
    c.f[12] = c.f[28];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F42F0u); c.f[28] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002F42F0u) [[unlikely]] return; }
L_002F42F0:
    c.f[3] = fp::ee::mul(c.fcr31, c.f[20], c.f[28]);
    set32(c.r[2], c.r[20].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[29].w[0] + 684u);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[29], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[22], c.f[3]);
    c.f[17] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[22], c.f[2]);
    c.f[16] = fp::ee::msub(c.fcr31, c.facc, c.f[21], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[29], c.f[28]);
    c.f[13] = ld32((c.r[20].w[0]));
    st32((c.r[3].w[0]), c.f[17]);
    c.f[12] = ld32((c.r[20].w[0] + 4u));
    set32(c.r[3], c.r[29].w[0] + 676u);
    c.f[11] = ld32((c.r[20].w[0] + 8u));
    c.f[6] = ld32((c.r[2].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[22], c.f[1]);
    c.f[15] = fp::ee::madd(c.fcr31, c.facc, c.f[21], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[21], c.f[1]);
    st32((c.r[3].w[0]), c.f[15]);
    c.f[14] = fp::ee::msub(c.fcr31, c.facc, c.f[22], c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 680u);
    st32((c.r[3].w[0]), c.f[14]);
    set32(c.r[3], c.r[29].w[0] + 644u);
    st32((c.r[3].w[0]), c.f[12]);
    set32(c.r[3], c.r[29].w[0] + 648u);
    st32((c.r[3].w[0]), c.f[11]);
    c.f[9] = c.f[13] ^ fp::kSign;
    set32(c.r[3], c.r[29].w[0] + 652u);
    c.f[10] = ld32((c.r[20].w[0] + 12u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[5] = ld32((c.r[2].w[0] + 4u));
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.f[8] = c.f[12] ^ fp::kSign;
    c.f[7] = c.f[11] ^ fp::kSign;
    st32((c.r[3].w[0]), c.f[10]);
    set32(c.r[3], c.r[29].w[0] + 668u);
    st32((c.r[3].w[0]), c.f[10]);
    set32(c.r[3], c.r[29].w[0] + 212u);
    st32((c.r[3].w[0]), c.f[5]);
    set32(c.r[3], c.r[29].w[0] + 660u);
    st32((c.r[3].w[0]), c.f[8]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[10]);
    set32(c.r[3], c.r[29].w[0] + 664u);
    c.facc = fp::ee::msub(c.fcr31, c.facc, c.f[6], c.f[9]);
    st32((c.r[3].w[0]), c.f[7]);
    c.facc = fp::ee::msub(c.fcr31, c.facc, c.f[5], c.f[8]);
    set32(c.r[3], c.r[29].w[0] + 216u);
    c.f[3] = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[7]);
    st32((c.r[3].w[0]), c.f[4]);
    c.facc = fp::ee::mul(c.fcr31, c.f[6], c.f[10]);
    set32(c.r[3], c.r[29].w[0] + 220u);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[9]);
    st32((c.r[3].w[0]), c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[7]);
    set32(c.r[3], c.r[29].w[0] + 252u);
    c.f[2] = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[8]);
    st32((c.r[3].w[0]), c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[10]);
    set32(c.r[3], c.r[29].w[0] + 508u);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[8]);
    st32((c.r[3].w[0]), c.f[3]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[9]);
    set32(c.r[3], c.r[29].w[0] + 236u);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[6], c.f[7]);
    st32((c.r[3].w[0]), c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[10]);
    set32(c.r[3], c.r[29].w[0] + 244u);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[7]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[8]);
    st32((c.r[3].w[0]), c.f[1]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[5], c.f[9]);
    set32(c.r[3], c.r[29].w[0] + 248u);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 500u);
    st32((c.r[3].w[0]), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[17]);
    set32(c.r[3], c.r[29].w[0] + 504u);
    c.facc = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[16]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 228u);
    st32((c.r[3].w[0]), c.f[1]);
    set32(c.r[3], c.r[29].w[0] + 232u);
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 208u), c.f[6]);
    set32(c.r[3], c.r[29].w[0] + 284u);
    c.facc = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[15]);
    c.f[6] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[14]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[17]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[16]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[14]);
    c.f[5] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[15]);
    st32((c.r[3].w[0]), c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[1], c.f[17]);
    set32(c.r[3], c.r[29].w[0] + 524u);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[15]);
    st32((c.r[3].w[0]), c.f[6]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[16]);
    set32(c.r[3], c.r[29].w[0] + 268u);
    c.f[4] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[14]);
    st32((c.r[3].w[0]), c.f[6]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[17]);
    set32(c.r[3], c.r[29].w[0] + 276u);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[14]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[15]);
    st32((c.r[3].w[0]), c.f[4]);
    c.f[3] = fp::ee::msub(c.fcr31, c.facc, c.f[1], c.f[16]);
    set32(c.r[3], c.r[29].w[0] + 280u);
    st32((c.r[3].w[0]), c.f[3]);
    c.facc = fp::ee::mul(c.fcr31, c.f[6], c.f[10]);
    set32(c.r[3], c.r[29].w[0] + 516u);
    c.facc = fp::ee::msub(c.fcr31, c.facc, c.f[5], c.f[13]);
    st32((c.r[3].w[0]), c.f[4]);
    set32(c.r[3], c.r[29].w[0] + 520u);
    st32((c.r[3].w[0]), c.f[3]);
    set32(c.r[3], c.r[29].w[0] + 260u);
    st32((c.r[3].w[0]), c.f[4]);
    set32(c.r[3], c.r[29].w[0] + 264u);
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[29].w[0] + 240u), c.f[2]);
    set32(c.r[3], c.r[29].w[0] + 364u);
    st32((c.r[29].w[0] + 496u), c.f[2]);
    st32((c.r[29].w[0] + 224u), c.f[2]);
    c.facc = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[12]);
    c.f[2] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[11]);
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[10]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[13]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[11]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[12]);
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[10]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[12]);
    st32((c.r[3].w[0]), c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[13]);
    set32(c.r[3], c.r[29].w[0] + 540u);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[5], c.f[11]);
    st32((c.r[3].w[0]), c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[10]);
    set32(c.r[3], c.r[29].w[0] + 356u);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[11]);
    st32((c.r[2].w[0]), c.f[0]);
    st32((c.r[3].w[0]), c.f[1]);
    st32((c.r[29].w[0] + 352u), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 360u);
    st32((c.r[29].w[0] + 528u), c.f[0]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[12]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[13]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[29].w[0] + 532u);
    st32((c.r[3].w[0]), c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[1]);
    set32(c.r[3], c.r[29].w[0] + 536u);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    st32((c.r[29].w[0] + 672u), c.f[16]);
    st32((c.r[29].w[0] + 640u), c.f[13]);
    st32((c.r[29].w[0] + 656u), c.f[9]);
    st32((c.r[29].w[0] + 272u), c.f[5]);
    st32((c.r[29].w[0] + 512u), c.f[5]);
    st32((c.r[29].w[0] + 256u), c.f[5]);
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.f[2]);
    c.budget -= 160;
L_002F4570:
    set32(c.r[4], ld32((c.r[21].w[0] + 108u)));
    set32(c.r[7], c.r[18].w[0] << 6);
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[18].w[0] << 5);
    set32(c.r[3], c.r[29].w[0] + 288u);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 56u), c.f[25]);
    st32((c.r[4].w[0] + 52u), c.f[25]);
    st32((c.r[4].w[0] + 48u), c.f[25]);
    st32((c.r[4].w[0] + 44u), c.f[25]);
    st32((c.r[4].w[0] + 28u), c.f[25]);
    st32((c.r[4].w[0] + 12u), c.f[25]);
    st32((c.r[4].w[0] + 60u), c.f[24]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[23], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[23], c.f[3]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[1], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[23], c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[24], c.f[3]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[24], c.f[0]);
    st32((c.r[4].w[0]), c.f[1]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 20u), c.f[1]);
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[23], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[23], c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[23], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[23], c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[23], c.f[3]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[23], c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 24u), c.f[1]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 108u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 48u));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 52u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 56u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 56u), c.f[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[21].w[0] + 108u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[7].w[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[4]);
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[7]);
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[8]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[1].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[1].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[1].w[2]);
    vu::maddbc4<0>(c.vu0, 15u, 9u, 8u, c.vu0.vf[1].w[3]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[2].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[2].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[2].w[2]);
    vu::maddbc4<0>(c.vu0, 15u, 10u, 8u, c.vu0.vf[2].w[3]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[3].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[3].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[3].w[2]);
    vu::maddbc4<0>(c.vu0, 15u, 11u, 8u, c.vu0.vf[3].w[3]);
    vu::mulabc4<0>(c.vu0, 15u, 5u, c.vu0.vf[4].w[0]);
    vu::maddabc4<0>(c.vu0, 15u, 6u, c.vu0.vf[4].w[1]);
    vu::maddabc4<0>(c.vu0, 15u, 7u, c.vu0.vf[4].w[2]);
    vu::maddbc4<1>(c.vu0, 15u, 12u, 8u, c.vu0.vf[4].w[3]);
    set32(c.r[8], c.r[29].w[0] + 432u);
    set32(c.r[5], 0u + 8u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[9]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[10]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[11]);
    st128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[7]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[6]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[4]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[7]);
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[6]);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[4]);
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[3]);
    c.budget -= 130;
L_002F4778:
    set32(c.r[4], ld32((c.r[8].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], ld32((c.r[8].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[2], c.r[2].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4778u | kUnwind; return; } goto L_002F4778; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F41F4u | kUnwind; return; } goto L_002F41F4; } }
L_002F47B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    st32((c.r[21].w[0] + 64u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    st32((c.r[21].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[7], c.r[21].w[0] + 64u);
    st32((c.r[21].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[6], c.r[21].w[0] + 80u);
    st32((c.r[21].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 108u)));
    ld128((c.r[21].w[0] + 64u) & ~15u, c.vu0.vf[2]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    ld128((c.r[21].w[0] + 80u) & ~15u, c.vu0.vf[3]);
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002F4820; } }
L_002F47F8:
    ld128((c.r[4].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    vu::mini4(c.vu0, 15u, 2u, 1u, 2u);
    set32(c.r[4], c.r[4].w[0] + 64u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; vu::max4(c.vu0, 15u, 3u, 1u, 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F47F8u | kUnwind; return; } goto L_002F47F8; } }
    c.budget -= 1;
L_002F4820:
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[2]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[2], ld32((c.r[21].w[0] + 148u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F4950; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002F4950; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002F4850:
    set32(c.r[3], ld32((c.r[21].w[0] + 108u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], ld32((c.r[21].w[0] + 148u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 640u));
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[4] = ld32((c.r[3].w[0] + 48u));
    c.f[3] = ld32((c.r[3].w[0] + 52u));
    c.f[2] = ld32((c.r[3].w[0] + 56u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 56u), c.f[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 108u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 48u), c.f[4]);
    set32(c.r[2], ld32((c.r[21].w[0] + 108u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 52u), c.f[3]);
    set32(c.r[2], ld32((c.r[21].w[0] + 108u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 56u), c.f[2]);
    set32(c.r[2], ld32((c.r[21].w[0] + 108u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 60u), c.f[24]);
    set32(c.r[2], ld32((c.r[21].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 63;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4850u | kUnwind; return; } goto L_002F4850; } }
    c.budget -= 1;
L_002F4950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4958u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x002F4958u) [[unlikely]] return; }
L_002F4958:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1712u);  c.pc = t; return; }
L_002F49B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[9], ld32((c.r[4].w[0] + 104u)));
    c.f[3] = ld32((c.r[4].w[0] + 120u));
    set32(c.r[10], ld32((c.r[4].w[0] + 136u)));
    c.f[2] = ld32((c.r[4].w[0] + 128u));
    set32(c.r[5], ld32((c.r[4].w[0] + 112u)));
    c.f[0] = ld32((c.r[4].w[0] + 132u));
    c.f[1] = ld32((c.r[4].w[0] + 96u));
    set32(c.r[3], ld32((c.r[9].w[0] + 8u)));
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[3] = fp::ee::div(c.fcr31, c.f[2], c.f[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[10].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    c.r[6].d[0] = ld16((c.r[4].w[0] + 140u));
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 12u), 0u);
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[29].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[2] = 0u;
    st32((c.r[29].w[0]), c.f[3]);
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 96u), c.f[3]);
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = ld32((c.r[4].w[0] + 100u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[1]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[11]);
    set32(c.r[7], ld32((c.r[4].w[0] + 104u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 140u));
    set32(c.r[6], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0] + 12u)));
    mmi::mult(c, 1, c.r[6].w[0], c.r[10].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[8], ld32((c.r[8].w[0])));
    set32(c.r[10], c.r[3].w[0] << 4);
    st32((c.r[29].w[0] + 44u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[7].d[0] = c.r[3].d[0] | 4096ull;
    c.r[6].d[0] = c.r[3].d[0] | 6144ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[9], ld32((c.r[3].w[0] + 9064u)));
    set32(c.r[3], c.r[8].w[0] + c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[9].w[0])));
    c.r[8].d[0] = c.r[8].d[0] << 55;
    c.r[8].d[0] = c.r[8].d[0] >> 63;
    c.budget -= 60;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002F4AC0; } }
L_002F4AA0:
    set32(c.r[8], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    st32((c.r[29].w[0] + 44u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[9].w[0])));
    c.r[8].d[0] = c.r[8].d[0] << 55;
    c.r[8].d[0] = c.r[8].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4AA0u | kUnwind; return; } goto L_002F4AA0; } }
L_002F4AC0:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[9], ld32((c.r[8].w[0] + 9092u)));
    st32((c.r[29].w[0] + 40u), 0u);
    set32(c.r[8], ld32((c.r[9].w[0])));
    c.r[8].d[0] = c.r[8].d[0] << 55;
    c.r[8].d[0] = c.r[8].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002F4B00; } }
L_002F4AE0:
    set32(c.r[8], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    st32((c.r[29].w[0] + 40u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[9].w[0])));
    c.r[8].d[0] = c.r[8].d[0] << 55;
    c.r[8].d[0] = c.r[8].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4AE0u | kUnwind; return; } goto L_002F4AE0; } }
L_002F4B00:
    set32(c.r[11], ld32((c.r[4].w[0] + 104u)));
    c.r[10].d[0] = c.r[5].d[0] << 36;
    c.r[9].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[10].d[0] = c.r[10].d[0] >> 36;
    c.r[9].d[0] = c.r[9].d[0] | 4096ull;
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    set32(c.r[11], ld32((c.r[11].w[0] + 4u)));
    st32((c.r[8].w[0] - 11232u), c.r[11].w[0]);
    st32((c.r[8].w[0] - 11248u), c.r[10].w[0]);
    st32((c.r[8].w[0] - 11136u), c.r[9].w[0]);
    set32(c.r[9], 0u + 256u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[8].w[0] - 11264u), c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[9], ld32((c.r[8].w[0] + 9092u)));
    set32(c.r[8], ld32((c.r[9].w[0])));
    c.r[8].d[0] = c.r[8].d[0] << 55;
    c.r[8].d[0] = c.r[8].d[0] >> 63;
    c.budget -= 23;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002F4B80; } }
L_002F4B5C:
    set32(c.r[8], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    st32((c.r[29].w[0] + 36u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[9].w[0])));
    c.r[8].d[0] = c.r[8].d[0] << 55;
    c.r[8].d[0] = c.r[8].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4B5Cu | kUnwind; return; } goto L_002F4B5C; } }
    c.budget -= 1;
L_002F4B80:
    set32(c.r[10], ld32((c.r[4].w[0] + 104u)));
    c.r[9].d[0] = c.r[3].d[0] << 36;
    c.r[8].sd[0] = static_cast<std::int32_t>(0xF0000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[9].d[0] = c.r[9].d[0] >> 36;
    c.r[8].d[0] = c.r[8].d[0] | 6144ull;
    set32(c.r[10], ld32((c.r[10].w[0] + 4u)));
    st32((c.r[3].w[0] - 11232u), c.r[10].w[0]);
    st32((c.r[3].w[0] - 11248u), c.r[9].w[0]);
    st32((c.r[3].w[0] - 11136u), c.r[8].w[0]);
    set32(c.r[8], 0u + 256u);
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[3].w[0] - 11264u), c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[8], ld32((c.r[3].w[0] + 9092u)));
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F4BF8; } }
L_002F4BD4:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.r[3].d[0] = c.r[3].d[0] << 55;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4BD4u | kUnwind; return; } goto L_002F4BD4; } }
    c.budget -= 1;
L_002F4BF8:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[3].d[0] = c.r[8].d[0] | 8192ull;
    c.r[9].d[0] = c.r[8].d[0] | 6144ull;
    c.r[8].d[0] = c.r[8].d[0] | 4096ull;
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[9].w[0]) & ~15u, c.vu0.vf[2]);
    vu::addabc4<0>(c.vu0, 15u, 1u, c.vu0.vf[0].w[0]);
    vu::msubabc4<0>(c.vu0, 15u, 1u, c.vu0.vf[11].w[0]);
    vu::maddbc4<1>(c.vu0, 15u, 1u, 2u, c.vu0.vf[11].w[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    set32(c.r[9], c.r[6].w[0] + 16u);
    set32(c.r[10], c.r[7].w[0] + 16u);
    set32(c.r[6], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[8], ld32((c.r[6].w[0] + 4u)));
    c.r[1].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_002F4C90; } }
L_002F4C48:
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    ld128((c.r[10].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[9].w[0]) & ~15u, c.vu0.vf[2]);
    vu::addabc4<0>(c.vu0, 15u, 1u, c.vu0.vf[0].w[0]);
    vu::msubabc4<0>(c.vu0, 15u, 1u, c.vu0.vf[11].w[0]);
    vu::maddbc4<1>(c.vu0, 15u, 1u, 2u, c.vu0.vf[11].w[0]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[1]);
    set32(c.r[6], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[10], c.r[10].w[0] + 16u);
    set32(c.r[8], ld32((c.r[6].w[0] + 4u)));
    c.r[6].d[0] = c.r[7].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4C48u | kUnwind; return; } goto L_002F4C48; } }
L_002F4C90:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[7], ld32((c.r[6].w[0] + 9088u)));
    st32((c.r[29].w[0] + 28u), 0u);
    set32(c.r[6], ld32((c.r[7].w[0])));
    c.r[6].d[0] = c.r[6].d[0] << 55;
    c.r[6].d[0] = c.r[6].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002F4CD0; } }
L_002F4CB0:
    set32(c.r[6], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[29].w[0] + 28u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[7].w[0])));
    c.r[6].d[0] = c.r[6].d[0] << 55;
    c.r[6].d[0] = c.r[6].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4CB0u | kUnwind; return; } goto L_002F4CB0; } }
L_002F4CD0:
    set32(c.r[7], ld32((c.r[4].w[0] + 112u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 16368ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] - 12256u), c.r[8].w[0]);
    st32((c.r[4].w[0] - 12272u), c.r[5].w[0]);
    st32((c.r[4].w[0] - 12160u), c.r[3].w[0]);
    set32(c.r[3], 0u + 256u);
    st32((c.r[4].w[0] - 12288u), c.r[3].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F4D10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F4D20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F4D30:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F50EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4D50u);  if (depth < kMaxDepth) unit_003D(c, 54u, depth + 1u); else { c.pc = 0x002F52F0u; return; } if (c.pc != 0x002F4D50u) [[unlikely]] return; }
L_002F4D50:
    set32(c.r[3], ld32((c.r[16].w[0] + 264u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 523u));
    c.r[4].d[0] = c.r[4].d[0] << 58;
    c.r[4].d[0] = c.r[4].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F50EC; } }
    c.r[5].d[0] = ld16((c.r[3].w[0] + 380u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    c.r[5].d[0] = ld8((c.r[6].w[0] + 48u));
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.r[5].d[0] = c.r[5].d[0] >> 57;
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_002F4D9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[6].w[0] + 60u));  if (t) { goto L_002F4DA0; } }
L_002F4D9C:
    set32(c.r[5], 0u + 60u);
    c.budget -= 1;
L_002F4DA0:
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[4], 0u + 60u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_002F5058; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_002F50D4; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_002F4DE0; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_002F4DE0:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[6].d[0] = c.r[7].d[0] & 255ull;
    c.r[4].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F4DF8; } }
    c.r[7].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_002F4DF8:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[7], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_002F4E08:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4E14u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0032(c, 15u, depth + 1u); else { c.pc = 0x002C8480u; return; } if (c.pc != 0x002F4E14u) [[unlikely]] return; }
L_002F4E14:
    set32(c.r[4], ld32((c.r[16].w[0] + 264u)));
    c.budget -= 1;
L_002F4E18:
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F50E0; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1581u));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F4E3C; } }
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1572u));
    c.budget -= 1;
L_002F4E3C:
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002F4E4C:
    set32(c.r[4], c.r[4].w[0] + 1536u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4E5Cu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0032(c, 15u, depth + 1u); else { c.pc = 0x002C8480u; return; } if (c.pc != 0x002F4E5Cu) [[unlikely]] return; }
L_002F4E5C:
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xCB180000u);
    c.r[2].d[0] = c.r[2].d[0] | 38528ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4B180000u);
    c.f[2] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] | 38528ull;
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    c.f[3] = c.r[3].w[0];
    c.f[4] = c.f[2];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.f[5] = c.f[3];
    c.f[7] = c.f[3];
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[6] = c.f[2];  if (t) { goto L_002F4E9C; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_002F4E9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4B180000u);
    c.r[2].d[0] = c.r[2].d[0] | 38528ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F4EBC; } }
    c.f[3] = c.f[1];
    c.budget -= 1;
L_002F4EBC:
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xCB180000u);
    c.r[2].d[0] = c.r[2].d[0] | 38528ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F4EE0; } }
    c.f[4] = c.f[1];
    c.budget -= 1;
L_002F4EE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4B180000u);
    c.r[2].d[0] = c.r[2].d[0] | 38528ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F4F00; } }
    c.f[5] = c.f[1];
    c.budget -= 1;
L_002F4F00:
    c.f[1] = ld32((c.r[29].w[0] + 136u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xCB180000u);
    c.r[2].d[0] = c.r[2].d[0] | 38528ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F4F24; } }
    c.f[6] = c.f[1];
    c.budget -= 1;
L_002F4F24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4B180000u);
    c.r[2].d[0] = c.r[2].d[0] | 38528ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F4F44; } }
    c.f[7] = c.f[1];
    c.budget -= 1;
L_002F4F44:
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F4F58; } }
    c.f[2] = c.f[0];
    c.budget -= 1;
L_002F4F58:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F4F68; } }
    c.f[3] = c.f[0];
    c.budget -= 1;
L_002F4F68:
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F4F7C; } }
    c.f[4] = c.f[0];
    c.budget -= 1;
L_002F4F7C:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[5]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F4F8C; } }
    c.f[5] = c.f[0];
    c.budget -= 1;
L_002F4F8C:
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[6]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F4FA0; } }
    c.f[6] = c.f[0];
    c.budget -= 1;
L_002F4FA0:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[7]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F4FB0; } }
    c.f[7] = c.f[0];
    c.budget -= 1;
L_002F4FB0:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[3]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 224u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[1] = fp::ee::sub(c.fcr31, c.f[4], c.f[5]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[6], c.f[7]);
    st32((c.r[29].w[0] + 32u), c.f[3]);
    st32((c.r[29].w[0] + 36u), c.f[5]);
    st32((c.r[29].w[0] + 40u), c.f[7]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4FE8u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0001(c, 182u, depth + 1u); else { c.pc = 0x00207A00u; return; } if (c.pc != 0x002F4FE8u) [[unlikely]] return; }
L_002F4FE8:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 60u));
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F50EC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[4], c.r[16].w[0] + 84u);
    c.f[2] = ld32((c.r[2].w[0] + 436u));
    c.f[1] = ld32((c.r[2].w[0] + 432u));
    c.f[0] = ld32((c.r[2].w[0] + 440u));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F501Cu); c.f[12] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);  if (depth < kMaxDepth) unit_0001(c, 131u, depth + 1u); else { c.pc = 0x00206C80u; return; } if (c.pc != 0x002F501Cu) [[unlikely]] return; }
L_002F501C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] - 224u);
    set32(c.r[5], ld32((c.r[3].w[0] + 268u)));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[8], ld32((c.r[3].w[0] + 276u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 280u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 348u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5050u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002F5050u) [[unlikely]] return; }
L_002F5050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002F50F0; } }
L_002F5058:
    c.r[5].d[0] = ld8((c.r[3].w[0] + 1536u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 14976u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_002F50C8; } }
    c.r[4].d[0] = c.r[4].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[1].d[0] = c.r[4].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_002F508C; } }
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 2;
L_002F508C:
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F50A4; } }
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 1;
L_002F50A4:
    set32(c.r[2], ld32((c.r[3].w[0] + 348u)));
    c.r[4].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] << 6);
    set32(c.r[6], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_002F50B4:
    set32(c.r[4], c.r[3].w[0] + 1536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F50C0u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0032(c, 17u, depth + 1u); else { c.pc = 0x002C8540u; return; } if (c.pc != 0x002F50C0u) [[unlikely]] return; }
L_002F50C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 264u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4E18u | kUnwind; return; } goto L_002F4E18; } }
L_002F50C8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 6448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F50B4u | kUnwind; return; } goto L_002F50B4; } }
L_002F50D4:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 6448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4E08u | kUnwind; return; } goto L_002F4E08; } }
L_002F50E0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 6448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4E4Cu | kUnwind; return; } goto L_002F4E4C; } }
L_002F50EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002F50F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002F5100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F51B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 14896u);
    set32(c.r[2], c.r[2].w[0] - 14888u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 268u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14876u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14864u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14852u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 14840u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F516Cu); st32((c.r[17].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002F516Cu) [[unlikely]] return; }
L_002F516C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5174u); set32(c.r[4], c.r[17].w[0] + 284u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002F5174u) [[unlikely]] return; }
L_002F5174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F517Cu); set32(c.r[4], c.r[17].w[0] + 300u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002F517Cu) [[unlikely]] return; }
L_002F517C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[17].w[0] + 268u);
    set32(c.r[5], c.r[5].w[0] + 30592u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5194u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x002F5194u) [[unlikely]] return; }
L_002F5194:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F51A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 85u, depth + 1u); else { c.pc = 0x002F5700u; return; } if (c.pc != 0x002F51A0u) [[unlikely]] return; }
L_002F51A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F51B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F51B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002F51B8u) [[unlikely]] return; }
L_002F51B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F51D0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F51E4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 99u, depth + 1u); else { c.pc = 0x002F58A0u; return; } if (c.pc != 0x002F51E4u) [[unlikely]] return; }
L_002F51E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 14896u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14888u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14876u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14864u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14852u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[2], c.r[2].w[0] - 14840u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 268u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 28960u);
    set32(c.r[6], c.r[6].w[0] + 30592u);
    set32(c.r[7], 0u + 16u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F524Cu); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x002F524Cu) [[unlikely]] return; }
L_002F524C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F525Cu); set32(c.r[5], c.r[5].w[0] + 5408u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F525Cu) [[unlikely]] return; }
L_002F525C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F526Cu); set32(c.r[5], c.r[5].w[0] - 6345u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F526Cu) [[unlikely]] return; }
L_002F526C:
    set32(c.r[4], c.r[16].w[0] + 268u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F527Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 317u, depth + 1u); else { c.pc = 0x002877F0u; return; } if (c.pc != 0x002F527Cu) [[unlikely]] return; }
L_002F527C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F528Cu); set32(c.r[5], c.r[5].w[0] + 5408u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F528Cu) [[unlikely]] return; }
L_002F528C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F529Cu); set32(c.r[5], c.r[5].w[0] - 6338u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F529Cu) [[unlikely]] return; }
L_002F529C:
    set32(c.r[4], c.r[16].w[0] + 284u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F52ACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 317u, depth + 1u); else { c.pc = 0x002877F0u; return; } if (c.pc != 0x002F52ACu) [[unlikely]] return; }
L_002F52AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F52BCu); set32(c.r[5], c.r[5].w[0] + 5408u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F52BCu) [[unlikely]] return; }
L_002F52BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F52CCu); set32(c.r[5], c.r[5].w[0] - 6331u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F52CCu) [[unlikely]] return; }
L_002F52CC:
    set32(c.r[4], c.r[16].w[0] + 300u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F52DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 317u, depth + 1u); else { c.pc = 0x002877F0u; return; } if (c.pc != 0x002F52DCu) [[unlikely]] return; }
L_002F52DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_002F52F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F5550; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F5358; } }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 220u));
    set32(c.r[3], 0u + 25u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F5550; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5350u); set32(c.r[4], c.r[4].w[0] + 23456u);  if (depth < kMaxDepth) unit_009E(c, 10u, depth + 1u); else { c.pc = 0x00478400u; return; } if (c.pc != 0x002F5350u) [[unlikely]] return; }
L_002F5350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5550; } }
L_002F5358:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 77u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F54A0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 228u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F54F4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 288u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5388u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F5388u) [[unlikely]] return; }
L_002F5388:
    set32(c.r[2], ld32((c.r[20].w[0] + 228u)));
    st32((c.r[28].w[0] - 29836u), c.r[2].w[0]);
    c.budget -= 2;
L_002F5390:
    set32(c.r[2], ld32((c.r[20].w[0] + 264u)));
    c.budget -= 1;
L_002F5394:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F53A0u); set32(c.r[4], c.r[2].w[0] + 3504u);  if (depth < kMaxDepth) unit_0001(c, 162u, depth + 1u); else { c.pc = 0x00207380u; return; } if (c.pc != 0x002F53A0u) [[unlikely]] return; }
L_002F53A0:
    set32(c.r[3], ld32((c.r[20].w[0] + 264u)));
    set32(c.r[2], 0u + 25u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 220u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F5510; } }
    set32(c.r[6], ld32((c.r[20].w[0] + 264u)));
    c.budget -= 1;
L_002F53B8:
    set32(c.r[3], ld32((c.r[6].w[0] + 344u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 1568u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002F53D4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 1568u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0])));  if (t) { goto L_002F53D8; } }
L_002F53D4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F53D8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F53E4; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002F53E4:
    set32(c.r[5], ld32((c.r[6].w[0] + 348u)));
    set32(c.r[4], c.r[20].w[0] + 84u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F53FCu); set32(c.r[6], c.r[6].w[0] + 432u);  if (depth < kMaxDepth) unit_0001(c, 134u, depth + 1u); else { c.pc = 0x00206D00u; return; } if (c.pc != 0x002F53FCu) [[unlikely]] return; }
L_002F53FC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F5550; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 264u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 344u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 1568u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5418u); c.f[12] = ld32((c.r[3].w[0] + 360u));  if (depth < kMaxDepth) unit_0079(c, 133u, depth + 1u); else { c.pc = 0x003E5CC0u; return; } if (c.pc != 0x002F5418u) [[unlikely]] return; }
L_002F5418:
    set32(c.r[21], ld32((c.r[20].w[0] + 256u)));
    c.r[1].d[0] = 0ull < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002F5460; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 18224u);
    c.budget -= 3;
L_002F5434:
    c.r[1].d[0] = c.r[19].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F5524; } }
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 2;
L_002F5448:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5434u | kUnwind; return; } goto L_002F5434; } }
    c.budget -= 1;
L_002F5460:
    set32(c.r[2], ld32((c.r[20].w[0] + 260u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 224u);
    c.r[9].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 264u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 240u)));
    set32(c.r[8], ld32((c.r[20].w[0] + 248u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 252u)));
    set32(c.r[10], ld32((c.r[20].w[0] + 256u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 348u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5498u); set32(c.r[11], c.r[11].w[0] - 18224u);  if (depth < kMaxDepth) unit_0017(c, 14u, depth + 1u); else { c.pc = 0x0025C5F0u; return; } if (c.pc != 0x002F5498u) [[unlikely]] return; }
L_002F5498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5350u | kUnwind; return; } goto L_002F5350; } }
L_002F54A0:
    set32(c.r[16], ld32((c.r[28].w[0] - 29604u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F54D8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F54CCu); set32(c.r[5], c.r[2].w[0] + 288u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F54CCu) [[unlikely]] return; }
L_002F54CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29836u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5390u | kUnwind; return; } goto L_002F5390; } }
L_002F54D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F54ECu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F54ECu) [[unlikely]] return; }
L_002F54EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 264u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5394u | kUnwind; return; } goto L_002F5394; } }
L_002F54F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5508u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F5508u) [[unlikely]] return; }
L_002F5508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5390u | kUnwind; return; } goto L_002F5390; } }
L_002F5510:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F551Cu); set32(c.r[4], c.r[4].w[0] + 23456u);  if (depth < kMaxDepth) unit_009E(c, 11u, depth + 1u); else { c.pc = 0x00478410u; return; } if (c.pc != 0x002F551Cu) [[unlikely]] return; }
L_002F551C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[20].w[0] + 264u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F53B8u | kUnwind; return; } goto L_002F53B8; } }
L_002F5524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F552Cu); set32(c.r[4], c.r[28].w[0] - 28336u);  if (depth < kMaxDepth) unit_000F(c, 418u, depth + 1u); else { c.pc = 0x0023FC90u; return; } if (c.pc != 0x002F552Cu) [[unlikely]] return; }
L_002F552C:
    set32(c.r[3], 0u + 50u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5448u | kUnwind; return; } goto L_002F5448; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5548u); set32(c.r[4], c.r[28].w[0] - 28336u);  if (depth < kMaxDepth) unit_000F(c, 416u, depth + 1u); else { c.pc = 0x0023FBE0u; return; } if (c.pc != 0x002F5548u) [[unlikely]] return; }
L_002F5548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5448u | kUnwind; return; } goto L_002F5448; } }
L_002F5550:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002F5580:
    set32(c.r[3], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F5594; } }
L_002F558C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F559C; } }
L_002F5594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 264u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F558Cu | kUnwind; return; } goto L_002F558C; } }
L_002F559C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F55B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 264u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F55D8u); set32(c.r[4], c.r[4].w[0] + 496u);  if (depth < kMaxDepth) unit_0076(c, 99u, depth + 1u); else { c.pc = 0x003D9720u; return; } if (c.pc != 0x002F55D8u) [[unlikely]] return; }
L_002F55D8:
    st32((c.r[17].w[0] + 264u), 0u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 237u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F55F0; } }
L_002F55E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002F5608; } }
L_002F55F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5600u); set32(c.r[4], c.r[4].w[0] - 16128u);  if (depth < kMaxDepth) unit_0086(c, 141u, depth + 1u); else { c.pc = 0x00419E60u; return; } if (c.pc != 0x002F5600u) [[unlikely]] return; }
L_002F5600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F55E8u | kUnwind; return; } goto L_002F55E8; } }
L_002F5608:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F5620:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F5664; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F5664; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5660u); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x002E8B40u; return; } if (c.pc != 0x002F5660u) [[unlikely]] return; }
L_002F5660:
    st32((c.r[17].w[0] + 264u), 0u);
    c.budget -= 1;
L_002F5664:
    st32((c.r[17].w[0] + 264u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 236u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5678u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0041(c, 173u, depth + 1u); else { c.pc = 0x003056E0u; return; } if (c.pc != 0x002F5678u) [[unlikely]] return; }
L_002F5678:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 236u)));
    c.f[12] = ld32((c.r[29].w[0] + 60u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5690u); set32(c.r[7], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 262u, depth + 1u); else { c.pc = 0x00283600u; return; } if (c.pc != 0x002F5690u) [[unlikely]] return; }
L_002F5690:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 237u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F56CC; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1497u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 1497u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 264u)));
    c.budget -= 7;
L_002F56B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F56C4u); set32(c.r[4], c.r[4].w[0] + 496u);  if (depth < kMaxDepth) unit_0076(c, 103u, depth + 1u); else { c.pc = 0x003D97B0u; return; } if (c.pc != 0x002F56C4u) [[unlikely]] return; }
L_002F56C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002F56E8; } }
L_002F56CC:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 237u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F56E0u); set32(c.r[4], c.r[4].w[0] - 16128u);  if (depth < kMaxDepth) unit_0086(c, 155u, depth + 1u); else { c.pc = 0x0041A390u; return; } if (c.pc != 0x002F56E0u) [[unlikely]] return; }
L_002F56E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 264u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F56B8u | kUnwind; return; } goto L_002F56B8; } }
L_002F56E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F5700:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F585C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 14784u);
    set32(c.r[2], c.r[2].w[0] - 14776u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 84u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14764u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14752u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14740u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 14728u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5770u); st32((c.r[17].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0021(c, 268u, depth + 1u); else { c.pc = 0x00287140u; return; } if (c.pc != 0x002F5770u) [[unlikely]] return; }
L_002F5770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5778u); set32(c.r[4], c.r[17].w[0] + 188u);  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002F5778u) [[unlikely]] return; }
L_002F5778:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5784u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0011(c, 313u, depth + 1u); else { c.pc = 0x00246D80u; return; } if (c.pc != 0x002F5784u) [[unlikely]] return; }
L_002F5784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F578Cu); set32(c.r[4], c.r[17].w[0] + 240u);  if (depth < kMaxDepth) unit_0021(c, 202u, depth + 1u); else { c.pc = 0x002869D0u; return; } if (c.pc != 0x002F578Cu) [[unlikely]] return; }
L_002F578C:
    set32(c.r[4], c.r[17].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5798u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 199u, depth + 1u); else { c.pc = 0x00286950u; return; } if (c.pc != 0x002F5798u) [[unlikely]] return; }
L_002F5798:
    set32(c.r[4], c.r[17].w[0] + 188u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F5864; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F57ACu);  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002F57ACu) [[unlikely]] return; }
L_002F57AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 84u);  if (t) { goto L_002F5868; } }
L_002F57B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F57F4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29600u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F57D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F57D0u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002F57D0u) [[unlikely]] return; }
L_002F57D0:
    st32((c.r[28].w[0] - 29600u), 0u);
    c.budget -= 1;
L_002F57D4:
    set32(c.r[18], ld32((c.r[28].w[0] - 29604u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002F57F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F57E8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002F57E8u) [[unlikely]] return; }
L_002F57E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F57F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002F57F0u) [[unlikely]] return; }
L_002F57F0:
    st8((c.r[28].w[0] - 29608u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002F57F4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F5844; } }
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
L_002F5844:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F585C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F585Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002F585Cu) [[unlikely]] return; }
L_002F585C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002F5884; } }
L_002F5864:
    set32(c.r[4], c.r[17].w[0] + 84u);
    c.budget -= 1;
L_002F5868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5870u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 262u, depth + 1u); else { c.pc = 0x00287080u; return; } if (c.pc != 0x002F5870u) [[unlikely]] return; }
L_002F5870:
    set32(c.r[2], c.r[17].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F57F4u | kUnwind; return; } goto L_002F57F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[28].w[0] - 29608u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F57B4u | kUnwind; return; } goto L_002F57B4; } }
L_002F5884:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F58A0:
    set32(c.r[29], c.r[29].w[0] - 640u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F58C8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0041(c, 178u, depth + 1u); else { c.pc = 0x003057A0u; return; } if (c.pc != 0x002F58C8u) [[unlikely]] return; }
L_002F58C8:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29608u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F59A8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F58E4u); set32(c.r[5], c.r[5].w[0] - 6324u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F58E4u) [[unlikely]] return; }
L_002F58E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F58F4u); set32(c.r[5], c.r[5].w[0] - 6292u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F58F4u) [[unlikely]] return; }
L_002F58F4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5900u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 104u, depth + 1u); else { c.pc = 0x0025EED0u; return; } if (c.pc != 0x002F5900u) [[unlikely]] return; }
L_002F5900:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] - 6384u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F591Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 189u, depth + 1u); else { c.pc = 0x0025FD10u; return; } if (c.pc != 0x002F591Cu) [[unlikely]] return; }
L_002F591C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5938u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 165u, depth + 1u); else { c.pc = 0x0025F870u; return; } if (c.pc != 0x002F5938u) [[unlikely]] return; }
L_002F5938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5940u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002F5940u) [[unlikely]] return; }
L_002F5940:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F5960; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5960u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 83u, depth + 1u); else { c.pc = 0x0025E610u; return; } if (c.pc != 0x002F5960u) [[unlikely]] return; }
L_002F5960:
    st32((c.r[28].w[0] - 29600u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F596Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0017(c, 94u, depth + 1u); else { c.pc = 0x0025EDF0u; return; } if (c.pc != 0x002F596Cu) [[unlikely]] return; }
L_002F596C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F597Cu); set32(c.r[5], c.r[5].w[0] - 6284u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F597Cu) [[unlikely]] return; }
L_002F597C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5984u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002F5984u) [[unlikely]] return; }
L_002F5984:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F5990; } }
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 1;
L_002F5990:
    st32((c.r[28].w[0] - 29604u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F59A0u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x00286D80u; return; } if (c.pc != 0x002F59A0u) [[unlikely]] return; }
L_002F59A0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 29608u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002F59A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 14784u);
    set32(c.r[2], c.r[2].w[0] - 14776u);
    st32((c.r[19].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], c.r[19].w[0] + 84u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[19].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14764u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14752u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[19].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14740u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 14728u);
    st32((c.r[19].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F59F8u); st32((c.r[19].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0021(c, 265u, depth + 1u); else { c.pc = 0x002870E0u; return; } if (c.pc != 0x002F59F8u) [[unlikely]] return; }
L_002F59F8:
    st32((c.r[19].w[0] + 228u), 0u);
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    st32((c.r[19].w[0] + 240u), 0u);
    set32(c.r[16], c.r[2].w[0] << 6);
    st32((c.r[19].w[0] + 244u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[19].w[0] + 248u), 0u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    st32((c.r[19].w[0] + 252u), 0u);
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[19].w[0] + 256u), 0u);
    set32(c.r[4], c.r[29].w[0] + 384u);
    st32((c.r[19].w[0] + 260u), 0u);
    st32((c.r[19].w[0] + 264u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5A38u); st8((c.r[19].w[0] + 236u), static_cast<std::uint8_t>(c.r[18].w[0]));  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F5A38u) [[unlikely]] return; }
L_002F5A38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[2], c.r[2].w[0] + 9952u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5A4Cu); set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F5A4Cu) [[unlikely]] return; }
L_002F5A4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5A5Cu); set32(c.r[5], c.r[5].w[0] - 6258u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F5A5Cu) [[unlikely]] return; }
L_002F5A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5A64u); set32(c.r[4], 0u + 1648u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002F5A64u) [[unlikely]] return; }
L_002F5A64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F5A7C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5A7Cu); set32(c.r[6], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0011(c, 316u, depth + 1u); else { c.pc = 0x00246DE0u; return; } if (c.pc != 0x002F5A7Cu) [[unlikely]] return; }
L_002F5A7C:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[18], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5A98u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F5A98u) [[unlikely]] return; }
L_002F5A98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[2], c.r[2].w[0] + 9952u);
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5AB0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F5AB0u) [[unlikely]] return; }
L_002F5AB0:
    set32(c.r[4], c.r[19].w[0] + 84u);
    set32(c.r[5], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5AC0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0021(c, 272u, depth + 1u); else { c.pc = 0x00287200u; return; } if (c.pc != 0x002F5AC0u) [[unlikely]] return; }
L_002F5AC0:
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5ACCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F5ACCu) [[unlikely]] return; }
L_002F5ACC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5AD8u); set32(c.r[4], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F5AD8u) [[unlikely]] return; }
L_002F5AD8:
    set32(c.r[4], c.r[19].w[0] + 188u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5AE4u); set32(c.r[5], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x00286D80u; return; } if (c.pc != 0x002F5AE4u) [[unlikely]] return; }
L_002F5AE4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5AF4u); st8((c.r[19].w[0] + 237u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F5AF4u) [[unlikely]] return; }
L_002F5AF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5B04u); set32(c.r[5], c.r[5].w[0] - 6253u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F5B04u) [[unlikely]] return; }
L_002F5B04:
    set32(c.r[4], c.r[19].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5B10u); set32(c.r[5], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0021(c, 209u, depth + 1u); else { c.pc = 0x00286B00u; return; } if (c.pc != 0x002F5B10u) [[unlikely]] return; }
L_002F5B10:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 640u);  c.pc = t; return; }
L_002F5B30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F5B6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5B54u);  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002F5B54u) [[unlikely]] return; }
L_002F5B54:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F5B6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5B6Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002F5B6Cu) [[unlikely]] return; }
L_002F5B6C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F5B90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F5D00; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 14672u);
    set32(c.r[2], c.r[2].w[0] - 14664u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14652u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14640u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14628u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 14616u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C04u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0011(c, 313u, depth + 1u); else { c.pc = 0x00246D80u; return; } if (c.pc != 0x002F5C04u) [[unlikely]] return; }
L_002F5C04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C0Cu); set32(c.r[4], c.r[17].w[0] + 92u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002F5C0Cu) [[unlikely]] return; }
L_002F5C0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C14u); set32(c.r[4], c.r[17].w[0] + 140u);  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002F5C14u) [[unlikely]] return; }
L_002F5C14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C1Cu); set32(c.r[4], c.r[17].w[0] + 108u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002F5C1Cu) [[unlikely]] return; }
L_002F5C1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C24u); set32(c.r[4], c.r[17].w[0] + 188u);  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002F5C24u) [[unlikely]] return; }
L_002F5C24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[4], c.r[17].w[0] + 140u);
    set32(c.r[5], c.r[5].w[0] + 23344u);
    set32(c.r[6], 0u + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C3Cu); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x002F5C3Cu) [[unlikely]] return; }
L_002F5C3C:
    set32(c.r[4], c.r[17].w[0] + 124u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F5D08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C50u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002F5C50u) [[unlikely]] return; }
L_002F5C50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5D08; } }
L_002F5C58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F5C98; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29600u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F5C78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C74u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002F5C74u) [[unlikely]] return; }
L_002F5C74:
    st32((c.r[28].w[0] - 29600u), 0u);
    c.budget -= 1;
L_002F5C78:
    set32(c.r[18], ld32((c.r[28].w[0] - 29604u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002F5C94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C8Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002F5C8Cu) [[unlikely]] return; }
L_002F5C8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C94u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002F5C94u) [[unlikely]] return; }
L_002F5C94:
    st8((c.r[28].w[0] - 29608u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002F5C98:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F5CE8; } }
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
L_002F5CE8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F5D00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5D00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002F5D00u) [[unlikely]] return; }
L_002F5D00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002F5D34; } }
L_002F5D08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[4], c.r[17].w[0] + 92u);
    set32(c.r[5], c.r[5].w[0] + 30592u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5D20u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x002F5D20u) [[unlikely]] return; }
L_002F5D20:
    set32(c.r[2], c.r[17].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5C98u | kUnwind; return; } goto L_002F5C98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[28].w[0] - 29608u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5C58u | kUnwind; return; } goto L_002F5C58; } }
L_002F5D34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F5D50:
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F5D64; } }
L_002F5D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5D6C; } }
L_002F5D64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 84u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5D5Cu | kUnwind; return; } goto L_002F5D5C; } }
L_002F5D6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F5D80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[4].w[0] + 84u), 0u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 236u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F5DA0; } }
L_002F5D98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_002F5DB4; } }
L_002F5DA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5DACu); set32(c.r[4], c.r[4].w[0] - 16128u);  if (depth < kMaxDepth) unit_0086(c, 141u, depth + 1u); else { c.pc = 0x00419E60u; return; } if (c.pc != 0x002F5DACu) [[unlikely]] return; }
L_002F5DAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5D98u | kUnwind; return; } goto L_002F5D98; } }
L_002F5DB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F5DC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F5E04; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 523u));
    c.r[2].d[0] = c.r[2].d[0] << 60;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F5E04; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5E00u); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_003A(c, 68u, depth + 1u); else { c.pc = 0x002E8B40u; return; } if (c.pc != 0x002F5E00u) [[unlikely]] return; }
L_002F5E00:
    st32((c.r[17].w[0] + 84u), 0u);
    c.budget -= 1;
L_002F5E04:
    st32((c.r[17].w[0] + 84u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 88u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5E18u); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_0041(c, 173u, depth + 1u); else { c.pc = 0x003056E0u; return; } if (c.pc != 0x002F5E18u) [[unlikely]] return; }
L_002F5E18:
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.f[12] = ld32((c.r[29].w[0] + 60u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 88u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5E30u); set32(c.r[7], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 262u, depth + 1u); else { c.pc = 0x00283600u; return; } if (c.pc != 0x002F5E30u) [[unlikely]] return; }
L_002F5E30:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 236u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F5E5C; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 1497u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 1497u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_002F5E54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002F5E78; } }
L_002F5E5C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 236u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5E70u); set32(c.r[4], c.r[4].w[0] - 16128u);  if (depth < kMaxDepth) unit_0086(c, 155u, depth + 1u); else { c.pc = 0x0041A390u; return; } if (c.pc != 0x002F5E70u) [[unlikely]] return; }
L_002F5E70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5E54u | kUnwind; return; } goto L_002F5E54; } }
L_002F5E78:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F5E90:
    set32(c.r[29], c.r[29].w[0] - 928u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5EBCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0041(c, 178u, depth + 1u); else { c.pc = 0x003057A0u; return; } if (c.pc != 0x002F5EBCu) [[unlikely]] return; }
L_002F5EBC:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29608u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F5F9C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5ED8u); set32(c.r[5], c.r[5].w[0] - 6324u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F5ED8u) [[unlikely]] return; }
L_002F5ED8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5EE8u); set32(c.r[5], c.r[5].w[0] - 6292u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F5EE8u) [[unlikely]] return; }
L_002F5EE8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5EF4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0017(c, 104u, depth + 1u); else { c.pc = 0x0025EED0u; return; } if (c.pc != 0x002F5EF4u) [[unlikely]] return; }
L_002F5EF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] - 6384u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5F10u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 189u, depth + 1u); else { c.pc = 0x0025FD10u; return; } if (c.pc != 0x002F5F10u) [[unlikely]] return; }
L_002F5F10:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5F2Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 165u, depth + 1u); else { c.pc = 0x0025F870u; return; } if (c.pc != 0x002F5F2Cu) [[unlikely]] return; }
L_002F5F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5F34u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002F5F34u) [[unlikely]] return; }
L_002F5F34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F5F54; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5F54u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 83u, depth + 1u); else { c.pc = 0x0025E610u; return; } if (c.pc != 0x002F5F54u) [[unlikely]] return; }
L_002F5F54:
    st32((c.r[28].w[0] - 29600u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5F60u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0017(c, 94u, depth + 1u); else { c.pc = 0x0025EDF0u; return; } if (c.pc != 0x002F5F60u) [[unlikely]] return; }
L_002F5F60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5F70u); set32(c.r[5], c.r[5].w[0] - 6284u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F5F70u) [[unlikely]] return; }
L_002F5F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5F78u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002F5F78u) [[unlikely]] return; }
L_002F5F78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F5F84; } }
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 1;
L_002F5F84:
    st32((c.r[28].w[0] - 29604u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5F94u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x00286D80u; return; } if (c.pc != 0x002F5F94u) [[unlikely]] return; }
L_002F5F94:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 29608u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002F5F9C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 14672u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    st32((c.r[20].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14664u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[20].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14652u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[20].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14640u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[20].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14628u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[2], c.r[2].w[0] - 14616u);
    st32((c.r[20].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], c.r[20].w[0] + 92u);
    st32((c.r[20].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 28960u);
    set32(c.r[6], c.r[6].w[0] + 30592u);
    set32(c.r[7], 0u + 16u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6004u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x002F6004u) [[unlikely]] return; }
L_002F6004:
    st32((c.r[20].w[0] + 124u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    st32((c.r[20].w[0] + 128u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    st32((c.r[20].w[0] + 132u), 0u);
    set32(c.r[4], c.r[20].w[0] + 140u);
    set32(c.r[5], c.r[5].w[0] + 25056u);
    set32(c.r[6], c.r[6].w[0] + 23344u);
    set32(c.r[7], 0u + 48u);
    set32(c.r[8], 0u + 2u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6034u); st32((c.r[20].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x002F6034u) [[unlikely]] return; }
L_002F6034:
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    st32((c.r[20].w[0] + 84u), 0u);
    set32(c.r[16], c.r[2].w[0] << 6);
    set32(c.r[4], c.r[29].w[0] + 672u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st8((c.r[20].w[0] + 88u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[2], c.r[2].w[0] + 4512u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6058u); set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F6058u) [[unlikely]] return; }
L_002F6058:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 672u);
    set32(c.r[2], c.r[2].w[0] + 9952u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F606Cu); set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F606Cu) [[unlikely]] return; }
L_002F606C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 672u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F607Cu); set32(c.r[5], c.r[5].w[0] - 6248u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F607Cu) [[unlikely]] return; }
L_002F607C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6084u); set32(c.r[4], 0u + 1648u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002F6084u) [[unlikely]] return; }
L_002F6084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F609C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F609Cu); set32(c.r[6], c.r[29].w[0] + 672u);  if (depth < kMaxDepth) unit_0011(c, 316u, depth + 1u); else { c.pc = 0x00246DE0u; return; } if (c.pc != 0x002F609Cu) [[unlikely]] return; }
L_002F609C:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 672u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[17], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F60B8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F60B8u) [[unlikely]] return; }
L_002F60B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 672u);
    set32(c.r[2], c.r[2].w[0] + 9952u);
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F60D0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F60D0u) [[unlikely]] return; }
L_002F60D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 672u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F60E0u); set32(c.r[5], c.r[5].w[0] - 6242u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F60E0u) [[unlikely]] return; }
L_002F60E0:
    set32(c.r[4], c.r[20].w[0] + 92u);
    set32(c.r[5], c.r[29].w[0] + 672u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F60F0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 317u, depth + 1u); else { c.pc = 0x002877F0u; return; } if (c.pc != 0x002F60F0u) [[unlikely]] return; }
L_002F60F0:
    set32(c.r[4], c.r[29].w[0] + 672u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F60FCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F60FCu) [[unlikely]] return; }
L_002F60FC:
    set32(c.r[4], c.r[29].w[0] + 672u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6108u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F6108u) [[unlikely]] return; }
L_002F6108:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 672u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6118u); set32(c.r[5], c.r[5].w[0] - 6240u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F6118u) [[unlikely]] return; }
L_002F6118:
    set32(c.r[4], c.r[20].w[0] + 108u);
    set32(c.r[5], c.r[29].w[0] + 672u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6128u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 317u, depth + 1u); else { c.pc = 0x002877F0u; return; } if (c.pc != 0x002F6128u) [[unlikely]] return; }
L_002F6128:
    set32(c.r[4], c.r[29].w[0] + 672u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6134u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F6134u) [[unlikely]] return; }
L_002F6134:
    set32(c.r[4], c.r[29].w[0] + 672u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6140u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F6140u) [[unlikely]] return; }
L_002F6140:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 672u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6150u); set32(c.r[5], c.r[5].w[0] - 6242u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F6150u) [[unlikely]] return; }
L_002F6150:
    set32(c.r[4], c.r[20].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F615Cu); set32(c.r[5], c.r[29].w[0] + 672u);  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x00286D80u; return; } if (c.pc != 0x002F615Cu) [[unlikely]] return; }
L_002F615C:
    set32(c.r[4], c.r[29].w[0] + 672u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6168u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F6168u) [[unlikely]] return; }
L_002F6168:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6174u); set32(c.r[4], c.r[29].w[0] + 672u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F6174u) [[unlikely]] return; }
L_002F6174:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 672u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6184u); set32(c.r[5], c.r[5].w[0] - 6240u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F6184u) [[unlikely]] return; }
L_002F6184:
    set32(c.r[4], c.r[20].w[0] + 188u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6190u); set32(c.r[5], c.r[29].w[0] + 672u);  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x00286D80u; return; } if (c.pc != 0x002F6190u) [[unlikely]] return; }
L_002F6190:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F61A0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 131u, depth + 1u); else { c.pc = 0x00305280u; return; } if (c.pc != 0x002F61A0u) [[unlikely]] return; }
L_002F61A0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F61ACu); set32(c.r[4], c.r[20].w[0] + 241u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F61ACu) [[unlikely]] return; }
L_002F61AC:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F61B8u); set32(c.r[5], c.r[20].w[0] + 237u);  if (depth < kMaxDepth) unit_0041(c, 135u, depth + 1u); else { c.pc = 0x003052E0u; return; } if (c.pc != 0x002F61B8u) [[unlikely]] return; }
L_002F61B8:
    st8((c.r[20].w[0] + 236u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 928u);  c.pc = t; return; }
L_002F61E0:
    st32((c.r[4].w[0] + 40u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_002F61F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F6200:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F6210:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F6334; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F6334; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F62FC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 288u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6260u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F6260u) [[unlikely]] return; }
L_002F6260:
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    st32((c.r[28].w[0] - 29836u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
L_002F626C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6278u); set32(c.r[4], c.r[2].w[0] + 3504u);  if (depth < kMaxDepth) unit_0001(c, 162u, depth + 1u); else { c.pc = 0x00207380u; return; } if (c.pc != 0x002F6278u) [[unlikely]] return; }
L_002F6278:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[9], 0u + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    set32(c.r[6], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 348u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F62A0u); c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002F62A0u) [[unlikely]] return; }
L_002F62A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 228u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F6318; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 288u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F62C4u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F62C4u) [[unlikely]] return; }
L_002F62C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 228u)));
    st32((c.r[28].w[0] - 29836u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
L_002F62D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[9], 0u + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 348u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F62F4u); c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002F62F4u) [[unlikely]] return; }
L_002F62F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002F6338; } }
L_002F62FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6310u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F6310u) [[unlikely]] return; }
L_002F6310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 84u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F626Cu | kUnwind; return; } goto L_002F626C; } }
L_002F6318:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F632Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F632Cu) [[unlikely]] return; }
L_002F632C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 84u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F62D0u | kUnwind; return; } goto L_002F62D0; } }
L_002F6334:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002F6338:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F6350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F636C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F636Cu);  if (depth < kMaxDepth) unit_0001(c, 188u, depth + 1u); else { c.pc = 0x00207D20u; return; } if (c.pc != 0x002F636Cu) [[unlikely]] return; }
L_002F636C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F6380:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[28].w[0] - 28268u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 200u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F63F0; } }
L_002F63A8:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_002F63B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F63D8; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 260u), c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 281u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 281u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F63E8; } }
L_002F63D8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F63B0u | kUnwind; return; } goto L_002F63B0; } }
L_002F63E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002F6400; } }
L_002F63F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F63F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 53u, depth + 1u); else { c.pc = 0x004D8730u; return; } if (c.pc != 0x002F63F8u) [[unlikely]] return; }
L_002F63F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 200u), c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F63A8u | kUnwind; return; } goto L_002F63A8; } }
L_002F6400:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F6420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 28268u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 200u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_002F6490; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F644C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002F6450:
    set32(c.r[3], ld32((c.r[4].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_002F6478; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[3].w[0] + 260u), 0u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 281u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 281u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F6488; } }
L_002F6478:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6450u | kUnwind; return; } goto L_002F6450; } }
L_002F6488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_002F64A0; } }
L_002F6490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6498u); st32((c.r[4].w[0] + 200u), 0u);  if (depth < kMaxDepth) unit_00B6(c, 34u, depth + 1u); else { c.pc = 0x004D84F0u; return; } if (c.pc != 0x002F6498u) [[unlikely]] return; }
L_002F6498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F644Cu | kUnwind; return; } goto L_002F644C; } }
L_002F64A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F64B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 9;
L_002F64D4:
    set32(c.r[2], ld32((c.r[3].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F64FC; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 260u), c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 281u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 281u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002F6510; } }
L_002F64FC:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F64D4u | kUnwind; return; } goto L_002F64D4; } }
    c.budget -= 1;
L_002F6510:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 280u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6520u); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0041(c, 173u, depth + 1u); else { c.pc = 0x003056E0u; return; } if (c.pc != 0x002F6520u) [[unlikely]] return; }
L_002F6520:
    set32(c.r[18], ld32((c.r[28].w[0] - 28268u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 200u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F6574; } }
L_002F6530:
    set32(c.r[2], ld32((c.r[28].w[0] - 28268u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 200u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002F6584; } }
L_002F6540:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 280u)));
    c.f[12] = ld32((c.r[29].w[0] + 76u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6558u); set32(c.r[7], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 262u, depth + 1u); else { c.pc = 0x00283600u; return; } if (c.pc != 0x002F6558u) [[unlikely]] return; }
L_002F6558:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 16128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F656Cu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0086(c, 155u, depth + 1u); else { c.pc = 0x0041A390u; return; } if (c.pc != 0x002F656Cu) [[unlikely]] return; }
L_002F656C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_002F6594; } }
L_002F6574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F657Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 53u, depth + 1u); else { c.pc = 0x004D8730u; return; } if (c.pc != 0x002F657Cu) [[unlikely]] return; }
L_002F657C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 200u), c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6530u | kUnwind; return; } goto L_002F6530; } }
L_002F6584:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F730000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6540u | kUnwind; return; } goto L_002F6540; } }
L_002F6594:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F65B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F6774; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 14560u);
    set32(c.r[2], c.r[2].w[0] - 14552u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14540u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14528u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14516u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 14504u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6624u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0011(c, 313u, depth + 1u); else { c.pc = 0x00246D80u; return; } if (c.pc != 0x002F6624u) [[unlikely]] return; }
L_002F6624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F662Cu); set32(c.r[4], c.r[17].w[0] + 180u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002F662Cu) [[unlikely]] return; }
L_002F662C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6634u); set32(c.r[4], c.r[17].w[0] + 196u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002F6634u) [[unlikely]] return; }
L_002F6634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F663Cu); set32(c.r[4], c.r[17].w[0] + 84u);  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002F663Cu) [[unlikely]] return; }
L_002F663C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6644u); set32(c.r[4], c.r[17].w[0] + 132u);  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002F6644u) [[unlikely]] return; }
L_002F6644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F664Cu); set32(c.r[4], c.r[17].w[0] + 244u);  if (depth < kMaxDepth) unit_0021(c, 312u, depth + 1u); else { c.pc = 0x00287740u; return; } if (c.pc != 0x002F664Cu) [[unlikely]] return; }
L_002F664C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6654u);  if (depth < kMaxDepth) unit_00B6(c, 55u, depth + 1u); else { c.pc = 0x004D87C0u; return; } if (c.pc != 0x002F6654u) [[unlikely]] return; }
L_002F6654:
    set32(c.r[2], c.r[17].w[0] + 288u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F677C; } }
L_002F6660:
    set32(c.r[4], c.r[17].w[0] + 244u);
    c.budget -= 1;
L_002F6664:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F6674; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6674u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002F6674u) [[unlikely]] return; }
L_002F6674:
    set32(c.r[4], c.r[17].w[0] + 228u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6680u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002F6680u) [[unlikely]] return; }
L_002F6680:
    set32(c.r[4], c.r[17].w[0] + 212u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F668Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002F668Cu) [[unlikely]] return; }
L_002F668C:
    set32(c.r[4], c.r[17].w[0] + 196u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6698u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002F6698u) [[unlikely]] return; }
L_002F6698:
    set32(c.r[4], c.r[17].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F66A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 314u, depth + 1u); else { c.pc = 0x00287780u; return; } if (c.pc != 0x002F66A4u) [[unlikely]] return; }
L_002F66A4:
    set32(c.r[4], c.r[17].w[0] + 132u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F6798; } }
    set32(c.r[4], c.r[17].w[0] + 84u);
    c.budget -= 1;
L_002F66B4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F67A8; } }
    set32(c.r[2], c.r[17].w[0] + 84u);
    c.budget -= 1;
L_002F66C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F670C; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29608u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F670C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29600u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F66EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F66E8u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002F66E8u) [[unlikely]] return; }
L_002F66E8:
    st32((c.r[28].w[0] - 29600u), 0u);
    c.budget -= 1;
L_002F66EC:
    set32(c.r[18], ld32((c.r[28].w[0] - 29604u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002F6708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6700u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002F6700u) [[unlikely]] return; }
L_002F6700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6708u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002F6708u) [[unlikely]] return; }
L_002F6708:
    st8((c.r[28].w[0] - 29608u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002F670C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F675C; } }
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
L_002F675C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F6774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6774u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002F6774u) [[unlikely]] return; }
L_002F6774:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002F67B8; } }
L_002F677C:
    set32(c.r[4], c.r[17].w[0] + 296u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 288u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6660u | kUnwind; return; } goto L_002F6660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6790u);  if (depth < kMaxDepth) unit_0018(c, 157u, depth + 1u); else { c.pc = 0x00261CA0u; return; } if (c.pc != 0x002F6790u) [[unlikely]] return; }
L_002F6790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 244u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6664u | kUnwind; return; } goto L_002F6664; } }
L_002F6798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F67A0u);  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002F67A0u) [[unlikely]] return; }
L_002F67A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 84u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F66B4u | kUnwind; return; } goto L_002F66B4; } }
L_002F67A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F67B0u);  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002F67B0u) [[unlikely]] return; }
L_002F67B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[17].w[0] + 84u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F66C0u | kUnwind; return; } goto L_002F66C0; } }
L_002F67B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F67D0:
    set32(c.r[29], c.r[29].w[0] - 608u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F67E8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0041(c, 178u, depth + 1u); else { c.pc = 0x003057A0u; return; } if (c.pc != 0x002F67E8u) [[unlikely]] return; }
L_002F67E8:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29608u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F68C8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6804u); set32(c.r[5], c.r[5].w[0] - 6324u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F6804u) [[unlikely]] return; }
L_002F6804:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6814u); set32(c.r[5], c.r[5].w[0] - 6292u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F6814u) [[unlikely]] return; }
L_002F6814:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6820u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0017(c, 104u, depth + 1u); else { c.pc = 0x0025EED0u; return; } if (c.pc != 0x002F6820u) [[unlikely]] return; }
L_002F6820:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 6384u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F683Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 189u, depth + 1u); else { c.pc = 0x0025FD10u; return; } if (c.pc != 0x002F683Cu) [[unlikely]] return; }
L_002F683C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6858u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0017(c, 165u, depth + 1u); else { c.pc = 0x0025F870u; return; } if (c.pc != 0x002F6858u) [[unlikely]] return; }
L_002F6858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6860u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002F6860u) [[unlikely]] return; }
L_002F6860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F6880; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6880u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 83u, depth + 1u); else { c.pc = 0x0025E610u; return; } if (c.pc != 0x002F6880u) [[unlikely]] return; }
L_002F6880:
    st32((c.r[28].w[0] - 29600u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F688Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0017(c, 94u, depth + 1u); else { c.pc = 0x0025EDF0u; return; } if (c.pc != 0x002F688Cu) [[unlikely]] return; }
L_002F688C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F689Cu); set32(c.r[5], c.r[5].w[0] - 6284u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F689Cu) [[unlikely]] return; }
L_002F689C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F68A4u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002F68A4u) [[unlikely]] return; }
L_002F68A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F68B0; } }
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 1;
L_002F68B0:
    st32((c.r[28].w[0] - 29604u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F68C0u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x00286D80u; return; } if (c.pc != 0x002F68C0u) [[unlikely]] return; }
L_002F68C0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 29608u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002F68C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 14560u);
    set32(c.r[16], c.r[17].w[0] + 288u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14552u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14540u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14528u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14516u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 14504u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 8u);
    st32((c.r[17].w[0] + 124u), 0u);
    set32(c.r[2], 0u + 48u);
    st32((c.r[17].w[0] + 172u), 0u);
    st32((c.r[17].w[0] + 180u), 0u);
    st32((c.r[17].w[0] + 184u), 0u);
    st32((c.r[17].w[0] + 188u), 0u);
    st32((c.r[17].w[0] + 192u), 0u);
    st32((c.r[17].w[0] + 196u), 0u);
    st32((c.r[17].w[0] + 200u), 0u);
    st32((c.r[17].w[0] + 204u), 0u);
    st32((c.r[17].w[0] + 208u), 0u);
    st32((c.r[17].w[0] + 212u), 0u);
    st32((c.r[17].w[0] + 216u), 0u);
    st32((c.r[17].w[0] + 220u), 0u);
    st32((c.r[17].w[0] + 224u), 0u);
    st32((c.r[17].w[0] + 228u), 0u);
    st32((c.r[17].w[0] + 232u), 0u);
    st32((c.r[17].w[0] + 236u), 0u);
    st32((c.r[17].w[0] + 240u), 0u);
    st32((c.r[17].w[0] + 244u), 0u);
    st32((c.r[17].w[0] + 248u), 0u);
    st32((c.r[17].w[0] + 252u), 0u);
    st32((c.r[17].w[0] + 256u), 0u);
    st8((c.r[17].w[0] + 299u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 298u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 296u), static_cast<std::uint16_t>(0u));
    c.budget -= 48;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6988u); st32((c.r[17].w[0] + 300u), 0u);  if (depth < kMaxDepth) unit_0018(c, 158u, depth + 1u); else { c.pc = 0x00261CB0u; return; } if (c.pc != 0x002F6988u) [[unlikely]] return; }
L_002F6988:
    st32((c.r[16].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[9].d[0] = ld8((c.r[16].w[0] + 10u));
    c.r[6].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[7], 0u + 52u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.r[9].d[0] = c.r[9].d[0] | 19ull;
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[17].w[0] + 281u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 260u), 0u);
    st32((c.r[17].w[0] + 264u), 0u);
    st32((c.r[17].w[0] + 268u), 0u);
    st32((c.r[17].w[0] + 272u), 0u);
    st32((c.r[17].w[0] + 276u), 0u);
    st8((c.r[17].w[0] + 280u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[17].w[0] + 64u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 68u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 280u));
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F69F4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F69F4u) [[unlikely]] return; }
L_002F69F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6A04u); set32(c.r[5], c.r[5].w[0] - 6238u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F6A04u) [[unlikely]] return; }
L_002F6A04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6A0Cu); set32(c.r[4], 0u + 1648u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002F6A0Cu) [[unlikely]] return; }
L_002F6A0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F6A24; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 280u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6A24u); set32(c.r[6], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0011(c, 316u, depth + 1u); else { c.pc = 0x00246DE0u; return; } if (c.pc != 0x002F6A24u) [[unlikely]] return; }
L_002F6A24:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 280u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6A44u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F6A44u) [[unlikely]] return; }
L_002F6A44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6A54u); set32(c.r[5], c.r[5].w[0] - 6220u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F6A54u) [[unlikely]] return; }
L_002F6A54:
    set32(c.r[4], c.r[17].w[0] + 180u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6A64u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 317u, depth + 1u); else { c.pc = 0x002877F0u; return; } if (c.pc != 0x002F6A64u) [[unlikely]] return; }
L_002F6A64:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 280u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6A80u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F6A80u) [[unlikely]] return; }
L_002F6A80:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6A90u); set32(c.r[5], c.r[5].w[0] - 6206u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F6A90u) [[unlikely]] return; }
L_002F6A90:
    set32(c.r[4], c.r[17].w[0] + 212u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6AA0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0021(c, 317u, depth + 1u); else { c.pc = 0x002877F0u; return; } if (c.pc != 0x002F6AA0u) [[unlikely]] return; }
L_002F6AA0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 280u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6ABCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F6ABCu) [[unlikely]] return; }
L_002F6ABC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6ACCu); set32(c.r[5], c.r[5].w[0] - 6194u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F6ACCu) [[unlikely]] return; }
L_002F6ACC:
    set32(c.r[4], c.r[17].w[0] + 196u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6ADCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 317u, depth + 1u); else { c.pc = 0x002877F0u; return; } if (c.pc != 0x002F6ADCu) [[unlikely]] return; }
L_002F6ADC:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 280u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6AF8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F6AF8u) [[unlikely]] return; }
L_002F6AF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B08u); set32(c.r[5], c.r[5].w[0] - 6178u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F6B08u) [[unlikely]] return; }
L_002F6B08:
    set32(c.r[4], c.r[17].w[0] + 228u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B18u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0021(c, 317u, depth + 1u); else { c.pc = 0x002877F0u; return; } if (c.pc != 0x002F6B18u) [[unlikely]] return; }
L_002F6B18:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 280u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B34u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F6B34u) [[unlikely]] return; }
L_002F6B34:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B44u); set32(c.r[5], c.r[5].w[0] - 6164u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F6B44u) [[unlikely]] return; }
L_002F6B44:
    set32(c.r[4], c.r[17].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B50u); set32(c.r[5], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x00286D80u; return; } if (c.pc != 0x002F6B50u) [[unlikely]] return; }
L_002F6B50:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 280u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B6Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F6B6Cu) [[unlikely]] return; }
L_002F6B6C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B7Cu); set32(c.r[5], c.r[5].w[0] - 6159u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F6B7Cu) [[unlikely]] return; }
L_002F6B7C:
    set32(c.r[4], c.r[17].w[0] + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B88u); set32(c.r[5], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x00286D80u; return; } if (c.pc != 0x002F6B88u) [[unlikely]] return; }
L_002F6B88:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 280u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6BA4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F6BA4u) [[unlikely]] return; }
L_002F6BA4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6BB4u); set32(c.r[5], c.r[5].w[0] - 6152u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F6BB4u) [[unlikely]] return; }
L_002F6BB4:
    set32(c.r[4], c.r[17].w[0] + 244u);
    set32(c.r[5], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6BC4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 317u, depth + 1u); else { c.pc = 0x002877F0u; return; } if (c.pc != 0x002F6BC4u) [[unlikely]] return; }
L_002F6BC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 45u);
    set32(c.r[4], c.r[4].w[0] + 9992u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6BD8u); st8((c.r[17].w[0] + 282u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x002F6BD8u) [[unlikely]] return; }
L_002F6BD8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6BE4u); set32(c.r[4], c.r[17].w[0] + 288u);  if (depth < kMaxDepth) unit_0041(c, 85u, depth + 1u); else { c.pc = 0x00304E30u; return; } if (c.pc != 0x002F6BE4u) [[unlikely]] return; }
L_002F6BE4:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 298u));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    st8((c.r[17].w[0] + 298u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 308u)));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 298u));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6C08u); st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00B6(c, 57u, depth + 1u); else { c.pc = 0x004D87E0u; return; } if (c.pc != 0x002F6C08u) [[unlikely]] return; }
L_002F6C08:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 608u);  c.pc = t; return; }
L_002F6C20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F6C30:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 281u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F6CC8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_002F6C5C:
    set32(c.r[16], ld32((c.r[17].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F6CB8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F6CB8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6C8Cu); set32(c.r[6], c.r[29].w[0] + 159u);  if (depth < kMaxDepth) unit_0002(c, 32u, depth + 1u); else { c.pc = 0x00209170u; return; } if (c.pc != 0x002F6C8Cu) [[unlikely]] return; }
L_002F6C8C:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F6CB8; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 348u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 244u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    set32(c.r[8], ld32((c.r[19].w[0] + 252u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 256u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6CB8u); set32(c.r[9], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0002(c, 22u, depth + 1u); else { c.pc = 0x00208B80u; return; } if (c.pc != 0x002F6CB8u) [[unlikely]] return; }
L_002F6CB8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6C5Cu | kUnwind; return; } goto L_002F6C5C; } }
L_002F6CC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002F6CF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 281u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F702C; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_002F6D20:
    set32(c.r[16], ld32((c.r[17].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F6E08; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F6E08; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 77u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F6E20; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F6E74; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 288u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6D70u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F6D70u) [[unlikely]] return; }
L_002F6D70:
    set32(c.r[2], ld32((c.r[19].w[0] + 124u)));
    st32((c.r[28].w[0] - 29836u), c.r[2].w[0]);
    c.budget -= 2;
L_002F6D78:
    set32(c.r[4], c.r[16].w[0] + 3504u);
    c.budget -= 1;
L_002F6D7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6D84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 162u, depth + 1u); else { c.pc = 0x00207380u; return; } if (c.pc != 0x002F6D84u) [[unlikely]] return; }
L_002F6D84:
    set32(c.r[5], ld32((c.r[19].w[0] + 180u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[19].w[0] + 188u)));
    set32(c.r[9], 0u + 1u);
    set32(c.r[6], ld32((c.r[19].w[0] + 192u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    set32(c.r[7], ld32((c.r[16].w[0] + 348u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6DA8u); c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002F6DA8u) [[unlikely]] return; }
L_002F6DA8:
    set32(c.r[5], ld32((c.r[19].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[19].w[0] + 220u)));
    set32(c.r[9], 0u + 1u);
    set32(c.r[6], ld32((c.r[19].w[0] + 224u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    set32(c.r[7], ld32((c.r[16].w[0] + 348u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6DCCu); c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002F6DCCu) [[unlikely]] return; }
L_002F6DCC:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 77u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F6EA4; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F6E90; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 288u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6DFCu); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F6DFCu) [[unlikely]] return; }
L_002F6DFC:
    set32(c.r[2], ld32((c.r[19].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29836u), c.r[2].w[0]);  if (t) { goto L_002F6EA4; } }
L_002F6E08:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002F6E0C:
    c.r[3].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6D20u | kUnwind; return; } goto L_002F6D20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_002F7030; } }
L_002F6E20:
    set32(c.r[20], ld32((c.r[28].w[0] - 29604u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F6E58; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6E4Cu); set32(c.r[5], c.r[2].w[0] + 288u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F6E4Cu) [[unlikely]] return; }
L_002F6E4C:
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29836u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6D78u | kUnwind; return; } goto L_002F6D78; } }
L_002F6E58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6E6Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F6E6Cu) [[unlikely]] return; }
L_002F6E6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 3504u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6D7Cu | kUnwind; return; } goto L_002F6D7C; } }
L_002F6E74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6E88u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F6E88u) [[unlikely]] return; }
L_002F6E88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6D78u | kUnwind; return; } goto L_002F6D78; } }
L_002F6E90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6EA4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F6EA4u) [[unlikely]] return; }
L_002F6EA4:
    set32(c.r[5], ld32((c.r[19].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[19].w[0] + 204u)));
    set32(c.r[9], 0u + 1u);
    set32(c.r[6], ld32((c.r[19].w[0] + 208u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    set32(c.r[7], ld32((c.r[16].w[0] + 348u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6EC8u); c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002F6EC8u) [[unlikely]] return; }
L_002F6EC8:
    set32(c.r[5], ld32((c.r[19].w[0] + 228u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[8], ld32((c.r[19].w[0] + 236u)));
    set32(c.r[9], 0u + 1u);
    set32(c.r[6], ld32((c.r[19].w[0] + 240u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    set32(c.r[7], ld32((c.r[16].w[0] + 348u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6EECu); c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 114u, depth + 1u); else { c.pc = 0x00206430u; return; } if (c.pc != 0x002F6EECu) [[unlikely]] return; }
L_002F6EEC:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 77u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6E08u | kUnwind; return; } goto L_002F6E08; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 29600u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[20], 0u + 255u);
    set32(c.r[2], 0u + 128u);
    if (c.r[18].d[0] != 0) c.r[20].d[0] = c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6F18u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F6F18u) [[unlikely]] return; }
L_002F6F18:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_002F6F2C; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002F6F48; } }
L_002F6F2C:
    set32(c.r[3], c.r[20].w[0] >> 1);
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::ee::add(c.fcr31, c.f[12], c.f[12]);
    c.budget -= 7;
L_002F6F48:
    set32(c.r[5], ld32((c.r[19].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[19].w[0] + 224u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 348u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6F60u); set32(c.r[4], c.r[4].w[0] - 224u);  if (depth < kMaxDepth) unit_0016(c, 136u, depth + 1u); else { c.pc = 0x0025BE80u; return; } if (c.pc != 0x002F6F60u) [[unlikely]] return; }
L_002F6F60:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_002F6F74; } }
    c.f[0] = c.r[20].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002F6F90; } }
L_002F6F74:
    set32(c.r[3], c.r[20].w[0] >> 1);
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::ee::add(c.fcr31, c.f[12], c.f[12]);
    c.budget -= 7;
L_002F6F90:
    set32(c.r[5], ld32((c.r[19].w[0] + 228u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[19].w[0] + 240u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 348u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6FA8u); set32(c.r[4], c.r[4].w[0] - 224u);  if (depth < kMaxDepth) unit_0016(c, 136u, depth + 1u); else { c.pc = 0x0025BE80u; return; } if (c.pc != 0x002F6FA8u) [[unlikely]] return; }
L_002F6FA8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6E08u | kUnwind; return; } goto L_002F6E08; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 28268u)));
    set32(c.r[20], ld32((c.r[3].w[0] + 212u)));
    c.budget -= 4;
    { const bool t = c.r[20].sd[0] <= 0; st32((c.r[3].w[0] + 212u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6E08u | kUnwind; return; } goto L_002F6E08; } }
L_002F6FC0:
    c.r[1].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_002F6FD0; } }
    set32(c.r[2], 0u + 255u);
    c.budget -= 1;
L_002F6FD0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002F6FE4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[12] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_002F7000; } }
L_002F6FE4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::cvt_s_w(c.f[0]);
    c.f[12] = fp::ee::add(c.fcr31, c.f[12], c.f[12]);
    c.budget -= 7;
L_002F7000:
    set32(c.r[5], ld32((c.r[19].w[0] + 228u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[19].w[0] + 240u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 348u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7018u); set32(c.r[4], c.r[4].w[0] - 224u);  if (depth < kMaxDepth) unit_0016(c, 136u, depth + 1u); else { c.pc = 0x0025BE80u; return; } if (c.pc != 0x002F7018u) [[unlikely]] return; }
L_002F7018:
    set32(c.r[20], c.r[20].w[0] - 255u);
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6FC0u | kUnwind; return; } goto L_002F6FC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6E0Cu | kUnwind; return; } goto L_002F6E0C; } }
L_002F702C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002F7030:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002F7050:
    set32(c.r[5], ld32((c.r[4].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002F7104; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 282u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F7104; } }
    set32(c.r[8], ld32((c.r[5].w[0] + 348u)));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(768ll);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 312u)));
    set32(c.r[3], c.r[3].w[0] + 3376u);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[4].w[0] + 296u);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[7].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[7].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[7].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    st128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    set32(c.r[7], ld32((c.r[4].w[0] + 288u)));
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
L_002F7104:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 281u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F7158; } }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002F7134:
    set32(c.r[4], ld32((c.r[16].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F7148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7148u);  if (depth < kMaxDepth) unit_001F(c, 369u, depth + 1u); else { c.pc = 0x0027F9B0u; return; } if (c.pc != 0x002F7148u) [[unlikely]] return; }
L_002F7148:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7134u | kUnwind; return; } goto L_002F7134; } }
L_002F7158:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F7170:
    set32(c.r[3], ld32((c.r[4].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F7184; } }
L_002F717C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F718C; } }
L_002F7184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 204u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F717Cu | kUnwind; return; } goto L_002F717C; } }
L_002F718C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F71A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 204u), 0u);  c.pc = t; return; }
L_002F71B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 204u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 208u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F71D0u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 173u, depth + 1u); else { c.pc = 0x003056E0u; return; } if (c.pc != 0x002F71D0u) [[unlikely]] return; }
L_002F71D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 204u)));
    c.f[12] = ld32((c.r[29].w[0] + 44u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 208u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F71E8u); set32(c.r[7], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0020(c, 262u, depth + 1u); else { c.pc = 0x00283600u; return; } if (c.pc != 0x002F71E8u) [[unlikely]] return; }
L_002F71E8:
    set32(c.r[6], ld32((c.r[16].w[0] + 204u)));
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
L_002F7220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F7348; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 14448u);
    set32(c.r[2], c.r[2].w[0] - 14440u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14428u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14416u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14404u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 14392u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7290u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0011(c, 313u, depth + 1u); else { c.pc = 0x00246D80u; return; } if (c.pc != 0x002F7290u) [[unlikely]] return; }
L_002F7290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7298u); set32(c.r[4], c.r[17].w[0] + 180u);  if (depth < kMaxDepth) unit_0021(c, 242u, depth + 1u); else { c.pc = 0x00286E40u; return; } if (c.pc != 0x002F7298u) [[unlikely]] return; }
L_002F7298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F72A0u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0021(c, 242u, depth + 1u); else { c.pc = 0x00286E40u; return; } if (c.pc != 0x002F72A0u) [[unlikely]] return; }
L_002F72A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F72A8u); set32(c.r[4], c.r[17].w[0] + 84u);  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002F72A8u) [[unlikely]] return; }
L_002F72A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F72B0u); set32(c.r[4], c.r[17].w[0] + 132u);  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002F72B0u) [[unlikely]] return; }
L_002F72B0:
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7350; } }
    set32(c.r[4], c.r[17].w[0] + 180u);
    c.budget -= 1;
L_002F72C0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7360; } }
    set32(c.r[4], c.r[17].w[0] + 132u);
    c.budget -= 1;
L_002F72CC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7370; } }
    set32(c.r[4], c.r[17].w[0] + 84u);
    c.budget -= 1;
L_002F72D8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F7380; } }
L_002F72E0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F7330; } }
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
L_002F7330:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F7348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7348u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002F7348u) [[unlikely]] return; }
L_002F7348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002F7390; } }
L_002F7350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7358u);  if (depth < kMaxDepth) unit_0021(c, 242u, depth + 1u); else { c.pc = 0x00286E40u; return; } if (c.pc != 0x002F7358u) [[unlikely]] return; }
L_002F7358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 180u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F72C0u | kUnwind; return; } goto L_002F72C0; } }
L_002F7360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7368u);  if (depth < kMaxDepth) unit_0021(c, 242u, depth + 1u); else { c.pc = 0x00286E40u; return; } if (c.pc != 0x002F7368u) [[unlikely]] return; }
L_002F7368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 132u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F72CCu | kUnwind; return; } goto L_002F72CC; } }
L_002F7370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7378u);  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002F7378u) [[unlikely]] return; }
L_002F7378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 84u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F72D8u | kUnwind; return; } goto L_002F72D8; } }
L_002F7380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7388u);  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002F7388u) [[unlikely]] return; }
L_002F7388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F72E0u | kUnwind; return; } goto L_002F72E0; } }
L_002F7390:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F73B0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F73C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 178u, depth + 1u); else { c.pc = 0x003057A0u; return; } if (c.pc != 0x002F73C4u) [[unlikely]] return; }
L_002F73C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 14448u);
    set32(c.r[2], c.r[2].w[0] - 14440u);
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14428u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14416u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14404u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14392u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], 0u + 57u);
    st32((c.r[16].w[0] + 124u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[16].w[0] + 172u), 0u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    st32((c.r[16].w[0] + 180u), 0u);
    st32((c.r[16].w[0] + 184u), 0u);
    st32((c.r[16].w[0] + 188u), 0u);
    st32((c.r[16].w[0] + 192u), 0u);
    st32((c.r[16].w[0] + 196u), 0u);
    st32((c.r[16].w[0] + 200u), 0u);
    st32((c.r[16].w[0] + 204u), 0u);
    st8((c.r[16].w[0] + 208u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 208u));
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7454u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F7454u) [[unlikely]] return; }
L_002F7454:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 208u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 9952u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7470u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F7470u) [[unlikely]] return; }
L_002F7470:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7480u); set32(c.r[5], c.r[5].w[0] - 6258u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F7480u) [[unlikely]] return; }
L_002F7480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7488u); set32(c.r[4], 0u + 1648u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002F7488u) [[unlikely]] return; }
L_002F7488:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F74A0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 208u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F74A0u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0011(c, 316u, depth + 1u); else { c.pc = 0x00246DE0u; return; } if (c.pc != 0x002F74A0u) [[unlikely]] return; }
L_002F74A0:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 208u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F74C0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F74C0u) [[unlikely]] return; }
L_002F74C0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 208u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 9952u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F74DCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F74DCu) [[unlikely]] return; }
L_002F74DC:
    set32(c.r[4], c.r[16].w[0] + 180u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F74E8u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0021(c, 244u, depth + 1u); else { c.pc = 0x00286E80u; return; } if (c.pc != 0x002F74E8u) [[unlikely]] return; }
L_002F74E8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 208u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7504u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F7504u) [[unlikely]] return; }
L_002F7504:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7514u); set32(c.r[5], c.r[5].w[0] - 6145u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F7514u) [[unlikely]] return; }
L_002F7514:
    set32(c.r[4], c.r[16].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7520u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0021(c, 244u, depth + 1u); else { c.pc = 0x00286E80u; return; } if (c.pc != 0x002F7520u) [[unlikely]] return; }
L_002F7520:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 208u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F753Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F753Cu) [[unlikely]] return; }
L_002F753C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 208u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 9952u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7558u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F7558u) [[unlikely]] return; }
L_002F7558:
    set32(c.r[4], c.r[16].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7564u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x00286D80u; return; } if (c.pc != 0x002F7564u) [[unlikely]] return; }
L_002F7564:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 208u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4512u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] << 6);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7580u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F7580u) [[unlikely]] return; }
L_002F7580:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7590u); set32(c.r[5], c.r[5].w[0] - 6145u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F7590u) [[unlikely]] return; }
L_002F7590:
    set32(c.r[4], c.r[16].w[0] + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F759Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x00286D80u; return; } if (c.pc != 0x002F759Cu) [[unlikely]] return; }
L_002F759C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_002F75B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F75C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F75D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 204u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F76EC; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F76EC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F76B4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 288u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7620u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F7620u) [[unlikely]] return; }
L_002F7620:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    st32((c.r[28].w[0] - 29836u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 3;
L_002F762C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7638u); set32(c.r[4], c.r[2].w[0] + 3504u);  if (depth < kMaxDepth) unit_0001(c, 162u, depth + 1u); else { c.pc = 0x00207380u; return; } if (c.pc != 0x002F7638u) [[unlikely]] return; }
L_002F7638:
    set32(c.r[2], ld32((c.r[16].w[0] + 204u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 180u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    set32(c.r[6], ld32((c.r[16].w[0] + 188u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 348u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F765Cu); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 115u, depth + 1u); else { c.pc = 0x0025B180u; return; } if (c.pc != 0x002F765Cu) [[unlikely]] return; }
L_002F765C:
    set32(c.r[3], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F76D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 288u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7680u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F7680u) [[unlikely]] return; }
L_002F7680:
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    st32((c.r[28].w[0] - 29836u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 3;
L_002F768C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[4], c.r[4].w[0] - 224u);
    set32(c.r[6], ld32((c.r[16].w[0] + 200u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 196u)));
    set32(c.r[7], ld32((c.r[2].w[0] + 348u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F76ACu); set32(c.r[9], 0u + 1u);  if (depth < kMaxDepth) unit_0016(c, 115u, depth + 1u); else { c.pc = 0x0025B180u; return; } if (c.pc != 0x002F76ACu) [[unlikely]] return; }
L_002F76AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002F76F0; } }
L_002F76B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F76C8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F76C8u) [[unlikely]] return; }
L_002F76C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 204u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F762Cu | kUnwind; return; } goto L_002F762C; } }
L_002F76D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F76E4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F76E4u) [[unlikely]] return; }
L_002F76E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 204u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F768Cu | kUnwind; return; } goto L_002F768C; } }
L_002F76EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002F76F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F7700:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 204u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F771C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F771Cu);  if (depth < kMaxDepth) unit_001F(c, 369u, depth + 1u); else { c.pc = 0x0027F9B0u; return; } if (c.pc != 0x002F771Cu) [[unlikely]] return; }
L_002F771C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002F7730:
    set32(c.r[3], ld32((c.r[4].w[0] + 240u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F7750; } }
    st32((c.r[4].w[0] + 244u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 240u), c.r[5].w[0]);
    st32((c.r[5].w[0] + 1552u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 1548u), 0u);  if (t) { goto L_002F7768; } }
L_002F7750:
    set32(c.r[3], ld32((c.r[4].w[0] + 244u)));
    st32((c.r[3].w[0] + 1552u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 244u)));
    st32((c.r[5].w[0] + 1548u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 1552u), 0u);
    st32((c.r[4].w[0] + 244u), c.r[5].w[0]);
    c.budget -= 6;
L_002F7768:
    set32(c.r[3], ld32((c.r[4].w[0] + 248u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 248u), c.r[3].w[0]);  c.pc = t; return; }
L_002F7780:
    set32(c.r[6], ld32((c.r[5].w[0] + 1548u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002F7794; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 1552u)));
    st32((c.r[6].w[0] + 1552u), c.r[3].w[0]);
    c.budget -= 2;
L_002F7794:
    set32(c.r[6], ld32((c.r[5].w[0] + 1552u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002F77A8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 1548u)));
    st32((c.r[6].w[0] + 1548u), c.r[3].w[0]);
    c.budget -= 2;
L_002F77A8:
    set32(c.r[3], ld32((c.r[4].w[0] + 240u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002F77D8; } }
L_002F77B4:
    set32(c.r[3], ld32((c.r[4].w[0] + 244u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002F77E4; } }
L_002F77C0:
    st32((c.r[5].w[0] + 1552u), 0u);
    st32((c.r[5].w[0] + 1548u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 248u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 248u), c.r[3].w[0]);  if (t) { goto L_002F77F0; } }
L_002F77D8:
    set32(c.r[3], ld32((c.r[5].w[0] + 1552u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 240u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F77B4u | kUnwind; return; } goto L_002F77B4; } }
L_002F77E4:
    set32(c.r[3], ld32((c.r[5].w[0] + 1548u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 244u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F77C0u | kUnwind; return; } goto L_002F77C0; } }
L_002F77F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7800:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 240u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F7834; } }
    st32((c.r[17].w[0] + 244u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 240u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 1552u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1548u), 0u);  if (t) { goto L_002F784C; } }
L_002F7834:
    set32(c.r[2], ld32((c.r[17].w[0] + 244u)));
    st32((c.r[2].w[0] + 1552u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 244u)));
    st32((c.r[16].w[0] + 1548u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1552u), 0u);
    st32((c.r[17].w[0] + 244u), c.r[16].w[0]);
    c.budget -= 6;
L_002F784C:
    set32(c.r[2], ld32((c.r[17].w[0] + 248u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 26u);
    set32(c.r[6], c.r[29].w[0] + 60u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7868u); st32((c.r[17].w[0] + 248u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0041(c, 173u, depth + 1u); else { c.pc = 0x003056E0u; return; } if (c.pc != 0x002F7868u) [[unlikely]] return; }
L_002F7868:
    c.f[12] = ld32((c.r[29].w[0] + 60u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[17].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7880u); set32(c.r[6], 0u + 26u);  if (depth < kMaxDepth) unit_0020(c, 262u, depth + 1u); else { c.pc = 0x00283600u; return; } if (c.pc != 0x002F7880u) [[unlikely]] return; }
L_002F7880:
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
L_002F78B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002F79A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 14336u);
    set32(c.r[2], c.r[2].w[0] - 14328u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 132u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14316u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14304u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14292u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 14280u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F791Cu); st32((c.r[17].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0021(c, 268u, depth + 1u); else { c.pc = 0x00287140u; return; } if (c.pc != 0x002F791Cu) [[unlikely]] return; }
L_002F791C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7928u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0011(c, 313u, depth + 1u); else { c.pc = 0x00246D80u; return; } if (c.pc != 0x002F7928u) [[unlikely]] return; }
L_002F7928:
    set32(c.r[4], c.r[17].w[0] + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7934u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0021(c, 262u, depth + 1u); else { c.pc = 0x00287080u; return; } if (c.pc != 0x002F7934u) [[unlikely]] return; }
L_002F7934:
    set32(c.r[4], c.r[17].w[0] + 84u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F79B0; } }
L_002F7940:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F7990; } }
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
L_002F7990:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F79A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F79A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002F79A8u) [[unlikely]] return; }
L_002F79A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002F79C0; } }
L_002F79B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F79B8u);  if (depth < kMaxDepth) unit_0021(c, 228u, depth + 1u); else { c.pc = 0x00286D20u; return; } if (c.pc != 0x002F79B8u) [[unlikely]] return; }
L_002F79B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7940u | kUnwind; return; } goto L_002F7940; } }
L_002F79C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F79E0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F79FCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 178u, depth + 1u); else { c.pc = 0x003057A0u; return; } if (c.pc != 0x002F79FCu) [[unlikely]] return; }
L_002F79FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 14336u);
    set32(c.r[2], c.r[2].w[0] - 14328u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 132u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14316u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14304u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14292u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 14280u);
    st32((c.r[17].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7A50u); st32((c.r[17].w[0] + 124u), 0u);  if (depth < kMaxDepth) unit_0021(c, 265u, depth + 1u); else { c.pc = 0x002870E0u; return; } if (c.pc != 0x002F7A50u) [[unlikely]] return; }
L_002F7A50:
    st32((c.r[17].w[0] + 236u), c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[17].w[0] + 244u), 0u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[17].w[0] + 240u), 0u);
    set32(c.r[5], c.r[5].w[0] + 6176u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7A70u); st32((c.r[17].w[0] + 248u), 0u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F7A70u) [[unlikely]] return; }
L_002F7A70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7A80u); set32(c.r[5], c.r[5].w[0] + 11616u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F7A80u) [[unlikely]] return; }
L_002F7A80:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7A90u); set32(c.r[5], c.r[5].w[0] - 6139u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F7A90u) [[unlikely]] return; }
L_002F7A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7A98u); set32(c.r[4], 0u + 1648u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x002F7A98u) [[unlikely]] return; }
L_002F7A98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F7AB0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 26u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7AB0u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0011(c, 316u, depth + 1u); else { c.pc = 0x00246DE0u; return; } if (c.pc != 0x002F7AB0u) [[unlikely]] return; }
L_002F7AB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7AC4u); set32(c.r[5], c.r[5].w[0] + 6176u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F7AC4u) [[unlikely]] return; }
L_002F7AC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7AD4u); set32(c.r[5], c.r[5].w[0] + 11616u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F7AD4u) [[unlikely]] return; }
L_002F7AD4:
    set32(c.r[4], c.r[17].w[0] + 132u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7AE4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 272u, depth + 1u); else { c.pc = 0x00287200u; return; } if (c.pc != 0x002F7AE4u) [[unlikely]] return; }
L_002F7AE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7AF4u); set32(c.r[5], c.r[5].w[0] + 6176u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002F7AF4u) [[unlikely]] return; }
L_002F7AF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7B04u); set32(c.r[5], c.r[5].w[0] + 11616u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002F7B04u) [[unlikely]] return; }
L_002F7B04:
    set32(c.r[4], c.r[17].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7B10u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0021(c, 233u, depth + 1u); else { c.pc = 0x00286D80u; return; } if (c.pc != 0x002F7B10u) [[unlikely]] return; }
L_002F7B10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    st32((c.r[17].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_002F7B40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7B50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7B60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 248u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002F7C28; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F7BE0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 288u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7BA0u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F7BA0u) [[unlikely]] return; }
L_002F7BA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    st32((c.r[28].w[0] - 29836u), c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 3;
L_002F7BAC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F7BD8; } }
L_002F7BB4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 58;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F7BFC; } }
L_002F7BC8:
    set32(c.r[17], ld32((c.r[17].w[0] + 1552u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7BB4u | kUnwind; return; } goto L_002F7BB4; } }
    c.budget -= 1;
L_002F7BD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F7C28; } }
L_002F7BE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[3].w[0] + 368u);
    set32(c.r[4], c.r[4].w[0] + 9056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7BF4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0018(c, 89u, depth + 1u); else { c.pc = 0x00260DB0u; return; } if (c.pc != 0x002F7BF4u) [[unlikely]] return; }
L_002F7BF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 240u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7BACu | kUnwind; return; } goto L_002F7BAC; } }
L_002F7BFC:
    set32(c.r[4], c.r[17].w[0] + 3504u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 162u, depth + 1u); else { c.pc = 0x00207380u; return; } if (c.pc != 0x002F7C08u) [[unlikely]] return; }
L_002F7C08:
    set32(c.r[5], ld32((c.r[17].w[0] + 348u)));
    set32(c.r[4], c.r[16].w[0] + 132u);
    set32(c.r[6], c.r[17].w[0] + 432u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C20u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 134u, depth + 1u); else { c.pc = 0x00206D00u; return; } if (c.pc != 0x002F7C20u) [[unlikely]] return; }
L_002F7C20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7BC8u | kUnwind; return; } goto L_002F7BC8; } }
L_002F7C28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F7C40:
    set32(c.r[29], c.r[29].w[0] - 560u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] + 4192u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    set32(c.r[6], c.r[29].w[0] + 400u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    set32(c.r[5], 0u + 39u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 18;
L_002F7C88:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7C88u | kUnwind; return; } goto L_002F7C88; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[6], c.r[29].w[0] + 240u);
    set32(c.r[7], c.r[7].w[0] + 4352u);
    set32(c.r[5], 0u + 39u);
    c.budget -= 4;
L_002F7CB4:
    set32(c.r[3], ld32((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7CB4u | kUnwind; return; } goto L_002F7CB4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 248u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_003E(c, 3u, depth); } }
    set32(c.r[21], ld32((c.r[4].w[0] + 240u)));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_003E(c, 3u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40600000u);
    c.f[21] = c.r[2].w[0];
    c.budget -= 2;
L_002F7CF0:
    set32(c.r[2], c.r[20].w[0] << 1);
    set32(c.r[19], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st128((c.r[19].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[22], c.r[29].w[0] + 224u);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[17], c.r[29].w[0] + 208u);
    set32(c.r[16], c.r[2].w[0] + 240u);
    set32(c.r[23], c.r[29].w[0] + 180u);
    set32(c.r[2], c.r[29].w[0] + 228u);
    set32(c.r[30], c.r[29].w[0] + 184u);
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[18], c.r[29].w[0] + 192u);
    vu::sub4<1>(c.vu0, 15u, 1u, 1u, 1u);
    c.f[2] = ld32((c.r[22].w[0]));
    c.f[20] = ld32((c.r[16].w[0]));
    vu::addbc4<1>(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    set32(c.r[2], c.r[29].w[0] + 232u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[21]);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[1]);
    vu::sub4<0>(c.vu0, 15u, 2u, 2u, 2u);
    set32(c.r[2], c.r[29].w[0] + 228u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[21]);
    vu::addbc4<1>(c.vu0, 4u, 2u, 0u, c.vu0.vf[0].w[3]);
    st32((c.r[22].w[0]), c.f[2]);
    st32((c.r[2].w[0]), c.f[1]);
    st128((c.r[19].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.f[2] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[21]);
    set32(c.r[2], c.r[29].w[0] + 232u);
    vu::mr32_4(c.vu0, 15u, 3u, 0u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[21]);
    set32(c.r[2], c.r[29].w[0] + 196u);
    st128((c.r[19].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    c.f[2] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[5] = ld32((c.r[23].w[0]));
    c.f[4] = ld32((c.r[30].w[0]));
    c.f[3] = ld32((c.r[18].w[0]));
    set32(c.r[2], c.r[29].w[0] + 200u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[21]);
    set32(c.r[2], c.r[29].w[0] + 196u);
    st32((c.r[2].w[0]), c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[21]);
    set32(c.r[2], c.r[29].w[0] + 200u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[21]);
    st32((c.r[2].w[0]), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 212u);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[21]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[21]);
    set32(c.r[2], c.r[29].w[0] + 216u);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[21]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[21]);
    set32(c.r[2], c.r[29].w[0] + 212u);
    st32((c.r[2].w[0]), c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[21]);
    set32(c.r[2], c.r[29].w[0] + 216u);
    c.f[12] = c.f[20];
    st32((c.r[23].w[0]), c.f[5]);
    st32((c.r[30].w[0]), c.f[4]);
    st32((c.r[18].w[0]), c.f[3]);
    c.budget -= 71;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7E0Cu); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002F7E0Cu) [[unlikely]] return; }
L_002F7E0C:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7E18u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002F7E18u) [[unlikely]] return; }
L_002F7E18:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_002F7E20:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[20]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7E20u | kUnwind; return; } goto L_002F7E20; } }
    c.f[20] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7E60u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002F7E60u) [[unlikely]] return; }
L_002F7E60:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7E6Cu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002F7E6Cu) [[unlikely]] return; }
L_002F7E6C:
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.f[7] = ld32((c.r[29].w[0] + 176u));
    c.f[4] = ld32((c.r[2].w[0]));
    c.f[6] = ld32((c.r[23].w[0]));
    c.f[22] = ld32((c.r[16].w[0] + 8u));
    c.f[5] = ld32((c.r[18].w[0]));
    c.f[3] = ld32((c.r[17].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 212u);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[6]);
    c.f[2] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 176u), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[6]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[20]);
    st32((c.r[23].w[0]), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[0]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[4]);
    set32(c.r[2], c.r[29].w[0] + 196u);
    st32((c.r[18].w[0]), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[20]);
    st32((c.r[2].w[0]), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 212u);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[2]);
    st32((c.r[17].w[0]), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    st32((c.r[2].w[0]), c.f[1]);
    c.f[3] = ld32((c.r[22].w[0]));
    set32(c.r[2], c.r[29].w[0] + 228u);
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[12] = c.f[22];
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    st32((c.r[22].w[0]), c.f[1]);
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F0Cu); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x002F7F0Cu) [[unlikely]] return; }
L_002F7F0C:
    c.f[12] = c.f[22];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F18u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x002F7F18u) [[unlikely]] return; }
L_002F7F18:
    set32(c.r[2], c.r[20].w[0] << 1);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[3], c.r[2].w[0] + 400u);
    set32(c.r[2], c.r[29].w[0] + 200u);
    c.f[6] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[30].w[0]));
    c.f[3] = ld32((c.r[29].w[0] + 176u));
    c.f[7] = ld32((c.r[18].w[0]));
    c.f[5] = ld32((c.r[17].w[0]));
    c.f[8] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[29].w[0] + 216u);
    c.f[4] = ld32((c.r[2].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[20], c.f[2]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 176u), c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[20]);
    set32(c.r[2], c.r[29].w[0] + 232u);
    c.f[2] = ld32((c.r[2].w[0]));
    st32((c.r[30].w[0]), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[20], c.f[6]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[0]);
    st32((c.r[18].w[0]), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[6]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[7], c.f[20]);
    set32(c.r[2], c.r[29].w[0] + 200u);
    st32((c.r[2].w[0]), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[20], c.f[4]);
    set32(c.r[2], c.r[29].w[0] + 216u);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[17].w[0]), c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[5], c.f[20]);
    st32((c.r[2].w[0]), c.f[1]);
    c.f[3] = ld32((c.r[22].w[0]));
    set32(c.r[2], c.r[29].w[0] + 232u);
    c.facc = fp::ee::mul(c.fcr31, c.f[20], c.f[2]);
    c.f[4] = ld32((c.r[3].w[0]));
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[3], c.f[20]);
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = 0u;
    st32((c.r[22].w[0]), c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 48;
L_002F7FD8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[0] = ld32((c.r[19].w[0]));
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.f[1] = ld32((c.r[19].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[1]);
    st32((c.r[19].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 12u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.budget -= 10;
    [[clang::musttail]] return unit_003E(c, 1u, depth);
}

}

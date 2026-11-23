#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0010[4096] = {
    1, 0, 2, 0, 3, 0, 0, 0, 4, 5, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0,
    13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0,
    0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0,
    0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0,
    0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0,
    0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0,
    0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 108,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0,
    0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 126, 0, 127, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0,
    137, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0,
    0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0,
    0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0,
    0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175,
    0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0,
    0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0,
    0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 218, 0, 0,
    0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0,
    0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0,
    0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0,
    0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 0, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258,
    0, 259, 0, 260, 0, 261, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 285, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 300, 0, 301, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0,
    0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    320, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 326,
    0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0,
    0, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0,
    0, 0, 0, 344, 0, 345, 0, 346, 0, 0, 347, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0,
    352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0,
    0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 370, 0, 0,
    0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0,
    0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 390, 0, 0, 0, 391, 0,
    0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0,
    0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 402, 0, 0, 403, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 409, 0, 0,
    0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415,
    0, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0,
    0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 0,
    430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 433, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437,
    0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0,
};

void unit_0010(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00240000;
    case 2u: goto L_00240008;
    case 3u: goto L_00240010;
    case 4u: goto L_00240020;
    case 5u: goto L_00240024;
    case 6u: goto L_00240030;
    case 7u: goto L_00240040;
    case 8u: goto L_00240094;
    case 9u: goto L_002400C0;
    case 10u: goto L_002400C8;
    case 11u: goto L_002400E0;
    case 12u: goto L_002400F0;
    case 13u: goto L_00240100;
    case 14u: goto L_00240110;
    case 15u: goto L_00240164;
    case 16u: goto L_00240184;
    case 17u: goto L_002401A0;
    case 18u: goto L_002401EC;
    case 19u: goto L_00240200;
    case 20u: goto L_00240214;
    case 21u: goto L_0024021C;
    case 22u: goto L_00240234;
    case 23u: goto L_00240270;
    case 24u: goto L_002402B0;
    case 25u: goto L_002402C4;
    case 26u: goto L_002402D8;
    case 27u: goto L_002402E0;
    case 28u: goto L_002402F0;
    case 29u: goto L_00240324;
    case 30u: goto L_00240338;
    case 31u: goto L_0024034C;
    case 32u: goto L_00240354;
    case 33u: goto L_0024036C;
    case 34u: goto L_002403B0;
    case 35u: goto L_002403E0;
    case 36u: goto L_00240438;
    case 37u: goto L_00240450;
    case 38u: goto L_00240470;
    case 39u: goto L_002404A0;
    case 40u: goto L_002404B8;
    case 41u: goto L_002404D0;
    case 42u: goto L_002404E0;
    case 43u: goto L_002404F0;
    case 44u: goto L_00240510;
    case 45u: goto L_0024053C;
    case 46u: goto L_00240560;
    case 47u: goto L_00240594;
    case 48u: goto L_002405AC;
    case 49u: goto L_002405D0;
    case 50u: goto L_00240610;
    case 51u: goto L_00240640;
    case 52u: goto L_00240674;
    case 53u: goto L_0024068C;
    case 54u: goto L_002406A4;
    case 55u: goto L_002406D0;
    case 56u: goto L_00240708;
    case 57u: goto L_00240720;
    case 58u: goto L_00240728;
    case 59u: goto L_00240738;
    case 60u: goto L_0024075C;
    case 61u: goto L_00240798;
    case 62u: goto L_002407C0;
    case 63u: goto L_002407F0;
    case 64u: goto L_00240808;
    case 65u: goto L_00240834;
    case 66u: goto L_00240844;
    case 67u: goto L_00240870;
    case 68u: goto L_00240880;
    case 69u: goto L_002408A4;
    case 70u: goto L_002408C4;
    case 71u: goto L_00240910;
    case 72u: goto L_00240930;
    case 73u: goto L_00240960;
    case 74u: goto L_002409D0;
    case 75u: goto L_002409FC;
    case 76u: goto L_00240A60;
    case 77u: goto L_00240A80;
    case 78u: goto L_00240AF4;
    case 79u: goto L_00240B14;
    case 80u: goto L_00240B38;
    case 81u: goto L_00240B74;
    case 82u: goto L_00240B9C;
    case 83u: goto L_00240BB4;
    case 84u: goto L_00240BC8;
    case 85u: goto L_00240C3C;
    case 86u: goto L_00240C60;
    case 87u: goto L_00240C74;
    case 88u: goto L_00240C88;
    case 89u: goto L_00240C90;
    case 90u: goto L_00240CA8;
    case 91u: goto L_00240CE0;
    case 92u: goto L_00240D14;
    case 93u: goto L_00240D6C;
    case 94u: goto L_00240D94;
    case 95u: goto L_00240DA0;
    case 96u: goto L_00240DC8;
    case 97u: goto L_00240DD4;
    case 98u: goto L_00240DE0;
    case 99u: goto L_00240DF4;
    case 100u: goto L_00240E78;
    case 101u: goto L_00240EA8;
    case 102u: goto L_00240EBC;
    case 103u: goto L_00240EE0;
    case 104u: goto L_00240F34;
    case 105u: goto L_00240F48;
    case 106u: goto L_00240F5C;
    case 107u: goto L_00240F64;
    case 108u: goto L_00240F7C;
    case 109u: goto L_00240FB0;
    case 110u: goto L_00241000;
    case 111u: goto L_00241038;
    case 112u: goto L_0024105C;
    case 113u: goto L_00241068;
    case 114u: goto L_0024108C;
    case 115u: goto L_002410C0;
    case 116u: goto L_00241120;
    case 117u: goto L_00241138;
    case 118u: goto L_00241188;
    case 119u: goto L_002411A0;
    case 120u: goto L_002411D8;
    case 121u: goto L_002411FC;
    case 122u: goto L_00241238;
    case 123u: goto L_00241260;
    case 124u: goto L_00241280;
    case 125u: goto L_002412DC;
    case 126u: goto L_00241304;
    case 127u: goto L_0024130C;
    case 128u: goto L_00241324;
    case 129u: goto L_0024132C;
    case 130u: goto L_00241350;
    case 131u: goto L_00241360;
    case 132u: goto L_002413AC;
    case 133u: goto L_002413CC;
    case 134u: goto L_0024143C;
    case 135u: goto L_00241464;
    case 136u: goto L_0024146C;
    case 137u: goto L_00241480;
    case 138u: goto L_00241490;
    case 139u: goto L_002414A4;
    case 140u: goto L_0024150C;
    case 141u: goto L_00241524;
    case 142u: goto L_00241530;
    case 143u: goto L_00241574;
    case 144u: goto L_00241594;
    case 145u: goto L_002415D4;
    case 146u: goto L_00241624;
    case 147u: goto L_0024166C;
    case 148u: goto L_00241694;
    case 149u: goto L_002416AC;
    case 150u: goto L_002416C4;
    case 151u: goto L_00241700;
    case 152u: goto L_00241714;
    case 153u: goto L_0024172C;
    case 154u: goto L_00241750;
    case 155u: goto L_0024176C;
    case 156u: goto L_00241784;
    case 157u: goto L_002417B8;
    case 158u: goto L_002417CC;
    case 159u: goto L_002417E4;
    case 160u: goto L_00241808;
    case 161u: goto L_00241824;
    case 162u: goto L_0024183C;
    case 163u: goto L_00241878;
    case 164u: goto L_00241890;
    case 165u: goto L_002418A8;
    case 166u: goto L_002418C4;
    case 167u: goto L_00241918;
    case 168u: goto L_00241944;
    case 169u: goto L_00241998;
    case 170u: goto L_002419D0;
    case 171u: goto L_002419F4;
    case 172u: goto L_00241A30;
    case 173u: goto L_00241A44;
    case 174u: goto L_00241A64;
    case 175u: goto L_00241A7C;
    case 176u: goto L_00241A9C;
    case 177u: goto L_00241ADC;
    case 178u: goto L_00241B10;
    case 179u: goto L_00241B24;
    case 180u: goto L_00241B38;
    case 181u: goto L_00241B40;
    case 182u: goto L_00241B58;
    case 183u: goto L_00241B94;
    case 184u: goto L_00241BAC;
    case 185u: goto L_00241C1C;
    case 186u: goto L_00241C40;
    case 187u: goto L_00241C80;
    case 188u: goto L_00241C9C;
    case 189u: goto L_00241CB4;
    case 190u: goto L_00241CCC;
    case 191u: goto L_00241CE4;
    case 192u: goto L_00241CFC;
    case 193u: goto L_00241D6C;
    case 194u: goto L_00241D90;
    case 195u: goto L_00241DD0;
    case 196u: goto L_00241E00;
    case 197u: goto L_00241E68;
    case 198u: goto L_00241ED0;
    case 199u: goto L_00241EF0;
    case 200u: goto L_00241F08;
    case 201u: goto L_00241F28;
    case 202u: goto L_00241F70;
    case 203u: goto L_00241FC4;
    case 204u: goto L_00241FCC;
    case 205u: goto L_00241FF0;
    case 206u: goto L_00242004;
    case 207u: goto L_0024206C;
    case 208u: goto L_00242084;
    case 209u: goto L_00242090;
    case 210u: goto L_002420C8;
    case 211u: goto L_002420D4;
    case 212u: goto L_002420E4;
    case 213u: goto L_00242108;
    case 214u: goto L_0024211C;
    case 215u: goto L_0024212C;
    case 216u: goto L_00242158;
    case 217u: goto L_00242164;
    case 218u: goto L_00242174;
    case 219u: goto L_00242198;
    case 220u: goto L_002421AC;
    case 221u: goto L_002421BC;
    case 222u: goto L_00242250;
    case 223u: goto L_00242268;
    case 224u: goto L_00242278;
    case 225u: goto L_00242290;
    case 226u: goto L_002422C4;
    case 227u: goto L_002422D8;
    case 228u: goto L_00242314;
    case 229u: goto L_00242324;
    case 230u: goto L_002423CC;
    case 231u: goto L_002423F4;
    case 232u: goto L_00242420;
    case 233u: goto L_00242444;
    case 234u: goto L_00242478;
    case 235u: goto L_00242494;
    case 236u: goto L_002424B4;
    case 237u: goto L_002424CC;
    case 238u: goto L_002424E8;
    case 239u: goto L_00242500;
    case 240u: goto L_00242550;
    case 241u: goto L_0024255C;
    case 242u: goto L_00242574;
    case 243u: goto L_002425F4;
    case 244u: goto L_00242604;
    case 245u: goto L_00242630;
    case 246u: goto L_00242668;
    case 247u: goto L_0024268C;
    case 248u: goto L_002426C8;
    case 249u: goto L_00242700;
    case 250u: goto L_00242780;
    case 251u: goto L_00242798;
    case 252u: goto L_002427A0;
    case 253u: goto L_002427A8;
    case 254u: goto L_002427B0;
    case 255u: goto L_002427B8;
    case 256u: goto L_00242820;
    case 257u: goto L_002428F4;
    case 258u: goto L_002428FC;
    case 259u: goto L_00242904;
    case 260u: goto L_0024290C;
    case 261u: goto L_00242914;
    case 262u: goto L_0024291C;
    case 263u: goto L_00242924;
    case 264u: goto L_00242990;
    case 265u: goto L_00242A7C;
    case 266u: goto L_00242AFC;
    case 267u: goto L_00242B50;
    case 268u: goto L_00242B88;
    case 269u: goto L_00242BDC;
    case 270u: goto L_00242C18;
    case 271u: goto L_00242C30;
    case 272u: goto L_00242C44;
    case 273u: goto L_00242CD0;
    case 274u: goto L_00242CE0;
    case 275u: goto L_00242D00;
    case 276u: goto L_00242D50;
    case 277u: goto L_00242D70;
    case 278u: goto L_00242DB0;
    case 279u: goto L_00242DC8;
    case 280u: goto L_00242E08;
    case 281u: goto L_00242E30;
    case 282u: goto L_00242E70;
    case 283u: goto L_00242E98;
    case 284u: goto L_00242ED8;
    case 285u: goto L_00242F04;
    case 286u: goto L_00242F14;
    case 287u: goto L_00242F1C;
    case 288u: goto L_00242F48;
    case 289u: goto L_00242F70;
    case 290u: goto L_00242FA0;
    case 291u: goto L_00242FB8;
    case 292u: goto L_00242FD0;
    case 293u: goto L_0024300C;
    case 294u: goto L_0024301C;
    case 295u: goto L_00243058;
    case 296u: goto L_00243064;
    case 297u: goto L_00243070;
    case 298u: goto L_002430D0;
    case 299u: goto L_002430E0;
    case 300u: goto L_0024310C;
    case 301u: goto L_00243114;
    case 302u: goto L_00243120;
    case 303u: goto L_0024312C;
    case 304u: goto L_00243144;
    case 305u: goto L_00243160;
    case 306u: goto L_00243198;
    case 307u: goto L_002431C0;
    case 308u: goto L_002431D8;
    case 309u: goto L_002431F0;
    case 310u: goto L_00243200;
    case 311u: goto L_00243244;
    case 312u: goto L_0024325C;
    case 313u: goto L_00243274;
    case 314u: goto L_0024328C;
    case 315u: goto L_002432B0;
    case 316u: goto L_002432CC;
    case 317u: goto L_0024330C;
    case 318u: goto L_00243328;
    case 319u: goto L_00243338;
    case 320u: goto L_00243380;
    case 321u: goto L_00243384;
    case 322u: goto L_002433B0;
    case 323u: goto L_002433C0;
    case 324u: goto L_002433D8;
    case 325u: goto L_002433E8;
    case 326u: goto L_002433FC;
    case 327u: goto L_0024340C;
    case 328u: goto L_00243420;
    case 329u: goto L_00243430;
    case 330u: goto L_002434B8;
    case 331u: goto L_002434E8;
    case 332u: goto L_002434FC;
    case 333u: goto L_00243530;
    case 334u: goto L_00243560;
    case 335u: goto L_00243574;
    case 336u: goto L_002435C8;
    case 337u: goto L_002435F8;
    case 338u: goto L_0024360C;
    case 339u: goto L_00243618;
    case 340u: goto L_00243624;
    case 341u: goto L_0024363C;
    case 342u: goto L_0024364C;
    case 343u: goto L_00243678;
    case 344u: goto L_0024368C;
    case 345u: goto L_00243694;
    case 346u: goto L_0024369C;
    case 347u: goto L_002436A8;
    case 348u: goto L_002436B8;
    case 349u: goto L_002436C4;
    case 350u: goto L_002436DC;
    case 351u: goto L_002436F4;
    case 352u: goto L_00243700;
    case 353u: goto L_00243728;
    case 354u: goto L_00243730;
    case 355u: goto L_0024373C;
    case 356u: goto L_00243760;
    case 357u: goto L_00243774;
    case 358u: goto L_002437B4;
    case 359u: goto L_00243898;
    case 360u: goto L_002438C8;
    case 361u: goto L_002438F0;
    case 362u: goto L_00243928;
    case 363u: goto L_00243958;
    case 364u: goto L_0024396C;
    case 365u: goto L_00243988;
    case 366u: goto L_002439B0;
    case 367u: goto L_002439C8;
    case 368u: goto L_002439D8;
    case 369u: goto L_002439E4;
    case 370u: goto L_002439F4;
    case 371u: goto L_00243A10;
    case 372u: goto L_00243A1C;
    case 373u: goto L_00243A34;
    case 374u: goto L_00243A44;
    case 375u: goto L_00243A58;
    case 376u: goto L_00243A68;
    case 377u: goto L_00243A94;
    case 378u: goto L_00243AA4;
    case 379u: goto L_00243AA8;
    case 380u: goto L_00243AE8;
    case 381u: goto L_00243B08;
    case 382u: goto L_00243B28;
    case 383u: goto L_00243B48;
    case 384u: goto L_00243B64;
    case 385u: goto L_00243B8C;
    case 386u: goto L_00243B98;
    case 387u: goto L_00243BA4;
    case 388u: goto L_00243BB8;
    case 389u: goto L_00243BE0;
    case 390u: goto L_00243BE8;
    case 391u: goto L_00243BF8;
    case 392u: goto L_00243C14;
    case 393u: goto L_00243C40;
    case 394u: goto L_00243C4C;
    case 395u: goto L_00243C5C;
    case 396u: goto L_00243C78;
    case 397u: goto L_00243C84;
    case 398u: goto L_00243C9C;
    case 399u: goto L_00243CAC;
    case 400u: goto L_00243CC0;
    case 401u: goto L_00243CD0;
    case 402u: goto L_00243D04;
    case 403u: goto L_00243D10;
    case 404u: goto L_00243D1C;
    case 405u: goto L_00243D28;
    case 406u: goto L_00243D3C;
    case 407u: goto L_00243D58;
    case 408u: goto L_00243D68;
    case 409u: goto L_00243D74;
    case 410u: goto L_00243D84;
    case 411u: goto L_00243DA0;
    case 412u: goto L_00243DAC;
    case 413u: goto L_00243DC4;
    case 414u: goto L_00243DD4;
    case 415u: goto L_00243DFC;
    case 416u: goto L_00243E08;
    case 417u: goto L_00243E14;
    case 418u: goto L_00243E20;
    case 419u: goto L_00243E34;
    case 420u: goto L_00243E40;
    case 421u: goto L_00243E4C;
    case 422u: goto L_00243E5C;
    case 423u: goto L_00243E78;
    case 424u: goto L_00243E84;
    case 425u: goto L_00243E9C;
    case 426u: goto L_00243EAC;
    case 427u: goto L_00243EDC;
    case 428u: goto L_00243EE8;
    case 429u: goto L_00243EF4;
    case 430u: goto L_00243F00;
    case 431u: goto L_00243F14;
    case 432u: goto L_00243F2C;
    case 433u: goto L_00243F38;
    case 434u: goto L_00243F44;
    case 435u: goto L_00243F50;
    case 436u: goto L_00243F64;
    case 437u: goto L_00243F7C;
    case 438u: goto L_00243F88;
    case 439u: goto L_00243F94;
    case 440u: goto L_00243FA0;
    case 441u: goto L_00243FB4;
    case 442u: goto L_00243FD0;
    case 443u: goto L_00243FDC;
    case 444u: goto L_00243FEC;
    default: bad_entry(c, 0x00240000u); return;
    }
L_00240000:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_00240008:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00240010:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0024002C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240024u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00240024u) [[unlikely]] return; }
    goto L_00240024;
L_00240020:
    c.budget -= 1;
L_00240024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00240034; } }
L_0024002C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_00240030:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00240034:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00240040:
    set32(c.r[29], c.r[29].w[0] - 4192u);
    set32(c.r[3], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 4144u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 4152u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 4160u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 4168u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 4176u), c.r[10].d[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 4184u), c.r[11].d[0]);  if (t) { goto L_00240074; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00240080; } }
L_00240074:
    set32(c.r[2], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] << 3);
    c.budget -= 3;
L_00240080:
    set32(c.r[2], c.r[29].w[0] + 4192u);
    set32(c.r[3], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 4096u);  if (t) { goto L_002400B0; } }
L_00240094:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240094u | kUnwind; return; } goto L_00240094; } }
L_002400B0:
    c.r[5].d[0] = c.r[5].d[0] << 32;
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002400C0u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_000E(c, 132u, depth + 1u); else { c.pc = 0x00239628u; return; } if (c.pc != 0x002400C0u) [[unlikely]] return; }
L_002400C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002400C8u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000D(c, 6u, depth + 1u); else { c.pc = 0x002340F0u; return; } if (c.pc != 0x002400C8u) [[unlikely]] return; }
L_002400C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 4192u);  c.pc = t; return; }
L_002400E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_002400F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00240100:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00240110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00240184; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 28488u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  if (t) { goto L_0024016C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 28472u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0024016C; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0024016C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240164u);  if (depth < kMaxDepth) unit_0008(c, 105u, depth + 1u); else { c.pc = 0x00220F38u; return; } if (c.pc != 0x00240164u) [[unlikely]] return; }
L_00240164:
    set32(c.r[2], 0u - 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0024016C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00240184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240184u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00240184u) [[unlikely]] return; }
L_00240184:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002401A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[18], ld32((c.r[2].w[0] - 29568u)));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[18].w[0] - 1u);
    c.r[2].d[0] = c.r[18].d[0] & 63ull;
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[18].w[0]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00240224; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002401ECu); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x002401ECu) [[unlikely]] return; }
L_002401EC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[6], 0u + 256u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240200u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 133u, depth + 1u); else { c.pc = 0x002212F0u; return; } if (c.pc != 0x00240200u) [[unlikely]] return; }
L_00240200:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240214u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00240214u) [[unlikely]] return; }
L_00240214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024021Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0024021Cu) [[unlikely]] return; }
L_0024021C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[18].w[0] + c.r[19].w[0]);  if (t) { goto L_0024023C; } }
L_00240224:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240234u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0008(c, 133u, depth + 1u); else { c.pc = 0x002212F0u; return; } if (c.pc != 0x00240234u) [[unlikely]] return; }
L_00240234:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[18].w[0] + c.r[19].w[0]);
    c.budget -= 2;
L_0024023C:
    c.r[2].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00240270:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[17].d[0] & 63ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002402E8; } }
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002402B0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x002402B0u) [[unlikely]] return; }
L_002402B0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002402C4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 133u, depth + 1u); else { c.pc = 0x002212F0u; return; } if (c.pc != 0x002402C4u) [[unlikely]] return; }
L_002402C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002402D8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x002402D8u) [[unlikely]] return; }
L_002402D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002402E0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x002402E0u) [[unlikely]] return; }
L_002402E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002402F4; } }
L_002402E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002402F0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0008(c, 133u, depth + 1u); else { c.pc = 0x002212F0u; return; } if (c.pc != 0x002402F0u) [[unlikely]] return; }
L_002402F0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002402F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[19], ld32((c.r[2].w[0] - 29568u)));
    set32(c.r[3], c.r[19].w[0] - 1u);
    c.r[2].d[0] = c.r[19].d[0] & 63ull;
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[19].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], ld32((c.r[18].w[0])));  if (t) { goto L_0024035C; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240324u); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x00240324u) [[unlikely]] return; }
L_00240324:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[6], 0u + 256u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240338u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 133u, depth + 1u); else { c.pc = 0x002212F0u; return; } if (c.pc != 0x00240338u) [[unlikely]] return; }
L_00240338:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024034Cu); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x0024034Cu) [[unlikely]] return; }
L_0024034C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240354u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x00240354u) [[unlikely]] return; }
L_00240354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[19].w[0] + c.r[20].w[0]);  if (t) { goto L_00240374; } }
L_0024035C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024036Cu); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_0008(c, 133u, depth + 1u); else { c.pc = 0x002212F0u; return; } if (c.pc != 0x0024036Cu) [[unlikely]] return; }
L_0024036C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[19].w[0] + c.r[20].w[0]);
    c.budget -= 2;
L_00240374:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002403B0:
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[6].w[0] - 1u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st8((c.r[6].w[0] - 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  c.pc = t; return; }
L_002403E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00240450; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 28544u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_00240438; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 28448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240438u); st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x00240438u) [[unlikely]] return; }
L_00240438:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00240450; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240450u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00240450u) [[unlikely]] return; }
L_00240450:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00240470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002404B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 28448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002404A0u); st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x002404A0u) [[unlikely]] return; }
L_002404A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002404B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002404B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002404B8u) [[unlikely]] return; }
L_002404B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002404D0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_002404E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002404F0u); set32(c.r[4], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_0008(c, 151u, depth + 1u); else { c.pc = 0x00221560u; return; } if (c.pc != 0x002404F0u) [[unlikely]] return; }
L_002404F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00240510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_00240534; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024054C; } }
L_00240534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024053Cu);  if (depth < kMaxDepth) unit_0008(c, 105u, depth + 1u); else { c.pc = 0x00220F38u; return; } if (c.pc != 0x0024053Cu) [[unlikely]] return; }
L_0024053C:
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_0024054C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00240560:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] < 0; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002405C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_002405A4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00240594:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002405C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0024061C; } }
L_002405A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002405ACu);  if (depth < kMaxDepth) unit_0008(c, 105u, depth + 1u); else { c.pc = 0x00220F38u; return; } if (c.pc != 0x002405ACu) [[unlikely]] return; }
L_002405AC:
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240594u | kUnwind; return; } goto L_00240594; } }
L_002405C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 30640u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 3248u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_002405D0:
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002405F8; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002405D0u | kUnwind; return; } goto L_002405D0; } }
    c.budget -= 1;
L_002405F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], 0u + 771u);
    set32(c.r[2], 0u + 1539u);
    set32(c.r[4], c.r[4].w[0] - 3248u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240610u); if (c.r[16].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_0008(c, 85u, depth + 1u); else { c.pc = 0x00220CA8u; return; } if (c.pc != 0x00240610u) [[unlikely]] return; }
L_00240610:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
L_0024061C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00240640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0024068C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 28472u);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_00240694; } }
L_00240674:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0024068C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024068Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0024068Cu) [[unlikely]] return; }
L_0024068C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002406B0; } }
L_00240694:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240674u | kUnwind; return; } goto L_00240674; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002406A4u);  if (depth < kMaxDepth) unit_0008(c, 105u, depth + 1u); else { c.pc = 0x00220F38u; return; } if (c.pc != 0x002406A4u) [[unlikely]] return; }
L_002406A4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240674u | kUnwind; return; } goto L_00240674; } }
L_002406B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002406D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 28472u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 16u), 0u);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240708u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x00240708u) [[unlikely]] return; }
L_00240708:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0024074C; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_00240730; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00240720:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0024074C; } }
L_00240728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002407A0; } }
L_00240730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240738u);  if (depth < kMaxDepth) unit_0008(c, 105u, depth + 1u); else { c.pc = 0x00220F38u; return; } if (c.pc != 0x00240738u) [[unlikely]] return; }
L_00240738:
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[2], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240720u | kUnwind; return; } goto L_00240720; } }
L_0024074C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30640u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 3248u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0024075C:
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00240788; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024075Cu | kUnwind; return; } goto L_0024075C; } }
    c.budget -= 1;
L_00240788:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 3248u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240798u); set32(c.r[5], 0u + 1539u);  if (depth < kMaxDepth) unit_0008(c, 85u, depth + 1u); else { c.pc = 0x00220CA8u; return; } if (c.pc != 0x00240798u) [[unlikely]] return; }
L_00240798:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240728u | kUnwind; return; } goto L_00240728; } }
L_002407A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002407C0:
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 28472u);
    st32((c.r[4].w[0] + 16u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[3].w[0]);  c.pc = t; return; }
L_002407F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240808u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 124u, depth + 1u); else { c.pc = 0x00241280u; return; } if (c.pc != 0x00240808u) [[unlikely]] return; }
L_00240808:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00240910; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00240910; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00240894; } }
L_00240834:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_00240844:
    set32(c.r[2], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002408D4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002408D4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002408B4; } }
L_00240870:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_00240880:
    set32(c.r[2], 0u + 254u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00240910; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_002408D8; } }
L_00240894:
    set32(c.r[25], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002408A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002408A4u) [[unlikely]] return; }
L_002408A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240834u | kUnwind; return; } goto L_00240834; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240844u | kUnwind; return; } goto L_00240844; } }
L_002408B4:
    set32(c.r[25], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002408C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002408C4u) [[unlikely]] return; }
L_002408C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240870u | kUnwind; return; } goto L_00240870; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240880u | kUnwind; return; } goto L_00240880; } }
L_002408D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_002408D8:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00240900; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00240910; } }
L_00240900:
    set32(c.r[25], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00240910u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00240910u) [[unlikely]] return; }
L_00240910:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00240930:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00240970; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00240970; } }
L_00240960:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_002409C4; } }
L_00240970:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[7], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240960u | kUnwind; return; } goto L_00240960; } }
L_002409C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002409D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[16], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00240A50; } }
L_002409FC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 12u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00240A6C; } }
L_00240A50:
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240A60u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0008(c, 117u, depth + 1u); else { c.pc = 0x002210B0u; return; } if (c.pc != 0x00240A60u) [[unlikely]] return; }
L_00240A60:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002409FCu | kUnwind; return; } goto L_002409FC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00240A6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00240A80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[7], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 11;
    { const bool t = c.r[7].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00240C20; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[7].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[7].w[0] + 4u);  if (t) { goto L_00240B04; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00240B04; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00240AF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00240B1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00240CB4; } }
L_00240B04:
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00240B14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00240B14u) [[unlikely]] return; }
L_00240B14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240AF4u | kUnwind; return; } goto L_00240AF4; } }
L_00240B1C:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], c.r[29].w[0] + 108u);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], c.r[28].w[0] - 32736u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240B38u); st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 250u, depth + 1u); else { c.pc = 0x00246180u; return; } if (c.pc != 0x00240B38u) [[unlikely]] return; }
L_00240B38:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[19], c.r[2].w[0] + 4u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00240BA8; } }
    set32(c.r[20], c.r[3].w[0] - c.r[5].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240B74u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x00240B74u) [[unlikely]] return; }
L_00240B74:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[20].d[0]; st32((c.r[19].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00240BA0; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[5], c.r[17].w[0] + c.r[20].w[0]);
    set32(c.r[6], c.r[18].w[0] - c.r[20].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00240B9Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00240B9Cu) [[unlikely]] return; }
L_00240B9C:
    set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_00240BA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00240BC4; } }
L_00240BA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240BB4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x00240BB4u) [[unlikely]] return; }
L_00240BB4:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.r[20].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
L_00240BC4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00240BC8:
    c.r[2].d[0] = 0ull < c.r[20].d[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_00240CB4; } }
L_00240C20:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], c.r[28].w[0] - 32732u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240C3Cu); st32((c.r[29].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 250u, depth + 1u); else { c.pc = 0x00246180u; return; } if (c.pc != 0x00240C3Cu) [[unlikely]] return; }
L_00240C3C:
    set32(c.r[19], ld32((c.r[16].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].d[0] & 63ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00240C98; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240C60u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x00240C60u) [[unlikely]] return; }
L_00240C60:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240C74u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 133u, depth + 1u); else { c.pc = 0x002212F0u; return; } if (c.pc != 0x00240C74u) [[unlikely]] return; }
L_00240C74:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240C88u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00240C88u) [[unlikely]] return; }
L_00240C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240C90u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x00240C90u) [[unlikely]] return; }
L_00240C90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00240CAC; } }
L_00240C98:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240CA8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 133u, depth + 1u); else { c.pc = 0x002212F0u; return; } if (c.pc != 0x00240CA8u) [[unlikely]] return; }
L_00240CA8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00240CAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240BC8u | kUnwind; return; } goto L_00240BC8; } }
L_00240CB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00240CE0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00240E58; } }
L_00240D14:
    set32(c.r[16], ld32((c.r[20].w[0])));
    set32(c.r[7], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00240F1C; } }
    set32(c.r[6], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[7].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[7].w[0] + 4u);  if (t) { goto L_00240ED0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00240ED0; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00240D6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00240EE8; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00240EF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00240EF0; } }
L_00240D94:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240DA0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x00240DA0u) [[unlikely]] return; }
L_00240DA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[17].d[0]; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00240DCC; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], c.r[19].w[0] + c.r[17].w[0]);
    set32(c.r[6], c.r[18].w[0] - c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00240DC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00240DC8u) [[unlikely]] return; }
L_00240DC8:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_00240DCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00240DF0; } }
L_00240DD4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240DE0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x00240DE0u) [[unlikely]] return; }
L_00240DE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 4;
L_00240DF0:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_00240DF4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[20].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00240F88; } }
L_00240E58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[18].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240D14u | kUnwind; return; } goto L_00240D14; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00240E78u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00240E78u) [[unlikely]] return; }
L_00240E78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00240E90; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);  if (t) { goto L_00240E94; } }
L_00240E90:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00240E94:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[29].w[0] + 108u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240EA8u); st32((c.r[29].w[0] + 104u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0011(c, 250u, depth + 1u); else { c.pc = 0x00246180u; return; } if (c.pc != 0x00240EA8u) [[unlikely]] return; }
L_00240EA8:
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240EBCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x00240EBCu) [[unlikely]] return; }
L_00240EBC:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_00240F88; } }
L_00240ED0:
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00240EE0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00240EE0u) [[unlikely]] return; }
L_00240EE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240D6Cu | kUnwind; return; } goto L_00240D6C; } }
L_00240EE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00240F88; } }
L_00240EF0:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[16], c.r[2].w[0] + 4u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240DD4u | kUnwind; return; } goto L_00240DD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] - c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240D94u | kUnwind; return; } goto L_00240D94; } }
L_00240F1C:
    c.r[2].d[0] = c.r[19].d[0] & 63ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00240F6C; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240F34u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x00240F34u) [[unlikely]] return; }
L_00240F34:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240F48u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 133u, depth + 1u); else { c.pc = 0x002212F0u; return; } if (c.pc != 0x00240F48u) [[unlikely]] return; }
L_00240F48:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240F5Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00240F5Cu) [[unlikely]] return; }
L_00240F5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240F64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x00240F64u) [[unlikely]] return; }
L_00240F64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00240F80; } }
L_00240F6C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240F7Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 133u, depth + 1u); else { c.pc = 0x002212F0u; return; } if (c.pc != 0x00240F7Cu) [[unlikely]] return; }
L_00240F7C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00240F80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240DF4u | kUnwind; return; } goto L_00240DF4; } }
L_00240F88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00240FB0:
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00240FF4; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].sd[0] < 0ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00240FD8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00240FD8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00240FE8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00240FE8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00240FF4; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00240FF4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00241000:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00241038; } }
    st8((c.r[3].w[0] + 40u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241038u); set32(c.r[4], c.r[2].w[0] + 36u);  if (depth < kMaxDepth) unit_0011(c, 254u, depth + 1u); else { c.pc = 0x00246220u; return; } if (c.pc != 0x00241038u) [[unlikely]] return; }
L_00241038:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00241078; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 44u), 0u);
    c.budget -= 5;
L_0024105C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241068u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00241068u) [[unlikely]] return; }
L_00241068:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), 0u);  if (t) { goto L_002410A4; } }
L_00241078:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024105Cu | kUnwind; return; } goto L_0024105C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024108Cu);  if (depth < kMaxDepth) unit_0008(c, 105u, depth + 1u); else { c.pc = 0x00220F38u; return; } if (c.pc != 0x0024108Cu) [[unlikely]] return; }
L_0024108C:
    c.r[16].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[16].d[0] = c.r[16].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024105Cu | kUnwind; return; } goto L_0024105C; } }
L_002410A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002410C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00241188; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 28400u);
    st32((c.r[19].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00241170; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00241190; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00241190; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00241190; } }
L_00241120:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] - 3792u)));
    set32(c.r[3], ld32((c.r[2].w[0] - 3796u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002411A8; } }
L_00241138:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 3792u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] - 3800u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    st32((c.r[3].w[0] - 3792u), c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0024116C; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0024116C:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_00241170:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00241188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241188u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00241188u) [[unlikely]] return; }
L_00241188:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00241240; } }
L_00241190:
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002411A0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002411A0u) [[unlikely]] return; }
L_002411A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241120u | kUnwind; return; } goto L_00241120; } }
L_002411A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[17], ld32((c.r[2].w[0] - 3800u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 3796u), c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] >> 2);
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002411D8u); st32((c.r[2].w[0] - 3792u), 0u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002411D8u) [[unlikely]] return; }
L_002411D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[3].w[0] - 3800u), c.r[2].w[0]);  if (t) { goto L_00241230; } }
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
L_002411FC:
    set32(c.r[6], ld32((c.r[4].w[0] - 3792u)));
    set32(c.r[5], ld32((c.r[2].w[0] - 3800u)));
    set32(c.r[7], c.r[6].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[3].w[0] - 3792u), c.r[7].w[0]);  if (t) { goto L_00241220; } }
    set32(c.r[5], ld32((c.r[8].w[0])));
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.budget -= 2;
L_00241220:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[5].d[0] = c.r[9].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002411FCu | kUnwind; return; } goto L_002411FC; } }
L_00241230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241238u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00241238u) [[unlikely]] return; }
L_00241238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241138u | kUnwind; return; } goto L_00241138; } }
L_00241240:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00241260:
    st32((c.r[4].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 16u), 0u);
    set32(c.r[3], c.r[3].w[0] - 28400u);
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[3].w[0]);  c.pc = t; return; }
L_00241280:
    set32(c.r[29], c.r[29].w[0] - 1200u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[28].w[0] - 32739u));
    c.r[5].d[0] = ld8((c.r[28].w[0] - 32740u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 32738u));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30644u));
    st8((c.r[29].w[0] + 1197u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 1196u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[29].w[0] + 1198u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00241300; } }
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00241388; } }
L_002412DC:
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002412DCu | kUnwind; return; } goto L_002412DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00241388; } }
L_00241300:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00241304:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00241488; } }
L_0024130C:
    set32(c.r[20], ld32((c.r[28].w[0] - 30656u)));
    c.r[2].d[0] = c.r[20].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_00241350; } }
L_00241324:
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 2;
L_0024132C:
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00241498; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024132Cu | kUnwind; return; } goto L_0024132C; } }
L_00241350:
    set32(c.r[3], ld32((c.r[28].w[0] - 30640u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 3248u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00241360:
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00241904; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241360u | kUnwind; return; } goto L_00241360; } }
    c.budget -= 1;
L_00241388:
    set32(c.r[2], c.r[3].w[0] - c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_0024139C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0024139C:
    set32(c.r[4], c.r[29].w[0] + 640u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002413ACu); set32(c.r[6], 0u + 512u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x002413ACu) [[unlikely]] return; }
L_002413AC:
    c.r[1].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00241458; } }
    c.r[1].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[10], c.r[18].w[0] - 8u);  if (t) { goto L_00241420; } }
    c.r[12].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[11], c.r[29].w[0] + 640u);
    c.budget -= 2;
L_002413CC:
    c.r[9].d[0] = ld16((c.r[12].w[0]));
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.r[8].d[0] = ld16((c.r[12].w[0] + 2u));
    c.r[3].d[0] = c.r[2].d[0] < c.r[10].d[0] ? 1ull : 0ull;
    c.r[7].d[0] = ld16((c.r[12].w[0] + 4u));
    c.r[6].d[0] = ld16((c.r[12].w[0] + 6u));
    c.r[5].d[0] = ld16((c.r[12].w[0] + 8u));
    c.r[4].d[0] = ld16((c.r[12].w[0] + 10u));
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[11].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[11].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[11].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[11].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[11].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[5].d[0] = ld16((c.r[12].w[0] + 12u));
    c.r[4].d[0] = ld16((c.r[12].w[0] + 14u));
    st8((c.r[11].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[11].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[12], c.r[12].w[0] + 16u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[11], c.r[11].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002413CCu | kUnwind; return; } goto L_002413CC; } }
L_00241420:
    c.r[1].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00241458; } }
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[6], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[3].w[0] + 640u);
    c.budget -= 4;
L_0024143C:
    c.r[4].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024143Cu | kUnwind; return; } goto L_0024143C; } }
L_00241458:
    set32(c.r[4], c.r[29].w[0] + 640u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241464u); set32(c.r[5], c.r[29].w[0] + 1196u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x00241464u) [[unlikely]] return; }
L_00241464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024146Cu); set32(c.r[4], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0024146Cu) [[unlikely]] return; }
L_0024146C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 3888u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241480u); set32(c.r[5], c.r[29].w[0] + 640u);  if (depth < kMaxDepth) unit_0008(c, 151u, depth + 1u); else { c.pc = 0x00221560u; return; } if (c.pc != 0x00241480u) [[unlikely]] return; }
L_00241480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241304u | kUnwind; return; } goto L_00241304; } }
L_00241488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241490u);  if (depth < kMaxDepth) unit_0010(c, 232u, depth + 1u); else { c.pc = 0x00242420u; return; } if (c.pc != 0x00241490u) [[unlikely]] return; }
L_00241490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024130Cu | kUnwind; return; } goto L_0024130C; } }
L_00241498:
    set32(c.r[6], c.r[29].w[0] + 384u);
    set32(c.r[7], c.r[29].w[0] + 128u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
L_002414A4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[2].d[0] = c.r[4].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_002414C4; } }
    c.r[1].d[0] = c.r[4].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002414C4; } }
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_002414C4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002414D8; } }
    set32(c.r[2], c.r[4].w[0] - 32u);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 3;
L_002414D8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002414A4u | kUnwind; return; } goto L_002414A4; } }
    set32(c.r[3], c.r[29].w[0] + 128u);
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[29].w[0] + 1188u), c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[4], c.r[2].w[0] + 48u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024150Cu); set32(c.r[5], c.r[29].w[0] + 1188u);  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00241EF0u; return; } if (c.pc != 0x0024150Cu) [[unlikely]] return; }
L_0024150C:
    mmi::divu(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[18].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00241700; } }
    c.r[2].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00241524:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002417B8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00241530:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002418D4; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[20].d[0] << 32;
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[17].w[0])));
    st32((c.r[3].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 52u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[16], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 14;
    { const bool t = c.r[21].d[0] != 0ull; st32((c.r[4].w[0] + 12u), 0u);  if (t) { goto L_00241864; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_00241574:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00241880; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00241880; } }
L_00241594:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 1180u);
    set32(c.r[5], c.r[29].w[0] + 1176u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[29].w[0] + 1176u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002415D4u); st32((c.r[29].w[0] + 1180u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 251u, depth + 1u); else { c.pc = 0x002461A0u; return; } if (c.pc != 0x002415D4u) [[unlikely]] return; }
L_002415D4:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[5].w[0] + 4u);  if (t) { goto L_002418B4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002418B4; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00241624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002418CC; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[18], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[19], c.r[2].w[0] + 4u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002416A0; } }
    set32(c.r[20], c.r[3].w[0] - c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024166Cu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0024166Cu) [[unlikely]] return; }
L_0024166C:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[20].d[0]; st32((c.r[19].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00241698; } }
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[5], c.r[16].w[0] + c.r[20].w[0]);
    set32(c.r[6], c.r[18].w[0] - c.r[20].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00241694u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00241694u) [[unlikely]] return; }
L_00241694:
    set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_00241698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_002416C0; } }
L_002416A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002416ACu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002416ACu) [[unlikely]] return; }
L_002416AC:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.r[20].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 5;
L_002416C0:
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 1;
L_002416C4:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_00241DD8; } }
L_00241700:
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241714u); set32(c.r[4], c.r[2].w[0] + 40u);  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00241714u) [[unlikely]] return; }
L_00241714:
    set32(c.r[5], ld32((c.r[29].w[0] + 1188u)));
    c.r[3].d[0] = c.r[20].d[0] << 32;
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024172Cu); set32(c.r[4], c.r[3].w[0] + 49u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x0024172Cu) [[unlikely]] return; }
L_0024172C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00241758; } }
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241750u); set32(c.r[4], c.r[2].w[0] + 40u);  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00241750u) [[unlikely]] return; }
L_00241750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241530u | kUnwind; return; } goto L_00241530; } }
L_00241758:
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024176Cu); set32(c.r[4], c.r[2].w[0] + 40u);  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x0024176Cu) [[unlikely]] return; }
L_0024176C:
    c.r[3].d[0] = c.r[20].d[0] << 32;
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241784u); set32(c.r[4], c.r[3].w[0] + 49u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00241784u) [[unlikely]] return; }
L_00241784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002417B0; } }
    c.r[2].d[0] = c.r[20].d[0] << 32;
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241700u | kUnwind; return; } goto L_00241700; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241524u | kUnwind; return; } goto L_00241524; } }
L_002417B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241530u | kUnwind; return; } goto L_00241530; } }
L_002417B8:
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002417CCu); set32(c.r[4], c.r[2].w[0] + 40u);  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002417CCu) [[unlikely]] return; }
L_002417CC:
    set32(c.r[5], ld32((c.r[29].w[0] + 1188u)));
    c.r[3].d[0] = c.r[20].d[0] << 32;
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002417E4u); set32(c.r[4], c.r[3].w[0] + 49u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x002417E4u) [[unlikely]] return; }
L_002417E4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00241810; } }
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241808u); set32(c.r[4], c.r[2].w[0] + 40u);  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00241808u) [[unlikely]] return; }
L_00241808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241530u | kUnwind; return; } goto L_00241530; } }
L_00241810:
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241824u); set32(c.r[4], c.r[2].w[0] + 40u);  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00241824u) [[unlikely]] return; }
L_00241824:
    c.r[3].d[0] = c.r[20].d[0] << 32;
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024183Cu); set32(c.r[4], c.r[3].w[0] + 49u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x0024183Cu) [[unlikely]] return; }
L_0024183C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024185C; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002417B8u | kUnwind; return; } goto L_002417B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241530u | kUnwind; return; } goto L_00241530; } }
L_0024185C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241530u | kUnwind; return; } goto L_00241530; } }
L_00241864:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 1184u);
    set32(c.r[5], c.r[5].w[0] - 29560u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241878u); st32((c.r[29].w[0] + 1184u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0011(c, 249u, depth + 1u); else { c.pc = 0x00246160u; return; } if (c.pc != 0x00241878u) [[unlikely]] return; }
L_00241878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241574u | kUnwind; return; } goto L_00241574; } }
L_00241880:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00241890; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241890u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00241890u) [[unlikely]] return; }
L_00241890:
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 8u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002418A8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x002418A8u) [[unlikely]] return; }
L_002418A8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241594u | kUnwind; return; } goto L_00241594; } }
L_002418B4:
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002418C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002418C4u) [[unlikely]] return; }
L_002418C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241624u | kUnwind; return; } goto L_00241624; } }
L_002418CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002416C4u | kUnwind; return; } goto L_002416C4; } }
L_002418D4:
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[2].d[0] = c.r[22].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[20], ld32((c.r[3].w[0] + 68u)));
    c.r[2].d[0] = c.r[20].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241324u | kUnwind; return; } goto L_00241324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241350u | kUnwind; return; } goto L_00241350; } }
L_00241904:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 3248u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241918u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0008(c, 85u, depth + 1u); else { c.pc = 0x00220CA8u; return; } if (c.pc != 0x00241918u) [[unlikely]] return; }
L_00241918:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_00241A38; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] - 3792u)));
    set32(c.r[3], ld32((c.r[2].w[0] - 3796u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_002419A0; } }
L_00241944:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 3792u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] - 3800u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    st32((c.r[3].w[0] - 3792u), c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00241978; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00241978:
    st32((c.r[17].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30640u)));
    set32(c.r[2], c.r[2].w[0] - 3248u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 29552u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241998u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000C(c, 299u, depth + 1u); else { c.pc = 0x00233FF8u; return; } if (c.pc != 0x00241998u) [[unlikely]] return; }
L_00241998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00241DD8; } }
L_002419A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[18], ld32((c.r[2].w[0] - 3800u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 3796u), c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] >> 2);
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002419D0u); st32((c.r[2].w[0] - 3792u), 0u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x002419D0u) [[unlikely]] return; }
L_002419D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[3].w[0] - 3800u), c.r[2].w[0]);  if (t) { goto L_00241A28; } }
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
L_002419F4:
    set32(c.r[6], ld32((c.r[4].w[0] - 3792u)));
    set32(c.r[5], ld32((c.r[2].w[0] - 3800u)));
    set32(c.r[7], c.r[6].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[3].w[0] - 3792u), c.r[7].w[0]);  if (t) { goto L_00241A18; } }
    set32(c.r[5], ld32((c.r[8].w[0])));
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.budget -= 2;
L_00241A18:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[5].d[0] = c.r[9].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002419F4u | kUnwind; return; } goto L_002419F4; } }
L_00241A28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241A30u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00241A30u) [[unlikely]] return; }
L_00241A30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241944u | kUnwind; return; } goto L_00241944; } }
L_00241A38:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241A44u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0008(c, 117u, depth + 1u); else { c.pc = 0x002210B0u; return; } if (c.pc != 0x00241A44u) [[unlikely]] return; }
L_00241A44:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_00241B88; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241A64u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0008(c, 117u, depth + 1u); else { c.pc = 0x002210B0u; return; } if (c.pc != 0x00241A64u) [[unlikely]] return; }
L_00241A64:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00241B88; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != 0ull; st32((c.r[2].w[0] + 12u), 0u);  if (t) { goto L_00241C88; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_00241A7C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00241CA4; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00241CA4; } }
L_00241A9C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 1164u);
    set32(c.r[5], c.r[29].w[0] + 1160u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[29].w[0] + 1160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241ADCu); st32((c.r[29].w[0] + 1164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 251u, depth + 1u); else { c.pc = 0x002461A0u; return; } if (c.pc != 0x00241ADCu) [[unlikely]] return; }
L_00241ADC:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[16].d[0] & 63ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[3].w[0] - c.r[16].w[0]);  if (t) { goto L_00241B48; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241B10u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x00241B10u) [[unlikely]] return; }
L_00241B10:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241B24u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 133u, depth + 1u); else { c.pc = 0x002212F0u; return; } if (c.pc != 0x00241B24u) [[unlikely]] return; }
L_00241B24:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241B38u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00241B38u) [[unlikely]] return; }
L_00241B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241B40u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x00241B40u) [[unlikely]] return; }
L_00241B40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 8u)));  if (t) { goto L_00241B60; } }
L_00241B48:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241B58u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 133u, depth + 1u); else { c.pc = 0x002212F0u; return; } if (c.pc != 0x00241B58u) [[unlikely]] return; }
L_00241B58:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 2;
L_00241B60:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[18].d[0];  if (t) { goto L_00241CD8; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00241DD8; } }
L_00241B88:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241B94u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0008(c, 105u, depth + 1u); else { c.pc = 0x00220F38u; return; } if (c.pc != 0x00241B94u) [[unlikely]] return; }
L_00241B94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] - 3792u)));
    set32(c.r[3], ld32((c.r[2].w[0] - 3796u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_00241BEC; } }
L_00241BAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 3792u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] - 3800u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    st32((c.r[3].w[0] - 3792u), c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00241BE0; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00241BE0:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00241DD8; } }
L_00241BEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[18], ld32((c.r[2].w[0] - 3800u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 3796u), c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] >> 2);
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241C1Cu); st32((c.r[2].w[0] - 3792u), 0u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00241C1Cu) [[unlikely]] return; }
L_00241C1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[3].w[0] - 3800u), c.r[2].w[0]);  if (t) { goto L_00241C78; } }
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
L_00241C40:
    set32(c.r[6], ld32((c.r[4].w[0] - 3792u)));
    set32(c.r[5], ld32((c.r[2].w[0] - 3800u)));
    set32(c.r[7], c.r[6].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[3].w[0] - 3792u), c.r[7].w[0]);  if (t) { goto L_00241C68; } }
    set32(c.r[5], ld32((c.r[8].w[0])));
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.budget -= 3;
L_00241C68:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[5].d[0] = c.r[9].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241C40u | kUnwind; return; } goto L_00241C40; } }
L_00241C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241C80u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00241C80u) [[unlikely]] return; }
L_00241C80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241BACu | kUnwind; return; } goto L_00241BAC; } }
L_00241C88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 1168u);
    set32(c.r[5], c.r[5].w[0] - 29560u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241C9Cu); st32((c.r[29].w[0] + 1168u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0011(c, 249u, depth + 1u); else { c.pc = 0x00246160u; return; } if (c.pc != 0x00241C9Cu) [[unlikely]] return; }
L_00241C9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241A7Cu | kUnwind; return; } goto L_00241A7C; } }
L_00241CA4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00241CB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241CB4u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00241CB4u) [[unlikely]] return; }
L_00241CB4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 8u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241CCCu); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0002(c, 149u, depth + 1u); else { c.pc = 0x0020AEE0u; return; } if (c.pc != 0x00241CCCu) [[unlikely]] return; }
L_00241CCC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241A9Cu | kUnwind; return; } goto L_00241A9C; } }
L_00241CD8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241CE4u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0008(c, 105u, depth + 1u); else { c.pc = 0x00220F38u; return; } if (c.pc != 0x00241CE4u) [[unlikely]] return; }
L_00241CE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] - 3792u)));
    set32(c.r[3], ld32((c.r[2].w[0] - 3796u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_00241D3C; } }
L_00241CFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 3792u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] - 3800u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    st32((c.r[3].w[0] - 3792u), c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00241D30; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00241D30:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00241DD8; } }
L_00241D3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[18], ld32((c.r[2].w[0] - 3800u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 3796u), c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] >> 2);
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241D6Cu); st32((c.r[2].w[0] - 3792u), 0u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00241D6Cu) [[unlikely]] return; }
L_00241D6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[3].w[0] - 3800u), c.r[2].w[0]);  if (t) { goto L_00241DC8; } }
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
L_00241D90:
    set32(c.r[6], ld32((c.r[4].w[0] - 3792u)));
    set32(c.r[5], ld32((c.r[2].w[0] - 3800u)));
    set32(c.r[7], c.r[6].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[3].w[0] - 3792u), c.r[7].w[0]);  if (t) { goto L_00241DB8; } }
    set32(c.r[5], ld32((c.r[8].w[0])));
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.budget -= 3;
L_00241DB8:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[5].d[0] = c.r[9].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241D90u | kUnwind; return; } goto L_00241D90; } }
L_00241DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241DD0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00241DD0u) [[unlikely]] return; }
L_00241DD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241CFCu | kUnwind; return; } goto L_00241CFC; } }
L_00241DD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1200u);  c.pc = t; return; }
L_00241E00:
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00241EBC; } }
    c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00241E20; } }
    c.r[3].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00241E20:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_00241E38; } }
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00241E38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00241E50; } }
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_00241E50:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 255ull;  if (t) { goto L_00241EB8; } }
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 4;
L_00241E68:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00241EA0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[3].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00241EA0; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241E68u | kUnwind; return; } goto L_00241E68; } }
    c.budget -= 1;
L_00241EA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
L_00241EB8:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00241EBC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00241ED0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_00241EF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 12u), 0u);  if (t) { goto L_00241F38; } }
    set32(c.r[5], c.r[29].w[0] + 14u);
    c.budget -= 1;
L_00241F08:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[4].d[0] = ld16((c.r[29].w[0] + 12u));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00241F40; } }
L_00241F28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241F08u | kUnwind; return; } goto L_00241F08; } }
    c.budget -= 1;
L_00241F38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 12u)));  if (t) { goto L_00241F60; } }
L_00241F40:
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241F28u | kUnwind; return; } goto L_00241F28; } }
    c.budget -= 1;
L_00241F60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00241F70:
    set32(c.r[29], c.r[29].w[0] - 688u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[21], ld32((c.r[28].w[0] - 30656u)));
    c.r[2].d[0] = c.r[21].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00241FF0; } }
L_00241FC4:
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 2;
L_00241FCC:
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00241FF8; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241FCCu | kUnwind; return; } goto L_00241FCC; } }
L_00241FF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00242214; } }
L_00241FF8:
    set32(c.r[6], c.r[29].w[0] + 416u);
    set32(c.r[7], c.r[29].w[0] + 160u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
L_00242004:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[2].d[0] = c.r[4].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00242024; } }
    c.r[1].d[0] = c.r[4].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00242024; } }
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_00242024:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00242038; } }
    set32(c.r[2], c.r[4].w[0] - 32u);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 3;
L_00242038:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242004u | kUnwind; return; } goto L_00242004; } }
    c.r[20].d[0] = c.r[21].d[0] << 32;
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 32);
    st32((c.r[29].w[0] + 680u), c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[4], c.r[20].w[0] + 48u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024206Cu); set32(c.r[5], c.r[29].w[0] + 680u);  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00241EF0u; return; } if (c.pc != 0x0024206Cu) [[unlikely]] return; }
L_0024206C:
    mmi::divu(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[18].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[18].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002420C8; } }
    c.r[2].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00242084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00242158; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00242090:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002421E4; } }
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[21].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], 0u + 1u);
    st32((c.r[22].w[0]), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    st32((c.r[23].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[30].w[0]), c.r[3].w[0]);  if (t) { goto L_00242214; } }
L_002420C8:
    set32(c.r[4], c.r[20].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002420D4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002420D4u) [[unlikely]] return; }
L_002420D4:
    set32(c.r[5], ld32((c.r[29].w[0] + 680u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002420E4u); set32(c.r[4], c.r[20].w[0] + 49u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x002420E4u) [[unlikely]] return; }
L_002420E4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00242110; } }
    c.r[2].d[0] = c.r[21].d[0] << 32;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242108u); set32(c.r[4], c.r[2].w[0] + 40u);  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00242108u) [[unlikely]] return; }
L_00242108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242090u | kUnwind; return; } goto L_00242090; } }
L_00242110:
    set32(c.r[4], c.r[20].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024211Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x0024211Cu) [[unlikely]] return; }
L_0024211C:
    set32(c.r[5], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024212Cu); set32(c.r[4], c.r[20].w[0] + 49u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x0024212Cu) [[unlikely]] return; }
L_0024212C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00242150; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002420C8u | kUnwind; return; } goto L_002420C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242084u | kUnwind; return; } goto L_00242084; } }
L_00242150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242090u | kUnwind; return; } goto L_00242090; } }
L_00242158:
    set32(c.r[4], c.r[20].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242164u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00242164u) [[unlikely]] return; }
L_00242164:
    set32(c.r[5], ld32((c.r[29].w[0] + 680u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242174u); set32(c.r[4], c.r[20].w[0] + 49u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00242174u) [[unlikely]] return; }
L_00242174:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002421A0; } }
    c.r[2].d[0] = c.r[21].d[0] << 32;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242198u); set32(c.r[4], c.r[2].w[0] + 40u);  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00242198u) [[unlikely]] return; }
L_00242198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242090u | kUnwind; return; } goto L_00242090; } }
L_002421A0:
    set32(c.r[4], c.r[20].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002421ACu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002421ACu) [[unlikely]] return; }
L_002421AC:
    set32(c.r[5], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002421BCu); set32(c.r[4], c.r[20].w[0] + 49u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x002421BCu) [[unlikely]] return; }
L_002421BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002421DC; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242158u | kUnwind; return; } goto L_00242158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242090u | kUnwind; return; } goto L_00242090; } }
L_002421DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242090u | kUnwind; return; } goto L_00242090; } }
L_002421E4:
    c.r[3].d[0] = c.r[21].d[0] << 32;
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[21], ld32((c.r[3].w[0] + 68u)));
    c.r[2].d[0] = c.r[21].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241FC4u | kUnwind; return; } goto L_00241FC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241FF0u | kUnwind; return; } goto L_00241FF0; } }
L_00242214:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 688u);  c.pc = t; return; }
L_00242250:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[3].w[0] - 3888u)));
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_00242270; } }
L_00242268:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00242288; } }
L_00242270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242278u);  if (depth < kMaxDepth) unit_0008(c, 105u, depth + 1u); else { c.pc = 0x00220F38u; return; } if (c.pc != 0x00242278u) [[unlikely]] return; }
L_00242278:
    set32(c.r[4], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 3888u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242268u | kUnwind; return; } goto L_00242268; } }
L_00242288:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00242290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[28].w[0] - 30640u), 0u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00242300; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], c.r[7].w[0] - 3776u);
    set32(c.r[6], c.r[6].w[0] - 3248u);
    set32(c.r[5], c.r[5].w[0] - 3952u);
    c.budget -= 6;
L_002422C4:
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] != 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0024238C; } }
    c.budget -= 1;
L_002422D8:
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[7], c.r[7].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 30640u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002422C4u | kUnwind; return; } goto L_002422C4; } }
L_00242300:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 3952u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242314u); set32(c.r[5], c.r[5].w[0] - 29528u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x00242314u) [[unlikely]] return; }
L_00242314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002423B8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 30664u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00242324:
    set32(c.r[5], ld32((c.r[28].w[0] - 30640u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00242384; } }
    set32(c.r[2], c.r[5].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 3776u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ 92ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00242384; } }
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[4], 0u + 92u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] - 3248u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[28].w[0] - 30640u), c.r[2].w[0]);
    c.budget -= 10;
L_00242384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00242408; } }
L_0024238C:
    c.r[3].d[0] = ld16((c.r[7].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] ^ 58ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[8].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 8;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002422D8u | kUnwind; return; } goto L_002422D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002422D8u | kUnwind; return; } goto L_002422D8; } }
    c.budget -= 1;
L_002423B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 3952u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002423CCu); set32(c.r[5], c.r[5].w[0] - 29520u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x002423CCu) [[unlikely]] return; }
L_002423CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002423E0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30664u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242324u | kUnwind; return; } goto L_00242324; } }
L_002423E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 3952u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002423F4u); set32(c.r[5], c.r[5].w[0] - 29512u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x002423F4u) [[unlikely]] return; }
L_002423F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242324u | kUnwind; return; } goto L_00242324; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30664u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242324u | kUnwind; return; } goto L_00242324; } }
L_00242408:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00242420:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[2].w[0] - 3792u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00242598; } }
L_00242444:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[3].w[0] - 3824u)));
    set32(c.r[2], ld32((c.r[2].w[0] - 3828u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002425C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 3836u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002424A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242478u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00242478u) [[unlikely]] return; }
L_00242478:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00242494; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] - 3828u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242494u); set32(c.r[5], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0010(c, 275u, depth + 1u); else { c.pc = 0x00242D00u; return; } if (c.pc != 0x00242494u) [[unlikely]] return; }
L_00242494:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 3840u);
    st32((c.r[3].w[0] - 3836u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 5;
L_002424A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002424B4u); set32(c.r[4], ld32((c.r[2].w[0] - 3836u)));  if (depth < kMaxDepth) unit_0010(c, 267u, depth + 1u); else { c.pc = 0x00242B50u; return; } if (c.pc != 0x002424B4u) [[unlikely]] return; }
L_002424B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 3824u)));
    set32(c.r[2], ld32((c.r[2].w[0] - 3828u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0024260C; } }
L_002424CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[2], ld32((c.r[2].w[0] - 3840u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
L_002424E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] - 3792u)));
    set32(c.r[3], ld32((c.r[2].w[0] - 3796u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_00242638; } }
L_00242500:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 3792u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[4].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] - 3800u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[3].w[0] - 3792u), c.r[5].w[0]);  if (t) { goto L_0024252C; } }
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_0024252C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 3836u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002426D0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002426D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242550u);  if (depth < kMaxDepth) unit_0010(c, 256u, depth + 1u); else { c.pc = 0x00242820u; return; } if (c.pc != 0x00242550u) [[unlikely]] return; }
L_00242550:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 3824u)));
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_0024255C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 3836u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00242584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242574u);  if (depth < kMaxDepth) unit_0010(c, 249u, depth + 1u); else { c.pc = 0x00242700u; return; } if (c.pc != 0x00242574u) [[unlikely]] return; }
L_00242574:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 3828u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_0024258C; } }
L_00242584:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 3828u)));
    c.budget -= 2;
L_0024258C:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242444u | kUnwind; return; } goto L_00242444; } }
L_00242598:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[3].w[0] - 3792u)));
    set32(c.r[2], ld32((c.r[2].w[0] - 3800u)));
    set32(c.r[5], c.r[4].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[3].w[0] - 3792u), c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), 0u);  if (t) { goto L_002426DC; } }
L_002425C8:
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 3824u), c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], ld32((c.r[2].w[0] - 3840u)));
    set32(c.r[4], 0u + 56u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002425F4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x002425F4u) [[unlikely]] return; }
L_002425F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002424B4u | kUnwind; return; } goto L_002424B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242604u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 277u, depth + 1u); else { c.pc = 0x00242D70u; return; } if (c.pc != 0x00242604u) [[unlikely]] return; }
L_00242604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002424B4u | kUnwind; return; } goto L_002424B4; } }
L_0024260C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 3836u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002424CCu | kUnwind; return; } goto L_002424CC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002424CCu | kUnwind; return; } goto L_002424CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242630u);  if (depth < kMaxDepth) unit_0010(c, 264u, depth + 1u); else { c.pc = 0x00242990u; return; } if (c.pc != 0x00242630u) [[unlikely]] return; }
L_00242630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002424E8u | kUnwind; return; } goto L_002424E8; } }
L_00242638:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[18], ld32((c.r[2].w[0] - 3800u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] - 3796u), c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] >> 2);
    set32(c.r[4], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242668u); st32((c.r[2].w[0] - 3792u), 0u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00242668u) [[unlikely]] return; }
L_00242668:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[3].w[0] - 3800u), c.r[2].w[0]);  if (t) { goto L_002426C0; } }
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
L_0024268C:
    set32(c.r[6], ld32((c.r[4].w[0] - 3792u)));
    set32(c.r[5], ld32((c.r[2].w[0] - 3800u)));
    set32(c.r[7], c.r[6].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[3].w[0] - 3792u), c.r[7].w[0]);  if (t) { goto L_002426B0; } }
    set32(c.r[5], ld32((c.r[8].w[0])));
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.budget -= 2;
L_002426B0:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[5].d[0] = c.r[9].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024268Cu | kUnwind; return; } goto L_0024268C; } }
L_002426C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002426C8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x002426C8u) [[unlikely]] return; }
L_002426C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242500u | kUnwind; return; } goto L_00242500; } }
L_002426D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] - 3824u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024255Cu | kUnwind; return; } goto L_0024255C; } }
L_002426DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00242700:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[4].w[0] + 4u)));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { const bool t = c.r[21].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002427EC; } }
    set32(c.r[20], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002427E4; } }
    set32(c.r[19], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002427DC; } }
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002427D4; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002427CC; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002427C4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0024278C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242780u);  if (depth < kMaxDepth) unit_0010(c, 249u, depth + 1u); else { c.pc = 0x00242700u; return; } if (c.pc != 0x00242780u) [[unlikely]] return; }
L_00242780:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_00242790; } }
L_0024278C:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_00242790:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_00242798:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002427A0:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002427A8:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002427B0:
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_002427B8:
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002427F0; } }
L_002427C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 12u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242798u | kUnwind; return; } goto L_00242798; } }
L_002427CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 12u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002427A0u | kUnwind; return; } goto L_002427A0; } }
L_002427D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 12u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002427A8u | kUnwind; return; } goto L_002427A8; } }
L_002427DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 12u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002427B0u | kUnwind; return; } goto L_002427B0; } }
L_002427E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 12u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002427B8u | kUnwind; return; } goto L_002427B8; } }
L_002427EC:
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    c.budget -= 1;
L_002427F0:
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
L_00242820:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[4].w[0] + 4u)));
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    { const bool t = c.r[21].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00242960; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00242960; } }
    set32(c.r[20], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00242958; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00242958; } }
    set32(c.r[19], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00242950; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00242950; } }
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00242948; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00242948; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00242940; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00242940; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00242938; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00242938; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00242930; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00242930; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002428F4u);  if (depth < kMaxDepth) unit_0010(c, 256u, depth + 1u); else { c.pc = 0x00242820u; return; } if (c.pc != 0x002428F4u) [[unlikely]] return; }
L_002428F4:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_002428FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_00242904:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_0024290C:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_00242914:
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_0024291C:
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_00242924:
    set32(c.r[2], ld32((c.r[22].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00242964; } }
L_00242930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002428FCu | kUnwind; return; } goto L_002428FC; } }
L_00242938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242904u | kUnwind; return; } goto L_00242904; } }
L_00242940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024290Cu | kUnwind; return; } goto L_0024290C; } }
L_00242948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242914u | kUnwind; return; } goto L_00242914; } }
L_00242950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024291Cu | kUnwind; return; } goto L_0024291C; } }
L_00242958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242924u | kUnwind; return; } goto L_00242924; } }
L_00242960:
    set32(c.r[2], ld32((c.r[22].w[0] + 16u)));
    c.budget -= 1;
L_00242964:
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
L_00242990:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00242B20; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00242B20; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00242B20; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00242B04; } }
    set32(c.r[6], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00242B04; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00242B04; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00242AE4; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00242AE4; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00242AE4; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00242AC4; } }
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00242AC4; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00242AC4; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00242AA4; } }
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00242AA4; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00242AA4; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00242A84; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00242A84; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00242A84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242A7Cu);  if (depth < kMaxDepth) unit_0010(c, 264u, depth + 1u); else { c.pc = 0x00242990u; return; } if (c.pc != 0x00242A7Cu) [[unlikely]] return; }
L_00242A7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00242A9C; } }
L_00242A84:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_00242A9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00242ABC; } }
L_00242AA4:
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_00242ABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00242ADC; } }
L_00242AC4:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_00242ADC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00242AFC; } }
L_00242AE4:
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
L_00242AFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00242B3C; } }
L_00242B04:
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242AFCu | kUnwind; return; } goto L_00242AFC; } }
L_00242B20:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
L_00242B3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00242B50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00242C4C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00242BEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242B88u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00242B88u) [[unlikely]] return; }
L_00242B88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00242BE0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_00242BB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00242BB8; } }
L_00242BB0:
    set32(c.r[2], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_00242BB8:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242BDCu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00242BDCu) [[unlikely]] return; }
L_00242BDC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00242BE0:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
L_00242BEC:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00242CAC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00242C3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242C18u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00242C18u) [[unlikely]] return; }
L_00242C18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00242C30; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242C30u); set32(c.r[5], c.r[3].w[0] << 1);  if (depth < kMaxDepth) unit_0010(c, 275u, depth + 1u); else { c.pc = 0x00242D00u; return; } if (c.pc != 0x00242C30u) [[unlikely]] return; }
L_00242C30:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 3;
L_00242C3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242C44u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0010(c, 267u, depth + 1u); else { c.pc = 0x00242B50u; return; } if (c.pc != 0x00242C44u) [[unlikely]] return; }
L_00242C44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00242CEC; } }
L_00242C4C:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00242CE8; } }
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 44u), 0u);
    st32((c.r[2].w[0] + 48u), 0u);
    st32((c.r[2].w[0] + 52u), 0u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00242CE8; } }
L_00242CAC:
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[4], 0u + 56u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242CD0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00242CD0u) [[unlikely]] return; }
L_00242CD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00242CE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242CE0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 277u, depth + 1u); else { c.pc = 0x00242D70u; return; } if (c.pc != 0x00242CE0u) [[unlikely]] return; }
L_00242CE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242C44u | kUnwind; return; } goto L_00242C44; } }
L_00242CE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00242CEC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00242D00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00242D24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_00242D2C; } }
L_00242D24:
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 2;
L_00242D2C:
    st32((c.r[16].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242D50u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00242D50u) [[unlikely]] return; }
L_00242D50:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00242D70:
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 52u), 0u);  c.pc = t; return; }
L_00242DB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00242E18; } }
L_00242DC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00242E08; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00242E08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242E08u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00242E08u) [[unlikely]] return; }
L_00242E08:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242DC8u | kUnwind; return; } goto L_00242DC8; } }
    c.budget -= 1;
L_00242E18:
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00242F5C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00242E80; } }
L_00242E30:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00242E70; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00242E70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242E70u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00242E70u) [[unlikely]] return; }
L_00242E70:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242E30u | kUnwind; return; } goto L_00242E30; } }
    c.budget -= 1;
L_00242E80:
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00242F5C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00242EE8; } }
L_00242E98:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00242ED8; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00242ED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242ED8u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00242ED8u) [[unlikely]] return; }
L_00242ED8:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242E98u | kUnwind; return; } goto L_00242E98; } }
    c.budget -= 1;
L_00242EE8:
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00242F5C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00242F1C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_00242F04:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00242F5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242F14u);  if (depth < kMaxDepth) unit_0010(c, 278u, depth + 1u); else { c.pc = 0x00242DB0u; return; } if (c.pc != 0x00242F14u) [[unlikely]] return; }
L_00242F14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00242F60; } }
L_00242F1C:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242F48u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0010(c, 289u, depth + 1u); else { c.pc = 0x00242F70u; return; } if (c.pc != 0x00242F48u) [[unlikely]] return; }
L_00242F48:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242F1Cu | kUnwind; return; } goto L_00242F1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242F04u | kUnwind; return; } goto L_00242F04; } }
L_00242F5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00242F60:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00242F70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00242FB8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00242FA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242FA0u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00242FA0u) [[unlikely]] return; }
L_00242FA0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00242FB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242FB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00242FB8u) [[unlikely]] return; }
L_00242FB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00242FD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[28].w[0] - 30648u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00242FF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002430B8; } }
L_00242FF0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30656u)));
    set32(c.r[4], c.r[29].w[0] + 40u);
    set32(c.r[6], c.r[29].w[0] + 36u);
    set32(c.r[7], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 32u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024300Cu); st32((c.r[29].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 252u, depth + 1u); else { c.pc = 0x002461C0u; return; } if (c.pc != 0x0024300Cu) [[unlikely]] return; }
L_0024300C:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024301Cu); set32(c.r[4], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x002431F0u; return; } if (c.pc != 0x0024301Cu) [[unlikely]] return; }
L_0024301C:
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 30656u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00243078; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30652u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002430A4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 64u)));
    st32((c.r[2].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    st32((c.r[2].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 8;
L_00243058:
    set32(c.r[4], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243064u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 299u, depth + 1u); else { c.pc = 0x002430E0u; return; } if (c.pc != 0x00243064u) [[unlikely]] return; }
L_00243064:
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243070u); set32(c.r[5], c.r[29].w[0] + 28u);  if (depth < kMaxDepth) unit_0010(c, 298u, depth + 1u); else { c.pc = 0x002430D0u; return; } if (c.pc != 0x00243070u) [[unlikely]] return; }
L_00243070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002430B8; } }
L_00243078:
    set32(c.r[2], ld32((c.r[28].w[0] - 30652u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00243098; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 68u)));
    st32((c.r[28].w[0] - 30656u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 68u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 64u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243058u | kUnwind; return; } goto L_00243058; } }
L_00243098:
    st32((c.r[28].w[0] - 30652u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30656u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243058u | kUnwind; return; } goto L_00243058; } }
L_002430A4:
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    st32((c.r[28].w[0] - 30652u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 68u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243058u | kUnwind; return; } goto L_00243058; } }
L_002430B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002430D0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_002430E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00243144; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0024312C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024310Cu); set32(c.r[4], c.r[17].w[0] + 60u);  if (depth < kMaxDepth) unit_0011(c, 260u, depth + 1u); else { c.pc = 0x002462E0u; return; } if (c.pc != 0x0024310Cu) [[unlikely]] return; }
L_0024310C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243114u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 258u, depth + 1u); else { c.pc = 0x002462A0u; return; } if (c.pc != 0x00243114u) [[unlikely]] return; }
L_00243114:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243120u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 305u, depth + 1u); else { c.pc = 0x00243160u; return; } if (c.pc != 0x00243120u) [[unlikely]] return; }
L_00243120:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024312Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x0024312Cu) [[unlikely]] return; }
L_0024312C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00243144; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243144u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00243144u) [[unlikely]] return; }
L_00243144:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00243160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002431D8; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[1].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002431B8; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
L_00243198:
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 12u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243198u | kUnwind; return; } goto L_00243198; } }
    c.budget -= 1;
L_002431B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002431C0u); set32(c.r[4], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 256u, depth + 1u); else { c.pc = 0x00246260u; return; } if (c.pc != 0x002431C0u) [[unlikely]] return; }
L_002431C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002431D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002431D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x002431D8u) [[unlikely]] return; }
L_002431D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002431F0:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00243200:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30652u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0024326C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243244u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00243244u) [[unlikely]] return; }
L_00243244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024325C; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 30652u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024325Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 237u, depth + 1u); else { c.pc = 0x00245F50u; return; } if (c.pc != 0x0024325Cu) [[unlikely]] return; }
L_0024325C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30652u)));
    st32((c.r[3].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30652u), c.r[2].w[0]);  if (t) { goto L_00243294; } }
L_0024326C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243274u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00243274u) [[unlikely]] return; }
L_00243274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024328C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024328Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0011(c, 237u, depth + 1u); else { c.pc = 0x00245F50u; return; } if (c.pc != 0x0024328Cu) [[unlikely]] return; }
L_0024328C:
    st32((c.r[28].w[0] - 30656u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 30652u), c.r[2].w[0]);
    c.budget -= 2;
L_00243294:
    set32(c.r[16], ld32((c.r[28].w[0] - 30652u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002432B0u); set32(c.r[4], c.r[16].w[0] + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002432B0u) [[unlikely]] return; }
L_002432B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0011(c, 18u, depth); } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 30648u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_002432E8; } }
L_002432CC:
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002432CCu | kUnwind; return; } goto L_002432CC; } }
L_002432E8:
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_002432FC; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_002432FC:
    set32(c.r[18], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[18].w[0] << 1);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024330Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0024330Cu) [[unlikely]] return; }
L_0024330C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 11344u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243328u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x00243328u) [[unlikely]] return; }
L_00243328:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00243358; } }
L_00243338:
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243338u | kUnwind; return; } goto L_00243338; } }
    c.budget -= 1;
L_00243358:
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0024336C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0024336C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[2].w[0] << 1);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243380u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x00243380u) [[unlikely]] return; }
L_00243380:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00243384:
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 2u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243384u | kUnwind; return; } goto L_00243384; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00243AD8; } }
L_002433B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_002433C0:
    c.r[18].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[19], c.r[16].w[0] + 4u);  if (t) { goto L_00243AF8; } }
L_002433D8:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_002433E8:
    c.r[17].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);  if (t) { goto L_00243B18; } }
L_002433FC:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_0024340C:
    c.r[20].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 56);  if (t) { goto L_00243B38; } }
L_00243420:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_00243430:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 80u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (t) { [[clang::musttail]] return unit_0011(c, 18u, depth); } }
    c.r[3].d[0] = c.r[17].d[0] << 56;
    set32(c.r[2], 0u + 65u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0011(c, 18u, depth); } }
    c.r[3].d[0] = c.r[20].d[0] << 56;
    set32(c.r[2], 0u + 75u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0011(c, 18u, depth); } }
    c.r[17].d[0] = c.r[4].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    set32(c.r[2], c.r[17].w[0] - 48u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0011(c, 18u, depth); } }
    c.r[2].d[0] = c.r[30].d[0] & 65535ull;
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002434F0; } }
    set32(c.r[18], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002434B8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002434B8u) [[unlikely]] return; }
L_002434B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_00243508; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[6], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002434E8u); set32(c.r[5], c.r[2].w[0] + 208u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002434E8u) [[unlikely]] return; }
L_002434E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_0024350C; } }
L_002434F0:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002434FCu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002434FCu) [[unlikely]] return; }
L_002434FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
L_00243508:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_0024350C:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], ld32((c.r[29].w[0] + 208u)));  if (t) { goto L_00243568; } }
    set32(c.r[18], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 204u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243530u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x00243530u) [[unlikely]] return; }
L_00243530:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_00243580; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[6], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00243560u); set32(c.r[5], c.r[2].w[0] + 204u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00243560u) [[unlikely]] return; }
L_00243560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], ld32((c.r[29].w[0] + 204u)));  if (t) { goto L_00243584; } }
L_00243568:
    set32(c.r[4], c.r[29].w[0] + 204u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243574u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x00243574u) [[unlikely]] return; }
L_00243574:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
L_00243580:
    set32(c.r[22], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 1;
L_00243584:
    set32(c.r[2], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00243598; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[23], 0u + 1u);  if (t) { goto L_002435FC; } }
L_00243598:
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243B74; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243B58; } }
    set32(c.r[17], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002435C8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x002435C8u) [[unlikely]] return; }
L_002435C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_002435F8; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[6], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002435F8u); set32(c.r[5], c.r[2].w[0] + 200u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002435F8u) [[unlikely]] return; }
L_002435F8:
    set32(c.r[23], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_002435FC:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_00243628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024360Cu); set32(c.r[4], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_000F(c, 418u, depth + 1u); else { c.pc = 0x0023FC90u; return; } if (c.pc != 0x0024360Cu) [[unlikely]] return; }
L_0024360C:
    c.r[19].d[0] = c.r[19].d[0] ^ c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243618u); set32(c.r[4], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_000F(c, 418u, depth + 1u); else { c.pc = 0x0023FC90u; return; } if (c.pc != 0x00243618u) [[unlikely]] return; }
L_00243618:
    c.r[22].d[0] = c.r[22].d[0] ^ c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243624u); set32(c.r[4], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_000F(c, 418u, depth + 1u); else { c.pc = 0x0023FC90u; return; } if (c.pc != 0x00243624u) [[unlikely]] return; }
L_00243624:
    c.r[23].d[0] = c.r[23].d[0] ^ c.r[2].d[0];
    c.budget -= 1;
L_00243628:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024363Cu); st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x0024363Cu) [[unlikely]] return; }
L_0024363C:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024364Cu); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x0024364Cu) [[unlikely]] return; }
L_0024364C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[22].w[0] << 1);
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243678u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00243678u) [[unlikely]] return; }
L_00243678:
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00243B8C; } }
L_0024368C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[17].d[0];  if (t) { goto L_00243BD4; } }
L_00243694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024369Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 235u, depth + 1u); else { c.pc = 0x00245F30u; return; } if (c.pc != 0x0024369Cu) [[unlikely]] return; }
L_0024369C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002436A8u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0011(c, 235u, depth + 1u); else { c.pc = 0x00245F30u; return; } if (c.pc != 0x002436A8u) [[unlikely]] return; }
L_002436A8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_002436E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002436B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 235u, depth + 1u); else { c.pc = 0x00245F30u; return; } if (c.pc != 0x002436B8u) [[unlikely]] return; }
L_002436B8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002436C4u); set32(c.r[4], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_0011(c, 235u, depth + 1u); else { c.pc = 0x00245F30u; return; } if (c.pc != 0x002436C4u) [[unlikely]] return; }
L_002436C4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_002436E0; } }
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002436DCu); set32(c.r[6], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 120u, depth + 1u); else { c.pc = 0x002449B0u; return; } if (c.pc != 0x002436DCu) [[unlikely]] return; }
L_002436DC:
    c.budget -= 1;
L_002436E0:
    set32(c.r[18], c.r[18].w[0] + 12u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243694u | kUnwind; return; } goto L_00243694; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { goto L_00243BD8; } }
L_002436F4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243700u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x00243700u) [[unlikely]] return; }
L_00243700:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[18].d[0]; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_00243748; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[5], c.r[20].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[17].w[0] - c.r[18].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00243728u); set32(c.r[4], c.r[16].w[0] + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00243728u) [[unlikely]] return; }
L_00243728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00243748; } }
L_00243730:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024373Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0024373Cu) [[unlikely]] return; }
L_0024373C:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
L_00243748:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_00243798; } }
    c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00243798; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00243760:
    set32(c.r[2], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[17].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243774u); set32(c.r[4], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_000F(c, 418u, depth + 1u); else { c.pc = 0x0023FC90u; return; } if (c.pc != 0x00243774u) [[unlikely]] return; }
L_00243774:
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    c.r[4].d[0] = c.r[17].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].d[0] ^ c.r[2].d[0];
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243760u | kUnwind; return; } goto L_00243760; } }
L_00243798:
    c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_002438C0; } }
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], c.r[19].w[0] - 8u);  if (t) { goto L_00243888; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002437B4:
    set32(c.r[6], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0] + 4u));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0] + 6u));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0] + 8u));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0] + 10u));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = ld16((c.r[6].w[0] + 12u));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = ld16((c.r[6].w[0] + 14u));
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[6], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[5].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 52;
    { const bool t = c.r[5].d[0] != 0ull; st8((c.r[6].w[0] + 7u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002437B4u | kUnwind; return; } goto L_002437B4; } }
    c.budget -= 1;
L_00243888:
    c.r[1].d[0] = c.r[4].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002438C0; } }
    set32(c.r[6], c.r[4].w[0] << 1);
    c.budget -= 1;
L_00243898:
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243898u | kUnwind; return; } goto L_00243898; } }
L_002438C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002438C8u); set32(c.r[4], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_0011(c, 258u, depth + 1u); else { c.pc = 0x002462A0u; return; } if (c.pc != 0x002438C8u) [[unlikely]] return; }
L_002438C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], c.r[22].w[0] << 2);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[18], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_00243AD0; } }
    set32(c.r[2], c.r[23].w[0] - 1u);
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 3;
L_002438F0:
    set32(c.r[2], c.r[17].w[0] + c.r[23].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], c.r[2].w[0] - 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[19].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243960; } }
    set32(c.r[17], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 196u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243928u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x00243928u) [[unlikely]] return; }
L_00243928:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_00243978; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[6], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00243958u); set32(c.r[5], c.r[2].w[0] + 196u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00243958u) [[unlikely]] return; }
L_00243958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00243978; } }
L_00243960:
    set32(c.r[4], c.r[29].w[0] + 196u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024396Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0024396Cu) [[unlikely]] return; }
L_0024396C:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
L_00243978:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 196u)));  if (t) { goto L_00243990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243988u); set32(c.r[4], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_000F(c, 418u, depth + 1u); else { c.pc = 0x0023FC90u; return; } if (c.pc != 0x00243988u) [[unlikely]] return; }
L_00243988:
    c.r[17].d[0] = c.r[17].d[0] ^ c.r[2].d[0];
    c.budget -= 2;
L_00243990:
    set32(c.r[2], c.r[29].w[0] + 188u);
    st32((c.r[29].w[0] + 184u), c.r[19].w[0]);
    set32(c.r[4], c.r[16].w[0] + 48u);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    st32((c.r[29].w[0] + 212u), c.r[18].w[0]);
    set32(c.r[20], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002439B0u); set32(c.r[5], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_0010(c, 199u, depth + 1u); else { c.pc = 0x00241EF0u; return; } if (c.pc != 0x002439B0u) [[unlikely]] return; }
L_002439B0:
    mmi::divu(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[19].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[19].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00243C40; } }
    c.budget -= 1;
L_002439C8:
    c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00243A80; } }
    c.budget -= 1;
L_002439D8:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002439E4u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x002439E4u) [[unlikely]] return; }
L_002439E4:
    set32(c.r[5], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002439F4u); set32(c.r[4], c.r[16].w[0] + 49u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x002439F4u) [[unlikely]] return; }
L_002439F4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243A28; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243A10u); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00243A10u) [[unlikely]] return; }
L_00243A10:
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243A1Cu); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0011(c, 119u, depth + 1u); else { c.pc = 0x00244990u; return; } if (c.pc != 0x00243A1Cu) [[unlikely]] return; }
L_00243A1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00243AA8; } }
    c.budget -= 1;
L_00243A28:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243A34u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00243A34u) [[unlikely]] return; }
L_00243A34:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243A44u); set32(c.r[4], c.r[16].w[0] + 49u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00243A44u) [[unlikely]] return; }
L_00243A44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243F70; } }
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243A58u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00243A58u) [[unlikely]] return; }
L_00243A58:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243A68u); set32(c.r[4], c.r[16].w[0] + 49u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00243A68u) [[unlikely]] return; }
L_00243A68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243FC0; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002439D8u | kUnwind; return; } goto L_002439D8; } }
L_00243A80:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[4], c.r[16].w[0] + 40u);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243A94u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0011(c, 33u, depth + 1u); else { c.pc = 0x00244290u; return; } if (c.pc != 0x00243A94u) [[unlikely]] return; }
L_00243A94:
    set32(c.r[4], c.r[16].w[0] + 40u);
    set32(c.r[5], c.r[29].w[0] + 212u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243AA4u); set32(c.r[6], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0011(c, 120u, depth + 1u); else { c.pc = 0x002449B0u; return; } if (c.pc != 0x00243AA4u) [[unlikely]] return; }
L_00243AA4:
    c.budget -= 1;
L_00243AA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243AA8u | kUnwind; return; } goto L_00243AA8; } }
    set32(c.r[22], c.r[22].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002438F0u | kUnwind; return; } goto L_002438F0; } }
L_00243AD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0011(c, 20u, depth); } }
L_00243AD8:
    set32(c.r[25], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00243AE8u); set32(c.r[4], c.r[16].w[0] + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00243AE8u) [[unlikely]] return; }
L_00243AE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002433B0u | kUnwind; return; } goto L_002433B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002433C0u | kUnwind; return; } goto L_002433C0; } }
L_00243AF8:
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00243B08u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00243B08u) [[unlikely]] return; }
L_00243B08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002433D8u | kUnwind; return; } goto L_002433D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002433E8u | kUnwind; return; } goto L_002433E8; } }
L_00243B18:
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00243B28u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00243B28u) [[unlikely]] return; }
L_00243B28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002433FCu | kUnwind; return; } goto L_002433FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024340Cu | kUnwind; return; } goto L_0024340C; } }
L_00243B38:
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00243B48u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00243B48u) [[unlikely]] return; }
L_00243B48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243420u | kUnwind; return; } goto L_00243420; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243430u | kUnwind; return; } goto L_00243430; } }
L_00243B58:
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243B64u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x00243B64u) [[unlikely]] return; }
L_00243B64:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002435F8u | kUnwind; return; } goto L_002435F8; } }
L_00243B74:
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002435F8u | kUnwind; return; } goto L_002435F8; } }
L_00243B8C:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243B98u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00243B98u) [[unlikely]] return; }
L_00243B98:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243BA4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00243BA4u) [[unlikely]] return; }
L_00243BA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243BB8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243BB8u); set32(c.r[5], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0011(c, 236u, depth + 1u); else { c.pc = 0x00245F40u; return; } if (c.pc != 0x00243BB8u) [[unlikely]] return; }
L_00243BB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243B8Cu | kUnwind; return; } goto L_00243B8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024368Cu | kUnwind; return; } goto L_0024368C; } }
L_00243BD4:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_00243BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243BE0u);  if (depth < kMaxDepth) unit_0011(c, 256u, depth + 1u); else { c.pc = 0x00246260u; return; } if (c.pc != 0x00243BE0u) [[unlikely]] return; }
L_00243BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243BE8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00243BE8u) [[unlikely]] return; }
L_00243BE8:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] << 1);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243BF8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00243BF8u) [[unlikely]] return; }
L_00243BF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 11344u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243C14u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x00243C14u) [[unlikely]] return; }
L_00243C14:
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[17], c.r[19].w[0] << 1);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243730u | kUnwind; return; } goto L_00243730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[3].w[0] - c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002436F4u | kUnwind; return; } goto L_002436F4; } }
L_00243C40:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243C4Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00243C4Cu) [[unlikely]] return; }
L_00243C4C:
    set32(c.r[5], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243C5Cu); set32(c.r[4], c.r[16].w[0] + 49u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00243C5Cu) [[unlikely]] return; }
L_00243C5C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243C90; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243C78u); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00243C78u) [[unlikely]] return; }
L_00243C78:
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243C84u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0011(c, 119u, depth + 1u); else { c.pc = 0x00244990u; return; } if (c.pc != 0x00243C84u) [[unlikely]] return; }
L_00243C84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243AA8u | kUnwind; return; } goto L_00243AA8; } }
    c.budget -= 1;
L_00243C90:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243C9Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00243C9Cu) [[unlikely]] return; }
L_00243C9C:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243CACu); set32(c.r[4], c.r[16].w[0] + 49u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00243CACu) [[unlikely]] return; }
L_00243CAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243CF8; } }
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243CC0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00243CC0u) [[unlikely]] return; }
L_00243CC0:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243CD0u); set32(c.r[4], c.r[16].w[0] + 49u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00243CD0u) [[unlikely]] return; }
L_00243CD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243D48; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243C40u | kUnwind; return; } goto L_00243C40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002439C8u | kUnwind; return; } goto L_002439C8; } }
    c.budget -= 1;
L_00243CF8:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243D04u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00243D04u) [[unlikely]] return; }
L_00243D04:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243D10u); set32(c.r[5], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_0011(c, 118u, depth + 1u); else { c.pc = 0x00244980u; return; } if (c.pc != 0x00243D10u) [[unlikely]] return; }
L_00243D10:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243D1Cu); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00243D1Cu) [[unlikely]] return; }
L_00243D1C:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243D28u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00243D28u) [[unlikely]] return; }
L_00243D28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243AA8u | kUnwind; return; } goto L_00243AA8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243D3Cu); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0011(c, 117u, depth + 1u); else { c.pc = 0x00244960u; return; } if (c.pc != 0x00243D3Cu) [[unlikely]] return; }
L_00243D3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243AA8u | kUnwind; return; } goto L_00243AA8; } }
    c.budget -= 1;
L_00243D48:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00243E40; } }
L_00243D58:
    c.r[1].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00243DF0; } }
    c.budget -= 1;
L_00243D68:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243D74u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00243D74u) [[unlikely]] return; }
L_00243D74:
    set32(c.r[5], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243D84u); set32(c.r[4], c.r[16].w[0] + 49u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00243D84u) [[unlikely]] return; }
L_00243D84:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243DB8; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243DA0u); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00243DA0u) [[unlikely]] return; }
L_00243DA0:
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243DACu); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0011(c, 119u, depth + 1u); else { c.pc = 0x00244990u; return; } if (c.pc != 0x00243DACu) [[unlikely]] return; }
L_00243DAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243AA8u | kUnwind; return; } goto L_00243AA8; } }
    c.budget -= 1;
L_00243DB8:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243DC4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00243DC4u) [[unlikely]] return; }
L_00243DC4:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243DD4u); set32(c.r[4], c.r[16].w[0] + 49u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00243DD4u) [[unlikely]] return; }
L_00243DD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243F20; } }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243D68u | kUnwind; return; } goto L_00243D68; } }
    c.budget -= 1;
L_00243DF0:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243DFCu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00243DFCu) [[unlikely]] return; }
L_00243DFC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243E08u); set32(c.r[5], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_0011(c, 118u, depth + 1u); else { c.pc = 0x00244980u; return; } if (c.pc != 0x00243E08u) [[unlikely]] return; }
L_00243E08:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243E14u); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00243E14u) [[unlikely]] return; }
L_00243E14:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243E20u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00243E20u) [[unlikely]] return; }
L_00243E20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243AA8u | kUnwind; return; } goto L_00243AA8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243E34u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0011(c, 117u, depth + 1u); else { c.pc = 0x00244960u; return; } if (c.pc != 0x00243E34u) [[unlikely]] return; }
L_00243E34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243AA8u | kUnwind; return; } goto L_00243AA8; } }
    c.budget -= 1;
L_00243E40:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243E4Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00243E4Cu) [[unlikely]] return; }
L_00243E4C:
    set32(c.r[5], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243E5Cu); set32(c.r[4], c.r[16].w[0] + 49u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00243E5Cu) [[unlikely]] return; }
L_00243E5C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243E90; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243E78u); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00243E78u) [[unlikely]] return; }
L_00243E78:
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243E84u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0011(c, 119u, depth + 1u); else { c.pc = 0x00244990u; return; } if (c.pc != 0x00243E84u) [[unlikely]] return; }
L_00243E84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243AA8u | kUnwind; return; } goto L_00243AA8; } }
    c.budget -= 1;
L_00243E90:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243E9Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00243E9Cu) [[unlikely]] return; }
L_00243E9C:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243EACu); set32(c.r[4], c.r[16].w[0] + 49u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00243EACu) [[unlikely]] return; }
L_00243EAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243ED0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243E40u | kUnwind; return; } goto L_00243E40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243D58u | kUnwind; return; } goto L_00243D58; } }
L_00243ED0:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243EDCu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00243EDCu) [[unlikely]] return; }
L_00243EDC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243EE8u); set32(c.r[5], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_0011(c, 118u, depth + 1u); else { c.pc = 0x00244980u; return; } if (c.pc != 0x00243EE8u) [[unlikely]] return; }
L_00243EE8:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243EF4u); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00243EF4u) [[unlikely]] return; }
L_00243EF4:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243F00u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00243F00u) [[unlikely]] return; }
L_00243F00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243AA8u | kUnwind; return; } goto L_00243AA8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243F14u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0011(c, 117u, depth + 1u); else { c.pc = 0x00244960u; return; } if (c.pc != 0x00243F14u) [[unlikely]] return; }
L_00243F14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243AA8u | kUnwind; return; } goto L_00243AA8; } }
    c.budget -= 1;
L_00243F20:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243F2Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00243F2Cu) [[unlikely]] return; }
L_00243F2C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243F38u); set32(c.r[5], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_0011(c, 118u, depth + 1u); else { c.pc = 0x00244980u; return; } if (c.pc != 0x00243F38u) [[unlikely]] return; }
L_00243F38:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243F44u); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00243F44u) [[unlikely]] return; }
L_00243F44:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243F50u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00243F50u) [[unlikely]] return; }
L_00243F50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243AA8u | kUnwind; return; } goto L_00243AA8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243F64u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0011(c, 117u, depth + 1u); else { c.pc = 0x00244960u; return; } if (c.pc != 0x00243F64u) [[unlikely]] return; }
L_00243F64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243AA8u | kUnwind; return; } goto L_00243AA8; } }
    c.budget -= 1;
L_00243F70:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243F7Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00243F7Cu) [[unlikely]] return; }
L_00243F7C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243F88u); set32(c.r[5], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_0011(c, 118u, depth + 1u); else { c.pc = 0x00244980u; return; } if (c.pc != 0x00243F88u) [[unlikely]] return; }
L_00243F88:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243F94u); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00243F94u) [[unlikely]] return; }
L_00243F94:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243FA0u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00243FA0u) [[unlikely]] return; }
L_00243FA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243AA8u | kUnwind; return; } goto L_00243AA8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243FB4u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0011(c, 117u, depth + 1u); else { c.pc = 0x00244960u; return; } if (c.pc != 0x00243FB4u) [[unlikely]] return; }
L_00243FB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00243AA8u | kUnwind; return; } goto L_00243AA8; } }
    c.budget -= 1;
L_00243FC0:
    c.r[1].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[21].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0011(c, 7u, depth); } }
    c.budget -= 1;
L_00243FD0:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243FDCu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 198u, depth + 1u); else { c.pc = 0x00241ED0u; return; } if (c.pc != 0x00243FDCu) [[unlikely]] return; }
L_00243FDC:
    set32(c.r[5], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243FECu); set32(c.r[4], c.r[16].w[0] + 49u);  if (depth < kMaxDepth) unit_0010(c, 196u, depth + 1u); else { c.pc = 0x00241E00u; return; } if (c.pc != 0x00243FECu) [[unlikely]] return; }
L_00243FEC:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0011(c, 4u, depth); } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
    [[clang::musttail]] return unit_0011(c, 1u, depth);
}

}

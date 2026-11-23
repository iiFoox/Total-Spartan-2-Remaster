#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B7[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0,
    0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0,
    0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0,
    71, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0,
    0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0,
    0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0,
    0, 0, 0, 0, 190, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0,
    0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0,
    0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 254, 0, 255, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0,
    0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272,
    0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0,
    0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0,
    0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0,
    0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0,
    0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0,
    0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0,
    356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0,
    0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0,
    366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0,
};

void unit_00B7(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004DC000;
    case 2u: goto L_004DC010;
    case 3u: goto L_004DC024;
    case 4u: goto L_004DC02C;
    case 5u: goto L_004DC090;
    case 6u: goto L_004DC0C0;
    case 7u: goto L_004DC0E4;
    case 8u: goto L_004DC0F8;
    case 9u: goto L_004DC118;
    case 10u: goto L_004DC13C;
    case 11u: goto L_004DC148;
    case 12u: goto L_004DC170;
    case 13u: goto L_004DC194;
    case 14u: goto L_004DC1A8;
    case 15u: goto L_004DC1B8;
    case 16u: goto L_004DC1DC;
    case 17u: goto L_004DC1E8;
    case 18u: goto L_004DC210;
    case 19u: goto L_004DC234;
    case 20u: goto L_004DC248;
    case 21u: goto L_004DC260;
    case 22u: goto L_004DC284;
    case 23u: goto L_004DC290;
    case 24u: goto L_004DC2B0;
    case 25u: goto L_004DC2D4;
    case 26u: goto L_004DC2DC;
    case 27u: goto L_004DC324;
    case 28u: goto L_004DC3D0;
    case 29u: goto L_004DC3EC;
    case 30u: goto L_004DC400;
    case 31u: goto L_004DC418;
    case 32u: goto L_004DC430;
    case 33u: goto L_004DC440;
    case 34u: goto L_004DC450;
    case 35u: goto L_004DC460;
    case 36u: goto L_004DC474;
    case 37u: goto L_004DC488;
    case 38u: goto L_004DC494;
    case 39u: goto L_004DC4B0;
    case 40u: goto L_004DC4C0;
    case 41u: goto L_004DC4D0;
    case 42u: goto L_004DC4E0;
    case 43u: goto L_004DC504;
    case 44u: goto L_004DC518;
    case 45u: goto L_004DC558;
    case 46u: goto L_004DC580;
    case 47u: goto L_004DC5A4;
    case 48u: goto L_004DC5BC;
    case 49u: goto L_004DC5DC;
    case 50u: goto L_004DC5EC;
    case 51u: goto L_004DC610;
    case 52u: goto L_004DC634;
    case 53u: goto L_004DC648;
    case 54u: goto L_004DC668;
    case 55u: goto L_004DC674;
    case 56u: goto L_004DC690;
    case 57u: goto L_004DC6B4;
    case 58u: goto L_004DC6C8;
    case 59u: goto L_004DC6E4;
    case 60u: goto L_004DC700;
    case 61u: goto L_004DC71C;
    case 62u: goto L_004DC730;
    case 63u: goto L_004DC74C;
    case 64u: goto L_004DC770;
    case 65u: goto L_004DC784;
    case 66u: goto L_004DC798;
    case 67u: goto L_004DC7A8;
    case 68u: goto L_004DC7C0;
    case 69u: goto L_004DC7DC;
    case 70u: goto L_004DC7F0;
    case 71u: goto L_004DC800;
    case 72u: goto L_004DC810;
    case 73u: goto L_004DC81C;
    case 74u: goto L_004DC840;
    case 75u: goto L_004DC88C;
    case 76u: goto L_004DC898;
    case 77u: goto L_004DC8AC;
    case 78u: goto L_004DC8C8;
    case 79u: goto L_004DC8DC;
    case 80u: goto L_004DC8FC;
    case 81u: goto L_004DC910;
    case 82u: goto L_004DC940;
    case 83u: goto L_004DC94C;
    case 84u: goto L_004DC968;
    case 85u: goto L_004DC9A0;
    case 86u: goto L_004DC9C4;
    case 87u: goto L_004DC9D8;
    case 88u: goto L_004DCA60;
    case 89u: goto L_004DCA80;
    case 90u: goto L_004DCAA4;
    case 91u: goto L_004DCAAC;
    case 92u: goto L_004DCAE8;
    case 93u: goto L_004DCB00;
    case 94u: goto L_004DCBE0;
    case 95u: goto L_004DCC08;
    case 96u: goto L_004DCC24;
    case 97u: goto L_004DCC30;
    case 98u: goto L_004DCC4C;
    case 99u: goto L_004DCC6C;
    case 100u: goto L_004DCC7C;
    case 101u: goto L_004DCCA0;
    case 102u: goto L_004DCCCC;
    case 103u: goto L_004DCCE0;
    case 104u: goto L_004DCD64;
    case 105u: goto L_004DCD90;
    case 106u: goto L_004DCDBC;
    case 107u: goto L_004DCDD0;
    case 108u: goto L_004DCE98;
    case 109u: goto L_004DCEC0;
    case 110u: goto L_004DCEE4;
    case 111u: goto L_004DCEEC;
    case 112u: goto L_004DCF14;
    case 113u: goto L_004DCF30;
    case 114u: goto L_004DCF48;
    case 115u: goto L_004DCF90;
    case 116u: goto L_004DCFB4;
    case 117u: goto L_004DCFC8;
    case 118u: goto L_004DD02C;
    case 119u: goto L_004DD050;
    case 120u: goto L_004DD074;
    case 121u: goto L_004DD088;
    case 122u: goto L_004DD0E4;
    case 123u: goto L_004DD100;
    case 124u: goto L_004DD124;
    case 125u: goto L_004DD144;
    case 126u: goto L_004DD160;
    case 127u: goto L_004DD178;
    case 128u: goto L_004DD180;
    case 129u: goto L_004DD250;
    case 130u: goto L_004DD268;
    case 131u: goto L_004DD270;
    case 132u: goto L_004DD340;
    case 133u: goto L_004DD35C;
    case 134u: goto L_004DD370;
    case 135u: goto L_004DD388;
    case 136u: goto L_004DD3A0;
    case 137u: goto L_004DD3BC;
    case 138u: goto L_004DD3D0;
    case 139u: goto L_004DD3F4;
    case 140u: goto L_004DD410;
    case 141u: goto L_004DD420;
    case 142u: goto L_004DD430;
    case 143u: goto L_004DD440;
    case 144u: goto L_004DD45C;
    case 145u: goto L_004DD470;
    case 146u: goto L_004DD490;
    case 147u: goto L_004DD4B0;
    case 148u: goto L_004DD4D8;
    case 149u: goto L_004DD4E0;
    case 150u: goto L_004DD5E0;
    case 151u: goto L_004DD600;
    case 152u: goto L_004DD614;
    case 153u: goto L_004DD61C;
    case 154u: goto L_004DD62C;
    case 155u: goto L_004DD660;
    case 156u: goto L_004DD684;
    case 157u: goto L_004DD698;
    case 158u: goto L_004DD6A8;
    case 159u: goto L_004DD6C4;
    case 160u: goto L_004DD6D4;
    case 161u: goto L_004DD6F0;
    case 162u: goto L_004DD784;
    case 163u: goto L_004DD78C;
    case 164u: goto L_004DD810;
    case 165u: goto L_004DD834;
    case 166u: goto L_004DD84C;
    case 167u: goto L_004DD86C;
    case 168u: goto L_004DD890;
    case 169u: goto L_004DD8C8;
    case 170u: goto L_004DD8D8;
    case 171u: goto L_004DD8EC;
    case 172u: goto L_004DD908;
    case 173u: goto L_004DD930;
    case 174u: goto L_004DD954;
    case 175u: goto L_004DD968;
    case 176u: goto L_004DD988;
    case 177u: goto L_004DD9B0;
    case 178u: goto L_004DD9D4;
    case 179u: goto L_004DD9E8;
    case 180u: goto L_004DDA10;
    case 181u: goto L_004DDA20;
    case 182u: goto L_004DDA40;
    case 183u: goto L_004DDA60;
    case 184u: goto L_004DDA78;
    case 185u: goto L_004DDA90;
    case 186u: goto L_004DDAA8;
    case 187u: goto L_004DDAC0;
    case 188u: goto L_004DDAD0;
    case 189u: goto L_004DDAEC;
    case 190u: goto L_004DDB10;
    case 191u: goto L_004DDB1C;
    case 192u: goto L_004DDB24;
    case 193u: goto L_004DDB50;
    case 194u: goto L_004DDB74;
    case 195u: goto L_004DDB88;
    case 196u: goto L_004DDBA0;
    case 197u: goto L_004DDBB8;
    case 198u: goto L_004DDBE0;
    case 199u: goto L_004DDC38;
    case 200u: goto L_004DDC54;
    case 201u: goto L_004DDD10;
    case 202u: goto L_004DDD4C;
    case 203u: goto L_004DDD6C;
    case 204u: goto L_004DDE10;
    case 205u: goto L_004DDE34;
    case 206u: goto L_004DDE3C;
    case 207u: goto L_004DDE54;
    case 208u: goto L_004DDF50;
    case 209u: goto L_004DDF84;
    case 210u: goto L_004DE084;
    case 211u: goto L_004DE0D4;
    case 212u: goto L_004DE10C;
    case 213u: goto L_004DE15C;
    case 214u: goto L_004DE194;
    case 215u: goto L_004DE1CC;
    case 216u: goto L_004DE1DC;
    case 217u: goto L_004DE1F4;
    case 218u: goto L_004DE22C;
    case 219u: goto L_004DE260;
    case 220u: goto L_004DE270;
    case 221u: goto L_004DE288;
    case 222u: goto L_004DE2BC;
    case 223u: goto L_004DE340;
    case 224u: goto L_004DE364;
    case 225u: goto L_004DE378;
    case 226u: goto L_004DE388;
    case 227u: goto L_004DE3AC;
    case 228u: goto L_004DE3BC;
    case 229u: goto L_004DE3E0;
    case 230u: goto L_004DE404;
    case 231u: goto L_004DE418;
    case 232u: goto L_004DE430;
    case 233u: goto L_004DE454;
    case 234u: goto L_004DE464;
    case 235u: goto L_004DE480;
    case 236u: goto L_004DE498;
    case 237u: goto L_004DE4A0;
    case 238u: goto L_004DE570;
    case 239u: goto L_004DE580;
    case 240u: goto L_004DE5A4;
    case 241u: goto L_004DE5C8;
    case 242u: goto L_004DE5F0;
    case 243u: goto L_004DE600;
    case 244u: goto L_004DE620;
    case 245u: goto L_004DE630;
    case 246u: goto L_004DE640;
    case 247u: goto L_004DE650;
    case 248u: goto L_004DE670;
    case 249u: goto L_004DE680;
    case 250u: goto L_004DE6B0;
    case 251u: goto L_004DE6C0;
    case 252u: goto L_004DE728;
    case 253u: goto L_004DE73C;
    case 254u: goto L_004DE910;
    case 255u: goto L_004DE918;
    case 256u: goto L_004DE924;
    case 257u: goto L_004DE938;
    case 258u: goto L_004DE950;
    case 259u: goto L_004DE9E0;
    case 260u: goto L_004DE9F8;
    case 261u: goto L_004DEA08;
    case 262u: goto L_004DEA20;
    case 263u: goto L_004DEA4C;
    case 264u: goto L_004DEA60;
    case 265u: goto L_004DEB04;
    case 266u: goto L_004DEB1C;
    case 267u: goto L_004DEB40;
    case 268u: goto L_004DEB64;
    case 269u: goto L_004DEB78;
    case 270u: goto L_004DEBB4;
    case 271u: goto L_004DEBD0;
    case 272u: goto L_004DEBFC;
    case 273u: goto L_004DEC10;
    case 274u: goto L_004DEC5C;
    case 275u: goto L_004DEC64;
    case 276u: goto L_004DECD8;
    case 277u: goto L_004DED10;
    case 278u: goto L_004DED34;
    case 279u: goto L_004DED48;
    case 280u: goto L_004DED74;
    case 281u: goto L_004DED8C;
    case 282u: goto L_004DEDB0;
    case 283u: goto L_004DEDC8;
    case 284u: goto L_004DEDE0;
    case 285u: goto L_004DEDF0;
    case 286u: goto L_004DEE20;
    case 287u: goto L_004DEE34;
    case 288u: goto L_004DEE3C;
    case 289u: goto L_004DEE4C;
    case 290u: goto L_004DEE58;
    case 291u: goto L_004DEF70;
    case 292u: goto L_004DEFC0;
    case 293u: goto L_004DEFE4;
    case 294u: goto L_004DEFF8;
    case 295u: goto L_004DF00C;
    case 296u: goto L_004DF01C;
    case 297u: goto L_004DF028;
    case 298u: goto L_004DF034;
    case 299u: goto L_004DF070;
    case 300u: goto L_004DF088;
    case 301u: goto L_004DF090;
    case 302u: goto L_004DF160;
    case 303u: goto L_004DF178;
    case 304u: goto L_004DF180;
    case 305u: goto L_004DF250;
    case 306u: goto L_004DF268;
    case 307u: goto L_004DF270;
    case 308u: goto L_004DF340;
    case 309u: goto L_004DF358;
    case 310u: goto L_004DF360;
    case 311u: goto L_004DF430;
    case 312u: goto L_004DF448;
    case 313u: goto L_004DF450;
    case 314u: goto L_004DF520;
    case 315u: goto L_004DF538;
    case 316u: goto L_004DF540;
    case 317u: goto L_004DF610;
    case 318u: goto L_004DF634;
    case 319u: goto L_004DF63C;
    case 320u: goto L_004DF654;
    case 321u: goto L_004DF750;
    case 322u: goto L_004DF760;
    case 323u: goto L_004DF778;
    case 324u: goto L_004DF788;
    case 325u: goto L_004DF7B0;
    case 326u: goto L_004DF7C8;
    case 327u: goto L_004DF7D8;
    case 328u: goto L_004DF800;
    case 329u: goto L_004DF82C;
    case 330u: goto L_004DF840;
    case 331u: goto L_004DF890;
    case 332u: goto L_004DF8BC;
    case 333u: goto L_004DF900;
    case 334u: goto L_004DF91C;
    case 335u: goto L_004DF924;
    case 336u: goto L_004DF92C;
    case 337u: goto L_004DF934;
    case 338u: goto L_004DF9F0;
    case 339u: goto L_004DFA14;
    case 340u: goto L_004DFA28;
    case 341u: goto L_004DFA3C;
    case 342u: goto L_004DFA5C;
    case 343u: goto L_004DFA68;
    case 344u: goto L_004DFACC;
    case 345u: goto L_004DFAF0;
    case 346u: goto L_004DFB00;
    case 347u: goto L_004DFB10;
    case 348u: goto L_004DFB20;
    case 349u: goto L_004DFB44;
    case 350u: goto L_004DFB4C;
    case 351u: goto L_004DFB64;
    case 352u: goto L_004DFC10;
    case 353u: goto L_004DFC38;
    case 354u: goto L_004DFC54;
    case 355u: goto L_004DFC64;
    case 356u: goto L_004DFC80;
    case 357u: goto L_004DFC90;
    case 358u: goto L_004DFCB4;
    case 359u: goto L_004DFCBC;
    case 360u: goto L_004DFCC8;
    case 361u: goto L_004DFCE4;
    case 362u: goto L_004DFCF4;
    case 363u: goto L_004DFD0C;
    case 364u: goto L_004DFD40;
    case 365u: goto L_004DFD78;
    case 366u: goto L_004DFD80;
    case 367u: goto L_004DFE40;
    case 368u: goto L_004DFE58;
    case 369u: goto L_004DFE80;
    case 370u: goto L_004DFE90;
    case 371u: goto L_004DFEA8;
    case 372u: goto L_004DFEB0;
    case 373u: goto L_004DFF40;
    case 374u: goto L_004DFF58;
    case 375u: goto L_004DFF60;
    case 376u: goto L_004DFFF0;
    default: bad_entry(c, 0x004DC000u); return;
    }
L_004DC000:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DC014; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC010u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 393u, depth + 1u); else { c.pc = 0x00403170u; return; } if (c.pc != 0x004DC010u) [[unlikely]] return; }
L_004DC010:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DC014:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC024u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0082(c, 202u, depth + 1u); else { c.pc = 0x00409AF0u; return; } if (c.pc != 0x004DC024u) [[unlikely]] return; }
L_004DC024:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DC098; } }
L_004DC02C:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC090u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0080(c, 390u, depth + 1u); else { c.pc = 0x00403090u; return; } if (c.pc != 0x004DC090u) [[unlikely]] return; }
L_004DC090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004DC0A8; } }
L_004DC098:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29200u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29200u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DC02Cu | kUnwind; return; } goto L_004DC02C; } }
L_004DC0A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004DC0C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC0E4u); set32(c.r[4], 0u + 132u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DC0E4u) [[unlikely]] return; }
L_004DC0E4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DC0FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC0F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 92u, depth + 1u); else { c.pc = 0x002ACC10u; return; } if (c.pc != 0x004DC0F8u) [[unlikely]] return; }
L_004DC0F8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DC0FC:
    set32(c.r[5], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC118u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 91u, depth + 1u); else { c.pc = 0x002ACBF0u; return; } if (c.pc != 0x004DC118u) [[unlikely]] return; }
L_004DC118:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[5], c.r[16].w[0] + 64u);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[6], c.r[16].w[0] + 88u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC13Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 85u, depth + 1u); else { c.pc = 0x002B93A0u; return; } if (c.pc != 0x004DC13Cu) [[unlikely]] return; }
L_004DC13C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC148u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004DC148u) [[unlikely]] return; }
L_004DC148:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DC170:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC194u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DC194u) [[unlikely]] return; }
L_004DC194:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DC1AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC1A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 115u, depth + 1u); else { c.pc = 0x002AD170u; return; } if (c.pc != 0x004DC1A8u) [[unlikely]] return; }
L_004DC1A8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DC1AC:
    set32(c.r[5], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC1B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 114u, depth + 1u); else { c.pc = 0x002AD160u; return; } if (c.pc != 0x004DC1B8u) [[unlikely]] return; }
L_004DC1B8:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[5], c.r[16].w[0] + 64u);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[6], c.r[16].w[0] + 88u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC1DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 85u, depth + 1u); else { c.pc = 0x002B93A0u; return; } if (c.pc != 0x004DC1DCu) [[unlikely]] return; }
L_004DC1DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC1E8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004DC1E8u) [[unlikely]] return; }
L_004DC1E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DC210:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC234u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DC234u) [[unlikely]] return; }
L_004DC234:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DC24C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC248u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 125u, depth + 1u); else { c.pc = 0x002AD3D0u; return; } if (c.pc != 0x004DC248u) [[unlikely]] return; }
L_004DC248:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DC24C:
    set32(c.r[5], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC260u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 124u, depth + 1u); else { c.pc = 0x002AD3C0u; return; } if (c.pc != 0x004DC260u) [[unlikely]] return; }
L_004DC260:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[5], c.r[16].w[0] + 64u);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[6], c.r[16].w[0] + 88u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC284u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 85u, depth + 1u); else { c.pc = 0x002B93A0u; return; } if (c.pc != 0x004DC284u) [[unlikely]] return; }
L_004DC284:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC290u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004DC290u) [[unlikely]] return; }
L_004DC290:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DC2B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.f[20] = ld32((c.r[29].w[0] + 76u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC2D4u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DC2D4u) [[unlikely]] return; }
L_004DC2D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004DC32C; } }
L_004DC2DC:
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    st32((c.r[29].w[0] + 92u), c.f[20]);
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC324u); st8((c.r[29].w[0] + 104u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00BE(c, 258u, depth + 1u); else { c.pc = 0x004FBCD0u; return; } if (c.pc != 0x004DC324u) [[unlikely]] return; }
L_004DC324:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004DC3B4; } }
L_004DC32C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[7], 0u - 2u);
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[5], 0u - 3u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 12672u);
    c.r[9].d[0] = ld8((c.r[17].w[0] + 18u));
    set32(c.r[3], c.r[3].w[0] + 26048u);
    set32(c.r[2], c.r[2].w[0] - 19920u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[17].w[0]), c.r[4].w[0]);
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 68u), 0u);
    c.budget -= 34;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DC2DCu | kUnwind; return; } goto L_004DC2DC; } }
L_004DC3B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004DC3D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC3ECu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DC3ECu) [[unlikely]] return; }
L_004DC3EC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DC404; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC400u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 296u, depth + 1u); else { c.pc = 0x003FF080u; return; } if (c.pc != 0x004DC400u) [[unlikely]] return; }
L_004DC400:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DC404:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC418u); st8((c.r[29].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_007F(c, 293u, depth + 1u); else { c.pc = 0x003FF000u; return; } if (c.pc != 0x004DC418u) [[unlikely]] return; }
L_004DC418:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DC430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC440u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DC440u) [[unlikely]] return; }
L_004DC440:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DC450; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC450u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 286u, depth + 1u); else { c.pc = 0x003FA720u; return; } if (c.pc != 0x004DC450u) [[unlikely]] return; }
L_004DC450:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004DC460:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 108u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC474u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DC474u) [[unlikely]] return; }
L_004DC474:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004DC48C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC488u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 183u, depth + 1u); else { c.pc = 0x00455F10u; return; } if (c.pc != 0x004DC488u) [[unlikely]] return; }
L_004DC488:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DC48C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC494u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 136u, depth + 1u); else { c.pc = 0x00455960u; return; } if (c.pc != 0x004DC494u) [[unlikely]] return; }
L_004DC494:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004DC4B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC4C0u); set32(c.r[4], 0u + 1072u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DC4C0u) [[unlikely]] return; }
L_004DC4C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DC4D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC4D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B4(c, 212u, depth + 1u); else { c.pc = 0x004D3E90u; return; } if (c.pc != 0x004DC4D0u) [[unlikely]] return; }
L_004DC4D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004DC4E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[4], 0u + 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = ld32((c.r[29].w[0] + 76u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC504u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DC504u) [[unlikely]] return; }
L_004DC504:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004DC51C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC518u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 299u, depth + 1u); else { c.pc = 0x003FA9E0u; return; } if (c.pc != 0x004DC518u) [[unlikely]] return; }
L_004DC518:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DC51C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 16u));
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[20]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC558u); st32((c.r[29].w[0] + 112u), c.f[0]);  if (depth < kMaxDepth) unit_007E(c, 296u, depth + 1u); else { c.pc = 0x003FA950u; return; } if (c.pc != 0x004DC558u) [[unlikely]] return; }
L_004DC558:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004DC580:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC5A4u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DC5A4u) [[unlikely]] return; }
L_004DC5A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004DC5C0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC5BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 54u, depth + 1u); else { c.pc = 0x002B8B50u; return; } if (c.pc != 0x004DC5BCu) [[unlikely]] return; }
L_004DC5BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DC5C0:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC5DCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004DC5DCu) [[unlikely]] return; }
L_004DC5DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC5ECu); set32(c.r[6], c.r[17].w[0] + 88u);  if (depth < kMaxDepth) unit_002E(c, 85u, depth + 1u); else { c.pc = 0x002B93A0u; return; } if (c.pc != 0x004DC5ECu) [[unlikely]] return; }
L_004DC5EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DC610:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC634u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DC634u) [[unlikely]] return; }
L_004DC634:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004DC64C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC648u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 20u, depth + 1u); else { c.pc = 0x004D8330u; return; } if (c.pc != 0x004DC648u) [[unlikely]] return; }
L_004DC648:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DC64C:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC668u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004DC668u) [[unlikely]] return; }
L_004DC668:
    set32(c.r[5], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC674u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 16u, depth + 1u); else { c.pc = 0x004D8280u; return; } if (c.pc != 0x004DC674u) [[unlikely]] return; }
L_004DC674:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DC690:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC6B4u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DC6B4u) [[unlikely]] return; }
L_004DC6B4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DC6CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC6C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 377u, depth + 1u); else { c.pc = 0x003FB3F0u; return; } if (c.pc != 0x004DC6C8u) [[unlikely]] return; }
L_004DC6C8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DC6CC:
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC6E4u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_007E(c, 353u, depth + 1u); else { c.pc = 0x003FB070u; return; } if (c.pc != 0x004DC6E4u) [[unlikely]] return; }
L_004DC6E4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DC700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 32u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC71Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DC71Cu) [[unlikely]] return; }
L_004DC71C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004DC734; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC730u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 130u, depth + 1u); else { c.pc = 0x004CDFC0u; return; } if (c.pc != 0x004DC730u) [[unlikely]] return; }
L_004DC730:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DC734:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 116u));
    set32(c.r[5], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 112u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC74Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 127u, depth + 1u); else { c.pc = 0x004CDF40u; return; } if (c.pc != 0x004DC74Cu) [[unlikely]] return; }
L_004DC74C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004DC770:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 24u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC784u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DC784u) [[unlikely]] return; }
L_004DC784:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004DC79C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC798u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 302u, depth + 1u); else { c.pc = 0x003FF190u; return; } if (c.pc != 0x004DC798u) [[unlikely]] return; }
L_004DC798:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DC79C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC7A8u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_007F(c, 299u, depth + 1u); else { c.pc = 0x003FF110u; return; } if (c.pc != 0x004DC7A8u) [[unlikely]] return; }
L_004DC7A8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004DC7C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29096u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[5].w[0])));  if (t) { goto L_004DC7F8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_004DC7DC:
    set32(c.r[6], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC7F0u); set32(c.r[4], ld32((c.r[28].w[0] - 29096u)));  if (depth < kMaxDepth) unit_0074(c, 235u, depth + 1u); else { c.pc = 0x003D3590u; return; } if (c.pc != 0x004DC7F0u) [[unlikely]] return; }
L_004DC7F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004DC824; } }
L_004DC7F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC800u); set32(c.r[4], 0u + 864u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DC800u) [[unlikely]] return; }
L_004DC800:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DC810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC810u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 260u, depth + 1u); else { c.pc = 0x003D3E50u; return; } if (c.pc != 0x004DC810u) [[unlikely]] return; }
L_004DC810:
    st32((c.r[28].w[0] - 29096u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC81Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0074(c, 255u, depth + 1u); else { c.pc = 0x003D3CF0u; return; } if (c.pc != 0x004DC81Cu) [[unlikely]] return; }
L_004DC81C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 68u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DC7DCu | kUnwind; return; } goto L_004DC7DC; } }
L_004DC824:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004DC840:
    set32(c.r[29], c.r[29].w[0] - 432u);
    set32(c.r[6], 0u + 50u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    set32(c.r[30], c.r[29].w[0] + 380u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[23], ld32((c.r[5].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC88Cu); st32((c.r[29].w[0] + 160u), 0u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x004DC88Cu) [[unlikely]] return; }
L_004DC88C:
    set32(c.r[17], c.r[29].w[0] + 160u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_004DC898:
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 50u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC8ACu); st32((c.r[17].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x004DC8ACu) [[unlikely]] return; }
L_004DC8AC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 50u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DC898u | kUnwind; return; } goto L_004DC898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC8C8u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DC8C8u) [[unlikely]] return; }
L_004DC8C8:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_004DC8E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC8DCu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 454u, depth + 1u); else { c.pc = 0x004FFDA0u; return; } if (c.pc != 0x004DC8DCu) [[unlikely]] return; }
L_004DC8DC:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DC8E0:
    set32(c.r[2], ld32((c.r[23].w[0] + 56u)));
    set32(c.r[18], c.r[29].w[0] + 160u);
    c.r[20].d[0] = 0ull + 0ull;
    c.r[19].d[0] = c.r[23].d[0] + 0ull;
    c.r[17].d[0] = c.r[23].d[0] + 0ull;
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 7;
L_004DC8FC:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DC954; } }
L_004DC910:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 50u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DC8FCu | kUnwind; return; } goto L_004DC8FC; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 60u)));
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[23].w[0] + 112u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC940u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x004DC940u) [[unlikely]] return; }
L_004DC940:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC94Cu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_00BF(c, 429u, depth + 1u); else { c.pc = 0x004FFAF0u; return; } if (c.pc != 0x004DC94Cu) [[unlikely]] return; }
L_004DC94C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_004DC970; } }
L_004DC954:
    set32(c.r[3], ld32((c.r[21].w[0] + 60u)));
    set32(c.r[4], c.r[16].w[0] + 20u);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC968u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x004DC968u) [[unlikely]] return; }
L_004DC968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DC910u | kUnwind; return; } goto L_004DC910; } }
L_004DC970:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 432u);  c.pc = t; return; }
L_004DC9A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC9C4u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DC9C4u) [[unlikely]] return; }
L_004DC9C4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DC9DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DC9D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AD(c, 271u, depth + 1u); else { c.pc = 0x004B68E0u; return; } if (c.pc != 0x004DC9D8u) [[unlikely]] return; }
L_004DC9D8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DC9DC:
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 68u), c.f[2]);
    st32((c.r[29].w[0] + 72u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[29].w[0] + 76u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCA60u); st32((c.r[29].w[0] + 112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AD(c, 264u, depth + 1u); else { c.pc = 0x004B66D0u; return; } if (c.pc != 0x004DCA60u) [[unlikely]] return; }
L_004DCA60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004DCA80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCAA4u); set32(c.r[4], 0u + 88u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DCAA4u) [[unlikely]] return; }
L_004DCAA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004DCB08; } }
L_004DCAAC:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCAE8u); st32((c.r[29].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AD(c, 179u, depth + 1u); else { c.pc = 0x004B5B20u; return; } if (c.pc != 0x004DCAE8u) [[unlikely]] return; }
L_004DCAE8:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCB00u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 378u, depth + 1u); else { c.pc = 0x0046FF80u; return; } if (c.pc != 0x004DCB00u) [[unlikely]] return; }
L_004DCB00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004DCBC8; } }
L_004DCB08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[9], 0u - 2u);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[7], 0u - 3u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], c.r[6].w[0] - 12672u);
    c.r[11].d[0] = ld8((c.r[17].w[0] + 18u));
    set32(c.r[5], c.r[5].w[0] + 16976u);
    set32(c.r[4], 0u + 255u);
    set32(c.r[3], c.r[3].w[0] - 28720u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[12], 0u + 1u);
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[17].w[0]), c.r[6].w[0]);
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0]), c.r[5].w[0]);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 56u), 0u);
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 41u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 42u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 41u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 48;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 42u), static_cast<std::uint8_t>(c.r[12].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DCAACu | kUnwind; return; } goto L_004DCAAC; } }
L_004DCBC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004DCBE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCC08u); c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 85u, depth + 1u); else { c.pc = 0x002BC790u; return; } if (c.pc != 0x004DCC08u) [[unlikely]] return; }
L_004DCC08:
    set32(c.r[5], ld32((c.r[19].w[0] + 60u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCC24u); set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003C(c, 63u, depth + 1u); else { c.pc = 0x002F0620u; return; } if (c.pc != 0x004DCC24u) [[unlikely]] return; }
L_004DCC24:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCC30u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DCC30u) [[unlikely]] return; }
L_004DCC30:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DCC50; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 112u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCC4Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 81u, depth + 1u); else { c.pc = 0x002B9140u; return; } if (c.pc != 0x004DCC4Cu) [[unlikely]] return; }
L_004DCC4C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DCC50:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCC6Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004DCC6Cu) [[unlikely]] return; }
L_004DCC6C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCC7Cu); set32(c.r[6], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_002E(c, 85u, depth + 1u); else { c.pc = 0x002B93A0u; return; } if (c.pc != 0x004DCC7Cu) [[unlikely]] return; }
L_004DCC7C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004DCCA0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.f[20] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCCCCu); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DCCCCu) [[unlikely]] return; }
L_004DCCCC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DCCE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCCE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 392u, depth + 1u); else { c.pc = 0x004AB330u; return; } if (c.pc != 0x004DCCE0u) [[unlikely]] return; }
L_004DCCE0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DCCE4:
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[3], c.r[29].w[0] + 128u);
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[20]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    st8((c.r[29].w[0] + 116u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCD64u); st32((c.r[29].w[0] + 144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AA(c, 386u, depth + 1u); else { c.pc = 0x004AB1B0u; return; } if (c.pc != 0x004DCD64u) [[unlikely]] return; }
L_004DCD64:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004DCD90:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.f[20] = ld32((c.r[29].w[0] + 76u));
    c.f[21] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCDBCu); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DCDBCu) [[unlikely]] return; }
L_004DCDBC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DCDD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCDD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 288u, depth + 1u); else { c.pc = 0x004AF020u; return; } if (c.pc != 0x004DCDD0u) [[unlikely]] return; }
L_004DCDD0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DCDD4:
    c.f[2] = ld32((c.r[16].w[0] + 60u));
    set32(c.r[2], 0u + 128u);
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[21]);
    c.f[2] = ld32((c.r[16].w[0] + 72u));
    c.f[1] = ld32((c.r[16].w[0] + 76u));
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[2]);
    st32((c.r[29].w[0] + 120u), c.f[1]);
    st32((c.r[29].w[0] + 124u), c.f[20]);
    set32(c.r[7], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    st8((c.r[29].w[0] + 128u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 129u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[29].w[0] + 130u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    st8((c.r[29].w[0] + 131u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 132u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[29].w[0] + 133u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[8], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    st8((c.r[29].w[0] + 134u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 135u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[29].w[0] + 136u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 137u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    st32((c.r[29].w[0] + 144u), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    st8((c.r[29].w[0] + 148u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 149u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[29].w[0] + 150u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 151u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    c.budget -= 49;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCE98u); st32((c.r[29].w[0] + 160u), c.f[0]);  if (depth < kMaxDepth) unit_00AB(c, 285u, depth + 1u); else { c.pc = 0x004AEF80u; return; } if (c.pc != 0x004DCE98u) [[unlikely]] return; }
L_004DCE98:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004DCEC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCEE4u); set32(c.r[4], 0u + 84u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DCEE4u) [[unlikely]] return; }
L_004DCEE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004DCF38; } }
L_004DCEEC:
    c.f[0] = ld32((c.r[18].w[0] + 120u));
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 112u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 64u);
    set32(c.r[6], c.r[18].w[0] + 88u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCF14u); st32((c.r[16].w[0] + 80u), c.f[0]);  if (depth < kMaxDepth) unit_002E(c, 85u, depth + 1u); else { c.pc = 0x002B93A0u; return; } if (c.pc != 0x004DCF14u) [[unlikely]] return; }
L_004DCF14:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCF30u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004DCF30u) [[unlikely]] return; }
L_004DCF30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004DCF6C; } }
L_004DCF38:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCF48u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x002B9620u; return; } if (c.pc != 0x004DCF48u) [[unlikely]] return; }
L_004DCF48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 25808u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DCEECu | kUnwind; return; } goto L_004DCEEC; } }
L_004DCF6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DCF90:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.f[20] = ld32((c.r[29].w[0] + 76u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCFB4u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DCFB4u) [[unlikely]] return; }
L_004DCFB4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004DCFCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DCFC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 114u, depth + 1u); else { c.pc = 0x004ED040u; return; } if (c.pc != 0x004DCFC8u) [[unlikely]] return; }
L_004DCFC8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DCFCC:
    c.f[2] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    st32((c.r[29].w[0] + 92u), c.f[20]);
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    set32(c.r[7], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    st8((c.r[29].w[0] + 104u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 105u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[29].w[0] + 106u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 107u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD02Cu); st8((c.r[29].w[0] + 128u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00BB(c, 111u, depth + 1u); else { c.pc = 0x004ECF80u; return; } if (c.pc != 0x004DD02Cu) [[unlikely]] return; }
L_004DD02C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004DD050:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.f[20] = ld32((c.r[29].w[0] + 76u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD074u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DD074u) [[unlikely]] return; }
L_004DD074:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DD08C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD088u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 389u, depth + 1u); else { c.pc = 0x004AFED0u; return; } if (c.pc != 0x004DD088u) [[unlikely]] return; }
L_004DD088:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DD08C:
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    st32((c.r[29].w[0] + 92u), c.f[20]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    st8((c.r[29].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD0E4u); st32((c.r[29].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 385u, depth + 1u); else { c.pc = 0x004AFDD0u; return; } if (c.pc != 0x004DD0E4u) [[unlikely]] return; }
L_004DD0E4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004DD100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 28u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD124u); c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DD124u) [[unlikely]] return; }
L_004DD124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DD144; } }
    c.r[5].d[0] = ld8((c.r[17].w[0] + 60u));
    c.r[3].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    c.r[7].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD144u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 359u, depth + 1u); else { c.pc = 0x004733A0u; return; } if (c.pc != 0x004DD144u) [[unlikely]] return; }
L_004DD144:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004DD160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD178u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DD178u) [[unlikely]] return; }
L_004DD178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DD188; } }
L_004DD180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004DD244; } }
L_004DD188:
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[12], c.r[12].w[0] - 16352u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[13], 0u - 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[10], 0u - 3u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[2].w[0]), c.r[12].w[0]);
    set32(c.r[9], c.r[9].w[0] - 27952u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[8], 0u + 40u);
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u - 5u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[5], c.r[5].w[0] - 2848u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] - 21056u);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[12].d[0] = c.r[12].d[0] & c.r[13].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[14].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[2].w[0]), c.r[9].w[0]);
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 25u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[13].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[14].d[0];
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 25u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 47;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DD180u | kUnwind; return; } goto L_004DD180; } }
L_004DD244:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004DD250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD268u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DD268u) [[unlikely]] return; }
L_004DD268:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DD278; } }
L_004DD270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004DD334; } }
L_004DD278:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[12], c.r[12].w[0] - 16352u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[13], 0u - 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[10], 0u - 3u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[2].w[0]), c.r[12].w[0]);
    set32(c.r[9], c.r[9].w[0] - 27952u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[8], 0u + 47u);
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u - 5u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[5], c.r[5].w[0] - 2848u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] - 21360u);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[12].d[0] = c.r[12].d[0] & c.r[13].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[14].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[2].w[0]), c.r[9].w[0]);
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 25u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[13].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[14].d[0];
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 25u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 47;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DD270u | kUnwind; return; } goto L_004DD270; } }
L_004DD334:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004DD340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 28u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD35Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DD35Cu) [[unlikely]] return; }
L_004DD35C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004DD374; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD370u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 377u, depth + 1u); else { c.pc = 0x004B3990u; return; } if (c.pc != 0x004DD370u) [[unlikely]] return; }
L_004DD370:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DD374:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD388u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 374u, depth + 1u); else { c.pc = 0x004B3910u; return; } if (c.pc != 0x004DD388u) [[unlikely]] return; }
L_004DD388:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004DD3A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD3BCu); set32(c.r[4], 0u + 60u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DD3BCu) [[unlikely]] return; }
L_004DD3BC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DD3D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD3D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 34u, depth + 1u); else { c.pc = 0x004B03C0u; return; } if (c.pc != 0x004DD3D0u) [[unlikely]] return; }
L_004DD3D0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DD3D4:
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.f[12] = ld32((c.r[16].w[0] + 64u));
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.f[13] = ld32((c.r[16].w[0] + 68u));
    set32(c.r[7], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD3F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 31u, depth + 1u); else { c.pc = 0x004B0300u; return; } if (c.pc != 0x004DD3F4u) [[unlikely]] return; }
L_004DD3F4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004DD410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD420u); set32(c.r[4], 0u + 2992u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DD420u) [[unlikely]] return; }
L_004DD420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DD430; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD430u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 94u, depth + 1u); else { c.pc = 0x0043D480u; return; } if (c.pc != 0x004DD430u) [[unlikely]] return; }
L_004DD430:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004DD440:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD45Cu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DD45Cu) [[unlikely]] return; }
L_004DD45C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DD474; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD470u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 228u, depth + 1u); else { c.pc = 0x004563C0u; return; } if (c.pc != 0x004DD470u) [[unlikely]] return; }
L_004DD470:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DD474:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 56u);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD490u); st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0095(c, 224u, depth + 1u); else { c.pc = 0x00456310u; return; } if (c.pc != 0x004DD490u) [[unlikely]] return; }
L_004DD490:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DD4B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.f[20] = ld32((c.r[29].w[0] + 60u));
    c.f[21] = ld32((c.r[29].w[0] + 76u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD4D8u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DD4D8u) [[unlikely]] return; }
L_004DD4D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DD560; } }
L_004DD4E0:
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004DD504; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.f[2] = 0u;
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[3] = c.f[2];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[4] = c.f[2];  if (t) { goto L_004DD514; } }
L_004DD504:
    c.f[2] = ld32((c.r[16].w[0] + 60u));
    c.f[3] = ld32((c.r[16].w[0] + 64u));
    c.f[4] = ld32((c.r[16].w[0] + 68u));
    c.f[21] = c.f[20];
    c.budget -= 4;
L_004DD514:
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.f[1] = ld32((c.r[16].w[0] + 80u));
    c.f[0] = 0u;
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 32u), c.f[2]);
    st32((c.r[2].w[0] + 36u), c.f[3]);
    st32((c.r[2].w[0] + 40u), c.f[4]);
    st32((c.r[2].w[0] + 44u), c.f[21]);
    st32((c.r[2].w[0] + 52u), c.r[5].w[0]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    st8((c.r[2].w[0] + 48u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[2].w[0] + 84u), c.f[1]);  if (t) { goto L_004DD54C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DD54C:
    st8((c.r[2].w[0] + 92u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 93u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 88u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 56u), c.r[4].w[0]);  if (t) { goto L_004DD5C0; } }
L_004DD560:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], 0u - 2u);
    set32(c.r[3], c.r[3].w[0] - 16352u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u - 3u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + 14320u);
    st32((c.r[2].w[0] + 12u), 0u);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DD4E0u | kUnwind; return; } goto L_004DD4E0; } }
L_004DD5C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004DD5E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD600u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DD600u) [[unlikely]] return; }
L_004DD600:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004DD618; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD614u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 87u, depth + 1u); else { c.pc = 0x004A8AD0u; return; } if (c.pc != 0x004DD614u) [[unlikely]] return; }
L_004DD614:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DD618:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DD61C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD62Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 72u, depth + 1u); else { c.pc = 0x004A8930u; return; } if (c.pc != 0x004DD62Cu) [[unlikely]] return; }
L_004DD62C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 50u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DD61Cu | kUnwind; return; } goto L_004DD61C; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DD660:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD684u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DD684u) [[unlikely]] return; }
L_004DD684:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DD69C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD698u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 45u, depth + 1u); else { c.pc = 0x002B8930u; return; } if (c.pc != 0x004DD698u) [[unlikely]] return; }
L_004DD698:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DD69C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD6A8u); set32(c.r[5], c.r[16].w[0] + 112u);  if (depth < kMaxDepth) unit_002E(c, 34u, depth + 1u); else { c.pc = 0x002B87C0u; return; } if (c.pc != 0x004DD6A8u) [[unlikely]] return; }
L_004DD6A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD6C4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004DD6C4u) [[unlikely]] return; }
L_004DD6C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD6D4u); set32(c.r[6], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_002E(c, 85u, depth + 1u); else { c.pc = 0x002B93A0u; return; } if (c.pc != 0x004DD6D4u) [[unlikely]] return; }
L_004DD6D4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DD6F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 7u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004DD778; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004DD778; } }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004DD778; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004DD778; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004DD778; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004DD778; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004DD778; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004DD778; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004DD778; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 60u)));  if (t) { goto L_004DD77C; } }
L_004DD778:
    set32(c.r[17], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_004DD77C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD784u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DD784u) [[unlikely]] return; }
L_004DD784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DD794; } }
L_004DD78C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004DD800; } }
L_004DD794:
    set32(c.r[9], ld32((c.r[16].w[0] + 56u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[8], c.r[8].w[0] - 16352u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], 0u - 2u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], 0u - 3u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[3], c.r[3].w[0] + 10736u);
    st32((c.r[2].w[0]), c.r[8].w[0]);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 24u), c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DD78Cu | kUnwind; return; } goto L_004DD78C; } }
L_004DD800:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004DD810:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD834u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DD834u) [[unlikely]] return; }
L_004DD834:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DD850; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD84Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008E(c, 61u, depth + 1u); else { c.pc = 0x0043A5D0u; return; } if (c.pc != 0x004DD84Cu) [[unlikely]] return; }
L_004DD84C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DD850:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD86Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004DD86Cu) [[unlikely]] return; }
L_004DD86C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DD890:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28468u)));
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004DD8D0; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD8C8u); set32(c.r[5], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_008F(c, 32u, depth + 1u); else { c.pc = 0x0043C580u; return; } if (c.pc != 0x004DD8C8u) [[unlikely]] return; }
L_004DD8C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004DD90C; } }
L_004DD8D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD8D8u); set32(c.r[4], 0u + 2992u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DD8D8u) [[unlikely]] return; }
L_004DD8D8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DD8F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD8ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 94u, depth + 1u); else { c.pc = 0x0043D480u; return; } if (c.pc != 0x004DD8ECu) [[unlikely]] return; }
L_004DD8EC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DD8F0:
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD908u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 32u, depth + 1u); else { c.pc = 0x0043C580u; return; } if (c.pc != 0x004DD908u) [[unlikely]] return; }
L_004DD908:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004DD90C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DD930:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD954u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DD954u) [[unlikely]] return; }
L_004DD954:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DD96C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD968u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_008F(c, 27u, depth + 1u); else { c.pc = 0x0043C4E0u; return; } if (c.pc != 0x004DD968u) [[unlikely]] return; }
L_004DD968:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DD96C:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD988u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004DD988u) [[unlikely]] return; }
L_004DD988:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DD9B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD9D4u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DD9D4u) [[unlikely]] return; }
L_004DD9D4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DD9EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DD9E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 209u, depth + 1u); else { c.pc = 0x002B3240u; return; } if (c.pc != 0x004DD9E8u) [[unlikely]] return; }
L_004DD9E8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DD9EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDA10u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004DDA10u) [[unlikely]] return; }
L_004DDA10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDA20u); set32(c.r[6], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_002E(c, 85u, depth + 1u); else { c.pc = 0x002B93A0u; return; } if (c.pc != 0x004DDA20u) [[unlikely]] return; }
L_004DDA20:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DDA40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDA60u); set32(c.r[4], 0u + 92u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DDA60u) [[unlikely]] return; }
L_004DDA60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DDA78; } }
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDA78u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 297u, depth + 1u); else { c.pc = 0x00456E00u; return; } if (c.pc != 0x004DDA78u) [[unlikely]] return; }
L_004DDA78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004DDA90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDAA8u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DDAA8u) [[unlikely]] return; }
L_004DDAA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DDAC0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDAC0u); set32(c.r[6], c.r[16].w[0] + 60u);  if (depth < kMaxDepth) unit_0080(c, 429u, depth + 1u); else { c.pc = 0x004036F0u; return; } if (c.pc != 0x004DDAC0u) [[unlikely]] return; }
L_004DDAC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004DDAD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDAECu); set32(c.r[4], 0u + 56u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DDAECu) [[unlikely]] return; }
L_004DDAEC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004DDB14; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[8], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDB10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 420u, depth + 1u); else { c.pc = 0x004034D0u; return; } if (c.pc != 0x004DDB10u) [[unlikely]] return; }
L_004DDB10:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DDB14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDB1Cu); c.r[4].d[0] = ld8((c.r[17].w[0] + 68u));  if (depth < kMaxDepth) unit_0082(c, 202u, depth + 1u); else { c.pc = 0x00409AF0u; return; } if (c.pc != 0x004DDB1Cu) [[unlikely]] return; }
L_004DDB1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DDB2C; } }
L_004DDB24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004DDB3C; } }
L_004DDB2C:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29200u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29200u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DDB24u | kUnwind; return; } goto L_004DDB24; } }
L_004DDB3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004DDB50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDB74u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DDB74u) [[unlikely]] return; }
L_004DDB74:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DDB8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDB88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 245u, depth + 1u); else { c.pc = 0x004B2650u; return; } if (c.pc != 0x004DDB88u) [[unlikely]] return; }
L_004DDB88:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DDB8C:
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.f[12] = ld32((c.r[16].w[0] + 72u));
    set32(c.r[6], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDBA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 244u, depth + 1u); else { c.pc = 0x004B2640u; return; } if (c.pc != 0x004DDBA0u) [[unlikely]] return; }
L_004DDBA0:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDBB8u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 378u, depth + 1u); else { c.pc = 0x0046FF80u; return; } if (c.pc != 0x004DDBB8u) [[unlikely]] return; }
L_004DDBB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DDBE0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    set32(c.r[16], c.r[29].w[0] + 132u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[5], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDC38u); st32((c.r[29].w[0] + 136u), c.f[0]);  if (depth < kMaxDepth) unit_003A(c, 264u, depth + 1u); else { c.pc = 0x002EB440u; return; } if (c.pc != 0x004DDC38u) [[unlikely]] return; }
L_004DDC38:
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], 0u + 192u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDC54u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DDC54u) [[unlikely]] return; }
L_004DDC54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DDDD4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.f[20] = ld32((c.r[17].w[0] + 80u));
    set32(c.r[20], ld32((c.r[17].w[0] + 84u)));
    c.f[21] = ld32((c.r[17].w[0] + 60u));
    set32(c.r[5], ld32((c.r[17].w[0] + 76u)));
    c.f[22] = ld32((c.r[17].w[0] + 56u));
    c.r[19].d[0] = ld8((c.r[17].w[0] + 88u));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[18].d[0] = ld8((c.r[17].w[0] + 72u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[11], c.r[11].w[0] - 16352u);
    set32(c.r[9], 0u - 2u);
    c.r[21].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[6], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], c.r[4].w[0] - 21648u);
    set32(c.r[12], 0u + 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[2].w[0] + 32u);
    c.r[17].d[0] = ld8((c.r[17].w[0] + 68u));
    st32((c.r[2].w[0]), c.r[11].w[0]);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[11].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[6].d[0] = c.r[9].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st8((c.r[2].w[0] + 52u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st32((c.r[2].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.r[1].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 44;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004DDD30; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DDD10:
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0]), 0u);
    set32(c.r[4], ld32((c.r[7].w[0] + 4u)));
    c.r[4].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DDD10u | kUnwind; return; } goto L_004DDD10; } }
L_004DDD30:
    set32(c.r[4], c.r[2].w[0] + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    st8((c.r[7].w[0] + 64u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDD4Cu); st32((c.r[7].w[0] + 144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0021(c, 158u, depth + 1u); else { c.pc = 0x00286350u; return; } if (c.pc != 0x004DDD4Cu) [[unlikely]] return; }
L_004DDD4C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 40u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004DDD90; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DDD6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DDD6Cu | kUnwind; return; } goto L_004DDD6C; } }
    c.budget -= 1;
L_004DDD90:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 140u));
    st32((c.r[16].w[0] + 76u), c.f[0]);
    st32((c.r[16].w[0] + 80u), c.f[22]);
    st32((c.r[16].w[0] + 84u), c.f[21]);
    st8((c.r[16].w[0] + 181u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[16].w[0] + 180u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st32((c.r[16].w[0] + 88u), c.f[20]);
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[19].w[0]));
    st32((c.r[16].w[0] + 20u), c.r[20].w[0]);
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[21].w[0]));
    c.budget -= 17;
L_004DDDD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004DDE10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDE34u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DDE34u) [[unlikely]] return; }
L_004DDE34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004DDE5C; } }
L_004DDE3C:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDE54u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 378u, depth + 1u); else { c.pc = 0x0046FF80u; return; } if (c.pc != 0x004DDE54u) [[unlikely]] return; }
L_004DDE54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004DDF30; } }
L_004DDE5C:
    set32(c.r[14], ld32((c.r[16].w[0] + 68u)));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[13], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[11], c.r[11].w[0] - 16352u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[9], 0u - 2u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[6], c.r[6].w[0] - 12672u);
    set32(c.r[5], c.r[5].w[0] + 16976u);
    set32(c.r[4], 0u + 255u);
    st32((c.r[17].w[0]), c.r[11].w[0]);
    set32(c.r[3], c.r[3].w[0] + 11344u);
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 2u);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[12], 0u + 1u);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[11].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[17].w[0]), c.r[6].w[0]);
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0]), c.r[5].w[0]);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 56u), 0u);
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 41u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 42u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 64u), 0u);
    st32((c.r[17].w[0] + 60u), c.r[14].w[0]);
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 41u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 42u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.budget -= 53;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 48u), c.r[13].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DDE3Cu | kUnwind; return; } goto L_004DDE3C; } }
L_004DDF30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DDF50:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[4], 0u + 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[21], ld32((c.r[5].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DDF84u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DDF84u) [[unlikely]] return; }
L_004DDF84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DE310; } }
    set32(c.r[19], ld32((c.r[16].w[0] + 192u)));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[18], ld32((c.r[21].w[0] + 84u)));
    set32(c.r[17], ld32((c.r[21].w[0] + 80u)));
    set32(c.r[14], c.r[14].w[0] - 16352u);
    set32(c.r[22], ld32((c.r[21].w[0] + 76u)));
    set32(c.r[12], 0u - 2u);
    set32(c.r[15], ld32((c.r[21].w[0] + 72u)));
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[16], ld32((c.r[21].w[0] + 88u)));
    set32(c.r[10], 0u - 3u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[9], c.r[9].w[0] - 12672u);
    set32(c.r[8], c.r[8].w[0] + 16976u);
    set32(c.r[7], 0u + 255u);
    set32(c.r[6], c.r[6].w[0] + 11664u);
    set32(c.r[3], 0u + 1u);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 60u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0]), c.r[14].w[0]);
    c.r[21].d[0] = 0ull < c.r[22].d[0] ? 1ull : 0ull;
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[14].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[12].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[2].w[0]), c.r[9].w[0]);
    st8((c.r[2].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0]), c.r[8].w[0]);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 52u), 0u);
    st32((c.r[2].w[0] + 56u), 0u);
    st32((c.r[2].w[0] + 44u), 0u);
    st32((c.r[2].w[0] + 48u), 0u);
    st8((c.r[2].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 41u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[2].w[0] + 42u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[2].w[0]), c.r[6].w[0]);
    st32((c.r[2].w[0] + 60u), 0u);
    st32((c.r[2].w[0] + 64u), 0u);
    st8((c.r[2].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 68u), 0u);
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 61;
    { const bool t = c.r[1].d[0] == 0ull; c.r[22].d[0] = 0ull < c.r[15].d[0] ? 1ull : 0ull;  if (t) { goto L_004DE0A8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DE084:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DE084u | kUnwind; return; } goto L_004DE084; } }
    c.budget -= 1;
L_004DE0A8:
    st32((c.r[2].w[0] + 84u), 0u);
    st32((c.r[2].w[0] + 88u), 0u);
    set32(c.r[5], c.r[2].w[0] + 84u);
    st32((c.r[2].w[0] + 92u), 0u);
    st32((c.r[2].w[0] + 96u), 0u);
    st32((c.r[2].w[0] + 100u), 0u);
    set32(c.r[3], ld32((c.r[2].w[0] + 88u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004DE0F8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DE0D4:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DE0D4u | kUnwind; return; } goto L_004DE0D4; } }
    c.budget -= 1;
L_004DE0F8:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004DE130; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DE10C:
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30892u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.r[3].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DE10Cu | kUnwind; return; } goto L_004DE10C; } }
L_004DE130:
    st32((c.r[2].w[0] + 104u), 0u);
    st32((c.r[2].w[0] + 108u), 0u);
    set32(c.r[5], c.r[2].w[0] + 104u);
    st32((c.r[2].w[0] + 112u), 0u);
    st32((c.r[2].w[0] + 116u), 0u);
    st32((c.r[2].w[0] + 120u), 0u);
    set32(c.r[3], ld32((c.r[2].w[0] + 108u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_004DE180; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DE15C:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DE15Cu | kUnwind; return; } goto L_004DE15C; } }
    c.budget -= 1;
L_004DE180:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004DE1B8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DE194:
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30892u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.r[3].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DE194u | kUnwind; return; } goto L_004DE194; } }
L_004DE1B8:
    st32((c.r[2].w[0] + 132u), 0u);
    set32(c.r[4], c.r[2].w[0] + 84u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE1CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 158u, depth + 1u); else { c.pc = 0x00286350u; return; } if (c.pc != 0x004DE1CCu) [[unlikely]] return; }
L_004DE1CC:
    set32(c.r[4], c.r[20].w[0] + 92u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE1DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 41u, depth + 1u); else { c.pc = 0x002AC490u; return; } if (c.pc != 0x004DE1DCu) [[unlikely]] return; }
L_004DE1DC:
    st32((c.r[20].w[0] + 100u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004DE218; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DE1F4:
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DE1F4u | kUnwind; return; } goto L_004DE1F4; } }
    c.budget -= 1;
L_004DE218:
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004DE250; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DE22C:
    set32(c.r[2], ld32((c.r[20].w[0] + 92u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30892u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DE22Cu | kUnwind; return; } goto L_004DE22C; } }
L_004DE250:
    set32(c.r[4], c.r[20].w[0] + 104u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE260u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0021(c, 158u, depth + 1u); else { c.pc = 0x00286350u; return; } if (c.pc != 0x004DE260u) [[unlikely]] return; }
L_004DE260:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE270u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002B(c, 41u, depth + 1u); else { c.pc = 0x002AC490u; return; } if (c.pc != 0x004DE270u) [[unlikely]] return; }
L_004DE270:
    st32((c.r[20].w[0] + 120u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 108u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004DE2A8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DE288:
    set32(c.r[2], ld32((c.r[20].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 108u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DE288u | kUnwind; return; } goto L_004DE288; } }
L_004DE2A8:
    set32(c.r[2], ld32((c.r[20].w[0] + 116u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004DE2E0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004DE2BC:
    set32(c.r[2], ld32((c.r[20].w[0] + 112u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30892u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 116u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DE2BCu | kUnwind; return; } goto L_004DE2BC; } }
L_004DE2E0:
    st8((c.r[20].w[0] + 124u), static_cast<std::uint8_t>(c.r[22].w[0]));
    st8((c.r[20].w[0] + 125u), static_cast<std::uint8_t>(c.r[21].w[0]));
    set32(c.r[4], 0u + 2u);
    st8((c.r[20].w[0] + 136u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[20].w[0] + 40u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    st8((c.r[20].w[0] + 41u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[20].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[20].w[0] + 48u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 128u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 140u), c.r[18].w[0]);
    c.budget -= 12;
L_004DE310:
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
L_004DE340:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE364u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DE364u) [[unlikely]] return; }
L_004DE364:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DE37C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE378u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 208u, depth + 1u); else { c.pc = 0x002B6BC0u; return; } if (c.pc != 0x004DE378u) [[unlikely]] return; }
L_004DE378:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DE37C:
    set32(c.r[5], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE388u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 206u, depth + 1u); else { c.pc = 0x002B6B90u; return; } if (c.pc != 0x004DE388u) [[unlikely]] return; }
L_004DE388:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE3ACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004DE3ACu) [[unlikely]] return; }
L_004DE3AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE3BCu); set32(c.r[6], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_002E(c, 85u, depth + 1u); else { c.pc = 0x002B93A0u; return; } if (c.pc != 0x004DE3BCu) [[unlikely]] return; }
L_004DE3BC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DE3E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE404u); set32(c.r[4], 0u + 192u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DE404u) [[unlikely]] return; }
L_004DE404:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DE41C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE418u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 264u, depth + 1u); else { c.pc = 0x002B77F0u; return; } if (c.pc != 0x004DE418u) [[unlikely]] return; }
L_004DE418:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DE41C:
    set32(c.r[5], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE430u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 263u, depth + 1u); else { c.pc = 0x002B77C0u; return; } if (c.pc != 0x004DE430u) [[unlikely]] return; }
L_004DE430:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE454u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004DE454u) [[unlikely]] return; }
L_004DE454:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE464u); set32(c.r[6], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_002E(c, 85u, depth + 1u); else { c.pc = 0x002B93A0u; return; } if (c.pc != 0x004DE464u) [[unlikely]] return; }
L_004DE464:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DE480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE498u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DE498u) [[unlikely]] return; }
L_004DE498:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DE4A8; } }
L_004DE4A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004DE564; } }
L_004DE4A8:
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[12], c.r[12].w[0] - 16352u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[13], 0u - 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[10], 0u - 3u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[2].w[0]), c.r[12].w[0]);
    set32(c.r[9], c.r[9].w[0] - 27952u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[8], 0u + 49u);
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u - 5u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[5], c.r[5].w[0] - 2848u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] - 21952u);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[12].d[0] = c.r[12].d[0] & c.r[13].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[14].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[2].w[0]), c.r[9].w[0]);
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 25u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[13].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[14].d[0];
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 25u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 47;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DE4A0u | kUnwind; return; } goto L_004DE4A0; } }
L_004DE564:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004DE570:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004DE580:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE5A4u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DE5A4u) [[unlikely]] return; }
L_004DE5A4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DE5CC; } }
    c.r[7].d[0] = ld8((c.r[16].w[0] + 116u));
    set32(c.r[5], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 120u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE5C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 108u, depth + 1u); else { c.pc = 0x002B1700u; return; } if (c.pc != 0x004DE5C8u) [[unlikely]] return; }
L_004DE5C8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DE5CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE5F0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004DE5F0u) [[unlikely]] return; }
L_004DE5F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE600u); set32(c.r[6], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_002E(c, 85u, depth + 1u); else { c.pc = 0x002B93A0u; return; } if (c.pc != 0x004DE600u) [[unlikely]] return; }
L_004DE600:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DE620:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE630u); set32(c.r[4], 0u + 528u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DE630u) [[unlikely]] return; }
L_004DE630:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DE640; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE640u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 141u, depth + 1u); else { c.pc = 0x004055C0u; return; } if (c.pc != 0x004DE640u) [[unlikely]] return; }
L_004DE640:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004DE650:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 32u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE670u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DE670u) [[unlikely]] return; }
L_004DE670:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DE680; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE680u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 313u, depth + 1u); else { c.pc = 0x003FF3E0u; return; } if (c.pc != 0x004DE680u) [[unlikely]] return; }
L_004DE680:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004DE6B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004DE6C0:
    set32(c.r[29], c.r[29].w[0] - 464u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.f[20] = ld32((c.r[29].w[0] + 172u));
    c.f[21] = ld32((c.r[29].w[0] + 188u));
    c.f[22] = ld32((c.r[29].w[0] + 204u));
    c.f[23] = ld32((c.r[29].w[0] + 220u));
    c.f[24] = ld32((c.r[29].w[0] + 236u));
    c.f[25] = ld32((c.r[29].w[0] + 252u));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE728u); set32(c.r[4], 0u + 496u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DE728u) [[unlikely]] return; }
L_004DE728:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004DE740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE73Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 18u, depth + 1u); else { c.pc = 0x00428340u; return; } if (c.pc != 0x004DE73Cu) [[unlikely]] return; }
L_004DE73C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DE740:
    set32(c.r[7], c.r[29].w[0] + 404u);
    set32(c.r[6], c.r[29].w[0] + 408u);
    set32(c.r[5], c.r[29].w[0] + 416u);
    set32(c.r[3], c.r[29].w[0] + 420u);
    set32(c.r[2], c.r[29].w[0] + 428u);
    set32(c.r[17], c.r[29].w[0] + 452u);
    st32((c.r[7].w[0]), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBF400000u);
    st32((c.r[6].w[0]), 0u);
    c.f[2] = c.r[4].w[0];
    st32((c.r[5].w[0]), 0u);
    set32(c.r[9], c.r[29].w[0] + 312u);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[8], c.r[29].w[0] + 324u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[4], c.r[29].w[0] + 328u);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[10], ld32((c.r[19].w[0] + 68u)));
    st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 16u));
    c.f[1] = ld32((c.r[19].w[0] + 20u));
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[29].w[0] + 272u), c.f[0]);
    st32((c.r[29].w[0] + 276u), c.f[3]);
    st32((c.r[29].w[0] + 280u), c.f[1]);
    st32((c.r[29].w[0] + 284u), c.f[25]);
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    st32((c.r[29].w[0] + 288u), c.f[0]);
    set32(c.r[10], ld32((c.r[19].w[0] + 72u)));
    st32((c.r[29].w[0] + 292u), c.r[10].w[0]);
    set32(c.r[10], ld32((c.r[19].w[0] + 76u)));
    st32((c.r[29].w[0] + 296u), c.r[10].w[0]);
    set32(c.r[10], ld32((c.r[19].w[0] + 80u)));
    st32((c.r[29].w[0] + 300u), c.r[10].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 112u));
    c.f[3] = ld32((c.r[19].w[0] + 108u));
    c.f[1] = ld32((c.r[19].w[0] + 104u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 304u), c.f[1]);
    st32((c.r[29].w[0] + 308u), c.f[3]);
    st32((c.r[29].w[0] + 316u), c.f[24]);
    st32((c.r[9].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 124u));
    c.f[1] = ld32((c.r[19].w[0] + 116u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[8].w[0]), 0u);
    st32((c.r[29].w[0] + 320u), c.f[1]);
    st32((c.r[29].w[0] + 332u), c.f[23]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[2] = ld32((c.r[19].w[0] + 132u));
    c.f[1] = ld32((c.r[19].w[0] + 136u));
    c.f[0] = ld32((c.r[19].w[0] + 128u));
    st32((c.r[29].w[0] + 336u), c.f[0]);
    st32((c.r[29].w[0] + 340u), c.f[2]);
    st32((c.r[29].w[0] + 344u), c.f[1]);
    st32((c.r[29].w[0] + 348u), c.f[22]);
    set32(c.r[4], ld32((c.r[19].w[0] + 176u)));
    c.budget -= 59;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_004DE838; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004DE854; } }
L_004DE838:
    set32(c.r[8], c.r[4].w[0] >> 1);
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[8].d[0] = c.r[8].d[0] | c.r[4].d[0];
    c.f[0] = c.r[8].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004DE854:
    st32((c.r[29].w[0] + 388u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[0] = ld32((c.r[19].w[0] + 180u));
    set32(c.r[16], c.r[29].w[0] + 432u);
    set32(c.r[22], c.r[29].w[0] + 444u);
    set32(c.r[4], c.r[4].w[0] - 19680u);
    st32((c.r[29].w[0] + 392u), c.f[0]);
    set32(c.r[8], ld32((c.r[19].w[0] + 184u)));
    st32((c.r[29].w[0] + 396u), c.r[8].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 188u));
    st32((c.r[29].w[0] + 400u), c.f[0]);
    set32(c.r[8], ld32((c.r[19].w[0] + 168u)));
    st32((c.r[7].w[0]), c.r[8].w[0]);
    set32(c.r[7], ld32((c.r[19].w[0] + 172u)));
    st32((c.r[6].w[0]), c.r[7].w[0]);
    c.f[2] = ld32((c.r[19].w[0] + 148u));
    c.f[1] = ld32((c.r[19].w[0] + 152u));
    c.f[0] = ld32((c.r[19].w[0] + 144u));
    st32((c.r[29].w[0] + 352u), c.f[0]);
    st32((c.r[29].w[0] + 356u), c.f[2]);
    st32((c.r[29].w[0] + 360u), c.f[1]);
    st32((c.r[29].w[0] + 364u), c.f[21]);
    c.f[2] = ld32((c.r[19].w[0] + 160u));
    c.f[1] = ld32((c.r[19].w[0] + 164u));
    c.f[0] = ld32((c.r[19].w[0] + 156u));
    st32((c.r[29].w[0] + 368u), c.f[0]);
    st32((c.r[29].w[0] + 372u), c.f[2]);
    st32((c.r[29].w[0] + 376u), c.f[1]);
    st32((c.r[29].w[0] + 380u), c.f[20]);
    set32(c.r[6], ld32((c.r[19].w[0] + 140u)));
    st32((c.r[29].w[0] + 384u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[19].w[0] + 196u)));
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 200u)));
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 204u));
    st32((c.r[29].w[0] + 424u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 192u)));
    st32((c.r[29].w[0] + 412u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 208u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[21].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    c.budget -= 47;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE910u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x004DE910u) [[unlikely]] return; }
L_004DE910:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DE964; } }
L_004DE918:
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DE988; } }
L_004DE924:
    set32(c.r[2], ld32((c.r[19].w[0] + 212u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE938u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_008A(c, 14u, depth + 1u); else { c.pc = 0x00428120u; return; } if (c.pc != 0x004DE938u) [[unlikely]] return; }
L_004DE938:
    set32(c.r[3], ld32((c.r[21].w[0] + 56u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE950u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 378u, depth + 1u); else { c.pc = 0x0046FF80u; return; } if (c.pc != 0x004DE950u) [[unlikely]] return; }
L_004DE950:
    set32(c.r[3], ld32((c.r[20].w[0] + 80u)));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_004DE99C; } }
L_004DE964:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 436u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 440u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DE918u | kUnwind; return; } goto L_004DE918; } }
L_004DE988:
    set32(c.r[2], 0u + 1u);
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 448u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DE924u | kUnwind; return; } goto L_004DE924; } }
L_004DE99C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 464u);  c.pc = t; return; }
L_004DE9E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DE9F8u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DE9F8u) [[unlikely]] return; }
L_004DE9F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DEA08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DEA08u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 330u, depth + 1u); else { c.pc = 0x003FF640u; return; } if (c.pc != 0x004DEA08u) [[unlikely]] return; }
L_004DEA08:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004DEA20:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.f[20] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DEA4Cu); set32(c.r[4], 0u + 224u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DEA4Cu) [[unlikely]] return; }
L_004DEA4C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DEA64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DEA60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 131u, depth + 1u); else { c.pc = 0x004B1080u; return; } if (c.pc != 0x004DEA60u) [[unlikely]] return; }
L_004DEA60:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DEA64:
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[2] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 96u), c.f[1]);
    st32((c.r[29].w[0] + 100u), c.f[3]);
    st32((c.r[29].w[0] + 104u), c.f[2]);
    st32((c.r[29].w[0] + 108u), c.f[20]);
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004DEAAC; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_004DEAC8; } }
L_004DEAAC:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[29].w[0] + 112u), c.r[3].w[0]);
    c.budget -= 7;
L_004DEAC8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DEB04u); st32((c.r[29].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 115u, depth + 1u); else { c.pc = 0x004B0DB0u; return; } if (c.pc != 0x004DEB04u) [[unlikely]] return; }
L_004DEB04:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DEB1Cu); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 378u, depth + 1u); else { c.pc = 0x0046FF80u; return; } if (c.pc != 0x004DEB1Cu) [[unlikely]] return; }
L_004DEB1C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004DEB40:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.f[20] = ld32((c.r[29].w[0] + 76u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DEB64u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DEB64u) [[unlikely]] return; }
L_004DEB64:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DEB7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DEB78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 156u, depth + 1u); else { c.pc = 0x004B14A0u; return; } if (c.pc != 0x004DEB78u) [[unlikely]] return; }
L_004DEB78:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DEB7C:
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[2]);
    st32((c.r[29].w[0] + 88u), c.f[1]);
    st32((c.r[29].w[0] + 92u), c.f[20]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DEBB4u); st8((c.r[29].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 150u, depth + 1u); else { c.pc = 0x004B1360u; return; } if (c.pc != 0x004DEBB4u) [[unlikely]] return; }
L_004DEBB4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004DEBD0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.f[20] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DEBFCu); set32(c.r[4], 0u + 320u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DEBFCu) [[unlikely]] return; }
L_004DEBFC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DEC14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DEC10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 35u, depth + 1u); else { c.pc = 0x004AC5C0u; return; } if (c.pc != 0x004DEC10u) [[unlikely]] return; }
L_004DEC10:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DEC14:
    c.f[2] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[3], c.r[29].w[0] + 121u);
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[2]);
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[20]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    st8((c.r[29].w[0] + 120u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DEC5Cu); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_0082(c, 202u, depth + 1u); else { c.pc = 0x00409AF0u; return; } if (c.pc != 0x004DEC5Cu) [[unlikely]] return; }
L_004DEC5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DECE0; } }
L_004DEC64:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], c.r[29].w[0] + 160u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 108u)));
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DECD8u); st32((c.r[29].w[0] + 148u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AB(c, 25u, depth + 1u); else { c.pc = 0x004AC380u; return; } if (c.pc != 0x004DECD8u) [[unlikely]] return; }
L_004DECD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004DECF0; } }
L_004DECE0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29200u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29200u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DEC64u | kUnwind; return; } goto L_004DEC64; } }
L_004DECF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004DED10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DED34u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DED34u) [[unlikely]] return; }
L_004DED34:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DED4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DED48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 222u, depth + 1u); else { c.pc = 0x0045F960u; return; } if (c.pc != 0x004DED48u) [[unlikely]] return; }
L_004DED48:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DED4C:
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[12] = ld32((c.r[16].w[0] + 68u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DED74u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0097(c, 212u, depth + 1u); else { c.pc = 0x0045F780u; return; } if (c.pc != 0x004DED74u) [[unlikely]] return; }
L_004DED74:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DED8Cu); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 378u, depth + 1u); else { c.pc = 0x0046FF80u; return; } if (c.pc != 0x004DED8Cu) [[unlikely]] return; }
L_004DED8C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004DEDB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DEDC8u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DEDC8u) [[unlikely]] return; }
L_004DEDC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DEDE0; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 56u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DEDE0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 356u, depth + 1u); else { c.pc = 0x004FF370u; return; } if (c.pc != 0x004DEDE0u) [[unlikely]] return; }
L_004DEDE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004DEDF0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[4], 0u + 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.f[20] = ld32((c.r[29].w[0] + 108u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DEE20u); c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DEE20u) [[unlikely]] return; }
L_004DEE20:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004DEE60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DEE34u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 185u, depth + 1u); else { c.pc = 0x004B1800u; return; } if (c.pc != 0x004DEE34u) [[unlikely]] return; }
L_004DEE34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004DEE60; } }
L_004DEE3C:
    set32(c.r[2], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 100u), c.r[2].w[0]);  if (t) { goto L_004DEE58; } }
L_004DEE4C:
    set32(c.r[2], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 3;
L_004DEE58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004DEF9C; } }
L_004DEE60:
    c.f[2] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[16], c.r[29].w[0] + 136u);
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[2]);
    st32((c.r[29].w[0] + 120u), c.f[1]);
    st32((c.r[29].w[0] + 124u), c.f[20]);
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st8((c.r[29].w[0] + 128u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[29].w[0] + 132u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 64u));
    c.budget -= 19;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004DEEB8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004DEED4; } }
L_004DEEB8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004DEED4:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 60u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004DEEEC; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004DEF08; } }
L_004DEEEC:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004DEF08:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 56u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004DEF20; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004DEF3C; } }
L_004DEF20:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_004DEF3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 152u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    st32((c.r[29].w[0] + 160u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DEF70u); st8((c.r[29].w[0] + 164u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 182u, depth + 1u); else { c.pc = 0x004B1750u; return; } if (c.pc != 0x004DEF70u) [[unlikely]] return; }
L_004DEF70:
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DEE4Cu | kUnwind; return; } goto L_004DEE4C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DEE3Cu | kUnwind; return; } goto L_004DEE3C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DEE3Cu | kUnwind; return; } goto L_004DEE3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DEE58u | kUnwind; return; } goto L_004DEE58; } }
L_004DEF9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004DEFC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DEFE4u); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DEFE4u) [[unlikely]] return; }
L_004DEFE4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004DEFFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DEFF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 363u, depth + 1u); else { c.pc = 0x003FFAB0u; return; } if (c.pc != 0x004DEFF8u) [[unlikely]] return; }
L_004DEFF8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DEFFC:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 56u));
    set32(c.r[6], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF00Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 358u, depth + 1u); else { c.pc = 0x003FFA00u; return; } if (c.pc != 0x004DF00Cu) [[unlikely]] return; }
L_004DF00C:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004DF024; } }
L_004DF01C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004DF050; } }
L_004DF024:
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004DF028:
    set32(c.r[5], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF034u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 357u, depth + 1u); else { c.pc = 0x003FF9D0u; return; } if (c.pc != 0x004DF034u) [[unlikely]] return; }
L_004DF034:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DF028u | kUnwind; return; } goto L_004DF028; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DF01Cu | kUnwind; return; } goto L_004DF01C; } }
L_004DF050:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004DF070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF088u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DF088u) [[unlikely]] return; }
L_004DF088:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DF098; } }
L_004DF090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004DF154; } }
L_004DF098:
    set32(c.r[3], ld32((c.r[16].w[0] + 116u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[12], c.r[12].w[0] - 16352u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[13], 0u - 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[10], 0u - 3u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[2].w[0]), c.r[12].w[0]);
    set32(c.r[9], c.r[9].w[0] - 27952u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[8], 0u + 48u);
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u - 5u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[5], c.r[5].w[0] - 2848u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] - 22256u);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[12].d[0] = c.r[12].d[0] & c.r[13].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[14].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[2].w[0]), c.r[9].w[0]);
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 25u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[13].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[14].d[0];
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 25u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 47;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DF090u | kUnwind; return; } goto L_004DF090; } }
L_004DF154:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004DF160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF178u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DF178u) [[unlikely]] return; }
L_004DF178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DF188; } }
L_004DF180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004DF244; } }
L_004DF188:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[12], c.r[12].w[0] - 16352u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[13], 0u - 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[10], 0u - 3u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[2].w[0]), c.r[12].w[0]);
    set32(c.r[9], c.r[9].w[0] - 27952u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[8], 0u + 46u);
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u - 5u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[5], c.r[5].w[0] - 2848u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] - 22560u);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[12].d[0] = c.r[12].d[0] & c.r[13].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[14].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[2].w[0]), c.r[9].w[0]);
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 25u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[13].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[14].d[0];
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 25u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 47;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DF180u | kUnwind; return; } goto L_004DF180; } }
L_004DF244:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004DF250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF268u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DF268u) [[unlikely]] return; }
L_004DF268:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DF278; } }
L_004DF270:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004DF334; } }
L_004DF278:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[12], c.r[12].w[0] - 16352u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[13], 0u - 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[10], 0u - 3u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[2].w[0]), c.r[12].w[0]);
    set32(c.r[9], c.r[9].w[0] - 27952u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[8], 0u + 45u);
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u - 5u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[5], c.r[5].w[0] - 2848u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] - 22864u);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[12].d[0] = c.r[12].d[0] & c.r[13].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[14].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[2].w[0]), c.r[9].w[0]);
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 25u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[13].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[14].d[0];
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 25u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 47;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DF270u | kUnwind; return; } goto L_004DF270; } }
L_004DF334:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004DF340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF358u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DF358u) [[unlikely]] return; }
L_004DF358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DF368; } }
L_004DF360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004DF424; } }
L_004DF368:
    set32(c.r[3], ld32((c.r[16].w[0] + 144u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[12], c.r[12].w[0] - 16352u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[13], 0u - 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[10], 0u - 3u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[2].w[0]), c.r[12].w[0]);
    set32(c.r[9], c.r[9].w[0] - 27952u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[8], 0u + 44u);
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u - 5u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[5], c.r[5].w[0] - 2848u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] - 23168u);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[12].d[0] = c.r[12].d[0] & c.r[13].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[14].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[2].w[0]), c.r[9].w[0]);
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 25u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[13].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[14].d[0];
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 25u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 47;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DF360u | kUnwind; return; } goto L_004DF360; } }
L_004DF424:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004DF430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF448u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DF448u) [[unlikely]] return; }
L_004DF448:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DF458; } }
L_004DF450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004DF514; } }
L_004DF458:
    set32(c.r[3], ld32((c.r[16].w[0] + 120u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[12], c.r[12].w[0] - 16352u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[13], 0u - 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[10], 0u - 3u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[2].w[0]), c.r[12].w[0]);
    set32(c.r[9], c.r[9].w[0] - 27952u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[8], 0u + 43u);
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u - 5u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[5], c.r[5].w[0] - 2848u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] - 23472u);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[12].d[0] = c.r[12].d[0] & c.r[13].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[14].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[2].w[0]), c.r[9].w[0]);
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 25u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[13].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[14].d[0];
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 25u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 47;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DF450u | kUnwind; return; } goto L_004DF450; } }
L_004DF514:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004DF520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF538u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DF538u) [[unlikely]] return; }
L_004DF538:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DF548; } }
L_004DF540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004DF604; } }
L_004DF548:
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[12], c.r[12].w[0] - 16352u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[7], c.r[4].w[0] << 2);
    set32(c.r[13], 0u - 2u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[10], 0u - 3u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[2].w[0]), c.r[12].w[0]);
    set32(c.r[9], c.r[9].w[0] - 27952u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[8], 0u + 42u);
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u - 5u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[5], c.r[5].w[0] - 2848u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] - 23776u);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[12].d[0] = c.r[12].d[0] & c.r[13].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[14].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[2].w[0]), c.r[9].w[0]);
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 25u));
    c.r[8].d[0] = c.r[8].d[0] & c.r[13].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[14].d[0];
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 25u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 47;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DF540u | kUnwind; return; } goto L_004DF540; } }
L_004DF604:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004DF610:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF634u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DF634u) [[unlikely]] return; }
L_004DF634:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004DF65C; } }
L_004DF63C:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF654u); set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_009B(c, 378u, depth + 1u); else { c.pc = 0x0046FF80u; return; } if (c.pc != 0x004DF654u) [[unlikely]] return; }
L_004DF654:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004DF734; } }
L_004DF65C:
    c.f[2] = ld32((c.r[16].w[0] + 76u));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    set32(c.r[11], c.r[11].w[0] - 16352u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[9], 0u - 2u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[7], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[6], c.r[6].w[0] - 12672u);
    set32(c.r[5], c.r[5].w[0] + 16976u);
    set32(c.r[4], 0u + 255u);
    set32(c.r[3], c.r[3].w[0] + 30944u);
    st32((c.r[17].w[0]), c.r[11].w[0]);
    set32(c.r[2], 0u + 2u);
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[12], 0u + 1u);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[11].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[17].w[0]), c.r[6].w[0]);
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0]), c.r[5].w[0]);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 56u), 0u);
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 41u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 42u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st8((c.r[17].w[0] + 41u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 42u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st32((c.r[17].w[0] + 64u), c.f[0]);
    st32((c.r[17].w[0] + 68u), c.f[1]);
    c.budget -= 54;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DF63Cu | kUnwind; return; } goto L_004DF63C; } }
L_004DF734:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DF750:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004DF760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF778u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DF778u) [[unlikely]] return; }
L_004DF778:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DF788; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF788u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 194u, depth + 1u); else { c.pc = 0x004B1970u; return; } if (c.pc != 0x004DF788u) [[unlikely]] return; }
L_004DF788:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004DF7B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF7C8u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DF7C8u) [[unlikely]] return; }
L_004DF7C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DF7D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF7D8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 215u, depth + 1u); else { c.pc = 0x004B1E70u; return; } if (c.pc != 0x004DF7D8u) [[unlikely]] return; }
L_004DF7D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004DF800:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF82Cu); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DF82Cu) [[unlikely]] return; }
L_004DF82C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004DF844; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF840u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 28u, depth + 1u); else { c.pc = 0x00500380u; return; } if (c.pc != 0x004DF840u) [[unlikely]] return; }
L_004DF840:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DF844:
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF890u); st32((c.r[29].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 16u, depth + 1u); else { c.pc = 0x005001C0u; return; } if (c.pc != 0x004DF890u) [[unlikely]] return; }
L_004DF890:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[2].w[0] - 17652u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004DF8D0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004DF8BC; } }
    st32((c.r[18].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 28172u), c.r[16].w[0]);
    c.budget -= 2;
L_004DF8BC:
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004DF8E0; } }
L_004DF8D0:
    st32((c.r[18].w[0] + 60u), 0u);
    st32((c.r[28].w[0] - 28172u), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28176u), c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DF8BCu | kUnwind; return; } goto L_004DF8BC; } }
L_004DF8E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004DF900:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF91Cu); set32(c.r[4], 0u + 40u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DF91Cu) [[unlikely]] return; }
L_004DF91C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004DF93C; } }
L_004DF924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DF92Cu); c.r[4].d[0] = ld8((c.r[17].w[0] + 60u));  if (depth < kMaxDepth) unit_0082(c, 202u, depth + 1u); else { c.pc = 0x00409AF0u; return; } if (c.pc != 0x004DF92Cu) [[unlikely]] return; }
L_004DF92C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DF9CC; } }
L_004DF934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004DF9DC; } }
L_004DF93C:
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[12], ld32((c.r[17].w[0] + 72u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[11], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[8], c.r[8].w[0] - 16352u);
    set32(c.r[10], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[6], 0u - 2u);
    set32(c.r[9], ld32((c.r[17].w[0] + 60u)));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], 0u - 3u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[3], c.r[3].w[0] + 7728u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st32((c.r[16].w[0]), c.r[8].w[0]);
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[8].d[0] = ld8((c.r[16].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 18u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[10].w[0]);
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[11].w[0]);
    st8((c.r[16].w[0] + 29u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 32u), c.r[12].w[0]);
    c.budget -= 36;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DF924u | kUnwind; return; } goto L_004DF924; } }
L_004DF9CC:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29200u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29200u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DF934u | kUnwind; return; } goto L_004DF934; } }
L_004DF9DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004DF9F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFA14u); set32(c.r[4], 0u + 56u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DFA14u) [[unlikely]] return; }
L_004DFA14:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004DFA2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFA28u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0095(c, 335u, depth + 1u); else { c.pc = 0x00457440u; return; } if (c.pc != 0x004DFA28u) [[unlikely]] return; }
L_004DFA28:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004DFA2C:
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFA3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 85u, depth + 1u); else { c.pc = 0x002BC790u; return; } if (c.pc != 0x004DFA3Cu) [[unlikely]] return; }
L_004DFA3C:
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFA5Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 63u, depth + 1u); else { c.pc = 0x002F0620u; return; } if (c.pc != 0x004DFA5Cu) [[unlikely]] return; }
L_004DFA5C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 19679u);
    c.budget -= 3;
L_004DFA68:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004DFAA0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[4].d[0] = c.r[5].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004DFAA0; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DFA68u | kUnwind; return; } goto L_004DFA68; } }
    c.budget -= 1;
L_004DFAA0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], c.r[8].w[0] - c.r[3].w[0]);
    c.r[8].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFACCu); c.r[8].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0095(c, 326u, depth + 1u); else { c.pc = 0x004571F0u; return; } if (c.pc != 0x004DFACCu) [[unlikely]] return; }
L_004DFACC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DFAF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFB00u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DFB00u) [[unlikely]] return; }
L_004DFB00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DFB10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFB10u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 221u, depth + 1u); else { c.pc = 0x004B1F90u; return; } if (c.pc != 0x004DFB10u) [[unlikely]] return; }
L_004DFB10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004DFB20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFB44u); set32(c.r[4], 0u + 52u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DFB44u) [[unlikely]] return; }
L_004DFB44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004DFB6C; } }
L_004DFB4C:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFB64u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_007F(c, 190u, depth + 1u); else { c.pc = 0x003FDEA0u; return; } if (c.pc != 0x004DFB64u) [[unlikely]] return; }
L_004DFB64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004DFBEC; } }
L_004DFB6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    set32(c.r[6], 0u - 2u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], 0u - 3u);
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[3], c.r[3].w[0] - 12672u);
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 672u);
    c.r[8].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 18u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[17].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st8((c.r[17].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 32u), 0u);
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DFB4Cu | kUnwind; return; } goto L_004DFB4C; } }
L_004DFBEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DFC10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004DFC5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFC38u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DFC38u) [[unlikely]] return; }
L_004DFC38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DFC80; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFC54u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 416u, depth + 1u); else { c.pc = 0x003FB970u; return; } if (c.pc != 0x004DFC54u) [[unlikely]] return; }
L_004DFC54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004DFC84; } }
L_004DFC5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFC64u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DFC64u) [[unlikely]] return; }
L_004DFC64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DFC80; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFC80u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 416u, depth + 1u); else { c.pc = 0x003FB970u; return; } if (c.pc != 0x004DFC80u) [[unlikely]] return; }
L_004DFC80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004DFC84:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004DFC90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFCB4u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DFCB4u) [[unlikely]] return; }
L_004DFCB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004DFCFC; } }
L_004DFCBC:
    set32(c.r[5], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFCC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_009C(c, 68u, depth + 1u); else { c.pc = 0x00470900u; return; } if (c.pc != 0x004DFCC8u) [[unlikely]] return; }
L_004DFCC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFCE4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007F(c, 77u, depth + 1u); else { c.pc = 0x003FCA50u; return; } if (c.pc != 0x004DFCE4u) [[unlikely]] return; }
L_004DFCE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFCF4u); set32(c.r[6], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_002E(c, 85u, depth + 1u); else { c.pc = 0x002B93A0u; return; } if (c.pc != 0x004DFCF4u) [[unlikely]] return; }
L_004DFCF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004DFD1C; } }
L_004DFCFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 54u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFD0Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 103u, depth + 1u); else { c.pc = 0x002B9620u; return; } if (c.pc != 0x004DFD0Cu) [[unlikely]] return; }
L_004DFD0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 17296u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DFCBCu | kUnwind; return; } goto L_004DFCBC; } }
L_004DFD1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DFD40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.f[23] = ld32((c.r[29].w[0] + 60u));
    c.f[22] = ld32((c.r[16].w[0] + 12u));
    c.f[21] = ld32((c.r[16].w[0] + 16u));
    c.f[20] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFD78u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DFD78u) [[unlikely]] return; }
L_004DFD78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DFD88; } }
L_004DFD80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004DFE20; } }
L_004DFD88:
    set32(c.r[10], ld32((c.r[16].w[0] + 60u)));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[9], c.r[9].w[0] - 16352u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[7], 0u - 2u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], 0u - 3u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[4], c.r[4].w[0] - 12672u);
    set32(c.r[3], c.r[3].w[0] + 15728u);
    st32((c.r[2].w[0]), c.r[9].w[0]);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[9].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st8((c.r[2].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 48u), c.f[22]);
    st32((c.r[2].w[0] + 52u), c.f[21]);
    st32((c.r[2].w[0] + 56u), c.f[20]);
    st32((c.r[2].w[0] + 60u), c.f[23]);
    st32((c.r[2].w[0] + 64u), c.f[0]);
    c.budget -= 38;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 68u), static_cast<std::uint8_t>(c.r[10].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DFD80u | kUnwind; return; } goto L_004DFD80; } }
L_004DFE20:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004DFE40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFE58u); set32(c.r[4], 0u + 68u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DFE58u) [[unlikely]] return; }
L_004DFE58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004DFE80; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[16].w[0] + 164u));
    set32(c.r[2], ld32((c.r[16].w[0] + 172u)));
    set32(c.r[5], c.r[16].w[0] + 60u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 56u));
    set32(c.r[9], ld32((c.r[16].w[0] + 168u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFE80u); c.r[8].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_009C(c, 285u, depth + 1u); else { c.pc = 0x004729A0u; return; } if (c.pc != 0x004DFE80u) [[unlikely]] return; }
L_004DFE80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004DFE90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 28u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFEA8u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DFEA8u) [[unlikely]] return; }
L_004DFEA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DFEC8; } }
L_004DFEB0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 56u)));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 24u), c.r[4].w[0]);  if (t) { goto L_004DFF30; } }
L_004DFEC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], 0u - 2u);
    set32(c.r[3], c.r[3].w[0] - 16352u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u - 3u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + 31264u);
    st32((c.r[2].w[0] + 12u), 0u);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 24u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DFEB0u | kUnwind; return; } goto L_004DFEB0; } }
L_004DFF30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004DFF40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004DFF58u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004DFF58u) [[unlikely]] return; }
L_004DFF58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004DFF68; } }
L_004DFF60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004DFFD8; } }
L_004DFF68:
    set32(c.r[10], ld32((c.r[16].w[0] + 60u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[9], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[8], c.r[8].w[0] - 16352u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], 0u - 2u);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], 0u - 3u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[3], c.r[3].w[0] + 32128u);
    st32((c.r[2].w[0]), c.r[8].w[0]);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[2].w[0] + 18u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[9].w[0]);
    c.budget -= 28;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(c.r[10].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004DFF60u | kUnwind; return; } goto L_004DFF60; } }
L_004DFFD8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004DFFF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 4;
    [[clang::musttail]] return unit_00B8(c, 1u, depth);
}

}

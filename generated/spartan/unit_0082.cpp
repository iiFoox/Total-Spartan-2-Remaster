#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0082[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20,
    0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0,
    0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0,
    0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0,
    0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 69, 0, 70, 0, 71,
    0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0,
    92, 0, 0, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0,
    107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0,
    0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 120,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 124, 0, 0, 125, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 131,
    0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0,
    0, 142, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0,
    0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167,
    0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 189, 0,
    190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    257, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 275,
    0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0,
    0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0,
    318, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 325, 0,
    0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0,
    0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0,
    0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0,
    351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363,
    0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368,
    0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0,
    0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0,
    0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0,
    0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0,
};

void unit_0082(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00408000;
    case 2u: goto L_00408014;
    case 3u: goto L_00408020;
    case 4u: goto L_0040804C;
    case 5u: goto L_00408054;
    case 6u: goto L_00408068;
    case 7u: goto L_00408070;
    case 8u: goto L_00408080;
    case 9u: goto L_004080C0;
    case 10u: goto L_004080E4;
    case 11u: goto L_004080EC;
    case 12u: goto L_00408110;
    case 13u: goto L_004081B0;
    case 14u: goto L_004081C0;
    case 15u: goto L_004081E0;
    case 16u: goto L_004081E8;
    case 17u: goto L_00408220;
    case 18u: goto L_0040823C;
    case 19u: goto L_0040826C;
    case 20u: goto L_004082FC;
    case 21u: goto L_00408314;
    case 22u: goto L_0040833C;
    case 23u: goto L_00408354;
    case 24u: goto L_00408388;
    case 25u: goto L_00408394;
    case 26u: goto L_004083AC;
    case 27u: goto L_004083D4;
    case 28u: goto L_004083EC;
    case 29u: goto L_00408420;
    case 30u: goto L_0040842C;
    case 31u: goto L_00408444;
    case 32u: goto L_0040846C;
    case 33u: goto L_00408484;
    case 34u: goto L_004084B8;
    case 35u: goto L_004084D0;
    case 36u: goto L_004084DC;
    case 37u: goto L_004084F8;
    case 38u: goto L_00408508;
    case 39u: goto L_0040851C;
    case 40u: goto L_00408560;
    case 41u: goto L_0040858C;
    case 42u: goto L_004085B0;
    case 43u: goto L_004085F0;
    case 44u: goto L_00408610;
    case 45u: goto L_00408618;
    case 46u: goto L_00408628;
    case 47u: goto L_00408648;
    case 48u: goto L_00408668;
    case 49u: goto L_00408690;
    case 50u: goto L_004086D0;
    case 51u: goto L_004086F0;
    case 52u: goto L_004086F8;
    case 53u: goto L_00408708;
    case 54u: goto L_00408728;
    case 55u: goto L_00408748;
    case 56u: goto L_00408770;
    case 57u: goto L_00408794;
    case 58u: goto L_004087D0;
    case 59u: goto L_00408868;
    case 60u: goto L_00408878;
    case 61u: goto L_00408888;
    case 62u: goto L_004088A0;
    case 63u: goto L_004088D0;
    case 64u: goto L_0040893C;
    case 65u: goto L_00408974;
    case 66u: goto L_004089B8;
    case 67u: goto L_004089DC;
    case 68u: goto L_004089E4;
    case 69u: goto L_004089EC;
    case 70u: goto L_004089F4;
    case 71u: goto L_004089FC;
    case 72u: goto L_00408A04;
    case 73u: goto L_00408A18;
    case 74u: goto L_00408A3C;
    case 75u: goto L_00408A80;
    case 76u: goto L_00408A9C;
    case 77u: goto L_00408AA4;
    case 78u: goto L_00408AAC;
    case 79u: goto L_00408AB4;
    case 80u: goto L_00408ABC;
    case 81u: goto L_00408AC4;
    case 82u: goto L_00408ACC;
    case 83u: goto L_00408B0C;
    case 84u: goto L_00408B14;
    case 85u: goto L_00408B48;
    case 86u: goto L_00408B50;
    case 87u: goto L_00408B58;
    case 88u: goto L_00408B60;
    case 89u: goto L_00408B68;
    case 90u: goto L_00408B70;
    case 91u: goto L_00408B78;
    case 92u: goto L_00408B80;
    case 93u: goto L_00408B90;
    case 94u: goto L_00408B98;
    case 95u: goto L_00408BA0;
    case 96u: goto L_00408BA8;
    case 97u: goto L_00408BB0;
    case 98u: goto L_00408BB8;
    case 99u: goto L_00408BC0;
    case 100u: goto L_00408BC8;
    case 101u: goto L_00408BD0;
    case 102u: goto L_00408BD8;
    case 103u: goto L_00408BE0;
    case 104u: goto L_00408BE8;
    case 105u: goto L_00408BF0;
    case 106u: goto L_00408BF8;
    case 107u: goto L_00408C00;
    case 108u: goto L_00408C0C;
    case 109u: goto L_00408C34;
    case 110u: goto L_00408C3C;
    case 111u: goto L_00408C48;
    case 112u: goto L_00408C70;
    case 113u: goto L_00408C78;
    case 114u: goto L_00408C84;
    case 115u: goto L_00408CAC;
    case 116u: goto L_00408CB4;
    case 117u: goto L_00408CC0;
    case 118u: goto L_00408CE8;
    case 119u: goto L_00408CF0;
    case 120u: goto L_00408CFC;
    case 121u: goto L_00408D08;
    case 122u: goto L_00408D58;
    case 123u: goto L_00408D60;
    case 124u: goto L_00408D6C;
    case 125u: goto L_00408D78;
    case 126u: goto L_00408DD4;
    case 127u: goto L_00408DF0;
    case 128u: goto L_00408E30;
    case 129u: goto L_00408E64;
    case 130u: goto L_00408E74;
    case 131u: goto L_00408E7C;
    case 132u: goto L_00408E94;
    case 133u: goto L_00408EA8;
    case 134u: goto L_00408EF0;
    case 135u: goto L_00408F10;
    case 136u: goto L_00408F20;
    case 137u: goto L_00408F3C;
    case 138u: goto L_00408F48;
    case 139u: goto L_00408F60;
    case 140u: goto L_00408F70;
    case 141u: goto L_00408FE4;
    case 142u: goto L_00409004;
    case 143u: goto L_0040900C;
    case 144u: goto L_0040901C;
    case 145u: goto L_00409038;
    case 146u: goto L_00409060;
    case 147u: goto L_00409090;
    case 148u: goto L_0040909C;
    case 149u: goto L_004090A8;
    case 150u: goto L_004090F8;
    case 151u: goto L_00409140;
    case 152u: goto L_004091C8;
    case 153u: goto L_004091F8;
    case 154u: goto L_00409204;
    case 155u: goto L_0040921C;
    case 156u: goto L_0040922C;
    case 157u: goto L_00409238;
    case 158u: goto L_00409248;
    case 159u: goto L_00409254;
    case 160u: goto L_0040926C;
    case 161u: goto L_004092E8;
    case 162u: goto L_0040944C;
    case 163u: goto L_00409508;
    case 164u: goto L_00409548;
    case 165u: goto L_004095BC;
    case 166u: goto L_004095F0;
    case 167u: goto L_0040967C;
    case 168u: goto L_00409688;
    case 169u: goto L_004096A4;
    case 170u: goto L_004096B4;
    case 171u: goto L_004096C0;
    case 172u: goto L_004096D0;
    case 173u: goto L_00409700;
    case 174u: goto L_00409778;
    case 175u: goto L_004097F0;
    case 176u: goto L_00409848;
    case 177u: goto L_00409884;
    case 178u: goto L_004098B0;
    case 179u: goto L_00409910;
    case 180u: goto L_004099A0;
    case 181u: goto L_00409A10;
    case 182u: goto L_00409A40;
    case 183u: goto L_00409A48;
    case 184u: goto L_00409A50;
    case 185u: goto L_00409A58;
    case 186u: goto L_00409A60;
    case 187u: goto L_00409A68;
    case 188u: goto L_00409A70;
    case 189u: goto L_00409A78;
    case 190u: goto L_00409A80;
    case 191u: goto L_00409A88;
    case 192u: goto L_00409A90;
    case 193u: goto L_00409A98;
    case 194u: goto L_00409AA0;
    case 195u: goto L_00409AA8;
    case 196u: goto L_00409AB0;
    case 197u: goto L_00409AB8;
    case 198u: goto L_00409AC0;
    case 199u: goto L_00409AC8;
    case 200u: goto L_00409AD0;
    case 201u: goto L_00409AD8;
    case 202u: goto L_00409AF0;
    case 203u: goto L_00409B00;
    case 204u: goto L_00409B10;
    case 205u: goto L_00409B20;
    case 206u: goto L_00409B74;
    case 207u: goto L_00409B90;
    case 208u: goto L_00409BC0;
    case 209u: goto L_00409BF4;
    case 210u: goto L_00409C10;
    case 211u: goto L_00409C30;
    case 212u: goto L_00409C50;
    case 213u: goto L_00409C70;
    case 214u: goto L_00409C94;
    case 215u: goto L_00409CB0;
    case 216u: goto L_00409CDC;
    case 217u: goto L_00409CF8;
    case 218u: goto L_00409D20;
    case 219u: goto L_00409D48;
    case 220u: goto L_00409D60;
    case 221u: goto L_00409D8C;
    case 222u: goto L_00409DAC;
    case 223u: goto L_00409DD0;
    case 224u: goto L_00409DF8;
    case 225u: goto L_00409E10;
    case 226u: goto L_00409E30;
    case 227u: goto L_00409E50;
    case 228u: goto L_00409E74;
    case 229u: goto L_00409E90;
    case 230u: goto L_00409EA0;
    case 231u: goto L_00409ED0;
    case 232u: goto L_00409EE4;
    case 233u: goto L_0040A008;
    case 234u: goto L_0040A02C;
    case 235u: goto L_0040A080;
    case 236u: goto L_0040A144;
    case 237u: goto L_0040A158;
    case 238u: goto L_0040A198;
    case 239u: goto L_0040A234;
    case 240u: goto L_0040A248;
    case 241u: goto L_0040A280;
    case 242u: goto L_0040A3A0;
    case 243u: goto L_0040A3E0;
    case 244u: goto L_0040A450;
    case 245u: goto L_0040A4A4;
    case 246u: goto L_0040A4FC;
    case 247u: goto L_0040A558;
    case 248u: goto L_0040A574;
    case 249u: goto L_0040A5F8;
    case 250u: goto L_0040A688;
    case 251u: goto L_0040A6D0;
    case 252u: goto L_0040A744;
    case 253u: goto L_0040A75C;
    case 254u: goto L_0040A768;
    case 255u: goto L_0040A81C;
    case 256u: goto L_0040A890;
    case 257u: goto L_0040A900;
    case 258u: goto L_0040A908;
    case 259u: goto L_0040A914;
    case 260u: goto L_0040A9C0;
    case 261u: goto L_0040A9D0;
    case 262u: goto L_0040A9F0;
    case 263u: goto L_0040AAA0;
    case 264u: goto L_0040AAD8;
    case 265u: goto L_0040AB0C;
    case 266u: goto L_0040AB40;
    case 267u: goto L_0040AB88;
    case 268u: goto L_0040ABB8;
    case 269u: goto L_0040ABE8;
    case 270u: goto L_0040AC74;
    case 271u: goto L_0040ACA0;
    case 272u: goto L_0040ACB0;
    case 273u: goto L_0040ACE4;
    case 274u: goto L_0040ACF0;
    case 275u: goto L_0040ACFC;
    case 276u: goto L_0040AD10;
    case 277u: goto L_0040AD30;
    case 278u: goto L_0040AD44;
    case 279u: goto L_0040AD80;
    case 280u: goto L_0040ADBC;
    case 281u: goto L_0040ADC8;
    case 282u: goto L_0040ADF8;
    case 283u: goto L_0040AE2C;
    case 284u: goto L_0040AEB4;
    case 285u: goto L_0040AEE0;
    case 286u: goto L_0040AF14;
    case 287u: goto L_0040AF28;
    case 288u: goto L_0040AF58;
    case 289u: goto L_0040AF88;
    case 290u: goto L_0040AFD0;
    case 291u: goto L_0040B018;
    case 292u: goto L_0040B038;
    case 293u: goto L_0040B050;
    case 294u: goto L_0040B080;
    case 295u: goto L_0040B0B0;
    case 296u: goto L_0040B0F0;
    case 297u: goto L_0040B138;
    case 298u: goto L_0040B170;
    case 299u: goto L_0040B198;
    case 300u: goto L_0040B1B4;
    case 301u: goto L_0040B1CC;
    case 302u: goto L_0040B1E4;
    case 303u: goto L_0040B1F0;
    case 304u: goto L_0040B200;
    case 305u: goto L_0040B22C;
    case 306u: goto L_0040B240;
    case 307u: goto L_0040B25C;
    case 308u: goto L_0040B280;
    case 309u: goto L_0040B2B0;
    case 310u: goto L_0040B2D0;
    case 311u: goto L_0040B300;
    case 312u: goto L_0040B320;
    case 313u: goto L_0040B364;
    case 314u: goto L_0040B384;
    case 315u: goto L_0040B438;
    case 316u: goto L_0040B444;
    case 317u: goto L_0040B474;
    case 318u: goto L_0040B480;
    case 319u: goto L_0040B494;
    case 320u: goto L_0040B4A0;
    case 321u: goto L_0040B4B8;
    case 322u: goto L_0040B4C4;
    case 323u: goto L_0040B4D8;
    case 324u: goto L_0040B4E4;
    case 325u: goto L_0040B4F8;
    case 326u: goto L_0040B508;
    case 327u: goto L_0040B520;
    case 328u: goto L_0040B540;
    case 329u: goto L_0040B560;
    case 330u: goto L_0040B570;
    case 331u: goto L_0040B58C;
    case 332u: goto L_0040B5AC;
    case 333u: goto L_0040B5BC;
    case 334u: goto L_0040B5CC;
    case 335u: goto L_0040B5E4;
    case 336u: goto L_0040B620;
    case 337u: goto L_0040B638;
    case 338u: goto L_0040B690;
    case 339u: goto L_0040B6C0;
    case 340u: goto L_0040B6E0;
    case 341u: goto L_0040B6F0;
    case 342u: goto L_0040B710;
    case 343u: goto L_0040B728;
    case 344u: goto L_0040B794;
    case 345u: goto L_0040B7F0;
    case 346u: goto L_0040B808;
    case 347u: goto L_0040B864;
    case 348u: goto L_0040B8A0;
    case 349u: goto L_0040B8D0;
    case 350u: goto L_0040B8F0;
    case 351u: goto L_0040B900;
    case 352u: goto L_0040B910;
    case 353u: goto L_0040B968;
    case 354u: goto L_0040B9B8;
    case 355u: goto L_0040B9D4;
    case 356u: goto L_0040BA00;
    case 357u: goto L_0040BA70;
    case 358u: goto L_0040BAC0;
    case 359u: goto L_0040BACC;
    case 360u: goto L_0040BAE8;
    case 361u: goto L_0040BB2C;
    case 362u: goto L_0040BB38;
    case 363u: goto L_0040BB7C;
    case 364u: goto L_0040BB88;
    case 365u: goto L_0040BB9C;
    case 366u: goto L_0040BBA8;
    case 367u: goto L_0040BBC8;
    case 368u: goto L_0040BBFC;
    case 369u: goto L_0040BC08;
    case 370u: goto L_0040BC3C;
    case 371u: goto L_0040BC48;
    case 372u: goto L_0040BC68;
    case 373u: goto L_0040BCC8;
    case 374u: goto L_0040BD0C;
    case 375u: goto L_0040BD2C;
    case 376u: goto L_0040BD40;
    case 377u: goto L_0040BD60;
    case 378u: goto L_0040BD74;
    case 379u: goto L_0040BD94;
    case 380u: goto L_0040BDA4;
    case 381u: goto L_0040BDB4;
    case 382u: goto L_0040BDC8;
    case 383u: goto L_0040BDD8;
    case 384u: goto L_0040BDF4;
    case 385u: goto L_0040BE10;
    case 386u: goto L_0040BE48;
    case 387u: goto L_0040BE74;
    case 388u: goto L_0040BE90;
    case 389u: goto L_0040BFA0;
    case 390u: goto L_0040BFC0;
    case 391u: goto L_0040BFF8;
    default: bad_entry(c, 0x00408000u); return;
    }
L_00408000:
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[5], ld32((c.r[20].w[0] + 116u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00408014u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00408014u) [[unlikely]] return; }
L_00408014:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408020u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x00408020u) [[unlikely]] return; }
L_00408020:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 20u));
    c.r[4].d[0] = ~(c.r[22].d[0] | 0ull);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    st8((c.r[20].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[20].w[0] + 20u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407DA4u | kUnwind; return; } [[clang::musttail]] return unit_0081(c, 310u, depth); } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040804Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x0040804Cu) [[unlikely]] return; }
L_0040804C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[20].w[0] + 161u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407DF0u | kUnwind; return; } [[clang::musttail]] return unit_0081(c, 311u, depth); } }
L_00408054:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 284u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408068u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 414u, depth + 1u); else { c.pc = 0x003F7B30u; return; } if (c.pc != 0x00408068u) [[unlikely]] return; }
L_00408068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[20].w[0] + 162u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407CDCu | kUnwind; return; } [[clang::musttail]] return unit_0081(c, 308u, depth); } }
L_00408070:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 184u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00408080u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00408080u) [[unlikely]] return; }
L_00408080:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407CE8u | kUnwind; return; } [[clang::musttail]] return unit_0081(c, 309u, depth); } }
    set32(c.r[6], ld32((c.r[20].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_004080AC; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 531u));
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 531u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_004080AC:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 162u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[16].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004080D0; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 162u));
    c.budget -= 1;
L_004080C0:
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 162u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407CE8u | kUnwind; return; } [[clang::musttail]] return unit_0081(c, 309u, depth); } }
L_004080D0:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 284u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004080E4u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 414u, depth + 1u); else { c.pc = 0x003F7B30u; return; } if (c.pc != 0x004080E4u) [[unlikely]] return; }
L_004080E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[20].w[0] + 162u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004080C0u | kUnwind; return; } goto L_004080C0; } }
L_004080EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[3].d[0] | 26214ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[6], c.r[20].w[0] + 224u);
    c.f[5] = c.r[5].w[0];
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[4] = c.r[3].w[0];
    c.budget -= 9;
L_00408110:
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[5]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[5]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[5]);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[3] = ld32((c.r[28].w[0] - 29672u));
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[2]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[1], c.f[1]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    c.f[0] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[4], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 23;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00408170; } }
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_00408170:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408110u | kUnwind; return; } goto L_00408110; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_004081E8; } }
    st8((c.r[20].w[0] + 161u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[20].w[0] + 176u));
    st32((c.r[20].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 180u));
    st32((c.r[20].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 184u));
    st32((c.r[20].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 188u));
    st32((c.r[20].w[0] + 60u), c.f[0]);
    c.budget -= 10;
L_004081B0:
    set32(c.r[5], ld32((c.r[20].w[0] + 284u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_004081D8; } }
L_004081C0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004081B0u | kUnwind; return; } goto L_004081B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00407DF8u | kUnwind; return; } [[clang::musttail]] return unit_0081(c, 312u, depth); } }
L_004081D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004081E0u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 412u, depth + 1u); else { c.pc = 0x003F7AD0u; return; } if (c.pc != 0x004081E0u) [[unlikely]] return; }
L_004081E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004081C0u | kUnwind; return; } goto L_004081C0; } }
L_004081E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_00408220:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 116u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00408510; } }
L_0040823C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 32u));
    set32(c.r[3], c.r[5].w[0] - 10u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(50ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040826C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 9360u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_0082[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040826C:
    set32(c.r[3], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004084C0; } }
    set32(c.r[3], 0u + 34u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004084C0; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004084A8; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00408468; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00408428; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00408410; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004083D0; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00408390; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00408378; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00408338; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004082F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004084D8; } }
L_004082F8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004082FC:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408314u); set32(c.r[6], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_007D(c, 120u, depth + 1u); else { c.pc = 0x003F5000u; return; } if (c.pc != 0x00408314u) [[unlikely]] return; }
L_00408314:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0] + 284u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004082FCu | kUnwind; return; } goto L_004082FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004084D4; } }
L_00408338:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040833C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408354u); set32(c.r[6], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_007D(c, 120u, depth + 1u); else { c.pc = 0x003F5000u; return; } if (c.pc != 0x00408354u) [[unlikely]] return; }
L_00408354:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0] + 284u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040833Cu | kUnwind; return; } goto L_0040833C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004084D4; } }
L_00408378:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408388u); set32(c.r[6], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_007D(c, 120u, depth + 1u); else { c.pc = 0x003F5000u; return; } if (c.pc != 0x00408388u) [[unlikely]] return; }
L_00408388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 284u), c.r[2].w[0]);  if (t) { goto L_004084D4; } }
L_00408390:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00408394:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004083ACu); set32(c.r[6], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_007D(c, 115u, depth + 1u); else { c.pc = 0x003F4EF0u; return; } if (c.pc != 0x004083ACu) [[unlikely]] return; }
L_004083AC:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0] + 284u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408394u | kUnwind; return; } goto L_00408394; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004084D4; } }
L_004083D0:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004083D4:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004083ECu); set32(c.r[6], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_007D(c, 115u, depth + 1u); else { c.pc = 0x003F4EF0u; return; } if (c.pc != 0x004083ECu) [[unlikely]] return; }
L_004083EC:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0] + 284u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004083D4u | kUnwind; return; } goto L_004083D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004084D4; } }
L_00408410:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408420u); set32(c.r[6], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_007D(c, 115u, depth + 1u); else { c.pc = 0x003F4EF0u; return; } if (c.pc != 0x00408420u) [[unlikely]] return; }
L_00408420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 284u), c.r[2].w[0]);  if (t) { goto L_004084D4; } }
L_00408428:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040842C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408444u); set32(c.r[6], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_007D(c, 105u, depth + 1u); else { c.pc = 0x003F4CD0u; return; } if (c.pc != 0x00408444u) [[unlikely]] return; }
L_00408444:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0] + 284u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040842Cu | kUnwind; return; } goto L_0040842C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004084D4; } }
L_00408468:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040846C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[2], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408484u); set32(c.r[6], c.r[2].w[0] + 176u);  if (depth < kMaxDepth) unit_007D(c, 105u, depth + 1u); else { c.pc = 0x003F4CD0u; return; } if (c.pc != 0x00408484u) [[unlikely]] return; }
L_00408484:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0] + 284u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040846Cu | kUnwind; return; } goto L_0040846C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004084D4; } }
L_004084A8:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004084B8u); set32(c.r[6], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_007D(c, 105u, depth + 1u); else { c.pc = 0x003F4CD0u; return; } if (c.pc != 0x004084B8u) [[unlikely]] return; }
L_004084B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 284u), c.r[2].w[0]);  if (t) { goto L_004084D4; } }
L_004084C0:
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004084D0u); set32(c.r[6], c.r[16].w[0] + 176u);  if (depth < kMaxDepth) unit_007D(c, 110u, depth + 1u); else { c.pc = 0x003F4DE0u; return; } if (c.pc != 0x004084D0u) [[unlikely]] return; }
L_004084D0:
    st32((c.r[16].w[0] + 284u), c.r[2].w[0]);
    c.budget -= 1;
L_004084D4:
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004084D8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004084DC:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[4].w[0] + 284u);
    set32(c.r[4], ld32((c.r[4].w[0] + 284u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00408568; } }
L_004084F8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004084DCu | kUnwind; return; } goto L_004084DC; } }
L_00408508:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408598; } }
L_00408510:
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040823Cu | kUnwind; return; } goto L_0040823C; } }
L_0040851C:
    c.f[3] = ld32((c.r[16].w[0] + 184u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FA00000u);
    c.f[2] = ld32((c.r[16].w[0] + 180u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 32u)));
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[16].w[0] + 176u));
    c.f[4] = 0u;
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    set32(c.r[4], c.r[2].w[0] + 496u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 56u), c.f[3]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408560u); st32((c.r[29].w[0] + 48u), c.f[0]);  if (depth < kMaxDepth) unit_00A6(c, 140u, depth + 1u); else { c.pc = 0x00499D80u; return; } if (c.pc != 0x00408560u) [[unlikely]] return; }
L_00408560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 284u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408508u | kUnwind; return; } goto L_00408508; } }
L_00408568:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[17].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040858Cu); set32(c.r[5], ld32((c.r[5].w[0])));  if (depth < kMaxDepth) unit_007D(c, 414u, depth + 1u); else { c.pc = 0x003F7B30u; return; } if (c.pc != 0x0040858Cu) [[unlikely]] return; }
L_0040858C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004084F8u | kUnwind; return; } goto L_004084F8; } }
    c.budget -= 1;
L_00408598:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004085B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 32u));
    set32(c.r[3], c.r[3].w[0] - 10u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(50ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00408618; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 9568u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_0082[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004085F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 284u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00408658; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[17].w[0] + 284u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408610u); set32(c.r[4], c.r[2].w[0] + 496u);  if (depth < kMaxDepth) unit_00A6(c, 138u, depth + 1u); else { c.pc = 0x00499CE0u; return; } if (c.pc != 0x00408610u) [[unlikely]] return; }
L_00408610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408658; } }
L_00408618:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 160u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00408658; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00408628:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[4].w[0] + 284u);
    set32(c.r[4], ld32((c.r[4].w[0] + 284u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00408660; } }
    c.budget -= 1;
L_00408648:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408628u | kUnwind; return; } goto L_00408628; } }
L_00408658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408670; } }
L_00408660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408668u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x00408668u) [[unlikely]] return; }
L_00408668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408648u | kUnwind; return; } goto L_00408648; } }
L_00408670:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00408690:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 32u));
    set32(c.r[3], c.r[3].w[0] - 10u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(50ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004086F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 9776u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_0082[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004086D0:
    set32(c.r[4], ld32((c.r[17].w[0] + 284u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00408738; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[17].w[0] + 284u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004086F0u); set32(c.r[4], c.r[2].w[0] + 496u);  if (depth < kMaxDepth) unit_00A6(c, 138u, depth + 1u); else { c.pc = 0x00499CE0u; return; } if (c.pc != 0x004086F0u) [[unlikely]] return; }
L_004086F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408738; } }
L_004086F8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 160u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00408738; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00408708:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[4].w[0] + 284u);
    set32(c.r[4], ld32((c.r[4].w[0] + 284u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00408740; } }
    c.budget -= 1;
L_00408728:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408708u | kUnwind; return; } goto L_00408708; } }
L_00408738:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408750; } }
L_00408740:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408748u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x00408748u) [[unlikely]] return; }
L_00408748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408728u | kUnwind; return; } goto L_00408728; } }
L_00408750:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00408770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[4], 0u - 1u);
    c.budget -= 9;
L_00408794:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 284u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_004087B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004087C4; } }
L_004087B0:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408794u | kUnwind; return; } goto L_00408794; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004087C4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00408870; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 160u));
    c.budget -= 1;
L_004087D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00408880; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00408890; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_004087FC; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00408818; } }
L_004087FC:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_00408818:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_0040882C; } }
    c.f[0] = c.r[5].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00408848; } }
L_0040882C:
    set32(c.r[4], c.r[5].w[0] >> 1);
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_00408848:
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00408890; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408868u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x00408868u) [[unlikely]] return; }
L_00408868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00408894; } }
L_00408870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408878u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 17u, depth + 1u); else { c.pc = 0x00408220u; return; } if (c.pc != 0x00408878u) [[unlikely]] return; }
L_00408878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 160u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004087D0u | kUnwind; return; } goto L_004087D0; } }
L_00408880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408888u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 299u, depth + 1u); else { c.pc = 0x00407A50u; return; } if (c.pc != 0x00408888u) [[unlikely]] return; }
L_00408888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408868u | kUnwind; return; } goto L_00408868; } }
L_00408890:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00408894:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004088A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00408E64; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004088D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004088D0u) [[unlikely]] return; }
L_004088D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00408E64; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00408E64; } }
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[29].w[0] + 92u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 32u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(63ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[16].w[0] + 32u);  if (t) { goto L_00408E64; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 9984u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_0082[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040893C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 530u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00408E64; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 752u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 762u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 82u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004089B8; } }
    set32(c.r[4], 0u + 49u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408974u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x00408974u) [[unlikely]] return; }
L_00408974:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_004089B8; } }
    c.r[5].d[0] = ld8((c.r[18].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 752u)));
    set32(c.r[3], c.r[3].w[0] - 4244u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 762u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 82u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004089B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004089B8u); set32(c.r[4], 0u + 78u);  if (depth < kMaxDepth) unit_0077(c, 40u, depth + 1u); else { c.pc = 0x003DC660u; return; } if (c.pc != 0x004089B8u) [[unlikely]] return; }
L_004089B8:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 4244u);
    set32(c.r[4], c.r[16].w[0] + 752u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004089DCu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);  if (depth < kMaxDepth) unit_0064(c, 313u, depth + 1u); else { c.pc = 0x00392E40u; return; } if (c.pc != 0x004089DCu) [[unlikely]] return; }
L_004089DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004089E4u); set32(c.r[4], c.r[16].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 278u, depth + 1u); else { c.pc = 0x0028ABF0u; return; } if (c.pc != 0x004089E4u) [[unlikely]] return; }
L_004089E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004089ECu); set32(c.r[4], c.r[16].w[0] + 3520u);  if (depth < kMaxDepth) unit_0053(c, 76u, depth + 1u); else { c.pc = 0x0034D080u; return; } if (c.pc != 0x004089ECu) [[unlikely]] return; }
L_004089EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[18].w[0] + 4u));  if (t) { goto L_00408E68; } }
L_004089F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004089FCu); set32(c.r[4], 0u + 106u);  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x004089FCu) [[unlikely]] return; }
L_004089FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408E64; } }
L_00408A04:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 220u));
    set32(c.r[2], 0u + 31u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00408DDC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 216u)));
    c.budget -= 1;
L_00408A18:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 26u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00408A80; } }
    set32(c.r[4], 0u + 50u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408A3Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0076(c, 322u, depth + 1u); else { c.pc = 0x003DBFD0u; return; } if (c.pc != 0x00408A3Cu) [[unlikely]] return; }
L_00408A3C:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_00408A80; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 4244u);
    set32(c.r[5], ld32((c.r[16].w[0] + 216u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 26u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00408A80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408A80u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0077(c, 40u, depth + 1u); else { c.pc = 0x003DC660u; return; } if (c.pc != 0x00408A80u) [[unlikely]] return; }
L_00408A80:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 4244u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408A9Cu); set32(c.r[4], ld32((c.r[16].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 81u, depth + 1u); else { c.pc = 0x00451090u; return; } if (c.pc != 0x00408A9Cu) [[unlikely]] return; }
L_00408A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408AA4u); set32(c.r[4], c.r[16].w[0] + 544u);  if (depth < kMaxDepth) unit_0022(c, 278u, depth + 1u); else { c.pc = 0x0028ABF0u; return; } if (c.pc != 0x00408AA4u) [[unlikely]] return; }
L_00408AA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408AACu); set32(c.r[4], c.r[16].w[0] + 3520u);  if (depth < kMaxDepth) unit_0053(c, 75u, depth + 1u); else { c.pc = 0x0034CFE0u; return; } if (c.pc != 0x00408AACu) [[unlikely]] return; }
L_00408AAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408E64; } }
L_00408AB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408ABCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 203u, depth + 1u); else { c.pc = 0x004D7DE0u; return; } if (c.pc != 0x00408ABCu) [[unlikely]] return; }
L_00408ABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408E64; } }
L_00408AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408ACCu); set32(c.r[4], 0u + 107u);  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x00408ACCu) [[unlikely]] return; }
L_00408ACC:
    c.r[6].d[0] = ld8((c.r[18].w[0] + 32u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[4], c.r[4].w[0] - 4244u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 44u)));
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 44u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(31ll) ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00408E64; } }
    set32(c.r[3], 0u + 30u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_00408E64; } }
L_00408B0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408B14u); set32(c.r[4], 0u + 108u);  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x00408B14u) [[unlikely]] return; }
L_00408B14:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 4244u);
    set32(c.r[4], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(31ll) ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00408DF8; } }
L_00408B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408B50u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 240u, depth + 1u); else { c.pc = 0x002A2CA0u; return; } if (c.pc != 0x00408B50u) [[unlikely]] return; }
L_00408B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408E64; } }
L_00408B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408B60u); set32(c.r[4], 0u + 106u);  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x00408B60u) [[unlikely]] return; }
L_00408B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408B68u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 241u, depth + 1u); else { c.pc = 0x002A2CB0u; return; } if (c.pc != 0x00408B68u) [[unlikely]] return; }
L_00408B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408E64; } }
L_00408B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408B78u); set32(c.r[4], 0u + 109u);  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x00408B78u) [[unlikely]] return; }
L_00408B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408B80u); set32(c.r[4], ld32((c.r[16].w[0] + 212u)));  if (depth < kMaxDepth) unit_0028(c, 80u, depth + 1u); else { c.pc = 0x002A1280u; return; } if (c.pc != 0x00408B80u) [[unlikely]] return; }
L_00408B80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00408B90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408B90u); set32(c.r[4], ld32((c.r[16].w[0] + 1564u)));  if (depth < kMaxDepth) unit_002A(c, 192u, depth + 1u); else { c.pc = 0x002AB100u; return; } if (c.pc != 0x00408B90u) [[unlikely]] return; }
L_00408B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408B98u); set32(c.r[4], ld32((c.r[16].w[0] + 212u)));  if (depth < kMaxDepth) unit_0028(c, 82u, depth + 1u); else { c.pc = 0x002A12A0u; return; } if (c.pc != 0x00408B98u) [[unlikely]] return; }
L_00408B98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408E64; } }
L_00408BA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408BA8u); set32(c.r[4], 0u + 111u);  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x00408BA8u) [[unlikely]] return; }
L_00408BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408BB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 246u, depth + 1u); else { c.pc = 0x002A2D50u; return; } if (c.pc != 0x00408BB0u) [[unlikely]] return; }
L_00408BB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408E64; } }
L_00408BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408BC0u); set32(c.r[4], 0u + 112u);  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x00408BC0u) [[unlikely]] return; }
L_00408BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408BC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 244u, depth + 1u); else { c.pc = 0x002A2D10u; return; } if (c.pc != 0x00408BC8u) [[unlikely]] return; }
L_00408BC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408E64; } }
L_00408BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408BD8u); set32(c.r[4], 0u + 110u);  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x00408BD8u) [[unlikely]] return; }
L_00408BD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408BE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 243u, depth + 1u); else { c.pc = 0x002A2CE0u; return; } if (c.pc != 0x00408BE0u) [[unlikely]] return; }
L_00408BE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408E64; } }
L_00408BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408BF0u); set32(c.r[4], 0u + 110u);  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x00408BF0u) [[unlikely]] return; }
L_00408BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408BF8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 242u, depth + 1u); else { c.pc = 0x002A2CD0u; return; } if (c.pc != 0x00408BF8u) [[unlikely]] return; }
L_00408BF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408E64; } }
L_00408C00:
    set32(c.r[4], 0u + 102u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408C0Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x00408C0Cu) [[unlikely]] return; }
L_00408C0C:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 500u);
    set32(c.r[7], 0u + 61u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408C34u); set32(c.r[4], c.r[2].w[0] + 168u);  if (depth < kMaxDepth) unit_0028(c, 4u, depth + 1u); else { c.pc = 0x002A0020u; return; } if (c.pc != 0x00408C34u) [[unlikely]] return; }
L_00408C34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408E64; } }
L_00408C3C:
    set32(c.r[4], 0u + 103u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408C48u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x00408C48u) [[unlikely]] return; }
L_00408C48:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 500u);
    set32(c.r[7], 0u + 62u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408C70u); set32(c.r[4], c.r[2].w[0] + 168u);  if (depth < kMaxDepth) unit_0028(c, 4u, depth + 1u); else { c.pc = 0x002A0020u; return; } if (c.pc != 0x00408C70u) [[unlikely]] return; }
L_00408C70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408E64; } }
L_00408C78:
    set32(c.r[4], 0u + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408C84u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x00408C84u) [[unlikely]] return; }
L_00408C84:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 500u);
    set32(c.r[7], 0u + 63u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408CACu); set32(c.r[4], c.r[2].w[0] + 168u);  if (depth < kMaxDepth) unit_0028(c, 4u, depth + 1u); else { c.pc = 0x002A0020u; return; } if (c.pc != 0x00408CACu) [[unlikely]] return; }
L_00408CAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408E64; } }
L_00408CB4:
    set32(c.r[4], 0u + 105u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408CC0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x00408CC0u) [[unlikely]] return; }
L_00408CC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 500u);
    set32(c.r[7], 0u + 64u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408CE8u); set32(c.r[4], c.r[2].w[0] + 168u);  if (depth < kMaxDepth) unit_0028(c, 4u, depth + 1u); else { c.pc = 0x002A0020u; return; } if (c.pc != 0x00408CE8u) [[unlikely]] return; }
L_00408CE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408E64; } }
L_00408CF0:
    set32(c.r[4], 0u + 105u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408CFCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x00408CFCu) [[unlikely]] return; }
L_00408CFC:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408D08u); set32(c.r[4], ld32((c.r[2].w[0] + 212u)));  if (depth < kMaxDepth) unit_0028(c, 79u, depth + 1u); else { c.pc = 0x002A1270u; return; } if (c.pc != 0x00408D08u) [[unlikely]] return; }
L_00408D08:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 15815u);
    set32(c.r[3], c.r[3].w[0] - 35u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00408E04; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00408E04; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[6], 0u + 100u);
    set32(c.r[7], 0u + 88u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408D58u); set32(c.r[4], c.r[2].w[0] + 168u);  if (depth < kMaxDepth) unit_0028(c, 4u, depth + 1u); else { c.pc = 0x002A0020u; return; } if (c.pc != 0x00408D58u) [[unlikely]] return; }
L_00408D58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408E64; } }
L_00408D60:
    set32(c.r[4], 0u + 113u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408D6Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0077(c, 45u, depth + 1u); else { c.pc = 0x003DC790u; return; } if (c.pc != 0x00408D6Cu) [[unlikely]] return; }
L_00408D6C:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408D78u); set32(c.r[4], ld32((c.r[2].w[0] + 212u)));  if (depth < kMaxDepth) unit_0028(c, 79u, depth + 1u); else { c.pc = 0x002A1270u; return; } if (c.pc != 0x00408D78u) [[unlikely]] return; }
L_00408D78:
    set32(c.r[3], ld32((c.r[28].w[0] - 29692u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = ld8((c.r[18].w[0] + 32u));
    set32(c.r[2], c.r[2].w[0] - 15790u);
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] - 60u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00408E38; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 100u);
    set32(c.r[7], 0u + 87u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408DD4u); set32(c.r[4], c.r[2].w[0] + 168u);  if (depth < kMaxDepth) unit_0028(c, 4u, depth + 1u); else { c.pc = 0x002A0020u; return; } if (c.pc != 0x00408DD4u) [[unlikely]] return; }
L_00408DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408E64; } }
L_00408DDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408DF0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 210u, depth + 1u); else { c.pc = 0x00482FF0u; return; } if (c.pc != 0x00408DF0u) [[unlikely]] return; }
L_00408DF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 216u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408A18u | kUnwind; return; } goto L_00408A18; } }
L_00408DF8:
    set32(c.r[2], 0u + 30u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 44u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408B48u | kUnwind; return; } goto L_00408B48; } }
L_00408E04:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[5], 0u + 3u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], 0u + 500u);
    set32(c.r[7], 0u + 88u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408E30u); set32(c.r[4], c.r[2].w[0] + 168u);  if (depth < kMaxDepth) unit_0028(c, 4u, depth + 1u); else { c.pc = 0x002A0020u; return; } if (c.pc != 0x00408E30u) [[unlikely]] return; }
L_00408E30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00408E64; } }
L_00408E38:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[5], 0u + 3u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], 0u + 500u);
    set32(c.r[7], 0u + 87u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408E64u); set32(c.r[4], c.r[2].w[0] + 168u);  if (depth < kMaxDepth) unit_0028(c, 4u, depth + 1u); else { c.pc = 0x002A0020u; return; } if (c.pc != 0x00408E64u) [[unlikely]] return; }
L_00408E64:
    c.r[5].d[0] = ld16((c.r[18].w[0] + 4u));
    c.budget -= 1;
L_00408E68:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00408E84; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 160u));
    c.budget -= 1;
L_00408E74:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00408E9C; } }
L_00408E7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00408EF8; } }
L_00408E84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408E94u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x00408E94u) [[unlikely]] return; }
L_00408E94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[18].w[0] + 160u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408E74u | kUnwind; return; } goto L_00408E74; } }
L_00408E9C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408EA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x00408EA8u) [[unlikely]] return; }
L_00408EA8:
    c.f[3] = ld32((c.r[18].w[0] + 184u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[2] = ld32((c.r[18].w[0] + 180u));
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.f[1] = c.r[2].w[0];
    c.r[6].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[18].w[0] + 176u));
    c.f[12] = 0u;
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.f[3] = fp::ee::add(c.fcr31, c.f[3], c.f[12]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    set32(c.r[4], c.r[2].w[0] + 480u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[12]);
    c.f[13] = c.f[12];
    st32((c.r[29].w[0] + 72u), c.f[3]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408EF0u); st32((c.r[29].w[0] + 64u), c.f[0]);  if (depth < kMaxDepth) unit_00A5(c, 258u, depth + 1u); else { c.pc = 0x00497F70u; return; } if (c.pc != 0x00408EF0u) [[unlikely]] return; }
L_00408EF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00408E7Cu | kUnwind; return; } goto L_00408E7C; } }
L_00408EF8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00408F10:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_0082[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00408F20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00408F3Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00408F3Cu) [[unlikely]] return; }
L_00408F3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00408F48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x00408F48u) [[unlikely]] return; }
L_00408F48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00408F60:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_0082[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00408F70:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st8((c.r[4].w[0] + 162u), static_cast<std::uint8_t>(0u));
    c.f[23] = ld32((c.r[29].w[0] + 172u));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 112u), 0u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 32u));
    set32(c.r[2], c.r[2].w[0] - 10u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(50ll) ? 1ull : 0ull;
    c.budget -= 22;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040900C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 10240u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_0082[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00408FE4:
    set32(c.r[3], ld32((c.r[20].w[0] + 284u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00409048; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[5], c.r[20].w[0] + 284u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409004u); set32(c.r[4], c.r[2].w[0] + 496u);  if (depth < kMaxDepth) unit_00A6(c, 138u, depth + 1u); else { c.pc = 0x00499CE0u; return; } if (c.pc != 0x00409004u) [[unlikely]] return; }
L_00409004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00409048; } }
L_0040900C:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 160u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00409048; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040901C:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[5], c.r[3].w[0] + 284u);
    set32(c.r[3], ld32((c.r[3].w[0] + 284u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004090F0; } }
L_00409038:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040901Cu | kUnwind; return; } goto L_0040901C; } }
L_00409048:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[17], c.r[20].w[0] + 176u);
    set32(c.r[16], c.r[20].w[0] + 224u);
    set32(c.r[21], c.r[29].w[0] + 148u);
    set32(c.r[22], c.r[29].w[0] + 152u);
    c.budget -= 6;
L_00409060:
    st32((c.r[18].w[0] + 272u), 0u);
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 52u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 56u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 60u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.f[22] = ld32((c.r[28].w[0] - 29672u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409090u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x00409090u) [[unlikely]] return; }
L_00409090:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040909Cu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x0040909Cu) [[unlikely]] return; }
L_0040909C:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004090A8u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004090A8u) [[unlikely]] return; }
L_004090A8:
    st32((c.r[29].w[0] + 144u), c.f[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[22]);
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[20], c.f[22]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[21], c.f[22]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    st32((c.r[16].w[0] + 12u), c.f[23]);
    st32((c.r[21].w[0]), c.f[20]);
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[22].w[0]), c.f[21]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00409060u | kUnwind; return; } goto L_00409060; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00409100; } }
L_004090F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004090F8u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 424u, depth + 1u); else { c.pc = 0x003F7CF0u; return; } if (c.pc != 0x004090F8u) [[unlikely]] return; }
L_004090F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00409038u | kUnwind; return; } goto L_00409038; } }
L_00409100:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00409140:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[18].w[0] + 16u) & ~15u, c.r[9]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    ld128((c.r[18].w[0] + 32u) & ~15u, c.r[8]);
    set32(c.r[7], ld32((c.r[5].w[0] + 48u)));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 52u));
    set32(c.r[2], ld32((c.r[5].w[0] + 56u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 32u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 108u));
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[9]);
    st128((c.r[16].w[0] + 64u) & ~15u, c.r[8]);
    st32((c.r[4].w[0] + 80u), c.r[7].w[0]);
    st8((c.r[4].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[5].w[0] + 60u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 64u));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 65u));
    st32((c.r[4].w[0] + 92u), c.r[7].w[0]);
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 33;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[4].w[0] + 120u), c.r[2].w[0]);  if (t) { goto L_00409570; } }
    st32((c.r[16].w[0] + 116u), c.r[6].w[0]);
    c.budget -= 1;
L_004091C8:
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0040957C; } }
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040957C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0040957C; } }
L_004091F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00409204; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00409204:
    st8((c.r[16].w[0] + 160u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 160u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00409238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040921Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_0082(c, 181u, depth + 1u); else { c.pc = 0x00409A10u; return; } if (c.pc != 0x0040921Cu) [[unlikely]] return; }
L_0040921C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040922Cu); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x0040922Cu) [[unlikely]] return; }
L_0040922C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409238u); set32(c.r[4], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0041(c, 85u, depth + 1u); else { c.pc = 0x00304E30u; return; } if (c.pc != 0x00409238u) [[unlikely]] return; }
L_00409238:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00409248u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00409248u) [[unlikely]] return; }
L_00409248:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409254u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x00409254u) [[unlikely]] return; }
L_00409254:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 160u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00409568; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 96u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040958C; } }
L_0040926C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004094D0; } }
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 161u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[0] = ld32((c.r[28].w[0] - 29672u));
    c.r[8].d[0] = 0ull + 0ull;
    c.f[1] = c.r[3].w[0];
    set32(c.r[6], c.r[4].w[0] + 1u);
    c.r[1].d[0] = 0ll < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_00409488; } }
    c.r[1].d[0] = c.r[6].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], c.r[6].w[0] - 8u);  if (t) { goto L_00409440; } }
    c.r[1].d[0] = c.r[6].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004092E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[6].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004092E0; } }
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 1;
L_004092E0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00409440; } }
L_004092E8:
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    set32(c.r[3], c.r[8].w[0] << 4);
    c.f[3] = ld32((c.r[16].w[0] + 68u));
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 72u));
    set32(c.r[8], c.r[8].w[0] + 8u);
    c.r[3].d[0] = c.r[8].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 224u), c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 228u), c.f[3]);
    st32((c.r[4].w[0] + 232u), c.f[2]);
    st32((c.r[4].w[0] + 236u), c.f[20]);
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[3] = ld32((c.r[16].w[0] + 68u));
    c.f[2] = ld32((c.r[16].w[0] + 72u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 240u), c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 244u), c.f[3]);
    st32((c.r[4].w[0] + 248u), c.f[2]);
    st32((c.r[4].w[0] + 252u), c.f[20]);
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[3] = ld32((c.r[16].w[0] + 68u));
    c.f[2] = ld32((c.r[16].w[0] + 72u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 256u), c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 260u), c.f[3]);
    st32((c.r[4].w[0] + 264u), c.f[2]);
    st32((c.r[4].w[0] + 268u), c.f[20]);
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[3] = ld32((c.r[16].w[0] + 68u));
    c.f[2] = ld32((c.r[16].w[0] + 72u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 272u), c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 276u), c.f[3]);
    st32((c.r[4].w[0] + 280u), c.f[2]);
    st32((c.r[4].w[0] + 284u), c.f[20]);
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[3] = ld32((c.r[16].w[0] + 68u));
    c.f[2] = ld32((c.r[16].w[0] + 72u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 288u), c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 292u), c.f[3]);
    st32((c.r[4].w[0] + 296u), c.f[2]);
    st32((c.r[4].w[0] + 300u), c.f[20]);
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[3] = ld32((c.r[16].w[0] + 68u));
    c.f[2] = ld32((c.r[16].w[0] + 72u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 304u), c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 308u), c.f[3]);
    st32((c.r[4].w[0] + 312u), c.f[2]);
    st32((c.r[4].w[0] + 316u), c.f[20]);
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[3] = ld32((c.r[16].w[0] + 68u));
    c.f[2] = ld32((c.r[16].w[0] + 72u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 320u), c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 324u), c.f[3]);
    st32((c.r[4].w[0] + 328u), c.f[2]);
    st32((c.r[4].w[0] + 332u), c.f[20]);
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[3] = ld32((c.r[16].w[0] + 68u));
    c.f[2] = ld32((c.r[16].w[0] + 72u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 336u), c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 340u), c.f[3]);
    st32((c.r[4].w[0] + 344u), c.f[2]);
    c.budget -= 85;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 348u), c.f[20]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004092E8u | kUnwind; return; } goto L_004092E8; } }
    c.budget -= 1;
L_00409440:
    c.r[1].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00409488; } }
L_0040944C:
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    set32(c.r[3], c.r[8].w[0] << 4);
    c.f[3] = ld32((c.r[16].w[0] + 68u));
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    c.f[2] = ld32((c.r[16].w[0] + 72u));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 224u), c.f[1]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 228u), c.f[3]);
    st32((c.r[4].w[0] + 232u), c.f[2]);
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 236u), c.f[20]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040944Cu | kUnwind; return; } goto L_0040944C; } }
L_00409488:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40900000u);
    c.f[1] = ld32((c.r[16].w[0] + 64u));
    c.f[4] = c.r[3].w[0];
    c.f[3] = ld32((c.r[16].w[0] + 68u));
    c.f[2] = ld32((c.r[16].w[0] + 72u));
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[4]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 56u), c.f[0]);  if (t) { goto L_004094D4; } }
L_004094D0:
    st8((c.r[16].w[0] + 161u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004094D4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 97u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00409568; } }
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 161u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[18], c.r[3].w[0] + 1u);
    c.r[1].d[0] = 0ll < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00409568; } }
L_00409508:
    set32(c.r[6], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00409530; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 531u));
    set32(c.r[3], 0u - 65u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(64ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 531u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00409530:
    set32(c.r[3], 0u + 1u);
    set32(c.r[17], c.r[3].w[0] << (c.r[19].w[0] & 31u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 162u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[17].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004095A8; } }
L_00409548:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 162u));
    c.r[5].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[16].w[0] + 162u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00409508u | kUnwind; return; } goto L_00409508; } }
    c.budget -= 1;
L_00409568:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004095C8; } }
L_00409570:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004091C8u | kUnwind; return; } goto L_004091C8; } }
L_0040957C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00409204u | kUnwind; return; } goto L_00409204; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 34u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004091F8u | kUnwind; return; } goto L_004091F8; } }
L_0040958C:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040926Cu | kUnwind; return; } goto L_0040926C; } }
L_004095A8:
    set32(c.r[2], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 284u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004095BCu); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 414u, depth + 1u); else { c.pc = 0x003F7B30u; return; } if (c.pc != 0x004095BCu) [[unlikely]] return; }
L_004095BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00409548u | kUnwind; return; } goto L_00409548; } }
    c.budget -= 1;
L_004095C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004095F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[8]);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[7]);
    c.r[10].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[5].w[0] + 48u)));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 52u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 32u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st128((c.r[16].w[0] + 48u) & ~15u, c.r[8]);
    st128((c.r[16].w[0] + 64u) & ~15u, c.r[7]);
    st32((c.r[4].w[0] + 80u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 56u)));
    st8((c.r[4].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], ld32((c.r[5].w[0] + 60u)));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 64u));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    st32((c.r[4].w[0] + 88u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 65u));
    st32((c.r[4].w[0] + 92u), c.r[7].w[0]);
    st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    c.budget -= 30;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[4].w[0] + 120u), c.r[2].w[0]);  if (t) { goto L_004096D8; } }
    set32(c.r[2], 0u + 33u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004096D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_004096D8; } }
L_0040967C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00409688; } }
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00409688:
    st8((c.r[16].w[0] + 160u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st8((c.r[16].w[0] + 161u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 160u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004096C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004096A4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_0082(c, 181u, depth + 1u); else { c.pc = 0x00409A10u; return; } if (c.pc != 0x004096A4u) [[unlikely]] return; }
L_004096A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004096B4u); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x004096B4u) [[unlikely]] return; }
L_004096B4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004096C0u); set32(c.r[4], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0041(c, 85u, depth + 1u); else { c.pc = 0x00304E30u; return; } if (c.pc != 0x004096C0u) [[unlikely]] return; }
L_004096C0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004096D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004096D0u) [[unlikely]] return; }
L_004096D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004096E8; } }
L_004096D8:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00409688u | kUnwind; return; } goto L_00409688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 34u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040967Cu | kUnwind; return; } goto L_0040967C; } }
L_004096E8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00409700:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 32u));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00409890; } }
    c.r[3].d[0] = c.r[8].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00409890; } }
    c.f[3] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = 0u;
    c.r[8].d[0] = ld8((c.r[18].w[0] + 20u));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.r[11].d[0] = 0ull + 0ull;
    c.f[1] = c.r[3].w[0];
    c.r[10].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    set32(c.r[9], c.r[18].w[0] + 176u);
    set32(c.r[7], 0u + 1u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[5] = fp::ee::add(c.fcr31, c.f[3], c.f[4]);
    c.f[3] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[4]);
    c.budget -= 15;
L_00409778:
    set32(c.r[3], c.r[7].w[0] << (c.r[10].w[0] & 31u));
    c.r[3].d[0] = c.r[8].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004097D0; } }
    c.f[4] = ld32((c.r[9].w[0]));
    c.f[2] = ld32((c.r[9].w[0] + 4u));
    c.f[0] = ld32((c.r[9].w[0] + 8u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[5], c.f[4]);
    c.f[4] = c.f[4] & fp::kAbs;
    c.f[2] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[12]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);  if (t) { goto L_004097D0; } }
    c.f[2] = c.f[2] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[12]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004097D0; } }
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004097D0; } }
    c.r[11].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_004097D0:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[3].d[0] = c.r[10].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00409778u | kUnwind; return; } goto L_00409778; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_00409868; } }
    st32((c.r[18].w[0] + 116u), c.r[5].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004097F0:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 20u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << (c.r[17].w[0] & 31u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00409858; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00409830; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 531u));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 6);
    set32(c.r[3], 0u - 65u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 531u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00409830:
    set32(c.r[3], 0u + 1u);
    set32(c.r[16], c.r[3].w[0] << (c.r[17].w[0] & 31u));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 162u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[16].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00409870; } }
L_00409848:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 162u));
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[18].w[0] + 162u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00409858:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004097F0u | kUnwind; return; } goto L_004097F0; } }
L_00409868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00409890; } }
L_00409870:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 284u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409884u); set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));  if (depth < kMaxDepth) unit_007D(c, 414u, depth + 1u); else { c.pc = 0x003F7B30u; return; } if (c.pc != 0x00409884u) [[unlikely]] return; }
L_00409884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00409848u | kUnwind; return; } goto L_00409848; } }
    c.budget -= 1;
L_00409890:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004098B0:
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0] + 48u), c.f[3]);
    st32((c.r[4].w[0] + 52u), c.f[2]);
    st32((c.r[4].w[0] + 56u), c.f[1]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    st32((c.r[4].w[0] + 176u), c.f[3]);
    st32((c.r[4].w[0] + 180u), c.f[2]);
    st32((c.r[4].w[0] + 184u), c.f[1]);
    st32((c.r[4].w[0] + 188u), c.f[0]);
    st32((c.r[4].w[0] + 192u), c.f[3]);
    st32((c.r[4].w[0] + 196u), c.f[2]);
    st32((c.r[4].w[0] + 200u), c.f[1]);
    st32((c.r[4].w[0] + 204u), c.f[0]);
    st32((c.r[4].w[0] + 208u), c.f[3]);
    st32((c.r[4].w[0] + 212u), c.f[2]);
    st32((c.r[4].w[0] + 216u), c.f[1]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 220u), c.f[0]);  c.pc = t; return; }
L_00409910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], 0u - 2u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], 0u - 3u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[3], c.r[3].w[0] + 8320u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 48u);
    c.r[9].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[17], c.r[16].w[0] + 128u);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st8((c.r[4].w[0] + 139u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 138u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 136u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 140u), 0u);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004099A0u); set32(c.r[4], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0018(c, 158u, depth + 1u); else { c.pc = 0x00261CB0u; return; } if (c.pc != 0x004099A0u) [[unlikely]] return; }
L_004099A0:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[4], 0u - 2u);
    c.r[7].d[0] = ld8((c.r[17].w[0] + 10u));
    c.r[5].d[0] = 0ull & 1ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 19ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[16].w[0] + 296u), 0u);
    st32((c.r[16].w[0] + 300u), 0u);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 304u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 304u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 308u), 0u);
    st32((c.r[16].w[0] + 284u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 288u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 292u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 116u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00409A10:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] - 10u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(53ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00409AD8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 10448u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00408000u < 16384u) { entry = entries_0082[(t - 0x00408000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00409A40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_00409ADC; } }
L_00409A48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_00409ADC; } }
L_00409A50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_00409ADC; } }
L_00409A58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_00409ADC; } }
L_00409A60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_00409ADC; } }
L_00409A68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_00409ADC; } }
L_00409A70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 15u);  if (t) { goto L_00409ADC; } }
L_00409A78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 78u);  if (t) { goto L_00409ADC; } }
L_00409A80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 10u);  if (t) { goto L_00409ADC; } }
L_00409A88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 11u);  if (t) { goto L_00409ADC; } }
L_00409A90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_00409ADC; } }
L_00409A98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 13u);  if (t) { goto L_00409ADC; } }
L_00409AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 14u);  if (t) { goto L_00409ADC; } }
L_00409AA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_00409ADC; } }
L_00409AB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 17u);  if (t) { goto L_00409ADC; } }
L_00409AB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 18u);  if (t) { goto L_00409ADC; } }
L_00409AC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 19u);  if (t) { goto L_00409ADC; } }
L_00409AC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 79u);  if (t) { goto L_00409ADC; } }
L_00409AD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 81u);  if (t) { goto L_00409ADC; } }
L_00409AD8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_00409ADC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00409AF0:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_00409B00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 32u);  c.pc = t; return; }
L_00409B10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 32u);  c.pc = t; return; }
L_00409B20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00409B74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 7728u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00409B5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_00409B5C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00409B74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409B74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00409B74u) [[unlikely]] return; }
L_00409B74:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00409B90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00409BF4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[17].w[0] + 128u);
    set32(c.r[3], c.r[3].w[0] + 8320u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00409BFC; } }
L_00409BC0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00409BDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_00409BDC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00409BF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409BF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00409BF4u) [[unlikely]] return; }
L_00409BF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00409C18; } }
L_00409BFC:
    set32(c.r[4], c.r[17].w[0] + 136u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 128u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00409BC0u | kUnwind; return; } goto L_00409BC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409C10u);  if (depth < kMaxDepth) unit_0018(c, 157u, depth + 1u); else { c.pc = 0x00261CA0u; return; } if (c.pc != 0x00409C10u) [[unlikely]] return; }
L_00409C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00409BC0u | kUnwind; return; } goto L_00409BC0; } }
L_00409C18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00409C30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409C50u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00409C50u) [[unlikely]] return; }
L_00409C50:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00409C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00409C94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409C94u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00409C94u) [[unlikely]] return; }
L_00409C94:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00409CB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409CDCu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00409CDCu) [[unlikely]] return; }
L_00409CDC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24944u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 80u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409CF8u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x00409CF8u) [[unlikely]] return; }
L_00409CF8:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00409D20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00409D48; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00409D48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409D48u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00409D48u) [[unlikely]] return; }
L_00409D48:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00409D60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409D8Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00409D8Cu) [[unlikely]] return; }
L_00409D8C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 26352u);
    set32(c.r[6], c.r[6].w[0] - 25712u);
    set32(c.r[7], 0u + 320u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409DACu); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x00409DACu) [[unlikely]] return; }
L_00409DAC:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00409DD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00409DF8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409DF8u); set32(c.r[5], c.r[5].w[0] - 25712u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x00409DF8u) [[unlikely]] return; }
L_00409DF8:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00409E10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409E30u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00409E30u) [[unlikely]] return; }
L_00409E30:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00409E50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00409E74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409E74u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00409E74u) [[unlikely]] return; }
L_00409E74:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00409E90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00409EA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00409EE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00409ED0u);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x00409ED0u) [[unlikely]] return; }
L_00409ED0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00409EE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0040A060; } }
L_00409EE0:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00409EE4:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 36u)));
    c.r[4].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040A02C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[4].w[0] + 8u), c.f[0]);  if (t) { goto L_0040A02C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00409F80; } }
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00409F64; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 396u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00409F80; } }
L_00409F64:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 396u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
L_00409F80:
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040A02C; } }
    set32(c.r[5], 0u + 128u);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[2], 0u + 64u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    if (c.r[17].d[0] == 0) c.r[6].d[0] = c.r[2].d[0];
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 92u), c.r[3].w[0]);  if (t) { goto L_0040A044; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0040A02C; } }
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A008u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x0040A008u) [[unlikely]] return; }
L_0040A008:
    set32(c.r[4], c.r[2].w[0] << 16);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    c.r[4].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[29].w[0] + 92u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    c.budget -= 9;
L_0040A02C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00409EE4u | kUnwind; return; } goto L_00409EE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0040A060; } }
L_0040A044:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] << 16);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A02Cu | kUnwind; return; } goto L_0040A02C; } }
L_0040A060:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0040A080:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[0] = c.r[3].w[0];
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[7] = ld32((c.r[29].w[0] + 236u));
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st8((c.r[29].w[0] + 207u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 480u)));
    c.f[3] = ld32((c.r[4].w[0] + 468u));
    c.f[5] = ld32((c.r[4].w[0] + 464u));
    c.f[1] = ld32((c.r[4].w[0] + 472u));
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.f[4] = ld32((c.r[3].w[0] + 4u));
    c.f[6] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[4] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[1]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    c.f[6] = fp::ee::sqrt(c.fcr31, c.f[1]);
    c.f[0] = fp::ee::div(c.fcr31, c.f[6], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(65ll) ? 1ull : 0ull;
    c.budget -= 46;
    { const bool t = c.r[1].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040A13C; } }
    set32(c.r[17], 0u + 64u);
    c.budget -= 1;
L_0040A13C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0040A1A0; } }
L_0040A144:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 207u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040A3F8; } }
    set32(c.r[17], ld32((c.r[18].w[0] + 8u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0040A158:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(64ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040A3F8; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0040A3F8; } }
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[6], 0u - 1u);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 204u)));
    c.r[4].d[0] = ld16((c.r[5].w[0] + 6u));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_0040A354; } }
L_0040A198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A158u | kUnwind; return; } goto L_0040A158; } }
L_0040A1A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.facc = fp::ee::mul(c.fcr31, c.f[4], c.f[4]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);
    set32(c.r[6], c.r[29].w[0] + 212u);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[2]);
    set32(c.r[5], c.r[29].w[0] + 216u);
    c.f[1] = fp::ee::sqrt(c.fcr31, c.f[0]);
    c.r[22].d[0] = ld8((c.r[28].w[0] - 31540u));
    c.r[23].d[0] = ld8((c.r[28].w[0] - 31539u));
    c.r[16].d[0] = 0ull + 0ull;
    c.r[30].d[0] = ld8((c.r[28].w[0] - 31538u));
    c.r[21].d[0] = 0ull + 0ull;
    c.r[20].d[0] = ld8((c.r[28].w[0] - 31537u));
    c.f[0] = c.r[4].w[0];
    c.f[20] = ld32((c.r[3].w[0] + 11128u));
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[4], c.f[1]);
    st32((c.r[6].w[0]), c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    c.f[2] = c.r[17].w[0];
    c.f[3] = fp::ee::mul(c.fcr31, c.f[5], c.f[1]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::ee::div(c.fcr31, c.f[6], c.f[2]);
    st32((c.r[5].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    c.f[22] = ld32((c.r[18].w[0] + 464u));
    c.f[23] = ld32((c.r[18].w[0] + 468u));
    c.f[24] = ld32((c.r[18].w[0] + 472u));
    c.f[21] = ld32((c.r[18].w[0] + 476u));
    c.f[25] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    c.f[26] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[27] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 220u), c.f[7]);
    c.budget -= 37;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 208u), c.f[3]);  if (t) { goto L_0040A330; } }
L_0040A234:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(64ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040A320; } }
    set32(c.r[4], 0u - 1u);
    c.budget -= 2;
L_0040A248:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0] + 204u)));
    c.r[5].d[0] = ld16((c.r[19].w[0] + 6u));
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0040A310; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A280u); set32(c.r[4], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 345u, depth + 1u); else { c.pc = 0x0040B7F0u; return; } if (c.pc != 0x0040A280u) [[unlikely]] return; }
L_0040A280:
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.f[22] = fp::ee::add(c.fcr31, c.f[22], c.f[25]);
    set32(c.r[4], 0u + 6u);
    set32(c.r[3], c.r[16].w[0] + c.r[18].w[0]);
    c.f[23] = fp::ee::add(c.fcr31, c.f[23], c.f[26]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[18].w[0] + 8u), c.r[5].w[0]);
    c.r[6].d[0] = ld16((c.r[19].w[0] + 6u));
    c.f[24] = fp::ee::add(c.fcr31, c.f[24], c.f[27]);
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.f[22]);
    st32((c.r[5].w[0] + 4u), c.f[23]);
    st32((c.r[5].w[0] + 8u), c.f[24]);
    c.r[6].d[0] = ld16((c.r[19].w[0] + 6u));
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0] + 12u), c.f[20]);
    set32(c.r[6], ld32((c.r[19].w[0])));
    c.r[5].d[0] = ld16((c.r[19].w[0] + 6u));
    set32(c.r[6], c.r[6].w[0] + 396u);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[19].w[0])));
    c.r[5].d[0] = ld16((c.r[19].w[0] + 6u));
    set32(c.r[6], c.r[6].w[0] + 328u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[22].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[23].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[30].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.budget -= 36;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 140u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0040A320; } }
L_0040A310:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(64ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A248u | kUnwind; return; } goto L_0040A248; } }
L_0040A320:
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0040A340; } }
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_0040A330:
    c.r[3].d[0] = c.r[21].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A234u | kUnwind; return; } goto L_0040A234; } }
    c.budget -= 1;
L_0040A340:
    st32((c.r[18].w[0] + 464u), c.f[22]);
    st32((c.r[18].w[0] + 468u), c.f[23]);
    st32((c.r[18].w[0] + 472u), c.f[24]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 476u), c.f[21]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A144u | kUnwind; return; } goto L_0040A144; } }
L_0040A354:
    set32(c.r[4], c.r[16].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 140u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_0040A3D0; } }
    c.r[4].d[0] = ld16((c.r[5].w[0] + 6u));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] >> 16);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[6], c.r[3].w[0] - 6u);
    c.budget -= 10;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_0040A3F0; } }
    c.budget -= 1;
L_0040A3A0:
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = ld16((c.r[5].w[0] + 6u));
    set32(c.r[3], c.r[6].w[0] << 16);
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    st32((c.r[29].w[0] + 252u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.f[0] = ld32((c.r[29].w[0] + 252u));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A198u | kUnwind; return; } goto L_0040A198; } }
L_0040A3D0:
    st32((c.r[7].w[0] + 12u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A3E0u); set32(c.r[4], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x0040A3E0u) [[unlikely]] return; }
L_0040A3E0:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A198u | kUnwind; return; } goto L_0040A198; } }
L_0040A3F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A3A0u | kUnwind; return; } goto L_0040A3A0; } }
L_0040A3F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_0040A450:
    set32(c.r[29], c.r[29].w[0] - 192u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 24u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[20].w[0] + 80u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A4A4u); set32(c.r[6], c.r[6].w[0] + 2432u);  if (depth < kMaxDepth) unit_0083(c, 27u, depth + 1u); else { c.pc = 0x0040C3C0u; return; } if (c.pc != 0x0040A4A4u) [[unlikely]] return; }
L_0040A4A4:
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[4] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    set32(c.r[6], c.r[6].w[0] + 9808u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[4], 0u + 8u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = ld32((c.r[3].w[0] + 8u));
    c.f[1] = fp::ee::sub(c.fcr31, c.f[1], c.f[4]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[3], c.f[4]);
    st32((c.r[20].w[0] + 48u), c.f[1]);
    c.f[2] = fp::ee::sub(c.fcr31, c.f[2], c.f[4]);
    st32((c.r[20].w[0] + 52u), c.f[3]);
    st32((c.r[20].w[0] + 56u), c.f[2]);
    st32((c.r[20].w[0] + 60u), c.f[0]);
    st32((c.r[20].w[0] + 64u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 22;
L_0040A4FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A4FCu | kUnwind; return; } goto L_0040A4FC; } }
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] | 60ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    st32((c.r[29].w[0] + 188u), c.r[3].w[0]);
    c.r[22].d[0] = ld8((c.r[2].w[0] + 163u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00F00000u);
    c.r[18].d[0] = ld8((c.r[2].w[0] + 160u));
    c.r[3].d[0] = c.r[3].d[0] | 240ull;
    c.r[17].d[0] = ld8((c.r[2].w[0] + 161u));
    c.r[19].d[0] = 0ull + 0ull;
    c.r[21].d[0] = ld8((c.r[2].w[0] + 162u));
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[23], c.r[22].w[0] >> 2);
    c.budget -= 15;
L_0040A558:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[2].w[0] + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A574u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 345u, depth + 1u); else { c.pc = 0x0040B7F0u; return; } if (c.pc != 0x0040A574u) [[unlikely]] return; }
L_0040A574:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0040A610; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 328u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[21].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[22].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[1] = ld32((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[3], c.r[3].w[0] + 396u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 31;
L_0040A5F8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A558u | kUnwind; return; } goto L_0040A558; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 16u)));  if (t) { goto L_0040A6A0; } }
L_0040A610:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 255u);
    set32(c.r[3], c.r[3].w[0] + 328u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[21].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[23].w[0]));
    set32(c.r[7], ld32((c.r[20].w[0] + 24u)));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.f[1] = ld32((c.r[7].w[0]));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A688u); st32((c.r[2].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 179u, depth + 1u); else { c.pc = 0x00486750u; return; } if (c.pc != 0x0040A688u) [[unlikely]] return; }
L_0040A688:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 6u));
    set32(c.r[4], c.r[4].w[0] + 396u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A5F8u | kUnwind; return; } goto L_0040A5F8; } }
L_0040A6A0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0040A6D0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    set32(c.r[23], c.r[29].w[0] + 207u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[22], c.r[29].w[0] + 206u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[17].d[0] = ld16((c.r[7].w[0] + 20u));
    c.f[20] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[4].w[0]), c.r[20].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[16], c.r[29].w[0] + 205u);
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[2], 0u + 255u);
    st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[22].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 29;
L_0040A744:
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], 0u + 3u);
    if (c.r[18].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A75Cu); set32(c.r[6], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x003FA3F0u; return; } if (c.pc != 0x0040A75Cu) [[unlikely]] return; }
L_0040A75C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A768u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 351u, depth + 1u); else { c.pc = 0x0040B900u; return; } if (c.pc != 0x0040A768u) [[unlikely]] return; }
L_0040A768:
    set32(c.r[3], c.r[18].w[0] << 1);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[18].w[0] << 2);
    st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] >> 16);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[2].w[0] << 5);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[6].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 36u)));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 204u));
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.r[4].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[5], c.r[5].w[0] + 260u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[22].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[23].w[0]));
    c.budget -= 31;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A744u | kUnwind; return; } goto L_0040A744; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 36u)));
    set32(c.r[2], c.r[18].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1504u);
    set32(c.r[5], c.r[29].w[0] + 200u);
    set32(c.r[6], c.r[29].w[0] + 196u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 4u));
    st32((c.r[21].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A81Cu); st32((c.r[21].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 55u, depth + 1u); else { c.pc = 0x00249320u; return; } if (c.pc != 0x0040A81Cu) [[unlikely]] return; }
L_0040A81C:
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[21].w[0] + 80u), c.r[3].w[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[1]);
    st32((c.r[21].w[0] + 84u), c.f[0]);
    st32((c.r[21].w[0] + 88u), c.f[1]);
    st32((c.r[21].w[0] + 48u), 0u);
    st32((c.r[21].w[0] + 52u), 0u);
    st32((c.r[21].w[0] + 56u), 0u);
    st32((c.r[21].w[0] + 60u), c.f[20]);
    st32((c.r[21].w[0] + 64u), 0u);
    st32((c.r[21].w[0] + 68u), 0u);
    st32((c.r[21].w[0] + 72u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0040A890:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[2], 0u + 255u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[20], c.r[29].w[0] + 141u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[29].w[0] + 142u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[29].w[0] + 143u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[16].w[0]);
    set32(c.r[6], c.r[29].w[0] + 140u);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 480u), 0u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 140u), static_cast<std::uint8_t>(0u));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A900u); st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_007E(c, 277u, depth + 1u); else { c.pc = 0x003FA3F0u; return; } if (c.pc != 0x0040A900u) [[unlikely]] return; }
L_0040A900:
    c.r[21].d[0] = ld16((c.r[21].w[0] + 20u));
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0040A908:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040A914u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 351u, depth + 1u); else { c.pc = 0x0040B900u; return; } if (c.pc != 0x0040A914u) [[unlikely]] return; }
L_0040A914:
    set32(c.r[3], c.r[22].w[0] << 1);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[22].w[0] << 2);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[7], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] >> 16);
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[6], c.r[3].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] << 3);
    c.r[3].d[0] = c.r[22].d[0] < static_cast<std::uint64_t>(64ll) ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[7].w[0] + 204u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 204u)));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 140u));
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[5].d[0] = ld16((c.r[5].w[0] + 6u));
    set32(c.r[6], c.r[6].w[0] + 260u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[20].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[19].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 31;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040A908u | kUnwind; return; } goto L_0040A908; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0040A9C0:
    c.budget -= 2;
    {  goto L_0040AD80; }
L_0040A9D0:
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 6;
    { set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  goto L_0040AB40; }
L_0040A9F0:
    set32(c.r[8], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040AA98; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[5].w[0] << 5);
    set32(c.r[3], 0u - 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0040AA98; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[5], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    st32((c.r[5].w[0] + 8u), 0u);
    st32((c.r[5].w[0] + 480u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 480u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 24u)));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[5].w[0] + 464u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[5].w[0] + 468u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[5].w[0] + 472u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[5].w[0] + 476u), c.f[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[3].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 28;
L_0040AA98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040AAA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[10].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[9].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040AAEC; } }
L_0040AAD8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 48u)));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 4u), c.r[10].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[9].w[0]);  if (t) { goto L_0040AB2C; } }
L_0040AAEC:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AB0Cu); c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 244u, depth + 1u); else { c.pc = 0x0040A450u; return; } if (c.pc != 0x0040AB0Cu) [[unlikely]] return; }
L_0040AB0C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], 0u + 5u);
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040AAD8u | kUnwind; return; } goto L_0040AAD8; } }
L_0040AB2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040AB40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040AC80; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[4], c.r[5].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[4].w[0] << 4);
    set32(c.r[16], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 6;
L_0040AB88:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[4].w[0] + 204u);
    set32(c.r[4], ld32((c.r[4].w[0] + 204u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0040AC60; } }
L_0040ABB8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(64ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040AB88u | kUnwind; return; } goto L_0040AB88; } }
    st32((c.r[16].w[0] + 480u), 0u);
    set32(c.r[5], ld32((c.r[20].w[0] + 16u)));
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0040AC50; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 3;
L_0040ABE8:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0040AC3C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[20].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_0040AC50; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_0040AC50; } }
L_0040AC3C:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040ABE8u | kUnwind; return; } goto L_0040ABE8; } }
    c.budget -= 1;
L_0040AC50:
    set32(c.r[3], 0u - 1u);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040AC80; } }
L_0040AC60:
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AC74u); set32(c.r[4], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x0040AC74u) [[unlikely]] return; }
L_0040AC74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040ABB8u | kUnwind; return; } goto L_0040ABB8; } }
    c.budget -= 1;
L_0040AC80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0040ACA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 36u);  [[clang::musttail]] return unit_0083(c, 10u, depth); }
L_0040ACB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0040ACF8; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_0040ACE4:
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0040AD2C; } }
L_0040ACF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0040AD60; } }
L_0040ACF8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040ACFC:
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AD10u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 230u, depth + 1u); else { c.pc = 0x00409EA0u; return; } if (c.pc != 0x0040AD10u) [[unlikely]] return; }
L_0040AD10:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040ACFCu | kUnwind; return; } goto L_0040ACFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040ACE4u | kUnwind; return; } goto L_0040ACE4; } }
L_0040AD2C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040AD30:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AD44u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 235u, depth + 1u); else { c.pc = 0x0040A080u; return; } if (c.pc != 0x0040AD44u) [[unlikely]] return; }
L_0040AD44:
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040AD30u | kUnwind; return; } goto L_0040AD30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040ACF0u | kUnwind; return; } goto L_0040ACF0; } }
L_0040AD60:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0040AD80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], c.r[5].w[0] << 1);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ADBCu); set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0082(c, 266u, depth + 1u); else { c.pc = 0x0040AB40u; return; } if (c.pc != 0x0040ADBCu) [[unlikely]] return; }
L_0040ADBC:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 3;
L_0040ADC8:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[3].w[0] + 36u);
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    c.r[4].d[0] = ld16((c.r[3].w[0] + 6u));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0040AEA0; } }
L_0040ADF8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040ADC8u | kUnwind; return; } goto L_0040ADC8; } }
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0040AE98; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 3;
L_0040AE2C:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0040AE84; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0040AE98; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] << 2);
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { goto L_0040AE98; } }
L_0040AE84:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040AE2Cu | kUnwind; return; } goto L_0040AE2C; } }
    c.budget -= 1;
L_0040AE98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0040AEC0; } }
L_0040AEA0:
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040AEB4u); set32(c.r[4], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x0040AEB4u) [[unlikely]] return; }
L_0040AEB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040ADF8u | kUnwind; return; } goto L_0040ADF8; } }
    c.budget -= 1;
L_0040AEC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0040AEE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040AFB8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040AF14:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 5;
L_0040AF28:
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], ld32((c.r[3].w[0] + 36u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 6u));
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 12u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040AF28u | kUnwind; return; } goto L_0040AF28; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040AF58:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[6], c.r[4].w[0] + 36u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 36u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0040B004; } }
L_0040AF88:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040AF58u | kUnwind; return; } goto L_0040AF58; } }
    st32((c.r[17].w[0] + 20u), 0u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    st32((c.r[17].w[0] + 24u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040AF14u | kUnwind; return; } goto L_0040AF14; } }
    c.budget -= 1;
L_0040AFB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0040B020; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0040AFD0:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 96u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040AFD0u | kUnwind; return; } goto L_0040AFD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040B020; } }
L_0040B004:
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B018u); set32(c.r[4], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x0040B018u) [[unlikely]] return; }
L_0040B018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040AF88u | kUnwind; return; } goto L_0040AF88; } }
L_0040B020:
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0040B0D8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040B038:
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 6;
L_0040B050:
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], ld32((c.r[3].w[0] + 204u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 6u));
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(64ll) ? 1ull : 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 12u), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B050u | kUnwind; return; } goto L_0040B050; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040B080:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[6], c.r[4].w[0] + 204u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 204u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 6u));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0040B124; } }
L_0040B0B0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(64ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B080u | kUnwind; return; } goto L_0040B080; } }
    st32((c.r[17].w[0] + 480u), 0u);
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B038u | kUnwind; return; } goto L_0040B038; } }
L_0040B0D8:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0040B140; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0040B0F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 496u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B0F0u | kUnwind; return; } goto L_0040B0F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040B140; } }
L_0040B124:
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B138u); set32(c.r[4], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 342u, depth + 1u); else { c.pc = 0x0040B710u; return; } if (c.pc != 0x0040B138u) [[unlikely]] return; }
L_0040B138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B0B0u | kUnwind; return; } goto L_0040B0B0; } }
L_0040B140:
    st32((c.r[16].w[0] + 16u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0040B170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040B19C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B198u); set32(c.r[5], c.r[5].w[0] - 19760u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x0040B198u) [[unlikely]] return; }
L_0040B198:
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 1;
L_0040B19C:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040B1B8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B1B4u); set32(c.r[5], c.r[5].w[0] - 19968u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x0040B1B4u) [[unlikely]] return; }
L_0040B1B4:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_0040B1B8:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040B1D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B1CCu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0040B1CCu) [[unlikely]] return; }
L_0040B1CC:
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 1;
L_0040B1D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040B1E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B1E4u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0040B1E4u) [[unlikely]] return; }
L_0040B1E4:
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 1;
L_0040B1E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B1F0u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0082(c, 390u, depth + 1u); else { c.pc = 0x0040BFC0u; return; } if (c.pc != 0x0040B1F0u) [[unlikely]] return; }
L_0040B1F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040B200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040B240; } }
    set32(c.r[4], c.r[17].w[0] + 140u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0040B248; } }
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0040B22C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0040B240; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B240u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0040B240u) [[unlikely]] return; }
L_0040B240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0040B264; } }
L_0040B248:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] - 19840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B25Cu); set32(c.r[7], 0u + 64u);  if (depth < kMaxDepth) unit_0002(c, 179u, depth + 1u); else { c.pc = 0x0020B370u; return; } if (c.pc != 0x0040B25Cu) [[unlikely]] return; }
L_0040B25C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B22Cu | kUnwind; return; } goto L_0040B22C; } }
L_0040B264:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040B280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0040B2B0; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0040B2B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B2B0u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0040B2B0u) [[unlikely]] return; }
L_0040B2B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040B2D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0040B300; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0040B300; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B300u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0040B300u) [[unlikely]] return; }
L_0040B300:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040B320:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] + 11120u);  if (t) { goto L_0040B3F8; } }
L_0040B364:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[20].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[20].w[0]);
    set32(c.r[18], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B384u); set32(c.r[5], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0040B384u) [[unlikely]] return; }
L_0040B384:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040B3E0; } }
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[17].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8u));
    st16((c.r[17].w[0] + 72u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 10u));
    st16((c.r[17].w[0] + 74u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[17].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 20u));
    st16((c.r[17].w[0] + 84u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 22u));
    st16((c.r[17].w[0] + 86u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 24u));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 88u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0040B3F8; } }
L_0040B3E0:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B364u | kUnwind; return; } goto L_0040B364; } }
    c.budget -= 1;
L_0040B3F8:
    set32(c.r[18], c.r[29].w[0] + 124u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    st32((c.r[29].w[0] + 120u), 0u);
    set32(c.r[2], c.r[2].w[0] + 11120u);
    st32((c.r[18].w[0]), 0u);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 84u));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0] + 112u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] + 320u);
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B438u); st32((c.r[6].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0083(c, 14u, depth + 1u); else { c.pc = 0x0040C1A0u; return; } if (c.pc != 0x0040B438u) [[unlikely]] return; }
L_0040B438:
    set32(c.r[4], c.r[17].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B444u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0082(c, 357u, depth + 1u); else { c.pc = 0x0040BA70u; return; } if (c.pc != 0x0040B444u) [[unlikely]] return; }
L_0040B444:
    st32((c.r[17].w[0] + 16u), 0u);
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[3], 0u + 5u);
    st32((c.r[17].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_0040B478; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B474u); set32(c.r[5], c.r[5].w[0] - 19760u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x0040B474u) [[unlikely]] return; }
L_0040B474:
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 1;
L_0040B478:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0040B52C; } }
L_0040B480:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_0040B498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B494u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0040B494u) [[unlikely]] return; }
L_0040B494:
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 1;
L_0040B498:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0040B568; } }
L_0040B4A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 8u)));  if (t) { goto L_0040B4BC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B4B8u); set32(c.r[5], c.r[5].w[0] - 19968u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x0040B4B8u) [[unlikely]] return; }
L_0040B4B8:
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 1;
L_0040B4BC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0040B578; } }
L_0040B4C4:
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 8u)));  if (t) { goto L_0040B4DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B4D8u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0040B4D8u) [[unlikely]] return; }
L_0040B4D8:
    st32((c.r[17].w[0] + 32u), 0u);
    c.budget -= 1;
L_0040B4DC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0040B5B4; } }
L_0040B4E4:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0040B5C4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0040B4F8:
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0040B618; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0040B508:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040B66C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040B520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B520u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0040B520u) [[unlikely]] return; }
L_0040B520:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0040B670; } }
L_0040B52C:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B540u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0040B540u) [[unlikely]] return; }
L_0040B540:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 18704u);
    set32(c.r[6], c.r[6].w[0] - 19760u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B560u); set32(c.r[7], 0u + 96u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x0040B560u) [[unlikely]] return; }
L_0040B560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B480u | kUnwind; return; } goto L_0040B480; } }
L_0040B568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B570u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0040B570u) [[unlikely]] return; }
L_0040B570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 28u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B4A0u | kUnwind; return; } goto L_0040B4A0; } }
L_0040B578:
    set32(c.r[2], c.r[16].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B58Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0040B58Cu) [[unlikely]] return; }
L_0040B58C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 18800u);
    set32(c.r[6], c.r[6].w[0] - 19968u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B5ACu); set32(c.r[7], 0u + 496u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x0040B5ACu) [[unlikely]] return; }
L_0040B5AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B4C4u | kUnwind; return; } goto L_0040B4C4; } }
L_0040B5B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B5BCu); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0040B5BCu) [[unlikely]] return; }
L_0040B5BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B4E4u | kUnwind; return; } goto L_0040B4E4; } }
L_0040B5C4:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0040B5CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 36u);
    set32(c.r[7], c.r[17].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B5E4u); set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_0082(c, 256u, depth + 1u); else { c.pc = 0x0040A890u; return; } if (c.pc != 0x0040B5E4u) [[unlikely]] return; }
L_0040B5E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[19], c.r[19].w[0] + 496u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B5CCu | kUnwind; return; } goto L_0040B5CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B4F8u | kUnwind; return; } goto L_0040B4F8; } }
L_0040B618:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0040B620:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] + 36u);
    set32(c.r[7], c.r[17].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B638u); set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_0082(c, 251u, depth + 1u); else { c.pc = 0x0040A6D0u; return; } if (c.pc != 0x0040B638u) [[unlikely]] return; }
L_0040B638:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[19], c.r[19].w[0] + 96u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B620u | kUnwind; return; } goto L_0040B620; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B508u | kUnwind; return; } goto L_0040B508; } }
L_0040B66C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0040B670:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0040B690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 18720u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 19840u);
    set32(c.r[4], c.r[16].w[0] + 140u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B6C0u); set32(c.r[8], 0u + 64u);  if (depth < kMaxDepth) unit_0002(c, 183u, depth + 1u); else { c.pc = 0x0020B3F0u; return; } if (c.pc != 0x0040B6C0u) [[unlikely]] return; }
L_0040B6C0:
    st32((c.r[16].w[0] + 480u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040B6E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0040B6F0:
    st32((c.r[4].w[0] + 88u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0040B710:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0040B758; } }
    c.r[5].d[0] = ld16((c.r[5].w[0] + 4u));
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 2;
L_0040B728:
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 4u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0040B740; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_0040B760; } }
L_0040B740:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B728u | kUnwind; return; } goto L_0040B728; } }
    c.budget -= 1;
L_0040B758:
    set32(c.r[8], 0u - 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 2;
L_0040B760:
    set32(c.r[5], c.r[8].w[0] << 3);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040B7DC; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = 0ll < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0040B7B0; } }
    set32(c.r[6], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_0040B794:
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_0040B7B0; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B794u | kUnwind; return; } goto L_0040B794; } }
L_0040B7B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == c.r[5].d[0];  if (t) { goto L_0040B7DC; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
L_0040B7DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040B7F0:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0040B838; } }
    c.r[5].d[0] = ld16((c.r[5].w[0] + 4u));
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 2;
L_0040B808:
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 4u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0040B820; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_0040B840; } }
L_0040B820:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B808u | kUnwind; return; } goto L_0040B808; } }
    c.budget -= 1;
L_0040B838:
    set32(c.r[7], 0u - 1u);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 2;
L_0040B840:
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[6].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0040B86C; } }
L_0040B864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040B88C; } }
L_0040B86C:
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 8u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B864u | kUnwind; return; } goto L_0040B864; } }
L_0040B88C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040B8A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0040B8D0; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0040B8D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040B8D0u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0040B8D0u) [[unlikely]] return; }
L_0040B8D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040B8F0:
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), 0u);  c.pc = t; return; }
L_0040B900:
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    c.r[6].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 4;
L_0040B910:
    set32(c.r[2], ld32((c.r[8].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0040B938; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040B938; } }
    set32(c.r[8], c.r[8].w[0] + 32u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B910u | kUnwind; return; } goto L_0040B910; } }
L_0040B938:
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0040BA0C; } }
    set32(c.r[11], ld32((c.r[2].w[0] + 4u)));
    c.r[1].d[0] = 0ull < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_0040B9B8; } }
    set32(c.r[10], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[9], 0u + 1u);
    c.budget -= 2;
L_0040B968:
    set32(c.r[5], c.r[12].w[0] >> 3);
    c.r[4].d[0] = c.r[12].d[0] & 7ull;
    set32(c.r[7], c.r[10].w[0] + c.r[5].w[0]);
    set32(c.r[8], c.r[9].w[0] << (c.r[4].w[0] & 31u));
    c.r[5].d[0] = ld8((c.r[7].w[0]));
    c.r[4].d[0] = c.r[8].d[0] & c.r[5].d[0];
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0040B9A8; } }
    c.r[4].d[0] = c.r[8].d[0] & 255ull;
    c.r[6].d[0] = c.r[12].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_0040B9B8; } }
L_0040B9A8:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.r[4].d[0] = c.r[12].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B968u | kUnwind; return; } goto L_0040B968; } }
L_0040B9B8:
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[5], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040BA48; } }
L_0040B9D4:
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[7], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[8], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    c.r[5].d[0] = c.r[5].d[0] & 7ull;
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[5].d[0] = ld8((c.r[7].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & c.r[5].d[0];
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0040BA50; } }
L_0040BA00:
    set32(c.r[2], c.r[3].w[0] << 16);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[6].d[0] | c.r[2].d[0];  if (t) { goto L_0040BA5C; } }
L_0040BA0C:
    c.r[7].d[0] = c.r[5].d[0] & 7ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[7], c.r[4].w[0] << (c.r[7].w[0] & 31u));
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 3));
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B9B8u | kUnwind; return; } goto L_0040B9B8; } }
L_0040BA48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 16u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040B9D4u | kUnwind; return; } goto L_0040B9D4; } }
L_0040BA50:
    c.r[4].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 16u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040BA00u | kUnwind; return; } goto L_0040BA00; } }
L_0040BA5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040BA70:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == 0ull; c.r[30].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040BAC4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BAC0u); set32(c.r[5], c.r[5].w[0] - 29104u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x0040BAC0u) [[unlikely]] return; }
L_0040BAC0:
    st32((c.r[21].w[0] + 8u), 0u);
    c.budget -= 1;
L_0040BAC4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0040BD00; } }
L_0040BACC:
    set32(c.r[3], ld32((c.r[30].w[0])));
    c.r[19].d[0] = 0ull + 0ull;
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0040BB60; } }
    c.r[20].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0040BAE8:
    set32(c.r[4], ld32((c.r[30].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[5], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + 15u);
    set32(c.r[4], c.r[4].w[0] >> 4);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[22], c.r[3].w[0] + 24u);  if (t) { goto L_0040BB30; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BB2Cu); set32(c.r[5], c.r[5].w[0] + 6640u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x0040BB2Cu) [[unlikely]] return; }
L_0040BB2C:
    st32((c.r[22].w[0]), 0u);
    c.budget -= 1;
L_0040BB30:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0040BD34; } }
L_0040BB38:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[30].w[0])));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040BAE8u | kUnwind; return; } goto L_0040BAE8; } }
L_0040BB60:
    st32((c.r[21].w[0] + 24u), 0u);
    set32(c.r[4], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040BB80; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BB7Cu); set32(c.r[5], c.r[5].w[0] - 18272u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x0040BB7Cu) [[unlikely]] return; }
L_0040BB7C:
    st32((c.r[21].w[0] + 16u), 0u);
    c.budget -= 1;
L_0040BB80:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0040BD68; } }
L_0040BB88:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040BBA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BB9Cu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0040BB9Cu) [[unlikely]] return; }
L_0040BB9C:
    st32((c.r[21].w[0] + 12u), 0u);
    c.budget -= 1;
L_0040BBA0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0040BD9C; } }
L_0040BBA8:
    set32(c.r[3], ld32((c.r[30].w[0])));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 192u), 0u);  if (t) { goto L_0040BF60; } }
    st32((c.r[29].w[0] + 160u), 0u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[29].w[0] + 220u);
    set32(c.r[16], c.r[29].w[0] + 222u);
    c.budget -= 4;
L_0040BBC8:
    set32(c.r[5], ld32((c.r[30].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[20], c.r[3].w[0] + 20u);  if (t) { goto L_0040BC00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BBFCu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0040BBFCu) [[unlikely]] return; }
L_0040BBFC:
    st32((c.r[20].w[0]), 0u);
    c.budget -= 1;
L_0040BC00:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0040BDAC; } }
L_0040BC08:
    set32(c.r[5], ld32((c.r[30].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[20], c.r[3].w[0] + 28u);
    set32(c.r[3], c.r[5].w[0] + 7u);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_0040BC40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BC3Cu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0040BC3Cu) [[unlikely]] return; }
L_0040BC3C:
    st32((c.r[20].w[0]), 0u);
    c.budget -= 1;
L_0040BC40:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0040BDC0; } }
L_0040BC48:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0040BDD0; } }
    c.budget -= 1;
L_0040BC68:
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[30].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    st32((c.r[4].w[0] + 16u), 0u);
    set32(c.r[4], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[6], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[5], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 23;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0040BF38; } }
    c.budget -= 1;
L_0040BCC8:
    set32(c.r[4], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[5], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    c.r[4].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040BCC8u | kUnwind; return; } goto L_0040BCC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040BF38; } }
L_0040BD00:
    set32(c.r[2], c.r[16].w[0] << 5);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BD0Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0040BD0Cu) [[unlikely]] return; }
L_0040BD0C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 16480u);
    set32(c.r[6], c.r[6].w[0] - 29104u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BD2Cu); set32(c.r[7], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x0040BD2Cu) [[unlikely]] return; }
L_0040BD2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040BACCu | kUnwind; return; } goto L_0040BACC; } }
L_0040BD34:
    set32(c.r[2], c.r[17].w[0] << 3);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BD40u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0040BD40u) [[unlikely]] return; }
L_0040BD40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2160u);
    set32(c.r[6], c.r[6].w[0] + 6640u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BD60u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x0040BD60u) [[unlikely]] return; }
L_0040BD60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040BB38u | kUnwind; return; } goto L_0040BB38; } }
L_0040BD68:
    set32(c.r[2], c.r[19].w[0] << 3);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BD74u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0040BD74u) [[unlikely]] return; }
L_0040BD74:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 18192u);
    set32(c.r[6], c.r[6].w[0] - 18272u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BD94u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x0040BD94u) [[unlikely]] return; }
L_0040BD94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040BB88u | kUnwind; return; } goto L_0040BB88; } }
L_0040BD9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BDA4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0040BDA4u) [[unlikely]] return; }
L_0040BDA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040BBA8u | kUnwind; return; } goto L_0040BBA8; } }
L_0040BDAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BDB4u); set32(c.r[4], c.r[19].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0040BDB4u) [[unlikely]] return; }
L_0040BDB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040BC08u | kUnwind; return; } goto L_0040BC08; } }
    c.budget -= 1;
L_0040BDC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BDC8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0040BDC8u) [[unlikely]] return; }
L_0040BDC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040BC48u | kUnwind; return; } goto L_0040BC48; } }
L_0040BDD0:
    c.r[23].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0040BDD8:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[22].w[0] << 7);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 3856u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BDF4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0041(c, 58u, depth + 1u); else { c.pc = 0x00304A80u; return; } if (c.pc != 0x0040BDF4u) [[unlikely]] return; }
L_0040BDF4:
    set32(c.r[4], ld32((c.r[21].w[0] + 24u)));
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0040BE38; } }
    set32(c.r[5], ld32((c.r[21].w[0] + 16u)));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 4u));
    c.budget -= 3;
L_0040BE10:
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 4u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0040BE28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040BE40; } }
L_0040BE28:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040BE10u | kUnwind; return; } goto L_0040BE10; } }
L_0040BE38:
    set32(c.r[6], 0u - 1u);
    c.budget -= 2;
L_0040BE40:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_0040BEE8; } }
L_0040BE48:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].d[0] = ld16((c.r[19].w[0] + 4u));
    set32(c.r[6], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = ld16((c.r[19].w[0] + 4u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040BE74u); set32(c.r[4], c.r[4].w[0] + 3856u);  if (depth < kMaxDepth) unit_0041(c, 43u, depth + 1u); else { c.pc = 0x003048C0u; return; } if (c.pc != 0x0040BE74u) [[unlikely]] return; }
L_0040BE74:
    set32(c.r[4], ld32((c.r[30].w[0] + 4u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[8], 0u + 1u);
    set32(c.r[7], c.r[19].w[0] + 8u);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
L_0040BE90:
    c.r[1].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(16ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040BF10; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[1].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040BF10; } }
    c.r[4].d[0] = ld16((c.r[19].w[0] + 4u));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[5], ld32((c.r[19].w[0])));
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[17].w[0]));
    st32((c.r[7].w[0]), c.r[5].w[0]);
    st32((c.r[29].w[0] + 216u), c.r[5].w[0]);
    st16((c.r[7].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[7].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040BE90u | kUnwind; return; } goto L_0040BE90; } }
    c.budget -= 1;
L_0040BEE8:
    set32(c.r[3], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 24u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040BE48u | kUnwind; return; } goto L_0040BE48; } }
L_0040BF10:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[4], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[22].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[23], c.r[23].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040BDD8u | kUnwind; return; } goto L_0040BDD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040BC68u | kUnwind; return; } goto L_0040BC68; } }
    c.budget -= 1;
L_0040BF38:
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], ld32((c.r[30].w[0])));
    set32(c.r[3], c.r[3].w[0] + 8u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040BBC8u | kUnwind; return; } goto L_0040BBC8; } }
L_0040BF60:
    set32(c.r[3], 0u + 1u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
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
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0040BFA0:
    st32((c.r[4].w[0] + 20u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 24u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), 0u);  c.pc = t; return; }
L_0040BFC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0083(c, 2u, depth); } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040BFF8:
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
    [[clang::musttail]] return unit_0083(c, 1u, depth);
}

}

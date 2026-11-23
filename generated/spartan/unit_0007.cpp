#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0007[4096] = {
    1, 0, 2, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0,
    0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0,
    49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 58, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0,
    0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0,
    0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 162,
    0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0,
    0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 171, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 179, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 196, 0, 0, 0, 0, 197, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202,
    0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0,
    0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0,
    0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0,
    0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0,
    0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0,
    0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274,
    0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0,
    279, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0,
    0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 313,
    0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 343, 0, 0, 0, 344, 0, 345, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 365, 0, 0, 0, 366, 0, 367, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 379, 0, 0, 0, 380, 0, 381, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0,
    0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0,
    406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0,
    411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0,
    413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 417, 0,
    418, 0, 0, 0, 419, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0,
};

void unit_0007(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0021C000;
    case 2u: goto L_0021C008;
    case 3u: goto L_0021C018;
    case 4u: goto L_0021C020;
    case 5u: goto L_0021C048;
    case 6u: goto L_0021C078;
    case 7u: goto L_0021C08C;
    case 8u: goto L_0021C0D0;
    case 9u: goto L_0021C0D8;
    case 10u: goto L_0021C0F8;
    case 11u: goto L_0021C110;
    case 12u: goto L_0021C120;
    case 13u: goto L_0021C130;
    case 14u: goto L_0021C148;
    case 15u: goto L_0021C158;
    case 16u: goto L_0021C170;
    case 17u: goto L_0021C180;
    case 18u: goto L_0021C218;
    case 19u: goto L_0021C250;
    case 20u: goto L_0021C264;
    case 21u: goto L_0021C2B0;
    case 22u: goto L_0021C2C0;
    case 23u: goto L_0021C358;
    case 24u: goto L_0021C390;
    case 25u: goto L_0021C3A4;
    case 26u: goto L_0021C3F0;
    case 27u: goto L_0021C400;
    case 28u: goto L_0021C430;
    case 29u: goto L_0021C438;
    case 30u: goto L_0021C450;
    case 31u: goto L_0021C468;
    case 32u: goto L_0021C498;
    case 33u: goto L_0021C4A0;
    case 34u: goto L_0021C4B8;
    case 35u: goto L_0021C4D0;
    case 36u: goto L_0021C500;
    case 37u: goto L_0021C508;
    case 38u: goto L_0021C520;
    case 39u: goto L_0021C538;
    case 40u: goto L_0021C568;
    case 41u: goto L_0021C570;
    case 42u: goto L_0021C588;
    case 43u: goto L_0021C5A0;
    case 44u: goto L_0021C5B0;
    case 45u: goto L_0021C5C0;
    case 46u: goto L_0021C5D0;
    case 47u: goto L_0021C5E0;
    case 48u: goto L_0021C5F0;
    case 49u: goto L_0021C600;
    case 50u: goto L_0021C610;
    case 51u: goto L_0021C620;
    case 52u: goto L_0021C660;
    case 53u: goto L_0021C668;
    case 54u: goto L_0021C6C0;
    case 55u: goto L_0021C6D0;
    case 56u: goto L_0021C6E0;
    case 57u: goto L_0021C6F0;
    case 58u: goto L_0021C6F8;
    case 59u: goto L_0021C73C;
    case 60u: goto L_0021C780;
    case 61u: goto L_0021C794;
    case 62u: goto L_0021C7B4;
    case 63u: goto L_0021C7BC;
    case 64u: goto L_0021C7C8;
    case 65u: goto L_0021C7E8;
    case 66u: goto L_0021C7FC;
    case 67u: goto L_0021C810;
    case 68u: goto L_0021C868;
    case 69u: goto L_0021C880;
    case 70u: goto L_0021C8E8;
    case 71u: goto L_0021C900;
    case 72u: goto L_0021C914;
    case 73u: goto L_0021C928;
    case 74u: goto L_0021C984;
    case 75u: goto L_0021C998;
    case 76u: goto L_0021C9E8;
    case 77u: goto L_0021CA08;
    case 78u: goto L_0021CA1C;
    case 79u: goto L_0021CA30;
    case 80u: goto L_0021CA40;
    case 81u: goto L_0021CA48;
    case 82u: goto L_0021CA60;
    case 83u: goto L_0021CA80;
    case 84u: goto L_0021CA90;
    case 85u: goto L_0021CAA0;
    case 86u: goto L_0021CAB4;
    case 87u: goto L_0021CAD0;
    case 88u: goto L_0021CBB4;
    case 89u: goto L_0021CBC0;
    case 90u: goto L_0021CBD8;
    case 91u: goto L_0021CBE8;
    case 92u: goto L_0021CC00;
    case 93u: goto L_0021CC38;
    case 94u: goto L_0021CC48;
    case 95u: goto L_0021CC60;
    case 96u: goto L_0021CC70;
    case 97u: goto L_0021CC94;
    case 98u: goto L_0021CCA0;
    case 99u: goto L_0021CCB8;
    case 100u: goto L_0021CCC8;
    case 101u: goto L_0021CCEC;
    case 102u: goto L_0021CCF8;
    case 103u: goto L_0021CD10;
    case 104u: goto L_0021CD20;
    case 105u: goto L_0021CD48;
    case 106u: goto L_0021CD58;
    case 107u: goto L_0021CD80;
    case 108u: goto L_0021CDC0;
    case 109u: goto L_0021CDD8;
    case 110u: goto L_0021CDE8;
    case 111u: goto L_0021CE00;
    case 112u: goto L_0021CE10;
    case 113u: goto L_0021CE28;
    case 114u: goto L_0021CE38;
    case 115u: goto L_0021CE60;
    case 116u: goto L_0021CEA0;
    case 117u: goto L_0021CEE0;
    case 118u: goto L_0021CF4C;
    case 119u: goto L_0021CF64;
    case 120u: goto L_0021CF7C;
    case 121u: goto L_0021CFB0;
    case 122u: goto L_0021CFD0;
    case 123u: goto L_0021D000;
    case 124u: goto L_0021D018;
    case 125u: goto L_0021D058;
    case 126u: goto L_0021D078;
    case 127u: goto L_0021D0C8;
    case 128u: goto L_0021D0F8;
    case 129u: goto L_0021D164;
    case 130u: goto L_0021D180;
    case 131u: goto L_0021D198;
    case 132u: goto L_0021D1A4;
    case 133u: goto L_0021D1C0;
    case 134u: goto L_0021D1F0;
    case 135u: goto L_0021D228;
    case 136u: goto L_0021D238;
    case 137u: goto L_0021D270;
    case 138u: goto L_0021D2C0;
    case 139u: goto L_0021D2DC;
    case 140u: goto L_0021D2F4;
    case 141u: goto L_0021D360;
    case 142u: goto L_0021D380;
    case 143u: goto L_0021D388;
    case 144u: goto L_0021D3B8;
    case 145u: goto L_0021D3F8;
    case 146u: goto L_0021D468;
    case 147u: goto L_0021D480;
    case 148u: goto L_0021D4A0;
    case 149u: goto L_0021D530;
    case 150u: goto L_0021D58C;
    case 151u: goto L_0021D59C;
    case 152u: goto L_0021D5B4;
    case 153u: goto L_0021D5D0;
    case 154u: goto L_0021D5E0;
    case 155u: goto L_0021D5F0;
    case 156u: goto L_0021D604;
    case 157u: goto L_0021D624;
    case 158u: goto L_0021D638;
    case 159u: goto L_0021D648;
    case 160u: goto L_0021D65C;
    case 161u: goto L_0021D674;
    case 162u: goto L_0021D67C;
    case 163u: goto L_0021D684;
    case 164u: goto L_0021D69C;
    case 165u: goto L_0021D6D8;
    case 166u: goto L_0021D708;
    case 167u: goto L_0021D768;
    case 168u: goto L_0021D788;
    case 169u: goto L_0021D7C4;
    case 170u: goto L_0021D7CC;
    case 171u: goto L_0021D7D4;
    case 172u: goto L_0021D7DC;
    case 173u: goto L_0021D7E8;
    case 174u: goto L_0021D814;
    case 175u: goto L_0021D824;
    case 176u: goto L_0021D870;
    case 177u: goto L_0021D8AC;
    case 178u: goto L_0021D8B4;
    case 179u: goto L_0021D8BC;
    case 180u: goto L_0021D8C4;
    case 181u: goto L_0021D8CC;
    case 182u: goto L_0021D938;
    case 183u: goto L_0021D980;
    case 184u: goto L_0021D9AC;
    case 185u: goto L_0021DA40;
    case 186u: goto L_0021DA6C;
    case 187u: goto L_0021DB30;
    case 188u: goto L_0021DB40;
    case 189u: goto L_0021DB58;
    case 190u: goto L_0021DB84;
    case 191u: goto L_0021DBF0;
    case 192u: goto L_0021DC00;
    case 193u: goto L_0021DC18;
    case 194u: goto L_0021DC48;
    case 195u: goto L_0021DC54;
    case 196u: goto L_0021DC84;
    case 197u: goto L_0021DC98;
    case 198u: goto L_0021DCA4;
    case 199u: goto L_0021DCAC;
    case 200u: goto L_0021DCD4;
    case 201u: goto L_0021DCE8;
    case 202u: goto L_0021DCFC;
    case 203u: goto L_0021DD10;
    case 204u: goto L_0021DD24;
    case 205u: goto L_0021DD38;
    case 206u: goto L_0021DD68;
    case 207u: goto L_0021DDB8;
    case 208u: goto L_0021DDF0;
    case 209u: goto L_0021DE28;
    case 210u: goto L_0021DE78;
    case 211u: goto L_0021DED4;
    case 212u: goto L_0021DF90;
    case 213u: goto L_0021DFB0;
    case 214u: goto L_0021DFE8;
    case 215u: goto L_0021E000;
    case 216u: goto L_0021E018;
    case 217u: goto L_0021E030;
    case 218u: goto L_0021E050;
    case 219u: goto L_0021E068;
    case 220u: goto L_0021E0A8;
    case 221u: goto L_0021E0CC;
    case 222u: goto L_0021E108;
    case 223u: goto L_0021E128;
    case 224u: goto L_0021E158;
    case 225u: goto L_0021E178;
    case 226u: goto L_0021E1B8;
    case 227u: goto L_0021E1D8;
    case 228u: goto L_0021E200;
    case 229u: goto L_0021E218;
    case 230u: goto L_0021E230;
    case 231u: goto L_0021E248;
    case 232u: goto L_0021E278;
    case 233u: goto L_0021E298;
    case 234u: goto L_0021E2D8;
    case 235u: goto L_0021E2F8;
    case 236u: goto L_0021E320;
    case 237u: goto L_0021E338;
    case 238u: goto L_0021E350;
    case 239u: goto L_0021E368;
    case 240u: goto L_0021E3A0;
    case 241u: goto L_0021E3E8;
    case 242u: goto L_0021E420;
    case 243u: goto L_0021E478;
    case 244u: goto L_0021E490;
    case 245u: goto L_0021E4A0;
    case 246u: goto L_0021E4B8;
    case 247u: goto L_0021E4C8;
    case 248u: goto L_0021E4F4;
    case 249u: goto L_0021E518;
    case 250u: goto L_0021E544;
    case 251u: goto L_0021E550;
    case 252u: goto L_0021E58C;
    case 253u: goto L_0021E598;
    case 254u: goto L_0021E5BC;
    case 255u: goto L_0021E5E0;
    case 256u: goto L_0021E5F0;
    case 257u: goto L_0021E608;
    case 258u: goto L_0021E640;
    case 259u: goto L_0021E664;
    case 260u: goto L_0021E674;
    case 261u: goto L_0021E688;
    case 262u: goto L_0021E6C0;
    case 263u: goto L_0021E6E4;
    case 264u: goto L_0021E6F4;
    case 265u: goto L_0021E708;
    case 266u: goto L_0021E728;
    case 267u: goto L_0021E738;
    case 268u: goto L_0021E780;
    case 269u: goto L_0021E7A0;
    case 270u: goto L_0021E838;
    case 271u: goto L_0021E868;
    case 272u: goto L_0021E8B4;
    case 273u: goto L_0021E8BC;
    case 274u: goto L_0021E8FC;
    case 275u: goto L_0021E910;
    case 276u: goto L_0021E920;
    case 277u: goto L_0021E92C;
    case 278u: goto L_0021E978;
    case 279u: goto L_0021E980;
    case 280u: goto L_0021E994;
    case 281u: goto L_0021E9A4;
    case 282u: goto L_0021E9B4;
    case 283u: goto L_0021EA00;
    case 284u: goto L_0021EA10;
    case 285u: goto L_0021EA20;
    case 286u: goto L_0021EA68;
    case 287u: goto L_0021EAE0;
    case 288u: goto L_0021EB30;
    case 289u: goto L_0021EBB8;
    case 290u: goto L_0021EC20;
    case 291u: goto L_0021EC34;
    case 292u: goto L_0021EC44;
    case 293u: goto L_0021EC68;
    case 294u: goto L_0021EC98;
    case 295u: goto L_0021ECA8;
    case 296u: goto L_0021ECD8;
    case 297u: goto L_0021ECE8;
    case 298u: goto L_0021ED40;
    case 299u: goto L_0021ED64;
    case 300u: goto L_0021EE08;
    case 301u: goto L_0021EE30;
    case 302u: goto L_0021EE64;
    case 303u: goto L_0021EE84;
    case 304u: goto L_0021EEE0;
    case 305u: goto L_0021EEF8;
    case 306u: goto L_0021EF28;
    case 307u: goto L_0021EF30;
    case 308u: goto L_0021EF38;
    case 309u: goto L_0021EFAC;
    case 310u: goto L_0021EFC4;
    case 311u: goto L_0021EFDC;
    case 312u: goto L_0021EFF4;
    case 313u: goto L_0021EFFC;
    case 314u: goto L_0021F008;
    case 315u: goto L_0021F034;
    case 316u: goto L_0021F038;
    case 317u: goto L_0021F040;
    case 318u: goto L_0021F080;
    case 319u: goto L_0021F090;
    case 320u: goto L_0021F0A8;
    case 321u: goto L_0021F0C0;
    case 322u: goto L_0021F0D8;
    case 323u: goto L_0021F11C;
    case 324u: goto L_0021F138;
    case 325u: goto L_0021F150;
    case 326u: goto L_0021F170;
    case 327u: goto L_0021F1A0;
    case 328u: goto L_0021F1C4;
    case 329u: goto L_0021F1E0;
    case 330u: goto L_0021F254;
    case 331u: goto L_0021F288;
    case 332u: goto L_0021F290;
    case 333u: goto L_0021F2B0;
    case 334u: goto L_0021F2D8;
    case 335u: goto L_0021F2F0;
    case 336u: goto L_0021F320;
    case 337u: goto L_0021F330;
    case 338u: goto L_0021F388;
    case 339u: goto L_0021F3C0;
    case 340u: goto L_0021F400;
    case 341u: goto L_0021F454;
    case 342u: goto L_0021F464;
    case 343u: goto L_0021F48C;
    case 344u: goto L_0021F49C;
    case 345u: goto L_0021F4A4;
    case 346u: goto L_0021F4B4;
    case 347u: goto L_0021F4BC;
    case 348u: goto L_0021F4EC;
    case 349u: goto L_0021F4FC;
    case 350u: goto L_0021F528;
    case 351u: goto L_0021F538;
    case 352u: goto L_0021F548;
    case 353u: goto L_0021F578;
    case 354u: goto L_0021F5A0;
    case 355u: goto L_0021F5B8;
    case 356u: goto L_0021F5DC;
    case 357u: goto L_0021F608;
    case 358u: goto L_0021F644;
    case 359u: goto L_0021F688;
    case 360u: goto L_0021F6C0;
    case 361u: goto L_0021F70C;
    case 362u: goto L_0021F71C;
    case 363u: goto L_0021F744;
    case 364u: goto L_0021F754;
    case 365u: goto L_0021F75C;
    case 366u: goto L_0021F76C;
    case 367u: goto L_0021F774;
    case 368u: goto L_0021F7A4;
    case 369u: goto L_0021F7B4;
    case 370u: goto L_0021F7D8;
    case 371u: goto L_0021F868;
    case 372u: goto L_0021F8C0;
    case 373u: goto L_0021F92C;
    case 374u: goto L_0021F944;
    case 375u: goto L_0021F954;
    case 376u: goto L_0021F99C;
    case 377u: goto L_0021F9C8;
    case 378u: goto L_0021F9D8;
    case 379u: goto L_0021FA04;
    case 380u: goto L_0021FA14;
    case 381u: goto L_0021FA1C;
    case 382u: goto L_0021FA2C;
    case 383u: goto L_0021FA34;
    case 384u: goto L_0021FA68;
    case 385u: goto L_0021FAA8;
    case 386u: goto L_0021FAC4;
    case 387u: goto L_0021FB08;
    case 388u: goto L_0021FB40;
    case 389u: goto L_0021FB84;
    case 390u: goto L_0021FBC8;
    case 391u: goto L_0021FC10;
    case 392u: goto L_0021FC30;
    case 393u: goto L_0021FC60;
    case 394u: goto L_0021FC88;
    case 395u: goto L_0021FCA8;
    case 396u: goto L_0021FCC0;
    case 397u: goto L_0021FCF8;
    case 398u: goto L_0021FD20;
    case 399u: goto L_0021FD38;
    case 400u: goto L_0021FD50;
    case 401u: goto L_0021FD78;
    case 402u: goto L_0021FD90;
    case 403u: goto L_0021FDC8;
    case 404u: goto L_0021FDE8;
    case 405u: goto L_0021FDF8;
    case 406u: goto L_0021FE00;
    case 407u: goto L_0021FE1C;
    case 408u: goto L_0021FE30;
    case 409u: goto L_0021FE3C;
    case 410u: goto L_0021FE60;
    case 411u: goto L_0021FE80;
    case 412u: goto L_0021FEF8;
    case 413u: goto L_0021FF00;
    case 414u: goto L_0021FF10;
    case 415u: goto L_0021FF58;
    case 416u: goto L_0021FF70;
    case 417u: goto L_0021FF78;
    case 418u: goto L_0021FF80;
    case 419u: goto L_0021FF90;
    case 420u: goto L_0021FF98;
    case 421u: goto L_0021FFD8;
    case 422u: goto L_0021FFF0;
    default: bad_entry(c, 0x0021C000u); return;
    }
L_0021C000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021C008:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_0021C018:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_0021C020:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_0021C06C; } }
L_0021C048:
    set_interrupts(c, false);
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C048u | kUnwind; return; } goto L_0021C048; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] - 15180u)));  if (t) { goto L_0021C070; } }
L_0021C06C:
    set32(c.r[2], ld32((c.r[18].w[0] - 15180u)));
    c.budget -= 1;
L_0021C070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C078u); set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0006(c, 196u, depth + 1u); else { c.pc = 0x0021B900u; return; } if (c.pc != 0x0021C078u) [[unlikely]] return; }
L_0021C078:
    c.r[2].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[18].w[0] - 15180u)));  if (t) { goto L_0021C0A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C08Cu);  if (depth < kMaxDepth) unit_000C(c, 109u, depth + 1u); else { c.pc = 0x00230F38u; return; } if (c.pc != 0x0021C08Cu) [[unlikely]] return; }
L_0021C08C:
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_0021C09C; } }
    set_interrupts(c, true);
    c.budget -= 1;
L_0021C09C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_0021C0B4; } }
L_0021C0A8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] - 15180u), c.r[16].w[0]);  if (t) { goto L_0021C0B4; } }
    set_interrupts(c, true);
    c.budget -= 1;
L_0021C0B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021C0D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0021C0D8:
    set32(c.r[2], 0u + 8192u);
    st64((c.r[5].w[0] + 72u), 0ull);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0021C0F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0021C110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C110u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 222u, depth + 1u); else { c.pc = 0x00226098u; return; } if (c.pc != 0x0021C110u) [[unlikely]] return; }
L_0021C110:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021C120:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C130u);  if (depth < kMaxDepth) unit_000C(c, 109u, depth + 1u); else { c.pc = 0x00230F38u; return; } if (c.pc != 0x0021C130u) [[unlikely]] return; }
L_0021C130:
    set32(c.r[3], 0u + 5u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021C148:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C158u);  if (depth < kMaxDepth) unit_000C(c, 109u, depth + 1u); else { c.pc = 0x00230F38u; return; } if (c.pc != 0x0021C158u) [[unlikely]] return; }
L_0021C158:
    set32(c.r[3], 0u + 5u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021C170:
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 61440ull;
    c.budget -= 4;
L_0021C180:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021C1BC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0021C1BC; } }
    c.budget -= 3;
L_0021C1BC:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021C1F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0021C1F8; } }
    c.budget -= 3;
L_0021C1F8:
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.r[2].d[0] = c.r[6].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C180u | kUnwind; return; } goto L_0021C180; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021C218:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0021C250; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C250u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0021C250u) [[unlikely]] return; }
L_0021C250:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65472ull;
    c.r[5].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C264u); c.r[4].d[0] = c.r[18].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_0007(c, 16u, depth + 1u); else { c.pc = 0x0021C170u; return; } if (c.pc != 0x0021C264u) [[unlikely]] return; }
L_0021C264:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0021C280; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0009(c, 151u, depth); }
L_0021C280:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021C2B0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 61440ull;
    c.budget -= 4;
L_0021C2C0:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021C2FC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0021C2FC; } }
    c.budget -= 3;
L_0021C2FC:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021C338; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0021C338; } }
    c.budget -= 3;
L_0021C338:
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.r[2].d[0] = c.r[6].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C2C0u | kUnwind; return; } goto L_0021C2C0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021C358:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0021C390; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C390u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0021C390u) [[unlikely]] return; }
L_0021C390:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65472ull;
    c.r[5].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C3A4u); c.r[4].d[0] = c.r[18].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_0007(c, 21u, depth + 1u); else { c.pc = 0x0021C2B0u; return; } if (c.pc != 0x0021C3A4u) [[unlikely]] return; }
L_0021C3A4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0021C3C0; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0009(c, 151u, depth); }
L_0021C3C0:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021C3F0:
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 1ull;  c.pc = t; return; }
L_0021C400:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0021C430; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C430u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0021C430u) [[unlikely]] return; }
L_0021C430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C438u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 154u, depth + 1u); else { c.pc = 0x0021B670u; return; } if (c.pc != 0x0021C438u) [[unlikely]] return; }
L_0021C438:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0021C454; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C450u);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0021C450u) [[unlikely]] return; }
L_0021C450:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0021C454:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021C468:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0021C498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C498u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0021C498u) [[unlikely]] return; }
L_0021C498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C4A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 152u, depth + 1u); else { c.pc = 0x0021B660u; return; } if (c.pc != 0x0021C4A0u) [[unlikely]] return; }
L_0021C4A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0021C4BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C4B8u);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0021C4B8u) [[unlikely]] return; }
L_0021C4B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0021C4BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021C4D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0021C500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C500u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0021C500u) [[unlikely]] return; }
L_0021C500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C508u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 158u, depth + 1u); else { c.pc = 0x0021B690u; return; } if (c.pc != 0x0021C508u) [[unlikely]] return; }
L_0021C508:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0021C524; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C520u);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0021C520u) [[unlikely]] return; }
L_0021C520:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0021C524:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021C538:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0021C568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C568u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0021C568u) [[unlikely]] return; }
L_0021C568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C570u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 156u, depth + 1u); else { c.pc = 0x0021B680u; return; } if (c.pc != 0x0021C570u) [[unlikely]] return; }
L_0021C570:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0021C58C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C588u);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0021C588u) [[unlikely]] return; }
L_0021C588:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0021C58C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021C5A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C5B0u);  if (depth < kMaxDepth) unit_0006(c, 160u, depth + 1u); else { c.pc = 0x0021B6C0u; return; } if (c.pc != 0x0021C5B0u) [[unlikely]] return; }
L_0021C5B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021C5C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C5D0u);  if (depth < kMaxDepth) unit_0006(c, 162u, depth + 1u); else { c.pc = 0x0021B6D0u; return; } if (c.pc != 0x0021C5D0u) [[unlikely]] return; }
L_0021C5D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021C5E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C5F0u);  if (depth < kMaxDepth) unit_0006(c, 164u, depth + 1u); else { c.pc = 0x0021B6E0u; return; } if (c.pc != 0x0021C5F0u) [[unlikely]] return; }
L_0021C5F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021C600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C610u);  if (depth < kMaxDepth) unit_0006(c, 166u, depth + 1u); else { c.pc = 0x0021B6F0u; return; } if (c.pc != 0x0021C610u) [[unlikely]] return; }
L_0021C610:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021C620:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[20], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[19], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[18], c.r[17].w[0] + 8u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 9u);
    c.budget -= 16;
L_0021C660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C668u); set32(c.r[4], ld32((c.r[22].w[0] - 8832u)));  if (depth < kMaxDepth) unit_0006(c, 206u, depth + 1u); else { c.pc = 0x0021B960u; return; } if (c.pc != 0x0021C668u) [[unlikely]] return; }
L_0021C668:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 511ull;
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 1);
    st32((c.r[17].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[16].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == c.r[20].d[0]; c.r[5].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0021C6C8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[21].w[0] + 27024u);  if (t) { goto L_0021C6A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0021C6B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021C6E8; } }
L_0021C6A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0]; set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_0021C6D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021C6E8; } }
L_0021C6B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C6C0u); c.r[4].d[0] = ld8((c.r[3].w[0]));  if (depth < kMaxDepth) unit_0006(c, 188u, depth + 1u); else { c.pc = 0x0021B850u; return; } if (c.pc != 0x0021C6C0u) [[unlikely]] return; }
L_0021C6C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C660u | kUnwind; return; } goto L_0021C660; } }
L_0021C6C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C6D0u); c.r[4].d[0] = ld8((c.r[6].w[0]));  if (depth < kMaxDepth) unit_0006(c, 180u, depth + 1u); else { c.pc = 0x0021B7D0u; return; } if (c.pc != 0x0021C6D0u) [[unlikely]] return; }
L_0021C6D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C660u | kUnwind; return; } goto L_0021C660; } }
L_0021C6D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C6E0u); c.r[4].d[0] = ld8((c.r[3].w[0]));  if (depth < kMaxDepth) unit_0006(c, 192u, depth + 1u); else { c.pc = 0x0021B890u; return; } if (c.pc != 0x0021C6E0u) [[unlikely]] return; }
L_0021C6E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C660u | kUnwind; return; } goto L_0021C660; } }
L_0021C6E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C6F0u);  if (depth < kMaxDepth) unit_0007(c, 261u, depth + 1u); else { c.pc = 0x0021E688u; return; } if (c.pc != 0x0021C6F0u) [[unlikely]] return; }
L_0021C6F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C660u | kUnwind; return; } goto L_0021C660; } }
L_0021C6F8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] - 15176u)));
    st64((c.r[29].w[0] + 112u), c.r[18].d[0]);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] > 0; st64((c.r[29].w[0] + 96u), c.r[17].d[0]);  if (t) { goto L_0021C794; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 255u);
    set32(c.r[17], c.r[2].w[0] + 27064u);
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 56u), 0u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 68u), c.r[17].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C73Cu); c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (depth < kMaxDepth) unit_0006(c, 198u, depth + 1u); else { c.pc = 0x0021B920u; return; } if (c.pc != 0x0021C73Cu) [[unlikely]] return; }
L_0021C73C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[18].w[0] - 8832u), c.r[2].w[0]);  if (t) { goto L_0021C794; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 14816u);
    set32(c.r[3], c.r[3].w[0] - 9856u);
    set32(c.r[5], c.r[5].w[0] + 16240u);
    set32(c.r[6], 0u + 1024u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[17].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C780u); st32((c.r[29].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_0006(c, 168u, depth + 1u); else { c.pc = 0x0021B720u; return; } if (c.pc != 0x0021C780u) [[unlikely]] return; }
L_0021C780:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; st32((c.r[16].w[0] - 15176u), c.r[4].w[0]);  if (t) { goto L_0021C79C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C794u); set32(c.r[4], ld32((c.r[18].w[0] - 8832u)));  if (depth < kMaxDepth) unit_0006(c, 200u, depth + 1u); else { c.pc = 0x0021B930u; return; } if (c.pc != 0x0021C794u) [[unlikely]] return; }
L_0021C794:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0021C7CC; } }
L_0021C79C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[2].w[0] - 8824u);
    st32((c.r[2].w[0] - 8824u), 0u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C7B4u); st32((c.r[3].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0007(c, 82u, depth + 1u); else { c.pc = 0x0021CA60u; return; } if (c.pc != 0x0021C7B4u) [[unlikely]] return; }
L_0021C7B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C7BCu);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x0021C7BCu) [[unlikely]] return; }
L_0021C7BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C7C8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0006(c, 178u, depth + 1u); else { c.pc = 0x0021B7B0u; return; } if (c.pc != 0x0021C7C8u) [[unlikely]] return; }
L_0021C7C8:
    set32(c.r[2], ld32((c.r[16].w[0] - 15176u)));
    c.budget -= 1;
L_0021C7CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0021C7E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], 0u - 47u);
    c.budget -= 4;
    c.pc = 0x0021C7FCu; syscall(c, 0x0021C7F8u); if (c.pc != 0x0021C7FCu) return;
    c.budget -= 1;
L_0021C7FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[4].d[0]; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;  if (t) { goto L_0021C818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C810u);  if (depth < kMaxDepth) unit_0006(c, 190u, depth + 1u); else { c.pc = 0x0021B860u; return; } if (c.pc != 0x0021C810u) [[unlikely]] return; }
L_0021C810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0021C870; } }
L_0021C818:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_0021C82C; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 15176u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0021C834; } }
L_0021C82C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0021C86C; } }
L_0021C834:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 8824u);
    set32(c.r[4], ld32((c.r[5].w[0] - 8832u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C868u); st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0006(c, 204u, depth + 1u); else { c.pc = 0x0021B950u; return; } if (c.pc != 0x0021C868u) [[unlikely]] return; }
L_0021C868:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0021C86C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0021C870:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021C880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(128ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_0021C8A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 15176u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0021C8B0; } }
L_0021C8A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0021C8EC; } }
L_0021C8B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 8824u);
    set32(c.r[4], ld32((c.r[5].w[0] - 8832u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[7], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C8E8u); st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0006(c, 204u, depth + 1u); else { c.pc = 0x0021B950u; return; } if (c.pc != 0x0021C8E8u) [[unlikely]] return; }
L_0021C8E8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0021C8EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021C900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], 0u - 47u);
    c.budget -= 4;
    c.pc = 0x0021C914u; syscall(c, 0x0021C910u); if (c.pc != 0x0021C914u) return;
    c.budget -= 1;
L_0021C914:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[4].d[0]; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;  if (t) { goto L_0021C930; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C928u);  if (depth < kMaxDepth) unit_0006(c, 194u, depth + 1u); else { c.pc = 0x0021B8A0u; return; } if (c.pc != 0x0021C928u) [[unlikely]] return; }
L_0021C928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0021C98C; } }
L_0021C930:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);  if (t) { goto L_0021C944; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 15176u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0021C94C; } }
L_0021C944:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0021C988; } }
L_0021C94C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 8824u);
    set32(c.r[4], ld32((c.r[5].w[0] - 8832u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[7], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C984u); st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0006(c, 204u, depth + 1u); else { c.pc = 0x0021B950u; return; } if (c.pc != 0x0021C984u) [[unlikely]] return; }
L_0021C984:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0021C988:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0021C98C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021C998:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 10;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  goto L_0021C9CC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32776ull;  if (t) { goto L_0021CA4C; } }
L_0021C9CC:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 27088u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021C9E8u); st32((c.r[29].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0006(c, 198u, depth + 1u); else { c.pc = 0x0021B920u; return; } if (c.pc != 0x0021C9E8u) [[unlikely]] return; }
L_0021C9E8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0021CA00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 32771ull;  if (t) { goto L_0021CA4C; } }
L_0021CA00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CA08u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 358u, depth + 1u); else { c.pc = 0x002274C0u; return; } if (c.pc != 0x0021CA08u) [[unlikely]] return; }
L_0021CA08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 13352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CA1Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 367u, depth + 1u); else { c.pc = 0x00227670u; return; } if (c.pc != 0x0021CA1Cu) [[unlikely]] return; }
L_0021CA1C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { goto L_0021CA38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CA30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 200u, depth + 1u); else { c.pc = 0x0021B930u; return; } if (c.pc != 0x0021CA30u) [[unlikely]] return; }
L_0021CA30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0021CA4C; } }
L_0021CA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CA40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 206u, depth + 1u); else { c.pc = 0x0021B960u; return; } if (c.pc != 0x0021CA40u) [[unlikely]] return; }
L_0021CA40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CA48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 200u, depth + 1u); else { c.pc = 0x0021B930u; return; } if (c.pc != 0x0021CA48u) [[unlikely]] return; }
L_0021CA48:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021CA4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0021CA60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CA80u); st64((c.r[29].w[0] + 48u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0007(c, 26u, depth + 1u); else { c.pc = 0x0021C3F0u; return; } if (c.pc != 0x0021CA80u) [[unlikely]] return; }
L_0021CA80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0021CBC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CA90u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0021CA90u) [[unlikely]] return; }
L_0021CA90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0021CAD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CAA0u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 184u, depth + 1u); else { c.pc = 0x0021B820u; return; } if (c.pc != 0x0021CAA0u) [[unlikely]] return; }
L_0021CAA0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[3], ld32((c.r[29].w[0])));  if (t) { goto L_0021CABC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CAB4u);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0021CAB4u) [[unlikely]] return; }
L_0021CAB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0021CBC0; } }
L_0021CABC:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_0021CAD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CAD0u);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0021CAD0u) [[unlikely]] return; }
L_0021CAD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0021CBC0; } }
L_0021CAD8:
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 672u);
    st128((c.r[2].w[0]) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 64u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 80u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 96u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 112u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 128u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 144u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 160u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 176u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 192u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 208u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 224u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 240u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 256u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 272u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 288u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 304u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 320u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 336u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 352u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 368u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 384u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 400u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 416u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 432u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 512u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 528u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 544u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 560u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 576u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 592u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 608u) & ~15u, c.r[0]);
    st128((c.r[2].w[0] + 624u) & ~15u, c.r[0]);
    set32(c.r[8], c.r[18].w[0] << 0);
    st64((c.r[2].w[0] + 64u), c.r[8].d[0]);
    set32(c.r[8], ld32((c.r[2].w[0] + 448u)));
    st64((c.r[2].w[0] + 448u), c.r[8].d[0]);
    st64((c.r[2].w[0] + 456u), 0ull);
    set32(c.r[8], ld32((c.r[2].w[0] + 464u)));
    st64((c.r[2].w[0] + 464u), c.r[8].d[0]);
    st64((c.r[2].w[0] + 472u), 0ull);
    set32(c.r[8], ld32((c.r[2].w[0] + 480u)));
    st64((c.r[2].w[0] + 480u), c.r[8].d[0]);
    st64((c.r[2].w[0] + 488u), 0ull);
    set32(c.r[8], ld32((c.r[2].w[0] + 496u)));
    st64((c.r[2].w[0] + 496u), c.r[8].d[0]);
    st64((c.r[2].w[0] + 504u), 0ull);
    c.budget -= 55;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CBB4u);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0021CBB4u) [[unlikely]] return; }
L_0021CBB4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CBC0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 172u, depth + 1u); else { c.pc = 0x0021B740u; return; } if (c.pc != 0x0021CBC0u) [[unlikely]] return; }
L_0021CBC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0021CBD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CBE8u); c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 204u, depth + 1u); else { c.pc = 0x0021B950u; return; } if (c.pc != 0x0021CBE8u) [[unlikely]] return; }
L_0021CBE8:
    set_interrupts(c, true);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021CC00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[2].w[0] - 7792u);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CC38u); st32((c.r[29].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 242u, depth + 1u); else { c.pc = 0x0021BD50u; return; } if (c.pc != 0x0021CC38u) [[unlikely]] return; }
L_0021CC38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021CC48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CC60u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0006(c, 242u, depth + 1u); else { c.pc = 0x0021BD50u; return; } if (c.pc != 0x0021CC60u) [[unlikely]] return; }
L_0021CC60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021CC70:
    set32(c.r[5], c.r[5].w[0] << 24);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 24));
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[4], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CC94u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 242u, depth + 1u); else { c.pc = 0x0021BD50u; return; } if (c.pc != 0x0021CC94u) [[unlikely]] return; }
L_0021CC94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021CCA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CCB8u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0006(c, 242u, depth + 1u); else { c.pc = 0x0021BD50u; return; } if (c.pc != 0x0021CCB8u) [[unlikely]] return; }
L_0021CCB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021CCC8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], 0u + 32u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CCECu); st32((c.r[29].w[0] + 8u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0006(c, 242u, depth + 1u); else { c.pc = 0x0021BD50u; return; } if (c.pc != 0x0021CCECu) [[unlikely]] return; }
L_0021CCEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021CCF8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CD10u); set32(c.r[4], 0u + 33u);  if (depth < kMaxDepth) unit_0006(c, 242u, depth + 1u); else { c.pc = 0x0021BD50u; return; } if (c.pc != 0x0021CD10u) [[unlikely]] return; }
L_0021CD10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021CD20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], 0u - 5u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CD48u); st32((c.r[29].w[0] + 8u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0006(c, 242u, depth + 1u); else { c.pc = 0x0021BD50u; return; } if (c.pc != 0x0021CD48u) [[unlikely]] return; }
L_0021CD48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021CD58:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], 0u - 6u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CD80u); st32((c.r[29].w[0] + 8u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0006(c, 242u, depth + 1u); else { c.pc = 0x0021BD50u; return; } if (c.pc != 0x0021CD80u) [[unlikely]] return; }
L_0021CD80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021CDC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CDD8u); set32(c.r[4], 0u - 8u);  if (depth < kMaxDepth) unit_0006(c, 242u, depth + 1u); else { c.pc = 0x0021BD50u; return; } if (c.pc != 0x0021CDD8u) [[unlikely]] return; }
L_0021CDD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021CDE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CE00u); set32(c.r[4], 0u - 9u);  if (depth < kMaxDepth) unit_0006(c, 242u, depth + 1u); else { c.pc = 0x0021BD50u; return; } if (c.pc != 0x0021CE00u) [[unlikely]] return; }
L_0021CE00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021CE10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CE28u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0006(c, 242u, depth + 1u); else { c.pc = 0x0021BD50u; return; } if (c.pc != 0x0021CE28u) [[unlikely]] return; }
L_0021CE28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021CE38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[2].w[0] - 7744u);
    st32((c.r[2].w[0] - 7744u), c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] + 16u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 12u), c.r[4].w[0]);  c.pc = t; return; }
L_0021CE60:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[5].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_0021CE94; } }
    set32(c.r[2], c.r[5].w[0] + 16u);
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0021CE94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021CEA0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[5].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_0021CED4; } }
    set32(c.r[2], c.r[5].w[0] + 16u);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_0021CED4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021CEE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (t) { goto L_0021CFEC; } }
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0021CF20; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0021D03C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0021D064; } }
L_0021CF20:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0021D060; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 20u)));  goto L_0021CF90; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(321ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0021CF4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CF4Cu); set32(c.r[4], c.r[4].w[0] + 27112u);  if (depth < kMaxDepth) unit_0007(c, 261u, depth + 1u); else { c.pc = 0x0021E688u; return; } if (c.pc != 0x0021CF4Cu) [[unlikely]] return; }
L_0021CF4C:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[6].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CF64u); set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0021CD20u; return; } if (c.pc != 0x0021CF64u) [[unlikely]] return; }
L_0021CF64:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0021CF7C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CF7Cu); set32(c.r[4], c.r[4].w[0] + 27152u);  if (depth < kMaxDepth) unit_0007(c, 261u, depth + 1u); else { c.pc = 0x0021E688u; return; } if (c.pc != 0x0021CF7Cu) [[unlikely]] return; }
L_0021CF7C:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0021D060; } }
L_0021CF90:
    set32(c.r[16], 0u + 12u);
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0021CFE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (t) { goto L_0021CFB4; } }
    c.budget -= 1;
L_0021CFB0:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_0021CFB4:
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021CFD0u); set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_0007(c, 115u, depth + 1u); else { c.pc = 0x0021CE60u; return; } if (c.pc != 0x0021CFD0u) [[unlikely]] return; }
L_0021CFD0:
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021CFB0u | kUnwind; return; } goto L_0021CFB0; }
L_0021CFE0:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0021D060; } }
L_0021CFEC:
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D000u); c.r[6].d[0] = c.r[6].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0007(c, 106u, depth + 1u); else { c.pc = 0x0021CD58u; return; } if (c.pc != 0x0021D000u) [[unlikely]] return; }
L_0021D000:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_0021D020; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D018u); set32(c.r[4], c.r[4].w[0] + 27176u);  if (depth < kMaxDepth) unit_0007(c, 261u, depth + 1u); else { c.pc = 0x0021E688u; return; } if (c.pc != 0x0021D018u) [[unlikely]] return; }
L_0021D018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021D058; } }
L_0021D020:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0021D060; } }
L_0021D03C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021D058; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D058u); set32(c.r[4], c.r[4].w[0] + 27200u);  if (depth < kMaxDepth) unit_0007(c, 261u, depth + 1u); else { c.pc = 0x0021E688u; return; } if (c.pc != 0x0021D058u) [[unlikely]] return; }
L_0021D058:
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_0021D060:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0021D064:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021D078:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[19], c.r[21].w[0] - 7472u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0021D1C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D0C8u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0021D0C8u) [[unlikely]] return; }
L_0021D0C8:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 7424u);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[8], 0u - 1u);
    st32((c.r[19].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[7], 0u + 10u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[6].w[0] + 12u);
    c.budget -= 12;
L_0021D0F8:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[8].d[0]) { set32(c.r[16], c.r[21].w[0] - 7472u);  goto L_0021D148; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0]));  if (t) { goto L_0021D128; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_0021D144; } }
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_0021D128:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D0F8u | kUnwind; return; } goto L_0021D0F8; } }
L_0021D144:
    set32(c.r[16], c.r[21].w[0] - 7472u);
    c.budget -= 1;
L_0021D148:
    set32(c.r[2], c.r[17].w[0] + 12u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 7u)));
    set32(c.r[4], ld32((c.r[21].w[0] - 7472u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D164u); st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0007(c, 96u, depth + 1u); else { c.pc = 0x0021CC70u; return; } if (c.pc != 0x0021D164u) [[unlikely]] return; }
L_0021D164:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0021D188; } }
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0021D1C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D180u);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0021D180u) [[unlikely]] return; }
L_0021D180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0021D1C4; } }
L_0021D188:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0021D1B0; } }
    c.budget -= 1;
L_0021D198:
    set32(c.r[4], ld32((c.r[17].w[0] - 7472u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D1A4u);  if (depth < kMaxDepth) unit_0007(c, 98u, depth + 1u); else { c.pc = 0x0021CCA0u; return; } if (c.pc != 0x0021D1A4u) [[unlikely]] return; }
L_0021D1A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D198u | kUnwind; return; } goto L_0021D198; } }
L_0021D1B0:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021D1C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D1C0u);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0021D1C0u) [[unlikely]] return; }
L_0021D1C0:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0021D1C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0021D1F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 11;
    { const bool t = c.r[18].sd[0] <= 0; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0021D29C; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
L_0021D228:
    set32(c.r[17], c.r[3].w[0] + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] - 7448u)));
    set32(c.r[16], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_0021D238:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D238u | kUnwind; return; } goto L_0021D238; } }
    set32(c.r[5], c.r[19].w[0] - 7472u);
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D270u); set32(c.r[4], ld32((c.r[5].w[0] + 24u)));  if (depth < kMaxDepth) unit_0007(c, 116u, depth + 1u); else { c.pc = 0x0021CEA0u; return; } if (c.pc != 0x0021D270u) [[unlikely]] return; }
L_0021D270:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 13u);  if (t) { goto L_0021D288; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0021D290; } }
L_0021D288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0021D2A0; } }
L_0021D290:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D228u | kUnwind; return; } goto L_0021D228; } }
L_0021D29C:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0021D2A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0021D2C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D2DCu); c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x0021D2DCu) [[unlikely]] return; }
L_0021D2DC:
    set32(c.r[17], c.r[16].w[0] - 7472u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[4], 0u + 528u);
    set32(c.r[6], c.r[6].w[0] - 12576u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D2F4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 92u, depth + 1u); else { c.pc = 0x0021CC00u; return; } if (c.pc != 0x0021D2F4u) [[unlikely]] return; }
L_0021D2F4:
    st32((c.r[16].w[0] - 7472u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] - 7472u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0021D30C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021D368; } }
L_0021D30C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], c.r[4].w[0] - 7104u);
    set32(c.r[2], c.r[2].w[0] - 7424u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[6], 0u + 528u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], 0u + 69u);
    set32(c.r[3], 0u + 72u);
    set32(c.r[4], 0u + 256u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D360u); st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0007(c, 114u, depth + 1u); else { c.pc = 0x0021CE38u; return; } if (c.pc != 0x0021D360u) [[unlikely]] return; }
L_0021D360:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0021D368:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021D380:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 61744ull;
    c.budget -= 2;
L_0021D388:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D388u | kUnwind; return; } goto L_0021D388; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 61824ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_0021D3B8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[5], ld32((c.r[17].w[0] - 15168u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 126ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (t) { goto L_0021D400; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[17].w[0] - 15168u), 0u);
    set32(c.r[2], c.r[18].w[0] - 6784u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D3F8u); st8((c.r[2].w[0] + 127u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0007(c, 112u, depth + 1u); else { c.pc = 0x0021CE10u; return; } if (c.pc != 0x0021D3F8u) [[unlikely]] return; }
L_0021D3F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] - 15168u)));  if (t) { goto L_0021D404; } }
L_0021D400:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 1;
L_0021D404:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[18].w[0] - 6784u);  if (t) { goto L_0021D440; } }
    set32(c.r[4], c.r[18].w[0] - 6784u);
    st32((c.r[17].w[0] - 15168u), 0u);
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021CE10u | kUnwind; return; } goto L_0021CE10; }
L_0021D440:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[17].w[0] - 15168u), c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021D468:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0021D490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D480u); set32(c.r[4], 0u + 13u);  if (depth < kMaxDepth) unit_0007(c, 142u, depth + 1u); else { c.pc = 0x0021D380u; return; } if (c.pc != 0x0021D480u) [[unlikely]] return; }
L_0021D480:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], 0u + 10u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D380u | kUnwind; return; } goto L_0021D380; }
L_0021D490:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D380u | kUnwind; return; } goto L_0021D380; }
L_0021D4A0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] << 1;
    c.r[6].d[0] = c.r[2].d[0] >> 53;
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-1075ll);
    c.r[2].d[0] = c.r[6].sd[0] < -53ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[6].sd[0] < 13ll ? 1ull : 0ull;  if (t) { goto L_0021D4C4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0021D4C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] << 12;  if (t) { goto L_0021D4D4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 9999u);  c.pc = t; return; }
L_0021D4D4:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 37;
    c.r[5].d[0] = c.r[2].d[0] >> 12;
    c.budget -= 5;
    { const bool t = c.r[6].sd[0] >= 0; c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];  if (t) { goto L_0021D518; } }
    c.r[6].d[0] = 0ull - c.r[6].d[0];
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-2ll);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] >> (c.r[3].w[0] & 63u);
    c.r[4].d[0] = c.r[5].d[0] & 3ull;
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[5].d[0] >> 2;  goto L_0021D524; }
    c.r[2].d[0] = c.r[5].d[0] >> 2;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0021D524; } }
L_0021D518:
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] << (c.r[2].w[0] & 63u);
    c.budget -= 3;
L_0021D524:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  c.pc = t; return; }
L_0021D530:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0021D57C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021D6E0; } }
L_0021D57C:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D58Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 77u, depth + 1u); else { c.pc = 0x0020DF58u; return; } if (c.pc != 0x0021D58Cu) [[unlikely]] return; }
L_0021D58C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0021D5C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D59Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 56u, depth + 1u); else { c.pc = 0x0020DA08u; return; } if (c.pc != 0x0021D59Cu) [[unlikely]] return; }
L_0021D59C:
    set32(c.r[20], 0u + 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[21].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D5B4u); set32(c.r[6], 0u + 45u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021D5B4u) [[unlikely]] return; }
L_0021D5B4:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_0021D5C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 27256u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D5D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 77u, depth + 1u); else { c.pc = 0x0020DF58u; return; } if (c.pc != 0x0021D5D0u) [[unlikely]] return; }
L_0021D5D0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[19].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0021D614; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021D5F4; } }
L_0021D5E0:
    c.r[5].d[0] = 0ull | 32840ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D5F0u); set32(c.r[18], c.r[18].w[0] - 1u);  if (depth < kMaxDepth) unit_0003(c, 61u, depth + 1u); else { c.pc = 0x0020DA70u; return; } if (c.pc != 0x0021D5F0u) [[unlikely]] return; }
L_0021D5F0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0021D5F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 27264u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D604u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 77u, depth + 1u); else { c.pc = 0x0020DF58u; return; } if (c.pc != 0x0021D604u) [[unlikely]] return; }
L_0021D604:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D5E0u | kUnwind; return; } goto L_0021D5E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021D664; } }
L_0021D614:
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D624u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 77u, depth + 1u); else { c.pc = 0x0020DF58u; return; } if (c.pc != 0x0021D624u) [[unlikely]] return; }
L_0021D624:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[19].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0021D664; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021D64C; } }
    c.budget -= 1;
L_0021D638:
    c.r[5].d[0] = 0ull | 32840ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D648u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0003(c, 71u, depth + 1u); else { c.pc = 0x0020DCF8u; return; } if (c.pc != 0x0021D648u) [[unlikely]] return; }
L_0021D648:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0021D64C:
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D65Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 77u, depth + 1u); else { c.pc = 0x0020DF58u; return; } if (c.pc != 0x0021D65Cu) [[unlikely]] return; }
L_0021D65C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D638u | kUnwind; return; } goto L_0021D638; } }
L_0021D664:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 27272u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D674u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 61u, depth + 1u); else { c.pc = 0x0020DA70u; return; } if (c.pc != 0x0021D674u) [[unlikely]] return; }
L_0021D674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D67Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 22u, depth + 1u); else { c.pc = 0x0020D178u; return; } if (c.pc != 0x0021D67Cu) [[unlikely]] return; }
L_0021D67C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D684u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 148u, depth + 1u); else { c.pc = 0x0021D4A0u; return; } if (c.pc != 0x0021D684u) [[unlikely]] return; }
L_0021D684:
    set32(c.r[7], c.r[19].w[0] + 27232u);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D69Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 247u, depth + 1u); else { c.pc = 0x0021E4C8u; return; } if (c.pc != 0x0021D69Cu) [[unlikely]] return; }
L_0021D69C:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0; set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);  if (t) { goto L_0021D6BC; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] + 27240u);  if (t) { goto L_0021D6D0; } }
L_0021D6BC:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 27248u);
    c.budget -= 5;
L_0021D6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021D6D8u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 247u, depth + 1u); else { c.pc = 0x0021E4C8u; return; } if (c.pc != 0x0021D6D8u) [[unlikely]] return; }
L_0021D6D8:
    set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_0021D6E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0021D708:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 256u), c.r[30].d[0]);
    set32(c.r[2], c.r[29].w[0] + 31u);
    st64((c.r[29].w[0] + 224u), c.r[22].d[0]);
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 272u), c.r[31].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 240u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 208u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[16].d[0]);
    st32((c.r[29].w[0] + 64u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[22].w[0]));
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 88u), 0u);  if (t) { goto L_0021E3CC; } }
    set32(c.r[3], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 2;
L_0021D768:
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[29].w[0] + 80u), 0u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 37u);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 84u), 0u);  if (t) { goto L_0021E384; } }
L_0021D788:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[5].d[0] = ld8((c.r[22].w[0]));
    set32(c.r[2], c.r[5].w[0] - 32u);
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(89ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021DED4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 27328u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0021C000u < 16384u) { entry = entries_0007[(t - 0x0021C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0021D7C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D788u | kUnwind; return; } goto L_0021D788; } }
L_0021D7CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 2ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D788u | kUnwind; return; } goto L_0021D788; } }
L_0021D7D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 4ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D788u | kUnwind; return; } goto L_0021D788; } }
L_0021D7DC:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 10u);
    c.budget -= 3;
L_0021D7E8:
    mmi::mult(c, 0, c.r[16].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] << 24);
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));
    c.r[5].d[0] = ld8((c.r[22].w[0]));
    set32(c.r[4], c.r[4].w[0] - 48u);
    set32(c.r[2], c.r[5].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D7E8u | kUnwind; return; } goto L_0021D7E8; } }
    st32((c.r[29].w[0] + 80u), c.r[16].w[0]);
    c.budget -= 1;
L_0021D814:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_0021E3B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[22].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D788u | kUnwind; return; } goto L_0021D788; } }
L_0021D824:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.r[21].d[0] = c.r[21].d[0] | 32ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    set32(c.r[2], 0u + 42u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_0021D858; } }
    set32(c.r[30], c.r[30].w[0] + 8u);
    set32(c.r[2], 0u - 2u);
    set32(c.r[16], ld32((c.r[30].w[0] - 8u)));
    set32(c.r[8], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D788u | kUnwind; return; } goto L_0021D788; } }
L_0021D858:
    set32(c.r[2], c.r[5].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021D898; } }
    set32(c.r[6], 0u + 10u);
    c.budget -= 2;
L_0021D870:
    mmi::mult(c, 0, c.r[16].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] << 24);
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 24));
    c.r[5].d[0] = ld8((c.r[22].w[0]));
    set32(c.r[4], c.r[4].w[0] - 48u);
    set32(c.r[2], c.r[5].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D870u | kUnwind; return; } goto L_0021D870; } }
L_0021D898:
    set32(c.r[2], 0u - 2u);
    set32(c.r[8], 0u - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D814u | kUnwind; return; } goto L_0021D814; } }
L_0021D8AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 8ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D788u | kUnwind; return; } goto L_0021D788; } }
L_0021D8B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 16ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D788u | kUnwind; return; } goto L_0021D788; } }
L_0021D8BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 64ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D788u | kUnwind; return; } goto L_0021D788; } }
L_0021D8C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[21].d[0] | 128ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D788u | kUnwind; return; } goto L_0021D788; } }
L_0021D8CC:
    c.r[2].d[0] = c.r[21].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] & 128ull;  if (t) { goto L_0021D8E4; } }
    set32(c.r[30], c.r[30].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[30].w[0] - 8u));  if (t) { goto L_0021D8F8; } }
L_0021D8E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[30], c.r[30].w[0] + 8u);  if (t) { goto L_0021D8F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[30].w[0] - 8u));  if (t) { goto L_0021D8F8; } }
L_0021D8F4:
    c.r[16].d[0] = ld32((c.r[30].w[0] - 8u));
    c.budget -= 1;
L_0021D8F8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_0021D928; } }
    c.r[2].d[0] = c.r[21].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_0021D914; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_0021D96C; } }
L_0021D914:
    set32(c.r[23], c.r[22].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_0021D970; } }
L_0021D928:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[3].d[0] = c.r[21].d[0] & 16ull;
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 4;
L_0021D938:
    c.r[2].d[0] = c.r[16].d[0] & 7ull;
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[16].d[0] = c.r[16].d[0] >> 3;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D938u | kUnwind; return; } goto L_0021D938; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_0021D974; } }
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_0021D974; } }
L_0021D96C:
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 1;
L_0021D970:
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 1;
L_0021D974:
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] + 1u);  if (t) { goto L_0021DF04; } }
L_0021D980:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = c.r[21].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + 27280u);  if (t) { goto L_0021D9D4; } }
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], 0u + 120u);
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), c.r[2].w[0]);  if (t) { goto L_0021D9D4; } }
L_0021D9AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].d[0] = c.r[21].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + 27304u);  if (t) { goto L_0021D9D4; } }
    set32(c.r[2], 0u + 48u);
    set32(c.r[3], 0u + 88u);
    set32(c.r[5], 0u + 2u);
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 84u), c.r[5].w[0]);
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0021D9D4:
    c.r[2].d[0] = c.r[21].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] & 128ull;  if (t) { goto L_0021D9EC; } }
    set32(c.r[30], c.r[30].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[30].w[0] - 8u));  if (t) { goto L_0021DA00; } }
L_0021D9EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[30], c.r[30].w[0] + 8u);  if (t) { goto L_0021D9FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[30].w[0] - 8u));  if (t) { goto L_0021DA00; } }
L_0021D9FC:
    c.r[16].d[0] = ld32((c.r[30].w[0] - 8u));
    c.budget -= 1;
L_0021DA00:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_0021DA34; } }
    c.r[2].d[0] = c.r[21].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 84u), 0u);  if (t) { goto L_0021DA1C; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_0021DC30; } }
L_0021DA1C:
    set32(c.r[2], 0u + 48u);
    set32(c.r[23], c.r[22].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_0021DC34; } }
L_0021DA34:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 3;
L_0021DA40:
    c.r[2].d[0] = c.r[16].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[16].d[0] = c.r[16].d[0] >> 4;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DA40u | kUnwind; return; } goto L_0021DA40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_0021DC3C; } }
L_0021DA6C:
    c.r[2].d[0] = c.r[21].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] & 128ull;  if (t) { goto L_0021DA84; } }
    set32(c.r[30], c.r[30].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[30].w[0] - 8u));  if (t) { goto L_0021DA98; } }
L_0021DA84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[30], c.r[30].w[0] + 8u);  if (t) { goto L_0021DA94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[30].w[0] - 8u)));  if (t) { goto L_0021DA98; } }
L_0021DA94:
    set32(c.r[16], ld32((c.r[30].w[0] - 8u)));
    c.budget -= 1;
L_0021DA98:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[17], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_0021DAD0; } }
    c.r[2].d[0] = c.r[21].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 43u);  if (t) { goto L_0021DAB8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_0021DADC; } }
L_0021DAB8:
    c.r[2].d[0] = c.r[21].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_0021DAE0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), c.r[4].w[0]);  if (t) { goto L_0021DADC; } }
L_0021DAD0:
    set32(c.r[2], 0u + 45u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[29].w[0] + 84u), c.r[5].w[0]);
    c.budget -= 3;
L_0021DADC:
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0021DAE0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0021DB14; } }
    c.r[2].d[0] = c.r[21].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_0021DAFC; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_0021DB70; } }
L_0021DAFC:
    set32(c.r[2], 0u + 48u);
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    set32(c.r[17], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0021DB74; } }
L_0021DB14:
    c.r[3].d[0] = 0ull - c.r[16].d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_0021DB70; } }
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 2;
L_0021DB30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DB40u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0002(c, 205u, depth + 1u); else { c.pc = 0x0020BE70u; return; } if (c.pc != 0x0021DB40u) [[unlikely]] return; }
L_0021DB40:
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DB58u); st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0002(c, 204u, depth + 1u); else { c.pc = 0x0020B7D8u; return; } if (c.pc != 0x0021DB58u) [[unlikely]] return; }
L_0021DB58:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DB30u | kUnwind; return; } goto L_0021DB30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_0021DB7C; } }
L_0021DB70:
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 1;
L_0021DB74:
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 2;
L_0021DB7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] + 1u);  if (t) { goto L_0021DF04; } }
L_0021DB84:
    c.r[2].d[0] = c.r[21].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[21].d[0] & 128ull;  if (t) { goto L_0021DB9C; } }
    set32(c.r[30], c.r[30].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[30].w[0] - 8u));  if (t) { goto L_0021DBB0; } }
L_0021DB9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[30], c.r[30].w[0] + 8u);  if (t) { goto L_0021DBAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[30].w[0] - 8u));  if (t) { goto L_0021DBB0; } }
L_0021DBAC:
    c.r[16].d[0] = ld32((c.r[30].w[0] - 8u));
    c.budget -= 1;
L_0021DBB0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_0021DBE0; } }
    c.r[2].d[0] = c.r[21].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_0021DBCC; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_0021DC30; } }
L_0021DBCC:
    set32(c.r[23], c.r[22].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_0021DC34; } }
L_0021DBE0:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 4;
L_0021DBF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DC00u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0003(c, 6u, depth + 1u); else { c.pc = 0x0020CA80u; return; } if (c.pc != 0x0021DC00u) [[unlikely]] return; }
L_0021DC00:
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DC18u); st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0003(c, 5u, depth + 1u); else { c.pc = 0x0020C500u; return; } if (c.pc != 0x0021DC18u) [[unlikely]] return; }
L_0021DC18:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DBF0u | kUnwind; return; } goto L_0021DBF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_0021DC3C; } }
L_0021DC30:
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 1;
L_0021DC34:
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 2;
L_0021DC3C:
    set32(c.r[18], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] - c.r[17].w[0]);  if (t) { goto L_0021DF08; } }
L_0021DC48:
    set32(c.r[30], c.r[30].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DC54u); c.r[4].d[0] = ld64((c.r[30].w[0] - 8u));  if (depth < kMaxDepth) unit_0003(c, 88u, depth + 1u); else { c.pc = 0x0020E130u; return; } if (c.pc != 0x0021DC54u) [[unlikely]] return; }
L_0021DC54:
    c.f[12] = c.f[0];
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (t) { goto L_0021DC7C; } }
    set32(c.r[6], 0u + 48u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_0021E394; } }
L_0021DC7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DC84u); set32(c.r[23], c.r[22].w[0] + 1u);  if (depth < kMaxDepth) unit_0003(c, 42u, depth + 1u); else { c.pc = 0x0020D578u; return; } if (c.pc != 0x0021DC84u) [[unlikely]] return; }
L_0021DC84:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DC98u); set32(c.r[6], ld32((c.r[29].w[0] + 92u)));  if (depth < kMaxDepth) unit_0007(c, 149u, depth + 1u); else { c.pc = 0x0021D530u; return; } if (c.pc != 0x0021DC98u) [[unlikely]] return; }
L_0021DC98:
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[5].w[0]);
    c.budget -= 3;
L_0021DCA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_0021E3B4; } }
L_0021DCAC:
    set32(c.r[30], c.r[30].w[0] + 8u);
    set32(c.r[3], ld32((c.r[30].w[0] - 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[21].d[0] & 32ull;  if (t) { goto L_0021DD40; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 40u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DCD4u); set32(c.r[23], c.r[22].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021DCD4u) [[unlikely]] return; }
L_0021DCD4:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 110u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DCE8u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021DCE8u) [[unlikely]] return; }
L_0021DCE8:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 117u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DCFCu); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021DCFCu) [[unlikely]] return; }
L_0021DCFC:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 108u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DD10u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021DD10u) [[unlikely]] return; }
L_0021DD10:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 108u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DD24u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021DD24u) [[unlikely]] return; }
L_0021DD24:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 41u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DD38u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021DD38u) [[unlikely]] return; }
L_0021DD38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_0021E3B4; } }
L_0021DD40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0021DDA0; } }
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021DD8C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_0021DD8C; } }
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 3;
L_0021DD68:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0021DDE8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DD68u | kUnwind; return; } goto L_0021DD68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0021DF08; } }
L_0021DD8C:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0021DDE8; } }
L_0021DDA0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0021DDDC; } }
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 3;
L_0021DDB8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DDB8u | kUnwind; return; } goto L_0021DDB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0021DF08; } }
L_0021DDDC:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 3;
L_0021DDE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0021DF08; } }
L_0021DDF0:
    set32(c.r[30], c.r[30].w[0] + 8u);
    set32(c.r[17], ld32((c.r[29].w[0] + 76u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] - 8u)));
    c.r[21].d[0] = c.r[21].d[0] | 256ull;
    set32(c.r[8], 0u + 1u);
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[17].w[0] + 1u);  if (t) { goto L_0021DF04; } }
L_0021DE28:
    set32(c.r[30], c.r[30].w[0] + 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[16].d[0] = ld32((c.r[30].w[0] - 8u));
    set32(c.r[4], c.r[2].w[0] + 27280u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_0021DE68; } }
    c.r[2].d[0] = c.r[21].d[0] & 32ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_0021DE54; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + 1u);  if (t) { goto L_0021DEA4; } }
L_0021DE54:
    set32(c.r[23], c.r[22].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_0021DEA8; } }
L_0021DE68:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 4;
L_0021DE78:
    c.r[2].d[0] = c.r[16].d[0] & 15ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[16].d[0] = c.r[16].d[0] >> 4;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DE78u | kUnwind; return; } goto L_0021DE78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_0021DEB0; } }
L_0021DEA4:
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    c.budget -= 1;
L_0021DEA8:
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    set32(c.r[2], 0u + 48u);
    c.budget -= 2;
L_0021DEB0:
    set32(c.r[3], 0u + 120u);
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[2].w[0] - c.r[17].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_0021DF08; } }
L_0021DED4:
    set32(c.r[2], c.r[6].w[0] << 24);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 76u)));  if (t) { goto L_0021E3B0; } }
    c.r[21].d[0] = c.r[21].d[0] | 256ull;
    set32(c.r[8], 0u + 1u);
    set32(c.r[23], c.r[22].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[20].d[0] = c.r[21].d[0] & 256ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[18], c.r[17].w[0] + 1u);
    c.r[19].d[0] = c.r[21].d[0] & 1ull;
    c.budget -= 9;
L_0021DF04:
    set32(c.r[4], c.r[5].w[0] - c.r[17].w[0]);
    c.budget -= 1;
L_0021DF08:
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[8], c.r[8].w[0] - c.r[4].w[0]);
    if (c.r[2].d[0] == 0) c.r[8].d[0] = 0ull;
    set32(c.r[3], c.r[5].w[0] - c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[17], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    c.budget -= 12;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0] + 80u), c.r[3].w[0]);  if (t) { goto L_0021DF54; } }
    c.r[2].d[0] = c.r[21].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], 0u + 32u);  if (t) { goto L_0021DF74; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[3], 0u + 48u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].sd[0] < 1ll ? 1ull : 0ull;  if (t) { goto L_0021DF70; } }
L_0021DF54:
    c.r[3].d[0] = c.r[21].d[0] & 36ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[7], 0u + 32u);  if (t) { goto L_0021DF74; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[3], 0u + 48u);
    c.r[2].d[0] = c.r[5].sd[0] < 1ll ? 1ull : 0ull;
    c.budget -= 3;
L_0021DF70:
    if (c.r[2].d[0] == 0) c.r[7].d[0] = c.r[3].d[0];
    c.budget -= 1;
L_0021DF74:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  if (t) { goto L_0021E080; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021DFD4; } }
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0021DF90:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021DFB0u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021DFB0u) [[unlikely]] return; }
L_0021DFB0:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DF90u | kUnwind; return; } goto L_0021DF90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021DFD8; } }
L_0021DFD4:
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0021DFD8:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0;  if (t) { goto L_0021E010; } }
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 2;
L_0021DFE8:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 48u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E000u); set32(c.r[16], c.r[16].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E000u) [[unlikely]] return; }
L_0021E000:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DFE8u | kUnwind; return; } goto L_0021DFE8; } }
L_0021E010:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_0021E048; } }
L_0021E018:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E030u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E030u) [[unlikely]] return; }
L_0021E030:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E018u | kUnwind; return; } goto L_0021E018; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 1;
L_0021E048:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DCA4u | kUnwind; return; } goto L_0021DCA4; } }
L_0021E050:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 32u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E068u); set32(c.r[16], c.r[16].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E068u) [[unlikely]] return; }
L_0021E068:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E050u | kUnwind; return; } goto L_0021E050; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_0021E3B4; } }
L_0021E080:
    c.r[2].d[0] = c.r[21].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 48u);  if (t) { goto L_0021E264; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[5], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_0021E148; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021E0F4; } }
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0021E0A8:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E0CCu); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E0CCu) [[unlikely]] return; }
L_0021E0CC:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    st32((c.r[29].w[0] + 88u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E0A8u | kUnwind; return; } goto L_0021E0A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 80u)));  if (t) { goto L_0021E0FC; } }
L_0021E0F4:
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 2;
L_0021E0FC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0021E1F4; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0021E108:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E128u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E128u) [[unlikely]] return; }
L_0021E128:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E108u | kUnwind; return; } goto L_0021E108; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021E1F4; } }
L_0021E148:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021E1A0; } }
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0021E158:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E178u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E178u) [[unlikely]] return; }
L_0021E178:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    st32((c.r[29].w[0] + 88u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E158u | kUnwind; return; } goto L_0021E158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  if (t) { goto L_0021E1A8; } }
L_0021E1A0:
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 2;
L_0021E1A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021E1F4; } }
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_0021E1B8:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E1D8u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E1D8u) [[unlikely]] return; }
L_0021E1D8:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E1B8u | kUnwind; return; } goto L_0021E1B8; } }
L_0021E1F4:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0;  if (t) { goto L_0021E228; } }
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_0021E200:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 48u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E218u); set32(c.r[16], c.r[16].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E218u) [[unlikely]] return; }
L_0021E218:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E200u | kUnwind; return; } goto L_0021E200; } }
L_0021E228:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[5].d[0] = ld8((c.r[22].w[0]));  goto L_0021E3B4; }
L_0021E230:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E248u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E248u) [[unlikely]] return; }
L_0021E248:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E230u | kUnwind; return; } goto L_0021E230; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_0021E3B4; } }
L_0021E264:
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021E2C0; } }
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0021E278:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E298u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E298u) [[unlikely]] return; }
L_0021E298:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[7]);
    st32((c.r[29].w[0] + 88u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E278u | kUnwind; return; } goto L_0021E278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  if (t) { goto L_0021E2C8; } }
L_0021E2C0:
    c.r[20].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 2;
L_0021E2C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0021E314; } }
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_0021E2D8:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E2F8u); st128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E2F8u) [[unlikely]] return; }
L_0021E2F8:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[8]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E2D8u | kUnwind; return; } goto L_0021E2D8; } }
L_0021E314:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0;  if (t) { goto L_0021E348; } }
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 1;
L_0021E320:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[6], 0u + 48u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E338u); set32(c.r[16], c.r[16].w[0] - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E338u) [[unlikely]] return; }
L_0021E338:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E320u | kUnwind; return; } goto L_0021E320; } }
L_0021E348:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[5].d[0] = ld8((c.r[22].w[0]));  goto L_0021E3B4; }
L_0021E350:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E368u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E368u) [[unlikely]] return; }
L_0021E368:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E350u | kUnwind; return; } goto L_0021E350; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[22].w[0]));  if (t) { goto L_0021E3B4; } }
L_0021E384:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (t) { goto L_0021E3B0; } }
    set32(c.r[23], c.r[22].w[0] + 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 2;
L_0021E394:
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E3A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E3A0u) [[unlikely]] return; }
L_0021E3A0:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021DCA4u | kUnwind; return; } goto L_0021DCA4; } }
L_0021E3B0:
    set32(c.r[23], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_0021E3B4:
    if (c.r[5].d[0] != 0) c.r[22].d[0] = c.r[23].d[0];
    c.r[2].d[0] = ld8((c.r[22].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021D768u | kUnwind; return; } goto L_0021D768; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 72u)));  if (t) { goto L_0021E3D8; } }
L_0021E3CC:
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 92u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
L_0021E3D8:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E3E8u); set32(c.r[5], ld32((c.r[29].w[0] + 92u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021E3E8u) [[unlikely]] return; }
L_0021E3E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 272u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 256u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 240u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 224u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_0021E420:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0021E434; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0021E434:
    c.r[2].d[0] = c.r[6].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[7].w[0])));  goto L_0021E46C; }
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    set32(c.r[4], ld32((c.r[7].w[0])));
    if (c.r[2].d[0] == 0) c.r[6].d[0] = 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0021E46C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0021E478:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0021E490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E490u);  if (depth < kMaxDepth) unit_0007(c, 144u, depth + 1u); else { c.pc = 0x0021D3B8u; return; } if (c.pc != 0x0021E490u) [[unlikely]] return; }
L_0021E490:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021E4A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0021E4B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E4B8u);  if (depth < kMaxDepth) unit_0007(c, 146u, depth + 1u); else { c.pc = 0x0021D468u; return; } if (c.pc != 0x0021E4B8u) [[unlikely]] return; }
L_0021E4B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021E4C8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[8].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[8], c.r[29].w[0] + 96u);
    set32(c.r[6], ld32((c.r[16].w[0])));
    st64((c.r[29].w[0] + 104u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[10].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E4F4u); st64((c.r[29].w[0] + 120u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_0007(c, 166u, depth + 1u); else { c.pc = 0x0021D708u; return; } if (c.pc != 0x0021E4F4u) [[unlikely]] return; }
L_0021E4F4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0021E518:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 7136u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E544u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 166u, depth + 1u); else { c.pc = 0x0021D708u; return; } if (c.pc != 0x0021E544u) [[unlikely]] return; }
L_0021E544:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0021E550:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 104u), c.r[7].d[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[8].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[9].d[0]);
    set32(c.r[4], c.r[4].w[0] - 7136u);
    st64((c.r[29].w[0] + 128u), c.r[10].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 136u), c.r[11].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E58Cu); set32(c.r[8], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0007(c, 166u, depth + 1u); else { c.pc = 0x0021D708u; return; } if (c.pc != 0x0021E58Cu) [[unlikely]] return; }
L_0021E58C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0021E598:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E5BCu); st32((c.r[29].w[0]), 0u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0021E5BCu) [[unlikely]] return; }
L_0021E5BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 7048u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E5E0u); c.r[6].d[0] = c.r[6].d[0] | 65535ull;  if (depth < kMaxDepth) unit_0007(c, 166u, depth + 1u); else { c.pc = 0x0021D708u; return; } if (c.pc != 0x0021E5E0u) [[unlikely]] return; }
L_0021E5E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0021E5F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E5F0u);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0021E5F0u) [[unlikely]] return; }
L_0021E5F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0021E5F4:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0021E608:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 168u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 184u), c.r[11].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E640u); st32((c.r[29].w[0]), 0u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0021E640u) [[unlikely]] return; }
L_0021E640:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 7048u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E664u); set32(c.r[8], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0007(c, 166u, depth + 1u); else { c.pc = 0x0021D708u; return; } if (c.pc != 0x0021E664u) [[unlikely]] return; }
L_0021E664:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0021E678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E674u);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0021E674u) [[unlikely]] return; }
L_0021E674:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0021E678:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0021E688:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[5].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 168u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 184u), c.r[11].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E6C0u); st32((c.r[29].w[0]), 0u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0021E6C0u) [[unlikely]] return; }
L_0021E6C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 7008u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E6E4u); set32(c.r[8], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0007(c, 166u, depth + 1u); else { c.pc = 0x0021D708u; return; } if (c.pc != 0x0021E6E4u) [[unlikely]] return; }
L_0021E6E4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0021E6F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E6F4u);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0021E6F4u) [[unlikely]] return; }
L_0021E6F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0021E6F8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0021E708:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_0021E728:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  c.pc = t; return; }
L_0021E738:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 6016u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_0021E780:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E7A0u); st64((c.r[29].w[0]), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0021E7A0u) [[unlikely]] return; }
L_0021E7A0:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[10].w[0] - 15160u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0021E7D0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 96u);  [[clang::musttail]] return unit_0009(c, 151u, depth); }
L_0021E7D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], c.r[5].w[0] - 6528u);
    set32(c.r[6], c.r[19].w[0] - 6656u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[3], 0u + 1u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[18].w[0] - 6440u);
    st32((c.r[10].w[0] - 15160u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 6016u);
    set32(c.r[8], c.r[9].w[0] - 6400u);
    st32((c.r[18].w[0] - 6440u), c.r[6].w[0]);
    set32(c.r[7], 0u + 32u);
    st32((c.r[2].w[0] + 28u), c.r[4].w[0]);
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[4], c.r[3].w[0] + 384u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[2].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    c.budget -= 26;
L_0021E838:
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] + 12u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E838u | kUnwind; return; } goto L_0021E838; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], 0u + 31u);
    set32(c.r[2], c.r[2].w[0] - 6016u);
    set32(c.r[2], c.r[2].w[0] + 124u);
    c.budget -= 5;
L_0021E868:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E868u | kUnwind; return; } goto L_0021E868; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[2], c.r[2].w[0] - 6360u);
    set32(c.r[4], c.r[9].w[0] - 6400u);
    set32(c.r[3], c.r[3].w[0] - 6392u);
    set32(c.r[17], c.r[18].w[0] - 6440u);
    st32((c.r[9].w[0] - 6400u), c.r[2].w[0]);
    set32(c.r[16], 0u + 32u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E8B4u); st32((c.r[4].w[0] + 4u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0021E8B4u) [[unlikely]] return; }
L_0021E8B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E8BCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x0021E8BCu) [[unlikely]] return; }
L_0021E8BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 57360ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_0021E8E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[1].w[0] - 8176u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 3;
L_0021E8E0:
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);  if (t) { goto L_0021E900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E8FCu);  if (depth < kMaxDepth) unit_0006(c, 234u, depth + 1u); else { c.pc = 0x0021BD00u; return; } if (c.pc != 0x0021E8FCu) [[unlikely]] return; }
L_0021E8FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.budget -= 1;
L_0021E900:
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] - 4888u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E910u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 146u, depth + 1u); else { c.pc = 0x0021B630u; return; } if (c.pc != 0x0021E910u) [[unlikely]] return; }
L_0021E910:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E920u); st32((c.r[3].w[0] - 6444u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 39u, depth + 1u); else { c.pc = 0x0021C538u; return; } if (c.pc != 0x0021E920u) [[unlikely]] return; }
L_0021E920:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E92Cu);  if (depth < kMaxDepth) unit_0006(c, 240u, depth + 1u); else { c.pc = 0x0021BD30u; return; } if (c.pc != 0x0021E92Cu) [[unlikely]] return; }
L_0021E92C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0021E974; } }
    set32(c.r[5], c.r[20].w[0] - 6464u);
    set32(c.r[2], c.r[19].w[0] - 6656u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[6], 0u + 20u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[9].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[5].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 16;
    { set32(c.r[29], c.r[29].w[0] + 96u);  goto L_0021EC68; }
L_0021E974:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 1;
L_0021E978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E980u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0006(c, 240u, depth + 1u); else { c.pc = 0x0021BD30u; return; } if (c.pc != 0x0021E980u) [[unlikely]] return; }
L_0021E980:
    c.r[2].d[0] = c.r[2].d[0] & c.r[16].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021E978u | kUnwind; return; } goto L_0021E978; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E994u); set32(c.r[16], c.r[18].w[0] - 6440u);  if (depth < kMaxDepth) unit_0006(c, 240u, depth + 1u); else { c.pc = 0x0021BD30u; return; } if (c.pc != 0x0021E994u) [[unlikely]] return; }
L_0021E994:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E9A4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 238u, depth + 1u); else { c.pc = 0x0021BD20u; return; } if (c.pc != 0x0021E9A4u) [[unlikely]] return; }
L_0021E9A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021E9B4u); c.r[4].d[0] = c.r[4].d[0] | 1ull;  if (depth < kMaxDepth) unit_0006(c, 238u, depth + 1u); else { c.pc = 0x0021BD20u; return; } if (c.pc != 0x0021E9B4u) [[unlikely]] return; }
L_0021E9B4:
    set32(c.r[3], c.r[20].w[0] - 6464u);
    set32(c.r[2], c.r[19].w[0] - 6656u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[6], 0u + 20u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 12u), 0u);
    c.budget -= 19;
    { set32(c.r[29], c.r[29].w[0] + 96u);  goto L_0021EC68; }
L_0021EA00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EA10u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0007(c, 35u, depth + 1u); else { c.pc = 0x0021C4D0u; return; } if (c.pc != 0x0021EA10u) [[unlikely]] return; }
L_0021EA10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EA20u); set32(c.r[5], ld32((c.r[3].w[0] - 6444u)));  if (depth < kMaxDepth) unit_0006(c, 150u, depth + 1u); else { c.pc = 0x0021B650u; return; } if (c.pc != 0x0021EA20u) [[unlikely]] return; }
L_0021EA20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] - 15160u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021EA68:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; c.r[7].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021EAAC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[5], 0u + 12u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] - 6440u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    c.r[5].d[0] = c.r[28].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  if (t) { goto L_0021EAD4; } }
L_0021EAAC:
    set32(c.r[3], 0u + 12u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] - 6440u);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    c.r[5].d[0] = c.r[28].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 10;
L_0021EAD4:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 8u), c.r[5].w[0]);  c.pc = t; return; }
L_0021EAE0:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[2], 0u + 12u);  if (t) { goto L_0021EB14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[5], 0u + 12u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    set32(c.r[4], ld32((c.r[3].w[0] - 6428u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0]), 0u);  c.pc = t; return; }
L_0021EB14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[4].w[0] - 6420u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0]), 0u);  c.pc = t; return; }
L_0021EB30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], c.r[17].w[0] - 16u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(97ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_0021EB78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021EC44; } }
L_0021EB78:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0021EBC0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[3], c.r[5].w[0] << 8);
    st32((c.r[16].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[18], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[19].d[0] & 4ull;
    st32((c.r[29].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 12u), 0u);  if (t) { goto L_0021EBCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EBB8u);  if (depth < kMaxDepth) unit_0007(c, 301u, depth + 1u); else { c.pc = 0x0021EE30u; return; } if (c.pc != 0x0021EBB8u) [[unlikely]] return; }
L_0021EBB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[18].w[0] << 4);  if (t) { goto L_0021EBD0; } }
L_0021EBC0:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0021EBCC:
    set32(c.r[5], c.r[18].w[0] << 4);
    c.budget -= 1;
L_0021EBD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 6432u)));
    set32(c.r[3], c.r[29].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[2], c.r[29].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[29].w[0] + 8u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 12u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[20].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], 0u + 68u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EC20u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0007(c, 301u, depth + 1u); else { c.pc = 0x0021EE30u; return; } if (c.pc != 0x0021EC20u) [[unlikely]] return; }
L_0021EC20:
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0021EC3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EC34u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 232u, depth + 1u); else { c.pc = 0x0021BCF0u; return; } if (c.pc != 0x0021EC34u) [[unlikely]] return; }
L_0021EC34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0021EC48; } }
L_0021EC3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EC44u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 230u, depth + 1u); else { c.pc = 0x0021BCE0u; return; } if (c.pc != 0x0021EC44u) [[unlikely]] return; }
L_0021EC44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0021EC48:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0021EC68:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[11].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.r[9].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EC98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 288u, depth + 1u); else { c.pc = 0x0021EB30u; return; } if (c.pc != 0x0021EC98u) [[unlikely]] return; }
L_0021EC98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021ECA8:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[11].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.r[9].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ECD8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0007(c, 288u, depth + 1u); else { c.pc = 0x0021EB30u; return; } if (c.pc != 0x0021ECD8u) [[unlikely]] return; }
L_0021ECD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021ECE8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 128u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[17], c.r[3].w[0] - 6440u);
    st64((c.r[29].w[0] + 112u), c.r[16].d[0]);
    set32(c.r[7], ld32((c.r[3].w[0] - 6440u)));
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 11;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021EE1C; } }
    set32(c.r[2], c.r[5].w[0] + 15u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[5].w[0] + 30u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const bool t = c.r[5].sd[0] <= 0; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0021ED5C; } }
    c.r[3].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 1;
L_0021ED40:
    ld128((c.r[6].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021ED40u | kUnwind; return; } goto L_0021ED40; } }
L_0021ED5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021ED64u);  if (depth < kMaxDepth) unit_0006(c, 236u, depth + 1u); else { c.pc = 0x0021BD10u; return; } if (c.pc != 0x0021ED64u) [[unlikely]] return; }
L_0021ED64:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0021EDBC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.r[5].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_0021EE10; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0021EE10; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[16].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_0021EDF8; } }
L_0021EDBC:
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 12u);  if (t) { goto L_0021EE10; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0021EE10; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[16].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
L_0021EDF8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EE08u); set32(c.r[5], ld32((c.r[2].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021EE08u) [[unlikely]] return; }
L_0021EE08:
    c.r[2].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0021EE10:
    set_interrupts(c, true);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0021EE1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0021EE30:
    c.r[25].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[25].d[0] = c.r[25].d[0] | 65472ull;
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[10], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_0021EED4; } }
    c.r[8].d[0] = c.r[4].d[0] & c.r[25].d[0];
    set32(c.r[10], c.r[10].w[0] - 1u);
    c.r[9].d[0] = c.r[10].d[0] & c.r[25].d[0];
    set32(c.r[10], c.r[9].w[0] - c.r[8].w[0]);
    set32(c.r[11], c.r[10].w[0] >> 6);
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[9].d[0] = c.r[11].d[0] & 7ull;
    c.budget -= 9;
    { const bool t = c.r[9].d[0] == 0ull; set32(c.r[10], c.r[11].w[0] >> 3);  if (t) { goto L_0021EE80; } }
L_0021EE64:
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[9].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021EE64u | kUnwind; return; } goto L_0021EE64; } }
L_0021EE80:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[10], c.r[10].w[0] - 1u);  if (t) { goto L_0021EED4; } }
    goto L_0021EE88;
L_0021EE84:
    set32(c.r[10], c.r[10].w[0] - 1u);
    c.budget -= 1;
L_0021EE88:
    c.budget -= 19;
    { const bool t = c.r[10].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 512u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021EE84u | kUnwind; return; } goto L_0021EE84; } }
L_0021EED4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021EEE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EEF8u); st64((c.r[29].w[0]), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0021EEF8u) [[unlikely]] return; }
L_0021EEF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 15152u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_0021EF20; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0009(c, 151u, depth); }
L_0021EF20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF28u); st32((c.r[3].w[0] - 15152u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0021EF28u) [[unlikely]] return; }
L_0021EF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF30u);  if (depth < kMaxDepth) unit_0007(c, 268u, depth + 1u); else { c.pc = 0x0021E780u; return; } if (c.pc != 0x0021EF30u) [[unlikely]] return; }
L_0021EF30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EF38u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0021EF38u) [[unlikely]] return; }
L_0021EF38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[18], c.r[3].w[0] - 5888u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[8].w[0] + 256u);
    set32(c.r[3], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[6], c.r[6].w[0] - 3840u);
    set32(c.r[7], c.r[7].w[0] - 1792u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].d[0] | c.r[2].d[0];
    st32((c.r[8].w[0] + 256u), c.r[17].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[16].w[0] + 20u), c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 3616u);
    st32((c.r[16].w[0] + 28u), c.r[7].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EFACu); st32((c.r[16].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0007(c, 286u, depth + 1u); else { c.pc = 0x0021EA68u; return; } if (c.pc != 0x0021EFACu) [[unlikely]] return; }
L_0021EFAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], c.r[5].w[0] - 2632u);
    c.r[4].d[0] = c.r[4].d[0] | 9ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EFC4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 286u, depth + 1u); else { c.pc = 0x0021EA68u; return; } if (c.pc != 0x0021EFC4u) [[unlikely]] return; }
L_0021EFC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], c.r[5].w[0] - 2088u);
    c.r[4].d[0] = c.r[4].d[0] | 10ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EFDCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 286u, depth + 1u); else { c.pc = 0x0021EA68u; return; } if (c.pc != 0x0021EFDCu) [[unlikely]] return; }
L_0021EFDC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], c.r[5].w[0] - 3344u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EFF4u); c.r[4].d[0] = c.r[4].d[0] | 12ull;  if (depth < kMaxDepth) unit_0007(c, 286u, depth + 1u); else { c.pc = 0x0021EA68u; return; } if (c.pc != 0x0021EFF4u) [[unlikely]] return; }
L_0021EFF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021EFFCu);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0021EFFCu) [[unlikely]] return; }
L_0021EFFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F008u); c.r[4].d[0] = c.r[4].d[0] | 2ull;  if (depth < kMaxDepth) unit_0006(c, 240u, depth + 1u); else { c.pc = 0x0021BD30u; return; } if (c.pc != 0x0021F008u) [[unlikely]] return; }
L_0021F008:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0021F068; } }
    set32(c.r[5], c.r[18].w[0] + 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[5].w[0] + 12u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    set32(c.r[6], 0u + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F034u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 293u, depth + 1u); else { c.pc = 0x0021EC68u; return; } if (c.pc != 0x0021F034u) [[unlikely]] return; }
L_0021F034:
    c.budget -= 1;
L_0021F038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F040u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 267u, depth + 1u); else { c.pc = 0x0021E738u; return; } if (c.pc != 0x0021F040u) [[unlikely]] return; }
L_0021F040:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F038u | kUnwind; return; } goto L_0021F038; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[5], 0u + 1u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021BD20u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 238u, depth); }
L_0021F068:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021F080:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F090u);  if (depth < kMaxDepth) unit_0007(c, 283u, depth + 1u); else { c.pc = 0x0021EA00u; return; } if (c.pc != 0x0021F090u) [[unlikely]] return; }
L_0021F090:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] - 15152u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021F0A8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F0C0u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0021F0C0u) [[unlikely]] return; }
L_0021F0C0:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[16], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_0021F130; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_0021F0D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_0021F124; }
    set32(c.r[2], c.r[3].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | 5ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0021F110; } }
    set32(c.r[2], c.r[2].w[0] + 2u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0021F110:
    st32((c.r[16].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F11Cu); st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0021F11Cu) [[unlikely]] return; }
L_0021F11C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0021F13C; } }
L_0021F124:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F0D8u | kUnwind; return; } goto L_0021F0D8; } }
L_0021F130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F138u);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0021F138u) [[unlikely]] return; }
L_0021F138:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021F13C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021F150:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  c.pc = t; return; }
L_0021F170:
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0021F180u);  goto L_0021F184; }
L_0021F184:
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 6);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);  c.pc = t; return; }
L_0021F1A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0021F1BC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_0021F1CC; }
L_0021F1BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F1C4u);  if (depth < kMaxDepth) unit_0007(c, 326u, depth + 1u); else { c.pc = 0x0021F170u; return; } if (c.pc != 0x0021F1C4u) [[unlikely]] return; }
L_0021F1C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0021F1D8; } }
L_0021F1CC:
    set32(c.r[2], c.r[5].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_0021F1D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021F1E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 10ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_0021F22C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 28u)));  if (t) { goto L_0021F274; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 9ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0021F264; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (t) { goto L_0021F278; } }
L_0021F22C:
    set32(c.r[17], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_0021F278; }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[16].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F254u); set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021F254u) [[unlikely]] return; }
L_0021F254:
    c.r[3].d[0] = c.r[28].d[0] + 0ull;
    c.r[28].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 28u)));  if (t) { goto L_0021F274; } }
L_0021F264:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_0021F274:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_0021F278:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0021F288; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F288u);  if (depth < kMaxDepth) unit_0006(c, 204u, depth + 1u); else { c.pc = 0x0021B950u; return; } if (c.pc != 0x0021F288u) [[unlikely]] return; }
L_0021F288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F290u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0007(c, 325u, depth + 1u); else { c.pc = 0x0021F150u; return; } if (c.pc != 0x0021F290u) [[unlikely]] return; }
L_0021F290:
    st32((c.r[17].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021F2B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    set32(c.r[6], 0u + 64u);
    set32(c.r[7], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[8], ld32((c.r[5].w[0] + 40u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F2D8u); set32(c.r[9], ld32((c.r[5].w[0] + 44u)));  if (depth < kMaxDepth) unit_0007(c, 295u, depth + 1u); else { c.pc = 0x0021ECA8u; return; } if (c.pc != 0x0021F2D8u) [[unlikely]] return; }
L_0021F2D8:
    set32(c.r[3], 0u + 2048u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021F2F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0021F328; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F320u); set32(c.r[5], c.r[5].w[0] >> 16);  if (depth < kMaxDepth) unit_0007(c, 327u, depth + 1u); else { c.pc = 0x0021F1A0u; return; } if (c.pc != 0x0021F320u) [[unlikely]] return; }
L_0021F320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021F334; } }
L_0021F328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F330u);  if (depth < kMaxDepth) unit_0007(c, 326u, depth + 1u); else { c.pc = 0x0021F170u; return; } if (c.pc != 0x0021F330u) [[unlikely]] return; }
L_0021F330:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0021F334:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 28u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[9], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F388u); set32(c.r[8], ld32((c.r[17].w[0] + 36u)));  if (depth < kMaxDepth) unit_0007(c, 295u, depth + 1u); else { c.pc = 0x0021ECA8u; return; } if (c.pc != 0x0021F388u) [[unlikely]] return; }
L_0021F388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0021F3B0; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] - 3408u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[4], 0u + 2048u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_0009(c, 375u, depth); }
L_0021F3B0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021F3C0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F400u); set32(c.r[4], c.r[4].w[0] + 256u);  if (depth < kMaxDepth) unit_0007(c, 320u, depth + 1u); else { c.pc = 0x0021F0A8u; return; } if (c.pc != 0x0021F400u) [[unlikely]] return; }
L_0021F400:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0021F500; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[18].d[0] & 1ull;
    st32((c.r[17].w[0]), c.r[16].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[21].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 28u), c.r[17].w[0]);  if (t) { goto L_0021F4C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 27688u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F454u); st32((c.r[29].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0006(c, 198u, depth + 1u); else { c.pc = 0x0021B920u; return; } if (c.pc != 0x0021F454u) [[unlikely]] return; }
L_0021F454:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0021F46C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F464u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 325u, depth + 1u); else { c.pc = 0x0021F150u; return; } if (c.pc != 0x0021F464u) [[unlikely]] return; }
L_0021F464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_0021F500; } }
L_0021F46C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 12ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F48Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 293u, depth + 1u); else { c.pc = 0x0021EC68u; return; } if (c.pc != 0x0021F48Cu) [[unlikely]] return; }
L_0021F48C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021F4AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F49Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 325u, depth + 1u); else { c.pc = 0x0021F150u; return; } if (c.pc != 0x0021F49Cu) [[unlikely]] return; }
L_0021F49C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F4A4u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0006(c, 200u, depth + 1u); else { c.pc = 0x0021B930u; return; } if (c.pc != 0x0021F4A4u) [[unlikely]] return; }
L_0021F4A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0021F500; } }
L_0021F4AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F4B4u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0006(c, 206u, depth + 1u); else { c.pc = 0x0021B960u; return; } if (c.pc != 0x0021F4B4u) [[unlikely]] return; }
L_0021F4B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F4BCu); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0006(c, 200u, depth + 1u); else { c.pc = 0x0021B930u; return; } if (c.pc != 0x0021F4BCu) [[unlikely]] return; }
L_0021F4BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021F500; } }
L_0021F4C4:
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 12ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F4ECu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 293u, depth + 1u); else { c.pc = 0x0021EC68u; return; } if (c.pc != 0x0021F4ECu) [[unlikely]] return; }
L_0021F4EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021F500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F4FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 325u, depth + 1u); else { c.pc = 0x0021F150u; return; } if (c.pc != 0x0021F4FCu) [[unlikely]] return; }
L_0021F4FC:
    set32(c.r[2], 0u - 2u);
    c.budget -= 1;
L_0021F500:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0021F528:
    set32(c.r[5], ld32((c.r[5].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0021F56C; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 1;
L_0021F538:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[5].w[0] + 20u)));  goto L_0021F564; }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_0021F548:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[3], ld32((c.r[3].w[0] + 56u)));  goto L_0021F558; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; return; }
L_0021F558:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F548u | kUnwind; return; } goto L_0021F548; }
    set32(c.r[5], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 1;
L_0021F564:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021F538u | kUnwind; return; } goto L_0021F538; }
L_0021F56C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0021F578:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F5A0u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 295u, depth + 1u); else { c.pc = 0x0021ECA8u; return; } if (c.pc != 0x0021F5A0u) [[unlikely]] return; }
L_0021F5A0:
    set32(c.r[3], 0u + 2048u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0021F5B8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F5DCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 326u, depth + 1u); else { c.pc = 0x0021F170u; return; } if (c.pc != 0x0021F5DCu) [[unlikely]] return; }
L_0021F5DC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 9ull;
    st32((c.r[18].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F608u); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_0007(c, 350u, depth + 1u); else { c.pc = 0x0021F528u; return; } if (c.pc != 0x0021F608u) [[unlikely]] return; }
L_0021F608:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[18].w[0] + 36u), c.r[2].w[0]);  goto L_0021F61C; }
    st32((c.r[18].w[0] + 36u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 40u), 0u);  if (t) { goto L_0021F624; } }
L_0021F61C:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 2;
L_0021F624:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F644u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 295u, depth + 1u); else { c.pc = 0x0021ECA8u; return; } if (c.pc != 0x0021F644u) [[unlikely]] return; }
L_0021F644:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0021F670; } }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] - 2696u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[4], 0u + 2048u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0009(c, 375u, depth); }
L_0021F670:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021F688:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[4], c.r[4].w[0] + 256u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F6C0u); st32((c.r[17].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0007(c, 320u, depth + 1u); else { c.pc = 0x0021F0A8u; return; } if (c.pc != 0x0021F6C0u) [[unlikely]] return; }
L_0021F6C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0021F7B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[18].d[0] & 1ull;
    st32((c.r[17].w[0]), c.r[16].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 28u), c.r[17].w[0]);  if (t) { goto L_0021F77C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 27704u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F70Cu); st32((c.r[29].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0006(c, 198u, depth + 1u); else { c.pc = 0x0021B920u; return; } if (c.pc != 0x0021F70Cu) [[unlikely]] return; }
L_0021F70C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0021F724; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F71Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 325u, depth + 1u); else { c.pc = 0x0021F150u; return; } if (c.pc != 0x0021F71Cu) [[unlikely]] return; }
L_0021F71C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_0021F7B8; } }
L_0021F724:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 9ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F744u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 293u, depth + 1u); else { c.pc = 0x0021EC68u; return; } if (c.pc != 0x0021F744u) [[unlikely]] return; }
L_0021F744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021F764; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F754u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 325u, depth + 1u); else { c.pc = 0x0021F150u; return; } if (c.pc != 0x0021F754u) [[unlikely]] return; }
L_0021F754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F75Cu); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0006(c, 200u, depth + 1u); else { c.pc = 0x0021B930u; return; } if (c.pc != 0x0021F75Cu) [[unlikely]] return; }
L_0021F75C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0021F7B8; } }
L_0021F764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F76Cu); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0006(c, 206u, depth + 1u); else { c.pc = 0x0021B960u; return; } if (c.pc != 0x0021F76Cu) [[unlikely]] return; }
L_0021F76C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F774u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0006(c, 200u, depth + 1u); else { c.pc = 0x0021B930u; return; } if (c.pc != 0x0021F774u) [[unlikely]] return; }
L_0021F774:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021F7B8; } }
L_0021F77C:
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 9ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F7A4u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 293u, depth + 1u); else { c.pc = 0x0021EC68u; return; } if (c.pc != 0x0021F7A4u) [[unlikely]] return; }
L_0021F7A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021F7B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F7B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 325u, depth + 1u); else { c.pc = 0x0021F150u; return; } if (c.pc != 0x0021F7B4u) [[unlikely]] return; }
L_0021F7B4:
    set32(c.r[2], 0u - 2u);
    c.budget -= 1;
L_0021F7B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0021F7D8:
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 16u)));  goto L_0021F7F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_0021F7F8; } }
L_0021F7F4:
    st32((c.r[2].w[0] + 60u), c.r[5].w[0]);
    c.budget -= 1;
L_0021F7F8:
    st32((c.r[6].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    st32((c.r[5].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[5].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[5].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    st32((c.r[5].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    st32((c.r[5].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 20;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0021F85C; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021F85C; } }
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021C7E8u | kUnwind; return; } goto L_0021C7E8; }
L_0021F85C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0021F868:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[23].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F8C0u); set32(c.r[4], c.r[4].w[0] + 256u);  if (depth < kMaxDepth) unit_0007(c, 320u, depth + 1u); else { c.pc = 0x0021F0A8u; return; } if (c.pc != 0x0021F8C0u) [[unlikely]] return; }
L_0021F8C0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0021FA38; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[16].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[23].w[0]);
    c.r[2].d[0] = c.r[28].d[0] + 0ull;
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[30].d[0] & 2ull;
    st32((c.r[16].w[0] + 32u), c.r[22].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0021F954; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[20].d[0]; c.r[2].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;  if (t) { goto L_0021F934; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F92Cu); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[18].d[0];  if (depth < kMaxDepth) unit_0007(c, 301u, depth + 1u); else { c.pc = 0x0021EE30u; return; } if (c.pc != 0x0021F92Cu) [[unlikely]] return; }
L_0021F92C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[30].d[0] & 1ull;  if (t) { goto L_0021F958; } }
L_0021F934:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_0021F944; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F944u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 301u, depth + 1u); else { c.pc = 0x0021EE30u; return; } if (c.pc != 0x0021F944u) [[unlikely]] return; }
L_0021F944:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0021F954; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F954u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 301u, depth + 1u); else { c.pc = 0x0021EE30u; return; } if (c.pc != 0x0021F954u) [[unlikely]] return; }
L_0021F954:
    c.r[2].d[0] = c.r[30].d[0] & 1ull;
    c.budget -= 1;
L_0021F958:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);  if (t) { goto L_0021F9AC; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0021F970; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), 0u);  if (t) { goto L_0021F974; } }
L_0021F970:
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 1;
L_0021F974:
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 20u)));
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 10ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F99Cu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0007(c, 293u, depth + 1u); else { c.pc = 0x0021EC68u; return; } if (c.pc != 0x0021F99Cu) [[unlikely]] return; }
L_0021F99C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0021FA38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0021FA14; } }
L_0021F9AC:
    set32(c.r[19], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 27720u);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F9C8u); st32((c.r[29].w[0] + 4u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0006(c, 198u, depth + 1u); else { c.pc = 0x0021B920u; return; } if (c.pc != 0x0021F9C8u) [[unlikely]] return; }
L_0021F9C8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0021F9E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021F9D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 325u, depth + 1u); else { c.pc = 0x0021F150u; return; } if (c.pc != 0x0021F9D8u) [[unlikely]] return; }
L_0021F9D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_0021FA38; } }
L_0021F9E0:
    st32((c.r[16].w[0] + 48u), c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[17].w[0] + 20u)));
    c.r[4].d[0] = c.r[4].d[0] | 10ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FA04u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0007(c, 293u, depth + 1u); else { c.pc = 0x0021EC68u; return; } if (c.pc != 0x0021FA04u) [[unlikely]] return; }
L_0021FA04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021FA24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FA14u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0006(c, 200u, depth + 1u); else { c.pc = 0x0021B930u; return; } if (c.pc != 0x0021FA14u) [[unlikely]] return; }
L_0021FA14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FA1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 325u, depth + 1u); else { c.pc = 0x0021F150u; return; } if (c.pc != 0x0021FA1Cu) [[unlikely]] return; }
L_0021FA1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0021FA38; } }
L_0021FA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FA2Cu); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0006(c, 206u, depth + 1u); else { c.pc = 0x0021B960u; return; } if (c.pc != 0x0021FA2Cu) [[unlikely]] return; }
L_0021FA2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FA34u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0006(c, 200u, depth + 1u); else { c.pc = 0x0021B930u; return; } if (c.pc != 0x0021FA34u) [[unlikely]] return; }
L_0021FA34:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0021FA38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0021FA68:
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0021FA94; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0021FA94; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0021FA9C; } }
L_0021FA94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0021FA9C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0021FAA8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FAC4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0021FAC4u) [[unlikely]] return; }
L_0021FAC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[17].w[0]), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 256u);
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 20u), 0u);  if (t) { goto L_0021FAF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 40u), c.r[17].w[0]);  if (t) { goto L_0021FB28; } }
L_0021FAF4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[4].w[0] + 20u), c.r[17].w[0]);  goto L_0021FB28; }
    c.budget -= 1;
L_0021FB08:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FB08u | kUnwind; return; } goto L_0021FB08; } }
    st32((c.r[4].w[0] + 20u), c.r[17].w[0]);
    c.budget -= 1;
L_0021FB28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_0009(c, 151u, depth); }
L_0021FB40:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FB84u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0021FB84u) [[unlikely]] return; }
L_0021FB84:
    st32((c.r[21].w[0] + 60u), 0u);
    st32((c.r[21].w[0] + 56u), 0u);
    st32((c.r[21].w[0]), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 8u)));
    st32((c.r[21].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[21].w[0] + 16u), c.r[19].w[0]);
    st32((c.r[21].w[0] + 20u), c.r[20].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[21].w[0] + 64u), c.r[22].w[0]);  if (t) { goto L_0021FBB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0] + 8u), c.r[21].w[0]);  if (t) { goto L_0021FBE8; } }
L_0021FBB4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[4].w[0] + 56u), c.r[21].w[0]);  goto L_0021FBE8; }
    c.budget -= 1;
L_0021FBC8:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FBC8u | kUnwind; return; } goto L_0021FBC8; } }
    st32((c.r[4].w[0] + 56u), c.r[21].w[0]);
    c.budget -= 1;
L_0021FBE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 128u);  [[clang::musttail]] return unit_0009(c, 151u, depth); }
L_0021FC10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FC30u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0021FC30u) [[unlikely]] return; }
L_0021FC30:
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[17].d[0];  if (t) { goto L_0021FC48; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0021FC80; } }
L_0021FC48:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0021FC80; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[17].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 56u)));  goto L_0021FC7C; }
    c.budget -= 1;
L_0021FC60:
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0021FC80; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FC60u | kUnwind; return; } goto L_0021FC60; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_0021FC7C:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 1;
L_0021FC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FC88u);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0021FC88u) [[unlikely]] return; }
L_0021FC88:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0021FCA8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FCC0u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0021FCC0u) [[unlikely]] return; }
L_0021FCC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] + 256u);
    set32(c.r[16], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[17].d[0];  if (t) { goto L_0021FCE0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_0021FD18; } }
L_0021FCE0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0021FD18; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[17].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  goto L_0021FD14; }
    c.budget -= 1;
L_0021FCF8:
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0021FD18; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FCF8u | kUnwind; return; } goto L_0021FCF8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_0021FD14:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_0021FD18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FD20u);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0021FD20u) [[unlikely]] return; }
L_0021FD20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021FD38:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FD50u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0021FD50u) [[unlikely]] return; }
L_0021FD50:
    set32(c.r[17], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 60u)));  goto L_0021FD64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_0021FD70; } }
L_0021FD64:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 3;
L_0021FD70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FD78u);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0021FD78u) [[unlikely]] return; }
L_0021FD78:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0021FD90:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FDC8u); set32(c.r[6], ld32((c.r[17].w[0] + 12u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0021FDC8u) [[unlikely]] return; }
L_0021FDC8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[20], ld32((c.r[17].w[0] + 44u)));  goto L_0021FDD4; }
L_0021FDD4:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0021FDE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FDE8u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0007(c, 301u, depth + 1u); else { c.pc = 0x0021EE30u; return; } if (c.pc != 0x0021FDE8u) [[unlikely]] return; }
L_0021FDE8:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] <= 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0021FDF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FDF8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 301u, depth + 1u); else { c.pc = 0x0021EE30u; return; } if (c.pc != 0x0021FDF8u) [[unlikely]] return; }
L_0021FDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FE00u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x002259E0u; return; } if (c.pc != 0x0021FE00u) [[unlikely]] return; }
L_0021FE00:
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.r[2].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] >> 16);  if (t) { goto L_0021FE24; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FE1Cu); set32(c.r[4], c.r[4].w[0] + 256u);  if (depth < kMaxDepth) unit_0007(c, 327u, depth + 1u); else { c.pc = 0x0021F1A0u; return; } if (c.pc != 0x0021FE1Cu) [[unlikely]] return; }
L_0021FE1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0021FE34; } }
L_0021FE24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FE30u); set32(c.r[4], c.r[4].w[0] + 256u);  if (depth < kMaxDepth) unit_0007(c, 326u, depth + 1u); else { c.pc = 0x0021F170u; return; } if (c.pc != 0x0021FE30u) [[unlikely]] return; }
L_0021FE30:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0021FE34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FE3Cu);  if (depth < kMaxDepth) unit_0009(c, 151u, depth + 1u); else { c.pc = 0x00225A30u; return; } if (c.pc != 0x0021FE3Cu) [[unlikely]] return; }
L_0021FE3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = c.r[3].d[0] | 10ull;
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 24u), 0u);  goto L_0021FE90; }
    c.budget -= 1;
L_0021FE60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 40u)));
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FE80u); c.r[9].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 293u, depth + 1u); else { c.pc = 0x0021EC68u; return; } if (c.pc != 0x0021FE80u) [[unlikely]] return; }
L_0021FE80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FE60u | kUnwind; return; } goto L_0021FE60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0021FF3C; } }
L_0021FE90:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] <= 0; st32((c.r[16].w[0] + 16u), 0u);  if (t) { goto L_0021FEB4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[19], 0u + 1u);
    st32((c.r[29].w[0]), c.r[18].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 12u), 0u);
    c.budget -= 6;
L_0021FEB4:
    set32(c.r[5], c.r[19].w[0] << 4);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], c.r[29].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[29].w[0] + 4u);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[29].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], 0u + 64u);
    set32(c.r[2], c.r[29].w[0] + 12u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[2].w[0]), 0u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 17;
L_0021FEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FF00u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 230u, depth + 1u); else { c.pc = 0x0021BCE0u; return; } if (c.pc != 0x0021FF00u) [[unlikely]] return; }
L_0021FF00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0021FF38; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 2;
L_0021FF10:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FF10u | kUnwind; return; } goto L_0021FF10; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FEF8u | kUnwind; return; } goto L_0021FEF8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0021FF38:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0021FF3C:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0021FF58:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0021FF78; } }
    c.budget -= 1;
L_0021FF70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FF78u);  if (depth < kMaxDepth) unit_0007(c, 402u, depth + 1u); else { c.pc = 0x0021FD90u; return; } if (c.pc != 0x0021FF78u) [[unlikely]] return; }
L_0021FF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FF80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 399u, depth + 1u); else { c.pc = 0x0021FD38u; return; } if (c.pc != 0x0021FF80u) [[unlikely]] return; }
L_0021FF80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FF70u | kUnwind; return; } goto L_0021FF70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FF90u);  if (depth < kMaxDepth) unit_0006(c, 186u, depth + 1u); else { c.pc = 0x0021B840u; return; } if (c.pc != 0x0021FF90u) [[unlikely]] return; }
L_0021FF90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0021FF78u | kUnwind; return; } goto L_0021FF78; } }
L_0021FF98:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] - 15000u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0021FFFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 27744u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FFD8u); st32((c.r[29].w[0] + 8u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 198u, depth + 1u); else { c.pc = 0x0021B920u; return; } if (c.pc != 0x0021FFD8u) [[unlikely]] return; }
L_0021FFD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[16].w[0] - 15000u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 27760u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0021FFF0u); st32((c.r[29].w[0] + 20u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 198u, depth + 1u); else { c.pc = 0x0021B920u; return; } if (c.pc != 0x0021FFF0u) [[unlikely]] return; }
L_0021FFF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] - 14996u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_0021FFFC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
    [[clang::musttail]] return unit_0008(c, 1u, depth);
}

}

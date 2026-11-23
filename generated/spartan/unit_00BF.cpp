#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BF[4096] = {
    1, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 0, 10, 0, 0,
    0, 0, 11, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0,
    0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0,
    0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0,
    0, 119, 0, 0, 120, 0, 121, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 127, 0,
    0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 135, 0,
    0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0,
    143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0,
    0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163,
    0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176,
    0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 182, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0,
    189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0,
    0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 201,
    0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0,
    212, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0,
    219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0,
    0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0,
    0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 266, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 278,
    0, 279, 0, 280, 0, 281, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 287, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 295, 0,
    0, 0, 0, 296, 0, 0, 0, 0, 297, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0,
    0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0,
    331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0,
    335, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0,
    0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0,
    347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 349, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 0,
    354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 359, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 364, 0, 0,
    365, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376,
    0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0,
    0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398,
    0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 401, 0, 402, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 406, 0, 407, 0, 408,
    0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0,
    0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 440, 0, 0,
    0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 445, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0,
    450, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0,
    0, 0, 457, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0,
};

void unit_00BF(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004FC000;
    case 2u: goto L_004FC004;
    case 3u: goto L_004FC010;
    case 4u: goto L_004FC02C;
    case 5u: goto L_004FC048;
    case 6u: goto L_004FC050;
    case 7u: goto L_004FC058;
    case 8u: goto L_004FC060;
    case 9u: goto L_004FC068;
    case 10u: goto L_004FC074;
    case 11u: goto L_004FC088;
    case 12u: goto L_004FC094;
    case 13u: goto L_004FC0A0;
    case 14u: goto L_004FC0B0;
    case 15u: goto L_004FC0BC;
    case 16u: goto L_004FC0C8;
    case 17u: goto L_004FC0D4;
    case 18u: goto L_004FC0E0;
    case 19u: goto L_004FC0EC;
    case 20u: goto L_004FC110;
    case 21u: goto L_004FC120;
    case 22u: goto L_004FC140;
    case 23u: goto L_004FC160;
    case 24u: goto L_004FC190;
    case 25u: goto L_004FC1B0;
    case 26u: goto L_004FC1DC;
    case 27u: goto L_004FC210;
    case 28u: goto L_004FC248;
    case 29u: goto L_004FC260;
    case 30u: goto L_004FC280;
    case 31u: goto L_004FC2B8;
    case 32u: goto L_004FC2C4;
    case 33u: goto L_004FC2DC;
    case 34u: goto L_004FC2E8;
    case 35u: goto L_004FC360;
    case 36u: goto L_004FC3AC;
    case 37u: goto L_004FC3B8;
    case 38u: goto L_004FC3CC;
    case 39u: goto L_004FC3D8;
    case 40u: goto L_004FC3F0;
    case 41u: goto L_004FC414;
    case 42u: goto L_004FC420;
    case 43u: goto L_004FC440;
    case 44u: goto L_004FC450;
    case 45u: goto L_004FC460;
    case 46u: goto L_004FC470;
    case 47u: goto L_004FC4F4;
    case 48u: goto L_004FC514;
    case 49u: goto L_004FC524;
    case 50u: goto L_004FC550;
    case 51u: goto L_004FC560;
    case 52u: goto L_004FC590;
    case 53u: goto L_004FC5B0;
    case 54u: goto L_004FC5D0;
    case 55u: goto L_004FC5E8;
    case 56u: goto L_004FC600;
    case 57u: goto L_004FC6A0;
    case 58u: goto L_004FC6B0;
    case 59u: goto L_004FC6E0;
    case 60u: goto L_004FC700;
    case 61u: goto L_004FC73C;
    case 62u: goto L_004FC754;
    case 63u: goto L_004FC780;
    case 64u: goto L_004FC830;
    case 65u: goto L_004FCAF8;
    case 66u: goto L_004FCB04;
    case 67u: goto L_004FCB10;
    case 68u: goto L_004FCBA0;
    case 69u: goto L_004FCBAC;
    case 70u: goto L_004FCC9C;
    case 71u: goto L_004FCCA8;
    case 72u: goto L_004FCEF0;
    case 73u: goto L_004FCF7C;
    case 74u: goto L_004FCFC8;
    case 75u: goto L_004FD028;
    case 76u: goto L_004FD03C;
    case 77u: goto L_004FD088;
    case 78u: goto L_004FD0CC;
    case 79u: goto L_004FD0DC;
    case 80u: goto L_004FD104;
    case 81u: goto L_004FD13C;
    case 82u: goto L_004FD184;
    case 83u: goto L_004FD1AC;
    case 84u: goto L_004FD1C8;
    case 85u: goto L_004FD1DC;
    case 86u: goto L_004FD250;
    case 87u: goto L_004FD25C;
    case 88u: goto L_004FD2D0;
    case 89u: goto L_004FD354;
    case 90u: goto L_004FD398;
    case 91u: goto L_004FD3B4;
    case 92u: goto L_004FD3D0;
    case 93u: goto L_004FD3E4;
    case 94u: goto L_004FD458;
    case 95u: goto L_004FD464;
    case 96u: goto L_004FD4D0;
    case 97u: goto L_004FD4EC;
    case 98u: goto L_004FD55C;
    case 99u: goto L_004FD590;
    case 100u: goto L_004FD5F4;
    case 101u: goto L_004FD600;
    case 102u: goto L_004FD648;
    case 103u: goto L_004FD6C0;
    case 104u: goto L_004FD704;
    case 105u: goto L_004FD740;
    case 106u: goto L_004FD770;
    case 107u: goto L_004FD790;
    case 108u: goto L_004FD7C8;
    case 109u: goto L_004FD7F0;
    case 110u: goto L_004FD804;
    case 111u: goto L_004FD820;
    case 112u: goto L_004FD830;
    case 113u: goto L_004FD83C;
    case 114u: goto L_004FD848;
    case 115u: goto L_004FD854;
    case 116u: goto L_004FD860;
    case 117u: goto L_004FD86C;
    case 118u: goto L_004FD878;
    case 119u: goto L_004FD884;
    case 120u: goto L_004FD890;
    case 121u: goto L_004FD898;
    case 122u: goto L_004FD8AC;
    case 123u: goto L_004FD8B8;
    case 124u: goto L_004FD8CC;
    case 125u: goto L_004FD8D8;
    case 126u: goto L_004FD8EC;
    case 127u: goto L_004FD8F8;
    case 128u: goto L_004FD90C;
    case 129u: goto L_004FD918;
    case 130u: goto L_004FD92C;
    case 131u: goto L_004FD938;
    case 132u: goto L_004FD94C;
    case 133u: goto L_004FD958;
    case 134u: goto L_004FD96C;
    case 135u: goto L_004FD978;
    case 136u: goto L_004FD98C;
    case 137u: goto L_004FD998;
    case 138u: goto L_004FD9AC;
    case 139u: goto L_004FD9B8;
    case 140u: goto L_004FD9CC;
    case 141u: goto L_004FD9D8;
    case 142u: goto L_004FD9F0;
    case 143u: goto L_004FDA00;
    case 144u: goto L_004FDA14;
    case 145u: goto L_004FDA28;
    case 146u: goto L_004FDA40;
    case 147u: goto L_004FDA54;
    case 148u: goto L_004FDA6C;
    case 149u: goto L_004FDA9C;
    case 150u: goto L_004FDAB4;
    case 151u: goto L_004FDAC4;
    case 152u: goto L_004FDAD4;
    case 153u: goto L_004FDAF0;
    case 154u: goto L_004FDB04;
    case 155u: goto L_004FDB1C;
    case 156u: goto L_004FDB4C;
    case 157u: goto L_004FDB64;
    case 158u: goto L_004FDB74;
    case 159u: goto L_004FDB84;
    case 160u: goto L_004FDBA0;
    case 161u: goto L_004FDBB4;
    case 162u: goto L_004FDBCC;
    case 163u: goto L_004FDBFC;
    case 164u: goto L_004FDC14;
    case 165u: goto L_004FDC24;
    case 166u: goto L_004FDC34;
    case 167u: goto L_004FDC50;
    case 168u: goto L_004FDC64;
    case 169u: goto L_004FDC7C;
    case 170u: goto L_004FDCAC;
    case 171u: goto L_004FDCC4;
    case 172u: goto L_004FDCD4;
    case 173u: goto L_004FDCE4;
    case 174u: goto L_004FDD00;
    case 175u: goto L_004FDD38;
    case 176u: goto L_004FDD7C;
    case 177u: goto L_004FDD9C;
    case 178u: goto L_004FDDB0;
    case 179u: goto L_004FDDC4;
    case 180u: goto L_004FDDD0;
    case 181u: goto L_004FDDDC;
    case 182u: goto L_004FDDE4;
    case 183u: goto L_004FDDF0;
    case 184u: goto L_004FDE14;
    case 185u: goto L_004FDE20;
    case 186u: goto L_004FDE44;
    case 187u: goto L_004FDE50;
    case 188u: goto L_004FDE74;
    case 189u: goto L_004FDE80;
    case 190u: goto L_004FDE8C;
    case 191u: goto L_004FDEB0;
    case 192u: goto L_004FDEBC;
    case 193u: goto L_004FDEC8;
    case 194u: goto L_004FDEEC;
    case 195u: goto L_004FDEF8;
    case 196u: goto L_004FDF04;
    case 197u: goto L_004FDF28;
    case 198u: goto L_004FDF34;
    case 199u: goto L_004FDF58;
    case 200u: goto L_004FDF70;
    case 201u: goto L_004FDF7C;
    case 202u: goto L_004FDF94;
    case 203u: goto L_004FDFAC;
    case 204u: goto L_004FDFC4;
    case 205u: goto L_004FE008;
    case 206u: goto L_004FE03C;
    case 207u: goto L_004FE044;
    case 208u: goto L_004FE04C;
    case 209u: goto L_004FE05C;
    case 210u: goto L_004FE068;
    case 211u: goto L_004FE074;
    case 212u: goto L_004FE080;
    case 213u: goto L_004FE08C;
    case 214u: goto L_004FE098;
    case 215u: goto L_004FE0AC;
    case 216u: goto L_004FE0B8;
    case 217u: goto L_004FE0C0;
    case 218u: goto L_004FE0EC;
    case 219u: goto L_004FE100;
    case 220u: goto L_004FE10C;
    case 221u: goto L_004FE138;
    case 222u: goto L_004FE144;
    case 223u: goto L_004FE170;
    case 224u: goto L_004FE17C;
    case 225u: goto L_004FE1A8;
    case 226u: goto L_004FE1B4;
    case 227u: goto L_004FE1EC;
    case 228u: goto L_004FE1F8;
    case 229u: goto L_004FE224;
    case 230u: goto L_004FE230;
    case 231u: goto L_004FE268;
    case 232u: goto L_004FE274;
    case 233u: goto L_004FE2A0;
    case 234u: goto L_004FE2AC;
    case 235u: goto L_004FE2E4;
    case 236u: goto L_004FE2F0;
    case 237u: goto L_004FE31C;
    case 238u: goto L_004FE328;
    case 239u: goto L_004FE3C8;
    case 240u: goto L_004FE3D4;
    case 241u: goto L_004FE3E8;
    case 242u: goto L_004FE3F4;
    case 243u: goto L_004FE408;
    case 244u: goto L_004FE414;
    case 245u: goto L_004FE428;
    case 246u: goto L_004FE434;
    case 247u: goto L_004FE448;
    case 248u: goto L_004FE454;
    case 249u: goto L_004FE468;
    case 250u: goto L_004FE474;
    case 251u: goto L_004FE490;
    case 252u: goto L_004FE4A4;
    case 253u: goto L_004FE4CC;
    case 254u: goto L_004FE4F0;
    case 255u: goto L_004FE504;
    case 256u: goto L_004FE518;
    case 257u: goto L_004FE528;
    case 258u: goto L_004FE538;
    case 259u: goto L_004FE544;
    case 260u: goto L_004FE560;
    case 261u: goto L_004FE584;
    case 262u: goto L_004FE590;
    case 263u: goto L_004FE5C4;
    case 264u: goto L_004FE5D0;
    case 265u: goto L_004FE62C;
    case 266u: goto L_004FE688;
    case 267u: goto L_004FE694;
    case 268u: goto L_004FE6A4;
    case 269u: goto L_004FE6E0;
    case 270u: goto L_004FE718;
    case 271u: goto L_004FE738;
    case 272u: goto L_004FE780;
    case 273u: goto L_004FE790;
    case 274u: goto L_004FE7B0;
    case 275u: goto L_004FE840;
    case 276u: goto L_004FE86C;
    case 277u: goto L_004FE874;
    case 278u: goto L_004FE87C;
    case 279u: goto L_004FE884;
    case 280u: goto L_004FE88C;
    case 281u: goto L_004FE894;
    case 282u: goto L_004FE89C;
    case 283u: goto L_004FE8B0;
    case 284u: goto L_004FE94C;
    case 285u: goto L_004FE95C;
    case 286u: goto L_004FE96C;
    case 287u: goto L_004FE978;
    case 288u: goto L_004FE9A8;
    case 289u: goto L_004FE9D4;
    case 290u: goto L_004FE9EC;
    case 291u: goto L_004FE9F4;
    case 292u: goto L_004FEA3C;
    case 293u: goto L_004FEA58;
    case 294u: goto L_004FEA68;
    case 295u: goto L_004FEA78;
    case 296u: goto L_004FEA8C;
    case 297u: goto L_004FEAA0;
    case 298u: goto L_004FEAA4;
    case 299u: goto L_004FEABC;
    case 300u: goto L_004FEACC;
    case 301u: goto L_004FEAF0;
    case 302u: goto L_004FEB1C;
    case 303u: goto L_004FEB34;
    case 304u: goto L_004FEB44;
    case 305u: goto L_004FEB60;
    case 306u: goto L_004FEBB8;
    case 307u: goto L_004FEBC0;
    case 308u: goto L_004FEBD0;
    case 309u: goto L_004FEBE0;
    case 310u: goto L_004FEBF0;
    case 311u: goto L_004FEC04;
    case 312u: goto L_004FEC20;
    case 313u: goto L_004FEC30;
    case 314u: goto L_004FEC40;
    case 315u: goto L_004FECA0;
    case 316u: goto L_004FECB0;
    case 317u: goto L_004FECBC;
    case 318u: goto L_004FECC8;
    case 319u: goto L_004FECE0;
    case 320u: goto L_004FED2C;
    case 321u: goto L_004FED54;
    case 322u: goto L_004FED9C;
    case 323u: goto L_004FEDC0;
    case 324u: goto L_004FEE60;
    case 325u: goto L_004FEE70;
    case 326u: goto L_004FEEC4;
    case 327u: goto L_004FEEE0;
    case 328u: goto L_004FEF50;
    case 329u: goto L_004FEF60;
    case 330u: goto L_004FEF70;
    case 331u: goto L_004FEF80;
    case 332u: goto L_004FEFD4;
    case 333u: goto L_004FEFF0;
    case 334u: goto L_004FF060;
    case 335u: goto L_004FF080;
    case 336u: goto L_004FF08C;
    case 337u: goto L_004FF094;
    case 338u: goto L_004FF0C0;
    case 339u: goto L_004FF0E0;
    case 340u: goto L_004FF104;
    case 341u: goto L_004FF110;
    case 342u: goto L_004FF138;
    case 343u: goto L_004FF148;
    case 344u: goto L_004FF160;
    case 345u: goto L_004FF1AC;
    case 346u: goto L_004FF1E4;
    case 347u: goto L_004FF200;
    case 348u: goto L_004FF270;
    case 349u: goto L_004FF29C;
    case 350u: goto L_004FF2A0;
    case 351u: goto L_004FF2C4;
    case 352u: goto L_004FF2D8;
    case 353u: goto L_004FF2E0;
    case 354u: goto L_004FF300;
    case 355u: goto L_004FF354;
    case 356u: goto L_004FF370;
    case 357u: goto L_004FF420;
    case 358u: goto L_004FF42C;
    case 359u: goto L_004FF438;
    case 360u: goto L_004FF444;
    case 361u: goto L_004FF450;
    case 362u: goto L_004FF45C;
    case 363u: goto L_004FF468;
    case 364u: goto L_004FF474;
    case 365u: goto L_004FF480;
    case 366u: goto L_004FF48C;
    case 367u: goto L_004FF4A0;
    case 368u: goto L_004FF4AC;
    case 369u: goto L_004FF4C0;
    case 370u: goto L_004FF4D8;
    case 371u: goto L_004FF4E4;
    case 372u: goto L_004FF4F0;
    case 373u: goto L_004FF530;
    case 374u: goto L_004FF550;
    case 375u: goto L_004FF56C;
    case 376u: goto L_004FF57C;
    case 377u: goto L_004FF588;
    case 378u: goto L_004FF5A4;
    case 379u: goto L_004FF5AC;
    case 380u: goto L_004FF5C8;
    case 381u: goto L_004FF5D4;
    case 382u: goto L_004FF60C;
    case 383u: goto L_004FF630;
    case 384u: goto L_004FF638;
    case 385u: goto L_004FF674;
    case 386u: goto L_004FF688;
    case 387u: goto L_004FF698;
    case 388u: goto L_004FF710;
    case 389u: goto L_004FF720;
    case 390u: goto L_004FF730;
    case 391u: goto L_004FF740;
    case 392u: goto L_004FF750;
    case 393u: goto L_004FF798;
    case 394u: goto L_004FF7A0;
    case 395u: goto L_004FF7BC;
    case 396u: goto L_004FF7CC;
    case 397u: goto L_004FF7E4;
    case 398u: goto L_004FF7FC;
    case 399u: goto L_004FF808;
    case 400u: goto L_004FF820;
    case 401u: goto L_004FF828;
    case 402u: goto L_004FF830;
    case 403u: goto L_004FF838;
    case 404u: goto L_004FF848;
    case 405u: goto L_004FF864;
    case 406u: goto L_004FF86C;
    case 407u: goto L_004FF874;
    case 408u: goto L_004FF87C;
    case 409u: goto L_004FF884;
    case 410u: goto L_004FF898;
    case 411u: goto L_004FF8A8;
    case 412u: goto L_004FF8D4;
    case 413u: goto L_004FF8F0;
    case 414u: goto L_004FF938;
    case 415u: goto L_004FF954;
    case 416u: goto L_004FF960;
    case 417u: goto L_004FF988;
    case 418u: goto L_004FF99C;
    case 419u: goto L_004FF9AC;
    case 420u: goto L_004FFA0C;
    case 421u: goto L_004FFA40;
    case 422u: goto L_004FFA50;
    case 423u: goto L_004FFA64;
    case 424u: goto L_004FFA74;
    case 425u: goto L_004FFA90;
    case 426u: goto L_004FFAA0;
    case 427u: goto L_004FFACC;
    case 428u: goto L_004FFAD8;
    case 429u: goto L_004FFAF0;
    case 430u: goto L_004FFB38;
    case 431u: goto L_004FFB44;
    case 432u: goto L_004FFB58;
    case 433u: goto L_004FFB70;
    case 434u: goto L_004FFBA0;
    case 435u: goto L_004FFBA8;
    case 436u: goto L_004FFBC0;
    case 437u: goto L_004FFBC8;
    case 438u: goto L_004FFBD4;
    case 439u: goto L_004FFBE8;
    case 440u: goto L_004FFBF4;
    case 441u: goto L_004FFC18;
    case 442u: goto L_004FFC20;
    case 443u: goto L_004FFC38;
    case 444u: goto L_004FFC44;
    case 445u: goto L_004FFC4C;
    case 446u: goto L_004FFC54;
    case 447u: goto L_004FFC60;
    case 448u: goto L_004FFCA0;
    case 449u: goto L_004FFCDC;
    case 450u: goto L_004FFD00;
    case 451u: goto L_004FFD08;
    case 452u: goto L_004FFD1C;
    case 453u: goto L_004FFD74;
    case 454u: goto L_004FFDA0;
    case 455u: goto L_004FFE60;
    case 456u: goto L_004FFE70;
    case 457u: goto L_004FFE88;
    case 458u: goto L_004FFE94;
    case 459u: goto L_004FFEC4;
    case 460u: goto L_004FFED4;
    case 461u: goto L_004FFEE8;
    case 462u: goto L_004FFF48;
    case 463u: goto L_004FFF58;
    case 464u: goto L_004FFF84;
    case 465u: goto L_004FFF9C;
    case 466u: goto L_004FFFAC;
    case 467u: goto L_004FFFE4;
    default: bad_entry(c, 0x004FC000u); return;
    }
L_004FC000:
    set32(c.r[4], c.r[4].w[0] + 19136u);
    c.budget -= 1;
L_004FC004:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC010u); set32(c.r[4], c.r[4].w[0] - 15952u);  if (depth < kMaxDepth) unit_0090(c, 64u, depth + 1u); else { c.pc = 0x00440CC0u; return; } if (c.pc != 0x004FC010u) [[unlikely]] return; }
L_004FC010:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 42u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004FC07C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004FC02C; } }
L_004FC02C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22907u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FC048; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC048u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0052(c, 197u, depth + 1u); else { c.pc = 0x0034BE90u; return; } if (c.pc != 0x004FC048u) [[unlikely]] return; }
L_004FC048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC050u); set32(c.r[4], ld32((c.r[28].w[0] - 29688u)));  if (depth < kMaxDepth) unit_004B(c, 227u, depth + 1u); else { c.pc = 0x0032F200u; return; } if (c.pc != 0x004FC050u) [[unlikely]] return; }
L_004FC050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004FC0F4; } }
L_004FC058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC060u);  if (depth < kMaxDepth) unit_0028(c, 195u, depth + 1u); else { c.pc = 0x002A2340u; return; } if (c.pc != 0x004FC060u) [[unlikely]] return; }
L_004FC060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FBF20u | kUnwind; return; } [[clang::musttail]] return unit_00BE(c, 274u, depth); } }
L_004FC068:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC074u); set32(c.r[4], ld32((c.r[2].w[0] - 20360u)));  if (depth < kMaxDepth) unit_0028(c, 197u, depth + 1u); else { c.pc = 0x002A2380u; return; } if (c.pc != 0x004FC074u) [[unlikely]] return; }
L_004FC074:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FBFF8u | kUnwind; return; } [[clang::musttail]] return unit_00BE(c, 277u, depth); } }
L_004FC07C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC088u); set32(c.r[4], ld32((c.r[2].w[0] - 20360u)));  if (depth < kMaxDepth) unit_0028(c, 229u, depth + 1u); else { c.pc = 0x002A2A00u; return; } if (c.pc != 0x004FC088u) [[unlikely]] return; }
L_004FC088:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC094u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 131u, depth + 1u); else { c.pc = 0x002BD050u; return; } if (c.pc != 0x004FC094u) [[unlikely]] return; }
L_004FC094:
    set32(c.r[2], ld32((c.r[28].w[0] - 28492u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC0A0u); set32(c.r[4], c.r[2].w[0] + 128u);  if (depth < kMaxDepth) unit_00A3(c, 26u, depth + 1u); else { c.pc = 0x0048C350u; return; } if (c.pc != 0x004FC0A0u) [[unlikely]] return; }
L_004FC0A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC0B0u); set32(c.r[4], c.r[4].w[0] - 20368u);  if (depth < kMaxDepth) unit_003A(c, 131u, depth + 1u); else { c.pc = 0x002E9570u; return; } if (c.pc != 0x004FC0B0u) [[unlikely]] return; }
L_004FC0B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC0BCu); set32(c.r[4], c.r[4].w[0] + 20192u);  if (depth < kMaxDepth) unit_009F(c, 16u, depth + 1u); else { c.pc = 0x0047C9A0u; return; } if (c.pc != 0x004FC0BCu) [[unlikely]] return; }
L_004FC0BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC0C8u); set32(c.r[4], c.r[4].w[0] + 21824u);  if (depth < kMaxDepth) unit_009F(c, 16u, depth + 1u); else { c.pc = 0x0047C9A0u; return; } if (c.pc != 0x004FC0C8u) [[unlikely]] return; }
L_004FC0C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC0D4u); set32(c.r[4], c.r[4].w[0] + 23456u);  if (depth < kMaxDepth) unit_009F(c, 16u, depth + 1u); else { c.pc = 0x0047C9A0u; return; } if (c.pc != 0x004FC0D4u) [[unlikely]] return; }
L_004FC0D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC0E0u); set32(c.r[4], c.r[4].w[0] + 31536u);  if (depth < kMaxDepth) unit_00BE(c, 228u, depth + 1u); else { c.pc = 0x004FB340u; return; } if (c.pc != 0x004FC0E0u) [[unlikely]] return; }
L_004FC0E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC0ECu); set32(c.r[4], c.r[4].w[0] - 11680u);  if (depth < kMaxDepth) unit_0099(c, 199u, depth + 1u); else { c.pc = 0x00467150u; return; } if (c.pc != 0x004FC0ECu) [[unlikely]] return; }
L_004FC0EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FC02Cu | kUnwind; return; } goto L_004FC02C; } }
L_004FC0F4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004FC110:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), 0u);  c.pc = t; return; }
L_004FC120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC140u); set32(c.r[4], c.r[4].w[0] + 24576u);  if (depth < kMaxDepth) unit_0052(c, 195u, depth + 1u); else { c.pc = 0x0034BE70u; return; } if (c.pc != 0x004FC140u) [[unlikely]] return; }
L_004FC140:
    set32(c.r[3], 0u + 6u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FC160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004FC190; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004FC190; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC190u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004FC190u) [[unlikely]] return; }
L_004FC190:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FC1B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 11u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC1DCu); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0018(c, 158u, depth + 1u); else { c.pc = 0x00261CB0u; return; } if (c.pc != 0x004FC1DCu) [[unlikely]] return; }
L_004FC1DC:
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 10u));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[4].d[0] = c.r[4].d[0] | 19ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FC210:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004FC260; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004FC248; } }
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_004FC248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC248u);  if (depth < kMaxDepth) unit_0018(c, 157u, depth + 1u); else { c.pc = 0x00261CA0u; return; } if (c.pc != 0x004FC248u) [[unlikely]] return; }
L_004FC248:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004FC260; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC260u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004FC260u) [[unlikely]] return; }
L_004FC260:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004FC280:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_004FC2C0; } }
L_004FC2B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FC340; } }
L_004FC2C0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004FC2C4:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.f[12] = c.f[20];
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC2DCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 63u, depth + 1u); else { c.pc = 0x004FC780u; return; } if (c.pc != 0x004FC2DCu) [[unlikely]] return; }
L_004FC2DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FC304; } }
    c.budget -= 1;
L_004FC2E8:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FC2C4u | kUnwind; return; } goto L_004FC2C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FC2B8u | kUnwind; return; } goto L_004FC2B8; } }
L_004FC304:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FC2E8u | kUnwind; return; } goto L_004FC2E8; } }
L_004FC340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004FC360:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[16], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FC3B0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC3ACu); set32(c.r[5], c.r[5].w[0] - 15008u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004FC3ACu) [[unlikely]] return; }
L_004FC3AC:
    st32((c.r[21].w[0] + 8u), 0u);
    c.budget -= 1;
L_004FC3B0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004FC4E0; } }
L_004FC3B8:
    set32(c.r[4], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[21].w[0])));  if (t) { goto L_004FC3D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC3CCu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004FC3CCu) [[unlikely]] return; }
L_004FC3CC:
    st32((c.r[21].w[0] + 12u), 0u);
    c.budget -= 1;
L_004FC3D0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004FC51C; } }
L_004FC3D8:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_004FC4D8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_004FC3F0:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[16], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FC418; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC414u); set32(c.r[5], c.r[5].w[0] - 15856u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004FC414u) [[unlikely]] return; }
L_004FC414:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_004FC418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC420u); set32(c.r[4], 0u + 1264u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004FC420u) [[unlikely]] return; }
L_004FC420:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 15952u);
    set32(c.r[6], c.r[6].w[0] - 15856u);
    set32(c.r[7], 0u + 96u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC440u); set32(c.r[8], 0u + 13u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004FC440u) [[unlikely]] return; }
L_004FC440:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_004FC450:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 9992u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC460u); set32(c.r[5], 0u + 65u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x004FC460u) [[unlikely]] return; }
L_004FC460:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC470u); set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_0041(c, 85u, depth + 1u); else { c.pc = 0x00304E30u; return; } if (c.pc != 0x004FC470u) [[unlikely]] return; }
L_004FC470:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 13ll ? 1ull : 0ull;
    set32(c.r[5], c.r[4].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 10u));
    set32(c.r[17], c.r[17].w[0] + 96u);
    c.r[4].d[0] = c.r[4].d[0] | 64ull;
    st8((c.r[5].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], ld32((c.r[5].w[0] + 20u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 10u));
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FC450u | kUnwind; return; } goto L_004FC450; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);
    set32(c.r[18], c.r[18].w[0] + 12u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[3].d[0] = c.r[20].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FC3F0u | kUnwind; return; } goto L_004FC3F0; } }
    c.budget -= 1;
L_004FC4D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_004FC52C; } }
L_004FC4E0:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC4F4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004FC4F4u) [[unlikely]] return; }
L_004FC4F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 15024u);
    set32(c.r[6], c.r[6].w[0] - 15008u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC514u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x004FC514u) [[unlikely]] return; }
L_004FC514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 8u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FC3B8u | kUnwind; return; } goto L_004FC3B8; } }
L_004FC51C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC524u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004FC524u) [[unlikely]] return; }
L_004FC524:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 12u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FC3D8u | kUnwind; return; } goto L_004FC3D8; } }
L_004FC52C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004FC550:
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004FC560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004FC590; } }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004FC590; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC590u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004FC590u) [[unlikely]] return; }
L_004FC590:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FC5B0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_004FC628; } }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[0] = 0u;
    set32(c.r[14], c.r[14].w[0] + 3376u);
    c.budget -= 4;
L_004FC5D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 6;
L_004FC5E8:
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[10], c.r[3].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[10].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004FC630; } }
L_004FC600:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FC5E8u | kUnwind; return; } goto L_004FC5E8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FC5D0u | kUnwind; return; } goto L_004FC5D0; } }
    c.budget -= 1;
L_004FC628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FC698; } }
L_004FC630:
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[12], c.r[10].w[0] + 8u);
    set32(c.r[11], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[10], c.r[11].w[0] << 5);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[10].w[0] << 4);
    set32(c.r[13], c.r[14].w[0] + c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[13].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[13].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[12].w[0]);
    set32(c.r[10], ld32((c.r[13].w[0] + 1064u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    st32((c.r[13].w[0] + 1064u), c.r[10].w[0]);
    set32(c.r[11], ld32((c.r[13].w[0] + 1064u)));
    set32(c.r[10], ld32((c.r[13].w[0] + 1056u)));
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st32((c.r[10].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[13].w[0] + 1064u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[13].w[0] + 1064u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FC600u | kUnwind; return; } goto L_004FC600; } }
L_004FC698:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004FC6A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_004FC6B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004FC720; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004FC6E0:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[19], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FC708; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC700u); set32(c.r[5], c.r[5].w[0] - 15856u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004FC700u) [[unlikely]] return; }
L_004FC700:
    st32((c.r[19].w[0] + 8u), 0u);
    c.budget -= 2;
L_004FC708:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FC6E0u | kUnwind; return; } goto L_004FC6E0; } }
    c.budget -= 1;
L_004FC720:
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FC740; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC73Cu); set32(c.r[5], c.r[5].w[0] - 15008u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x004FC73Cu) [[unlikely]] return; }
L_004FC73C:
    st32((c.r[18].w[0] + 8u), 0u);
    c.budget -= 1;
L_004FC740:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FC758; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC754u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004FC754u) [[unlikely]] return; }
L_004FC754:
    st32((c.r[18].w[0] + 12u), 0u);
    c.budget -= 1;
L_004FC758:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004FC780:
    set32(c.r[29], c.r[29].w[0] - 336u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x411D0000u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 7864ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F7D0000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    set32(c.r[30], c.r[29].w[0] + 296u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    set32(c.r[23], c.r[29].w[0] + 292u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[3].d[0] | 28836ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 288u);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 208u), 0u);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    c.f[25] = c.r[2].w[0];
    st32((c.r[29].w[0] + 16u), c.f[24]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[3].d[0] = c.r[2].d[0] | 63875ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[22] = c.r[2].w[0];
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[26] = 0u;
    c.f[24] = c.r[4].w[0];
    c.f[23] = c.r[3].w[0];
    c.f[21] = c.r[2].w[0];
    st32((c.r[29].w[0]), c.f[20]);
    c.f[28] = c.f[12];
    c.budget -= 44;
L_004FC830:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[26]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004FCE80; } }
    c.f[27] = fp::ee::sub(c.fcr31, c.f[0], c.f[28]);
    fpu_compare(c, fp::key(c.f[27]) <= fp::key(c.f[26]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[2].w[0] + 40u), c.f[27]);  if (t) { goto L_004FCE80; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 32u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FC8B8; } }
    c.f[2] = ld32((c.r[3].w[0] + 68u));
    set32(c.r[2], c.r[29].w[0] + 308u);
    c.f[3] = ld32((c.r[3].w[0] + 64u));
    c.f[1] = ld32((c.r[3].w[0] + 72u));
    c.f[0] = ld32((c.r[3].w[0] + 76u));
    st32((c.r[2].w[0]), c.f[2]);
    set32(c.r[2], c.r[29].w[0] + 312u);
    st32((c.r[2].w[0]), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 316u);
    st32((c.r[29].w[0] + 304u), c.f[3]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.f[0]);  if (t) { goto L_004FC9A0; } }
    c.budget -= 1;
L_004FC8B8:
    set32(c.r[2], c.r[29].w[0] + 228u);
    c.f[1] = ld32((c.r[3].w[0] + 80u));
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    c.f[4] = 0u;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 80u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 88u));
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 84u));
    c.f[1] = ld32((c.r[28].w[0] - 29672u));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[25], c.f[1]);
    st32((c.r[3].w[0] + 84u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 80u));
    c.f[3] = ld32((c.r[3].w[0] + 88u));
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    c.f[2] = ld32((c.r[3].w[0] + 84u));
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[28]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 64u), c.f[0]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[28]);
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    st32((c.r[2].w[0]), c.f[2]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[28]);
    set32(c.r[2], c.r[29].w[0] + 232u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[3].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    st32((c.r[29].w[0] + 224u), c.f[1]);
    st32((c.r[2].w[0]), c.f[3]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    st32((c.r[3].w[0] + 72u), c.f[0]);
    c.f[3] = ld32((c.r[3].w[0] + 64u));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.f[2] = ld32((c.r[3].w[0] + 68u));
    c.f[1] = ld32((c.r[3].w[0] + 72u));
    c.f[0] = ld32((c.r[3].w[0] + 76u));
    st32((c.r[29].w[0] + 304u), c.f[3]);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[29].w[0] + 308u);
    st32((c.r[2].w[0]), c.f[2]);
    set32(c.r[2], c.r[29].w[0] + 312u);
    st32((c.r[2].w[0]), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 316u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    c.f[1] = ld32((c.r[3].w[0] + 48u));
    c.facc = fp::ee::add(c.fcr31, c.f[4], c.f[0]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[28], c.f[1]);
    st32((c.r[3].w[0] + 52u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[24]);
    st32((c.r[2].w[0] + 48u), c.f[0]);
    c.budget -= 58;
L_004FC9A0:
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[18], c.r[29].w[0] + 240u);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[16], c.r[3].w[0] << 5);
    st128((c.r[18].w[0] + 48u) & ~15u, c.vu0.vf[0]);
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    set32(c.r[22], c.r[29].w[0] + 272u);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    set32(c.r[21], c.r[29].w[0] + 256u);
    vu::sub4<1>(c.vu0, 15u, 1u, 1u, 1u);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    vu::addbc4<1>(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    c.f[1] = 0u;
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[23].w[0]));
    st128((c.r[18].w[0]) & ~15u, c.vu0.vf[1]);
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[23], c.f[2]);
    set32(c.r[2], c.r[29].w[0] + 244u);
    vu::sub4<1>(c.vu0, 15u, 2u, 2u, 2u);
    c.f[7] = ld32((c.r[2].w[0]));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    vu::addbc4<1>(c.vu0, 4u, 2u, 0u, c.vu0.vf[0].w[3]);
    c.f[5] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[2], c.r[29].w[0] + 248u);
    c.f[6] = ld32((c.r[2].w[0]));
    st128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    st32((c.r[17].w[0]), c.f[2]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    vu::mr32_4(c.vu0, 15u, 3u, 0u);
    set32(c.r[2], c.r[29].w[0] + 260u);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[5], c.f[0]);
    st128((c.r[18].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    st32((c.r[29].w[0] + 240u), c.f[4]);
    c.f[4] = ld32((c.r[2].w[0]));
    c.f[7] = fp::ee::mul(c.fcr31, c.f[7], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 264u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[6] = fp::ee::mul(c.fcr31, c.f[6], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 244u);
    st32((c.r[2].w[0]), c.f[7]);
    set32(c.r[2], c.r[29].w[0] + 248u);
    st32((c.r[2].w[0]), c.f[6]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 260u);
    st32((c.r[2].w[0]), c.f[4]);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 264u);
    st32((c.r[2].w[0]), c.f[3]);
    set32(c.r[2], c.r[29].w[0] + 276u);
    c.f[4] = ld32((c.r[2].w[0]));
    st32((c.r[23].w[0]), c.f[2]);
    c.f[2] = ld32((c.r[22].w[0]));
    c.f[5] = ld32((c.r[21].w[0]));
    set32(c.r[2], c.r[29].w[0] + 280u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    set32(c.r[2], c.f[1]);
    st32((c.r[22].w[0]), c.f[2]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.f[5] = fp::ee::mul(c.fcr31, c.f[5], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 276u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[4] = fp::ee::mul(c.fcr31, c.f[4], c.f[0]);
    st32((c.r[2].w[0]), c.f[4]);
    c.f[4] = c.r[3].w[0];
    set32(c.r[2], c.r[29].w[0] + 280u);
    c.f[3] = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[4] = fp::ee::add(c.fcr31, c.f[1], c.f[4]);
    c.f[4] = fp::cvt_w_s(c.f[4]);
    c.f[2] = ld32((c.r[30].w[0]));
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[22], c.f[4]);
    st32((c.r[21].w[0]), c.f[5]);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[30].w[0]), c.f[0]);
    c.budget -= 86;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCAF8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004FCAF8u) [[unlikely]] return; }
L_004FCAF8:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCB04u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004FCB04u) [[unlikely]] return; }
L_004FCB04:
    c.f[2] = 0u;
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_004FCB10:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.f[3] = ld32((c.r[18].w[0] + 4u));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[1]);
    st32((c.r[18].w[0] + 4u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    st32((c.r[18].w[0] + 8u), c.f[1]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FCB10u | kUnwind; return; } goto L_004FCB10; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[4].d[0] = 0ull | 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 52u));
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[23], c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[22], c.f[1]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCBA0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004FCBA0u) [[unlikely]] return; }
L_004FCBA0:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCBACu); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004FCBACu) [[unlikely]] return; }
L_004FCBAC:
    set32(c.r[2], c.r[29].w[0] + 248u);
    c.r[5].d[0] = 0ull | 0ull;
    c.f[8] = ld32((c.r[2].w[0]));
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.r[5].d[0] = c.r[5].d[0] << 16;
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[9] = ld32((c.r[29].w[0] + 240u));
    c.r[5].d[0] = c.r[5].d[0] << 16;
    c.f[6] = ld32((c.r[21].w[0]));
    c.f[4] = ld32((c.r[22].w[0]));
    set32(c.r[2], c.r[29].w[0] + 264u);
    c.f[5] = ld32((c.r[2].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[20], c.f[8]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[9], c.f[0]);
    st32((c.r[29].w[0] + 240u), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[8]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[9], c.f[20]);
    set32(c.r[2], c.r[29].w[0] + 280u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[20], c.f[5]);
    c.f[7] = 0u;
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 52u));
    set32(c.r[2], c.r[29].w[0] + 248u);
    st32((c.r[2].w[0]), c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[6], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 264u);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[5]);
    st32((c.r[21].w[0]), c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[6], c.f[20]);
    st32((c.r[2].w[0]), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[20], c.f[3]);
    set32(c.r[2], c.r[29].w[0] + 280u);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    st32((c.r[22].w[0]), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[3]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[4], c.f[20]);
    c.f[4] = ld32((c.r[30].w[0]));
    st32((c.r[2].w[0]), c.f[1]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[23], c.f[2]);
    set32(c.r[2], c.f[1]);
    c.f[5] = ld32((c.r[17].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[20], c.f[4]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[0]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    c.f[0] = fp::ee::msub(c.fcr31, c.facc, c.f[5], c.f[20]);
    st32((c.r[30].w[0]), c.f[0]);
    c.f[0] = c.r[4].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[7], c.f[2]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[20] = fp::ee::msub(c.fcr31, c.facc, c.f[22], c.f[0]);
    st32((c.r[17].w[0]), c.f[3]);
    c.budget -= 60;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCC9Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004FCC9Cu) [[unlikely]] return; }
L_004FCC9C:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCCA8u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004FCCA8u) [[unlikely]] return; }
L_004FCCA8:
    set32(c.r[2], c.r[29].w[0] + 244u);
    c.f[6] = ld32((c.r[2].w[0]));
    c.f[7] = ld32((c.r[29].w[0] + 240u));
    c.f[5] = ld32((c.r[21].w[0]));
    c.f[3] = ld32((c.r[22].w[0]));
    fpu_compare(c, fp::key(c.f[27]) < fp::key(c.f[21]));
    set32(c.r[2], c.r[29].w[0] + 260u);
    c.f[4] = ld32((c.r[2].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[7], c.f[0]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[6]);
    st32((c.r[29].w[0] + 240u), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[6]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[7], c.f[20]);
    set32(c.r[2], c.r[29].w[0] + 276u);
    c.f[2] = ld32((c.r[2].w[0]));
    c.facc = fp::ee::mul(c.fcr31, c.f[5], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 244u);
    st32((c.r[2].w[0]), c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[4]);
    set32(c.r[2], c.r[29].w[0] + 260u);
    st32((c.r[21].w[0]), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[4]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[20]);
    st32((c.r[2].w[0]), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 276u);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[22].w[0]), c.f[1]);
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[23].w[0]));
    st32((c.r[2].w[0]), c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[0]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[20], c.f[2]);
    c.facc = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[20]);
    st32((c.r[17].w[0]), c.f[1]);
    c.budget -= 40;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[23].w[0]), c.f[0]);  if (t) { goto L_004FCE30; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0] + 33u));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 34u));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 35u));
    st8((c.r[29].w[0] + 332u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[29].w[0] + 333u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 36u));
    st8((c.r[29].w[0] + 335u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 335u);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] < 0; st8((c.r[29].w[0] + 334u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004FCD88; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004FCDA4; } }
L_004FCD88:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_004FCDA4:
    c.f[0] = fp::ee::div(c.fcr31, c.f[27], c.f[21]);
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[29].w[0] + 333u);
    c.r[7].d[0] = 0ull | 0ull;
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[7].d[0] = c.r[7].d[0] << 16;
    c.r[4].d[0] = ld8((c.r[29].w[0] + 332u));
    c.r[7].d[0] = c.r[7].d[0] | 32768ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[7].d[0] = c.r[7].d[0] << 16;
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[2], c.r[29].w[0] + 334u);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    set32(c.r[2], c.f[0]);
    c.r[7].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    set32(c.r[2], c.r[29].w[0] + 335u);
    c.f[1] = c.r[6].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[1]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 35;
L_004FCE30:
    set32(c.r[2], c.r[29].w[0] + 308u);
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 240u);
    c.f[2] = ld32((c.r[29].w[0] + 304u));
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[30]);
    set32(c.r[2], c.r[29].w[0] + 312u);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0]), c.f[2]);
    st32((c.r[23].w[0]), c.f[1]);
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    st32((c.r[30].w[0]), c.f[0]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    st128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[30]);
    ld128((c.r[3].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    st128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[30]);
    c.budget -= 20;
L_004FCE80:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FC830u | kUnwind; return; } goto L_004FC830; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_004FCEF0:
    set32(c.r[29], c.r[29].w[0] - 368u);
    set32(c.r[2], ld32((c.r[5].w[0] + 348u)));
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    set32(c.r[3], c.r[22].w[0] << 6);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[29].w[0] + 288u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 8u);
    st32((c.r[29].w[0] + 44u), c.f[31]);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 40u), c.f[30]);
    st32((c.r[29].w[0] + 36u), c.f[29]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = ld32((c.r[29].w[0] + 220u));
    c.f[21] = ld32((c.r[29].w[0] + 268u));
    c.f[30] = ld32((c.r[29].w[0] + 252u));
    c.f[26] = c.f[12];
    c.budget -= 35;
L_004FCF7C:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FCF7Cu | kUnwind; return; } goto L_004FCF7C; } }
    c.f[1] = ld32((c.r[29].w[0] + 340u));
    set32(c.r[2], c.r[29].w[0] + 276u);
    c.f[2] = ld32((c.r[29].w[0] + 336u));
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    set32(c.r[5], c.r[29].w[0] + 272u);
    st32((c.r[2].w[0]), c.f[1]);
    set32(c.r[2], c.r[29].w[0] + 280u);
    st32((c.r[29].w[0] + 272u), c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCFC8u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_007D(c, 35u, depth + 1u); else { c.pc = 0x003F4300u; return; } if (c.pc != 0x004FCFC8u) [[unlikely]] return; }
L_004FCFC8:
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[23], c.r[23].w[0] - 13336u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[23].w[0])));
    c.f[23] = ld32((c.r[2].w[0] - 13344u));
    c.f[25] = 0u;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[30], c.r[29].w[0] + 365u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.f[1] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.f[24] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.budget -= 23;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FD354; } }
    set32(c.r[2], c.r[18].w[0] << 1);
    c.budget -= 1;
L_004FD028:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 13328u);
    set32(c.r[16], c.r[2].w[0] << 5);
    c.budget -= 5;
L_004FD03C:
    set32(c.r[4], ld32((c.r[19].w[0] + 344u)));
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], ld32((c.r[19].w[0] + 348u)));  if (t) { goto L_004FD650; } }
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 35ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_004FD068; } }
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0] + 1572u));
    c.budget -= 2;
L_004FD068:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FD080; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 1572u));
    c.budget -= 1;
L_004FD080:
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 2;
L_004FD088:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[2].w[0] << 6);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.f[24] = ld32((c.r[3].w[0] + 48u));
    c.f[23] = ld32((c.r[3].w[0] + 52u));
    c.f[22] = ld32((c.r[3].w[0] + 56u));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 64u), c.f[24]);
    st32((c.r[2].w[0] + 68u), c.f[23]);
    st32((c.r[2].w[0] + 72u), c.f[22]);
    st32((c.r[2].w[0] + 76u), c.f[21]);
    c.r[5].d[0] = ld8((c.r[17].w[0] + 4u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD0CCu); set32(c.r[4], c.r[4].w[0] + 9992u);  if (depth < kMaxDepth) unit_0030(c, 713u, depth + 1u); else { c.pc = 0x002C3960u; return; } if (c.pc != 0x004FD0CCu) [[unlikely]] return; }
L_004FD0CC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD0DCu); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0041(c, 85u, depth + 1u); else { c.pc = 0x00304E30u; return; } if (c.pc != 0x004FD0DCu) [[unlikely]] return; }
L_004FD0DC:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 64u), c.f[24]);
    st32((c.r[2].w[0] + 68u), c.f[23]);
    st32((c.r[2].w[0] + 72u), c.f[22]);
    st32((c.r[2].w[0] + 76u), c.f[21]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD104u); set32(c.r[22], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004FD104u) [[unlikely]] return; }
L_004FD104:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[3].d[0] = c.r[3].d[0] | 52432ull;
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.f[3] = c.r[3].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[3], c.f[0]);
    st32((c.r[22].w[0] + 44u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD13Cu); set32(c.r[22], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004FD13Cu) [[unlikely]] return; }
L_004FD13C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBEA00000u);
    c.r[4].d[0] = c.r[3].d[0] | 55676ull;
    c.r[3].d[0] = c.r[2].d[0] | 55676ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.f[4] = c.r[4].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[3] = c.r[3].w[0];
    c.f[2] = 0u;
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[22].w[0] + 48u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD184u); set32(c.r[22], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004FD184u) [[unlikely]] return; }
L_004FD184:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.f[2] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD1ACu); st32((c.r[22].w[0] + 52u), c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004FD1ACu) [[unlikely]] return; }
L_004FD1AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.f[1] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD1C8u); c.f[28] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004FD1C8u) [[unlikely]] return; }
L_004FD1C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD1DCu); c.f[27] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004FD1DCu) [[unlikely]] return; }
L_004FD1DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[4].d[0] = 0ull | 0ull;
    c.f[24] = c.f[0];
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[25]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[0] = c.r[2].w[0];
    c.f[2] = 0u;
    set32(c.r[2], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[27]);
    c.f[23] = fp::ee::madd(c.fcr31, c.facc, c.f[28], c.f[24]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[25]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[22] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[2]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD250u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004FD250u) [[unlikely]] return; }
L_004FD250:
    c.f[12] = c.f[22];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD25Cu); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004FD25Cu) [[unlikely]] return; }
L_004FD25C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F320000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 47299ull;
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = c.r[2].w[0];
    c.facc = fp::ee::mul(c.fcr31, c.f[23], c.f[0]);
    c.f[25] = fp::ee::add(c.fcr31, c.f[25], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F7D0000u);
    c.r[3].d[0] = c.r[2].d[0] | 28836ull;
    set32(c.r[2], c.r[5].w[0] + c.r[16].w[0]);
    c.f[2] = 0u;
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[22]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[26]);
    c.facc = fp::ee::mul(c.fcr31, c.f[28], c.f[27]);
    st32((c.r[2].w[0] + 80u), c.f[1]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[24]);
    c.facc = fp::ee::mul(c.fcr31, c.f[23], c.f[22]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[26]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[26]);
    st32((c.r[2].w[0] + 84u), c.f[1]);
    st32((c.r[2].w[0] + 88u), c.f[0]);
    st32((c.r[2].w[0] + 92u), c.f[20]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD2D0u); st32((c.r[2].w[0] + 56u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004FD2D0u) [[unlikely]] return; }
L_004FD2D0:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].d[0] = c.r[21].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 8u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.r[9].d[0] = ld8((c.r[28].w[0] - 30824u));
    c.r[8].d[0] = ld8((c.r[28].w[0] - 30823u));
    c.r[7].d[0] = ld8((c.r[28].w[0] - 30822u));
    c.r[6].d[0] = ld8((c.r[28].w[0] - 30821u));
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30824u));
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    st8((c.r[5].w[0] + 33u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 34u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[5].w[0] + 35u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[5].w[0] + 36u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    st8((c.r[4].w[0] + 32u), static_cast<std::uint8_t>(0u));
    c.budget -= 31;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FD03Cu | kUnwind; return; } goto L_004FD03C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FD658; } }
L_004FD354:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 64u), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 276u);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[3].w[0] + 68u), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 280u);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[3].w[0] + 72u), c.f[0]);
    set32(c.r[2], c.r[29].w[0] + 284u);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[3].w[0] + 76u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD398u); set32(c.r[21], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004FD398u) [[unlikely]] return; }
L_004FD398:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD3B4u); st32((c.r[21].w[0] + 44u), c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004FD3B4u) [[unlikely]] return; }
L_004FD3B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.f[1] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD3D0u); c.f[31] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004FD3D0u) [[unlikely]] return; }
L_004FD3D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD3E4u); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004FD3E4u) [[unlikely]] return; }
L_004FD3E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[4].d[0] = 0ull | 0ull;
    c.f[29] = c.f[0];
    c.r[2].d[0] = c.r[2].d[0] | 63875ull;
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[0], c.f[25]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.r[4].d[0] = c.r[4].d[0] | 32768ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.f[0] = c.r[2].w[0];
    c.f[2] = 0u;
    set32(c.r[2], c.f[1]);
    c.facc = fp::ee::mul(c.fcr31, c.f[2], c.f[22]);
    c.f[28] = fp::ee::madd(c.fcr31, c.facc, c.f[31], c.f[29]);
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[25]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[27] = fp::ee::msub(c.fcr31, c.facc, c.f[0], c.f[2]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD458u); c.f[12] = c.f[27];  if (depth < kMaxDepth) unit_000B(c, 54u, depth + 1u); else { c.pc = 0x0022D6B8u; return; } if (c.pc != 0x004FD458u) [[unlikely]] return; }
L_004FD458:
    c.f[12] = c.f[27];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD464u); c.f[27] = c.f[0];  if (depth < kMaxDepth) unit_000B(c, 65u, depth + 1u); else { c.pc = 0x0022D958u; return; } if (c.pc != 0x004FD464u) [[unlikely]] return; }
L_004FD464:
    c.f[2] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F7D0000u);
    c.facc = fp::ee::mul(c.fcr31, c.f[28], c.f[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.f[1] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[27]);
    c.r[3].d[0] = c.r[2].d[0] | 28836ull;
    c.facc = fp::ee::mul(c.fcr31, c.f[31], c.f[22]);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[22] = fp::ee::mul(c.fcr31, c.f[1], c.f[26]);
    set32(c.r[2], c.r[5].w[0] + c.r[16].w[0]);
    c.f[1] = fp::ee::msub(c.fcr31, c.facc, c.f[2], c.f[29]);
    c.facc = fp::ee::mul(c.fcr31, c.f[28], c.f[27]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.f[28] = fp::ee::mul(c.fcr31, c.f[1], c.f[26]);
    st32((c.r[2].w[0] + 80u), c.f[22]);
    c.f[27] = fp::ee::mul(c.fcr31, c.f[0], c.f[26]);
    st32((c.r[2].w[0] + 84u), c.f[28]);
    st32((c.r[2].w[0] + 88u), c.f[27]);
    st32((c.r[2].w[0] + 92u), c.f[30]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.f[25] = fp::ee::add(c.fcr31, c.f[25], c.f[24]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD4D0u); set32(c.r[21], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004FD4D0u) [[unlikely]] return; }
L_004FD4D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD4ECu); st32((c.r[21].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004FD4ECu) [[unlikely]] return; }
L_004FD4EC:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 30831u));
    set32(c.r[4], c.r[28].w[0] - 28340u);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[5].d[0] = ld8((c.r[28].w[0] - 30830u));
    c.r[6].d[0] = ld8((c.r[28].w[0] - 30832u));
    c.r[7].d[0] = ld8((c.r[28].w[0] - 30825u));
    st8((c.r[30].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 366u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[29].w[0] + 364u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[30].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 364u));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 33u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 34u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 35u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD55Cu); set32(c.r[21], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004FD55Cu) [[unlikely]] return; }
L_004FD55C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[3].d[0] | 4059ull;
    set32(c.r[4], c.r[28].w[0] - 28340u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[2], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[21].w[0] + 52u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD590u); set32(c.r[21], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x004FD590u) [[unlikely]] return; }
L_004FD590:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[4] = c.r[2].w[0];
    set32(c.r[5], c.r[19].w[0] + 32u);
    c.f[3] = c.r[3].w[0];
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.f[2] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 4059ull;
    c.f[1] = c.r[2].w[0];
    c.facc = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[4], c.f[0]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[21].w[0] + 48u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 32u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], c.r[16].w[0] + 96u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28492u)));
    set32(c.r[2], c.r[29].w[0] + 228u);
    st32((c.r[2].w[0]), c.f[28]);
    set32(c.r[2], c.r[29].w[0] + 232u);
    st32((c.r[2].w[0]), c.f[27]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD5F4u); st32((c.r[29].w[0] + 224u), c.f[22]);  if (depth < kMaxDepth) unit_0088(c, 151u, depth + 1u); else { c.pc = 0x00420780u; return; } if (c.pc != 0x004FD5F4u) [[unlikely]] return; }
L_004FD5F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FD61C; } }
    c.budget -= 1;
L_004FD600:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FD354u | kUnwind; return; } goto L_004FD354; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[18].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FD028u | kUnwind; return; } goto L_004FD028; } }
L_004FD61C:
    c.f[0] = fp::cvt_w_s(c.f[23]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28544u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 364u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 224u);
    set32(c.r[2], c.f[0]);
    c.r[8].d[0] = c.r[2].d[0] << 48;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD648u); c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);  if (depth < kMaxDepth) unit_007D(c, 201u, depth + 1u); else { c.pc = 0x003F61A0u; return; } if (c.pc != 0x004FD648u) [[unlikely]] return; }
L_004FD648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FD600u | kUnwind; return; } goto L_004FD600; } }
L_004FD650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FD088u | kUnwind; return; } goto L_004FD088; } }
L_004FD658:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.f[31] = ld32((c.r[29].w[0] + 44u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.f[30] = ld32((c.r[29].w[0] + 40u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_004FD6C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004FD6E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_004FD724; } }
L_004FD6E8:
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.f[12] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD704u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00BF(c, 72u, depth + 1u); else { c.pc = 0x004FCEF0u; return; } if (c.pc != 0x004FD704u) [[unlikely]] return; }
L_004FD704:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
L_004FD724:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FD740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 3u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 48u));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 51u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD770u); st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004FD770u) [[unlikely]] return; }
L_004FD770:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[16].w[0] + 3u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FD790:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    st8((c.r[4].w[0] + 51u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 2u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD7C8u); c.r[5].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FD7C8u) [[unlikely]] return; }
L_004FD7C8:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[16].w[0] + 3u);
    st8((c.r[17].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004FD7F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD804u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004FD804u) [[unlikely]] return; }
L_004FD804:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004FD820; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    set32(c.r[6], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD820u); set32(c.r[4], c.r[2].w[0] + 5632u);  if (depth < kMaxDepth) unit_0047(c, 82u, depth + 1u); else { c.pc = 0x0031D010u; return; } if (c.pc != 0x004FD820u) [[unlikely]] return; }
L_004FD820:
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FD8A0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 1;
L_004FD830:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FD8C0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_004FD83C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FD8E0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_004FD848:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FD900; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_004FD854:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FD920; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_004FD860:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FD940; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_004FD86C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FD960; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 1;
L_004FD878:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FD980; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 1;
L_004FD884:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FD9A0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_004FD890:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FD9C0; } }
L_004FD898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004FD9E0; } }
L_004FD8A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD8ACu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FD8ACu) [[unlikely]] return; }
L_004FD8AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD8B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FD8B8u) [[unlikely]] return; }
L_004FD8B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 64u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FD830u | kUnwind; return; } goto L_004FD830; } }
L_004FD8C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD8CCu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FD8CCu) [[unlikely]] return; }
L_004FD8CC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD8D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FD8D8u) [[unlikely]] return; }
L_004FD8D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 68u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FD83Cu | kUnwind; return; } goto L_004FD83C; } }
L_004FD8E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD8ECu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FD8ECu) [[unlikely]] return; }
L_004FD8EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD8F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FD8F8u) [[unlikely]] return; }
L_004FD8F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 72u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FD848u | kUnwind; return; } goto L_004FD848; } }
L_004FD900:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD90Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FD90Cu) [[unlikely]] return; }
L_004FD90C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD918u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FD918u) [[unlikely]] return; }
L_004FD918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 76u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FD854u | kUnwind; return; } goto L_004FD854; } }
L_004FD920:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD92Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FD92Cu) [[unlikely]] return; }
L_004FD92C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD938u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FD938u) [[unlikely]] return; }
L_004FD938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 80u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FD860u | kUnwind; return; } goto L_004FD860; } }
L_004FD940:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD94Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FD94Cu) [[unlikely]] return; }
L_004FD94C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD958u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FD958u) [[unlikely]] return; }
L_004FD958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 84u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FD86Cu | kUnwind; return; } goto L_004FD86C; } }
L_004FD960:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD96Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FD96Cu) [[unlikely]] return; }
L_004FD96C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD978u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FD978u) [[unlikely]] return; }
L_004FD978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 88u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FD878u | kUnwind; return; } goto L_004FD878; } }
L_004FD980:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD98Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FD98Cu) [[unlikely]] return; }
L_004FD98C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD998u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FD998u) [[unlikely]] return; }
L_004FD998:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 92u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FD884u | kUnwind; return; } goto L_004FD884; } }
L_004FD9A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD9ACu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FD9ACu) [[unlikely]] return; }
L_004FD9AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD9B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FD9B8u) [[unlikely]] return; }
L_004FD9B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 96u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FD890u | kUnwind; return; } goto L_004FD890; } }
L_004FD9C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD9CCu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FD9CCu) [[unlikely]] return; }
L_004FD9CC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD9D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FD9D8u) [[unlikely]] return; }
L_004FD9D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FD898u | kUnwind; return; } goto L_004FD898; } }
L_004FD9E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FD9F0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x004FC000u < 16384u) { entry = entries_00BF[(t - 0x004FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004FDA00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 48u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FDA1C; } }
L_004FDA14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_004FDA30; } }
L_004FDA1C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDA28u); st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00BF(c, 109u, depth + 1u); else { c.pc = 0x004FD7F0u; return; } if (c.pc != 0x004FDA28u) [[unlikely]] return; }
L_004FDA28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDA14u | kUnwind; return; } goto L_004FDA14; } }
L_004FDA30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004FDA40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDA54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004FDA54u) [[unlikely]] return; }
L_004FDA54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FDABC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDA6Cu); set32(c.r[4], c.r[4].w[0] + 24016u);  if (depth < kMaxDepth) unit_0052(c, 6u, depth + 1u); else { c.pc = 0x003480A0u; return; } if (c.pc != 0x004FDA6Cu) [[unlikely]] return; }
L_004FDA6C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004FDADC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 53u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FDAA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    st32((c.r[28].w[0] - 28192u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDA9Cu); st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004FDA9Cu) [[unlikely]] return; }
L_004FDA9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FDAB4; } }
L_004FDAA4:
    set32(c.r[2], 0u + 9u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDAB4u); st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004FDAB4u) [[unlikely]] return; }
L_004FDAB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004FDAE0; } }
L_004FDABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDAC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 109u, depth + 1u); else { c.pc = 0x004FD7F0u; return; } if (c.pc != 0x004FDAC4u) [[unlikely]] return; }
L_004FDAC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDAD4u); set32(c.r[4], c.r[4].w[0] + 24016u);  if (depth < kMaxDepth) unit_0051(c, 335u, depth + 1u); else { c.pc = 0x00347FA0u; return; } if (c.pc != 0x004FDAD4u) [[unlikely]] return; }
L_004FDAD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDAB4u | kUnwind; return; } goto L_004FDAB4; } }
L_004FDADC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004FDAE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FDAF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDB04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004FDB04u) [[unlikely]] return; }
L_004FDB04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FDB6C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDB1Cu); set32(c.r[4], c.r[4].w[0] + 24016u);  if (depth < kMaxDepth) unit_0052(c, 6u, depth + 1u); else { c.pc = 0x003480A0u; return; } if (c.pc != 0x004FDB1Cu) [[unlikely]] return; }
L_004FDB1C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004FDB8C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 53u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FDB54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    st32((c.r[28].w[0] - 28192u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDB4Cu); st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004FDB4Cu) [[unlikely]] return; }
L_004FDB4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FDB64; } }
L_004FDB54:
    set32(c.r[2], 0u + 9u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDB64u); st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004FDB64u) [[unlikely]] return; }
L_004FDB64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004FDB90; } }
L_004FDB6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDB74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 109u, depth + 1u); else { c.pc = 0x004FD7F0u; return; } if (c.pc != 0x004FDB74u) [[unlikely]] return; }
L_004FDB74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDB84u); set32(c.r[4], c.r[4].w[0] + 24016u);  if (depth < kMaxDepth) unit_0051(c, 335u, depth + 1u); else { c.pc = 0x00347FA0u; return; } if (c.pc != 0x004FDB84u) [[unlikely]] return; }
L_004FDB84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDB64u | kUnwind; return; } goto L_004FDB64; } }
L_004FDB8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004FDB90:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FDBA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDBB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004FDBB4u) [[unlikely]] return; }
L_004FDBB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FDC1C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDBCCu); set32(c.r[4], c.r[4].w[0] + 24016u);  if (depth < kMaxDepth) unit_0052(c, 6u, depth + 1u); else { c.pc = 0x003480A0u; return; } if (c.pc != 0x004FDBCCu) [[unlikely]] return; }
L_004FDBCC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004FDC3C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 53u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FDC04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    st32((c.r[28].w[0] - 28192u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDBFCu); st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004FDBFCu) [[unlikely]] return; }
L_004FDBFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FDC14; } }
L_004FDC04:
    set32(c.r[2], 0u + 9u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDC14u); st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004FDC14u) [[unlikely]] return; }
L_004FDC14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004FDC40; } }
L_004FDC1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDC24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 109u, depth + 1u); else { c.pc = 0x004FD7F0u; return; } if (c.pc != 0x004FDC24u) [[unlikely]] return; }
L_004FDC24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDC34u); set32(c.r[4], c.r[4].w[0] + 24016u);  if (depth < kMaxDepth) unit_0051(c, 335u, depth + 1u); else { c.pc = 0x00347FA0u; return; } if (c.pc != 0x004FDC34u) [[unlikely]] return; }
L_004FDC34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDC14u | kUnwind; return; } goto L_004FDC14; } }
L_004FDC3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004FDC40:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FDC50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDC64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004FDC64u) [[unlikely]] return; }
L_004FDC64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FDCCC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDC7Cu); set32(c.r[4], c.r[4].w[0] + 24016u);  if (depth < kMaxDepth) unit_0052(c, 6u, depth + 1u); else { c.pc = 0x003480A0u; return; } if (c.pc != 0x004FDC7Cu) [[unlikely]] return; }
L_004FDC7C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004FDCEC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 53u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FDCB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    st32((c.r[28].w[0] - 28192u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDCACu); st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004FDCACu) [[unlikely]] return; }
L_004FDCAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FDCC4; } }
L_004FDCB4:
    set32(c.r[2], 0u + 9u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDCC4u); st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004FDCC4u) [[unlikely]] return; }
L_004FDCC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004FDCF0; } }
L_004FDCCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDCD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 109u, depth + 1u); else { c.pc = 0x004FD7F0u; return; } if (c.pc != 0x004FDCD4u) [[unlikely]] return; }
L_004FDCD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDCE4u); set32(c.r[4], c.r[4].w[0] + 24016u);  if (depth < kMaxDepth) unit_0051(c, 335u, depth + 1u); else { c.pc = 0x00347FA0u; return; } if (c.pc != 0x004FDCE4u) [[unlikely]] return; }
L_004FDCE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDCC4u | kUnwind; return; } goto L_004FDCC4; } }
L_004FDCEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004FDCF0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FDD00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 49u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004FE47C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 13168u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x004FC000u < 16384u) { entry = entries_00BF[(t - 0x004FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004FDD38:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FDDE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[2].w[0] - 20416u));
    set32(c.r[6], 0u + 3u);
    c.f[1] = c.r[3].w[0];
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29220u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; st32((c.r[28].w[0] - 28192u), c.f[0]);  if (t) { goto L_004FDD84; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDD7Cu); set32(c.r[4], c.r[2].w[0] + 6032u);  if (depth < kMaxDepth) unit_0047(c, 54u, depth + 1u); else { c.pc = 0x0031CDD0u; return; } if (c.pc != 0x004FDD7Cu) [[unlikely]] return; }
L_004FDD7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 93u);  if (t) { goto L_004FDDC8; } }
L_004FDD84:
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    c.f[12] = 0u;
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDD9Cu); set32(c.r[4], c.r[2].w[0] + 5632u);  if (depth < kMaxDepth) unit_0047(c, 103u, depth + 1u); else { c.pc = 0x0031D1F0u; return; } if (c.pc != 0x004FDD9Cu) [[unlikely]] return; }
L_004FDD9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 297u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDDB0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004FDDB0u) [[unlikely]] return; }
L_004FDDB0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDDC4u); set32(c.r[4], c.r[2].w[0] + 6032u);  if (depth < kMaxDepth) unit_0047(c, 54u, depth + 1u); else { c.pc = 0x0031CDD0u; return; } if (c.pc != 0x004FDDC4u) [[unlikely]] return; }
L_004FDDC4:
    set32(c.r[4], 0u + 93u);
    c.budget -= 1;
L_004FDDC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDDD0u);  if (depth < kMaxDepth) unit_0077(c, 40u, depth + 1u); else { c.pc = 0x003DC660u; return; } if (c.pc != 0x004FDDD0u) [[unlikely]] return; }
L_004FDDD0:
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FE0C8; } }
L_004FDDDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDDE4u); set32(c.r[4], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_0075(c, 186u, depth + 1u); else { c.pc = 0x003D70C0u; return; } if (c.pc != 0x004FDDE4u) [[unlikely]] return; }
L_004FDDE4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004FE0C0; } }
L_004FDDF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 20416u));
    c.f[0] = ld32((c.r[28].w[0] - 28192u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004FE47C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FE0F4; } }
L_004FDE14:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004FE0C0; } }
L_004FDE20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 20416u));
    c.f[0] = ld32((c.r[28].w[0] - 28192u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004FE47C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FE12C; } }
L_004FDE44:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004FE0C0; } }
L_004FDE50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 20416u));
    c.f[0] = ld32((c.r[28].w[0] - 28192u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004FE47C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FE164; } }
L_004FDE74:
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FE19C; } }
L_004FDE80:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004FE0C0; } }
L_004FDE8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 20416u));
    c.f[0] = ld32((c.r[28].w[0] - 28192u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004FE47C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FE1E0; } }
L_004FDEB0:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FE218; } }
L_004FDEBC:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004FE0C0; } }
L_004FDEC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 20416u));
    c.f[0] = ld32((c.r[28].w[0] - 28192u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004FE47C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FE25C; } }
L_004FDEEC:
    set32(c.r[5], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FE294; } }
L_004FDEF8:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004FE0C0; } }
L_004FDF04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 20416u));
    c.f[0] = ld32((c.r[28].w[0] - 28192u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004FE47C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FE2D8; } }
L_004FDF28:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004FE0C0; } }
L_004FDF34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 20416u));
    c.f[0] = ld32((c.r[28].w[0] - 28192u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004FE47C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FE310; } }
L_004FDF58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    st32((c.r[28].w[0] - 28192u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FE330; } }
L_004FDF70:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004FE34C; } }
L_004FDF7C:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004FE368; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004FE368; } }
L_004FDF94:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004FE384; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004FE384; } }
L_004FDFAC:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004FE3A0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004FE3A0; } }
L_004FDFC4:
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FDFE8; } }
    c.f[1] = ld32((c.r[28].w[0] - 28192u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[28].w[0] - 28192u), c.f[0]);
    c.budget -= 6;
L_004FDFE8:
    c.f[1] = ld32((c.r[28].w[0] - 28192u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], 0u + 8u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[28].w[0] - 28192u), c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004FE0C0; } }
L_004FE008:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 20416u));
    c.f[0] = ld32((c.r[28].w[0] - 28192u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004FE47C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004FE03C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29688u)));
    set32(c.r[6], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE03Cu); set32(c.r[4], c.r[2].w[0] + 5632u);  if (depth < kMaxDepth) unit_0047(c, 82u, depth + 1u); else { c.pc = 0x0031D010u; return; } if (c.pc != 0x004FE03Cu) [[unlikely]] return; }
L_004FE03C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE044u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004FE044u) [[unlikely]] return; }
L_004FE044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FE0C0; } }
L_004FE04C:
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FE3BC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 1;
L_004FE05C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FE3DC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_004FE068:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FE3FC; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_004FE074:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FE41C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 1;
L_004FE080:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FE43C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 1;
L_004FE08C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FE45C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_004FE098:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004FE0B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE0ACu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FE0ACu) [[unlikely]] return; }
L_004FE0AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE0B8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FE0B8u) [[unlikely]] return; }
L_004FE0B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE0C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004FE0C0u) [[unlikely]] return; }
L_004FE0C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004FE480; } }
L_004FE0C8:
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE0ECu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FE0ECu) [[unlikely]] return; }
L_004FE0EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDDDCu | kUnwind; return; } goto L_004FDDDC; } }
L_004FE0F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE100u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FE100u) [[unlikely]] return; }
L_004FE100:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE10Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FE10Cu) [[unlikely]] return; }
L_004FE10C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28192u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDE14u | kUnwind; return; } goto L_004FDE14; } }
L_004FE12C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE138u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FE138u) [[unlikely]] return; }
L_004FE138:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE144u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FE144u) [[unlikely]] return; }
L_004FE144:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28192u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDE44u | kUnwind; return; } goto L_004FDE44; } }
L_004FE164:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE170u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FE170u) [[unlikely]] return; }
L_004FE170:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE17Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FE17Cu) [[unlikely]] return; }
L_004FE17C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28192u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDE74u | kUnwind; return; } goto L_004FDE74; } }
L_004FE19C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE1A8u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FE1A8u) [[unlikely]] return; }
L_004FE1A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE1B4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FE1B4u) [[unlikely]] return; }
L_004FE1B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDE80u | kUnwind; return; } goto L_004FDE80; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28192u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDE80u | kUnwind; return; } goto L_004FDE80; } }
L_004FE1E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE1ECu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FE1ECu) [[unlikely]] return; }
L_004FE1EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE1F8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FE1F8u) [[unlikely]] return; }
L_004FE1F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28192u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDEB0u | kUnwind; return; } goto L_004FDEB0; } }
L_004FE218:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE224u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FE224u) [[unlikely]] return; }
L_004FE224:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE230u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FE230u) [[unlikely]] return; }
L_004FE230:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDEBCu | kUnwind; return; } goto L_004FDEBC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28192u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDEBCu | kUnwind; return; } goto L_004FDEBC; } }
L_004FE25C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE268u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FE268u) [[unlikely]] return; }
L_004FE268:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE274u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FE274u) [[unlikely]] return; }
L_004FE274:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28192u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDEECu | kUnwind; return; } goto L_004FDEEC; } }
L_004FE294:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE2A0u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FE2A0u) [[unlikely]] return; }
L_004FE2A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE2ACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FE2ACu) [[unlikely]] return; }
L_004FE2AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDEF8u | kUnwind; return; } goto L_004FDEF8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28192u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDEF8u | kUnwind; return; } goto L_004FDEF8; } }
L_004FE2D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE2E4u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FE2E4u) [[unlikely]] return; }
L_004FE2E4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE2F0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FE2F0u) [[unlikely]] return; }
L_004FE2F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28192u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDF28u | kUnwind; return; } goto L_004FDF28; } }
L_004FE310:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE31Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FE31Cu) [[unlikely]] return; }
L_004FE31C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE328u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FE328u) [[unlikely]] return; }
L_004FE328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDF58u | kUnwind; return; } goto L_004FDF58; } }
L_004FE330:
    c.f[1] = ld32((c.r[28].w[0] - 28192u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28192u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDF70u | kUnwind; return; } goto L_004FDF70; } }
L_004FE34C:
    c.f[1] = ld32((c.r[28].w[0] - 28192u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28192u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDF7Cu | kUnwind; return; } goto L_004FDF7C; } }
L_004FE368:
    c.f[1] = ld32((c.r[28].w[0] - 28192u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28192u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDF94u | kUnwind; return; } goto L_004FDF94; } }
L_004FE384:
    c.f[1] = ld32((c.r[28].w[0] - 28192u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28192u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDFACu | kUnwind; return; } goto L_004FDFAC; } }
L_004FE3A0:
    c.f[1] = ld32((c.r[28].w[0] - 28192u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28192u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDFC4u | kUnwind; return; } goto L_004FDFC4; } }
L_004FE3BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE3C8u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FE3C8u) [[unlikely]] return; }
L_004FE3C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE3D4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FE3D4u) [[unlikely]] return; }
L_004FE3D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 64u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FE05Cu | kUnwind; return; } goto L_004FE05C; } }
L_004FE3DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE3E8u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FE3E8u) [[unlikely]] return; }
L_004FE3E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE3F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FE3F4u) [[unlikely]] return; }
L_004FE3F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 80u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FE068u | kUnwind; return; } goto L_004FE068; } }
L_004FE3FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE408u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FE408u) [[unlikely]] return; }
L_004FE408:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE414u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FE414u) [[unlikely]] return; }
L_004FE414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 84u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FE074u | kUnwind; return; } goto L_004FE074; } }
L_004FE41C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE428u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FE428u) [[unlikely]] return; }
L_004FE428:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE434u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FE434u) [[unlikely]] return; }
L_004FE434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 88u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FE080u | kUnwind; return; } goto L_004FE080; } }
L_004FE43C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE448u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FE448u) [[unlikely]] return; }
L_004FE448:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE454u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FE454u) [[unlikely]] return; }
L_004FE454:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 92u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FE08Cu | kUnwind; return; } goto L_004FE08C; } }
L_004FE45C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE468u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FE468u) [[unlikely]] return; }
L_004FE468:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE474u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FE474u) [[unlikely]] return; }
L_004FE474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 96u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FE098u | kUnwind; return; } goto L_004FE098; } }
L_004FE47C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004FE480:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004FE490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE4A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004FE4A4u) [[unlikely]] return; }
L_004FE4A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FE4F8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 48u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004FE54C; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 52u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004FE50C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 50u));
    c.budget -= 1;
L_004FE4CC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FE520; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 51u));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 51u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004FE520; } }
L_004FE4F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004FE550; } }
L_004FE4F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE504u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FE504u) [[unlikely]] return; }
L_004FE504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FE4F0u | kUnwind; return; } goto L_004FE4F0; } }
L_004FE50C:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE518u); set32(c.r[4], ld32((c.r[2].w[0] + 212u)));  if (depth < kMaxDepth) unit_0028(c, 79u, depth + 1u); else { c.pc = 0x002A1270u; return; } if (c.pc != 0x004FE518u) [[unlikely]] return; }
L_004FE518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 50u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FE4CCu | kUnwind; return; } goto L_004FE4CC; } }
L_004FE520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE528u); set32(c.r[4], 0u + 94u);  if (depth < kMaxDepth) unit_0077(c, 40u, depth + 1u); else { c.pc = 0x003DC660u; return; } if (c.pc != 0x004FE528u) [[unlikely]] return; }
L_004FE528:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE538u); st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00BF(c, 109u, depth + 1u); else { c.pc = 0x004FD7F0u; return; } if (c.pc != 0x004FE538u) [[unlikely]] return; }
L_004FE538:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE544u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 238u, depth + 1u); else { c.pc = 0x002BAF40u; return; } if (c.pc != 0x004FE544u) [[unlikely]] return; }
L_004FE544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FE4F0u | kUnwind; return; } goto L_004FE4F0; } }
L_004FE54C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004FE550:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FE560:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FE584; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE584u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FE584u) [[unlikely]] return; }
L_004FE584:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004FE590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 51u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FE5C4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE5C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FE5C4u) [[unlikely]] return; }
L_004FE5C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004FE5D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0] + 44u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[8].w[0]);
    st8((c.r[4].w[0] + 52u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 50u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 50u));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[11].d[0] + 0ull;  if (t) { goto L_004FE69C; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 52u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004FE628; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29200u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[28].w[0] - 29200u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_004FE628:
    st8((c.r[18].w[0] + 50u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004FE62C:
    set32(c.r[10], ld32((c.r[29].w[0] + 64u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[5], c.r[18].w[0] + 56u);
    set32(c.r[8], ld32((c.r[29].w[0] + 80u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    st32((c.r[18].w[0] + 60u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 64u), c.r[10].w[0]);
    st32((c.r[18].w[0] + 68u), c.r[9].w[0]);
    st32((c.r[18].w[0] + 72u), c.r[8].w[0]);
    st32((c.r[18].w[0] + 76u), c.r[7].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 88u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    st32((c.r[18].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE688u); st32((c.r[18].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x004FE688u) [[unlikely]] return; }
L_004FE688:
    set32(c.r[4], c.r[18].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE694u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 183u, depth + 1u); else { c.pc = 0x003D7090u; return; } if (c.pc != 0x004FE694u) [[unlikely]] return; }
L_004FE694:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004FE6CC; } }
L_004FE69C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE6A4u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x004FE6A4u) [[unlikely]] return; }
L_004FE6A4:
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 52u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FE62Cu | kUnwind; return; } goto L_004FE62C; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29200u));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 50u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29200u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FE62Cu | kUnwind; return; } goto L_004FE62C; } }
L_004FE6CC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004FE6E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004FE780; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 19552u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 50u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FE788; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 1;
L_004FE718:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FE73C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FE738; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE738u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FE738u) [[unlikely]] return; }
L_004FE738:
    st32((c.r[16].w[0] + 56u), 0u);
    c.budget -= 1;
L_004FE73C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004FE768; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004FE768; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004FE768:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004FE780; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE780u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004FE780u) [[unlikely]] return; }
L_004FE780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004FE798; } }
L_004FE788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE790u); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x004FE790u) [[unlikely]] return; }
L_004FE790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 56u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FE718u | kUnwind; return; } goto L_004FE718; } }
L_004FE798:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004FE7B0:
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
    set32(c.r[3], c.r[3].w[0] - 19552u);
    c.r[10].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[11], 0u + 1u);
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
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st8((c.r[4].w[0] + 50u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 56u), 0u);  c.pc = t; return; }
L_004FE840:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004FE89C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 13056u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x004FC000u < 16384u) { entry = entries_00BF[(t - 0x004FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004FE86C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 60u);  if (t) { goto L_004FE8A0; } }
L_004FE874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004FE8A0; } }
L_004FE87C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004FE8A0; } }
L_004FE884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_004FE8A0; } }
L_004FE88C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_004FE8A0; } }
L_004FE894:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_004FE8A0; } }
L_004FE89C:
    set32(c.r[2], 0u + 60u);
    c.budget -= 1;
L_004FE8A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004FE8B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 44u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004FE9B0; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 42u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_004FE92C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 20360u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 544u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FE904; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FE92C; } }
L_004FE904:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 29024u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004FE924; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 42u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004FE924; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004FE924:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FEB44; } }
L_004FE92C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 29024u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FE94C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00620000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE94Cu); set32(c.r[4], c.r[4].w[0] - 29024u);  if (depth < kMaxDepth) unit_00BE(c, 259u, depth + 1u); else { c.pc = 0x004FBD00u; return; } if (c.pc != 0x004FE94Cu) [[unlikely]] return; }
L_004FE94C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00620000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE95Cu); set32(c.r[4], c.r[4].w[0] - 29024u);  if (depth < kMaxDepth) unit_00BE(c, 271u, depth + 1u); else { c.pc = 0x004FBEC0u; return; } if (c.pc != 0x004FE95Cu) [[unlikely]] return; }
L_004FE95C:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE96Cu); st8((c.r[16].w[0] + 45u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004FE96Cu) [[unlikely]] return; }
L_004FE96C:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE978u); st8((c.r[28].w[0] - 31672u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0075(c, 190u, depth + 1u); else { c.pc = 0x003D7100u; return; } if (c.pc != 0x004FE978u) [[unlikely]] return; }
L_004FE978:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    set32(c.r[4], 0u + 1u);
    c.f[1] = c.r[3].w[0];
    st8((c.r[16].w[0] + 46u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[3].w[0] - 20416u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FEAAC; } }
    st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004FE9A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004FEB48; } }
L_004FE9B0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 46u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FE9F4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 45u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FE9DC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004FEAC4; } }
L_004FE9D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 46u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004FE9F4; } }
L_004FE9DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FEAF8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004FE9EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE9F4u); st8((c.r[16].w[0] + 46u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004FE9F4u) [[unlikely]] return; }
L_004FE9F4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 33u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FEB44; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[3].w[0] - 20416u));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004FEB44; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 3184u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FEB24; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_004FEB24; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 42u));
    c.budget -= 1;
L_004FEA3C:
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 49;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FEB44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEA58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x002BAFE0u; return; } if (c.pc != 0x004FEA58u) [[unlikely]] return; }
L_004FEA58:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 224u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEA68u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FEA68u) [[unlikely]] return; }
L_004FEA68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FEB3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEA78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 246u, depth + 1u); else { c.pc = 0x002BAFE0u; return; } if (c.pc != 0x004FEA78u) [[unlikely]] return; }
L_004FEA78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 24016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEA8Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0051(c, 222u, depth + 1u); else { c.pc = 0x00346CA0u; return; } if (c.pc != 0x004FEA8Cu) [[unlikely]] return; }
L_004FEA8C:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FEB2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEAA0u);  if (depth < kMaxDepth) unit_0076(c, 244u, depth + 1u); else { c.pc = 0x003DB8E0u; return; } if (c.pc != 0x004FEAA0u) [[unlikely]] return; }
L_004FEAA0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_004FEAA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 31672u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004FEB44; } }
L_004FEAAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEABCu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004FEABCu) [[unlikely]] return; }
L_004FEABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FE9A8u | kUnwind; return; } goto L_004FE9A8; } }
L_004FEAC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEACCu);  if (depth < kMaxDepth) unit_0076(c, 243u, depth + 1u); else { c.pc = 0x003DB890u; return; } if (c.pc != 0x004FEACCu) [[unlikely]] return; }
L_004FEACC:
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEAF0u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FEAF0u) [[unlikely]] return; }
L_004FEAF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FE9D4u | kUnwind; return; } goto L_004FE9D4; } }
L_004FEAF8:
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEB1Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FEB1Cu) [[unlikely]] return; }
L_004FEB1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FE9ECu | kUnwind; return; } goto L_004FE9EC; } }
L_004FEB24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FEA3Cu | kUnwind; return; } goto L_004FEA3C; } }
L_004FEB2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEB34u); set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (depth < kMaxDepth) unit_0076(c, 244u, depth + 1u); else { c.pc = 0x003DB8E0u; return; } if (c.pc != 0x004FEB34u) [[unlikely]] return; }
L_004FEB34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FEAA4u | kUnwind; return; } goto L_004FEAA4; } }
L_004FEB3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEB44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x004FEB44u) [[unlikely]] return; }
L_004FEB44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004FEB48:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004FEB60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[3].w[0] - 20360u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 523u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004FEB94; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 45u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FEC0C; } }
L_004FEB94:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 45u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FEBD8; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st8((c.r[16].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[2].w[0] - 20360u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEBB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0020(c, 312u, depth + 1u); else { c.pc = 0x00283F50u; return; } if (c.pc != 0x004FEBB8u) [[unlikely]] return; }
L_004FEBB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEBC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004FEBC0u) [[unlikely]] return; }
L_004FEBC0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEBD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FEBD0u) [[unlikely]] return; }
L_004FEBD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004FEC10; } }
L_004FEBD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEBE0u);  if (depth < kMaxDepth) unit_0076(c, 242u, depth + 1u); else { c.pc = 0x003DB840u; return; } if (c.pc != 0x004FEBE0u) [[unlikely]] return; }
L_004FEBE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00620000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEBF0u); set32(c.r[4], c.r[4].w[0] - 29024u);  if (depth < kMaxDepth) unit_00BE(c, 261u, depth + 1u); else { c.pc = 0x004FBD40u; return; } if (c.pc != 0x004FEBF0u) [[unlikely]] return; }
L_004FEBF0:
    st8((c.r[16].w[0] + 45u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 31672u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEC04u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0075(c, 190u, depth + 1u); else { c.pc = 0x003D7100u; return; } if (c.pc != 0x004FEC04u) [[unlikely]] return; }
L_004FEC04:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 46u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_004FEC0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004FEC10:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FEC20:
    st8((c.r[4].w[0] + 45u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 44u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_004FEC30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_004FEC40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[9].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[8], ld32((c.r[5].w[0] + 4u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 9u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 10u)));
    st8((c.r[4].w[0] + 32u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[4].w[0] + 33u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[4].w[0] + 36u), c.r[8].w[0]);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[18].w[0] + 48u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FECA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x004FECA0u) [[unlikely]] return; }
L_004FECA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 52u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FECB0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x004FECB0u) [[unlikely]] return; }
L_004FECB0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FECBCu); set32(c.r[4], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0075(c, 183u, depth + 1u); else { c.pc = 0x003D7090u; return; } if (c.pc != 0x004FECBCu) [[unlikely]] return; }
L_004FECBC:
    set32(c.r[4], c.r[18].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FECC8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0075(c, 183u, depth + 1u); else { c.pc = 0x003D7090u; return; } if (c.pc != 0x004FECC8u) [[unlikely]] return; }
L_004FECC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004FECE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004FED9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 19248u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FED30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FED2C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FED2Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FED2Cu) [[unlikely]] return; }
L_004FED2C:
    st32((c.r[17].w[0] + 48u), 0u);
    c.budget -= 1;
L_004FED30:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FED58; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FED54; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FED54u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FED54u) [[unlikely]] return; }
L_004FED54:
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 1;
L_004FED58:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004FED84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004FED84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_004FED84:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004FED9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FED9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004FED9Cu) [[unlikely]] return; }
L_004FED9C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004FEDC0:
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
    set32(c.r[3], c.r[3].w[0] - 19248u);
    c.r[10].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[11], 0u + 1u);
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
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 36u), 0u);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[4].w[0] + 48u), 0u);
    c.budget -= 37;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 52u), 0u);  c.pc = t; return; }
L_004FEE60:
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] + 24016u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00346AE0u | kUnwind; return; } [[clang::musttail]] return unit_0051(c, 205u, depth); }
L_004FEE70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004FEEC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 18944u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004FEEAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004FEEAC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004FEEC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEEC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004FEEC4u) [[unlikely]] return; }
L_004FEEC4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FEEE0:
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
    set32(c.r[3], c.r[3].w[0] - 18944u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
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
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[5].w[0]);  c.pc = t; return; }
L_004FEF50:
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { set32(c.r[4], c.r[4].w[0] + 24016u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00346B70u | kUnwind; return; } [[clang::musttail]] return unit_0051(c, 212u, depth); }
L_004FEF60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004FEF70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[5].w[0]);  c.pc = t; return; }
L_004FEF80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004FEFD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 18656u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004FEFBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004FEFBC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004FEFD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEFD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004FEFD4u) [[unlikely]] return; }
L_004FEFD4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FEFF0:
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
    set32(c.r[3], c.r[3].w[0] - 18656u);
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
L_004FF060:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF080u); set32(c.r[4], c.r[4].w[0] + 24016u);  if (depth < kMaxDepth) unit_0051(c, 209u, depth + 1u); else { c.pc = 0x00346B40u; return; } if (c.pc != 0x004FF080u) [[unlikely]] return; }
L_004FF080:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FF09C; } }
L_004FF08C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF094u); set32(c.r[4], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0075(c, 186u, depth + 1u); else { c.pc = 0x003D70C0u; return; } if (c.pc != 0x004FF094u) [[unlikely]] return; }
L_004FF094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004FF0C8; } }
L_004FF09C:
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF0C0u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FF0C0u) [[unlikely]] return; }
L_004FF0C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF08Cu | kUnwind; return; } goto L_004FF08C; } }
L_004FF0C8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004FF0E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FF104; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF104u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FF104u) [[unlikely]] return; }
L_004FF104:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004FF110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], c.r[16].w[0] + 20u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF138u); set32(c.r[4], c.r[4].w[0] - 12880u);  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x004FF138u) [[unlikely]] return; }
L_004FF138:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF148u); set32(c.r[5], c.r[5].w[0] - 12880u);  if (depth < kMaxDepth) unit_0075(c, 183u, depth + 1u); else { c.pc = 0x003D7090u; return; } if (c.pc != 0x004FF148u) [[unlikely]] return; }
L_004FF148:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FF160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004FF1E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 18368u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FF1B0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FF1AC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF1ACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FF1ACu) [[unlikely]] return; }
L_004FF1AC:
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 1;
L_004FF1B0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004FF1CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_004FF1CC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004FF1E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF1E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004FF1E4u) [[unlikely]] return; }
L_004FF1E4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004FF200:
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
    set32(c.r[3], c.r[3].w[0] - 18368u);
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
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), 0u);  c.pc = t; return; }
L_004FF270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004FF2CC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 29u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FF29C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF29Cu); set32(c.r[4], 0u + 21u);  if (depth < kMaxDepth) unit_009A(c, 8u, depth + 1u); else { c.pc = 0x004682F0u; return; } if (c.pc != 0x004FF29Cu) [[unlikely]] return; }
L_004FF29C:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 1;
L_004FF2A0:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 24u)));
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF2C4u); set32(c.r[4], c.r[2].w[0] + 168u);  if (depth < kMaxDepth) unit_0028(c, 4u, depth + 1u); else { c.pc = 0x002A0020u; return; } if (c.pc != 0x004FF2C4u) [[unlikely]] return; }
L_004FF2C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004FF2E8; } }
L_004FF2CC:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF2D8u); set32(c.r[4], ld32((c.r[2].w[0] + 212u)));  if (depth < kMaxDepth) unit_0028(c, 79u, depth + 1u); else { c.pc = 0x002A1270u; return; } if (c.pc != 0x004FF2D8u) [[unlikely]] return; }
L_004FF2D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF2E0u); set32(c.r[4], 0u + 22u);  if (depth < kMaxDepth) unit_009A(c, 8u, depth + 1u); else { c.pc = 0x004682F0u; return; } if (c.pc != 0x004FF2E0u) [[unlikely]] return; }
L_004FF2E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF2A0u | kUnwind; return; } goto L_004FF2A0; } }
L_004FF2E8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FF300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004FF354; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 18080u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004FF33C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_004FF33C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004FF354; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF354u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004FF354u) [[unlikely]] return; }
L_004FF354:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FF370:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].d[0] = c.r[6].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] - 16352u);
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[6].w[0] + 1u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[5].w[0] << 2);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[3], c.r[5].w[0] << 2);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[12].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[10], 0u - 2u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[8], 0u - 3u);
    c.r[9].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[7], c.r[7].w[0] - 18080u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.r[5].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[11].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[5].d[0] = c.r[5].d[0] & c.r[8].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0]), c.r[7].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.budget -= 37;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[4].w[0] + 29u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004FF4FC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 12576u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x004FC000u < 16384u) { entry = entries_00BF[(t - 0x004FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004FF420:
    set32(c.r[2], 0u + 65u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_004FF504; } }
L_004FF42C:
    set32(c.r[2], 0u + 61u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_004FF504; } }
L_004FF438:
    set32(c.r[2], 0u + 47u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_004FF504; } }
L_004FF444:
    set32(c.r[2], 0u + 23u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_004FF504; } }
L_004FF450:
    set32(c.r[2], 0u + 66u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_004FF504; } }
L_004FF45C:
    set32(c.r[2], 0u + 62u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_004FF504; } }
L_004FF468:
    set32(c.r[2], 0u + 67u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_004FF504; } }
L_004FF474:
    set32(c.r[2], 0u + 63u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_004FF504; } }
L_004FF480:
    set32(c.r[2], 0u + 59u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_004FF504; } }
L_004FF48C:
    c.r[1].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004FF50C; } }
    set32(c.r[2], c.r[6].w[0] + 84u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 2;
L_004FF4A0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 29u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004FF504; } }
L_004FF4AC:
    c.r[1].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004FF518; } }
    set32(c.r[2], c.r[6].w[0] + 84u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 2;
L_004FF4C0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29200u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29200u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004FF504; } }
L_004FF4D8:
    set32(c.r[2], 0u + 68u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_004FF504; } }
L_004FF4E4:
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_004FF504; } }
L_004FF4F0:
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { goto L_004FF504; } }
L_004FF4FC:
    set32(c.r[2], 0u + 60u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 2;
L_004FF504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004FF524; } }
L_004FF50C:
    set32(c.r[2], 0u + 86u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF4A0u | kUnwind; return; } goto L_004FF4A0; } }
L_004FF518:
    set32(c.r[2], 0u + 86u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF4C0u | kUnwind; return; } goto L_004FF4C0; } }
L_004FF524:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004FF530:
    set32(c.r[3], ld32((c.r[28].w[0] - 28184u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 28184u), c.r[3].w[0]);  c.pc = t; return; }
L_004FF550:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF56Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004FF56Cu) [[unlikely]] return; }
L_004FF56C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FF614; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_004FF57C:
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FF67C; } }
L_004FF588:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF57Cu | kUnwind; return; } goto L_004FF57C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF5A4u);  if (depth < kMaxDepth) unit_0076(c, 241u, depth + 1u); else { c.pc = 0x003DB7F0u; return; } if (c.pc != 0x004FF5A4u) [[unlikely]] return; }
L_004FF5A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF5ACu);  if (depth < kMaxDepth) unit_001E(c, 9u, depth + 1u); else { c.pc = 0x00278070u; return; } if (c.pc != 0x004FF5ACu) [[unlikely]] return; }
L_004FF5AC:
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FF5C8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF5C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FF5C8u) [[unlikely]] return; }
L_004FF5C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 28180u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_004FF6F0; } }
L_004FF5D4:
    c.r[7].d[0] = ld8((c.r[18].w[0] + 72u));
    set32(c.r[5], 0u - 2u);
    c.r[6].d[0] = 0ull & 1ull;
    set32(c.r[2], 0u - 3u);
    set32(c.r[3], c.r[6].w[0] << 1);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[18].w[0] + 72u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[18].w[0] + 72u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF60Cu); st8((c.r[18].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x004FF60Cu) [[unlikely]] return; }
L_004FF60C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004FF6F8; } }
L_004FF614:
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004FF630; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF630u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x004FF630u) [[unlikely]] return; }
L_004FF630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF638u);  if (depth < kMaxDepth) unit_0076(c, 235u, depth + 1u); else { c.pc = 0x003DB550u; return; } if (c.pc != 0x004FF638u) [[unlikely]] return; }
L_004FF638:
    st32((c.r[28].w[0] - 28180u), c.r[18].w[0]);
    set32(c.r[5], 0u - 2u);
    c.r[7].d[0] = ld8((c.r[18].w[0] + 72u));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[2], 0u - 3u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[18].w[0] + 72u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[18].w[0] + 72u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF674u); st8((c.r[18].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x004FF674u) [[unlikely]] return; }
L_004FF674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF60Cu | kUnwind; return; } goto L_004FF60C; } }
L_004FF67C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF688u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FF688u) [[unlikely]] return; }
L_004FF688:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF698u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FF698u) [[unlikely]] return; }
L_004FF698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF588u | kUnwind; return; } goto L_004FF588; } }
    c.r[9].d[0] = ld16((c.r[2].w[0] + 544u));
    set32(c.r[7], 0u - 3u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[5], 0u - 17u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[3], 0u - 2049u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[2].w[0] + 544u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[2].w[0] + 544u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[2].w[0] + 544u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[2].w[0] + 544u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 544u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF588u | kUnwind; return; } goto L_004FF588; } }
    c.budget -= 1;
L_004FF6F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28180u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF5D4u | kUnwind; return; } goto L_004FF5D4; } }
L_004FF6F8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004FF710:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF550u | kUnwind; return; } goto L_004FF550; }
L_004FF720:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF550u | kUnwind; return; } goto L_004FF550; }
L_004FF730:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF550u | kUnwind; return; } goto L_004FF550; }
L_004FF740:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF550u | kUnwind; return; } goto L_004FF550; }
L_004FF750:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[4].w[0] + 72u));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FFA18; } }
    c.r[3].d[0] = c.r[4].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FFA18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF798u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 146u, depth + 1u); else { c.pc = 0x003DA620u; return; } if (c.pc != 0x004FF798u) [[unlikely]] return; }
L_004FF798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF7A0u);  if (depth < kMaxDepth) unit_00AA(c, 66u, depth + 1u); else { c.pc = 0x004A8860u; return; } if (c.pc != 0x004FF7A0u) [[unlikely]] return; }
L_004FF7A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004FF7C4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004FF948; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF7BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 62u, depth + 1u); else { c.pc = 0x004A87A0u; return; } if (c.pc != 0x004FF7BCu) [[unlikely]] return; }
L_004FF7BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FF948; } }
L_004FF7C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF7CCu);  if (depth < kMaxDepth) unit_001E(c, 34u, depth + 1u); else { c.pc = 0x00278420u; return; } if (c.pc != 0x004FF7CCu) [[unlikely]] return; }
L_004FF7CC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004FF7E4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF7E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FF7E4u) [[unlikely]] return; }
L_004FF7E4:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[28].w[0] - 28188u), 0u);
    c.r[20].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 28184u), 0u);
    c.r[19].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 11888u);
    c.budget -= 6;
L_004FF7FC:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FF914; } }
L_004FF808:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF7FCu | kUnwind; return; } goto L_004FF7FC; } }
    c.budget -= 1;
L_004FF820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF828u);  if (depth < kMaxDepth) unit_001D(c, 201u, depth + 1u); else { c.pc = 0x00277C70u; return; } if (c.pc != 0x004FF828u) [[unlikely]] return; }
L_004FF828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF830u);  if (depth < kMaxDepth) unit_0075(c, 200u, depth + 1u); else { c.pc = 0x003D74B0u; return; } if (c.pc != 0x004FF830u) [[unlikely]] return; }
L_004FF830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF838u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0022E588u; return; } if (c.pc != 0x004FF838u) [[unlikely]] return; }
L_004FF838:
    set32(c.r[4], ld32((c.r[28].w[0] - 28184u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 28188u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF820u | kUnwind; return; } goto L_004FF820; } }
L_004FF848:
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FF890; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF864u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FF864u) [[unlikely]] return; }
L_004FF864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF86Cu);  if (depth < kMaxDepth) unit_001D(c, 201u, depth + 1u); else { c.pc = 0x00277C70u; return; } if (c.pc != 0x004FF86Cu) [[unlikely]] return; }
L_004FF86C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF874u);  if (depth < kMaxDepth) unit_0075(c, 200u, depth + 1u); else { c.pc = 0x003D74B0u; return; } if (c.pc != 0x004FF874u) [[unlikely]] return; }
L_004FF874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF87Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0022E588u; return; } if (c.pc != 0x004FF87Cu) [[unlikely]] return; }
L_004FF87C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF884u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0076(c, 145u, depth + 1u); else { c.pc = 0x003DA490u; return; } if (c.pc != 0x004FF884u) [[unlikely]] return; }
L_004FF884:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF864u | kUnwind; return; } goto L_004FF864; } }
    c.budget -= 1;
L_004FF890:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[19].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004FF898:
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004FF990; } }
    c.budget -= 1;
L_004FF8A8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF898u | kUnwind; return; } goto L_004FF898; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004FF8D4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF8D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FF8D4u) [[unlikely]] return; }
L_004FF8D4:
    set32(c.r[4], ld32((c.r[28].w[0] - 28860u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FF8F0; } }
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF8F0u); st32((c.r[2].w[0] + 900u), c.f[0]);  if (depth < kMaxDepth) unit_0086(c, 63u, depth + 1u); else { c.pc = 0x00419030u; return; } if (c.pc != 0x004FF8F0u) [[unlikely]] return; }
L_004FF8F0:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 72u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FFA18; } }
L_004FF914:
    set32(c.r[4], ld32((c.r[19].w[0] + 52u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[6].d[0] = 0ull | 32768ull;
    set32(c.r[7], c.r[7].w[0] - 2768u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF938u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001E(c, 10u, depth + 1u); else { c.pc = 0x00278080u; return; } if (c.pc != 0x004FF938u) [[unlikely]] return; }
L_004FF938:
    set32(c.r[2], ld32((c.r[28].w[0] - 28188u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28188u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF808u | kUnwind; return; } goto L_004FF808; } }
L_004FF948:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_004FF954:
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004FF97C; } }
L_004FF960:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF954u | kUnwind; return; } goto L_004FF954; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF848u | kUnwind; return; } goto L_004FF848; } }
L_004FF97C:
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF988u); set32(c.r[4], ld32((c.r[20].w[0] + 52u)));  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x004FF988u) [[unlikely]] return; }
L_004FF988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF960u | kUnwind; return; } goto L_004FF960; } }
L_004FF990:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF99Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x004FF99Cu) [[unlikely]] return; }
L_004FF99C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF9ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FF9ACu) [[unlikely]] return; }
L_004FF9AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF8A8u | kUnwind; return; } goto L_004FF8A8; } }
    c.r[11].d[0] = ld16((c.r[2].w[0] + 544u));
    set32(c.r[9], 0u - 3u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[7], 0u - 17u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[3], 0u - 2049u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2048ll);
    set32(c.r[4], c.r[2].w[0] + 544u);
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st16((c.r[2].w[0] + 544u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld16((c.r[2].w[0] + 544u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st16((c.r[2].w[0] + 544u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[2].w[0] + 544u));
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st16((c.r[2].w[0] + 544u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFA0Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 306u, depth + 1u); else { c.pc = 0x0028AF90u; return; } if (c.pc != 0x004FFA0Cu) [[unlikely]] return; }
L_004FFA0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF8A8u | kUnwind; return; } goto L_004FF8A8; } }
    c.budget -= 1;
L_004FFA18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004FFA40:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BABE0u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 213u, depth); }
L_004FFA50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFA64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x004FFA64u) [[unlikely]] return; }
L_004FFA64:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFA74u); c.r[5].d[0] = c.r[2].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FFA74u) [[unlikely]] return; }
L_004FFA74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FFA90:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BABE0u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 213u, depth); }
L_004FFAA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].d[0] = 0ull & 1ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 72u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFACCu); st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 241u, depth + 1u); else { c.pc = 0x003DB7F0u; return; } if (c.pc != 0x004FFACCu) [[unlikely]] return; }
L_004FFACC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFAD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x004FFAD8u) [[unlikely]] return; }
L_004FFAD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FFAF0:
    set32(c.r[29], c.r[29].w[0] - 384u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[5], c.r[21].w[0] + 68u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFB38u); set32(c.r[4], c.r[20].w[0] + 220u);  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x004FFB38u) [[unlikely]] return; }
L_004FFB38:
    set32(c.r[4], c.r[21].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFB44u); set32(c.r[5], c.r[20].w[0] + 220u);  if (depth < kMaxDepth) unit_0075(c, 183u, depth + 1u); else { c.pc = 0x003D7090u; return; } if (c.pc != 0x004FFB44u) [[unlikely]] return; }
L_004FFB44:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[17], c.r[29].w[0] + 160u);
    set32(c.r[22], c.r[29].w[0] + 168u);
    set32(c.r[23], c.r[29].w[0] + 172u);
    c.budget -= 5;
L_004FFB58:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[21].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004FFB90; } }
    c.budget -= 1;
L_004FFB70:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + 4u);
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 50u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FFB58u | kUnwind; return; } goto L_004FFB58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FFC68; } }
L_004FFB90:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFBA0u); set32(c.r[6], 0u + 200u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x004FFBA0u) [[unlikely]] return; }
L_004FFBA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFBA8u);  if (depth < kMaxDepth) unit_0086(c, 116u, depth + 1u); else { c.pc = 0x00419BE0u; return; } if (c.pc != 0x004FFBA8u) [[unlikely]] return; }
L_004FFBA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] - 12448u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFBC0u); set32(c.r[7], c.r[18].w[0] + 20u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x004FFBC0u) [[unlikely]] return; }
L_004FFBC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFBC8u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x004FFBC8u) [[unlikely]] return; }
L_004FFBC8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFBD4u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0002(c, 154u, depth + 1u); else { c.pc = 0x0020AF90u; return; } if (c.pc != 0x004FFBD4u) [[unlikely]] return; }
L_004FFBD4:
    st32((c.r[21].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[6], c.r[16].w[0] + 1u);
    set32(c.r[4], ld32((c.r[21].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFBE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x004FFBE8u) [[unlikely]] return; }
L_004FFBE8:
    set32(c.r[4], ld32((c.r[21].w[0] + 52u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFBF4u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x004FFBF4u) [[unlikely]] return; }
L_004FFBF4:
    set32(c.r[5], ld32((c.r[21].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 28400u);
    set32(c.r[4], c.r[29].w[0] + 380u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 144u), 0u);
    st32((c.r[17].w[0]), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFC18u); st8((c.r[22].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x004FFC18u) [[unlikely]] return; }
L_004FFC18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFC20u); set32(c.r[4], c.r[29].w[0] + 380u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x004FFC20u) [[unlikely]] return; }
L_004FFC20:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFC38u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FFC38u) [[unlikely]] return; }
L_004FFC38:
    set32(c.r[4], c.r[29].w[0] + 380u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFC44u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x004FFC44u) [[unlikely]] return; }
L_004FFC44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFC4Cu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x004FFC4Cu) [[unlikely]] return; }
L_004FFC4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFC54u); set32(c.r[4], ld32((c.r[21].w[0] + 52u)));  if (depth < kMaxDepth) unit_001E(c, 31u, depth + 1u); else { c.pc = 0x002783D0u; return; } if (c.pc != 0x004FFC54u) [[unlikely]] return; }
L_004FFC54:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFC60u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x004FFC60u) [[unlikely]] return; }
L_004FFC60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FFB70u | kUnwind; return; } goto L_004FFB70; } }
L_004FFC68:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_004FFCA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004FFD74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 17792u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 28180u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_004FFD7C; } }
L_004FFCDC:
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FFD00; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FFD00; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFD00u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FFD00u) [[unlikely]] return; }
L_004FFD00:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004FFD08:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FFD20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFD1Cu);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x004FFD1Cu) [[unlikely]] return; }
L_004FFD1C:
    st32((c.r[18].w[0] + 52u), 0u);
    c.budget -= 1;
L_004FFD20:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FFD08u | kUnwind; return; } goto L_004FFD08; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004FFD5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004FFD5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_004FFD5C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004FFD74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFD74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004FFD74u) [[unlikely]] return; }
L_004FFD74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004FFD84; } }
L_004FFD7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28180u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FFCDCu | kUnwind; return; } goto L_004FFCDC; } }
L_004FFD84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004FFDA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[10], 0u - 2u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[11].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[7], 0u - 3u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[6], c.r[6].w[0] - 12672u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 17792u);
    c.r[9].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[5].d[0] = 0ull & 1ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[9].d[0] = c.r[9].d[0] & c.r[10].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[11].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 72u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[10].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 72u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    c.budget -= 45;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 48u), 0u);  c.pc = t; return; }
L_004FFE60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_004FFE70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFE88u); set32(c.r[4], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0075(c, 184u, depth + 1u); else { c.pc = 0x003D70A0u; return; } if (c.pc != 0x004FFE88u) [[unlikely]] return; }
L_004FFE88:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FFF60; } }
L_004FFE94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 29008u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FFF8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 16036u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FFED4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFEC4u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 136u, depth + 1u); else { c.pc = 0x002BD120u; return; } if (c.pc != 0x004FFEC4u) [[unlikely]] return; }
L_004FFEC4:
    set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFED4u); set32(c.r[5], c.r[5].w[0] - 16036u);  if (depth < kMaxDepth) unit_0020(c, 103u, depth + 1u); else { c.pc = 0x002815A0u; return; } if (c.pc != 0x004FFED4u) [[unlikely]] return; }
L_004FFED4:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (t) { goto L_004FFFBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st16((c.r[2].w[0] - 19174u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_004FFEE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st16((c.r[2].w[0] - 19172u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 36u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 40u));
    c.r[1].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = ld16((c.r[16].w[0] + 44u));  if (t) { goto L_004FFF08; } }
    set32(c.r[3], 0u + 20u);
    c.budget -= 1;
L_004FFF08:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[1].d[0] = c.r[4].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[2].w[0] + 23518u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004FFF20; } }
    set32(c.r[4], 0u + 5u);
    c.budget -= 1;
L_004FFF20:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[2].w[0] + 23522u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_004FFF38; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_004FFF38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFF48u); st16((c.r[2].w[0] + 23520u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x004FFF48u) [[unlikely]] return; }
L_004FFF48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 22742u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004FFFD0; } }
L_004FFF58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_004FFFEC; } }
L_004FFF60:
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 36u), 0u);
    st32((c.r[29].w[0] + 40u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFF84u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FFF84u) [[unlikely]] return; }
L_004FFF84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FFE94u | kUnwind; return; } goto L_004FFE94; } }
L_004FFF8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFF9Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 136u, depth + 1u); else { c.pc = 0x002BD120u; return; } if (c.pc != 0x004FFF9Cu) [[unlikely]] return; }
L_004FFF9C:
    set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00620000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFFACu); set32(c.r[5], c.r[5].w[0] - 29008u);  if (depth < kMaxDepth) unit_0020(c, 103u, depth + 1u); else { c.pc = 0x002815A0u; return; } if (c.pc != 0x004FFFACu) [[unlikely]] return; }
L_004FFFAC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[28].w[0] - 29112u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29108u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FFED4u | kUnwind; return; } goto L_004FFED4; } }
L_004FFFBC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].d[0] = ld16((c.r[3].w[0] - 19176u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] - 19174u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FFEE8u | kUnwind; return; } goto L_004FFEE8; } }
L_004FFFD0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFFE4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FFFE4u) [[unlikely]] return; }
L_004FFFE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FFF58u | kUnwind; return; } goto L_004FFF58; } }
L_004FFFEC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
}

}

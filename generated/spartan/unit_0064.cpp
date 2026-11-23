#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0064[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0,
    0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0,
    0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0,
    0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0,
    0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58,
    0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63,
    0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0,
    0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77,
    0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0,
    0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0,
    0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0,
    0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0,
    0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0,
    0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0,
    0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0,
    0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0,
    0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121,
    0, 0, 0, 0, 0, 0, 122, 123, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 134, 0, 0, 0,
    0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 142, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0,
    0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 160, 0, 0, 161, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166,
    0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0,
    0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 178, 179, 0,
    0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 182, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 186, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0,
    200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0,
    0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0,
    289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296,
    0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0,
    0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0,
    0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0,
    315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0,
    0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 357, 0,
    0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 365, 0,
    0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 382, 0,
};

void unit_0064(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00390000;
    case 2u: goto L_00390004;
    case 3u: goto L_00390028;
    case 4u: goto L_00390030;
    case 5u: goto L_0039004C;
    case 6u: goto L_00390054;
    case 7u: goto L_0039005C;
    case 8u: goto L_00390080;
    case 9u: goto L_0039009C;
    case 10u: goto L_003900B8;
    case 11u: goto L_003900C8;
    case 12u: goto L_003900E0;
    case 13u: goto L_003900EC;
    case 14u: goto L_00390108;
    case 15u: goto L_00390114;
    case 16u: goto L_00390128;
    case 17u: goto L_0039014C;
    case 18u: goto L_00390158;
    case 19u: goto L_00390178;
    case 20u: goto L_0039019C;
    case 21u: goto L_003901A8;
    case 22u: goto L_003901C4;
    case 23u: goto L_003901E8;
    case 24u: goto L_003901F4;
    case 25u: goto L_00390214;
    case 26u: goto L_00390238;
    case 27u: goto L_00390244;
    case 28u: goto L_00390264;
    case 29u: goto L_00390288;
    case 30u: goto L_00390294;
    case 31u: goto L_003902B0;
    case 32u: goto L_003902D4;
    case 33u: goto L_003902E0;
    case 34u: goto L_00390300;
    case 35u: goto L_00390324;
    case 36u: goto L_00390330;
    case 37u: goto L_00390350;
    case 38u: goto L_00390374;
    case 39u: goto L_00390380;
    case 40u: goto L_003903A0;
    case 41u: goto L_003903C4;
    case 42u: goto L_003903D0;
    case 43u: goto L_003903F0;
    case 44u: goto L_00390414;
    case 45u: goto L_00390420;
    case 46u: goto L_00390440;
    case 47u: goto L_00390464;
    case 48u: goto L_00390470;
    case 49u: goto L_00390490;
    case 50u: goto L_003904B4;
    case 51u: goto L_003904C0;
    case 52u: goto L_003904E0;
    case 53u: goto L_00390504;
    case 54u: goto L_00390510;
    case 55u: goto L_00390530;
    case 56u: goto L_00390554;
    case 57u: goto L_00390560;
    case 58u: goto L_0039057C;
    case 59u: goto L_003905A0;
    case 60u: goto L_003905AC;
    case 61u: goto L_003905CC;
    case 62u: goto L_003905F0;
    case 63u: goto L_003905FC;
    case 64u: goto L_0039061C;
    case 65u: goto L_00390640;
    case 66u: goto L_0039064C;
    case 67u: goto L_0039066C;
    case 68u: goto L_00390690;
    case 69u: goto L_0039069C;
    case 70u: goto L_003906BC;
    case 71u: goto L_003906E0;
    case 72u: goto L_003906EC;
    case 73u: goto L_00390708;
    case 74u: goto L_0039072C;
    case 75u: goto L_00390738;
    case 76u: goto L_00390758;
    case 77u: goto L_0039077C;
    case 78u: goto L_00390788;
    case 79u: goto L_003907A8;
    case 80u: goto L_003907CC;
    case 81u: goto L_003907D8;
    case 82u: goto L_003907F8;
    case 83u: goto L_0039081C;
    case 84u: goto L_00390828;
    case 85u: goto L_00390848;
    case 86u: goto L_0039086C;
    case 87u: goto L_00390878;
    case 88u: goto L_00390898;
    case 89u: goto L_003908BC;
    case 90u: goto L_003908C8;
    case 91u: goto L_003908E8;
    case 92u: goto L_0039090C;
    case 93u: goto L_00390918;
    case 94u: goto L_00390938;
    case 95u: goto L_0039095C;
    case 96u: goto L_00390968;
    case 97u: goto L_00390984;
    case 98u: goto L_003909A8;
    case 99u: goto L_003909B4;
    case 100u: goto L_003909D4;
    case 101u: goto L_003909F8;
    case 102u: goto L_00390A04;
    case 103u: goto L_00390A24;
    case 104u: goto L_00390A48;
    case 105u: goto L_00390A54;
    case 106u: goto L_00390A74;
    case 107u: goto L_00390A98;
    case 108u: goto L_00390AA4;
    case 109u: goto L_00390AC4;
    case 110u: goto L_00390AE8;
    case 111u: goto L_00390AF4;
    case 112u: goto L_00390B14;
    case 113u: goto L_00390B38;
    case 114u: goto L_00390B44;
    case 115u: goto L_00390B64;
    case 116u: goto L_00390B88;
    case 117u: goto L_00390BA4;
    case 118u: goto L_00390BB0;
    case 119u: goto L_00390BCC;
    case 120u: goto L_00390BF0;
    case 121u: goto L_00390BFC;
    case 122u: goto L_00390C18;
    case 123u: goto L_00390C1C;
    case 124u: goto L_00390C24;
    case 125u: goto L_00390C40;
    case 126u: goto L_00390C50;
    case 127u: goto L_00390C80;
    case 128u: goto L_00390C98;
    case 129u: goto L_00390CB0;
    case 130u: goto L_00390CBC;
    case 131u: goto L_00390CC4;
    case 132u: goto L_00390CDC;
    case 133u: goto L_00390CE4;
    case 134u: goto L_00390CF0;
    case 135u: goto L_00390D08;
    case 136u: goto L_00390D34;
    case 137u: goto L_00390D48;
    case 138u: goto L_00390D80;
    case 139u: goto L_00390D90;
    case 140u: goto L_00390E9C;
    case 141u: goto L_00391160;
    case 142u: goto L_00391184;
    case 143u: goto L_00391188;
    case 144u: goto L_003911A0;
    case 145u: goto L_003911D8;
    case 146u: goto L_00391254;
    case 147u: goto L_00391260;
    case 148u: goto L_0039127C;
    case 149u: goto L_003912A4;
    case 150u: goto L_003912C4;
    case 151u: goto L_003912E4;
    case 152u: goto L_00391304;
    case 153u: goto L_00391310;
    case 154u: goto L_00391334;
    case 155u: goto L_00391344;
    case 156u: goto L_00391360;
    case 157u: goto L_00391370;
    case 158u: goto L_003913C0;
    case 159u: goto L_003913F0;
    case 160u: goto L_00391408;
    case 161u: goto L_00391414;
    case 162u: goto L_00391418;
    case 163u: goto L_0039164C;
    case 164u: goto L_00391654;
    case 165u: goto L_0039166C;
    case 166u: goto L_0039167C;
    case 167u: goto L_0039168C;
    case 168u: goto L_0039169C;
    case 169u: goto L_003916C0;
    case 170u: goto L_003916F8;
    case 171u: goto L_00391704;
    case 172u: goto L_0039170C;
    case 173u: goto L_00391714;
    case 174u: goto L_00391730;
    case 175u: goto L_00391738;
    case 176u: goto L_00391750;
    case 177u: goto L_0039175C;
    case 178u: goto L_00391774;
    case 179u: goto L_00391778;
    case 180u: goto L_0039178C;
    case 181u: goto L_003917C0;
    case 182u: goto L_00391818;
    case 183u: goto L_0039181C;
    case 184u: goto L_00391830;
    case 185u: goto L_00391868;
    case 186u: goto L_00391898;
    case 187u: goto L_0039189C;
    case 188u: goto L_003918BC;
    case 189u: goto L_003918C4;
    case 190u: goto L_003918E0;
    case 191u: goto L_003918EC;
    case 192u: goto L_0039192C;
    case 193u: goto L_00391938;
    case 194u: goto L_0039194C;
    case 195u: goto L_00391954;
    case 196u: goto L_00391970;
    case 197u: goto L_003919A0;
    case 198u: goto L_003919DC;
    case 199u: goto L_003919EC;
    case 200u: goto L_00391A00;
    case 201u: goto L_00391A10;
    case 202u: goto L_00391A40;
    case 203u: goto L_00391A60;
    case 204u: goto L_00391A90;
    case 205u: goto L_00391AA0;
    case 206u: goto L_00391AD8;
    case 207u: goto L_00391B08;
    case 208u: goto L_00391B28;
    case 209u: goto L_00391B90;
    case 210u: goto L_00391BA0;
    case 211u: goto L_00391BE8;
    case 212u: goto L_00391C10;
    case 213u: goto L_00391C30;
    case 214u: goto L_00391C40;
    case 215u: goto L_00391C7C;
    case 216u: goto L_00391CB0;
    case 217u: goto L_00391CE0;
    case 218u: goto L_00391D10;
    case 219u: goto L_00391D4C;
    case 220u: goto L_00391D5C;
    case 221u: goto L_00391D70;
    case 222u: goto L_00391D80;
    case 223u: goto L_00391DA8;
    case 224u: goto L_00391DB8;
    case 225u: goto L_00391DD0;
    case 226u: goto L_00391DE0;
    case 227u: goto L_00391E18;
    case 228u: goto L_00391E40;
    case 229u: goto L_00391E50;
    case 230u: goto L_00391E68;
    case 231u: goto L_00391E78;
    case 232u: goto L_00391EB0;
    case 233u: goto L_00391EC8;
    case 234u: goto L_00391EF0;
    case 235u: goto L_00391F10;
    case 236u: goto L_00391F20;
    case 237u: goto L_00391F5C;
    case 238u: goto L_00391F90;
    case 239u: goto L_00391FC0;
    case 240u: goto L_00391FF0;
    case 241u: goto L_0039202C;
    case 242u: goto L_0039203C;
    case 243u: goto L_00392050;
    case 244u: goto L_00392060;
    case 245u: goto L_00392088;
    case 246u: goto L_00392098;
    case 247u: goto L_003920C0;
    case 248u: goto L_003920D0;
    case 249u: goto L_00392108;
    case 250u: goto L_00392130;
    case 251u: goto L_00392140;
    case 252u: goto L_00392168;
    case 253u: goto L_00392178;
    case 254u: goto L_003921B0;
    case 255u: goto L_003921B8;
    case 256u: goto L_003921D0;
    case 257u: goto L_003921F8;
    case 258u: goto L_00392218;
    case 259u: goto L_00392228;
    case 260u: goto L_00392268;
    case 261u: goto L_00392298;
    case 262u: goto L_003922C8;
    case 263u: goto L_00392300;
    case 264u: goto L_00392334;
    case 265u: goto L_00392378;
    case 266u: goto L_003923C4;
    case 267u: goto L_003923D4;
    case 268u: goto L_003923DC;
    case 269u: goto L_003923F8;
    case 270u: goto L_00392490;
    case 271u: goto L_003924EC;
    case 272u: goto L_00392558;
    case 273u: goto L_003925C8;
    case 274u: goto L_00392628;
    case 275u: goto L_003926B0;
    case 276u: goto L_00392708;
    case 277u: goto L_00392750;
    case 278u: goto L_00392758;
    case 279u: goto L_00392790;
    case 280u: goto L_00392800;
    case 281u: goto L_00392860;
    case 282u: goto L_003928A8;
    case 283u: goto L_003928B0;
    case 284u: goto L_00392950;
    case 285u: goto L_003929CC;
    case 286u: goto L_003929F8;
    case 287u: goto L_00392A2C;
    case 288u: goto L_00392AE0;
    case 289u: goto L_00392B00;
    case 290u: goto L_00392B10;
    case 291u: goto L_00392B80;
    case 292u: goto L_00392B9C;
    case 293u: goto L_00392BB4;
    case 294u: goto L_00392BC8;
    case 295u: goto L_00392BE4;
    case 296u: goto L_00392BFC;
    case 297u: goto L_00392C10;
    case 298u: goto L_00392C2C;
    case 299u: goto L_00392C44;
    case 300u: goto L_00392C58;
    case 301u: goto L_00392C74;
    case 302u: goto L_00392C8C;
    case 303u: goto L_00392CA0;
    case 304u: goto L_00392CBC;
    case 305u: goto L_00392CD4;
    case 306u: goto L_00392CE8;
    case 307u: goto L_00392D04;
    case 308u: goto L_00392D1C;
    case 309u: goto L_00392D30;
    case 310u: goto L_00392D4C;
    case 311u: goto L_00392DE0;
    case 312u: goto L_00392E10;
    case 313u: goto L_00392E40;
    case 314u: goto L_00392E64;
    case 315u: goto L_00392E80;
    case 316u: goto L_00392EA0;
    case 317u: goto L_00392EC0;
    case 318u: goto L_00392ED0;
    case 319u: goto L_00392FF0;
    case 320u: goto L_00393028;
    case 321u: goto L_003930A4;
    case 322u: goto L_00393100;
    case 323u: goto L_0039314C;
    case 324u: goto L_00393178;
    case 325u: goto L_003931E0;
    case 326u: goto L_00393260;
    case 327u: goto L_003932C0;
    case 328u: goto L_00393334;
    case 329u: goto L_00393398;
    case 330u: goto L_00393400;
    case 331u: goto L_00393438;
    case 332u: goto L_00393468;
    case 333u: goto L_003934C8;
    case 334u: goto L_00393538;
    case 335u: goto L_00393598;
    case 336u: goto L_00393610;
    case 337u: goto L_00393680;
    case 338u: goto L_003936E0;
    case 339u: goto L_00393760;
    case 340u: goto L_003937A0;
    case 341u: goto L_00393954;
    case 342u: goto L_003939C0;
    case 343u: goto L_003939E0;
    case 344u: goto L_00393A0C;
    case 345u: goto L_00393A78;
    case 346u: goto L_00393A98;
    case 347u: goto L_00393AC4;
    case 348u: goto L_00393B2C;
    case 349u: goto L_00393B4C;
    case 350u: goto L_00393B78;
    case 351u: goto L_00393C40;
    case 352u: goto L_00393C50;
    case 353u: goto L_00393CBC;
    case 354u: goto L_00393CC8;
    case 355u: goto L_00393CD8;
    case 356u: goto L_00393CE8;
    case 357u: goto L_00393CF8;
    case 358u: goto L_00393D08;
    case 359u: goto L_00393D18;
    case 360u: goto L_00393D28;
    case 361u: goto L_00393D38;
    case 362u: goto L_00393D48;
    case 363u: goto L_00393D58;
    case 364u: goto L_00393D68;
    case 365u: goto L_00393D78;
    case 366u: goto L_00393D88;
    case 367u: goto L_00393D98;
    case 368u: goto L_00393DF8;
    case 369u: goto L_00393E70;
    case 370u: goto L_00393E9C;
    case 371u: goto L_00393EA8;
    case 372u: goto L_00393EB4;
    case 373u: goto L_00393EC0;
    case 374u: goto L_00393ECC;
    case 375u: goto L_00393ED8;
    case 376u: goto L_00393F2C;
    case 377u: goto L_00393F60;
    case 378u: goto L_00393FA8;
    case 379u: goto L_00393FB8;
    case 380u: goto L_00393FE0;
    case 381u: goto L_00393FEC;
    case 382u: goto L_00393FF8;
    default: bad_entry(c, 0x00390000u); return;
    }
L_00390000:
    st8((c.r[20].w[0] + 87u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00390004:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390028u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 240u, depth + 1u); else { c.pc = 0x00391FF0u; return; } if (c.pc != 0x00390028u) [[unlikely]] return; }
L_00390028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 56u), c.f[0]);  if (t) { goto L_00390C18; } }
L_00390030:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
L_0039004C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390054u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 240u, depth + 1u); else { c.pc = 0x00391FF0u; return; } if (c.pc != 0x00390054u) [[unlikely]] return; }
L_00390054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 52u), c.f[0]);  if (t) { goto L_00390C18; } }
L_0039005C:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390080u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x00390080u) [[unlikely]] return; }
L_00390080:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039009Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0039009Cu) [[unlikely]] return; }
L_0039009C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003900B8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x003900B8u) [[unlikely]] return; }
L_003900B8:
    st8((c.r[20].w[0] + 60u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[20].w[0] + 61u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 62u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00390C18; } }
L_003900C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003900E0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x003900E0u) [[unlikely]] return; }
L_003900E0:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003900ECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x003900ECu) [[unlikely]] return; }
L_003900EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390108u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x00390108u) [[unlikely]] return; }
L_00390108:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390114u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00390114u) [[unlikely]] return; }
L_00390114:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00390C18; } }
L_00390128:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039014Cu); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x0039014Cu) [[unlikely]] return; }
L_0039014C:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390158u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00390158u) [[unlikely]] return; }
L_00390158:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 119u));
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], 0u - 49u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 119u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_00390178:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039019Cu); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x0039019Cu) [[unlikely]] return; }
L_0039019C:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003901A8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x003901A8u) [[unlikely]] return; }
L_003901A8:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 119u));
    set32(c.r[3], 0u - 4u);
    c.r[4].d[0] = c.r[2].d[0] & 3ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 119u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_003901C4:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003901E8u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x003901E8u) [[unlikely]] return; }
L_003901E8:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003901F4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x003901F4u) [[unlikely]] return; }
L_003901F4:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 119u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 6);
    set32(c.r[3], 0u - 65u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 119u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_00390214:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390238u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x00390238u) [[unlikely]] return; }
L_00390238:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390244u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00390244u) [[unlikely]] return; }
L_00390244:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 119u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 7);
    set32(c.r[3], 0u - 129u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 119u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_00390264:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390288u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x00390288u) [[unlikely]] return; }
L_00390288:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390294u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00390294u) [[unlikely]] return; }
L_00390294:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 120u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 120u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_003902B0:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003902D4u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x003902D4u) [[unlikely]] return; }
L_003902D4:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003902E0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x003902E0u) [[unlikely]] return; }
L_003902E0:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 120u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 120u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_00390300:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390324u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x00390324u) [[unlikely]] return; }
L_00390324:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390330u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00390330u) [[unlikely]] return; }
L_00390330:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 120u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 120u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_00390350:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390374u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x00390374u) [[unlikely]] return; }
L_00390374:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390380u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00390380u) [[unlikely]] return; }
L_00390380:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 120u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 120u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_003903A0:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003903C4u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x003903C4u) [[unlikely]] return; }
L_003903C4:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003903D0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x003903D0u) [[unlikely]] return; }
L_003903D0:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 119u));
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 13u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 119u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_003903F0:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390414u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x00390414u) [[unlikely]] return; }
L_00390414:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390420u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00390420u) [[unlikely]] return; }
L_00390420:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 120u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], 0u - 17u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 120u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_00390440:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390464u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x00390464u) [[unlikely]] return; }
L_00390464:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390470u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00390470u) [[unlikely]] return; }
L_00390470:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 120u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 5);
    set32(c.r[3], 0u - 33u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 120u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_00390490:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003904B4u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x003904B4u) [[unlikely]] return; }
L_003904B4:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003904C0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x003904C0u) [[unlikely]] return; }
L_003904C0:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 120u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 6);
    set32(c.r[3], 0u - 65u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 120u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_003904E0:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390504u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x00390504u) [[unlikely]] return; }
L_00390504:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390510u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00390510u) [[unlikely]] return; }
L_00390510:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 120u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 7);
    set32(c.r[3], 0u - 129u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 120u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_00390530:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390554u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x00390554u) [[unlikely]] return; }
L_00390554:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390560u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00390560u) [[unlikely]] return; }
L_00390560:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 121u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 121u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_0039057C:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003905A0u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x003905A0u) [[unlikely]] return; }
L_003905A0:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003905ACu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x003905ACu) [[unlikely]] return; }
L_003905AC:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 121u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 121u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_003905CC:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003905F0u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x003905F0u) [[unlikely]] return; }
L_003905F0:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003905FCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x003905FCu) [[unlikely]] return; }
L_003905FC:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 121u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 121u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_0039061C:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390640u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x00390640u) [[unlikely]] return; }
L_00390640:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039064Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x0039064Cu) [[unlikely]] return; }
L_0039064C:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 121u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 6);
    set32(c.r[3], 0u - 65u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 121u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_0039066C:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390690u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x00390690u) [[unlikely]] return; }
L_00390690:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039069Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x0039069Cu) [[unlikely]] return; }
L_0039069C:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 121u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 7);
    set32(c.r[3], 0u - 129u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 121u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_003906BC:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003906E0u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x003906E0u) [[unlikely]] return; }
L_003906E0:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003906ECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x003906ECu) [[unlikely]] return; }
L_003906EC:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 122u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 122u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_00390708:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039072Cu); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x0039072Cu) [[unlikely]] return; }
L_0039072C:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390738u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00390738u) [[unlikely]] return; }
L_00390738:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 122u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 122u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_00390758:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039077Cu); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x0039077Cu) [[unlikely]] return; }
L_0039077C:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390788u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00390788u) [[unlikely]] return; }
L_00390788:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 122u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 122u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_003907A8:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003907CCu); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x003907CCu) [[unlikely]] return; }
L_003907CC:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003907D8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x003907D8u) [[unlikely]] return; }
L_003907D8:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 122u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 122u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_003907F8:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039081Cu); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x0039081Cu) [[unlikely]] return; }
L_0039081C:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390828u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00390828u) [[unlikely]] return; }
L_00390828:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 122u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], 0u - 17u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 122u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_00390848:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039086Cu); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x0039086Cu) [[unlikely]] return; }
L_0039086C:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390878u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00390878u) [[unlikely]] return; }
L_00390878:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 122u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 5);
    set32(c.r[3], 0u - 33u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 122u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_00390898:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003908BCu); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x003908BCu) [[unlikely]] return; }
L_003908BC:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003908C8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x003908C8u) [[unlikely]] return; }
L_003908C8:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 122u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 6);
    set32(c.r[3], 0u - 65u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 122u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_003908E8:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039090Cu); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x0039090Cu) [[unlikely]] return; }
L_0039090C:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390918u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00390918u) [[unlikely]] return; }
L_00390918:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 122u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 7);
    set32(c.r[3], 0u - 129u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 122u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_00390938:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039095Cu); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x0039095Cu) [[unlikely]] return; }
L_0039095C:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390968u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00390968u) [[unlikely]] return; }
L_00390968:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 123u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 123u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_00390984:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003909A8u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x003909A8u) [[unlikely]] return; }
L_003909A8:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003909B4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x003909B4u) [[unlikely]] return; }
L_003909B4:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 123u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 123u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_003909D4:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003909F8u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x003909F8u) [[unlikely]] return; }
L_003909F8:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390A04u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00390A04u) [[unlikely]] return; }
L_00390A04:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 123u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[3], 0u - 5u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 123u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_00390A24:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390A48u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x00390A48u) [[unlikely]] return; }
L_00390A48:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390A54u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00390A54u) [[unlikely]] return; }
L_00390A54:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 123u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 123u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_00390A74:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390A98u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x00390A98u) [[unlikely]] return; }
L_00390A98:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390AA4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00390AA4u) [[unlikely]] return; }
L_00390AA4:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 121u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], 0u - 9u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 121u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_00390AC4:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390AE8u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x00390AE8u) [[unlikely]] return; }
L_00390AE8:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390AF4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00390AF4u) [[unlikely]] return; }
L_00390AF4:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 121u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 4);
    set32(c.r[3], 0u - 17u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 121u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_00390B14:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390B38u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x00390B38u) [[unlikely]] return; }
L_00390B38:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390B44u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00390B44u) [[unlikely]] return; }
L_00390B44:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 121u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 5);
    set32(c.r[3], 0u - 33u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 121u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_00390B64:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390B88u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 240u, depth + 1u); else { c.pc = 0x00391FF0u; return; } if (c.pc != 0x00390B88u) [[unlikely]] return; }
L_00390B88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[20].w[0] + 124u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390BA4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x00390BA4u) [[unlikely]] return; }
L_00390BA4:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390BB0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00390BB0u) [[unlikely]] return; }
L_00390BB0:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 130u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 130u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00390C18; } }
L_00390BCC:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390BF0u); st16((c.r[20].w[0] + 128u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x00390BF0u) [[unlikely]] return; }
L_00390BF0:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390BFCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00390BFCu) [[unlikely]] return; }
L_00390BFC:
    c.r[5].d[0] = ld8((c.r[20].w[0] + 130u));
    c.r[3].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[20].w[0] + 130u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00390C18:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29128u));
    c.budget -= 1;
L_00390C1C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00390C68; } }
L_00390C24:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00390C68; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00390D24; } }
L_00390C40:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 4;
L_00390C50:
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], 0u + 10u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00390C24u | kUnwind; return; } goto L_00390C24; } }
    c.budget -= 1;
L_00390C68:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F0A4u | kUnwind; return; } [[clang::musttail]] return unit_0063(c, 173u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00390D48; } }
L_00390C80:
    set32(c.r[8], c.r[11].w[0] << 1);
    set32(c.r[9], c.r[17].w[0] + c.r[8].w[0]);
    c.r[8].d[0] = ld16((c.r[9].w[0] + 40u));
    c.r[8].d[0] = c.r[8].d[0] | 2ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[9].w[0] + 40u), static_cast<std::uint16_t>(c.r[8].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F480u | kUnwind; return; } [[clang::musttail]] return unit_0063(c, 191u, depth); } }
L_00390C98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390CB0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x00390CB0u) [[unlikely]] return; }
L_00390CB0:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390CBCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00390CBCu) [[unlikely]] return; }
L_00390CBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0038F5D4u | kUnwind; return; } [[clang::musttail]] return unit_0063(c, 200u, depth); } }
L_00390CC4:
    c.r[6].d[0] = c.r[23].d[0] & 65535ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390CDCu); c.r[4].d[0] = c.r[22].d[0] & 255ull;  if (depth < kMaxDepth) unit_0032(c, 7u, depth + 1u); else { c.pc = 0x002C81E0u; return; } if (c.pc != 0x00390CDCu) [[unlikely]] return; }
L_00390CDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00390C18u | kUnwind; return; } goto L_00390C18; } }
L_00390CE4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 117u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00390C18u | kUnwind; return; } goto L_00390C18; } }
L_00390CF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00390D08u); set32(c.r[7], c.r[29].w[0] + 206u);  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x00390D08u) [[unlikely]] return; }
L_00390D08:
    st8((c.r[20].w[0] + 88u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 206u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00390C18u | kUnwind; return; } goto L_00390C18; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 88u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00390C18u | kUnwind; return; } goto L_00390C18; } }
L_00390D24:
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00390D34u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00390D34u) [[unlikely]] return; }
L_00390D34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00390C40u | kUnwind; return; } goto L_00390C40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00390C50u | kUnwind; return; } goto L_00390C50; } }
    c.budget -= 1;
L_00390D48:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00390D80:
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00390D90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = ld8((c.r[3].w[0] - 17640u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00390EA4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00390F74; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00391058; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00391070; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00391154; } }
    st16((c.r[4].w[0] + 11548u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 11552u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00390DEC; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00390E08; } }
L_00390DEC:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_00390E08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[5].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00390E3C; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 11552u), c.r[5].w[0]);  if (t) { goto L_00390E58; } }
L_00390E3C:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 11552u), c.r[5].w[0]);
    c.budget -= 7;
L_00390E58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[5].d[0] = c.r[3].d[0] | 26214ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FAA0000u);
    st32((c.r[4].w[0] + 11564u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 15729ull;
    st32((c.r[4].w[0] + 11560u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[4].w[0] + 11568u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 11485u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st8((c.r[4].w[0] + 11485u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 11486u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st8((c.r[4].w[0] + 11486u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 11487u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st8((c.r[4].w[0] + 11487u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 17;
L_00390E9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00391154; } }
L_00390EA4:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 11548u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00390EBC; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00390ED8; } }
L_00390EBC:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_00390ED8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3FAA0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[5].d[0] = c.r[5].d[0] | 40894ull;
    c.f[1] = c.r[5].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00390F10; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_00390F2C; } }
L_00390F10:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 7;
L_00390F2C:
    st16((c.r[4].w[0] + 11548u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[7].d[0] = ld8((c.r[4].w[0] + 11485u));
    c.r[5].d[0] = c.r[3].d[0] | 52429ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[7], c.r[7].w[0] << 1);
    st8((c.r[4].w[0] + 11485u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 11486u));
    set32(c.r[7], c.r[7].w[0] << 1);
    st8((c.r[4].w[0] + 11486u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 11487u));
    set32(c.r[7], c.r[7].w[0] << 1);
    st8((c.r[4].w[0] + 11487u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 11564u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 11560u), c.r[5].w[0]);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 11568u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00390E9Cu | kUnwind; return; } goto L_00390E9C; } }
L_00390F74:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 11548u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00390F8C; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00390FA8; } }
L_00390F8C:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_00390FA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3FAA0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.r[5].d[0] = c.r[5].d[0] | 40894ull;
    c.f[1] = c.r[5].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00390FE0; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_00390FFC; } }
L_00390FE0:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 7;
L_00390FFC:
    st16((c.r[4].w[0] + 11548u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 11485u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));
    st8((c.r[4].w[0] + 11485u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 11486u));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));
    st8((c.r[4].w[0] + 11486u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[8].d[0] = ld8((c.r[4].w[0] + 11487u));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));
    st8((c.r[4].w[0] + 11487u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 11564u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 11560u), c.r[5].w[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 11568u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00390E9Cu | kUnwind; return; } goto L_00390E9C; } }
L_00391058:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[4].w[0] + 11564u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 11560u), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 11568u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00390E9Cu | kUnwind; return; } goto L_00390E9C; } }
L_00391070:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 11548u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00391088; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003910A4; } }
L_00391088:
    set32(c.r[5], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.f[0] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_003910A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = c.r[5].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::mul(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003910D8; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[5].d[0] & 65535ull;  if (t) { goto L_003910F4; } }
L_003910D8:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 7;
L_003910F4:
    st16((c.r[4].w[0] + 11548u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 11564u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F930000u);
    c.r[5].d[0] = c.r[3].d[0] | 13107ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[4].w[0] + 11560u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 11568u), c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 11485u));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    st8((c.r[4].w[0] + 11485u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 11486u));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    st8((c.r[4].w[0] + 11486u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 11487u));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 11487u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00390E9Cu | kUnwind; return; } goto L_00390E9C; } }
L_00391154:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00391160:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], 0u - 1u);
    c.budget -= 9;
L_00391184:
    st8((c.r[28].w[0] - 29128u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00391188:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003911A0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x003911A0u) [[unlikely]] return; }
L_003911A0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003911C0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391188u | kUnwind; return; } goto L_00391188; } }
    c.budget -= 1;
L_003911C0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_003911D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_003911DC; } }
L_003911D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003911D8u); set32(c.r[4], c.r[28].w[0] - 29160u);  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x003911D8u) [[unlikely]] return; }
L_003911D8:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_003911DC:
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], 0u + 184u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0039131C; } }
    set32(c.r[3], 0u + 183u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003912EC; } }
    set32(c.r[3], 0u + 182u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003912CC; } }
    set32(c.r[3], 0u + 181u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003912AC; } }
    set32(c.r[3], 0u + 180u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0039128C; } }
    set32(c.r[3], 0u + 179u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0039123C; } }
    set32(c.r[3], 0u + 189u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003913D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[28].w[0] - 29128u));  if (t) { goto L_0039133C; } }
L_0039123C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391254u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x00391254u) [[unlikely]] return; }
L_00391254:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391260u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00391260u) [[unlikely]] return; }
L_00391260:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039127Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x0039127Cu) [[unlikely]] return; }
L_0039127C:
    c.r[3].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 11484u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00391338; } }
L_0039128C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003912A4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x003912A4u) [[unlikely]] return; }
L_003912A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 11547u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00391338; } }
L_003912AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003912C4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x003912C4u) [[unlikely]] return; }
L_003912C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 11548u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00391338; } }
L_003912CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003912E4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x003912E4u) [[unlikely]] return; }
L_003912E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 11552u), c.r[2].w[0]);  if (t) { goto L_00391338; } }
L_003912EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391304u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x00391304u) [[unlikely]] return; }
L_00391304:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391310u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00391310u) [[unlikely]] return; }
L_00391310:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 11556u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00391338; } }
L_0039131C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 15728u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391334u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 218u, depth + 1u); else { c.pc = 0x00391D10u; return; } if (c.pc != 0x00391334u) [[unlikely]] return; }
L_00391334:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00391338:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29128u));
    c.budget -= 1;
L_0039133C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00391388; } }
L_00391344:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00391388; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003913B0; } }
L_00391360:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 4;
L_00391370:
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], 0u + 10u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391344u | kUnwind; return; } goto L_00391344; } }
    c.budget -= 1;
L_00391388:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391184u | kUnwind; return; } goto L_00391184; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_003913D0; } }
    breakpoint(c, 0x003913A4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003913D0; } }
L_003913B0:
    set32(c.r[25], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003913C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003913C0u) [[unlikely]] return; }
L_003913C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391360u | kUnwind; return; } goto L_00391360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391370u | kUnwind; return; } goto L_00391370; } }
L_003913D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003913F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391408u); set32(c.r[4], c.r[28].w[0] - 30636u);  if (depth < kMaxDepth) unit_0011(c, 378u, depth + 1u); else { c.pc = 0x00247A70u; return; } if (c.pc != 0x00391408u) [[unlikely]] return; }
L_00391408:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29124u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0039165C; } }
L_00391414:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00391418:
    c.r[4].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st16((c.r[4].w[0] + 128u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 128u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[4].d[0] = c.r[3].d[0] << 56;
    set32(c.r[3], c.r[2].w[0] + 3u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st16((c.r[4].w[0] + 128u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 128u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[2].w[0] + 4u);
    c.r[4].d[0] = c.r[3].d[0] << 56;
    set32(c.r[3], c.r[2].w[0] + 5u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st16((c.r[4].w[0] + 128u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 128u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[2].w[0] + 6u);
    c.r[4].d[0] = c.r[3].d[0] << 56;
    set32(c.r[3], c.r[2].w[0] + 7u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 56;
    set32(c.r[3], c.r[5].w[0] << 5);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    st16((c.r[4].w[0] + 128u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 128u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = c.r[2].sd[0] < 79ll ? 1ull : 0ull;
    c.budget -= 77;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391418u | kUnwind; return; } goto L_00391418; } }
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    set32(c.r[4], c.r[5].w[0] << 5);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st16((c.r[4].w[0] + 128u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + 2u);
    st16((c.r[4].w[0] + 128u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] + 3u);
    set32(c.r[4], c.r[5].w[0] << 5);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    st16((c.r[4].w[0] + 128u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + 4u);
    st16((c.r[4].w[0] + 128u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] + 5u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    set32(c.r[2], c.r[2].w[0] + 6u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[4].w[0] + 128u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0] + 128u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + 14839u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 64;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039164Cu); st16((c.r[2].w[0] + 128u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0064(c, 169u, depth + 1u); else { c.pc = 0x003916C0u; return; } if (c.pc != 0x0039164Cu) [[unlikely]] return; }
L_0039164C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391654u); set32(c.r[4], c.r[28].w[0] - 30636u);  if (depth < kMaxDepth) unit_0011(c, 378u, depth + 1u); else { c.pc = 0x00247A70u; return; } if (c.pc != 0x00391654u) [[unlikely]] return; }
L_00391654:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003916A8; } }
L_0039165C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[28].w[0] - 29160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039166Cu); set32(c.r[5], c.r[5].w[0] - 22896u);  if (depth < kMaxDepth) unit_0054(c, 18u, depth + 1u); else { c.pc = 0x00350580u; return; } if (c.pc != 0x0039166Cu) [[unlikely]] return; }
L_0039166C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[28].w[0] - 29152u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039167Cu); set32(c.r[5], c.r[5].w[0] - 16592u);  if (depth < kMaxDepth) unit_0054(c, 18u, depth + 1u); else { c.pc = 0x00350580u; return; } if (c.pc != 0x0039167Cu) [[unlikely]] return; }
L_0039167C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039168Cu); set32(c.r[5], c.r[5].w[0] - 16224u);  if (depth < kMaxDepth) unit_0054(c, 18u, depth + 1u); else { c.pc = 0x00350580u; return; } if (c.pc != 0x0039168Cu) [[unlikely]] return; }
L_0039168C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], c.r[28].w[0] - 29136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039169Cu); set32(c.r[5], c.r[5].w[0] - 4400u);  if (depth < kMaxDepth) unit_0054(c, 18u, depth + 1u); else { c.pc = 0x00350580u; return; } if (c.pc != 0x0039169Cu) [[unlikely]] return; }
L_0039169C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29124u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391414u | kUnwind; return; } goto L_00391414; } }
L_003916A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003916C0:
    set32(c.r[29], c.r[29].w[0] - 416u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003916F8u); set32(c.r[5], c.r[5].w[0] + 14850u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003916F8u) [[unlikely]] return; }
L_003916F8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391704u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x00391704u) [[unlikely]] return; }
L_00391704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039170Cu);  if (depth < kMaxDepth) unit_0032(c, 44u, depth + 1u); else { c.pc = 0x002C8810u; return; } if (c.pc != 0x0039170Cu) [[unlikely]] return; }
L_0039170C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391714u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x00391714u) [[unlikely]] return; }
L_00391714:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[21], c.r[29].w[0] + 140u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[4], c.r[29].w[0] + 412u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391730u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00391730u) [[unlikely]] return; }
L_00391730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391738u); set32(c.r[4], c.r[29].w[0] + 412u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x00391738u) [[unlikely]] return; }
L_00391738:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00391750u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00391750u) [[unlikely]] return; }
L_00391750:
    set32(c.r[4], c.r[29].w[0] + 412u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039175Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x0039175Cu) [[unlikely]] return; }
L_0039175C:
    set32(c.r[3], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003918A8; } }
    set32(c.r[17], c.r[29].w[0] + 128u);
    set32(c.r[16], c.r[29].w[0] + 132u);
    c.budget -= 2;
L_00391774:
    st8((c.r[28].w[0] - 29128u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00391778:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039178Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x0039178Cu) [[unlikely]] return; }
L_0039178C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003917A8; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391778u | kUnwind; return; } goto L_00391778; } }
L_003917A8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003917B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003917C4; } }
L_003917B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003917C0u); set32(c.r[4], c.r[28].w[0] - 29160u);  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x003917C0u) [[unlikely]] return; }
L_003917C0:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_003917C4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[4].d[0]; c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_003917E4; } }
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < 185ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391774u | kUnwind; return; } goto L_00391774; } }
L_003917E4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_003918A8; } }
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[2], 0u + 186u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003918CC; } }
    set32(c.r[2], 0u + 188u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00391940; } }
    set32(c.r[2], 0u + 190u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00391898; } }
    st8((c.r[28].w[0] - 29156u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00391818:
    st8((c.r[28].w[0] - 29128u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0039181C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391830u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x00391830u) [[unlikely]] return; }
L_00391830:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00391850; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039181Cu | kUnwind; return; } goto L_0039181C; } }
    c.budget -= 1;
L_00391850:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00391860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0039186C; } }
L_00391860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391868u); set32(c.r[4], c.r[28].w[0] - 29160u);  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x00391868u) [[unlikely]] return; }
L_00391868:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0039186C:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00391890; } }
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[2], 0u + 191u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391818u | kUnwind; return; } goto L_00391818; } }
L_00391890:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 29156u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00391898:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0039189C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391774u | kUnwind; return; } goto L_00391774; } }
L_003918A8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003918BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003918BCu) [[unlikely]] return; }
L_003918BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_0039195C; } }
L_003918C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00391978; } }
L_003918CC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003918E0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0064(c, 197u, depth + 1u); else { c.pc = 0x003919A0u; return; } if (c.pc != 0x003918E0u) [[unlikely]] return; }
L_003918E0:
    set32(c.r[4], c.r[28].w[0] - 29144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003918ECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 13u, depth + 1u); else { c.pc = 0x00350390u; return; } if (c.pc != 0x003918ECu) [[unlikely]] return; }
L_003918EC:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391898u | kUnwind; return; } goto L_00391898; } }
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[3].w[0] << 5);
    c.r[19].d[0] = c.r[3].d[0] << 48;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[18], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039192Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0063(c, 172u, depth + 1u); else { c.pc = 0x0038F030u; return; } if (c.pc != 0x0039192Cu) [[unlikely]] return; }
L_0039192C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391938u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 138u, depth + 1u); else { c.pc = 0x00390D80u; return; } if (c.pc != 0x00391938u) [[unlikely]] return; }
L_00391938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039189Cu | kUnwind; return; } goto L_0039189C; } }
L_00391940:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0039194Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0064(c, 141u, depth + 1u); else { c.pc = 0x00391160u; return; } if (c.pc != 0x0039194Cu) [[unlikely]] return; }
L_0039194C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391954u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 139u, depth + 1u); else { c.pc = 0x00390D90u; return; } if (c.pc != 0x00391954u) [[unlikely]] return; }
L_00391954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391898u | kUnwind; return; } goto L_00391898; } }
L_0039195C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391970u); st32((c.r[21].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x00391970u) [[unlikely]] return; }
L_00391970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003918C4u | kUnwind; return; } goto L_003918C4; } }
L_00391978:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_003919A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st8((c.r[28].w[0] - 29128u), static_cast<std::uint8_t>(0u));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[16].w[0] - 4144u);  if (t) { goto L_00391BD8; } }
L_003919DC:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_003919EC:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00391AB8; } }
L_00391A00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00391BF8; } }
L_00391A10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00391C90; } }
    c.r[1].d[0] = c.r[3].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00391C90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00391C90; } }
    c.budget -= 1;
L_00391A40:
    c.r[2].d[0] = c.r[3].sd[0] < 97ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00391A54; } }
    c.r[2].d[0] = c.r[3].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 1;
L_00391A54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00391A60; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00391A60:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00391A78; } }
    set32(c.r[2], 0u + 95u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00391A78; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00391A78:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00391AB8; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00391CA0; } }
L_00391A90:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_00391AA0:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391A00u | kUnwind; return; } goto L_00391A00; } }
    c.budget -= 1;
L_00391AB8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00391AC8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00391AC8:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00391BB8; } }
L_00391AD8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00391CC0; } }
    c.r[1].d[0] = c.r[3].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00391CC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00391CC0; } }
L_00391B08:
    c.r[2].d[0] = c.r[3].sd[0] < 97ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00391B1C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 1;
L_00391B1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00391B28; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00391B28:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00391B40; } }
    set32(c.r[2], 0u + 95u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00391B40; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00391B40:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00391B78; } }
    c.r[2].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00391B5C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 1;
L_00391B5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00391B6C; } }
    c.r[2].d[0] = c.r[3].d[0] ^ 45ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00391B6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00391B78; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00391B78:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00391BB8; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_00391CD0; } }
L_00391B90:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_00391BA0:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391AD8u | kUnwind; return; } goto L_00391AD8; } }
    c.budget -= 1;
L_00391BB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 4144u);
    c.r[3].d[0] = c.r[3].d[0] ^ 10ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29128u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00391CF0; } }
L_00391BD8:
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00391BE8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00391BE8u) [[unlikely]] return; }
L_00391BE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003919DCu | kUnwind; return; } goto L_003919DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003919ECu | kUnwind; return; } goto L_003919EC; } }
L_00391BF8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] - 4144u);  if (t) { goto L_00391C60; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29128u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391A10u | kUnwind; return; } goto L_00391A10; } }
L_00391C10:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391A10u | kUnwind; return; } goto L_00391A10; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00391C6C; } }
    c.budget -= 1;
L_00391C30:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_00391C40:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 10u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391C10u | kUnwind; return; } goto L_00391C10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391A10u | kUnwind; return; } goto L_00391A10; } }
    c.budget -= 1;
L_00391C60:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00391CF0; } }
L_00391C6C:
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00391C7Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00391C7Cu) [[unlikely]] return; }
L_00391C7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391C30u | kUnwind; return; } goto L_00391C30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391C40u | kUnwind; return; } goto L_00391C40; } }
    c.budget -= 1;
L_00391C90:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391A60u | kUnwind; return; } goto L_00391A60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391A40u | kUnwind; return; } goto L_00391A40; } }
L_00391CA0:
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00391CB0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00391CB0u) [[unlikely]] return; }
L_00391CB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391A90u | kUnwind; return; } goto L_00391A90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391AA0u | kUnwind; return; } goto L_00391AA0; } }
L_00391CC0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391B28u | kUnwind; return; } goto L_00391B28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391B08u | kUnwind; return; } goto L_00391B08; } }
L_00391CD0:
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00391CE0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00391CE0u) [[unlikely]] return; }
L_00391CE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391B90u | kUnwind; return; } goto L_00391B90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391BA0u | kUnwind; return; } goto L_00391BA0; } }
L_00391CF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00391D10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st8((c.r[28].w[0] - 29128u), static_cast<std::uint8_t>(0u));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[16].w[0] - 4144u);  if (t) { goto L_00391EB8; } }
L_00391D4C:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_00391D5C:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00391DF8; } }
L_00391D70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00391ED8; } }
L_00391D80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00391F70; } }
    c.r[1].d[0] = c.r[3].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00391F70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00391F70; } }
L_00391DA8:
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00391DB8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00391DB8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00391DF8; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00391F80; } }
L_00391DD0:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_00391DE0:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391D70u | kUnwind; return; } goto L_00391D70; } }
    c.budget -= 1;
L_00391DF8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00391E08; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00391E08:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00391E90; } }
L_00391E18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00391FA0; } }
    c.r[1].d[0] = c.r[3].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00391FA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00391FA0; } }
L_00391E40:
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00391E50; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00391E50:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00391E90; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_00391FB0; } }
L_00391E68:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_00391E78:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391E18u | kUnwind; return; } goto L_00391E18; } }
    c.budget -= 1;
L_00391E90:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 4144u);
    c.r[2].d[0] = c.r[2].d[0] ^ 10ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00391EB0u); st8((c.r[28].w[0] - 29128u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 177u, depth + 1u); else { c.pc = 0x0022F948u; return; } if (c.pc != 0x00391EB0u) [[unlikely]] return; }
L_00391EB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00391FD0; } }
L_00391EB8:
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00391EC8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00391EC8u) [[unlikely]] return; }
L_00391EC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391D4Cu | kUnwind; return; } goto L_00391D4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391D5Cu | kUnwind; return; } goto L_00391D5C; } }
L_00391ED8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] - 4144u);  if (t) { goto L_00391F40; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29128u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391D80u | kUnwind; return; } goto L_00391D80; } }
L_00391EF0:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391D80u | kUnwind; return; } goto L_00391D80; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00391F4C; } }
    c.budget -= 1;
L_00391F10:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_00391F20:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 10u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391EF0u | kUnwind; return; } goto L_00391EF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391D80u | kUnwind; return; } goto L_00391D80; } }
    c.budget -= 1;
L_00391F40:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00391FD0; } }
L_00391F4C:
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00391F5Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00391F5Cu) [[unlikely]] return; }
L_00391F5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391F10u | kUnwind; return; } goto L_00391F10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391F20u | kUnwind; return; } goto L_00391F20; } }
    c.budget -= 1;
L_00391F70:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391DB8u | kUnwind; return; } goto L_00391DB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391DA8u | kUnwind; return; } goto L_00391DA8; } }
L_00391F80:
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00391F90u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00391F90u) [[unlikely]] return; }
L_00391F90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391DD0u | kUnwind; return; } goto L_00391DD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391DE0u | kUnwind; return; } goto L_00391DE0; } }
L_00391FA0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391E50u | kUnwind; return; } goto L_00391E50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391E40u | kUnwind; return; } goto L_00391E40; } }
L_00391FB0:
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00391FC0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00391FC0u) [[unlikely]] return; }
L_00391FC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391E68u | kUnwind; return; } goto L_00391E68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00391E78u | kUnwind; return; } goto L_00391E78; } }
L_00391FD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00391FF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st8((c.r[28].w[0] - 29128u), static_cast<std::uint8_t>(0u));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[16].w[0] - 4144u);  if (t) { goto L_003921C0; } }
L_0039202C:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_0039203C:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003920E8; } }
L_00392050:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 35u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003921E0; } }
L_00392060:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00392278; } }
    c.r[1].d[0] = c.r[3].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00392278; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00392278; } }
L_00392088:
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00392098; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00392098:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003920E8; } }
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003920E8; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00392288; } }
    c.budget -= 1;
L_003920C0:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_003920D0:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392050u | kUnwind; return; } goto L_00392050; } }
    c.budget -= 1;
L_003920E8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003920F8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003920F8:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00392190; } }
L_00392108:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003922A8; } }
    c.r[1].d[0] = c.r[3].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003922A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003922A8; } }
L_00392130:
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00392140; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00392140:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00392158; } }
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00392190; } }
    c.budget -= 1;
L_00392158:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_003922B8; } }
L_00392168:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_00392178:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392108u | kUnwind; return; } goto L_00392108; } }
    c.budget -= 1;
L_00392190:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] - 4144u);
    c.r[2].d[0] = c.r[2].d[0] ^ 10ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003921B0u); st8((c.r[28].w[0] - 29128u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000B(c, 176u, depth + 1u); else { c.pc = 0x0022F930u; return; } if (c.pc != 0x003921B0u) [[unlikely]] return; }
L_003921B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003921B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0003(c, 88u, depth + 1u); else { c.pc = 0x0020E130u; return; } if (c.pc != 0x003921B8u) [[unlikely]] return; }
L_003921B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003922D8; } }
L_003921C0:
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003921D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003921D0u) [[unlikely]] return; }
L_003921D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039202Cu | kUnwind; return; } goto L_0039202C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039203Cu | kUnwind; return; } goto L_0039203C; } }
L_003921E0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] - 4144u);  if (t) { goto L_00392248; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29128u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392060u | kUnwind; return; } goto L_00392060; } }
L_003921F8:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392060u | kUnwind; return; } goto L_00392060; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00392258; } }
    c.budget -= 1;
L_00392218:
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_00392228:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 10u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003921F8u | kUnwind; return; } goto L_003921F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392060u | kUnwind; return; } goto L_00392060; } }
    c.budget -= 1;
L_00392248:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_003922D8; } }
L_00392258:
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00392268u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00392268u) [[unlikely]] return; }
L_00392268:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392218u | kUnwind; return; } goto L_00392218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392228u | kUnwind; return; } goto L_00392228; } }
L_00392278:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392098u | kUnwind; return; } goto L_00392098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392088u | kUnwind; return; } goto L_00392088; } }
L_00392288:
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00392298u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00392298u) [[unlikely]] return; }
L_00392298:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003920C0u | kUnwind; return; } goto L_003920C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003920D0u | kUnwind; return; } goto L_003920D0; } }
L_003922A8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392140u | kUnwind; return; } goto L_00392140; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392130u | kUnwind; return; } goto L_00392130; } }
L_003922B8:
    set32(c.r[25], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003922C8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003922C8u) [[unlikely]] return; }
L_003922C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392168u | kUnwind; return; } goto L_00392168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392178u | kUnwind; return; } goto L_00392178; } }
L_003922D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00392300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[4].w[0] + 128u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 132u);
    set32(c.r[2], c.r[16].w[0] + 11484u);
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00392398; } }
    c.r[1].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] + 10428u);  if (t) { goto L_00392368; } }
L_00392334:
    st16((c.r[4].w[0] + 128u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 260u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 392u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 524u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 656u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 788u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 920u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 1052u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 1056u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392334u | kUnwind; return; } goto L_00392334; } }
    c.budget -= 1;
L_00392368:
    set32(c.r[3], c.r[16].w[0] + 11484u);
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00392398; } }
L_00392378:
    st16((c.r[4].w[0] + 128u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 132u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392378u | kUnwind; return; } goto L_00392378; } }
    c.budget -= 1;
L_00392398:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 11556u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 50u);
    st8((c.r[16].w[0] + 11547u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[16].w[0] + 11484u);
    set32(c.r[2], 0u + 10u);
    st16((c.r[16].w[0] + 11548u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 11552u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003923C4u); set32(c.r[6], 0u + 63u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x003923C4u) [[unlikely]] return; }
L_003923C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003923D4u); set32(c.r[6], 0u + 11484u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x003923D4u) [[unlikely]] return; }
L_003923D4:
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 2;
L_003923DC:
    c.r[4].d[0] = c.r[9].d[0] << 56;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[2], c.r[4].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[7], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 7;
L_003923F8:
    c.r[6].d[0] = c.r[8].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[2], c.r[8].w[0] + 1u);
    set32(c.r[4], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + c.r[7].w[0]);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    st16((c.r[5].w[0] + 64u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[2], c.r[8].w[0] + 2u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    st16((c.r[5].w[0] + 66u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    st16((c.r[5].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[8].w[0] + 3u);
    c.r[8].d[0] = c.r[2].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.r[2].d[0] = c.r[8].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003923F8u | kUnwind; return; } goto L_003923F8; } }
    set32(c.r[2], c.r[9].w[0] + 1u);
    c.r[9].d[0] = c.r[2].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.r[2].d[0] = c.r[9].sd[0] < 87ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[7].w[0] + 82u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003923DCu | kUnwind; return; } goto L_003923DC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[16].w[0] + 11560u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 11564u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 11568u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00392490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003928C0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1064u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[25].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003924C0; } }
    c.r[25].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.budget -= 1;
L_003924C0:
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003928B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    set32(c.r[12], 0u + 16u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[10], 0u + 10u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[11], 0u + 1u);
    set32(c.r[9], 0u + 32u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    c.budget -= 8;
L_003924EC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00392510; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 811u));
    c.r[3].d[0] = c.r[3].d[0] << 59;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00392510; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00392510:
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[24], ld32((c.r[16].w[0] + 1048u)));  if (t) { goto L_00392530; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00392668; } }
L_00392530:
    set32(c.r[7], ld32((c.r[16].w[0] + 1360u)));
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00392668; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[13], c.r[7].w[0] + 8u);  if (t) { goto L_003925B0; } }
    c.r[14].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[13].d[0] + 0ull;
    c.budget -= 2;
L_00392558:
    c.r[3].d[0] = ld8((c.r[7].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003925A0; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_003925A0; } }
    set32(c.r[3], c.r[14].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[14].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[13].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[3].w[0] + 12u), c.r[11].w[0]);
    st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 213u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[13].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003925B0; } }
    c.budget -= 1;
L_003925A0:
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.r[3].d[0] = c.r[14].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392558u | kUnwind; return; } goto L_00392558; } }
L_003925B0:
    set32(c.r[3], ld32((c.r[13].w[0] + 200u)));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st32((c.r[13].w[0] + 200u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 214u)));
    c.r[14].d[0] = c.r[3].d[0] << 56;
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 56);
    c.budget -= 6;
L_003925C8:
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    set32(c.r[7], c.r[17].w[0] << 2);
    set32(c.r[7], c.r[7].w[0] + c.r[17].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[13].w[0] + c.r[7].w[0]);
    c.r[15].d[0] = ld8((c.r[7].w[0] + 8u));
    c.r[15].d[0] = 0ull < c.r[15].d[0] ? 1ull : 0ull;
    c.r[15].d[0] = c.r[15].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[15].d[0] != 0ull;  if (t) { goto L_00392630; } }
    st8((c.r[7].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[17].w[0] + 1u);
    st8((c.r[7].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st32((c.r[7].w[0] + 16u), 0u);
    st32((c.r[7].w[0] + 12u), c.r[12].w[0]);
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 213u)));
    set32(c.r[14], c.r[14].w[0] + 1u);
    st8((c.r[13].w[0] + 213u), static_cast<std::uint8_t>(c.r[14].w[0]));
    st8((c.r[13].w[0] + 214u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0] + 214u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[10].d[0];  if (t) { goto L_003928C8; } }
    c.budget -= 1;
L_00392628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00392660; } }
L_00392630:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[10].d[0];  if (t) { goto L_00392648; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00392648:
    c.r[7].d[0] = c.r[3].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[14].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003925C8u | kUnwind; return; } goto L_003925C8; } }
    breakpoint(c, 0x00392658u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00392660:
    st32((c.r[7].w[0]), c.r[9].w[0]);
    st8((c.r[7].w[0] + 9u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.budget -= 2;
L_00392668:
    c.budget -= 2;
    { const bool t = c.r[24].d[0] == 0ull;  if (t) { goto L_00392728; } }
    c.f[1] = ld32((c.r[24].w[0] + 768u));
    c.f[0] = ld32((c.r[16].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003926D8; } }
    set32(c.r[7], ld32((c.r[24].w[0] + 752u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 752u)));
    c.r[7].d[0] = ld8((c.r[7].w[0] + 113u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 113u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00392728; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 1052u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[3], ld32((c.r[24].w[0] + 1048u)));  if (t) { goto L_003928D0; } }
    st32((c.r[7].w[0] + 1048u), c.r[24].w[0]);
    c.budget -= 1;
L_003926B0:
    st32((c.r[24].w[0] + 1052u), c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 1052u), c.r[24].w[0]);  if (t) { goto L_003926C0; } }
    st32((c.r[3].w[0] + 1052u), c.r[16].w[0]);
    c.budget -= 1;
L_003926C0:
    st32((c.r[16].w[0] + 1048u), c.r[3].w[0]);
    st32((c.r[24].w[0] + 1048u), c.r[16].w[0]);
    c.r[16].d[0] = c.r[24].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[24], ld32((c.r[24].w[0] + 1048u)));  if (t) { goto L_00392728; } }
    c.budget -= 1;
L_003926D8:
    set32(c.r[7], ld32((c.r[24].w[0] + 752u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 752u)));
    c.r[7].d[0] = ld8((c.r[7].w[0] + 113u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 113u));
    c.r[1].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00392728; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 1052u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[3], ld32((c.r[24].w[0] + 1048u)));  if (t) { goto L_003928D8; } }
    st32((c.r[7].w[0] + 1048u), c.r[24].w[0]);
    c.budget -= 2;
L_00392708:
    st32((c.r[24].w[0] + 1052u), c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 1052u), c.r[24].w[0]);  if (t) { goto L_00392718; } }
    st32((c.r[3].w[0] + 1052u), c.r[16].w[0]);
    c.budget -= 1;
L_00392718:
    st32((c.r[16].w[0] + 1048u), c.r[3].w[0]);
    st32((c.r[24].w[0] + 1048u), c.r[16].w[0]);
    c.r[16].d[0] = c.r[24].d[0] + 0ull;
    set32(c.r[24], ld32((c.r[24].w[0] + 1048u)));
    c.budget -= 4;
L_00392728:
    set32(c.r[7], ld32((c.r[16].w[0] + 752u)));
    c.r[3].d[0] = c.r[25].d[0] & 255ull;
    c.r[7].d[0] = ld8((c.r[7].w[0] + 113u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003928E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[11].d[0];  if (t) { goto L_003928E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[25].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003928E0; } }
L_00392750:
    c.r[25].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 2;
L_00392758:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1057u));
    c.r[7].d[0] = c.r[25].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_00392908; } }
    set32(c.r[13], ld32((c.r[16].w[0] + 1360u)));
    c.r[3].d[0] = ld8((c.r[13].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003928A0; } }
    set32(c.r[3], ld32((c.r[13].w[0] + 208u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[15], c.r[13].w[0] + 8u);  if (t) { goto L_003927E8; } }
    c.r[14].d[0] = 0ull + 0ull;
    c.r[13].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 2;
L_00392790:
    c.r[3].d[0] = ld8((c.r[13].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003927D8; } }
    set32(c.r[3], ld32((c.r[13].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_003927D8; } }
    set32(c.r[3], c.r[14].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[14].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[15].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st32((c.r[3].w[0] + 12u), c.r[11].w[0]);
    st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0] + 213u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[15].w[0] + 213u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003927E8; } }
    c.budget -= 1;
L_003927D8:
    set32(c.r[14], c.r[14].w[0] + 1u);
    c.r[3].d[0] = c.r[14].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[13], c.r[13].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392790u | kUnwind; return; } goto L_00392790; } }
L_003927E8:
    set32(c.r[3], ld32((c.r[15].w[0] + 200u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[15].w[0] + 200u), c.r[3].w[0]);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0] + 214u)));
    c.r[17].d[0] = c.r[13].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 6;
L_00392800:
    c.r[3].d[0] = c.r[13].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[14], c.r[3].w[0] << 2);
    set32(c.r[14], c.r[14].w[0] + c.r[3].w[0]);
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[14], c.r[15].w[0] + c.r[14].w[0]);
    c.r[18].d[0] = ld8((c.r[14].w[0] + 8u));
    c.r[18].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.r[18].d[0] = c.r[18].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00392868; } }
    st8((c.r[14].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[14].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st32((c.r[14].w[0] + 16u), 0u);
    st32((c.r[14].w[0] + 12u), c.r[5].w[0]);
    c.r[13].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0] + 213u)));
    set32(c.r[13], c.r[13].w[0] + 1u);
    st8((c.r[15].w[0] + 213u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st8((c.r[15].w[0] + 214u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[15].w[0] + 214u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[10].d[0];  if (t) { goto L_00392900; } }
    c.budget -= 1;
L_00392860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00392898; } }
L_00392868:
    set32(c.r[3], c.r[13].w[0] + 1u);
    c.r[13].d[0] = c.r[3].d[0] << 56;
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[13].d[0] != c.r[10].d[0];  if (t) { goto L_00392880; } }
    c.r[13].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00392880:
    c.r[3].d[0] = c.r[13].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392800u | kUnwind; return; } goto L_00392800; } }
    breakpoint(c, 0x00392890u);
    c.r[14].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00392898:
    st8((c.r[14].w[0] + 9u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.budget -= 2;
L_003928A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 1057u), static_cast<std::uint8_t>(c.r[25].w[0]));  if (t) { goto L_00392908; } }
L_003928A8:
    set32(c.r[3], c.r[25].w[0] + 1u);
    c.r[25].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 2;
L_003928B0:
    c.budget -= 2;
    { const bool t = c.r[24].d[0] != 0ull; c.r[16].d[0] = c.r[24].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003924ECu | kUnwind; return; } goto L_003924EC; } }
L_003928B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00392930; } }
L_003928C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00392930; } }
L_003928C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[13].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392628u | kUnwind; return; } goto L_00392628; } }
L_003928D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[24].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003926B0u | kUnwind; return; } goto L_003926B0; } }
L_003928D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[24].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392708u | kUnwind; return; } goto L_00392708; } }
L_003928E0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1064u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392758u | kUnwind; return; } goto L_00392758; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392750u | kUnwind; return; } goto L_00392750; } }
    c.budget -= 1;
L_00392900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[15].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392860u | kUnwind; return; } goto L_00392860; } }
L_00392908:
    set32(c.r[3], c.r[7].w[0] - 1u);
    set32(c.r[13], c.r[11].w[0] << (c.r[3].w[0] & 31u));
    c.r[1].d[0] = c.r[7].sd[0] < 16ll ? 1ull : 0ull;
    c.r[3].d[0] = ld16((c.r[4].w[0] + 16u));
    c.r[13].d[0] = c.r[13].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[13].d[0];
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003928B0u | kUnwind; return; } goto L_003928B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003928A8u | kUnwind; return; } goto L_003928A8; } }
L_00392930:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00392950:
    c.r[9].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[7].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[8], 0u - 3u);
    set32(c.r[6], 0u + 1u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[10].d[0] = ld8((c.r[4].w[0] + 19u));
    c.r[9].d[0] = ld8((c.r[5].w[0] + 220u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[10].d[0] = c.r[10].d[0] << 62;
    c.r[9].d[0] = c.r[9].d[0] ^ 42ull;
    c.r[10].d[0] = c.r[10].d[0] >> 63;
    c.r[9].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[9].d[0] = c.r[10].d[0] | c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] & 1ull;
    set32(c.r[9], c.r[9].w[0] << 1);
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    c.budget -= 20;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (t) { goto L_003929AC; } }
    set32(c.r[9], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_003929B4; } }
L_003929AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00392A2C; } }
L_003929B4:
    set32(c.r[6], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[6].d[0];  if (t) { goto L_003929F0; } }
    set32(c.r[3], ld32((c.r[9].w[0] + 1048u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00392AB8; } }
L_003929CC:
    c.r[9].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 1048u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003929CCu | kUnwind; return; } goto L_003929CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_00392ABC; } }
L_003929F0:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00392A18; } }
L_003929F8:
    c.r[6].d[0] = ld8((c.r[9].w[0] + 1057u));
    c.r[1].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00392A18; } }
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[9].w[0] + 1048u)));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003929F8u | kUnwind; return; } goto L_003929F8; } }
L_00392A18:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00392AC4; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull; c.r[3].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00392ACC; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 1;
L_00392A2C:
    c.r[7].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[6], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_00392AD4; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_00392A98; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_00392A88; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00392A64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00392AB0; } }
L_00392A64:
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0] + 1048u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 1052u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00392A80; } }
    st32((c.r[3].w[0] + 1052u), c.r[5].w[0]);
    c.budget -= 1;
L_00392A80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_00392AB0; } }
L_00392A88:
    st32((c.r[3].w[0] + 1048u), c.r[5].w[0]);
    st32((c.r[5].w[0] + 1052u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 1048u), 0u);  if (t) { goto L_00392AB0; } }
L_00392A98:
    set32(c.r[4], ld32((c.r[3].w[0] + 1048u)));
    st32((c.r[5].w[0] + 1048u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 1048u)));
    st32((c.r[4].w[0] + 1052u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 1048u), c.r[5].w[0]);
    st32((c.r[5].w[0] + 1052u), c.r[3].w[0]);
    c.budget -= 6;
L_00392AB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00392AD4; } }
L_00392AB8:
    c.r[3].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 1;
L_00392ABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392A2Cu | kUnwind; return; } goto L_00392A2C; } }
L_00392AC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392A2Cu | kUnwind; return; } goto L_00392A2C; } }
L_00392ACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392A2Cu | kUnwind; return; } goto L_00392A2C; } }
L_00392AD4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00392AE0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00392AFC; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 1048u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00392B60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00392B70; } }
L_00392AFC:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00392B00:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00392B58; } }
L_00392B10:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00392B38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00392B70; } }
L_00392B38:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392B10u | kUnwind; return; } goto L_00392B10; } }
    c.budget -= 1;
L_00392B58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00392B70; } }
L_00392B60:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392B00u | kUnwind; return; } goto L_00392B00; } }
L_00392B70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00392B80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 7;
L_00392B9C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[16].w[0] + 49u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 220u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392BB4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 9u, depth + 1u); else { c.pc = 0x002C8280u; return; } if (c.pc != 0x00392BB4u) [[unlikely]] return; }
L_00392BB4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 49u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392BC8u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0032(c, 8u, depth + 1u); else { c.pc = 0x002C8240u; return; } if (c.pc != 0x00392BC8u) [[unlikely]] return; }
L_00392BC8:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 49u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392BE4u); set32(c.r[6], 0u + 3000u);  if (depth < kMaxDepth) unit_0032(c, 7u, depth + 1u); else { c.pc = 0x002C81E0u; return; } if (c.pc != 0x00392BE4u) [[unlikely]] return; }
L_00392BE4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[16].w[0] + 49u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 220u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392BFCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 9u, depth + 1u); else { c.pc = 0x002C8280u; return; } if (c.pc != 0x00392BFCu) [[unlikely]] return; }
L_00392BFC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 49u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392C10u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0032(c, 8u, depth + 1u); else { c.pc = 0x002C8240u; return; } if (c.pc != 0x00392C10u) [[unlikely]] return; }
L_00392C10:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 49u);
    set32(c.r[4], 0u + 80u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392C2Cu); set32(c.r[6], 0u + 3000u);  if (depth < kMaxDepth) unit_0032(c, 7u, depth + 1u); else { c.pc = 0x002C81E0u; return; } if (c.pc != 0x00392C2Cu) [[unlikely]] return; }
L_00392C2C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[16].w[0] + 49u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 220u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392C44u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 9u, depth + 1u); else { c.pc = 0x002C8280u; return; } if (c.pc != 0x00392C44u) [[unlikely]] return; }
L_00392C44:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 49u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392C58u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0032(c, 8u, depth + 1u); else { c.pc = 0x002C8240u; return; } if (c.pc != 0x00392C58u) [[unlikely]] return; }
L_00392C58:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 49u);
    set32(c.r[4], 0u + 81u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392C74u); set32(c.r[6], 0u + 3000u);  if (depth < kMaxDepth) unit_0032(c, 7u, depth + 1u); else { c.pc = 0x002C81E0u; return; } if (c.pc != 0x00392C74u) [[unlikely]] return; }
L_00392C74:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[16].w[0] + 49u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 220u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392C8Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 9u, depth + 1u); else { c.pc = 0x002C8280u; return; } if (c.pc != 0x00392C8Cu) [[unlikely]] return; }
L_00392C8C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 49u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392CA0u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0032(c, 8u, depth + 1u); else { c.pc = 0x002C8240u; return; } if (c.pc != 0x00392CA0u) [[unlikely]] return; }
L_00392CA0:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 49u);
    set32(c.r[4], 0u + 82u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392CBCu); set32(c.r[6], 0u + 3000u);  if (depth < kMaxDepth) unit_0032(c, 7u, depth + 1u); else { c.pc = 0x002C81E0u; return; } if (c.pc != 0x00392CBCu) [[unlikely]] return; }
L_00392CBC:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[16].w[0] + 49u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 220u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392CD4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 9u, depth + 1u); else { c.pc = 0x002C8280u; return; } if (c.pc != 0x00392CD4u) [[unlikely]] return; }
L_00392CD4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 49u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392CE8u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0032(c, 8u, depth + 1u); else { c.pc = 0x002C8240u; return; } if (c.pc != 0x00392CE8u) [[unlikely]] return; }
L_00392CE8:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 49u);
    set32(c.r[4], 0u + 83u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392D04u); set32(c.r[6], 0u + 3000u);  if (depth < kMaxDepth) unit_0032(c, 7u, depth + 1u); else { c.pc = 0x002C81E0u; return; } if (c.pc != 0x00392D04u) [[unlikely]] return; }
L_00392D04:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[16].w[0] + 49u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 220u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392D1Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 9u, depth + 1u); else { c.pc = 0x002C8280u; return; } if (c.pc != 0x00392D1Cu) [[unlikely]] return; }
L_00392D1C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 49u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392D30u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0032(c, 8u, depth + 1u); else { c.pc = 0x002C8240u; return; } if (c.pc != 0x00392D30u) [[unlikely]] return; }
L_00392D30:
    set32(c.r[3], c.r[16].w[0] + 49u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[4], 0u + 84u);
    set32(c.r[6], 0u + 3000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392D4Cu); c.r[8].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0032(c, 7u, depth + 1u); else { c.pc = 0x002C81E0u; return; } if (c.pc != 0x00392D4Cu) [[unlikely]] return; }
L_00392D4C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 57ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392B9Cu | kUnwind; return; } goto L_00392B9C; } }
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[9], c.r[9].w[0] - 15728u);
    set32(c.r[5], 0u - 49u);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(16ll);
    set32(c.r[3], 0u - 4u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(3ll);
    c.r[8].d[0] = ld8((c.r[7].w[0] + 220u));
    set32(c.r[7], c.r[8].w[0] << 5);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[8], c.r[9].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[8].w[0] + 119u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[8].w[0] + 119u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 220u));
    set32(c.r[5], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[9].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 119u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 119u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00392DE0:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 15728u);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 220u));
    set32(c.r[4], c.r[5].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 40u), c.f[12]);  c.pc = t; return; }
L_00392E10:
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 15728u);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 220u));
    set32(c.r[4], c.r[6].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 82u), static_cast<std::uint16_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00392E40:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 82u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00392E6C; } }
L_00392E64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));  if (t) { goto L_00392E74; } }
L_00392E6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392E64u | kUnwind; return; } goto L_00392E64; } }
L_00392E74:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00392E80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00392EA0u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0064(c, 317u, depth + 1u); else { c.pc = 0x00392EC0u; return; } if (c.pc != 0x00392EA0u) [[unlikely]] return; }
L_00392EA0:
    st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00392EC0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 56u));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00392F50; } }
L_00392ED0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 56u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00392EF0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00392EF0; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00392EF0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00392FE0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 56u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00392F2C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00392F2C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00392FE0; } }
L_00392F2C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00392FB0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 56u));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00392FE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00392FB4; } }
L_00392F50:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392ED0u | kUnwind; return; } goto L_00392ED0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00392F74; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392ED0u | kUnwind; return; } goto L_00392ED0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));  if (t) { goto L_00392FE4; } }
L_00392F74:
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 1520u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00392F98; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 6u));
    set32(c.r[3], ld32((c.r[6].w[0] + 1524u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00392F98; } }
    st32((c.r[6].w[0] + 1520u), 0u);
    c.budget -= 1;
L_00392F98:
    set32(c.r[3], ld32((c.r[6].w[0] + 1520u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00392ED0u | kUnwind; return; } goto L_00392ED0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));  if (t) { goto L_00392FE4; } }
L_00392FB0:
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_00392FB4:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 220u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00392FE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 22916u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00392FE0; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 82u)));
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00392FE0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10u)));
    c.budget -= 1;
L_00392FE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00392FF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00393010; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 2;
L_00393010:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003930AC; } }
L_00393028:
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F950000u);
    set32(c.r[5], c.r[6].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 100u));
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[6].w[0] + 100u);  if (t) { goto L_00393080; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00393080; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 54u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00393080:
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EA80000u);
    c.r[3].d[0] = c.r[3].d[0] | 62915ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003930E4; } }
L_003930A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003930F0; } }
L_003930AC:
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 104u), 0u);
    c.f[0] = ld32((c.r[3].w[0] + 100u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393028u | kUnwind; return; } goto L_00393028; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 53u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393028u | kUnwind; return; } goto L_00393028; } }
L_003930E4:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[12], c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003930A4u | kUnwind; return; } goto L_003930A4; } }
L_003930F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00393100:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0039324C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00393134; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_00393134:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003931E8; } }
L_0039314C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 100u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[3].w[0] + 100u);  if (t) { goto L_00393230; } }
L_00393178:
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F950000u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003931BC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003931BC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 54u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_003931BC:
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3EA80000u);
    c.r[3].d[0] = c.r[3].d[0] | 62915ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00393240; } }
L_003931E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0039324C; } }
L_003931E8:
    c.f[0] = ld32((c.r[28].w[0] - 31756u));
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 104u), c.f[0]);
    st32((c.r[4].w[0] + 272u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[4].w[0] + 256u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[4].w[0] + 260u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[4].w[0] + 264u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 268u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0039314Cu | kUnwind; return; } goto L_0039314C; } }
L_00393230:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 53u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393178u | kUnwind; return; } goto L_00393178; } }
L_00393240:
    c.f[0] = fp::ee::sub(c.fcr31, c.f[12], c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003931E0u | kUnwind; return; } goto L_003931E0; } }
L_0039324C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00393260:
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 92u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003933F0; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 220u));
    set32(c.r[3], 0u + 42u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003933F0; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 1360u)));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003933F0; } }
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[4], ld32((c.r[4].w[0] + 208u)));
    c.r[4].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00393318; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
L_003932C0:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00393308; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { goto L_00393308; } }
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[5].w[0] + 12u), c.r[4].w[0]);
    st8((c.r[5].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 213u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00393318; } }
L_00393308:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003932C0u | kUnwind; return; } goto L_003932C0; } }
L_00393318:
    set32(c.r[4], ld32((c.r[3].w[0] + 200u)));
    c.r[4].d[0] = c.r[4].d[0] | 16ull;
    st32((c.r[3].w[0] + 200u), c.r[4].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.r[4].d[0] = c.r[8].d[0] << 56;
    set32(c.r[6], 0u + 10u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 7;
L_00393334:
    c.r[7].d[0] = c.r[8].d[0] << 56;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 56);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[9], c.r[3].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[9].w[0] + 8u));
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_003933A0; } }
    st8((c.r[9].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 16u);
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[7].w[0] + 1u);
    st32((c.r[9].w[0] + 16u), 0u);
    set32(c.r[4], 0u + 10u);
    st32((c.r[9].w[0] + 12u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 213u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[3].w[0] + 213u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 214u)));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_003933E8; } }
L_00393398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_003933D4; } }
L_003933A0:
    set32(c.r[5], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[5].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_003933B8; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003933B8:
    c.r[5].d[0] = c.r[8].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393334u | kUnwind; return; } goto L_00393334; } }
    breakpoint(c, 0x003933C8u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
L_003933D4:
    set32(c.r[3], 0u + 1u);
    st32((c.r[9].w[0]), c.r[4].w[0]);
    st8((c.r[9].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003933F0; } }
L_003933E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393398u | kUnwind; return; } goto L_00393398; } }
L_003933F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00393400:
    set32(c.r[3], 0u + 25u);
    st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 49u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 44u), c.f[12]);  if (t) { goto L_00393738; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[1] = c.r[9].w[0];
    c.r[10].d[0] = 0ull + 0ull;
    c.f[2] = c.r[8].w[0];
    set32(c.r[7], 0u + 16u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[3], 0u + 32u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 9;
L_00393438:
    set32(c.r[9], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    set32(c.r[9], c.r[9].w[0] << 2);
    set32(c.r[12], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[11], ld32((c.r[12].w[0] + 92u)));
    c.budget -= 7;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_00393728; } }
    c.f[0] = ld32((c.r[12].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[9], c.r[12].w[0] + 96u);  if (t) { goto L_00393740; } }
    c.budget -= 1;
L_00393468:
    c.f[0] = ld32((c.r[11].w[0] + 768u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00393488; } }
    c.f[0] = ld32((c.r[12].w[0] + 100u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00393728; } }
L_00393488:
    c.f[0] = ld32((c.r[12].w[0] + 100u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003935E0; } }
    set32(c.r[11], ld32((c.r[11].w[0] + 1360u)));
    c.r[9].d[0] = ld8((c.r[11].w[0]));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_00393728; } }
    set32(c.r[9], c.r[11].w[0] + 8u);
    set32(c.r[11], ld32((c.r[11].w[0] + 208u)));
    c.r[11].d[0] = c.r[11].d[0] & 16ull;
    c.budget -= 5;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_00393520; } }
    c.r[13].d[0] = 0ull + 0ull;
    c.r[12].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 3;
L_003934C8:
    c.r[11].d[0] = ld8((c.r[12].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { goto L_00393510; } }
    set32(c.r[11], ld32((c.r[12].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != c.r[7].d[0];  if (t) { goto L_00393510; } }
    set32(c.r[11], c.r[13].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[13].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[11], c.r[9].w[0] + c.r[11].w[0]);
    st8((c.r[11].w[0] + 8u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[11].w[0] + 12u), c.r[6].w[0]);
    st8((c.r[11].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 213u)));
    set32(c.r[11], c.r[11].w[0] - 1u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 213u), static_cast<std::uint8_t>(c.r[11].w[0]));  if (t) { goto L_00393520; } }
    c.budget -= 1;
L_00393510:
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[11].d[0] = c.r[13].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003934C8u | kUnwind; return; } goto L_003934C8; } }
L_00393520:
    set32(c.r[11], ld32((c.r[9].w[0] + 200u)));
    c.r[11].d[0] = c.r[11].d[0] | 16ull;
    st32((c.r[9].w[0] + 200u), c.r[11].w[0]);
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 214u)));
    c.r[11].d[0] = c.r[14].d[0] << 56;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    c.budget -= 6;
L_00393538:
    c.r[13].d[0] = c.r[14].d[0] << 56;
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 56);
    set32(c.r[12], c.r[13].w[0] << 2);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[15], c.r[9].w[0] + c.r[12].w[0]);
    c.r[12].d[0] = ld8((c.r[15].w[0] + 8u));
    c.r[12].d[0] = 0ull < c.r[12].d[0] ? 1ull : 0ull;
    c.r[12].d[0] = c.r[12].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { goto L_003935A0; } }
    st8((c.r[15].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[11], c.r[13].w[0] + 1u);
    st8((c.r[15].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st32((c.r[15].w[0] + 16u), 0u);
    st32((c.r[15].w[0] + 12u), c.r[7].w[0]);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 213u)));
    set32(c.r[12], c.r[12].w[0] + 1u);
    st8((c.r[9].w[0] + 213u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st8((c.r[9].w[0] + 214u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 214u)));
    c.budget -= 12;
    { const bool t = c.r[11].d[0] == c.r[5].d[0];  if (t) { goto L_00393748; } }
    c.budget -= 1;
L_00393598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003935D0; } }
L_003935A0:
    set32(c.r[12], c.r[14].w[0] + 1u);
    c.r[14].d[0] = c.r[12].d[0] << 56;
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[14].d[0] != c.r[5].d[0];  if (t) { goto L_003935B8; } }
    c.r[14].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003935B8:
    c.r[12].d[0] = c.r[14].d[0] << 56;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != c.r[11].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393538u | kUnwind; return; } goto L_00393538; } }
    breakpoint(c, 0x003935C8u);
    c.r[15].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003935D0:
    st32((c.r[15].w[0]), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[15].w[0] + 9u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00393728; } }
    c.budget -= 1;
L_003935E0:
    set32(c.r[11], ld32((c.r[11].w[0] + 1360u)));
    c.r[9].d[0] = ld8((c.r[11].w[0]));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_00393728; } }
    set32(c.r[9], c.r[11].w[0] + 8u);
    set32(c.r[11], ld32((c.r[11].w[0] + 208u)));
    c.r[11].d[0] = c.r[11].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_00393668; } }
    c.r[13].d[0] = 0ull + 0ull;
    c.r[12].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 3;
L_00393610:
    c.r[11].d[0] = ld8((c.r[12].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != 0ull;  if (t) { goto L_00393658; } }
    set32(c.r[11], ld32((c.r[12].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != c.r[3].d[0];  if (t) { goto L_00393658; } }
    set32(c.r[11], c.r[13].w[0] << 2);
    set32(c.r[11], c.r[11].w[0] + c.r[13].w[0]);
    set32(c.r[11], c.r[11].w[0] << 2);
    set32(c.r[11], c.r[9].w[0] + c.r[11].w[0]);
    st8((c.r[11].w[0] + 8u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[11].w[0] + 12u), c.r[6].w[0]);
    st8((c.r[11].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 213u)));
    set32(c.r[11], c.r[11].w[0] - 1u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 213u), static_cast<std::uint8_t>(c.r[11].w[0]));  if (t) { goto L_00393668; } }
    c.budget -= 1;
L_00393658:
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.r[11].d[0] = c.r[13].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393610u | kUnwind; return; } goto L_00393610; } }
L_00393668:
    set32(c.r[11], ld32((c.r[9].w[0] + 200u)));
    c.r[11].d[0] = c.r[11].d[0] | 32ull;
    st32((c.r[9].w[0] + 200u), c.r[11].w[0]);
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 214u)));
    c.r[11].d[0] = c.r[14].d[0] << 56;
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    c.budget -= 6;
L_00393680:
    c.r[13].d[0] = c.r[14].d[0] << 56;
    c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 56);
    set32(c.r[12], c.r[13].w[0] << 2);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[15], c.r[9].w[0] + c.r[12].w[0]);
    c.r[12].d[0] = ld8((c.r[15].w[0] + 8u));
    c.r[12].d[0] = 0ull < c.r[12].d[0] ? 1ull : 0ull;
    c.r[12].d[0] = c.r[12].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[12].d[0] != 0ull;  if (t) { goto L_003936E8; } }
    st8((c.r[15].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[11], c.r[13].w[0] + 1u);
    st8((c.r[15].w[0] + 9u), static_cast<std::uint8_t>(0u));
    st32((c.r[15].w[0] + 16u), 0u);
    st32((c.r[15].w[0] + 12u), c.r[3].w[0]);
    c.r[12].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 213u)));
    set32(c.r[12], c.r[12].w[0] + 1u);
    st8((c.r[9].w[0] + 213u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st8((c.r[9].w[0] + 214u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 214u)));
    c.budget -= 12;
    { const bool t = c.r[11].d[0] == c.r[5].d[0];  if (t) { goto L_00393750; } }
    c.budget -= 1;
L_003936E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393718; } }
L_003936E8:
    set32(c.r[12], c.r[14].w[0] + 1u);
    c.r[14].d[0] = c.r[12].d[0] << 56;
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[14].d[0] != c.r[5].d[0];  if (t) { goto L_00393700; } }
    c.r[14].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00393700:
    c.r[12].d[0] = c.r[14].d[0] << 56;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != c.r[11].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393680u | kUnwind; return; } goto L_00393680; } }
    breakpoint(c, 0x00393710u);
    c.r[15].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00393718:
    st32((c.r[15].w[0]), c.r[8].w[0]);
    st8((c.r[15].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[15].w[0] + 9u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 4;
L_00393728:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[9].d[0] = c.r[10].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393438u | kUnwind; return; } goto L_00393438; } }
L_00393738:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393758; } }
L_00393740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0]), c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393468u | kUnwind; return; } goto L_00393468; } }
L_00393748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393598u | kUnwind; return; } goto L_00393598; } }
L_00393750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[9].w[0] + 214u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003936E0u | kUnwind; return; } goto L_003936E0; } }
L_00393758:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00393760:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 54u));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00393798; } }
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0039378C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 53u));
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
L_0039378C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00393798; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00393798:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003937A0:
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_003937BC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003937BC:
    c.f[0] = 0u;
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_003937D4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003937D4:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[7].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00393904; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_003938B4; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[5].d[0];  if (t) { goto L_00393864; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_00393814; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00393954; } }
L_00393814:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ED40000u);
    c.r[3].d[0] = c.r[3].d[0] | 5069ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00393B80; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x401A0000u);
    c.r[3].d[0] = c.r[3].d[0] | 33401ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0039385C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] & 255ull;  if (t) { goto L_00393954; } }
L_0039385C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_00393954; } }
L_00393864:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ED40000u);
    c.r[3].d[0] = c.r[3].d[0] | 5069ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.f[2] ^ fp::kSign;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00393B88; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x401A0000u);
    c.r[3].d[0] = c.r[3].d[0] | 33401ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003938AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(3ll);  if (t) { goto L_00393954; } }
L_003938AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_00393954; } }
L_003938B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ED40000u);
    c.r[3].d[0] = c.r[3].d[0] | 5069ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.f[3] ^ fp::kSign;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00393B90; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x401A0000u);
    c.r[3].d[0] = c.r[3].d[0] | 33401ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003938FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(7ll);  if (t) { goto L_00393954; } }
L_003938FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(6ll);  if (t) { goto L_00393954; } }
L_00393904:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3ED40000u);
    c.r[3].d[0] = c.r[3].d[0] | 5069ull;
    c.f[0] = c.r[3].w[0];
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    c.f[1] = c.f[3] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00393B98; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x401A0000u);
    c.r[3].d[0] = c.r[3].d[0] | 33401ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00393950; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(5ll);  if (t) { goto L_00393954; } }
L_00393950:
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(6ll);
    c.budget -= 1;
L_00393954:
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.f[0] = c.r[3].w[0];
    c.r[7].d[0] = c.r[5].d[0] & 7ull;
    c.f[1] = ld32((c.r[28].w[0] - 31756u));
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + 92u);
    st32((c.r[5].w[0] + 104u), c.f[1]);
    set32(c.r[6], c.r[3].w[0] + 8u);
    st32((c.r[4].w[0] + 272u), c.f[1]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[4].w[0] + 256u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[4].w[0] + 260u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[4].w[0] + 264u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[4].w[0] + 268u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 100u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 27;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00393BA0; } }
L_003939C0:
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F950000u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00393BB0; } }
L_003939E0:
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3EA80000u);
    c.r[5].d[0] = c.r[5].d[0] | 62915ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[5].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00393BC0; } }
L_00393A0C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.f[0] = c.r[5].w[0];
    c.f[1] = ld32((c.r[28].w[0] - 31756u));
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.r[6].d[0] = c.r[5].d[0] & 7ull;
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[6].w[0] + 92u);
    st32((c.r[6].w[0] + 104u), c.f[1]);
    set32(c.r[7], c.r[5].w[0] + 8u);
    st32((c.r[4].w[0] + 272u), c.f[1]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.f[1] = ld32((c.r[5].w[0] + 32u));
    st32((c.r[4].w[0] + 256u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 36u));
    st32((c.r[4].w[0] + 260u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 40u));
    st32((c.r[4].w[0] + 264u), c.f[1]);
    c.f[1] = ld32((c.r[5].w[0] + 44u));
    st32((c.r[4].w[0] + 268u), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 100u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 27;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00393BD0; } }
L_00393A78:
    c.f[1] = ld32((c.r[7].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F950000u);
    c.r[5].d[0] = c.r[5].d[0] | 49807ull;
    c.f[0] = c.r[5].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00393BE0; } }
L_00393A98:
    c.f[1] = ld32((c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3EA80000u);
    c.r[6].d[0] = c.r[6].d[0] | 62915ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[6].w[0];
    c.f[0] = c.r[5].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00393BF0; } }
L_00393AC4:
    set32(c.r[5], c.r[3].w[0] + 7u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.r[5].d[0] = c.r[5].d[0] & 7ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[28].w[0] - 31756u));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] + 92u);
    st32((c.r[6].w[0] + 104u), c.f[1]);
    set32(c.r[5], c.r[3].w[0] + 8u);
    st32((c.r[4].w[0] + 272u), c.f[1]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[4].w[0] + 256u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[4].w[0] + 260u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[4].w[0] + 264u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[4].w[0] + 268u), c.f[1]);
    c.f[1] = ld32((c.r[6].w[0] + 100u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 26;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00393C00; } }
L_00393B2C:
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F950000u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00393C10; } }
L_00393B4C:
    c.f[1] = ld32((c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3EA80000u);
    c.r[4].d[0] = c.r[4].d[0] | 62915ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[4].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::ee::add(c.fcr31, c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00393C20; } }
L_00393B78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393C30; } }
L_00393B80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393954u | kUnwind; return; } goto L_00393954; } }
L_00393B88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393954u | kUnwind; return; } goto L_00393954; } }
L_00393B90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393954u | kUnwind; return; } goto L_00393954; } }
L_00393B98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(4ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393954u | kUnwind; return; } goto L_00393954; } }
L_00393BA0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 53u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003939C0u | kUnwind; return; } goto L_003939C0; } }
L_00393BB0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 54u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003939E0u | kUnwind; return; } goto L_003939E0; } }
L_00393BC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F2B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 34078ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393A0Cu | kUnwind; return; } goto L_00393A0C; } }
L_00393BD0:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 53u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393A78u | kUnwind; return; } goto L_00393A78; } }
L_00393BE0:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 54u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393A98u | kUnwind; return; } goto L_00393A98; } }
L_00393BF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F2B0000u);
    c.r[5].d[0] = c.r[5].d[0] | 34078ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393AC4u | kUnwind; return; } goto L_00393AC4; } }
L_00393C00:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 53u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393B2Cu | kUnwind; return; } goto L_00393B2C; } }
L_00393C10:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 54u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 54u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393B4Cu | kUnwind; return; } goto L_00393B4C; } }
L_00393C20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F2B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 34078ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393B78u | kUnwind; return; } goto L_00393B78; } }
L_00393C30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00393C40:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1057u));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00393C50:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + 92u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 108u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00393C90; } }
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00393C90; } }
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.r[6].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 2;
L_00393C90:
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00393D98; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 14928u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00390000u < 16384u) { entry = entries_0064[(t - 0x00390000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00393CBC:
    c.f[4] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = ld32((c.r[2].w[0] + 4u));  if (t) { goto L_00393DFC; } }
L_00393CC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393DF8; } }
L_00393CD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[4] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393DF8; } }
L_00393CE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[4] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393DF8; } }
L_00393CF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[4] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393DF8; } }
L_00393D08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[4] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393DF8; } }
L_00393D18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[4] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393DF8; } }
L_00393D28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40600000u);
    c.f[4] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393DF8; } }
L_00393D38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40600000u);
    c.f[4] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393DF8; } }
L_00393D48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40600000u);
    c.f[4] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393DF8; } }
L_00393D58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40600000u);
    c.f[4] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393DF8; } }
L_00393D68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40900000u);
    c.f[4] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393DF8; } }
L_00393D78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40900000u);
    c.f[4] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393DF8; } }
L_00393D88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40900000u);
    c.f[4] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393DF8; } }
L_00393D98:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 18u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00393E54; } }
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00393DBC; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00393DD8; } }
L_00393DBC:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_00393DD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[4] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00393DF8; } }
    c.f[4] = c.f[0];
    c.budget -= 1;
L_00393DF8:
    c.f[3] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 1;
L_00393DFC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00393E18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[2].w[0] + 8u));  if (t) { goto L_00393E20; } }
L_00393E18:
    c.f[3] = ld32((c.r[7].w[0] + 772u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 2;
L_00393E20:
    c.f[0] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[0], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[4]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00393E64; } }
    c.f[0] = c.f[1];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393E64; } }
L_00393E54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40B00000u);
    c.f[4] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393DF8u | kUnwind; return; } goto L_00393DF8; } }
L_00393E64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00393E70:
    set32(c.r[3], ld32((c.r[4].w[0] + 280u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00393EE4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 15008u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00390000u < 16384u) { entry = entries_0064[(t - 0x00390000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00393E9C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00393EEC; } }
L_00393EA8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00393EEC; } }
L_00393EB4:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00393EEC; } }
L_00393EC0:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00393EEC; } }
L_00393ECC:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00393EEC; } }
L_00393ED8:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00393EEC; } }
L_00393EE4:
    set32(c.r[3], 0u + 4u);
    st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00393EEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = ld8((c.r[3].w[0] - 17640u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00393F34; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00393F50; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 280u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 60u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00393F50; } }
    st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_00393F2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00393F50; } }
L_00393F34:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 60u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00393F50; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00393F2Cu | kUnwind; return; } goto L_00393F2C; } }
L_00393F50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00393F60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 8u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1056u));
    c.r[17].d[0] = ld8((c.r[5].w[0] + 1057u));
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st8((c.r[5].w[0] + 1057u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] << 2);
    st8((c.r[5].w[0] + 1056u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 1060u), 0u);
    set32(c.r[16], c.r[2].w[0] + 92u);
    set32(c.r[2], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { [[clang::musttail]] return unit_0065(c, 2u, depth); } }
L_00393FA8:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 220u));
    set32(c.r[2], 0u + 42u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0065(c, 3u, depth); } }
L_00393FB8:
    set32(c.r[3], ld32((c.r[5].w[0] + 1048u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00393FCC; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 1052u)));
    st32((c.r[3].w[0] + 1052u), c.r[2].w[0]);
    c.budget -= 2;
L_00393FCC:
    set32(c.r[3], ld32((c.r[5].w[0] + 1052u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0065(c, 4u, depth); } }
    set32(c.r[2], ld32((c.r[5].w[0] + 1048u)));
    st32((c.r[3].w[0] + 1048u), c.r[2].w[0]);
    c.budget -= 2;
L_00393FE0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 18u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0065(c, 5u, depth); } }
L_00393FEC:
    set32(c.r[2], ld32((c.r[4].w[0] + 280u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0065(c, 6u, depth); } }
L_00393FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00394000u);  if (depth < kMaxDepth) unit_0064(c, 369u, depth + 1u); else { c.pc = 0x00393E70u; return; } if (c.pc != 0x00394000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0065(c, 1u, depth);
}

}

#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0044[4096] = {
    1, 2, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 9, 0, 0, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34,
    0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0,
    0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 52,
    0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 57, 0, 0, 0, 0, 0, 58,
    59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0,
    0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 81, 0, 82, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0,
    0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0,
    0, 111, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0,
    0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0,
    131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0,
    0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0,
    0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 0, 183, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202,
    0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219,
    0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 235, 0, 0, 236,
    0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0,
    243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0,
    247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0,
    0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0,
    256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260,
    0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0,
    0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0,
    0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0,
    0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0,
    315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0,
    0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 374, 0,
    375, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 381, 0, 0, 382, 0, 383, 0,
    0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0,
    390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 394, 0, 395, 0, 0, 0, 0, 396,
    0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0,
    0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0,
    409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0,
    412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0,
    426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    432, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0,
    437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0,
    0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0,
    455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0,
    460, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0,
    469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    473, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0,
};

void unit_0044(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00310000;
    case 2u: goto L_00310004;
    case 3u: goto L_00310010;
    case 4u: goto L_00310018;
    case 5u: goto L_00310034;
    case 6u: goto L_00310040;
    case 7u: goto L_0031005C;
    case 8u: goto L_00310068;
    case 9u: goto L_0031006C;
    case 10u: goto L_00310090;
    case 11u: goto L_003100C4;
    case 12u: goto L_003100D0;
    case 13u: goto L_003100F0;
    case 14u: goto L_00310108;
    case 15u: goto L_00310120;
    case 16u: goto L_00310138;
    case 17u: goto L_00310150;
    case 18u: goto L_00310168;
    case 19u: goto L_00310180;
    case 20u: goto L_00310198;
    case 21u: goto L_003101B0;
    case 22u: goto L_003101C8;
    case 23u: goto L_003101E0;
    case 24u: goto L_003101F8;
    case 25u: goto L_00310210;
    case 26u: goto L_00310228;
    case 27u: goto L_0031023C;
    case 28u: goto L_00310250;
    case 29u: goto L_00310268;
    case 30u: goto L_00310280;
    case 31u: goto L_003102A4;
    case 32u: goto L_003102C0;
    case 33u: goto L_003102DC;
    case 34u: goto L_003102FC;
    case 35u: goto L_00310318;
    case 36u: goto L_00310334;
    case 37u: goto L_0031035C;
    case 38u: goto L_00310380;
    case 39u: goto L_003103A4;
    case 40u: goto L_003103E4;
    case 41u: goto L_00310408;
    case 42u: goto L_0031042C;
    case 43u: goto L_0031047C;
    case 44u: goto L_003104AC;
    case 45u: goto L_003104E0;
    case 46u: goto L_00310520;
    case 47u: goto L_00310538;
    case 48u: goto L_0031055C;
    case 49u: goto L_00310590;
    case 50u: goto L_003105D8;
    case 51u: goto L_003105F4;
    case 52u: goto L_003105FC;
    case 53u: goto L_00310614;
    case 54u: goto L_00310624;
    case 55u: goto L_00310634;
    case 56u: goto L_00310660;
    case 57u: goto L_00310664;
    case 58u: goto L_0031067C;
    case 59u: goto L_00310680;
    case 60u: goto L_00310690;
    case 61u: goto L_003106A0;
    case 62u: goto L_003106D0;
    case 63u: goto L_003106E4;
    case 64u: goto L_003106F8;
    case 65u: goto L_0031071C;
    case 66u: goto L_00310734;
    case 67u: goto L_00310748;
    case 68u: goto L_00310764;
    case 69u: goto L_00310774;
    case 70u: goto L_00310804;
    case 71u: goto L_00310814;
    case 72u: goto L_003108B0;
    case 73u: goto L_003108C0;
    case 74u: goto L_003108D8;
    case 75u: goto L_003108F0;
    case 76u: goto L_00310910;
    case 77u: goto L_00310924;
    case 78u: goto L_00310928;
    case 79u: goto L_00310948;
    case 80u: goto L_0031095C;
    case 81u: goto L_00310964;
    case 82u: goto L_0031096C;
    case 83u: goto L_00310988;
    case 84u: goto L_003109A4;
    case 85u: goto L_003109AC;
    case 86u: goto L_003109B4;
    case 87u: goto L_003109D8;
    case 88u: goto L_003109E0;
    case 89u: goto L_00310A08;
    case 90u: goto L_00310A50;
    case 91u: goto L_00310A80;
    case 92u: goto L_00310ABC;
    case 93u: goto L_00310AD4;
    case 94u: goto L_00310DEC;
    case 95u: goto L_00310E30;
    case 96u: goto L_00310E5C;
    case 97u: goto L_00310E68;
    case 98u: goto L_00310E78;
    case 99u: goto L_00310E8C;
    case 100u: goto L_00310EB0;
    case 101u: goto L_00310EDC;
    case 102u: goto L_00310EE4;
    case 103u: goto L_00310F00;
    case 104u: goto L_00310F50;
    case 105u: goto L_00310F70;
    case 106u: goto L_00310F80;
    case 107u: goto L_00310FAC;
    case 108u: goto L_00310FBC;
    case 109u: goto L_00310FE4;
    case 110u: goto L_00310FEC;
    case 111u: goto L_00311004;
    case 112u: goto L_00311010;
    case 113u: goto L_00311024;
    case 114u: goto L_00311040;
    case 115u: goto L_00311074;
    case 116u: goto L_0031109C;
    case 117u: goto L_003110B0;
    case 118u: goto L_003110C8;
    case 119u: goto L_003110CC;
    case 120u: goto L_003110E8;
    case 121u: goto L_00311108;
    case 122u: goto L_00311150;
    case 123u: goto L_00311168;
    case 124u: goto L_00311170;
    case 125u: goto L_0031118C;
    case 126u: goto L_003111A0;
    case 127u: goto L_00311200;
    case 128u: goto L_00311238;
    case 129u: goto L_0031124C;
    case 130u: goto L_00311278;
    case 131u: goto L_00311280;
    case 132u: goto L_00311290;
    case 133u: goto L_003112B0;
    case 134u: goto L_003112C4;
    case 135u: goto L_00311340;
    case 136u: goto L_0031135C;
    case 137u: goto L_00311370;
    case 138u: goto L_00311384;
    case 139u: goto L_00311398;
    case 140u: goto L_00311410;
    case 141u: goto L_00311418;
    case 142u: goto L_00311428;
    case 143u: goto L_00311450;
    case 144u: goto L_0031149C;
    case 145u: goto L_003114A8;
    case 146u: goto L_003114B8;
    case 147u: goto L_003114E8;
    case 148u: goto L_003114F0;
    case 149u: goto L_00311508;
    case 150u: goto L_00311514;
    case 151u: goto L_00311528;
    case 152u: goto L_00311534;
    case 153u: goto L_0031153C;
    case 154u: goto L_0031154C;
    case 155u: goto L_00311570;
    case 156u: goto L_00311578;
    case 157u: goto L_00311590;
    case 158u: goto L_0031159C;
    case 159u: goto L_003115B8;
    case 160u: goto L_003115C4;
    case 161u: goto L_003115CC;
    case 162u: goto L_003115DC;
    case 163u: goto L_0031160C;
    case 164u: goto L_00311614;
    case 165u: goto L_0031162C;
    case 166u: goto L_00311638;
    case 167u: goto L_0031164C;
    case 168u: goto L_00311658;
    case 169u: goto L_00311668;
    case 170u: goto L_003116B0;
    case 171u: goto L_0031180C;
    case 172u: goto L_0031188C;
    case 173u: goto L_003119EC;
    case 174u: goto L_00311A6C;
    case 175u: goto L_00311BCC;
    case 176u: goto L_00311C1C;
    case 177u: goto L_00311C34;
    case 178u: goto L_00311C44;
    case 179u: goto L_00311C5C;
    case 180u: goto L_00311CB4;
    case 181u: goto L_00311CBC;
    case 182u: goto L_00311CC4;
    case 183u: goto L_00311CD0;
    case 184u: goto L_00311CDC;
    case 185u: goto L_00311CE4;
    case 186u: goto L_00311D00;
    case 187u: goto L_00311D34;
    case 188u: goto L_00311D5C;
    case 189u: goto L_00311D70;
    case 190u: goto L_00311D88;
    case 191u: goto L_00311D98;
    case 192u: goto L_00311DA8;
    case 193u: goto L_00311DC8;
    case 194u: goto L_00311DD8;
    case 195u: goto L_00311E00;
    case 196u: goto L_00311E08;
    case 197u: goto L_00311E58;
    case 198u: goto L_00311E74;
    case 199u: goto L_00311EA8;
    case 200u: goto L_00311ED0;
    case 201u: goto L_00311EE4;
    case 202u: goto L_00311EFC;
    case 203u: goto L_00311F0C;
    case 204u: goto L_00311F18;
    case 205u: goto L_00311F38;
    case 206u: goto L_00311F48;
    case 207u: goto L_00311F70;
    case 208u: goto L_00311FA8;
    case 209u: goto L_00311FB8;
    case 210u: goto L_00311FC0;
    case 211u: goto L_00311FE0;
    case 212u: goto L_00311FF8;
    case 213u: goto L_00312048;
    case 214u: goto L_00312064;
    case 215u: goto L_00312098;
    case 216u: goto L_003120C0;
    case 217u: goto L_003120D4;
    case 218u: goto L_003120EC;
    case 219u: goto L_003120FC;
    case 220u: goto L_00312108;
    case 221u: goto L_00312128;
    case 222u: goto L_00312138;
    case 223u: goto L_00312168;
    case 224u: goto L_003121A0;
    case 225u: goto L_003121B0;
    case 226u: goto L_003121B8;
    case 227u: goto L_003121D8;
    case 228u: goto L_003121F0;
    case 229u: goto L_00312240;
    case 230u: goto L_00312250;
    case 231u: goto L_00312260;
    case 232u: goto L_003122A0;
    case 233u: goto L_003122D4;
    case 234u: goto L_003122E0;
    case 235u: goto L_003122F0;
    case 236u: goto L_003122FC;
    case 237u: goto L_00312318;
    case 238u: goto L_00312320;
    case 239u: goto L_00312338;
    case 240u: goto L_00312348;
    case 241u: goto L_0031235C;
    case 242u: goto L_00312370;
    case 243u: goto L_00312380;
    case 244u: goto L_003123B4;
    case 245u: goto L_003123DC;
    case 246u: goto L_003123EC;
    case 247u: goto L_00312400;
    case 248u: goto L_00312410;
    case 249u: goto L_00312444;
    case 250u: goto L_0031246C;
    case 251u: goto L_00312478;
    case 252u: goto L_00312488;
    case 253u: goto L_00312498;
    case 254u: goto L_003124CC;
    case 255u: goto L_003124F4;
    case 256u: goto L_00312500;
    case 257u: goto L_00312510;
    case 258u: goto L_00312520;
    case 259u: goto L_00312554;
    case 260u: goto L_0031257C;
    case 261u: goto L_00312588;
    case 262u: goto L_00312598;
    case 263u: goto L_003125A8;
    case 264u: goto L_003125DC;
    case 265u: goto L_00312604;
    case 266u: goto L_00312620;
    case 267u: goto L_00312628;
    case 268u: goto L_00312648;
    case 269u: goto L_00312670;
    case 270u: goto L_00312698;
    case 271u: goto L_003126A0;
    case 272u: goto L_003126B0;
    case 273u: goto L_003126C0;
    case 274u: goto L_00312708;
    case 275u: goto L_0031272C;
    case 276u: goto L_00312738;
    case 277u: goto L_00312760;
    case 278u: goto L_00312788;
    case 279u: goto L_003127A0;
    case 280u: goto L_003127B8;
    case 281u: goto L_003127D0;
    case 282u: goto L_003127E8;
    case 283u: goto L_00312800;
    case 284u: goto L_00312818;
    case 285u: goto L_00312830;
    case 286u: goto L_00312848;
    case 287u: goto L_00312860;
    case 288u: goto L_00312878;
    case 289u: goto L_00312890;
    case 290u: goto L_003128A8;
    case 291u: goto L_003128C0;
    case 292u: goto L_003128D8;
    case 293u: goto L_003128F0;
    case 294u: goto L_00312908;
    case 295u: goto L_00312920;
    case 296u: goto L_00312938;
    case 297u: goto L_00312950;
    case 298u: goto L_00312968;
    case 299u: goto L_00312980;
    case 300u: goto L_00312998;
    case 301u: goto L_003129B0;
    case 302u: goto L_003129C8;
    case 303u: goto L_003129E0;
    case 304u: goto L_003129F8;
    case 305u: goto L_00312A10;
    case 306u: goto L_00312A28;
    case 307u: goto L_00312A40;
    case 308u: goto L_00312A58;
    case 309u: goto L_00312A70;
    case 310u: goto L_00312A88;
    case 311u: goto L_00312AA0;
    case 312u: goto L_00312AB8;
    case 313u: goto L_00312AD0;
    case 314u: goto L_00312AE8;
    case 315u: goto L_00312B00;
    case 316u: goto L_00312B18;
    case 317u: goto L_00312B30;
    case 318u: goto L_00312B48;
    case 319u: goto L_00312B60;
    case 320u: goto L_00312B78;
    case 321u: goto L_00312B90;
    case 322u: goto L_00312BA8;
    case 323u: goto L_00312BC0;
    case 324u: goto L_00312BDC;
    case 325u: goto L_00312C04;
    case 326u: goto L_00312C2C;
    case 327u: goto L_00312C54;
    case 328u: goto L_00312C7C;
    case 329u: goto L_00312CA4;
    case 330u: goto L_00312CCC;
    case 331u: goto L_00312CF4;
    case 332u: goto L_00312D1C;
    case 333u: goto L_00312D44;
    case 334u: goto L_00312D6C;
    case 335u: goto L_00312D94;
    case 336u: goto L_00312DBC;
    case 337u: goto L_00312DE4;
    case 338u: goto L_00312E0C;
    case 339u: goto L_00312E34;
    case 340u: goto L_00312E5C;
    case 341u: goto L_00312E84;
    case 342u: goto L_00312EAC;
    case 343u: goto L_00312ED4;
    case 344u: goto L_00312EFC;
    case 345u: goto L_00312F24;
    case 346u: goto L_00312F4C;
    case 347u: goto L_00312F74;
    case 348u: goto L_00312F9C;
    case 349u: goto L_00312FC4;
    case 350u: goto L_00312FEC;
    case 351u: goto L_00313014;
    case 352u: goto L_0031303C;
    case 353u: goto L_00313064;
    case 354u: goto L_0031308C;
    case 355u: goto L_003130B4;
    case 356u: goto L_003130DC;
    case 357u: goto L_00313104;
    case 358u: goto L_0031312C;
    case 359u: goto L_00313154;
    case 360u: goto L_0031317C;
    case 361u: goto L_003131A4;
    case 362u: goto L_003131CC;
    case 363u: goto L_003131F4;
    case 364u: goto L_0031321C;
    case 365u: goto L_00313244;
    case 366u: goto L_0031326C;
    case 367u: goto L_00313294;
    case 368u: goto L_003132BC;
    case 369u: goto L_003132E4;
    case 370u: goto L_00313310;
    case 371u: goto L_0031333C;
    case 372u: goto L_0031335C;
    case 373u: goto L_0031336C;
    case 374u: goto L_00313378;
    case 375u: goto L_00313380;
    case 376u: goto L_00313398;
    case 377u: goto L_003133A4;
    case 378u: goto L_003133B4;
    case 379u: goto L_003133C8;
    case 380u: goto L_003133D4;
    case 381u: goto L_003133E4;
    case 382u: goto L_003133F0;
    case 383u: goto L_003133F8;
    case 384u: goto L_00313410;
    case 385u: goto L_00313420;
    case 386u: goto L_00313430;
    case 387u: goto L_0031344C;
    case 388u: goto L_00313464;
    case 389u: goto L_00313478;
    case 390u: goto L_00313480;
    case 391u: goto L_0031349C;
    case 392u: goto L_003134C0;
    case 393u: goto L_003134D8;
    case 394u: goto L_003134E0;
    case 395u: goto L_003134E8;
    case 396u: goto L_003134FC;
    case 397u: goto L_00313514;
    case 398u: goto L_0031352C;
    case 399u: goto L_00313544;
    case 400u: goto L_0031355C;
    case 401u: goto L_00313570;
    case 402u: goto L_00313594;
    case 403u: goto L_003135A4;
    case 404u: goto L_003135B0;
    case 405u: goto L_003135BC;
    case 406u: goto L_003135D0;
    case 407u: goto L_003135E0;
    case 408u: goto L_003135F0;
    case 409u: goto L_00313600;
    case 410u: goto L_00313620;
    case 411u: goto L_00313660;
    case 412u: goto L_00313680;
    case 413u: goto L_003136A0;
    case 414u: goto L_003136C4;
    case 415u: goto L_003136E0;
    case 416u: goto L_00313708;
    case 417u: goto L_00313730;
    case 418u: goto L_00313754;
    case 419u: goto L_00313770;
    case 420u: goto L_003137A4;
    case 421u: goto L_003137B8;
    case 422u: goto L_003137C8;
    case 423u: goto L_00313818;
    case 424u: goto L_00313840;
    case 425u: goto L_00313870;
    case 426u: goto L_00313880;
    case 427u: goto L_00313890;
    case 428u: goto L_003138D8;
    case 429u: goto L_00313910;
    case 430u: goto L_00313920;
    case 431u: goto L_00313948;
    case 432u: goto L_00313980;
    case 433u: goto L_00313990;
    case 434u: goto L_003139A0;
    case 435u: goto L_003139B0;
    case 436u: goto L_003139E8;
    case 437u: goto L_00313A00;
    case 438u: goto L_00313A70;
    case 439u: goto L_00313A90;
    case 440u: goto L_00313AA0;
    case 441u: goto L_00313ABC;
    case 442u: goto L_00313AD8;
    case 443u: goto L_00313B08;
    case 444u: goto L_00313B94;
    case 445u: goto L_00313BA0;
    case 446u: goto L_00313BC8;
    case 447u: goto L_00313C40;
    case 448u: goto L_00313C60;
    case 449u: goto L_00313C70;
    case 450u: goto L_00313C98;
    case 451u: goto L_00313D00;
    case 452u: goto L_00313D38;
    case 453u: goto L_00313D48;
    case 454u: goto L_00313D60;
    case 455u: goto L_00313D80;
    case 456u: goto L_00313D98;
    case 457u: goto L_00313DB0;
    case 458u: goto L_00313DD0;
    case 459u: goto L_00313DF4;
    case 460u: goto L_00313E00;
    case 461u: goto L_00313E08;
    case 462u: goto L_00313E20;
    case 463u: goto L_00313E30;
    case 464u: goto L_00313E70;
    case 465u: goto L_00313EB0;
    case 466u: goto L_00313EC0;
    case 467u: goto L_00313ED0;
    case 468u: goto L_00313EF0;
    case 469u: goto L_00313F00;
    case 470u: goto L_00313F20;
    case 471u: goto L_00313F30;
    case 472u: goto L_00313F40;
    case 473u: goto L_00313F80;
    case 474u: goto L_00313F84;
    case 475u: goto L_00313FE0;
    case 476u: goto L_00313FE8;
    default: bad_entry(c, 0x00310000u); return;
    }
L_00310000:
    set32(c.r[5], c.r[5].w[0] - 3695u);
    c.budget -= 1;
L_00310004:
    set32(c.r[6], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310010u); set32(c.r[7], c.r[17].w[0] + 28u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00310010u) [[unlikely]] return; }
L_00310010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030EE60u | kUnwind; return; } [[clang::musttail]] return unit_0043(c, 171u, depth); } }
L_00310018:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3709u);
    set32(c.r[6], c.r[17].w[0] + 8u);
    set32(c.r[7], c.r[17].w[0] + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310034u); set32(c.r[8], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00310034u) [[unlikely]] return; }
L_00310034:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030EE60u | kUnwind; return; } [[clang::musttail]] return unit_0043(c, 171u, depth); } }
L_00310040:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3709u);
    set32(c.r[6], c.r[17].w[0] + 8u);
    set32(c.r[7], c.r[17].w[0] + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031005Cu); set32(c.r[8], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x0031005Cu) [[unlikely]] return; }
L_0031005C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0030EE60u | kUnwind; return; } [[clang::musttail]] return unit_0043(c, 171u, depth); } }
L_00310068:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0031006C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 4624u);  c.pc = t; return; }
L_00310090:
    set32(c.r[29], c.r[29].w[0] - 4176u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 4172u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 4944u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003100C4u); st32((c.r[29].w[0] + 4172u), 0u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003100C4u) [[unlikely]] return; }
L_003100C4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003100D8; } }
L_003100D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00310574; } }
L_003100D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 4172u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 3688u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003100F0u); set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x003100F0u) [[unlikely]] return; }
L_003100F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00310290; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310108u); set32(c.r[5], c.r[5].w[0] - 3669u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00310108u) [[unlikely]] return; }
L_00310108:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003102AC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310120u); set32(c.r[5], c.r[5].w[0] - 3650u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00310120u) [[unlikely]] return; }
L_00310120:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003102C8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310138u); set32(c.r[5], c.r[5].w[0] - 3637u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00310138u) [[unlikely]] return; }
L_00310138:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003102E8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310150u); set32(c.r[5], c.r[5].w[0] - 3620u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00310150u) [[unlikely]] return; }
L_00310150:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00310304; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310168u); set32(c.r[5], c.r[5].w[0] - 3603u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00310168u) [[unlikely]] return; }
L_00310168:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00310320; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310180u); set32(c.r[5], c.r[5].w[0] - 3590u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00310180u) [[unlikely]] return; }
L_00310180:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00310340; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310198u); set32(c.r[5], c.r[5].w[0] - 3569u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00310198u) [[unlikely]] return; }
L_00310198:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00310364; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003101B0u); set32(c.r[5], c.r[5].w[0] - 3548u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x003101B0u) [[unlikely]] return; }
L_003101B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00310388; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003101C8u); set32(c.r[5], c.r[5].w[0] - 3533u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x003101C8u) [[unlikely]] return; }
L_003101C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003103C8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003101E0u); set32(c.r[5], c.r[5].w[0] - 3514u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x003101E0u) [[unlikely]] return; }
L_003101E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003103EC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003101F8u); set32(c.r[5], c.r[5].w[0] - 3495u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x003101F8u) [[unlikely]] return; }
L_003101F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00310410; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310210u); set32(c.r[5], c.r[5].w[0] - 3480u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00310210u) [[unlikely]] return; }
L_00310210:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00310450; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310228u); set32(c.r[5], c.r[5].w[0] - 3470u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00310228u) [[unlikely]] return; }
L_00310228:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00310498; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031023Cu); set32(c.r[4], c.r[4].w[0] - 3454u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0031023Cu) [[unlikely]] return; }
L_0031023C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] - 3454u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310250u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 65u, depth + 1u); else { c.pc = 0x002351F8u; return; } if (c.pc != 0x00310250u) [[unlikely]] return; }
L_00310250:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003104CC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310268u); set32(c.r[5], c.r[5].w[0] - 3439u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00310268u) [[unlikely]] return; }
L_00310268:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00310504; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310280u); set32(c.r[5], c.r[5].w[0] - 3428u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00310280u) [[unlikely]] return; }
L_00310280:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00310528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 128u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003100D0u | kUnwind; return; } goto L_003100D0; } }
L_00310290:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003102A4u); set32(c.r[5], c.r[5].w[0] - 3924u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003102A4u) [[unlikely]] return; }
L_003102A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003100D0u | kUnwind; return; } goto L_003100D0; } }
L_003102AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003102C0u); set32(c.r[5], c.r[5].w[0] - 3924u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003102C0u) [[unlikely]] return; }
L_003102C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003100D0u | kUnwind; return; } goto L_003100D0; } }
L_003102C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3924u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003102DCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003102DCu) [[unlikely]] return; }
L_003102DC:
    c.f[0] = ld32((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003100D0u | kUnwind; return; } goto L_003100D0; } }
L_003102E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003102FCu); set32(c.r[5], c.r[5].w[0] - 3924u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003102FCu) [[unlikely]] return; }
L_003102FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003100D0u | kUnwind; return; } goto L_003100D0; } }
L_00310304:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310318u); set32(c.r[5], c.r[5].w[0] - 3924u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00310318u) [[unlikely]] return; }
L_00310318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003100D0u | kUnwind; return; } goto L_003100D0; } }
L_00310320:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3924u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310334u); set32(c.r[6], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00310334u) [[unlikely]] return; }
L_00310334:
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003100D0u | kUnwind; return; } goto L_003100D0; } }
L_00310340:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3920u);
    set32(c.r[6], c.r[16].w[0] + 16u);
    set32(c.r[7], c.r[16].w[0] + 20u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031035Cu); set32(c.r[8], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x0031035Cu) [[unlikely]] return; }
L_0031035C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003100D0u | kUnwind; return; } goto L_003100D0; } }
L_00310364:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3920u);
    set32(c.r[6], c.r[16].w[0] + 32u);
    set32(c.r[7], c.r[16].w[0] + 36u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310380u); set32(c.r[8], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00310380u) [[unlikely]] return; }
L_00310380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003100D0u | kUnwind; return; } goto L_003100D0; } }
L_00310388:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3920u);
    set32(c.r[6], c.r[16].w[0] + 16u);
    set32(c.r[7], c.r[16].w[0] + 20u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003103A4u); set32(c.r[8], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003103A4u) [[unlikely]] return; }
L_003103A4:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003100D0u | kUnwind; return; } goto L_003100D0; } }
L_003103C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3920u);
    set32(c.r[6], c.r[16].w[0] + 48u);
    set32(c.r[7], c.r[16].w[0] + 52u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003103E4u); set32(c.r[8], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003103E4u) [[unlikely]] return; }
L_003103E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003100D0u | kUnwind; return; } goto L_003100D0; } }
L_003103EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3920u);
    set32(c.r[6], c.r[16].w[0] + 64u);
    set32(c.r[7], c.r[16].w[0] + 68u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310408u); set32(c.r[8], c.r[16].w[0] + 72u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00310408u) [[unlikely]] return; }
L_00310408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003100D0u | kUnwind; return; } goto L_003100D0; } }
L_00310410:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3920u);
    set32(c.r[6], c.r[16].w[0] + 32u);
    set32(c.r[7], c.r[16].w[0] + 36u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031042Cu); set32(c.r[8], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x0031042Cu) [[unlikely]] return; }
L_0031042C:
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 76u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003100D0u | kUnwind; return; } goto L_003100D0; } }
L_00310450:
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[16].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] - 3407u);
    set32(c.r[6], c.r[29].w[0] + 4168u);
    set32(c.r[7], c.r[29].w[0] + 4164u);
    set32(c.r[8], c.r[16].w[0] + 84u);
    set32(c.r[9], c.r[16].w[0] + 88u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031047Cu); set32(c.r[10], c.r[16].w[0] + 92u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x0031047Cu) [[unlikely]] return; }
L_0031047C:
    set32(c.r[3], ld32((c.r[29].w[0] + 4168u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[16].w[0] + 81u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 4164u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 82u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003100D0u | kUnwind; return; } goto L_003100D0; } }
L_00310498:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003104ACu); set32(c.r[6], c.r[29].w[0] + 4160u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003104ACu) [[unlikely]] return; }
L_003104AC:
    set32(c.r[5], ld32((c.r[29].w[0] + 4160u)));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 96u));
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003100D0u | kUnwind; return; } goto L_003100D0; } }
L_003104CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003104E0u); set32(c.r[6], c.r[29].w[0] + 4156u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003104E0u) [[unlikely]] return; }
L_003104E0:
    set32(c.r[5], ld32((c.r[29].w[0] + 4156u)));
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 96u));
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[5].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003100D0u | kUnwind; return; } goto L_003100D0; } }
L_00310504:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3920u);
    set32(c.r[6], c.r[16].w[0] + 112u);
    set32(c.r[7], c.r[16].w[0] + 116u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310520u); set32(c.r[8], c.r[16].w[0] + 120u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00310520u) [[unlikely]] return; }
L_00310520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003100D0u | kUnwind; return; } goto L_003100D0; } }
L_00310528:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310538u); set32(c.r[5], c.r[5].w[0] - 3391u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00310538u) [[unlikely]] return; }
L_00310538:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031054C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 128u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003100D0u | kUnwind; return; } goto L_003100D0; } }
L_0031054C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031055Cu); set32(c.r[5], c.r[5].w[0] - 3374u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0031055Cu) [[unlikely]] return; }
L_0031055C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00310570; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 128u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003100D0u | kUnwind; return; } goto L_003100D0; } }
L_00310570:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00310574:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 4176u);  c.pc = t; return; }
L_00310590:
    set32(c.r[29], c.r[29].w[0] - 8464u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 8416u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[20] = ld32((c.r[29].w[0] + 220u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003105D8u); st32((c.r[29].w[0] + 204u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x003105D8u) [[unlikely]] return; }
L_003105D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[29].w[0] + 8444u);
    set32(c.r[3], c.r[3].w[0] - 28448u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 8452u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003105F4u); st32((c.r[2].w[0]), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x003105F4u) [[unlikely]] return; }
L_003105F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003105FCu); set32(c.r[4], c.r[29].w[0] + 8452u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x003105FCu) [[unlikely]] return; }
L_003105FC:
    set32(c.r[4], c.r[29].w[0] + 8416u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00310614u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00310614u) [[unlikely]] return; }
L_00310614:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 8452u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310624u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00310624u) [[unlikely]] return; }
L_00310624:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0031063C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003109BC; } }
L_00310634:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00310DF4; } }
L_0031063C:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 24u));
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[30].d[0] = 0ull + 0ull;
    st16((c.r[29].w[0] + 176u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003109E0; } }
L_00310660:
    set32(c.r[3], ld32((c.r[29].w[0] + 8436u)));
    c.budget -= 1;
L_00310664:
    set32(c.r[2], ld32((c.r[29].w[0] + 8432u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00310934; } }
    set32(c.r[23], c.r[29].w[0] + 8424u);
    set32(c.r[16], c.r[29].w[0] + 8436u);
    set32(c.r[22], c.r[29].w[0] + 8432u);
    c.budget -= 3;
L_0031067C:
    set32(c.r[17], c.r[29].w[0] + 4320u);
    c.budget -= 1;
L_00310680:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[23].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00310A3C; } }
L_00310690:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_003106A0:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_00310A60; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00310680u | kUnwind; return; } goto L_00310680; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00310A60; } }
L_003106D0:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 8456u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003106E4u); set32(c.r[5], c.r[5].w[0] - 3351u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003106E4u) [[unlikely]] return; }
L_003106E4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00310924; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003106F8u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003106F8u) [[unlikely]] return; }
L_003106F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00310708; } }
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 2;
L_00310708:
    set32(c.r[3], ld32((c.r[29].w[0] + 8456u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(3ll);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_00310924; } }
L_0031071C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], 0u + 123u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00310924; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(4ll);  if (t) { goto L_00310924; } }
L_00310734:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 224u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310748u); set32(c.r[5], c.r[5].w[0] - 3348u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00310748u) [[unlikely]] return; }
L_00310748:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00310924; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310764u); set32(c.r[5], c.r[5].w[0] - 3345u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00310764u) [[unlikely]] return; }
L_00310764:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003107F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310774u); set32(c.r[4], 0u + 144u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00310774u) [[unlikely]] return; }
L_00310774:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003107E4; } }
    st8((c.r[2].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = 0ull & 1ull;
    st32((c.r[2].w[0] + 84u), 0u);
    set32(c.r[7], c.r[3].w[0] << 1);
    st8((c.r[2].w[0] + 81u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u - 3u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], 0u - 2u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[2].w[0] + 12u), 0u);
    c.r[8].d[0] = ld8((c.r[2].w[0] + 96u));
    c.r[5].d[0] = c.r[8].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 96u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 96u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 96u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 128u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[2].w[0] + 112u), 0u);
    st32((c.r[2].w[0] + 116u), 0u);
    st32((c.r[2].w[0] + 120u), 0u);
    st32((c.r[2].w[0] + 124u), c.f[20]);
    c.budget -= 26;
L_003107E4:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(5ll);  if (t) { goto L_00310924; } }
L_003107F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310804u); set32(c.r[5], c.r[5].w[0] - 3337u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00310804u) [[unlikely]] return; }
L_00310804:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003108A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310814u); set32(c.r[4], 0u + 240u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00310814u) [[unlikely]] return; }
L_00310814:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00310890; } }
    st32((c.r[2].w[0] + 8u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 12u), 0u);
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 128u), 0u);
    st32((c.r[2].w[0] + 180u), 0u);
    st32((c.r[2].w[0] + 200u), 0u);
    st32((c.r[2].w[0] + 160u), 0u);
    st32((c.r[2].w[0] + 148u), 0u);
    st32((c.r[2].w[0] + 216u), 0u);
    st32((c.r[2].w[0] + 64u), 0u);
    st32((c.r[2].w[0] + 132u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 184u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 204u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 164u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 152u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 220u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 68u), c.r[4].w[0]);
    st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 188u), 0u);
    st32((c.r[2].w[0] + 208u), 0u);
    st32((c.r[2].w[0] + 168u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 29;
L_00310890:
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(7ll);  if (t) { goto L_00310924; } }
L_003108A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003108B0u); set32(c.r[5], c.r[5].w[0] - 3328u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x003108B0u) [[unlikely]] return; }
L_003108B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00310924; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (t) { goto L_00310924; } }
L_003108C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], 0u + 123u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00310924; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(6ll);  if (t) { goto L_00310924; } }
L_003108D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], 0u + 125u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00310AB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(4ll);  if (t) { goto L_00310924; } }
L_003108F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], 0u + 123u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00310924; } }
    c.r[2].d[0] = ld16((c.r[29].w[0] + 176u));
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[30].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00310924; } }
L_00310910:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], 0u + 125u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00310AC4; } }
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(4ll);
    c.budget -= 1;
L_00310924:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00310928:
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031067Cu | kUnwind; return; } goto L_0031067C; } }
L_00310934:
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[18].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00310ADC; } }
L_00310948:
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00310AE8; } }
L_0031095C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310964u); set32(c.r[4], 0u + 384u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00310964u) [[unlikely]] return; }
L_00310964:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00310AF4; } }
L_0031096C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00310DD0; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00310988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310988u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00310988u) [[unlikely]] return; }
L_00310988:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003109A4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003109A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003109A4u);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003109A4u) [[unlikely]] return; }
L_003109A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003109ACu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003109ACu) [[unlikely]] return; }
L_003109AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00310DD0; } }
L_003109B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00310DF4; } }
L_003109BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[29].w[0] + 8444u);
    set32(c.r[3], c.r[3].w[0] - 28448u);
    set32(c.r[4], c.r[29].w[0] + 8416u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003109D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x003109D8u) [[unlikely]] return; }
L_003109D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00310634u | kUnwind; return; } goto L_00310634; } }
L_003109E0:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310A08u); set32(c.r[5], c.r[5].w[0] - 3326u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00310A08u) [[unlikely]] return; }
L_00310A08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00310A1C; } }
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 176u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00310660u | kUnwind; return; } goto L_00310660; } }
L_00310A1C:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 24u));
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003109E0u | kUnwind; return; } goto L_003109E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 8436u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00310664u | kUnwind; return; } goto L_00310664; } }
L_00310A3C:
    set32(c.r[4], c.r[29].w[0] + 8416u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00310A50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00310A50u) [[unlikely]] return; }
L_00310A50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00310690u | kUnwind; return; } goto L_00310690; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003106A0u | kUnwind; return; } goto L_003106A0; } }
L_00310A60:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[17], c.r[29].w[0] + 4320u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3316u);
    set32(c.r[6], c.r[29].w[0] + 8460u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310A80u); st32((c.r[29].w[0] + 8460u), 0u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00310A80u) [[unlikely]] return; }
L_00310A80:
    set32(c.r[3], ld32((c.r[29].w[0] + 8460u)));
    c.r[2].d[0] = c.r[21].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[17].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00310924u | kUnwind; return; } goto L_00310924; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 4992u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00310000u < 16384u) { entry = entries_0044[(t - 0x00310000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00310AB0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310ABCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 10u, depth + 1u); else { c.pc = 0x00310090u; return; } if (c.pc != 0x00310ABCu) [[unlikely]] return; }
L_00310ABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00310928u | kUnwind; return; } goto L_00310928; } }
L_00310AC4:
    set32(c.r[7], ld32((c.r[29].w[0] + 204u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310AD4u); c.r[6].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0043(c, 169u, depth + 1u); else { c.pc = 0x0030EE10u; return; } if (c.pc != 0x00310AD4u) [[unlikely]] return; }
L_00310AD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00310924u | kUnwind; return; } goto L_00310924; } }
L_00310ADC:
    st32((c.r[18].w[0]), c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00310948u | kUnwind; return; } goto L_00310948; } }
L_00310AE8:
    st32((c.r[18].w[0] + 8u), c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 12u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031095Cu | kUnwind; return; } goto L_0031095C; } }
L_00310AF4:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 52u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 56u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 60u));
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 64u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    st32((c.r[16].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 72u));
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 76u));
    st32((c.r[16].w[0] + 76u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 80u));
    st8((c.r[16].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 81u));
    st8((c.r[16].w[0] + 81u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 82u));
    st8((c.r[16].w[0] + 82u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 84u));
    st32((c.r[16].w[0] + 84u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 92u));
    st32((c.r[16].w[0] + 92u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 96u));
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[3].w[0] + 112u));
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 116u));
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 120u));
    st32((c.r[16].w[0] + 120u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 124u));
    st32((c.r[16].w[0] + 124u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 128u)));
    st8((c.r[16].w[0] + 128u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    st16((c.r[16].w[0] + 148u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 6u));
    st16((c.r[16].w[0] + 150u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 152u), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    st32((c.r[16].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[16].w[0] + 160u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 20u)));
    st8((c.r[16].w[0] + 164u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    st32((c.r[16].w[0] + 172u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 32u)));
    st8((c.r[16].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 33u)));
    st8((c.r[16].w[0] + 177u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    st32((c.r[16].w[0] + 180u), c.f[1]);
    st32((c.r[16].w[0] + 184u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 44u));
    c.f[2] = ld32((c.r[4].w[0] + 48u));
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    st32((c.r[16].w[0] + 188u), c.f[3]);
    st32((c.r[16].w[0] + 192u), c.f[2]);
    st32((c.r[16].w[0] + 196u), c.f[1]);
    st32((c.r[16].w[0] + 200u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 60u));
    c.f[2] = ld32((c.r[4].w[0] + 64u));
    c.f[1] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = ld32((c.r[4].w[0] + 72u));
    st32((c.r[16].w[0] + 204u), c.f[3]);
    st32((c.r[16].w[0] + 208u), c.f[2]);
    st32((c.r[16].w[0] + 212u), c.f[1]);
    st32((c.r[16].w[0] + 216u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    st32((c.r[16].w[0] + 224u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 84u));
    st32((c.r[16].w[0] + 228u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 88u));
    st32((c.r[16].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 92u));
    st32((c.r[16].w[0] + 236u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 96u));
    st32((c.r[16].w[0] + 240u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 100u));
    st32((c.r[16].w[0] + 244u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    st32((c.r[16].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    st32((c.r[16].w[0] + 252u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 112u));
    c.f[2] = ld32((c.r[4].w[0] + 116u));
    c.f[1] = ld32((c.r[4].w[0] + 120u));
    c.f[0] = ld32((c.r[4].w[0] + 124u));
    st32((c.r[16].w[0] + 256u), c.f[3]);
    st32((c.r[16].w[0] + 260u), c.f[2]);
    st32((c.r[16].w[0] + 264u), c.f[1]);
    st32((c.r[16].w[0] + 268u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 128u));
    c.f[0] = ld32((c.r[4].w[0] + 132u));
    st32((c.r[16].w[0] + 272u), c.f[1]);
    st32((c.r[16].w[0] + 276u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 136u));
    c.f[2] = ld32((c.r[4].w[0] + 140u));
    c.f[1] = ld32((c.r[4].w[0] + 144u));
    c.f[0] = ld32((c.r[4].w[0] + 148u));
    st32((c.r[16].w[0] + 280u), c.f[3]);
    st32((c.r[16].w[0] + 284u), c.f[2]);
    st32((c.r[16].w[0] + 288u), c.f[1]);
    st32((c.r[16].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 152u));
    st32((c.r[16].w[0] + 296u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 156u));
    c.f[2] = ld32((c.r[4].w[0] + 160u));
    c.f[1] = ld32((c.r[4].w[0] + 164u));
    c.f[0] = ld32((c.r[4].w[0] + 168u));
    st32((c.r[16].w[0] + 300u), c.f[3]);
    st32((c.r[16].w[0] + 304u), c.f[2]);
    st32((c.r[16].w[0] + 308u), c.f[1]);
    st32((c.r[16].w[0] + 312u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 172u));
    c.f[2] = ld32((c.r[4].w[0] + 176u));
    c.f[1] = ld32((c.r[4].w[0] + 180u));
    c.f[0] = ld32((c.r[4].w[0] + 184u));
    st32((c.r[16].w[0] + 316u), c.f[3]);
    st32((c.r[16].w[0] + 320u), c.f[2]);
    st32((c.r[16].w[0] + 324u), c.f[1]);
    st32((c.r[16].w[0] + 328u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 188u));
    st32((c.r[16].w[0] + 332u), c.f[0]);
    c.f[3] = ld32((c.r[4].w[0] + 192u));
    c.f[2] = ld32((c.r[4].w[0] + 196u));
    c.f[1] = ld32((c.r[4].w[0] + 200u));
    c.f[0] = ld32((c.r[4].w[0] + 204u));
    st32((c.r[16].w[0] + 336u), c.f[3]);
    st32((c.r[16].w[0] + 340u), c.f[2]);
    st32((c.r[16].w[0] + 344u), c.f[1]);
    st32((c.r[16].w[0] + 348u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 208u));
    st32((c.r[16].w[0] + 352u), c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 212u));
    c.f[1] = ld32((c.r[4].w[0] + 216u));
    c.f[0] = ld32((c.r[4].w[0] + 220u));
    st32((c.r[16].w[0] + 356u), c.f[2]);
    st32((c.r[16].w[0] + 360u), c.f[1]);
    st32((c.r[16].w[0] + 364u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 224u));
    c.budget -= 183;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 368u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031096Cu | kUnwind; return; } goto L_0031096C; } }
L_00310DD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[29].w[0] + 8444u);
    set32(c.r[3], c.r[3].w[0] - 28448u);
    set32(c.r[4], c.r[29].w[0] + 8416u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310DECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x00310DECu) [[unlikely]] return; }
L_00310DEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003109B4u | kUnwind; return; } goto L_003109B4; } }
L_00310DF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 8464u);  c.pc = t; return; }
L_00310E30:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310E5Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00310E5Cu) [[unlikely]] return; }
L_00310E5C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310E68u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x00310E68u) [[unlikely]] return; }
L_00310E68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310E78u); set32(c.r[5], c.r[5].w[0] - 3312u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x00310E78u) [[unlikely]] return; }
L_00310E78:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310E8Cu); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_0044(c, 49u, depth + 1u); else { c.pc = 0x00310590u; return; } if (c.pc != 0x00310E8Cu) [[unlikely]] return; }
L_00310E8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_00310EB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[4].w[0] + 32u));
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00310EE4; } }
L_00310EDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00310F30; } }
L_00310EE4:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310F00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00310F00u) [[unlikely]] return; }
L_00310F00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00310F10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00310F30; } }
L_00310F10:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 32u));
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00310EE4u | kUnwind; return; } goto L_00310EE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00310EDCu | kUnwind; return; } goto L_00310EDC; } }
L_00310F30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00310F50:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_00310F70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 32u)));  c.pc = t; return; }
L_00310F80:
    set32(c.r[29], c.r[29].w[0] - 416u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310FACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00310FACu) [[unlikely]] return; }
L_00310FAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310FBCu); set32(c.r[5], c.r[5].w[0] - 3307u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x00310FBCu) [[unlikely]] return; }
L_00310FBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[29].w[0] + 412u);
    set32(c.r[2], c.r[2].w[0] - 28400u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310FE4u); st8((c.r[29].w[0] + 136u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00310FE4u) [[unlikely]] return; }
L_00310FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00310FECu); set32(c.r[4], c.r[29].w[0] + 412u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x00310FECu) [[unlikely]] return; }
L_00310FEC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00311004u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00311004u) [[unlikely]] return; }
L_00311004:
    set32(c.r[4], c.r[29].w[0] + 412u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311010u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00311010u) [[unlikely]] return; }
L_00311010:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00311024u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00311024u) [[unlikely]] return; }
L_00311024:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00311194; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[16], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311040u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00311040u) [[unlikely]] return; }
L_00311040:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[20], c.r[29].w[0] + 132u);
    set32(c.r[5], ld32((c.r[20].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], c.r[5].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[21], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_003110A4; } }
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[19], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311074u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x00311074u) [[unlikely]] return; }
L_00311074:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[19].d[0]; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_003110BC; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[21].w[0] + c.r[19].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031109Cu); set32(c.r[6], c.r[16].w[0] - c.r[19].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031109Cu) [[unlikely]] return; }
L_0031109C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_003110C0; } }
L_003110A4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003110B0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003110B0u) [[unlikely]] return; }
L_003110B0:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003110BC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_003110C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003110C8u);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x003110C8u) [[unlikely]] return; }
L_003110C8:
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_003110CC:
    set32(c.r[6], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_003111B8; } }
    set32(c.r[5], c.r[17].w[0] << 2);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
L_003110E8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00311118; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00311130; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[3].d[0]; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003111A8; } }
L_00311108:
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_00311130; } }
    c.budget -= 1;
L_00311118:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00311130; } }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00311130:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003110E8u | kUnwind; return; } goto L_003110E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003111B8; } }
    c.budget -= 1;
L_00311150:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00311170; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311168u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 411u, depth + 1u); else { c.pc = 0x00313660u; return; } if (c.pc != 0x00311168u) [[unlikely]] return; }
L_00311168:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00311170:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003110CCu | kUnwind; return; } goto L_003110CC; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031118Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x0031118Cu) [[unlikely]] return; }
L_0031118C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003111D0; } }
L_00311194:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003111A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x003111A0u) [[unlikely]] return; }
L_003111A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003111D0; } }
L_003111A8:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311108u | kUnwind; return; } goto L_00311108; } }
L_003111B8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311170u | kUnwind; return; } goto L_00311170; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311150u | kUnwind; return; } goto L_00311150; } }
    c.budget -= 1;
L_003111D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_00311200:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00311270; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00311238:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031124Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0031124Cu) [[unlikely]] return; }
L_0031124C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0031125C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00311430; } }
L_0031125C:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311238u | kUnwind; return; } goto L_00311238; } }
L_00311270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311278u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x00311278u) [[unlikely]] return; }
L_00311278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311280u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00311280u) [[unlikely]] return; }
L_00311280:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311290u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00311290u) [[unlikely]] return; }
L_00311290:
    set32(c.r[17], c.r[29].w[0] + 124u);
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[17].w[0]), 0u);
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003112B0u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0044(c, 415u, depth + 1u); else { c.pc = 0x003136E0u; return; } if (c.pc != 0x003112B0u) [[unlikely]] return; }
L_003112B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00311330; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003112C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 8u));
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 10u));
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 20u));
    st16((c.r[3].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 22u));
    st16((c.r[3].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 24u));
    st16((c.r[3].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 27;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003112C4u | kUnwind; return; } goto L_003112C4; } }
L_00311330:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311340u); set32(c.r[6], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0044(c, 232u, depth + 1u); else { c.pc = 0x003122A0u; return; } if (c.pc != 0x00311340u) [[unlikely]] return; }
L_00311340:
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[3], c.r[18].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    set32(c.r[5], c.r[29].w[0] + 104u);
    set32(c.r[18], c.r[3].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031135Cu); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_007E(c, 276u, depth + 1u); else { c.pc = 0x003FA2A0u; return; } if (c.pc != 0x0031135Cu) [[unlikely]] return; }
L_0031135C:
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[4], c.r[16].w[0] + 20u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311370u); st32((c.r[2].w[0] + 4u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0044(c, 417u, depth + 1u); else { c.pc = 0x00313730u; return; } if (c.pc != 0x00311370u) [[unlikely]] return; }
L_00311370:
    set32(c.r[18], c.r[29].w[0] + 124u);
    set32(c.r[4], c.r[16].w[0] + 20u);
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311384u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 415u, depth + 1u); else { c.pc = 0x003136E0u; return; } if (c.pc != 0x00311384u) [[unlikely]] return; }
L_00311384:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00311408; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00311398:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 8u));
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 10u));
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 20u));
    st16((c.r[3].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 22u));
    st16((c.r[3].w[0] + 22u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 24u));
    st16((c.r[3].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 27;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311398u | kUnwind; return; } goto L_00311398; } }
    c.budget -= 1;
L_00311408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311410u); set32(c.r[4], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0044(c, 417u, depth + 1u); else { c.pc = 0x00313730u; return; } if (c.pc != 0x00311410u) [[unlikely]] return; }
L_00311410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 120u);  if (t) { goto L_00311420; } }
L_00311418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00311430; } }
L_00311420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311428u);  if (depth < kMaxDepth) unit_0044(c, 417u, depth + 1u); else { c.pc = 0x00313730u; return; } if (c.pc != 0x00311428u) [[unlikely]] return; }
L_00311428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311418u | kUnwind; return; } goto L_00311418; } }
L_00311430:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00311450:
    set32(c.r[29], c.r[29].w[0] - 1392u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[29].w[0] + 1072u);
    st32((c.r[29].w[0] + 204u), c.r[5].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[5].w[0] - 3291u);
    st16((c.r[29].w[0] + 176u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031149Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0031149Cu) [[unlikely]] return; }
L_0031149C:
    set32(c.r[4], c.r[29].w[0] + 816u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003114A8u); set32(c.r[5], c.r[29].w[0] + 1072u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003114A8u) [[unlikely]] return; }
L_003114A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 816u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003114B8u); set32(c.r[5], c.r[5].w[0] - 3275u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x003114B8u) [[unlikely]] return; }
L_003114B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[29].w[0] + 1388u);
    set32(c.r[2], c.r[2].w[0] - 28400u);
    set32(c.r[5], c.r[29].w[0] + 816u);
    st32((c.r[29].w[0] + 812u), c.r[2].w[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 1368u), 0u);
    st32((c.r[29].w[0] + 1372u), 0u);
    st32((c.r[29].w[0] + 784u), 0u);
    st32((c.r[29].w[0] + 800u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003114E8u); st8((c.r[29].w[0] + 808u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x003114E8u) [[unlikely]] return; }
L_003114E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003114F0u); set32(c.r[4], c.r[29].w[0] + 1388u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x003114F0u) [[unlikely]] return; }
L_003114F0:
    set32(c.r[4], c.r[29].w[0] + 784u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00311508u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00311508u) [[unlikely]] return; }
L_00311508:
    set32(c.r[4], c.r[29].w[0] + 1388u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311514u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00311514u) [[unlikely]] return; }
L_00311514:
    set32(c.r[4], c.r[29].w[0] + 784u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00311528u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00311528u) [[unlikely]] return; }
L_00311528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00311CEC; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 1;
L_00311534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031153Cu); set32(c.r[4], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0031153Cu) [[unlikely]] return; }
L_0031153C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031154Cu); set32(c.r[5], c.r[5].w[0] - 3249u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x0031154Cu) [[unlikely]] return; }
L_0031154C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[29].w[0] + 1384u);
    set32(c.r[2], c.r[2].w[0] - 28400u);
    set32(c.r[5], c.r[29].w[0] + 528u);
    st32((c.r[29].w[0] + 524u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 496u), 0u);
    st32((c.r[29].w[0] + 512u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311570u); st8((c.r[29].w[0] + 520u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00311570u) [[unlikely]] return; }
L_00311570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311578u); set32(c.r[4], c.r[29].w[0] + 1384u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x00311578u) [[unlikely]] return; }
L_00311578:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00311590u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00311590u) [[unlikely]] return; }
L_00311590:
    set32(c.r[4], c.r[29].w[0] + 1384u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031159Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x0031159Cu) [[unlikely]] return; }
L_0031159C:
    st32((c.r[29].w[0] + 1360u), 0u);
    set32(c.r[4], c.r[29].w[0] + 496u);
    st32((c.r[29].w[0] + 1364u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003115B8u); c.r[23].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003115B8u) [[unlikely]] return; }
L_003115B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00311E60; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 1;
L_003115C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003115CCu); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003115CCu) [[unlikely]] return; }
L_003115CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003115DCu); set32(c.r[5], c.r[5].w[0] - 3224u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x003115DCu) [[unlikely]] return; }
L_003115DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[29].w[0] + 1380u);
    set32(c.r[2], c.r[2].w[0] - 28400u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    c.r[22].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 1352u), 0u);
    st32((c.r[29].w[0] + 1356u), 0u);
    st32((c.r[29].w[0] + 208u), 0u);
    st32((c.r[29].w[0] + 224u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031160Cu); st8((c.r[29].w[0] + 232u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x0031160Cu) [[unlikely]] return; }
L_0031160C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311614u); set32(c.r[4], c.r[29].w[0] + 1380u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x00311614u) [[unlikely]] return; }
L_00311614:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031162Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031162Cu) [[unlikely]] return; }
L_0031162C:
    set32(c.r[4], c.r[29].w[0] + 1380u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311638u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00311638u) [[unlikely]] return; }
L_00311638:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0031164Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0031164Cu) [[unlikely]] return; }
L_0031164C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00312050; } }
    set32(c.r[2], c.r[20].w[0] + c.r[22].w[0]);
    c.budget -= 1;
L_00311658:
    set32(c.r[4], c.r[21].w[0] + 20u);
    set32(c.r[5], c.r[23].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311668u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 415u, depth + 1u); else { c.pc = 0x003136E0u; return; } if (c.pc != 0x00311668u) [[unlikely]] return; }
L_00311668:
    c.r[1].d[0] = 0ll < c.r[20].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_00311848; } }
    c.r[1].d[0] = c.r[20].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[10], c.r[20].w[0] - 8u);  if (t) { goto L_00311800; } }
    c.r[1].d[0] = c.r[20].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003116A8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[20].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003116A8; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003116A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00311800; } }
L_003116B0:
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[15], c.r[2].w[0] + 6u);
    set32(c.r[8], ld32((c.r[29].w[0] + 1368u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[5], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[14], c.r[15].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[14], c.r[14].w[0] - c.r[15].w[0]);
    set32(c.r[4], c.r[2].w[0] + 2u);
    set32(c.r[7], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[11], c.r[11].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[12], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[13], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + 3u);
    set32(c.r[8], c.r[2].w[0] + 5u);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + 4u);
    st32((c.r[12].w[0] + 4u), c.r[13].w[0]);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[13], c.r[2].w[0] + 7u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[12], c.r[13].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[12], c.r[12].w[0] - c.r[13].w[0]);
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[13], c.r[14].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[16], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 1368u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[12], c.r[12].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[14], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[14], ld32((c.r[14].w[0] + 4u)));
    set32(c.r[8], c.r[16].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = c.r[11].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    st32((c.r[8].w[0] + 4u), c.r[14].w[0]);
    set32(c.r[14], ld32((c.r[29].w[0] + 1368u)));
    set32(c.r[8], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[14], c.r[14].w[0] + c.r[9].w[0]);
    set32(c.r[6], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[8], ld32((c.r[14].w[0] + 8u)));
    st32((c.r[6].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 1368u)));
    set32(c.r[6], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[8].w[0] + 12u)));
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 1368u)));
    set32(c.r[5], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[6], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 16u)));
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 1368u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 20u)));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 1368u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[13].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 1368u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + c.r[12].w[0]);
    c.budget -= 84;
    { const bool t = c.r[7].d[0] != 0ull; st32((c.r[3].w[0] + 4u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003116B0u | kUnwind; return; } goto L_003116B0; } }
L_00311800:
    c.r[1].d[0] = c.r[11].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00311848; } }
L_0031180C:
    set32(c.r[6], ld32((c.r[29].w[0] + 1368u)));
    set32(c.r[7], c.r[11].w[0] << 2);
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[11], c.r[11].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[11].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 4u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031180Cu | kUnwind; return; } goto L_0031180C; } }
    c.budget -= 1;
L_00311848:
    c.r[1].d[0] = 0ll < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_00311A28; } }
    c.r[1].d[0] = c.r[23].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[8], c.r[23].w[0] - 8u);  if (t) { goto L_003119E0; } }
    c.r[1].d[0] = c.r[23].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00311884; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[23].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00311884; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00311884:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003119E0; } }
L_0031188C:
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[7], c.r[9].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[11], ld32((c.r[29].w[0] + 1360u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    set32(c.r[10], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[5], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[9], c.r[9].w[0] + 8u);
    set32(c.r[4], c.r[2].w[0] + 2u);
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[11].w[0] + c.r[7].w[0]);
    set32(c.r[13], ld32((c.r[4].w[0])));
    set32(c.r[12], c.r[5].w[0] + c.r[10].w[0]);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[10], c.r[2].w[0] + 3u);
    set32(c.r[3], c.r[10].w[0] << 3);
    set32(c.r[11], c.r[2].w[0] + 5u);
    set32(c.r[10], c.r[3].w[0] - c.r[10].w[0]);
    st32((c.r[12].w[0] + 4u), c.r[13].w[0]);
    set32(c.r[4], c.r[2].w[0] + 4u);
    set32(c.r[16], ld32((c.r[29].w[0] + 1360u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[13], c.r[2].w[0] + 6u);
    set32(c.r[12], c.r[13].w[0] << 3);
    set32(c.r[4], c.r[10].w[0] << 2);
    set32(c.r[12], c.r[12].w[0] - c.r[13].w[0]);
    set32(c.r[10], c.r[11].w[0] << 3);
    set32(c.r[10], c.r[10].w[0] - c.r[11].w[0]);
    set32(c.r[15], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[11], c.r[2].w[0] + 7u);
    set32(c.r[14], c.r[10].w[0] << 2);
    set32(c.r[13], c.r[16].w[0] + c.r[7].w[0]);
    set32(c.r[10], c.r[11].w[0] << 3);
    set32(c.r[13], ld32((c.r[13].w[0] + 4u)));
    set32(c.r[10], c.r[10].w[0] - c.r[11].w[0]);
    set32(c.r[11], c.r[12].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[12], c.r[15].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    st32((c.r[12].w[0] + 4u), c.r[13].w[0]);
    set32(c.r[13], ld32((c.r[29].w[0] + 1360u)));
    set32(c.r[12], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[13], c.r[13].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[12].w[0] + c.r[5].w[0]);
    set32(c.r[12], ld32((c.r[13].w[0] + 8u)));
    st32((c.r[5].w[0] + 4u), c.r[12].w[0]);
    set32(c.r[12], ld32((c.r[29].w[0] + 1360u)));
    set32(c.r[5], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[12], c.r[12].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[12].w[0] + 12u)));
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 1360u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 1360u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[14].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 1360u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 1360u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    c.budget -= 84;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[3].w[0] + 4u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031188Cu | kUnwind; return; } goto L_0031188C; } }
    c.budget -= 1;
L_003119E0:
    c.r[1].d[0] = c.r[9].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00311A28; } }
L_003119EC:
    set32(c.r[6], ld32((c.r[29].w[0] + 1360u)));
    set32(c.r[7], c.r[9].w[0] << 2);
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 4u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003119ECu | kUnwind; return; } goto L_003119EC; } }
    c.budget -= 1;
L_00311A28:
    c.r[1].d[0] = 0ll < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_00311C08; } }
    c.r[1].d[0] = c.r[22].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[8], c.r[22].w[0] - 8u);  if (t) { goto L_00311BC0; } }
    c.r[1].d[0] = c.r[22].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00311A64; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[22].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00311A64; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00311A64:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00311BC0; } }
L_00311A6C:
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[7], c.r[9].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[11], ld32((c.r[29].w[0] + 1352u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    set32(c.r[10], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[5], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[9], c.r[9].w[0] + 8u);
    set32(c.r[4], c.r[2].w[0] + 2u);
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[4], c.r[11].w[0] + c.r[7].w[0]);
    set32(c.r[13], ld32((c.r[4].w[0])));
    set32(c.r[12], c.r[5].w[0] + c.r[10].w[0]);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[10], c.r[2].w[0] + 3u);
    set32(c.r[3], c.r[10].w[0] << 3);
    set32(c.r[11], c.r[2].w[0] + 5u);
    set32(c.r[10], c.r[3].w[0] - c.r[10].w[0]);
    st32((c.r[12].w[0] + 4u), c.r[13].w[0]);
    set32(c.r[4], c.r[2].w[0] + 4u);
    set32(c.r[16], ld32((c.r[29].w[0] + 1352u)));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[13], c.r[2].w[0] + 6u);
    set32(c.r[12], c.r[13].w[0] << 3);
    set32(c.r[4], c.r[10].w[0] << 2);
    set32(c.r[12], c.r[12].w[0] - c.r[13].w[0]);
    set32(c.r[10], c.r[11].w[0] << 3);
    set32(c.r[10], c.r[10].w[0] - c.r[11].w[0]);
    set32(c.r[15], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[11], c.r[2].w[0] + 7u);
    set32(c.r[14], c.r[10].w[0] << 2);
    set32(c.r[13], c.r[16].w[0] + c.r[7].w[0]);
    set32(c.r[10], c.r[11].w[0] << 3);
    set32(c.r[13], ld32((c.r[13].w[0] + 4u)));
    set32(c.r[10], c.r[10].w[0] - c.r[11].w[0]);
    set32(c.r[11], c.r[12].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[12], c.r[15].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = c.r[9].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    st32((c.r[12].w[0] + 4u), c.r[13].w[0]);
    set32(c.r[13], ld32((c.r[29].w[0] + 1352u)));
    set32(c.r[12], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[13], c.r[13].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[12].w[0] + c.r[5].w[0]);
    set32(c.r[12], ld32((c.r[13].w[0] + 8u)));
    st32((c.r[5].w[0] + 4u), c.r[12].w[0]);
    set32(c.r[12], ld32((c.r[29].w[0] + 1352u)));
    set32(c.r[5], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[12], c.r[12].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[12].w[0] + 12u)));
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 1352u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 1352u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[14].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 1352u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 1352u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    c.budget -= 84;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[3].w[0] + 4u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311A6Cu | kUnwind; return; } goto L_00311A6C; } }
    c.budget -= 1;
L_00311BC0:
    c.r[1].d[0] = c.r[9].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00311C08; } }
L_00311BCC:
    set32(c.r[6], ld32((c.r[29].w[0] + 1352u)));
    set32(c.r[7], c.r[9].w[0] << 2);
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0] + 4u), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311BCCu | kUnwind; return; } goto L_00311BCC; } }
    c.budget -= 1;
L_00311C08:
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00311CA0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00311C1C:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311C34u); set32(c.r[6], c.r[29].w[0] + 1336u);  if (depth < kMaxDepth) unit_0044(c, 232u, depth + 1u); else { c.pc = 0x003122A0u; return; } if (c.pc != 0x00311C34u) [[unlikely]] return; }
L_00311C34:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[5], c.r[29].w[0] + 1336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311C44u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_007E(c, 276u, depth + 1u); else { c.pc = 0x003FA2A0u; return; } if (c.pc != 0x00311C44u) [[unlikely]] return; }
L_00311C44:
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[4], c.r[4].w[0] + 9968u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311C5Cu); set32(c.r[18], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0030(c, 605u, depth + 1u); else { c.pc = 0x002C2D30u; return; } if (c.pc != 0x00311C5Cu) [[unlikely]] return; }
L_00311C5C:
    st16((c.r[18].w[0] + 20u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    c.r[2].d[0] = ld16((c.r[29].w[0] + 176u));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 20u));
    c.r[2].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00311C88; } }
    st16((c.r[29].w[0] + 176u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00311C88:
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311C1Cu | kUnwind; return; } goto L_00311C1C; } }
    c.budget -= 1;
L_00311CA0:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 176u));
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311CB4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x00311CB4u) [[unlikely]] return; }
L_00311CB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00312248; } }
L_00311CBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311CC4u); set32(c.r[4], c.r[29].w[0] + 1360u);  if (depth < kMaxDepth) unit_0044(c, 413u, depth + 1u); else { c.pc = 0x003136A0u; return; } if (c.pc != 0x00311CC4u) [[unlikely]] return; }
L_00311CC4:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311CD0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x00311CD0u) [[unlikely]] return; }
L_00311CD0:
    set32(c.r[4], c.r[29].w[0] + 784u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311CDCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x00311CDCu) [[unlikely]] return; }
L_00311CDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 1368u);  if (t) { goto L_00312258; } }
L_00311CE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00312268; } }
L_00311CEC:
    set32(c.r[3], ld32((c.r[29].w[0] + 800u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 796u)));
    set32(c.r[19], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311D00u); set32(c.r[4], c.r[19].w[0] + 1u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00311D00u) [[unlikely]] return; }
L_00311D00:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[17], c.r[29].w[0] + 804u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 792u)));
    set32(c.r[2], c.r[5].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], ld32((c.r[21].w[0])));  if (t) { goto L_00311D64; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311D34u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x00311D34u) [[unlikely]] return; }
L_00311D34:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[16].d[0]; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00311D7C; } }
    set32(c.r[4], c.r[29].w[0] + 784u);
    set32(c.r[5], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00311D5Cu); set32(c.r[6], c.r[19].w[0] - c.r[16].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00311D5Cu) [[unlikely]] return; }
L_00311D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 784u);  if (t) { goto L_00311D80; } }
L_00311D64:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311D70u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x00311D70u) [[unlikely]] return; }
L_00311D70:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00311D7C:
    set32(c.r[4], c.r[29].w[0] + 784u);
    c.budget -= 1;
L_00311D80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311D88u);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x00311D88u) [[unlikely]] return; }
L_00311D88:
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 4;
L_00311D98:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00311DC8; } }
    c.budget -= 1;
L_00311DA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00311DF0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[16].d[0];  if (t) { goto L_00311DF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311DA8u | kUnwind; return; } goto L_00311DA8; } }
L_00311DC8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311DA8u | kUnwind; return; } goto L_00311DA8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00311E48; } }
L_00311DD8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311D98u | kUnwind; return; } goto L_00311D98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 204u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311534u | kUnwind; return; } goto L_00311534; } }
L_00311DF0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311DC8u | kUnwind; return; } goto L_00311DC8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00311E28; } }
L_00311E00:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 2;
L_00311E08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00311E40; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[16].d[0];  if (t) { goto L_00311E40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311E08u | kUnwind; return; } goto L_00311E08; } }
L_00311E28:
    set32(c.r[2], ld32((c.r[29].w[0] + 1368u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311E00u | kUnwind; return; } goto L_00311E00; } }
    c.budget -= 1;
L_00311E40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311DC8u | kUnwind; return; } goto L_00311DC8; } }
L_00311E48:
    set32(c.r[4], c.r[29].w[0] + 1368u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311E58u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 411u, depth + 1u); else { c.pc = 0x00313660u; return; } if (c.pc != 0x00311E58u) [[unlikely]] return; }
L_00311E58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311DD8u | kUnwind; return; } goto L_00311DD8; } }
L_00311E60:
    set32(c.r[3], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 508u)));
    set32(c.r[16], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311E74u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00311E74u) [[unlikely]] return; }
L_00311E74:
    st32((c.r[21].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[18], c.r[29].w[0] + 516u);
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 504u)));
    set32(c.r[2], c.r[5].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], ld32((c.r[21].w[0] + 16u)));  if (t) { goto L_00311ED8; } }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[17], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311EA8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x00311EA8u) [[unlikely]] return; }
L_00311EA8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[17].d[0]; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_00311EF0; } }
    set32(c.r[4], c.r[29].w[0] + 496u);
    set32(c.r[5], c.r[19].w[0] + c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00311ED0u); set32(c.r[6], c.r[16].w[0] - c.r[17].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00311ED0u) [[unlikely]] return; }
L_00311ED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 496u);  if (t) { goto L_00311EF4; } }
L_00311ED8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311EE4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x00311EE4u) [[unlikely]] return; }
L_00311EE4:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00311EF0:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 1;
L_00311EF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311EFCu);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x00311EFCu) [[unlikely]] return; }
L_00311EFC:
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[30].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
L_00311F0C:
    set32(c.r[19], ld32((c.r[21].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_00311F38; } }
L_00311F18:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00311F60; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[16].d[0];  if (t) { goto L_00311F60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311F18u | kUnwind; return; } goto L_00311F18; } }
L_00311F38:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311F18u | kUnwind; return; } goto L_00311F18; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_00312038; } }
L_00311F48:
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.r[2].d[0] = c.r[30].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311F0Cu | kUnwind; return; } goto L_00311F0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 204u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003115C4u | kUnwind; return; } goto L_003115C4; } }
L_00311F60:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311F38u | kUnwind; return; } goto L_00311F38; } }
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_00311F70:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00311F90; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00311F90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311F70u | kUnwind; return; } goto L_00311F70; } }
L_00311F90:
    c.r[2].d[0] = 0ll < c.r[20].sd[0] ? 1ull : 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00311FE0; } }
    c.budget -= 1;
L_00311FA8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00311FC0; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00312020; } }
L_00311FB8:
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 2;
L_00311FC0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311F38u | kUnwind; return; } goto L_00311F38; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311F38u | kUnwind; return; } goto L_00311F38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311FC0u | kUnwind; return; } goto L_00311FC0; } }
L_00311FE0:
    set32(c.r[2], ld32((c.r[29].w[0] + 1368u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00311FF8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00311FF8u) [[unlikely]] return; }
L_00311FF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00312008; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311FA8u | kUnwind; return; } goto L_00311FA8; } }
L_00312008:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311FE0u | kUnwind; return; } goto L_00311FE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311FA8u | kUnwind; return; } goto L_00311FA8; } }
L_00312020:
    set32(c.r[2], ld32((c.r[29].w[0] + 1360u)));
    set32(c.r[3], c.r[23].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[19].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311FB8u | kUnwind; return; } goto L_00311FB8; } }
    c.budget -= 1;
L_00312038:
    set32(c.r[4], c.r[29].w[0] + 1360u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312048u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 411u, depth + 1u); else { c.pc = 0x00313660u; return; } if (c.pc != 0x00312048u) [[unlikely]] return; }
L_00312048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311F48u | kUnwind; return; } goto L_00311F48; } }
L_00312050:
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[16], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312064u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00312064u) [[unlikely]] return; }
L_00312064:
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[19], c.r[29].w[0] + 228u);
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[2], c.r[5].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], ld32((c.r[21].w[0] + 8u)));  if (t) { goto L_003120C8; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312098u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x00312098u) [[unlikely]] return; }
L_00312098:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[17].d[0]; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_003120E0; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003120C0u); set32(c.r[6], c.r[16].w[0] - c.r[17].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003120C0u) [[unlikely]] return; }
L_003120C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 208u);  if (t) { goto L_003120E4; } }
L_003120C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003120D4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x003120D4u) [[unlikely]] return; }
L_003120D4:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003120E0:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 1;
L_003120E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003120ECu);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x003120ECu) [[unlikely]] return; }
L_003120EC:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.r[30].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[29].w[0] + 160u), 0u);
    set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
L_003120FC:
    set32(c.r[19], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_00312128; } }
L_00312108:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00312158; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[16].d[0];  if (t) { goto L_00312158; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312108u | kUnwind; return; } goto L_00312108; } }
L_00312128:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312108u | kUnwind; return; } goto L_00312108; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_00312230; } }
L_00312138:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003120FCu | kUnwind; return; } goto L_003120FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[20].w[0] + c.r[22].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311658u | kUnwind; return; } goto L_00311658; } }
L_00312158:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312128u | kUnwind; return; } goto L_00312128; } }
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_00312168:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00312188; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00312188; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312168u | kUnwind; return; } goto L_00312168; } }
L_00312188:
    c.r[2].d[0] = 0ll < c.r[20].sd[0] ? 1ull : 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003121D8; } }
    c.budget -= 1;
L_003121A0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_003121B8; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_00312218; } }
L_003121B0:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 2;
L_003121B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[1].d[0] = c.r[2].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312128u | kUnwind; return; } goto L_00312128; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312128u | kUnwind; return; } goto L_00312128; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003121B8u | kUnwind; return; } goto L_003121B8; } }
L_003121D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 1368u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003121F0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x003121F0u) [[unlikely]] return; }
L_003121F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00312200; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003121A0u | kUnwind; return; } goto L_003121A0; } }
L_00312200:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003121D8u | kUnwind; return; } goto L_003121D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003121A0u | kUnwind; return; } goto L_003121A0; } }
L_00312218:
    set32(c.r[2], ld32((c.r[29].w[0] + 1352u)));
    set32(c.r[3], c.r[22].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[19].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003121B0u | kUnwind; return; } goto L_003121B0; } }
    c.budget -= 1;
L_00312230:
    set32(c.r[4], c.r[29].w[0] + 1352u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312240u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0044(c, 411u, depth + 1u); else { c.pc = 0x00313660u; return; } if (c.pc != 0x00312240u) [[unlikely]] return; }
L_00312240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312138u | kUnwind; return; } goto L_00312138; } }
L_00312248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312250u); set32(c.r[4], c.r[29].w[0] + 1352u);  if (depth < kMaxDepth) unit_0044(c, 413u, depth + 1u); else { c.pc = 0x003136A0u; return; } if (c.pc != 0x00312250u) [[unlikely]] return; }
L_00312250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311CBCu | kUnwind; return; } goto L_00311CBC; } }
L_00312258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312260u);  if (depth < kMaxDepth) unit_0044(c, 413u, depth + 1u); else { c.pc = 0x003136A0u; return; } if (c.pc != 0x00312260u) [[unlikely]] return; }
L_00312260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00311CE4u | kUnwind; return; } goto L_00311CE4; } }
L_00312268:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1392u);  c.pc = t; return; }
L_003122A0:
    set32(c.r[29], c.r[29].w[0] - 656u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 384u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003122D4u); set32(c.r[5], c.r[5].w[0] - 3291u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003122D4u) [[unlikely]] return; }
L_003122D4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003122E0u); set32(c.r[4], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x003122E0u) [[unlikely]] return; }
L_003122E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003122F0u); set32(c.r[5], c.r[5].w[0] - 3312u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x003122F0u) [[unlikely]] return; }
L_003122F0:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003122FCu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x003122FCu) [[unlikely]] return; }
L_003122FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[19], c.r[29].w[0] + 380u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    set32(c.r[4], c.r[29].w[0] + 648u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312318u); set32(c.r[5], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00312318u) [[unlikely]] return; }
L_00312318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312320u); set32(c.r[4], c.r[29].w[0] + 648u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x00312320u) [[unlikely]] return; }
L_00312320:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00312338u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00312338u) [[unlikely]] return; }
L_00312338:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 648u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312348u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00312348u) [[unlikely]] return; }
L_00312348:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00312630; } }
    set32(c.r[20], c.r[29].w[0] + 96u);
    set32(c.r[17], c.r[29].w[0] + 360u);
    set32(c.r[16], c.r[29].w[0] + 372u);
    c.budget -= 3;
L_0031235C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003123A0; } }
    c.budget -= 1;
L_00312370:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_00312380:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003123C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0031235Cu | kUnwind; return; } goto L_0031235C; } }
L_003123A0:
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003123B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003123B4u) [[unlikely]] return; }
L_003123B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312370u | kUnwind; return; } goto L_00312370; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312380u | kUnwind; return; } goto L_00312380; } }
    c.budget -= 1;
L_003123C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] - 3351u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003123DCu); set32(c.r[6], c.r[29].w[0] + 652u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003123DCu) [[unlikely]] return; }
L_003123DC:
    set32(c.r[2], ld32((c.r[29].w[0] + 652u)));
    set32(c.r[20], c.r[29].w[0] + 96u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003123EC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00312430; } }
    c.budget -= 1;
L_00312400:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_00312410:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00312458; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003123ECu | kUnwind; return; } goto L_003123EC; } }
L_00312430:
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00312444u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00312444u) [[unlikely]] return; }
L_00312444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312400u | kUnwind; return; } goto L_00312400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312410u | kUnwind; return; } goto L_00312410; } }
    c.budget -= 1;
L_00312458:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] - 3351u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031246Cu); set32(c.r[6], c.r[29].w[0] + 652u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x0031246Cu) [[unlikely]] return; }
L_0031246C:
    set32(c.r[2], ld32((c.r[29].w[0] + 652u)));
    set32(c.r[20], c.r[29].w[0] + 96u);
    st16((c.r[18].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00312478:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003124B8; } }
L_00312488:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_00312498:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003124E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312478u | kUnwind; return; } goto L_00312478; } }
L_003124B8:
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003124CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003124CCu) [[unlikely]] return; }
L_003124CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312488u | kUnwind; return; } goto L_00312488; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312498u | kUnwind; return; } goto L_00312498; } }
    c.budget -= 1;
L_003124E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] - 3351u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003124F4u); set32(c.r[6], c.r[29].w[0] + 652u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003124F4u) [[unlikely]] return; }
L_003124F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 652u)));
    set32(c.r[20], c.r[29].w[0] + 96u);
    st16((c.r[18].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00312500:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00312540; } }
L_00312510:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_00312520:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00312568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312500u | kUnwind; return; } goto L_00312500; } }
L_00312540:
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00312554u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00312554u) [[unlikely]] return; }
L_00312554:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312510u | kUnwind; return; } goto L_00312510; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312520u | kUnwind; return; } goto L_00312520; } }
    c.budget -= 1;
L_00312568:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] - 3351u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031257Cu); set32(c.r[6], c.r[29].w[0] + 652u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x0031257Cu) [[unlikely]] return; }
L_0031257C:
    set32(c.r[2], ld32((c.r[29].w[0] + 652u)));
    set32(c.r[20], c.r[29].w[0] + 96u);
    st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00312588:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003125C8; } }
L_00312598:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_003125A8:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003125F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312588u | kUnwind; return; } goto L_00312588; } }
L_003125C8:
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003125DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003125DCu) [[unlikely]] return; }
L_003125DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312598u | kUnwind; return; } goto L_00312598; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003125A8u | kUnwind; return; } goto L_003125A8; } }
    c.budget -= 1;
L_003125F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] - 3351u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312604u); set32(c.r[6], c.r[29].w[0] + 652u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312604u) [[unlikely]] return; }
L_00312604:
    set32(c.r[2], ld32((c.r[29].w[0] + 652u)));
    set32(c.r[4], c.r[29].w[0] + 352u);
    st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00312620u); c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00312620u) [[unlikely]] return; }
L_00312620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00312630; } }
L_00312628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00312650; } }
L_00312630:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312648u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x00312648u) [[unlikely]] return; }
L_00312648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312628u | kUnwind; return; } goto L_00312628; } }
L_00312650:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_00312670:
    set32(c.r[29], c.r[29].w[0] - 8272u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00312748; } }
L_00312698:
    set32(c.r[16], c.r[29].w[0] + 4160u);
    c.budget -= 2;
L_003126A0:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00312750; } }
L_003126B0:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
L_003126C0:
    c.r[3].d[0] = c.r[4].d[0] << 56;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 10u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_003126E8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003126A0u | kUnwind; return; } goto L_003126A0; } }
L_003126E8:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[16], c.r[29].w[0] + 4160u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3316u);
    set32(c.r[6], c.r[29].w[0] + 8264u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312708u); st32((c.r[29].w[0] + 8264u), 0u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312708u) [[unlikely]] return; }
L_00312708:
    set32(c.r[2], ld32((c.r[29].w[0] + 8264u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[5].w[0] - 4944u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[7], c.r[29].w[0] + 8260u);
    st32((c.r[29].w[0] + 8260u), 0u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031272Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x0031272Cu) [[unlikely]] return; }
L_0031272C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00312770; } }
L_00312738:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312698u | kUnwind; return; } goto L_00312698; } }
L_00312748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003132F8; } }
L_00312750:
    set32(c.r[25], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00312760u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00312760u) [[unlikely]] return; }
L_00312760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003126B0u | kUnwind; return; } goto L_003126B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003126C0u | kUnwind; return; } goto L_003126C0; } }
L_00312770:
    set32(c.r[2], ld32((c.r[29].w[0] + 8260u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[5].w[0] - 3778u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312788u); set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312788u) [[unlikely]] return; }
L_00312788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312BF0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003127A0u); set32(c.r[5], c.r[5].w[0] - 3192u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x003127A0u) [[unlikely]] return; }
L_003127A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312C18; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003127B8u); set32(c.r[5], c.r[5].w[0] - 3187u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x003127B8u) [[unlikely]] return; }
L_003127B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312C40; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003127D0u); set32(c.r[5], c.r[5].w[0] - 3174u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x003127D0u) [[unlikely]] return; }
L_003127D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312C68; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003127E8u); set32(c.r[5], c.r[5].w[0] - 3164u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x003127E8u) [[unlikely]] return; }
L_003127E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312C90; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312800u); set32(c.r[5], c.r[5].w[0] - 3151u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312800u) [[unlikely]] return; }
L_00312800:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312CB8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312818u); set32(c.r[5], c.r[5].w[0] - 3138u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312818u) [[unlikely]] return; }
L_00312818:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312CE0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312830u); set32(c.r[5], c.r[5].w[0] - 3125u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312830u) [[unlikely]] return; }
L_00312830:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312D08; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312848u); set32(c.r[5], c.r[5].w[0] - 3110u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312848u) [[unlikely]] return; }
L_00312848:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312D30; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312860u); set32(c.r[5], c.r[5].w[0] - 3099u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312860u) [[unlikely]] return; }
L_00312860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312D58; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312878u); set32(c.r[5], c.r[5].w[0] - 3085u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312878u) [[unlikely]] return; }
L_00312878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312D80; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312890u); set32(c.r[5], c.r[5].w[0] - 3075u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312890u) [[unlikely]] return; }
L_00312890:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312DA8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003128A8u); set32(c.r[5], c.r[5].w[0] - 3066u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x003128A8u) [[unlikely]] return; }
L_003128A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312DD0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003128C0u); set32(c.r[5], c.r[5].w[0] - 3058u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x003128C0u) [[unlikely]] return; }
L_003128C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312DF8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003128D8u); set32(c.r[5], c.r[5].w[0] - 3050u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x003128D8u) [[unlikely]] return; }
L_003128D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312E20; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003128F0u); set32(c.r[5], c.r[5].w[0] - 3039u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x003128F0u) [[unlikely]] return; }
L_003128F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312E48; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312908u); set32(c.r[5], c.r[5].w[0] - 3032u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312908u) [[unlikely]] return; }
L_00312908:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312E70; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312920u); set32(c.r[5], c.r[5].w[0] - 3020u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312920u) [[unlikely]] return; }
L_00312920:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312E98; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312938u); set32(c.r[5], c.r[5].w[0] - 3010u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312938u) [[unlikely]] return; }
L_00312938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312EC0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312950u); set32(c.r[5], c.r[5].w[0] - 2999u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312950u) [[unlikely]] return; }
L_00312950:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312EE8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312968u); set32(c.r[5], c.r[5].w[0] - 2991u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312968u) [[unlikely]] return; }
L_00312968:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312F10; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312980u); set32(c.r[5], c.r[5].w[0] - 2976u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312980u) [[unlikely]] return; }
L_00312980:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312F38; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312998u); set32(c.r[5], c.r[5].w[0] - 2964u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312998u) [[unlikely]] return; }
L_00312998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312F60; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003129B0u); set32(c.r[5], c.r[5].w[0] - 2953u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x003129B0u) [[unlikely]] return; }
L_003129B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312F88; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003129C8u); set32(c.r[5], c.r[5].w[0] - 2939u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x003129C8u) [[unlikely]] return; }
L_003129C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312FB0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003129E0u); set32(c.r[5], c.r[5].w[0] - 2927u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x003129E0u) [[unlikely]] return; }
L_003129E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00312FD8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003129F8u); set32(c.r[5], c.r[5].w[0] - 2915u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x003129F8u) [[unlikely]] return; }
L_003129F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313000; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312A10u); set32(c.r[5], c.r[5].w[0] - 2905u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312A10u) [[unlikely]] return; }
L_00312A10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313028; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312A28u); set32(c.r[5], c.r[5].w[0] - 2888u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312A28u) [[unlikely]] return; }
L_00312A28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313050; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312A40u); set32(c.r[5], c.r[5].w[0] - 2872u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312A40u) [[unlikely]] return; }
L_00312A40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313078; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312A58u); set32(c.r[5], c.r[5].w[0] - 2856u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312A58u) [[unlikely]] return; }
L_00312A58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003130A0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312A70u); set32(c.r[5], c.r[5].w[0] - 2842u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312A70u) [[unlikely]] return; }
L_00312A70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003130C8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312A88u); set32(c.r[5], c.r[5].w[0] - 2830u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312A88u) [[unlikely]] return; }
L_00312A88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003130F0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312AA0u); set32(c.r[5], c.r[5].w[0] - 2819u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312AA0u) [[unlikely]] return; }
L_00312AA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313118; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312AB8u); set32(c.r[5], c.r[5].w[0] - 2807u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312AB8u) [[unlikely]] return; }
L_00312AB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313140; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312AD0u); set32(c.r[5], c.r[5].w[0] - 2796u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312AD0u) [[unlikely]] return; }
L_00312AD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313168; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312AE8u); set32(c.r[5], c.r[5].w[0] - 2788u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312AE8u) [[unlikely]] return; }
L_00312AE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313190; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312B00u); set32(c.r[5], c.r[5].w[0] - 2773u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312B00u) [[unlikely]] return; }
L_00312B00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003131B8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312B18u); set32(c.r[5], c.r[5].w[0] - 2757u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312B18u) [[unlikely]] return; }
L_00312B18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003131E0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312B30u); set32(c.r[5], c.r[5].w[0] - 2741u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312B30u) [[unlikely]] return; }
L_00312B30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313208; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312B48u); set32(c.r[5], c.r[5].w[0] - 2727u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312B48u) [[unlikely]] return; }
L_00312B48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313230; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312B60u); set32(c.r[5], c.r[5].w[0] - 2717u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312B60u) [[unlikely]] return; }
L_00312B60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313258; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312B78u); set32(c.r[5], c.r[5].w[0] - 2706u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312B78u) [[unlikely]] return; }
L_00312B78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313280; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312B90u); set32(c.r[5], c.r[5].w[0] - 2696u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312B90u) [[unlikely]] return; }
L_00312B90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003132A8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312BA8u); set32(c.r[5], c.r[5].w[0] - 2686u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312BA8u) [[unlikely]] return; }
L_00312BA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003132D0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312BC0u); set32(c.r[5], c.r[5].w[0] - 2680u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00312BC0u) [[unlikely]] return; }
L_00312BC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312BDCu); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312BDCu) [[unlikely]] return; }
L_00312BDC:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 90u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 90u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312BF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312C04u); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312C04u) [[unlikely]] return; }
L_00312C04:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312C18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312C2Cu); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312C2Cu) [[unlikely]] return; }
L_00312C2C:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 2u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312C40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312C54u); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312C54u) [[unlikely]] return; }
L_00312C54:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 40u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 40u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312C68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312C7Cu); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312C7Cu) [[unlikely]] return; }
L_00312C7C:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 42u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312C90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312CA4u); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312CA4u) [[unlikely]] return; }
L_00312CA4:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312CB8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312CCCu); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312CCCu) [[unlikely]] return; }
L_00312CCC:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 46u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 46u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312CE0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312CF4u); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312CF4u) [[unlikely]] return; }
L_00312CF4:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 48u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 48u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312D08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312D1Cu); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312D1Cu) [[unlikely]] return; }
L_00312D1C:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 56u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 56u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312D30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312D44u); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312D44u) [[unlikely]] return; }
L_00312D44:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 62u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 62u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312D58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312D6Cu); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312D6Cu) [[unlikely]] return; }
L_00312D6C:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 68u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 68u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312D80:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312D94u); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312D94u) [[unlikely]] return; }
L_00312D94:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 60u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 60u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312DA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312DBCu); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312DBCu) [[unlikely]] return; }
L_00312DBC:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 50u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 50u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312DD0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312DE4u); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312DE4u) [[unlikely]] return; }
L_00312DE4:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312DF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312E0Cu); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312E0Cu) [[unlikely]] return; }
L_00312E0C:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 8u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312E20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312E34u); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312E34u) [[unlikely]] return; }
L_00312E34:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 72u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 72u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312E48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312E5Cu); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312E5Cu) [[unlikely]] return; }
L_00312E5C:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 70u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 70u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312E70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312E84u); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312E84u) [[unlikely]] return; }
L_00312E84:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 12u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312E98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312EACu); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312EACu) [[unlikely]] return; }
L_00312EAC:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 20u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 20u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312EC0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312ED4u); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312ED4u) [[unlikely]] return; }
L_00312ED4:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 74u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312EE8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312EFCu); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312EFCu) [[unlikely]] return; }
L_00312EFC:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 10u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312F10:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312F24u); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312F24u) [[unlikely]] return; }
L_00312F24:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312F38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312F4Cu); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312F4Cu) [[unlikely]] return; }
L_00312F4C:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 24u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312F60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312F74u); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312F74u) [[unlikely]] return; }
L_00312F74:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 26u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312F88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312F9Cu); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312F9Cu) [[unlikely]] return; }
L_00312F9C:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312FB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312FC4u); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312FC4u) [[unlikely]] return; }
L_00312FC4:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 64u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 64u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00312FD8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00312FECu); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00312FECu) [[unlikely]] return; }
L_00312FEC:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 14u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00313000:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313014u); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00313014u) [[unlikely]] return; }
L_00313014:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 30u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 30u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00313028:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031303Cu); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x0031303Cu) [[unlikely]] return; }
L_0031303C:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 32u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 32u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00313050:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313064u); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00313064u) [[unlikely]] return; }
L_00313064:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 38u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 38u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00313078:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031308Cu); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x0031308Cu) [[unlikely]] return; }
L_0031308C:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 36u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_003130A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003130B4u); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003130B4u) [[unlikely]] return; }
L_003130B4:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 18u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 18u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_003130C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003130DCu); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003130DCu) [[unlikely]] return; }
L_003130DC:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 16u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_003130F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313104u); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00313104u) [[unlikely]] return; }
L_00313104:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 58u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 58u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00313118:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031312Cu); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x0031312Cu) [[unlikely]] return; }
L_0031312C:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 34u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 34u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00313140:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313154u); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00313154u) [[unlikely]] return; }
L_00313154:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 22u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 22u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00313168:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031317Cu); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x0031317Cu) [[unlikely]] return; }
L_0031317C:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 66u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 66u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00313190:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003131A4u); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003131A4u) [[unlikely]] return; }
L_003131A4:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 52u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_003131B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003131CCu); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003131CCu) [[unlikely]] return; }
L_003131CC:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 54u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 54u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_003131E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003131F4u); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003131F4u) [[unlikely]] return; }
L_003131F4:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 76u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 76u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00313208:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031321Cu); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x0031321Cu) [[unlikely]] return; }
L_0031321C:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 78u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 78u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00313230:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313244u); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00313244u) [[unlikely]] return; }
L_00313244:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 80u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 80u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00313258:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031326Cu); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x0031326Cu) [[unlikely]] return; }
L_0031326C:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 82u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 82u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_00313280:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313294u); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x00313294u) [[unlikely]] return; }
L_00313294:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 84u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 84u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_003132A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003132BCu); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003132BCu) [[unlikely]] return; }
L_003132BC:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 86u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 86u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_003132D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3910u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003132E4u); set32(c.r[6], c.r[29].w[0] + 8268u);  if (depth < kMaxDepth) unit_000D(c, 35u, depth + 1u); else { c.pc = 0x00234A40u; return; } if (c.pc != 0x003132E4u) [[unlikely]] return; }
L_003132E4:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 8268u));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 88u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00312738u | kUnwind; return; } goto L_00312738; } }
L_003132F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 8272u);  c.pc = t; return; }
L_00313310:
    set32(c.r[29], c.r[29].w[0] - 384u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031333Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x0031333Cu) [[unlikely]] return; }
L_0031333C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[17], c.r[29].w[0] + 364u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031335Cu); set32(c.r[5], c.r[5].w[0] - 3291u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0031335Cu) [[unlikely]] return; }
L_0031335C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031336Cu); set32(c.r[5], c.r[5].w[0] - 2665u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x0031336Cu) [[unlikely]] return; }
L_0031336C:
    set32(c.r[4], c.r[29].w[0] + 380u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313378u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00313378u) [[unlikely]] return; }
L_00313378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313380u); set32(c.r[4], c.r[29].w[0] + 380u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x00313380u) [[unlikely]] return; }
L_00313380:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313398u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313398u) [[unlikely]] return; }
L_00313398:
    set32(c.r[4], c.r[29].w[0] + 380u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003133A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003133A4u) [[unlikely]] return; }
L_003133A4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003133B4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 269u, depth + 1u); else { c.pc = 0x00312670u; return; } if (c.pc != 0x003133B4u) [[unlikely]] return; }
L_003133B4:
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003133C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003133C8u) [[unlikely]] return; }
L_003133C8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003133D4u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003133D4u) [[unlikely]] return; }
L_003133D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003133E4u); set32(c.r[5], c.r[5].w[0] - 2648u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x003133E4u) [[unlikely]] return; }
L_003133E4:
    set32(c.r[4], c.r[29].w[0] + 376u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003133F0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x003133F0u) [[unlikely]] return; }
L_003133F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003133F8u); set32(c.r[4], c.r[29].w[0] + 376u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x003133F8u) [[unlikely]] return; }
L_003133F8:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313410u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313410u) [[unlikely]] return; }
L_00313410:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 376u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313420u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00313420u) [[unlikely]] return; }
L_00313420:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00313454; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_00313438; } }
L_00313430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003134A8; } }
L_00313438:
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031344Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x0031344Cu) [[unlikely]] return; }
L_0031344C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313430u | kUnwind; return; } goto L_00313430; } }
L_00313454:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313464u); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0044(c, 269u, depth + 1u); else { c.pc = 0x00312670u; return; } if (c.pc != 0x00313464u) [[unlikely]] return; }
L_00313464:
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313478u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313478u) [[unlikely]] return; }
L_00313478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);  if (t) { goto L_00313488; } }
L_00313480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003134A4; } }
L_00313488:
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[2], c.r[2].w[0] - 28448u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031349Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x0031349Cu) [[unlikely]] return; }
L_0031349C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313480u | kUnwind; return; } goto L_00313480; } }
L_003134A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003134A8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_003134C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003134D8u); set32(c.r[4], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_0044(c, 413u, depth + 1u); else { c.pc = 0x003136A0u; return; } if (c.pc != 0x003134D8u) [[unlikely]] return; }
L_003134D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003134E0u); set32(c.r[4], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_0044(c, 417u, depth + 1u); else { c.pc = 0x00313730u; return; } if (c.pc != 0x003134E0u) [[unlikely]] return; }
L_003134E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003134E8u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0044(c, 413u, depth + 1u); else { c.pc = 0x003136A0u; return; } if (c.pc != 0x003134E8u) [[unlikely]] return; }
L_003134E8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00313500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003134FCu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003134FCu) [[unlikely]] return; }
L_003134FC:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00313500:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00313518; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313514u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00313514u) [[unlikely]] return; }
L_00313514:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_00313518:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00313530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031352Cu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0031352Cu) [[unlikely]] return; }
L_0031352C:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_00313530:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00313548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313544u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00313544u) [[unlikely]] return; }
L_00313544:
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 1;
L_00313548:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00313560; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0031355Cu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0031355Cu) [[unlikely]] return; }
L_0031355C:
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 1;
L_00313560:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00313570:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003135D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313594u);  if (depth < kMaxDepth) unit_0044(c, 392u, depth + 1u); else { c.pc = 0x003134C0u; return; } if (c.pc != 0x00313594u) [[unlikely]] return; }
L_00313594:
    set32(c.r[4], c.r[17].w[0] + 36u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003135D8; } }
    set32(c.r[4], c.r[17].w[0] + 28u);
    c.budget -= 1;
L_003135A4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003135E8; } }
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_003135B0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003135F8; } }
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003135BC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003135D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003135D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003135D0u) [[unlikely]] return; }
L_003135D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00313608; } }
L_003135D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003135E0u);  if (depth < kMaxDepth) unit_0044(c, 413u, depth + 1u); else { c.pc = 0x003136A0u; return; } if (c.pc != 0x003135E0u) [[unlikely]] return; }
L_003135E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003135A4u | kUnwind; return; } goto L_003135A4; } }
L_003135E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003135F0u);  if (depth < kMaxDepth) unit_0044(c, 413u, depth + 1u); else { c.pc = 0x003136A0u; return; } if (c.pc != 0x003135F0u) [[unlikely]] return; }
L_003135F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003135B0u | kUnwind; return; } goto L_003135B0; } }
L_003135F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313600u);  if (depth < kMaxDepth) unit_0044(c, 417u, depth + 1u); else { c.pc = 0x00313730u; return; } if (c.pc != 0x00313600u) [[unlikely]] return; }
L_00313600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] << 48;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003135BCu | kUnwind; return; } goto L_003135BC; } }
L_00313608:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00313620:
    st32((c.r[4].w[0] + 20u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), 0u);  c.pc = t; return; }
L_00313660:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313680u); set32(c.r[4], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00313680u) [[unlikely]] return; }
L_00313680:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003136A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003136C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003136C4u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003136C4u) [[unlikely]] return; }
L_003136C4:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003136E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313708u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00313708u) [[unlikely]] return; }
L_00313708:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00313730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00313754; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313754u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x00313754u) [[unlikely]] return; }
L_00313754:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00313770:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 420u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 416u)));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[16], c.r[18].w[0] + c.r[6].w[0]);  if (t) { goto L_00313828; } }
L_003137A4:
    set32(c.r[4], ld32((c.r[19].w[0] + 420u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 408u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00313830; } }
    c.budget -= 1;
L_003137B8:
    set32(c.r[4], ld32((c.r[19].w[0] + 420u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 420u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 4;
L_003137C8:
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], 0u + 59u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00313850; } }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003138E8; } }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00313818; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00313818; } }
    c.r[1].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00313958; } }
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 3;
L_00313818:
    set32(c.r[4], ld32((c.r[19].w[0] + 420u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 416u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003137A4u | kUnwind; return; } goto L_003137A4; } }
L_00313828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00313958; } }
L_00313830:
    set32(c.r[25], ld32((c.r[19].w[0] + 428u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313840u); set32(c.r[4], c.r[19].w[0] + 400u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313840u) [[unlikely]] return; }
L_00313840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003137B8u | kUnwind; return; } goto L_003137B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003137C8u | kUnwind; return; } goto L_003137C8; } }
L_00313850:
    set32(c.r[3], ld32((c.r[19].w[0] + 388u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 388u), c.r[3].w[0]);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[19].w[0] + 420u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 416u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313818u | kUnwind; return; } goto L_00313818; } }
L_00313870:
    set32(c.r[3], ld32((c.r[19].w[0] + 408u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003138C8; } }
    c.budget -= 1;
L_00313880:
    set32(c.r[4], ld32((c.r[19].w[0] + 420u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 420u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 4;
L_00313890:
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], 0u + 13u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313818u | kUnwind; return; } goto L_00313818; } }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313818u | kUnwind; return; } goto L_00313818; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 420u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 416u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313870u | kUnwind; return; } goto L_00313870; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313818u | kUnwind; return; } goto L_00313818; } }
L_003138C8:
    set32(c.r[25], ld32((c.r[19].w[0] + 428u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003138D8u); set32(c.r[4], c.r[19].w[0] + 400u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003138D8u) [[unlikely]] return; }
L_003138D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313880u | kUnwind; return; } goto L_00313880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313890u | kUnwind; return; } goto L_00313890; } }
L_003138E8:
    set32(c.r[3], ld32((c.r[19].w[0] + 388u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 388u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 420u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 416u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00313930; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 408u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00313938; } }
L_00313910:
    set32(c.r[3], ld32((c.r[19].w[0] + 420u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 420u), c.r[3].w[0]);
    c.budget -= 4;
L_00313920:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313818u | kUnwind; return; } goto L_00313818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00313958; } }
L_00313930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00313958; } }
L_00313938:
    set32(c.r[25], ld32((c.r[19].w[0] + 428u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313948u); set32(c.r[4], c.r[19].w[0] + 400u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313948u) [[unlikely]] return; }
L_00313948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313920u | kUnwind; return; } goto L_00313920; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313910u | kUnwind; return; } goto L_00313910; } }
L_00313958:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00313980:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 256u);  c.pc = t; return; }
L_00313990:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 128u);  c.pc = t; return; }
L_003139A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003139B0:
    set32(c.r[29], c.r[29].w[0] - 1104u);
    set32(c.r[6], 0u + 1024u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 412u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 388u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003139E8u); set32(c.r[17], c.r[3].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_0044(c, 419u, depth + 1u); else { c.pc = 0x00313770u; return; } if (c.pc != 0x003139E8u) [[unlikely]] return; }
L_003139E8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 80u)));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], c.r[29].w[0] + 80u);  if (t) { goto L_00313A28; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], 0u + 32u);
    c.budget -= 2;
L_00313A00:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00313A14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_00313A28; } }
L_00313A14:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313A00u | kUnwind; return; } goto L_00313A00; } }
    c.budget -= 1;
L_00313A28:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00313A78; } }
    set32(c.r[2], 0u + 91u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00313A98; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 412u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[19].w[0] + 420u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 404u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00313A80; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 408u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00313A80; } }
    st32((c.r[19].w[0] + 388u), c.r[16].w[0]);
    c.budget -= 1;
L_00313A70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00313C18; } }
L_00313A78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00313C18; } }
L_00313A80:
    set32(c.r[25], ld32((c.r[19].w[0] + 428u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313A90u); set32(c.r[4], c.r[19].w[0] + 400u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313A90u) [[unlikely]] return; }
L_00313A90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 388u), c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313A70u | kUnwind; return; } goto L_00313A70; } }
L_00313A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313AA0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x00313AA0u) [[unlikely]] return; }
L_00313AA0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = 0ull + 0ull;
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00313AE8; } }
    set32(c.r[5], 0u + 32u);
    set32(c.r[6], 0u + 61u);
    c.budget -= 2;
L_00313ABC:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_00313AE8; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00313B60; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_00313B68; } }
L_00313AD8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313ABCu | kUnwind; return; } goto L_00313ABC; } }
L_00313AE8:
    set32(c.r[4], c.r[8].w[0] + c.r[19].w[0]);
    st8((c.r[4].w[0] + 128u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] + c.r[29].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[4].w[0] + 80u);
    set32(c.r[5], 0u + 34u);
    set32(c.r[6], 0u + 32u);
    c.budget -= 8;
L_00313B08:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.r[4].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00313C0C; } }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00313C0C; } }
    c.r[4].d[0] = c.r[7].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_00313B50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_00313B78; } }
    set32(c.r[4], c.r[19].w[0] + c.r[10].w[0]);
    st8((c.r[4].w[0] + 256u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 4;
L_00313B50:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313B08u | kUnwind; return; } goto L_00313B08; } }
    c.budget -= 1;
L_00313B60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00313C18; } }
L_00313B68:
    set32(c.r[4], c.r[19].w[0] + c.r[8].w[0]);
    st8((c.r[4].w[0] + 128u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313AD8u | kUnwind; return; } goto L_00313AD8; } }
L_00313B78:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[11], c.r[4].w[0] + 80u);
    set32(c.r[8], 0u + 34u);
    set32(c.r[7], 0u + 32u);
    set32(c.r[6], 0u + 10u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 7;
L_00313B94:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_00313BF8; } }
L_00313BA0:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == c.r[8].d[0];  if (t) { goto L_00313BD8; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_00313BD8; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_00313BE8; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[6].d[0];  if (t) { goto L_00313BE8; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[5].d[0];  if (t) { goto L_00313BE8; } }
L_00313BC8:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313B94u | kUnwind; return; } goto L_00313B94; } }
    c.budget -= 1;
L_00313BD8:
    set32(c.r[2], c.r[10].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0] + 256u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00313C18; } }
L_00313BE8:
    set32(c.r[4], c.r[19].w[0] + c.r[10].w[0]);
    st8((c.r[4].w[0] + 256u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313BC8u | kUnwind; return; } goto L_00313BC8; } }
L_00313BF8:
    c.r[4].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313BA0u | kUnwind; return; } goto L_00313BA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00313C18; } }
L_00313C0C:
    set32(c.r[3], c.r[10].w[0] + c.r[19].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 256u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00313C18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1104u);  c.pc = t; return; }
L_00313C40:
    set32(c.r[29], c.r[29].w[0] - 1056u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 384u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 416u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00313CD8; } }
L_00313C60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313C70u); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_0044(c, 419u, depth + 1u); else { c.pc = 0x00313770u; return; } if (c.pc != 0x00313C70u) [[unlikely]] return; }
L_00313C70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 32u)));
    set32(c.r[2], 0u + 91u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00313CC8; } }
    set32(c.r[6], c.r[29].w[0] + 33u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00313CC8; } }
    set32(c.r[3], 0u + 93u);
    set32(c.r[4], 0u + 32u);
    c.budget -= 2;
L_00313C98:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_00313CB8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00313CE0; } }
    set32(c.r[2], c.r[16].w[0] + c.r[7].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 3;
L_00313CB8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313C98u | kUnwind; return; } goto L_00313C98; } }
L_00313CC8:
    set32(c.r[3], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 416u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313C60u | kUnwind; return; } goto L_00313C60; } }
L_00313CD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00313CEC; } }
L_00313CE0:
    set32(c.r[3], c.r[16].w[0] + c.r[7].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00313CEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1056u);  c.pc = t; return; }
L_00313D00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00313D60; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 396u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00313D38; } }
    set32(c.r[25], ld32((c.r[17].w[0] + 428u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313D38u); set32(c.r[4], c.r[17].w[0] + 400u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313D38u) [[unlikely]] return; }
L_00313D38:
    set32(c.r[4], c.r[17].w[0] + 400u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313D48u); st8((c.r[17].w[0] + 396u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x00313D48u) [[unlikely]] return; }
L_00313D48:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00313D60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313D60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x00313D60u) [[unlikely]] return; }
L_00313D60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00313D80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 396u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00313DA0; } }
L_00313D98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 396u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00313DB8; } }
L_00313DA0:
    set32(c.r[25], ld32((c.r[16].w[0] + 428u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313DB0u); set32(c.r[4], c.r[16].w[0] + 400u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313DB0u) [[unlikely]] return; }
L_00313DB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313D98u | kUnwind; return; } goto L_00313D98; } }
L_00313DB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00313DD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 400u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313DF4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x00313DF4u) [[unlikely]] return; }
L_00313DF4:
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313E00u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00313E00u) [[unlikely]] return; }
L_00313E00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313E08u); set32(c.r[4], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x00313E08u) [[unlikely]] return; }
L_00313E08:
    set32(c.r[25], ld32((c.r[18].w[0] + 428u)));
    set32(c.r[4], c.r[18].w[0] + 400u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00313E20u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00313E20u) [[unlikely]] return; }
L_00313E20:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00313E30u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00313E30u) [[unlikely]] return; }
L_00313E30:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00313E40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 396u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00313E48; } }
L_00313E40:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 396u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00313E48:
    st32((c.r[18].w[0] + 392u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 388u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00313E70:
    c.r[6].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[6].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 132u));
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] <= 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00313EA0; } }
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 88u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00313EA0; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00313EA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00313EB0:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 132u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00313EC0:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[2].w[0] + 132u));  c.pc = t; return; }
L_00313ED0:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 132u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;  c.pc = t; return; }
L_00313EF0:
    c.r[3].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 132u), static_cast<std::uint8_t>(c.r[6].w[0]));  c.pc = t; return; }
L_00313F00:
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));  c.pc = t; return; }
L_00313F20:
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[5].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00313F48; } }
L_00313F30:
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    c.r[3].d[0] = c.r[5].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00313F60; } }
L_00313F40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00313F78; } }
L_00313F48:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313F30u | kUnwind; return; } goto L_00313F30; } }
L_00313F60:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313F40u | kUnwind; return; } goto L_00313F40; } }
L_00313F78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00313F80:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00313F84:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 32136u));
    set32(c.r[6], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[7].w[0] + 7u);
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;
    st8((c.r[6].w[0] + 132u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[28].w[0] - 32136u));
    st8((c.r[6].w[0] + 133u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[28].w[0] - 32136u));
    st8((c.r[6].w[0] + 134u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[28].w[0] - 32136u));
    st8((c.r[6].w[0] + 135u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[28].w[0] - 32136u));
    st8((c.r[6].w[0] + 136u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[28].w[0] - 32136u));
    st8((c.r[6].w[0] + 137u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[28].w[0] - 32136u));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[6].w[0] + 138u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00313F84u | kUnwind; return; } goto L_00313F84; } }
    set32(c.r[3], c.r[7].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[28].w[0] - 32136u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 132u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_00313FE0:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_00313FE8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 32140u)));
    set32(c.r[7], c.r[7].w[0] + 7u);
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(15ll) ? 1ull : 0ull;
    st16((c.r[6].w[0] + 88u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 32140u)));
    st16((c.r[6].w[0] + 90u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 6;
    [[clang::musttail]] return unit_0045(c, 1u, depth);
}

}

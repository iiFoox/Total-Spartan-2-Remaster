#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_001E[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 6, 0, 0, 7, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0,
    19, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 24, 0, 25, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    38, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0,
    0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68,
    0, 0, 69, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0,
    0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0,
    0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0,
    0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 157, 0, 158, 0,
    0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0,
    0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0,
    0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206,
    0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0,
    0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0,
    0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0,
    240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241,
    0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 246, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0,
    0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0,
    0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260,
    0, 0, 261, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 265, 266, 0, 267, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 274, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 278, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 301, 0, 302, 0, 0, 0,
    0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0,
    0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 331,
    0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337,
    338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342,
    0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0,
    0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0,
    0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363,
    364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 374, 0, 0, 375, 0,
    0, 376, 0, 0, 377, 0, 0, 378, 0, 0, 379, 0, 0, 380, 0, 0, 381, 0, 382, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 402, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0,
    0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 431,
    0, 0, 0, 432, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 438, 0, 439, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0,
    448, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0,
    454, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 459, 0, 0,
    460, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465,
};

void unit_001E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00278000;
    case 2u: goto L_00278008;
    case 3u: goto L_00278024;
    case 4u: goto L_00278030;
    case 5u: goto L_00278038;
    case 6u: goto L_00278040;
    case 7u: goto L_0027804C;
    case 8u: goto L_00278050;
    case 9u: goto L_00278070;
    case 10u: goto L_00278080;
    case 11u: goto L_002780C8;
    case 12u: goto L_00278104;
    case 13u: goto L_00278124;
    case 14u: goto L_0027819C;
    case 15u: goto L_002781A4;
    case 16u: goto L_00278250;
    case 17u: goto L_00278260;
    case 18u: goto L_00278270;
    case 19u: goto L_00278280;
    case 20u: goto L_00278288;
    case 21u: goto L_002782A0;
    case 22u: goto L_002782B0;
    case 23u: goto L_002782BC;
    case 24u: goto L_002782CC;
    case 25u: goto L_002782D4;
    case 26u: goto L_002782DC;
    case 27u: goto L_002782E4;
    case 28u: goto L_00278300;
    case 29u: goto L_00278318;
    case 30u: goto L_00278358;
    case 31u: goto L_002783D0;
    case 32u: goto L_002783E8;
    case 33u: goto L_00278408;
    case 34u: goto L_00278420;
    case 35u: goto L_0027844C;
    case 36u: goto L_00278468;
    case 37u: goto L_002784F0;
    case 38u: goto L_00278500;
    case 39u: goto L_00278508;
    case 40u: goto L_00278510;
    case 41u: goto L_00278540;
    case 42u: goto L_0027856C;
    case 43u: goto L_00278588;
    case 44u: goto L_0027859C;
    case 45u: goto L_002785C0;
    case 46u: goto L_00278600;
    case 47u: goto L_00278620;
    case 48u: goto L_00278634;
    case 49u: goto L_0027864C;
    case 50u: goto L_00278654;
    case 51u: goto L_00278680;
    case 52u: goto L_002786B8;
    case 53u: goto L_002786C0;
    case 54u: goto L_002787F0;
    case 55u: goto L_00278810;
    case 56u: goto L_00278850;
    case 57u: goto L_0027889C;
    case 58u: goto L_002788CC;
    case 59u: goto L_002788E0;
    case 60u: goto L_00278930;
    case 61u: goto L_00278964;
    case 62u: goto L_0027898C;
    case 63u: goto L_0027899C;
    case 64u: goto L_002789A8;
    case 65u: goto L_002789BC;
    case 66u: goto L_002789DC;
    case 67u: goto L_002789EC;
    case 68u: goto L_002789FC;
    case 69u: goto L_00278A08;
    case 70u: goto L_00278A14;
    case 71u: goto L_00278A1C;
    case 72u: goto L_00278A34;
    case 73u: goto L_00278A44;
    case 74u: goto L_00278A50;
    case 75u: goto L_00278A94;
    case 76u: goto L_00278AB8;
    case 77u: goto L_00278AEC;
    case 78u: goto L_00278B14;
    case 79u: goto L_00278B2C;
    case 80u: goto L_00278B40;
    case 81u: goto L_00278B90;
    case 82u: goto L_00278BA8;
    case 83u: goto L_00278BB0;
    case 84u: goto L_00278C10;
    case 85u: goto L_00278C24;
    case 86u: goto L_00278C50;
    case 87u: goto L_00278C5C;
    case 88u: goto L_00278C70;
    case 89u: goto L_00278C8C;
    case 90u: goto L_00278D10;
    case 91u: goto L_00278D60;
    case 92u: goto L_00278DA4;
    case 93u: goto L_00278DF0;
    case 94u: goto L_00278E0C;
    case 95u: goto L_00278E50;
    case 96u: goto L_00278E70;
    case 97u: goto L_00278EA4;
    case 98u: goto L_00278EE8;
    case 99u: goto L_00278F54;
    case 100u: goto L_00278F80;
    case 101u: goto L_00278F90;
    case 102u: goto L_00278FA0;
    case 103u: goto L_00278FB0;
    case 104u: goto L_00278FC4;
    case 105u: goto L_00278FE0;
    case 106u: goto L_00279034;
    case 107u: goto L_00279084;
    case 108u: goto L_002790AC;
    case 109u: goto L_002790D0;
    case 110u: goto L_0027911C;
    case 111u: goto L_00279134;
    case 112u: goto L_0027913C;
    case 113u: goto L_0027916C;
    case 114u: goto L_0027918C;
    case 115u: goto L_002791A0;
    case 116u: goto L_002791C8;
    case 117u: goto L_002791E0;
    case 118u: goto L_002791E8;
    case 119u: goto L_00279214;
    case 120u: goto L_0027923C;
    case 121u: goto L_0027924C;
    case 122u: goto L_00279260;
    case 123u: goto L_00279280;
    case 124u: goto L_00279298;
    case 125u: goto L_002792A8;
    case 126u: goto L_002792B8;
    case 127u: goto L_002792D4;
    case 128u: goto L_002792E4;
    case 129u: goto L_002792F4;
    case 130u: goto L_00279304;
    case 131u: goto L_00279318;
    case 132u: goto L_00279328;
    case 133u: goto L_00279334;
    case 134u: goto L_00279358;
    case 135u: goto L_00279380;
    case 136u: goto L_002793B8;
    case 137u: goto L_002793F0;
    case 138u: goto L_00279428;
    case 139u: goto L_002794CC;
    case 140u: goto L_002794DC;
    case 141u: goto L_00279500;
    case 142u: goto L_00279544;
    case 143u: goto L_00279554;
    case 144u: goto L_002796D4;
    case 145u: goto L_002796E4;
    case 146u: goto L_002796F4;
    case 147u: goto L_00279704;
    case 148u: goto L_00279730;
    case 149u: goto L_00279748;
    case 150u: goto L_00279750;
    case 151u: goto L_00279780;
    case 152u: goto L_00279790;
    case 153u: goto L_002797A0;
    case 154u: goto L_002797B0;
    case 155u: goto L_002797DC;
    case 156u: goto L_002797E4;
    case 157u: goto L_002797F0;
    case 158u: goto L_002797F8;
    case 159u: goto L_00279818;
    case 160u: goto L_00279820;
    case 161u: goto L_00279834;
    case 162u: goto L_0027983C;
    case 163u: goto L_00279864;
    case 164u: goto L_0027988C;
    case 165u: goto L_0027989C;
    case 166u: goto L_002798AC;
    case 167u: goto L_002798BC;
    case 168u: goto L_002798CC;
    case 169u: goto L_002798E0;
    case 170u: goto L_002798E8;
    case 171u: goto L_00279910;
    case 172u: goto L_00279938;
    case 173u: goto L_00279948;
    case 174u: goto L_00279958;
    case 175u: goto L_00279968;
    case 176u: goto L_00279978;
    case 177u: goto L_0027998C;
    case 178u: goto L_00279994;
    case 179u: goto L_002799BC;
    case 180u: goto L_002799E4;
    case 181u: goto L_002799F4;
    case 182u: goto L_00279A04;
    case 183u: goto L_00279A14;
    case 184u: goto L_00279A24;
    case 185u: goto L_00279A38;
    case 186u: goto L_00279A40;
    case 187u: goto L_00279A68;
    case 188u: goto L_00279A90;
    case 189u: goto L_00279AA0;
    case 190u: goto L_00279AB0;
    case 191u: goto L_00279AC0;
    case 192u: goto L_00279AD4;
    case 193u: goto L_00279ADC;
    case 194u: goto L_00279B04;
    case 195u: goto L_00279B2C;
    case 196u: goto L_00279B34;
    case 197u: goto L_00279B60;
    case 198u: goto L_00279B88;
    case 199u: goto L_00279BB0;
    case 200u: goto L_00279BC0;
    case 201u: goto L_00279BD4;
    case 202u: goto L_00279BF4;
    case 203u: goto L_00279C20;
    case 204u: goto L_00279C30;
    case 205u: goto L_00279C6C;
    case 206u: goto L_00279C7C;
    case 207u: goto L_00279CA0;
    case 208u: goto L_00279CB0;
    case 209u: goto L_00279CD4;
    case 210u: goto L_00279CE4;
    case 211u: goto L_00279D08;
    case 212u: goto L_00279D18;
    case 213u: goto L_00279D38;
    case 214u: goto L_00279D50;
    case 215u: goto L_00279D60;
    case 216u: goto L_00279D70;
    case 217u: goto L_00279D8C;
    case 218u: goto L_00279DB8;
    case 219u: goto L_00279DCC;
    case 220u: goto L_00279DE0;
    case 221u: goto L_00279DF4;
    case 222u: goto L_00279E08;
    case 223u: goto L_00279E1C;
    case 224u: goto L_00279E30;
    case 225u: goto L_00279E44;
    case 226u: goto L_00279E54;
    case 227u: goto L_00279E80;
    case 228u: goto L_00279EA8;
    case 229u: goto L_00279EBC;
    case 230u: goto L_00279ECC;
    case 231u: goto L_00279ED8;
    case 232u: goto L_00279F30;
    case 233u: goto L_0027A03C;
    case 234u: goto L_0027A090;
    case 235u: goto L_0027A0B0;
    case 236u: goto L_0027A178;
    case 237u: goto L_0027A1A0;
    case 238u: goto L_0027A2C0;
    case 239u: goto L_0027A2E0;
    case 240u: goto L_0027A300;
    case 241u: goto L_0027A37C;
    case 242u: goto L_0027A388;
    case 243u: goto L_0027A390;
    case 244u: goto L_0027A3B8;
    case 245u: goto L_0027A3C4;
    case 246u: goto L_0027A3C8;
    case 247u: goto L_0027A3D0;
    case 248u: goto L_0027A3EC;
    case 249u: goto L_0027A404;
    case 250u: goto L_0027A410;
    case 251u: goto L_0027A438;
    case 252u: goto L_0027A444;
    case 253u: goto L_0027A448;
    case 254u: goto L_0027A450;
    case 255u: goto L_0027A474;
    case 256u: goto L_0027A498;
    case 257u: goto L_0027A4A4;
    case 258u: goto L_0027A4A8;
    case 259u: goto L_0027A4B0;
    case 260u: goto L_0027A4FC;
    case 261u: goto L_0027A508;
    case 262u: goto L_0027A50C;
    case 263u: goto L_0027A514;
    case 264u: goto L_0027A54C;
    case 265u: goto L_0027A558;
    case 266u: goto L_0027A55C;
    case 267u: goto L_0027A564;
    case 268u: goto L_0027A598;
    case 269u: goto L_0027A5A4;
    case 270u: goto L_0027A5A8;
    case 271u: goto L_0027A5B0;
    case 272u: goto L_0027A5E8;
    case 273u: goto L_0027A5F4;
    case 274u: goto L_0027A5F8;
    case 275u: goto L_0027A600;
    case 276u: goto L_0027A634;
    case 277u: goto L_0027A640;
    case 278u: goto L_0027A644;
    case 279u: goto L_0027A64C;
    case 280u: goto L_0027A6A0;
    case 281u: goto L_0027A770;
    case 282u: goto L_0027A80C;
    case 283u: goto L_0027A834;
    case 284u: goto L_0027A8BC;
    case 285u: goto L_0027A910;
    case 286u: goto L_0027A930;
    case 287u: goto L_0027A9C0;
    case 288u: goto L_0027AA80;
    case 289u: goto L_0027AAAC;
    case 290u: goto L_0027AAC0;
    case 291u: goto L_0027AADC;
    case 292u: goto L_0027AB10;
    case 293u: goto L_0027AB40;
    case 294u: goto L_0027AB64;
    case 295u: goto L_0027AB78;
    case 296u: goto L_0027ABB0;
    case 297u: goto L_0027ABD0;
    case 298u: goto L_0027AC38;
    case 299u: goto L_0027AC58;
    case 300u: goto L_0027AC64;
    case 301u: goto L_0027AC68;
    case 302u: goto L_0027AC70;
    case 303u: goto L_0027AC8C;
    case 304u: goto L_0027ACA0;
    case 305u: goto L_0027ACB4;
    case 306u: goto L_0027ACE0;
    case 307u: goto L_0027AD0C;
    case 308u: goto L_0027AD20;
    case 309u: goto L_0027AD30;
    case 310u: goto L_0027AD4C;
    case 311u: goto L_0027AD68;
    case 312u: goto L_0027AD90;
    case 313u: goto L_0027ADA0;
    case 314u: goto L_0027ADA8;
    case 315u: goto L_0027ADD4;
    case 316u: goto L_0027ADE0;
    case 317u: goto L_0027ADF4;
    case 318u: goto L_0027AE10;
    case 319u: goto L_0027AE8C;
    case 320u: goto L_0027AE94;
    case 321u: goto L_0027AEA8;
    case 322u: goto L_0027AEB8;
    case 323u: goto L_0027AED0;
    case 324u: goto L_0027AF14;
    case 325u: goto L_0027AF24;
    case 326u: goto L_0027AF44;
    case 327u: goto L_0027AFB8;
    case 328u: goto L_0027AFDC;
    case 329u: goto L_0027AFE8;
    case 330u: goto L_0027AFF4;
    case 331u: goto L_0027AFFC;
    case 332u: goto L_0027B00C;
    case 333u: goto L_0027B018;
    case 334u: goto L_0027B034;
    case 335u: goto L_0027B03C;
    case 336u: goto L_0027B05C;
    case 337u: goto L_0027B07C;
    case 338u: goto L_0027B080;
    case 339u: goto L_0027B088;
    case 340u: goto L_0027B0AC;
    case 341u: goto L_0027B0C0;
    case 342u: goto L_0027B0FC;
    case 343u: goto L_0027B10C;
    case 344u: goto L_0027B154;
    case 345u: goto L_0027B168;
    case 346u: goto L_0027B170;
    case 347u: goto L_0027B184;
    case 348u: goto L_0027B1B8;
    case 349u: goto L_0027B1D8;
    case 350u: goto L_0027B1F4;
    case 351u: goto L_0027B210;
    case 352u: goto L_0027B224;
    case 353u: goto L_0027B238;
    case 354u: goto L_0027B250;
    case 355u: goto L_0027B260;
    case 356u: goto L_0027B270;
    case 357u: goto L_0027B2BC;
    case 358u: goto L_0027B310;
    case 359u: goto L_0027B318;
    case 360u: goto L_0027B360;
    case 361u: goto L_0027B390;
    case 362u: goto L_0027B3E0;
    case 363u: goto L_0027B3FC;
    case 364u: goto L_0027B400;
    case 365u: goto L_0027B40C;
    case 366u: goto L_0027B428;
    case 367u: goto L_0027B450;
    case 368u: goto L_0027B4B4;
    case 369u: goto L_0027B4EC;
    case 370u: goto L_0027B4F8;
    case 371u: goto L_0027B524;
    case 372u: goto L_0027B550;
    case 373u: goto L_0027B560;
    case 374u: goto L_0027B56C;
    case 375u: goto L_0027B578;
    case 376u: goto L_0027B584;
    case 377u: goto L_0027B590;
    case 378u: goto L_0027B59C;
    case 379u: goto L_0027B5A8;
    case 380u: goto L_0027B5B4;
    case 381u: goto L_0027B5C0;
    case 382u: goto L_0027B5C8;
    case 383u: goto L_0027B5D0;
    case 384u: goto L_0027B5D8;
    case 385u: goto L_0027B630;
    case 386u: goto L_0027B640;
    case 387u: goto L_0027B6B0;
    case 388u: goto L_0027B718;
    case 389u: goto L_0027B724;
    case 390u: goto L_0027B730;
    case 391u: goto L_0027B750;
    case 392u: goto L_0027B784;
    case 393u: goto L_0027B7A0;
    case 394u: goto L_0027B7A8;
    case 395u: goto L_0027B7B8;
    case 396u: goto L_0027B7D8;
    case 397u: goto L_0027B7E4;
    case 398u: goto L_0027B820;
    case 399u: goto L_0027B848;
    case 400u: goto L_0027B854;
    case 401u: goto L_0027B870;
    case 402u: goto L_0027B878;
    case 403u: goto L_0027B8A0;
    case 404u: goto L_0027B8C0;
    case 405u: goto L_0027B8CC;
    case 406u: goto L_0027B8F0;
    case 407u: goto L_0027B95C;
    case 408u: goto L_0027B9B0;
    case 409u: goto L_0027B9D8;
    case 410u: goto L_0027BA38;
    case 411u: goto L_0027BA64;
    case 412u: goto L_0027BA70;
    case 413u: goto L_0027BAA4;
    case 414u: goto L_0027BAD0;
    case 415u: goto L_0027BAF0;
    case 416u: goto L_0027BB30;
    case 417u: goto L_0027BB58;
    case 418u: goto L_0027BB84;
    case 419u: goto L_0027BB9C;
    case 420u: goto L_0027BBAC;
    case 421u: goto L_0027BBB4;
    case 422u: goto L_0027BBDC;
    case 423u: goto L_0027BBF4;
    case 424u: goto L_0027BC08;
    case 425u: goto L_0027BC18;
    case 426u: goto L_0027BC28;
    case 427u: goto L_0027BC40;
    case 428u: goto L_0027BC4C;
    case 429u: goto L_0027BC58;
    case 430u: goto L_0027BC74;
    case 431u: goto L_0027BC7C;
    case 432u: goto L_0027BC8C;
    case 433u: goto L_0027BC94;
    case 434u: goto L_0027BCAC;
    case 435u: goto L_0027BCB8;
    case 436u: goto L_0027BCD4;
    case 437u: goto L_0027BCE0;
    case 438u: goto L_0027BCEC;
    case 439u: goto L_0027BCF4;
    case 440u: goto L_0027BD28;
    case 441u: goto L_0027BD30;
    case 442u: goto L_0027BD60;
    case 443u: goto L_0027BD70;
    case 444u: goto L_0027BDA4;
    case 445u: goto L_0027BDBC;
    case 446u: goto L_0027BDC8;
    case 447u: goto L_0027BDF4;
    case 448u: goto L_0027BE00;
    case 449u: goto L_0027BE0C;
    case 450u: goto L_0027BE24;
    case 451u: goto L_0027BE30;
    case 452u: goto L_0027BE3C;
    case 453u: goto L_0027BE60;
    case 454u: goto L_0027BE80;
    case 455u: goto L_0027BE8C;
    case 456u: goto L_0027BE98;
    case 457u: goto L_0027BEC8;
    case 458u: goto L_0027BEE8;
    case 459u: goto L_0027BEF4;
    case 460u: goto L_0027BF00;
    case 461u: goto L_0027BF18;
    case 462u: goto L_0027BF20;
    case 463u: goto L_0027BFB4;
    case 464u: goto L_0027BFBC;
    case 465u: goto L_0027BFFC;
    default: bad_entry(c, 0x00278000u); return;
    }
L_00278000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278008u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x00278008u) [[unlikely]] return; }
L_00278008:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], 0u + 126u);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[5], 0u + 46u);
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278024u); set32(c.r[7], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_001A(c, 405u, depth + 1u); else { c.pc = 0x0026B970u; return; } if (c.pc != 0x00278024u) [[unlikely]] return; }
L_00278024:
    set32(c.r[4], 0u + 46u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278030u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0018(c, 245u, depth + 1u); else { c.pc = 0x00263880u; return; } if (c.pc != 0x00278030u) [[unlikely]] return; }
L_00278030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278038u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x00278038u) [[unlikely]] return; }
L_00278038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30048u), c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00277C90u | kUnwind; return; } [[clang::musttail]] return unit_001D(c, 202u, depth); } }
L_00278040:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 49u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00277C90u | kUnwind; return; } [[clang::musttail]] return unit_001D(c, 202u, depth); } }
L_0027804C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00278050:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00278070:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00278080:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[4], c.r[28].w[0] - 30168u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002780C8u); set32(c.r[16], 0u - 1u);  if (depth < kMaxDepth) unit_001C(c, 279u, depth + 1u); else { c.pc = 0x00272660u; return; } if (c.pc != 0x002780C8u) [[unlikely]] return; }
L_002780C8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30180u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002780EC; } }
    c.r[4].d[0] = ld8((c.r[2].w[0] + 12u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002780EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 30184u)));  if (t) { goto L_002780F0; } }
L_002780EC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_002780F0:
    set32(c.r[5], ld32((c.r[28].w[0] - 30060u)));
    c.r[1].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00278138; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 30052u)));
    c.budget -= 1;
L_00278104:
    c.r[4].d[0] = ld8((c.r[6].w[0] + 48u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00278208; } }
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_00278124; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00278138; } }
L_00278124:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[4].d[0] = c.r[7].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 56u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00278104u | kUnwind; return; } goto L_00278104; } }
    c.budget -= 1;
L_00278138:
    set32(c.r[6], ld32((c.r[28].w[0] - 30056u)));
    set32(c.r[4], c.r[16].w[0] << 3);
    set32(c.r[5], c.r[4].w[0] - c.r[16].w[0]);
    set32(c.r[7], c.r[5].w[0] << 3);
    set32(c.r[4], ld32((c.r[28].w[0] - 30052u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[28].w[0] - 30056u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[20].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[19].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[19].w[0]);
    st32((c.r[4].w[0] + 16u), 0u);
    st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[18].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 25;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00278210; } }
L_0027819C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_0027821C; } }
L_002781A4:
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002781C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 50u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002781D8; } }
L_002781C8:
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 50u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_002781D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30064u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002781F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 20u), c.r[3].w[0]);  if (t) { goto L_002781F8; } }
L_002781F4:
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_002781F8:
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[4].w[0] + 50u));  if (t) { goto L_00278224; } }
L_00278208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00278124u | kUnwind; return; } goto L_00278124; } }
L_00278210:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027819Cu | kUnwind; return; } goto L_0027819C; } }
L_0027821C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[21].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002781A4u | kUnwind; return; } goto L_002781A4; } }
L_00278224:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00278250:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 30044u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00278260:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 30044u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00278270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278280u);  if (depth < kMaxDepth) unit_001E(c, 34u, depth + 1u); else { c.pc = 0x00278420u; return; } if (c.pc != 0x00278280u) [[unlikely]] return; }
L_00278280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278288u);  if (depth < kMaxDepth) unit_0018(c, 302u, depth + 1u); else { c.pc = 0x00263FF0u; return; } if (c.pc != 0x00278288u) [[unlikely]] return; }
L_00278288:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002782A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002782B0u);  if (depth < kMaxDepth) unit_0006(c, 182u, depth + 1u); else { c.pc = 0x0021B810u; return; } if (c.pc != 0x002782B0u) [[unlikely]] return; }
L_002782B0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002782BCu); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0006(c, 178u, depth + 1u); else { c.pc = 0x0021B7B0u; return; } if (c.pc != 0x002782BCu) [[unlikely]] return; }
L_002782BC:
    set32(c.r[5], ld32((c.r[28].w[0] - 30036u)));
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002782CCu); c.r[6].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_0019(c, 48u, depth + 1u); else { c.pc = 0x002645D0u; return; } if (c.pc != 0x002782CCu) [[unlikely]] return; }
L_002782CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002782D4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 27u, depth + 1u); else { c.pc = 0x00264250u; return; } if (c.pc != 0x002782D4u) [[unlikely]] return; }
L_002782D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002782DCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001A(c, 72u, depth + 1u); else { c.pc = 0x002687A0u; return; } if (c.pc != 0x002782DCu) [[unlikely]] return; }
L_002782DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002782E4u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0019(c, 27u, depth + 1u); else { c.pc = 0x00264250u; return; } if (c.pc != 0x002782E4u) [[unlikely]] return; }
L_002782E4:
    st8((c.r[28].w[0] - 30040u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00278300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[28].w[0] - 30168u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278318u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 279u, depth + 1u); else { c.pc = 0x00272660u; return; } if (c.pc != 0x00278318u) [[unlikely]] return; }
L_00278318:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30180u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027833C; } }
    c.r[4].d[0] = ld8((c.r[2].w[0] + 12u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0027833C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[28].w[0] - 30184u)));  if (t) { goto L_00278340; } }
L_0027833C:
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_00278340:
    set32(c.r[5], ld32((c.r[28].w[0] - 30060u)));
    c.r[1].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002783C0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30052u)));
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_00278358:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_002783AC; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 8u), 0u);
    st32((c.r[3].w[0] + 16u), 0u);
    st32((c.r[3].w[0] + 12u), 0u);
    st32((c.r[3].w[0] + 40u), 0u);
    st8((c.r[3].w[0] + 48u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 49u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 50u), static_cast<std::uint8_t>(0u));
    st32((c.r[3].w[0] + 44u), 0u);
    st32((c.r[3].w[0] + 24u), 0u);
    st32((c.r[3].w[0] + 28u), 0u);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 32u), 0u);  if (t) { goto L_002783C0; } }
L_002783AC:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 56u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00278358u | kUnwind; return; } goto L_00278358; } }
    c.budget -= 1;
L_002783C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002783D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[28].w[0] - 30168u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002783E8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 279u, depth + 1u); else { c.pc = 0x00272660u; return; } if (c.pc != 0x002783E8u) [[unlikely]] return; }
L_002783E8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30180u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00278410; } }
    c.r[4].d[0] = ld8((c.r[2].w[0] + 12u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00278410; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 30184u)));
    c.budget -= 1;
L_00278408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00278418; } }
L_00278410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00278408u | kUnwind; return; } goto L_00278408; } }
L_00278418:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00278420:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 30060u)));
    c.r[1].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002784C8; } }
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[29].w[0] + 81u);
    c.budget -= 2;
L_0027844C:
    set32(c.r[3], ld32((c.r[28].w[0] - 30048u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[3].d[0];  if (t) { goto L_002784E4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 30052u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st8((c.r[3].w[0] + 49u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00278468:
    set32(c.r[3], ld32((c.r[28].w[0] - 30052u)));
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 49u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027844Cu | kUnwind; return; } goto L_0027844C; } }
    st32((c.r[4].w[0]), 0u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 49u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 50u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30060u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 56u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027844Cu | kUnwind; return; } goto L_0027844C; } }
    c.budget -= 1;
L_002784C8:
    set32(c.r[3], 0u - 1u);
    st32((c.r[28].w[0] - 30048u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[28].w[0] - 30056u), 0u);
    st8((c.r[28].w[0] - 30040u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30044u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00278528; } }
L_002784E4:
    set32(c.r[4], 0u + 46u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002784F0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0019(c, 197u, depth + 1u); else { c.pc = 0x002654B0u; return; } if (c.pc != 0x002784F0u) [[unlikely]] return; }
L_002784F0:
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00278518; } }
L_00278500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278508u);  if (depth < kMaxDepth) unit_001D(c, 134u, depth + 1u); else { c.pc = 0x00277090u; return; } if (c.pc != 0x00278508u) [[unlikely]] return; }
L_00278508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278510u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0022E588u; return; } if (c.pc != 0x00278510u) [[unlikely]] return; }
L_00278510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00278468u | kUnwind; return; } goto L_00278468; } }
L_00278518:
    set32(c.r[2], ld32((c.r[28].w[0] - 30052u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 49u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00278500u | kUnwind; return; } goto L_00278500; } }
L_00278528:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00278540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[28].w[0] - 30064u), c.r[4].w[0]);
    set32(c.r[2], c.r[16].w[0] << 3);
    st32((c.r[28].w[0] - 30060u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027856Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0027856Cu) [[unlikely]] return; }
L_0027856C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 31296u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278588u); set32(c.r[7], 0u + 56u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x00278588u) [[unlikely]] return; }
L_00278588:
    st32((c.r[28].w[0] - 30052u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull | 32768ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027859Cu); st32((c.r[28].w[0] - 30048u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 154u, depth + 1u); else { c.pc = 0x0020AF90u; return; } if (c.pc != 0x0027859Cu) [[unlikely]] return; }
L_0027859C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[28].w[0] - 30036u), c.r[2].w[0]);
    st8((c.r[28].w[0] - 30044u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002785C0:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st8((c.r[4].w[0] + 48u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 49u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 50u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 51u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00278600:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[29].w[0] + 60u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278620u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000A(c, 261u, depth + 1u); else { c.pc = 0x0022A7E8u; return; } if (c.pc != 0x00278620u) [[unlikely]] return; }
L_00278620:
    set32(c.r[4], ld32((c.r[28].w[0] - 29972u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00278638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278634u);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x00278634u) [[unlikely]] return; }
L_00278634:
    st32((c.r[28].w[0] - 29972u), 0u);
    c.budget -= 1;
L_00278638:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[17].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] - 20912u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], c.r[16].w[0] - 20808u);
    c.budget -= 5;
L_0027864C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278654u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x00278654u) [[unlikely]] return; }
L_00278654:
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[16].w[0]), 0u);
    c.r[3].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027864Cu | kUnwind; return; } goto L_0027864C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00278680:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002786B8u); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_000A(c, 155u, depth + 1u); else { c.pc = 0x00229318u; return; } if (c.pc != 0x002786B8u) [[unlikely]] return; }
L_002786B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002786C0u); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_00C0(c, 98u, depth + 1u); else { c.pc = 0x00500CA0u; return; } if (c.pc != 0x002786C0u) [[unlikely]] return; }
L_002786C0:
    set32(c.r[9], c.r[29].w[0] + 107u);
    set32(c.r[8], c.r[29].w[0] + 106u);
    c.r[3].d[0] = ld8((c.r[9].w[0]));
    set32(c.r[7], c.r[29].w[0] + 109u);
    set32(c.r[6], c.r[29].w[0] + 110u);
    set32(c.r[5], c.r[29].w[0] + 111u);
    c.r[3].d[0] = c.r[3].d[0] & 240ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[9].w[0]));
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 240ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[8].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 240ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[7].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 240ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 240ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 73;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002787F0:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 20896u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0])));  c.pc = t; return; }
L_00278810:
    set32(c.r[2], 0u + 1u);
    st32((c.r[28].w[0] - 30008u), c.r[4].w[0]);
    st8((c.r[28].w[0] - 30020u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 30016u), 0u);
    set32(c.r[3], c.r[2].w[0] << 2);
    st32((c.r[28].w[0] - 29996u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[28].w[0] - 30012u), 0u);
    set32(c.r[2], c.r[2].w[0] - 20912u);
    st8((c.r[28].w[0] - 29992u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
    { set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  goto L_00278FE0; }
L_00278850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[28].w[0] - 30020u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 29980u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 29972u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29988u)));
    st32((c.r[28].w[0] - 30012u), 0u);
    st8((c.r[28].w[0] - 29992u), static_cast<std::uint8_t>(0u));
    st32((c.r[28].w[0] - 30008u), c.r[16].w[0]);
    st32((c.r[28].w[0] - 30000u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 30016u), c.r[5].w[0]);
    st32((c.r[28].w[0] - 29996u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027889Cu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x0027889Cu) [[unlikely]] return; }
L_0027889C:
    set32(c.r[5], ld32((c.r[28].w[0] - 30000u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[6], ld32((c.r[28].w[0] - 30016u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], ld32((c.r[28].w[0] - 29996u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[8], ld32((c.r[28].w[0] - 30012u)));
    set32(c.r[2], c.r[2].w[0] - 20912u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002788CCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_001E(c, 141u, depth + 1u); else { c.pc = 0x00279500u; return; } if (c.pc != 0x002788CCu) [[unlikely]] return; }
L_002788CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002788E0:
    set32(c.r[2], 0u + 2u);
    st32((c.r[28].w[0] - 30008u), c.r[5].w[0]);
    st8((c.r[28].w[0] - 30020u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[5].w[0] << 2);
    st32((c.r[28].w[0] - 30000u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[28].w[0] - 30016u), c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[28].w[0] - 29996u), c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] - 20912u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[28].w[0] - 30012u), 0u);
    c.budget -= 18;
    { st8((c.r[28].w[0] - 29992u), static_cast<std::uint8_t>(0u));  goto L_002790D0; }
L_00278930:
    set32(c.r[29], c.r[29].w[0] - 416u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 320u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278964u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x00278964u) [[unlikely]] return; }
L_00278964:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[3].d[0] = ld64((c.r[3].w[0] - 24472u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] - 24464u)));
    set32(c.r[4], c.r[29].w[0] + 210u);
    set32(c.r[5], c.r[5].w[0] - 24456u);
    st64((c.r[29].w[0] + 160u), c.r[3].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027898Cu); st16((c.r[29].w[0] + 168u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0027898Cu) [[unlikely]] return; }
L_0027898C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 260u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027899Cu); set32(c.r[5], c.r[5].w[0] - 24440u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0027899Cu) [[unlikely]] return; }
L_0027899C:
    set32(c.r[4], ld32((c.r[28].w[0] - 29980u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002789A8u); st32((c.r[28].w[0] - 30004u), 0u);  if (depth < kMaxDepth) unit_0002(c, 154u, depth + 1u); else { c.pc = 0x0020AF90u; return; } if (c.pc != 0x002789A8u) [[unlikely]] return; }
L_002789A8:
    set32(c.r[6], ld32((c.r[28].w[0] - 29980u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[28].w[0] - 29972u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002789BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x002789BCu) [[unlikely]] return; }
L_002789BC:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[22], c.r[29].w[0] + 160u);
    set32(c.r[20], c.r[20].w[0] - 20888u);
    set32(c.r[19], c.r[19].w[0] - 20808u);
    set32(c.r[30], c.r[29].w[0] + 332u);
    set32(c.r[23], c.r[29].w[0] + 340u);
    c.budget -= 8;
L_002789DC:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002789ECu); set32(c.r[6], 0u + 50u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x002789ECu) [[unlikely]] return; }
L_002789EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002789FCu); set32(c.r[5], c.r[5].w[0] - 20864u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002789FCu) [[unlikely]] return; }
L_002789FC:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A08u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x00278A08u) [[unlikely]] return; }
L_00278A08:
    set32(c.r[4], c.r[29].w[0] + 412u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A14u); set32(c.r[5], c.r[29].w[0] + 352u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x00278A14u) [[unlikely]] return; }
L_00278A14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A1Cu); set32(c.r[4], c.r[29].w[0] + 412u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x00278A1Cu) [[unlikely]] return; }
L_00278A1C:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A34u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00278A34u) [[unlikely]] return; }
L_00278A34:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 412u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A44u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00278A44u) [[unlikely]] return; }
L_00278A44:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00278A9C; } }
    c.budget -= 1;
L_00278A50:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    set32(c.r[22], c.r[22].w[0] + 50u);
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002789DCu | kUnwind; return; } goto L_002789DC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29980u)));
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[3], ld32((c.r[28].w[0] - 30004u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 1023u);
    set32(c.r[3], c.r[3].w[0] + 5u);
    set32(c.r[2], c.r[2].w[0] >> 10);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[28].w[0] - 30004u), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A94u); st32((c.r[28].w[0] - 29976u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x00278A94u) [[unlikely]] return; }
L_00278A94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00278B60; } }
L_00278A9C:
    set32(c.r[2], c.r[29].w[0] + 336u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[30].w[0])));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278AB8u); set32(c.r[4], ld32((c.r[20].w[0])));  if (depth < kMaxDepth) unit_0002(c, 154u, depth + 1u); else { c.pc = 0x0020AF90u; return; } if (c.pc != 0x00278AB8u) [[unlikely]] return; }
L_00278AB8:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 328u);
    set32(c.r[18], ld32((c.r[20].w[0])));
    set32(c.r[5], ld32((c.r[23].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], ld32((c.r[19].w[0])));  if (t) { goto L_00278B20; } }
    set32(c.r[16], c.r[3].w[0] - c.r[5].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278AECu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x00278AECu) [[unlikely]] return; }
L_00278AEC:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[16].d[0]; st32((c.r[23].w[0]), c.r[2].w[0]);  if (t) { goto L_00278B38; } }
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00278B14u); set32(c.r[6], c.r[18].w[0] - c.r[16].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00278B14u) [[unlikely]] return; }
L_00278B14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00278B38; } }
    c.budget -= 1;
L_00278B20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278B2Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x00278B2Cu) [[unlikely]] return; }
L_00278B2C:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00278B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278B40u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0010(c, 110u, depth + 1u); else { c.pc = 0x00241000u; return; } if (c.pc != 0x00278B40u) [[unlikely]] return; }
L_00278B40:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[28].w[0] - 30004u)));
    set32(c.r[3], c.r[3].w[0] + 1023u);
    set32(c.r[3], c.r[3].w[0] >> 10);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 30004u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00278A50u | kUnwind; return; } goto L_00278A50; } }
    c.budget -= 1;
L_00278B60:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_00278B90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278BA8u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x00278BA8u) [[unlikely]] return; }
L_00278BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278BB0u);  if (depth < kMaxDepth) unit_000A(c, 203u, depth + 1u); else { c.pc = 0x00229D98u; return; } if (c.pc != 0x00278BB0u) [[unlikely]] return; }
L_00278BB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st8((c.r[2].w[0] - 20912u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 20864u);
    st32((c.r[2].w[0] - 20900u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[28].w[0] - 29972u), 0u);
    st32((c.r[2].w[0] - 20808u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[28].w[0] - 29980u), 0u);
    st32((c.r[2].w[0] - 20888u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[28].w[0] - 29988u), 0u);
    st8((c.r[28].w[0] - 29992u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[28].w[0] - 29984u), 0u);
    st32((c.r[28].w[0] - 30016u), 0u);
    st8((c.r[28].w[0] - 30020u), static_cast<std::uint8_t>(0u));
    st32((c.r[28].w[0] - 30012u), 0u);
    st32((c.r[28].w[0] - 30008u), 0u);
    st32((c.r[28].w[0] - 30004u), 0u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278C10u); st32((c.r[28].w[0] - 29996u), 0u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00278C10u) [[unlikely]] return; }
L_00278C10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 20792u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278C24u); set32(c.r[5], c.r[5].w[0] - 24424u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00278C24u) [[unlikely]] return; }
L_00278C24:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 2u);
    st8((c.r[29].w[0] + 77u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[29].w[0] + 72u);
    st8((c.r[29].w[0] + 75u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 78u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 74u), static_cast<std::uint8_t>(0u));
    st16((c.r[29].w[0] + 72u), static_cast<std::uint16_t>(0u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278C50u); st8((c.r[29].w[0] + 79u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00C0(c, 50u, depth + 1u); else { c.pc = 0x00500708u; return; } if (c.pc != 0x00278C50u) [[unlikely]] return; }
L_00278C50:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278C5Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x00278C5Cu) [[unlikely]] return; }
L_00278C5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00278C70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 44u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278C8Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000A(c, 261u, depth + 1u); else { c.pc = 0x0022A7E8u; return; } if (c.pc != 0x00278C8Cu) [[unlikely]] return; }
L_00278C8C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[4].d[0];  if (t) { goto L_00278E00; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 30020u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00278DB8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00278D74; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00278D24; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00278CD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00278E04; } }
L_00278CD4:
    set32(c.r[3], ld32((c.r[28].w[0] - 30012u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30008u)));
    set32(c.r[2], c.r[2].w[0] - 20912u);
    set32(c.r[5], ld32((c.r[28].w[0] - 30000u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 30016u)));
    set32(c.r[7], ld32((c.r[28].w[0] - 29996u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[8], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] << 2);
    st32((c.r[28].w[0] - 30012u), c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278D10u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_001E(c, 109u, depth + 1u); else { c.pc = 0x002790D0u; return; } if (c.pc != 0x00278D10u) [[unlikely]] return; }
L_00278D10:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 13ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29992u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00278E00; } }
L_00278D24:
    set32(c.r[3], ld32((c.r[28].w[0] - 30012u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30008u)));
    set32(c.r[2], c.r[2].w[0] - 20912u);
    set32(c.r[5], ld32((c.r[28].w[0] - 30000u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 30016u)));
    set32(c.r[7], ld32((c.r[28].w[0] - 29996u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[8], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] << 2);
    st32((c.r[28].w[0] - 30012u), c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278D60u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_001E(c, 141u, depth + 1u); else { c.pc = 0x00279500u; return; } if (c.pc != 0x00278D60u) [[unlikely]] return; }
L_00278D60:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 16ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29992u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00278E00; } }
L_00278D74:
    set32(c.r[3], ld32((c.r[28].w[0] - 30012u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30008u)));
    set32(c.r[2], c.r[2].w[0] - 20912u);
    set32(c.r[6], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[5], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] << 2);
    st32((c.r[28].w[0] - 30012u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278DA4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_001E(c, 105u, depth + 1u); else { c.pc = 0x00278FE0u; return; } if (c.pc != 0x00278DA4u) [[unlikely]] return; }
L_00278DA4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 6ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29992u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00278E00; } }
L_00278DB8:
    set32(c.r[3], ld32((c.r[28].w[0] - 30012u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 30008u)));
    set32(c.r[2], c.r[2].w[0] - 20912u);
    set32(c.r[5], ld32((c.r[28].w[0] - 30000u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 30016u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[7], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] << 2);
    st32((c.r[28].w[0] - 30012u), c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278DF0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_001E(c, 96u, depth + 1u); else { c.pc = 0x00278E70u; return; } if (c.pc != 0x00278DF0u) [[unlikely]] return; }
L_00278DF0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st8((c.r[28].w[0] - 29992u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00278E00:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00278E04:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00278E30; } }
L_00278E0C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30008u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 20912u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));  if (t) { goto L_00278E3C; } }
L_00278E30:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29992u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00278E0Cu | kUnwind; return; } goto L_00278E0C; } }
L_00278E3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00278E50:
    set32(c.r[3], c.r[4].w[0] << 2);
    st32((c.r[28].w[0] - 29988u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 29984u), c.r[5].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 29980u), c.r[3].w[0]);  c.pc = t; return; }
L_00278E70:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[5], c.r[5].w[0] - 24408u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278EA4u); set32(c.r[4], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00278EA4u) [[unlikely]] return; }
L_00278EA4:
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00278F24; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00278EF0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00278ED0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));  if (t) { goto L_00278F58; } }
L_00278ED0:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[17].w[0] + 4u);
    set32(c.r[7], c.r[17].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278EE8u); set32(c.r[8], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_000A(c, 266u, depth + 1u); else { c.pc = 0x0022A908u; return; } if (c.pc != 0x00278EE8u) [[unlikely]] return; }
L_00278EE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00278F54; } }
L_00278EF0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00278F60; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00278F68; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00278F54; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00278F70; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00278F54; } }
L_00278F24:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_00278F54; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29976u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00278F4C; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00278F54; } }
L_00278F4C:
    set32(c.r[2], 0u + 11u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00278F54:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 1;
L_00278F58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00278FCC; } }
L_00278F60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00278F54u | kUnwind; return; } goto L_00278F54; } }
L_00278F68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00278F54u | kUnwind; return; } goto L_00278F54; } }
L_00278F70:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278F80u); set32(c.r[6], 0u + 50u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x00278F80u) [[unlikely]] return; }
L_00278F80:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278F90u); set32(c.r[5], c.r[5].w[0] - 20792u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00278F90u) [[unlikely]] return; }
L_00278F90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278FA0u); set32(c.r[5], c.r[5].w[0] - 24400u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x00278FA0u) [[unlikely]] return; }
L_00278FA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278FB0u); set32(c.r[5], c.r[5].w[0] - 20792u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x00278FB0u) [[unlikely]] return; }
L_00278FB0:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278FC4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 230u, depth + 1u); else { c.pc = 0x0022A1A8u; return; } if (c.pc != 0x00278FC4u) [[unlikely]] return; }
L_00278FC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00278F54u | kUnwind; return; } goto L_00278F54; } }
L_00278FCC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00278FE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00279068; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0027903C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0027901C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  if (t) { goto L_00279088; } }
L_0027901C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[16].w[0] + 4u);
    set32(c.r[7], c.r[16].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279034u); set32(c.r[8], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_000A(c, 266u, depth + 1u); else { c.pc = 0x0022A908u; return; } if (c.pc != 0x00279034u) [[unlikely]] return; }
L_00279034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00279084; } }
L_0027903C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00279090; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00279098; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_002790A0; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00279084; } }
L_00279068:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0027907C; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00279084; } }
L_0027907C:
    set32(c.r[2], 0u + 7u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00279084:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 1;
L_00279088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_002790B8; } }
L_00279090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279084u | kUnwind; return; } goto L_00279084; } }
L_00279098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279084u | kUnwind; return; } goto L_00279084; } }
L_002790A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002790ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 285u, depth + 1u); else { c.pc = 0x0022AE18u; return; } if (c.pc != 0x002790ACu) [[unlikely]] return; }
L_002790AC:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279084u | kUnwind; return; } goto L_00279084; } }
L_002790B8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002790D0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    set32(c.r[2], 0u + 13u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[1].d[0] = c.r[8].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002791E8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 24352u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00278000u < 16384u) { entry = entries_001E[(t - 0x00278000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0027911C:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[19].w[0] + 4u);
    set32(c.r[7], c.r[19].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279134u); set32(c.r[8], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_000A(c, 266u, depth + 1u); else { c.pc = 0x0022A908u; return; } if (c.pc != 0x00279134u) [[unlikely]] return; }
L_00279134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));  if (t) { goto L_002791EC; } }
L_0027913C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002791F4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002791FC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00279204; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002791E8; } }
L_0027916C:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00279288; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_00279450; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002791E8; } }
L_0027918C:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_002794B8; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002791E8; } }
L_002791A0:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { goto L_002794D4; } }
    c.r[1].d[0] = c.r[18].sd[0] < -9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002791BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_002791E8; } }
L_002791BC:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002791E8; } }
L_002791C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 29988u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 29972u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002791E0u); set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x002791E0u) [[unlikely]] return; }
L_002791E0:
    set32(c.r[2], 0u + 14u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002791E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 1;
L_002791EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_002794E4; } }
L_002791F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002791E8u | kUnwind; return; } goto L_002791E8; } }
L_002791FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002791E8u | kUnwind; return; } goto L_002791E8; } }
L_00279204:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279214u); set32(c.r[6], 0u + 50u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x00279214u) [[unlikely]] return; }
L_00279214:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] - 24392u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], c.r[5].w[0] - 20792u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[29].w[0] + 208u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] - 24390u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027923Cu); st8((c.r[29].w[0] + 210u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x0027923Cu) [[unlikely]] return; }
L_0027923C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027924Cu); set32(c.r[5], c.r[5].w[0] - 24384u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x0027924Cu) [[unlikely]] return; }
L_0027924C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22528u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279260u); set32(c.r[6], 0u + 640u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x00279260u) [[unlikely]] return; }
L_00279260:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 208u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 10u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279280u); set32(c.r[9], c.r[9].w[0] - 22528u);  if (depth < kMaxDepth) unit_000A(c, 274u, depth + 1u); else { c.pc = 0x0022AAF8u; return; } if (c.pc != 0x00279280u) [[unlikely]] return; }
L_00279280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002791E8u | kUnwind; return; } goto L_002791E8; } }
L_00279288:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279298u); set32(c.r[6], 0u + 50u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x00279298u) [[unlikely]] return; }
L_00279298:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002792A8u); set32(c.r[5], c.r[5].w[0] - 20792u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002792A8u) [[unlikely]] return; }
L_002792A8:
    c.r[2].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00279320; } }
    c.r[3].d[0] = ld8((c.r[19].w[0]));
    c.budget -= 1;
L_002792B8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002791E8u | kUnwind; return; } goto L_002791E8; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002792D4u); set32(c.r[6], 0u + 50u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x002792D4u) [[unlikely]] return; }
L_002792D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002792E4u); set32(c.r[5], c.r[5].w[0] - 20792u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002792E4u) [[unlikely]] return; }
L_002792E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002792F4u); set32(c.r[5], c.r[5].w[0] - 24400u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002792F4u) [[unlikely]] return; }
L_002792F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279304u); set32(c.r[5], c.r[5].w[0] - 20792u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x00279304u) [[unlikely]] return; }
L_00279304:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279318u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 230u, depth + 1u); else { c.pc = 0x0022A1A8u; return; } if (c.pc != 0x00279318u) [[unlikely]] return; }
L_00279318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002791E8u | kUnwind; return; } goto L_002791E8; } }
L_00279320:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[16], c.r[16].w[0] - 22528u);
    c.budget -= 2;
L_00279328:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279334u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00279334u) [[unlikely]] return; }
L_00279334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00279370; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29980u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00279358; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00279358:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279328u | kUnwind; return; } goto L_00279328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[19].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002792B8u | kUnwind; return; } goto L_002792B8; } }
L_00279370:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279380u); set32(c.r[5], c.r[5].w[0] - 24376u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00279380u) [[unlikely]] return; }
L_00279380:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002793A8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], 0u + 964u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279358u | kUnwind; return; } goto L_00279358; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279358u | kUnwind; return; } goto L_00279358; } }
    c.budget -= 1;
L_002793A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002793B8u); set32(c.r[5], c.r[5].w[0] - 24472u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x002793B8u) [[unlikely]] return; }
L_002793B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002793E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] - 20888u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279358u | kUnwind; return; } goto L_00279358; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279358u | kUnwind; return; } goto L_00279358; } }
L_002793E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002793F0u); set32(c.r[5], c.r[5].w[0] - 24456u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x002793F0u) [[unlikely]] return; }
L_002793F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00279418; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] - 20884u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279358u | kUnwind; return; } goto L_00279358; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279358u | kUnwind; return; } goto L_00279358; } }
L_00279418:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279428u); set32(c.r[5], c.r[5].w[0] - 24440u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x00279428u) [[unlikely]] return; }
L_00279428:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279358u | kUnwind; return; } goto L_00279358; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] - 20880u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279358u | kUnwind; return; } goto L_00279358; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279358u | kUnwind; return; } goto L_00279358; } }
L_00279450:
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00279498; } }
    set32(c.r[2], 0u - 5u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002794A4; } }
    c.r[1].d[0] = c.r[18].sd[0] < -9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002794B0; } }
    set32(c.r[2], 0u - 4u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_0027948C; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002791E8u | kUnwind; return; } goto L_002791E8; } }
L_0027948C:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002791E8u | kUnwind; return; } goto L_002791E8; } }
L_00279498:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002791E8u | kUnwind; return; } goto L_002791E8; } }
L_002794A4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002791E8u | kUnwind; return; } goto L_002791E8; } }
L_002794B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0]), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002791E8u | kUnwind; return; } goto L_002791E8; } }
L_002794B8:
    set32(c.r[6], ld32((c.r[28].w[0] - 29980u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[28].w[0] - 29972u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002794CCu); st32((c.r[28].w[0] - 30024u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_000A(c, 249u, depth + 1u); else { c.pc = 0x0022A558u; return; } if (c.pc != 0x002794CCu) [[unlikely]] return; }
L_002794CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002791E8u | kUnwind; return; } goto L_002791E8; } }
L_002794D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002794DCu); set32(c.r[4], ld32((c.r[28].w[0] - 30024u)));  if (depth < kMaxDepth) unit_000A(c, 238u, depth + 1u); else { c.pc = 0x0022A308u; return; } if (c.pc != 0x002794DCu) [[unlikely]] return; }
L_002794DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002791E8u | kUnwind; return; } goto L_002791E8; } }
L_002794E4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_00279500:
    set32(c.r[29], c.r[29].w[0] - 704u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 696u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279544u); set32(c.r[5], c.r[5].w[0] - 24408u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x00279544u) [[unlikely]] return; }
L_00279544:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[29].w[0] + 560u);
    set32(c.r[6], c.r[6].w[0] + 400u);
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
L_00279554:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279554u | kUnwind; return; } goto L_00279554; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = ld32((c.r[2].w[0] + 468u));
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.f[3] = ld32((c.r[3].w[0] + 464u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 50u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[2] = ld32((c.r[2].w[0] + 476u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[5] = ld32((c.r[3].w[0] + 472u));
    st32((c.r[29].w[0] + 516u), c.f[0]);
    st32((c.r[29].w[0] + 512u), c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = ld32((c.r[2].w[0] + 484u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[4] = ld32((c.r[3].w[0] + 480u));
    st32((c.r[29].w[0] + 524u), c.f[2]);
    st32((c.r[29].w[0] + 520u), c.f[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = ld32((c.r[2].w[0] + 492u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[3] = ld32((c.r[3].w[0] + 488u));
    st32((c.r[29].w[0] + 532u), c.f[1]);
    st32((c.r[29].w[0] + 528u), c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[2] = ld32((c.r[2].w[0] + 496u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[29].w[0] + 536u), c.f[3]);
    c.f[3] = ld32((c.r[3].w[0] + 508u));
    st32((c.r[29].w[0] + 540u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = ld32((c.r[2].w[0] + 500u));
    st32((c.r[29].w[0] + 544u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[29].w[0] + 556u), c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = ld32((c.r[2].w[0] + 504u));
    st32((c.r[29].w[0] + 548u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 520u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[4] = ld32((c.r[2].w[0] + 512u));
    st32((c.r[29].w[0] + 552u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[29].w[0] + 472u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 536u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[2] = ld32((c.r[2].w[0] + 516u));
    st32((c.r[29].w[0] + 464u), c.f[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[29].w[0] + 488u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 552u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = ld32((c.r[2].w[0] + 524u));
    st32((c.r[29].w[0] + 468u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[29].w[0] + 504u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[3] = ld32((c.r[2].w[0] + 528u));
    st32((c.r[29].w[0] + 476u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[2] = ld32((c.r[2].w[0] + 532u));
    st32((c.r[29].w[0] + 480u), c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = ld32((c.r[2].w[0] + 540u));
    st32((c.r[29].w[0] + 484u), c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[3] = ld32((c.r[2].w[0] + 544u));
    st32((c.r[29].w[0] + 492u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[2] = ld32((c.r[2].w[0] + 548u));
    st32((c.r[29].w[0] + 496u), c.f[3]);
    c.f[3] = ld32((c.r[3].w[0] + 560u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = ld32((c.r[2].w[0] + 556u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = ld32((c.r[3].w[0] + 568u));
    st32((c.r[29].w[0] + 500u), c.f[2]);
    st32((c.r[29].w[0] + 448u), c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[2] = ld32((c.r[2].w[0] + 564u));
    st32((c.r[29].w[0] + 508u), c.f[0]);
    st32((c.r[29].w[0] + 456u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = ld32((c.r[2].w[0] + 572u));
    st32((c.r[29].w[0] + 452u), c.f[2]);
    c.budget -= 88;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002796D4u); st32((c.r[29].w[0] + 460u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x002796D4u) [[unlikely]] return; }
L_002796D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002796E4u); set32(c.r[5], c.r[5].w[0] - 20792u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002796E4u) [[unlikely]] return; }
L_002796E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002796F4u); set32(c.r[5], c.r[5].w[0] - 24400u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002796F4u) [[unlikely]] return; }
L_002796F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279704u); set32(c.r[5], c.r[5].w[0] - 20792u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x00279704u) [[unlikely]] return; }
L_00279704:
    set32(c.r[2], 0u + 16u);
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(20ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00279B34; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 24288u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00278000u < 16384u) { entry = entries_001E[(t - 0x00278000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00279730:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[20].w[0] + 4u);
    set32(c.r[7], c.r[20].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279748u); set32(c.r[8], c.r[20].w[0] + 8u);  if (depth < kMaxDepth) unit_000A(c, 266u, depth + 1u); else { c.pc = 0x0022A908u; return; } if (c.pc != 0x00279748u) [[unlikely]] return; }
L_00279748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[20].w[0]));  if (t) { goto L_00279B38; } }
L_00279750:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00279B68; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00279B70; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00279B78; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00279B34; } }
L_00279780:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279790u); set32(c.r[6], 0u + 50u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x00279790u) [[unlikely]] return; }
L_00279790:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002797A0u); set32(c.r[5], c.r[5].w[0] - 20792u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002797A0u) [[unlikely]] return; }
L_002797A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002797B0u); set32(c.r[5], c.r[5].w[0] - 24328u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002797B0u) [[unlikely]] return; }
L_002797B0:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002797C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 30028u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002797CC; } }
L_002797C4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 30028u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002797CC:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002797DCu); set32(c.r[6], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_000A(c, 289u, depth + 1u); else { c.pc = 0x0022AEE8u; return; } if (c.pc != 0x002797DCu) [[unlikely]] return; }
L_002797DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00279B34; } }
L_002797E4:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 30028u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00279BFC; } }
L_002797F0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00279C38; } }
L_002797F8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00279B34; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[20].w[0] + 4u);
    set32(c.r[7], c.r[20].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279818u); set32(c.r[8], c.r[20].w[0] + 8u);  if (depth < kMaxDepth) unit_000A(c, 266u, depth + 1u); else { c.pc = 0x0022A908u; return; } if (c.pc != 0x00279818u) [[unlikely]] return; }
L_00279818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00279B34; } }
L_00279820:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279834u); set32(c.r[7], 0u + 515u);  if (depth < kMaxDepth) unit_000A(c, 230u, depth + 1u); else { c.pc = 0x0022A1A8u; return; } if (c.pc != 0x00279834u) [[unlikely]] return; }
L_00279834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00279B34; } }
L_0027983C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_00279C58; } }
    c.r[1].d[0] = c.r[16].sd[0] < -9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00279858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00279B34; } }
L_00279858:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00279B34; } }
L_00279864:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_00279C74; } }
    c.r[1].d[0] = c.r[16].sd[0] < -9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00279880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00279B34; } }
L_00279880:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00279B34; } }
L_0027988C:
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027989Cu); set32(c.r[6], 0u + 50u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0027989Cu) [[unlikely]] return; }
L_0027989C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002798ACu); set32(c.r[5], c.r[5].w[0] - 20792u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x002798ACu) [[unlikely]] return; }
L_002798AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002798BCu); set32(c.r[5], c.r[5].w[0] - 24400u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002798BCu) [[unlikely]] return; }
L_002798BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002798CCu); set32(c.r[5], c.r[5].w[0] - 24472u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x002798CCu) [[unlikely]] return; }
L_002798CC:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002798E0u); set32(c.r[7], 0u + 515u);  if (depth < kMaxDepth) unit_000A(c, 230u, depth + 1u); else { c.pc = 0x0022A1A8u; return; } if (c.pc != 0x002798E0u) [[unlikely]] return; }
L_002798E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00279B34; } }
L_002798E8:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_00279C84; } }
    c.r[1].d[0] = c.r[16].sd[0] < -9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00279904; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00279B34; } }
L_00279904:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00279B34; } }
L_00279910:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_00279CA8; } }
    c.r[1].d[0] = c.r[16].sd[0] < -9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0027992C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00279B34; } }
L_0027992C:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00279B34; } }
L_00279938:
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279948u); set32(c.r[6], 0u + 50u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x00279948u) [[unlikely]] return; }
L_00279948:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279958u); set32(c.r[5], c.r[5].w[0] - 20792u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00279958u) [[unlikely]] return; }
L_00279958:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279968u); set32(c.r[5], c.r[5].w[0] - 24400u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x00279968u) [[unlikely]] return; }
L_00279968:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279978u); set32(c.r[5], c.r[5].w[0] - 24456u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x00279978u) [[unlikely]] return; }
L_00279978:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027998Cu); set32(c.r[7], 0u + 515u);  if (depth < kMaxDepth) unit_000A(c, 230u, depth + 1u); else { c.pc = 0x0022A1A8u; return; } if (c.pc != 0x0027998Cu) [[unlikely]] return; }
L_0027998C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00279B34; } }
L_00279994:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_00279CB8; } }
    c.r[1].d[0] = c.r[16].sd[0] < -9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002799B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00279B34; } }
L_002799B0:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00279B34; } }
L_002799BC:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_00279CDC; } }
    c.r[1].d[0] = c.r[16].sd[0] < -9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002799D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00279B34; } }
L_002799D8:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00279B34; } }
L_002799E4:
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002799F4u); set32(c.r[6], 0u + 50u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x002799F4u) [[unlikely]] return; }
L_002799F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279A04u); set32(c.r[5], c.r[5].w[0] - 20792u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00279A04u) [[unlikely]] return; }
L_00279A04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279A14u); set32(c.r[5], c.r[5].w[0] - 24400u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x00279A14u) [[unlikely]] return; }
L_00279A14:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279A24u); set32(c.r[5], c.r[5].w[0] - 24440u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x00279A24u) [[unlikely]] return; }
L_00279A24:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279A38u); set32(c.r[7], 0u + 515u);  if (depth < kMaxDepth) unit_000A(c, 230u, depth + 1u); else { c.pc = 0x0022A1A8u; return; } if (c.pc != 0x00279A38u) [[unlikely]] return; }
L_00279A38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00279B34; } }
L_00279A40:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_00279CEC; } }
    c.r[1].d[0] = c.r[16].sd[0] < -9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00279A5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00279B34; } }
L_00279A5C:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00279B34; } }
L_00279A68:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_00279D10; } }
    c.r[1].d[0] = c.r[16].sd[0] < -9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00279A84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00279B34; } }
L_00279A84:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00279B34; } }
L_00279A90:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279AA0u); set32(c.r[6], 0u + 50u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x00279AA0u) [[unlikely]] return; }
L_00279AA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279AB0u); set32(c.r[5], c.r[5].w[0] - 20792u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00279AB0u) [[unlikely]] return; }
L_00279AB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279AC0u); set32(c.r[5], c.r[5].w[0] - 24328u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x00279AC0u) [[unlikely]] return; }
L_00279AC0:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279AD4u); set32(c.r[7], 0u + 515u);  if (depth < kMaxDepth) unit_000A(c, 230u, depth + 1u); else { c.pc = 0x0022A1A8u; return; } if (c.pc != 0x00279AD4u) [[unlikely]] return; }
L_00279AD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00279B34; } }
L_00279ADC:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_00279D20; } }
    c.r[1].d[0] = c.r[16].sd[0] < -9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00279AF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00279B34; } }
L_00279AF8:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00279B34; } }
L_00279B04:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_00279E4C; } }
    c.r[1].d[0] = c.r[16].sd[0] < -9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00279B20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00279B34; } }
L_00279B20:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00279B34; } }
L_00279B2C:
    set32(c.r[2], 0u + 17u);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00279B34:
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    c.budget -= 1;
L_00279B38:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00279B60; } }
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00279B60; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 29972u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 29980u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x00279B60u) [[unlikely]] return; }
L_00279B60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0])));  if (t) { goto L_00279E5C; } }
L_00279B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279B34u | kUnwind; return; } goto L_00279B34; } }
L_00279B70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279B34u | kUnwind; return; } goto L_00279B34; } }
L_00279B78:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B88u); set32(c.r[6], 0u + 50u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x00279B88u) [[unlikely]] return; }
L_00279B88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] - 24392u)));
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], c.r[5].w[0] - 20792u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[29].w[0] + 320u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[2].w[0] - 24390u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279BB0u); st8((c.r[29].w[0] + 322u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x00279BB0u) [[unlikely]] return; }
L_00279BB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279BC0u); set32(c.r[5], c.r[5].w[0] - 24384u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x00279BC0u) [[unlikely]] return; }
L_00279BC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22528u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279BD4u); set32(c.r[6], 0u + 640u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x00279BD4u) [[unlikely]] return; }
L_00279BD4:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 320u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 10u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279BF4u); set32(c.r[9], c.r[9].w[0] - 22528u);  if (depth < kMaxDepth) unit_000A(c, 274u, depth + 1u); else { c.pc = 0x0022AAF8u; return; } if (c.pc != 0x00279BF4u) [[unlikely]] return; }
L_00279BF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279B34u | kUnwind; return; } goto L_00279B34; } }
L_00279BFC:
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29976u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002797F0u | kUnwind; return; } goto L_002797F0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279C20u); set32(c.r[5], c.r[5].w[0] - 20792u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00279C20u) [[unlikely]] return; }
L_00279C20:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279C30u); set32(c.r[6], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000A(c, 236u, depth + 1u); else { c.pc = 0x0022A2D0u; return; } if (c.pc != 0x00279C30u) [[unlikely]] return; }
L_00279C30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279B34u | kUnwind; return; } goto L_00279B34; } }
L_00279C38:
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29976u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002797F8u | kUnwind; return; } goto L_002797F8; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279B34u | kUnwind; return; } goto L_00279B34; } }
L_00279C58:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279C6Cu); st32((c.r[28].w[0] - 30032u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000A(c, 255u, depth + 1u); else { c.pc = 0x0022A670u; return; } if (c.pc != 0x00279C6Cu) [[unlikely]] return; }
L_00279C6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279B34u | kUnwind; return; } goto L_00279B34; } }
L_00279C74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279C7Cu); set32(c.r[4], ld32((c.r[28].w[0] - 30032u)));  if (depth < kMaxDepth) unit_000A(c, 238u, depth + 1u); else { c.pc = 0x0022A308u; return; } if (c.pc != 0x00279C7Cu) [[unlikely]] return; }
L_00279C7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279B34u | kUnwind; return; } goto L_00279B34; } }
L_00279C84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], ld32((c.r[3].w[0] - 20888u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] - 20808u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279CA0u); st32((c.r[28].w[0] - 30032u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000A(c, 255u, depth + 1u); else { c.pc = 0x0022A670u; return; } if (c.pc != 0x00279CA0u) [[unlikely]] return; }
L_00279CA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279B34u | kUnwind; return; } goto L_00279B34; } }
L_00279CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279CB0u); set32(c.r[4], ld32((c.r[28].w[0] - 30032u)));  if (depth < kMaxDepth) unit_000A(c, 238u, depth + 1u); else { c.pc = 0x0022A308u; return; } if (c.pc != 0x00279CB0u) [[unlikely]] return; }
L_00279CB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279B34u | kUnwind; return; } goto L_00279B34; } }
L_00279CB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], ld32((c.r[3].w[0] - 20884u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] - 20804u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279CD4u); st32((c.r[28].w[0] - 30032u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000A(c, 255u, depth + 1u); else { c.pc = 0x0022A670u; return; } if (c.pc != 0x00279CD4u) [[unlikely]] return; }
L_00279CD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279B34u | kUnwind; return; } goto L_00279B34; } }
L_00279CDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279CE4u); set32(c.r[4], ld32((c.r[28].w[0] - 30032u)));  if (depth < kMaxDepth) unit_000A(c, 238u, depth + 1u); else { c.pc = 0x0022A308u; return; } if (c.pc != 0x00279CE4u) [[unlikely]] return; }
L_00279CE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279B34u | kUnwind; return; } goto L_00279B34; } }
L_00279CEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], ld32((c.r[3].w[0] - 20880u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] - 20800u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279D08u); st32((c.r[28].w[0] - 30032u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000A(c, 255u, depth + 1u); else { c.pc = 0x0022A670u; return; } if (c.pc != 0x00279D08u) [[unlikely]] return; }
L_00279D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279B34u | kUnwind; return; } goto L_00279B34; } }
L_00279D10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279D18u); set32(c.r[4], ld32((c.r[28].w[0] - 30032u)));  if (depth < kMaxDepth) unit_000A(c, 238u, depth + 1u); else { c.pc = 0x0022A308u; return; } if (c.pc != 0x00279D18u) [[unlikely]] return; }
L_00279D18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279B34u | kUnwind; return; } goto L_00279B34; } }
L_00279D20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 21888u);
    set32(c.r[6], 0u + 964u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279D38u); st32((c.r[28].w[0] - 30032u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x00279D38u) [[unlikely]] return; }
L_00279D38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 21888u);
    set32(c.r[5], c.r[5].w[0] - 24312u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279D50u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00279D50u) [[unlikely]] return; }
L_00279D50:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279D60u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x00279D60u) [[unlikely]] return; }
L_00279D60:
    set32(c.r[4], c.r[29].w[0] + 688u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279D70u); set32(c.r[6], 0u + 5u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x00279D70u) [[unlikely]] return; }
L_00279D70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].d[0] = ld64((c.r[2].w[0] - 24304u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] - 21696u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279D8Cu); st64((c.r[29].w[0] + 96u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_001E(c, 227u, depth + 1u); else { c.pc = 0x00279E80u; return; } if (c.pc != 0x00279D8Cu) [[unlikely]] return; }
L_00279D8C:
    set32(c.r[3], 0u + 14u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st16((c.r[2].w[0] - 21882u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], 0u + 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 21872u);
    st32((c.r[2].w[0] - 21876u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 560u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279DB8u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00279DB8u) [[unlikely]] return; }
L_00279DB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 512u);
    set32(c.r[4], c.r[4].w[0] - 21808u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279DCCu); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00279DCCu) [[unlikely]] return; }
L_00279DCC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 464u);
    set32(c.r[4], c.r[4].w[0] - 21760u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279DE0u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00279DE0u) [[unlikely]] return; }
L_00279DE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 448u);
    set32(c.r[4], c.r[4].w[0] - 21712u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279DF4u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x00279DF4u) [[unlikely]] return; }
L_00279DF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 21628u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279E08u); set32(c.r[5], c.r[5].w[0] - 24472u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00279E08u) [[unlikely]] return; }
L_00279E08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 21564u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279E1Cu); set32(c.r[5], c.r[5].w[0] - 24456u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00279E1Cu) [[unlikely]] return; }
L_00279E1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], c.r[4].w[0] - 21500u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279E30u); set32(c.r[5], c.r[5].w[0] - 24440u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x00279E30u) [[unlikely]] return; }
L_00279E30:
    set32(c.r[4], ld32((c.r[28].w[0] - 30032u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 21888u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279E44u); set32(c.r[6], 0u + 964u);  if (depth < kMaxDepth) unit_000A(c, 255u, depth + 1u); else { c.pc = 0x0022A670u; return; } if (c.pc != 0x00279E44u) [[unlikely]] return; }
L_00279E44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279B34u | kUnwind; return; } goto L_00279B34; } }
L_00279E4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279E54u); set32(c.r[4], ld32((c.r[28].w[0] - 30032u)));  if (depth < kMaxDepth) unit_000A(c, 238u, depth + 1u); else { c.pc = 0x0022A308u; return; } if (c.pc != 0x00279E54u) [[unlikely]] return; }
L_00279E54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279B34u | kUnwind; return; } goto L_00279B34; } }
L_00279E5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 704u);  c.pc = t; return; }
L_00279E80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279EA8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x00279EA8u) [[unlikely]] return; }
L_00279EA8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00279EC8; } }
    set32(c.r[3], c.r[18].w[0] << 1);
    c.budget -= 1;
L_00279EBC:
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00279F0C; } }
L_00279EC8:
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00279ECC:
    set32(c.r[2], c.r[20].w[0] + c.r[18].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279ED8u); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_001E(c, 232u, depth + 1u); else { c.pc = 0x00279F30u; return; } if (c.pc != 0x00279ED8u) [[unlikely]] return; }
L_00279ED8:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 8));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279ECCu | kUnwind; return; } goto L_00279ECC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[18].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00279EBCu | kUnwind; return; } goto L_00279EBC; } }
L_00279F0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00279F30:
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00279F54; } }
    c.r[1].d[0] = c.r[5].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00279F54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0027A010; } }
L_00279F54:
    c.r[2].d[0] = c.r[5].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00279F74; } }
    c.r[1].d[0] = c.r[5].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00279F74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0027A010; } }
L_00279F74:
    c.r[2].d[0] = c.r[5].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00279F94; } }
    c.r[1].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00279F94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(11ll);  if (t) { goto L_0027A010; } }
L_00279F94:
    c.r[2].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00279FB4; } }
    c.r[1].d[0] = c.r[5].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00279FB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0027A010; } }
L_00279FB4:
    c.r[2].d[0] = c.r[5].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00279FD4; } }
    c.r[1].d[0] = c.r[5].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00279FD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(37ll);  if (t) { goto L_0027A010; } }
L_00279FD4:
    c.r[2].d[0] = c.r[5].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00279FF4; } }
    c.r[1].d[0] = c.r[5].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00279FF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);  if (t) { goto L_0027A010; } }
L_00279FF4:
    c.r[2].d[0] = c.r[5].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027A044; } }
    c.r[1].d[0] = c.r[5].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0027A044; } }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(63ll);
    c.budget -= 1;
L_0027A010:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027A04C; } }
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], c.r[5].w[0] - 32u);
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 576u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 9;
L_0027A03C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027A084; } }
L_0027A044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027A084; } }
L_0027A04C:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 712u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 714u);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A03Cu | kUnwind; return; } goto L_0027A03C; } }
L_0027A084:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027A090:
    c.r[5].d[0] = c.r[4].d[0] << 36;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.r[5].d[0] = c.r[5].d[0] >> 36;
    set32(c.r[4], 0u + 261u);
    st32((c.r[3].w[0] - 24528u), c.r[5].w[0]);
    st32((c.r[3].w[0] - 24544u), 0u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 24576u), c.r[4].w[0]);  c.pc = t; return; }
L_0027A0B0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[4].d[0] = c.r[4].d[0] << 36;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    set32(c.r[25], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 4));
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[4].d[0] = c.r[4].d[0] >> 36;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[11].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[24].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[3].d[0] = c.r[24].d[0] | 3ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[30], 0u + 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 16u);
    st64((c.r[11].w[0]), c.r[3].d[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 4));
    st32((c.r[11].w[0] + 16u), c.r[30].w[0]);
    set32(c.r[3], 0u + 14u);
    st32((c.r[11].w[0] + 20u), c.r[24].w[0]);
    set32(c.r[9], 0u + 80u);
    st32((c.r[11].w[0] + 24u), c.r[3].w[0]);
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    st32((c.r[11].w[0] + 28u), 0u);
    set32(c.r[3], 0u + 82u);
    st32((c.r[11].w[0] + 32u), 0u);
    set32(c.r[21], c.r[11].w[0] + 64u);
    st32((c.r[11].w[0] + 36u), c.r[10].w[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st32((c.r[11].w[0] + 40u), c.r[9].w[0]);
    st32((c.r[11].w[0] + 44u), 0u);
    st32((c.r[11].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[11].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[11].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 41;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[11].w[0] + 60u), 0u);  if (t) { goto L_0027A28C; } }
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] << 16;
    set32(c.r[13], c.r[16].w[0] - 1u);
    c.r[9].d[0] = c.r[3].d[0] | 65535ull;
    c.r[11].d[0] = c.r[24].d[0] | 4ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x30000000u);
    set32(c.r[14], c.r[25].w[0] - 1u);
    c.r[23].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 9;
L_0027A178:
    c.r[1].d[0] = 0ll < c.r[25].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0027A27C; } }
    set32(c.r[3], c.r[7].w[0] + c.r[18].w[0]);
    c.r[12].d[0] = c.r[20].d[0] ^ c.r[13].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[12].d[0] = c.r[12].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[15].d[0] = c.r[3].d[0] << 32;
    c.budget -= 7;
L_0027A1A0:
    c.r[3].d[0] = c.r[19].d[0] ^ c.r[14].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027A1B4; } }
    c.r[3].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 1;
L_0027A1B4:
    st64((c.r[21].w[0]), c.r[11].d[0]);
    c.r[22].d[0] = c.r[5].d[0] << 36;
    st32((c.r[21].w[0] + 16u), c.r[30].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    st32((c.r[21].w[0] + 20u), c.r[24].w[0]);
    set32(c.r[4], 0u + 14u);
    st32((c.r[21].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 15);
    set32(c.r[4], c.r[8].w[0] + c.r[17].w[0]);
    c.r[22].d[0] = c.r[22].d[0] >> 36;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    st32((c.r[21].w[0] + 28u), 0u);
    c.r[4].d[0] = c.r[4].d[0] >> 32;
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.r[4].d[0] = c.r[4].d[0] << 48;
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[10].d[0] = c.r[15].d[0] | c.r[4].d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], 0u - 16u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.r[4].d[0] = c.r[22].d[0] & c.r[4].d[0];
    c.r[22].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[10].d[0] & c.r[9].d[0];
    c.r[22].d[0] = c.r[22].d[0] >> 32;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[10].d[0] = c.r[10].d[0] >> 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[21].w[0] + 32u), c.r[4].w[0]);
    c.r[4].d[0] = c.r[10].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[21].w[0] + 36u), c.r[4].w[0]);
    c.r[4].d[0] = c.r[22].d[0] << 32;
    c.r[10].d[0] = c.r[4].d[0] | c.r[23].d[0];
    set32(c.r[4], 0u + 81u);
    st32((c.r[21].w[0] + 40u), c.r[4].w[0]);
    st32((c.r[21].w[0] + 44u), 0u);
    set32(c.r[4], 0u + 83u);
    st32((c.r[21].w[0] + 48u), 0u);
    st32((c.r[21].w[0] + 52u), 0u);
    st32((c.r[21].w[0] + 56u), c.r[4].w[0]);
    st32((c.r[21].w[0] + 60u), 0u);
    c.r[4].d[0] = c.r[19].sd[0] < c.r[25].sd[0] ? 1ull : 0ull;
    st32((c.r[21].w[0] + 64u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    st32((c.r[21].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 72u), 0u);
    st32((c.r[21].w[0] + 76u), 0u);
    st64((c.r[21].w[0] + 80u), c.r[10].d[0]);
    c.budget -= 50;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 96u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A1A0u | kUnwind; return; } goto L_0027A1A0; } }
L_0027A27C:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A178u | kUnwind; return; } goto L_0027A178; } }
L_0027A28C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x70000000u);
    st64((c.r[21].w[0]), c.r[3].d[0]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0027A2C0:
    c.r[10].d[0] = c.r[7].d[0] + 0ull;
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    c.r[8].d[0] = c.r[10].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[9].d[0] = c.r[3].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A0B0u | kUnwind; return; } goto L_0027A0B0; }
L_0027A2E0:
    c.r[10].d[0] = c.r[7].d[0] + 0ull;
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    c.r[8].d[0] = c.r[10].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[6], 0u + 1024u);
    c.budget -= 8;
    { c.r[9].d[0] = c.r[3].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A0B0u | kUnwind; return; } goto L_0027A0B0; }
L_0027A300:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[21].w[0] + c.r[19].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[7].w[0]);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0027A4D0; } }
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027A374; } }
    set32(c.r[2], c.r[3].w[0] - c.r[19].w[0]);
    set32(c.r[21], c.r[21].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0027A4D0; } }
L_0027A374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] - c.r[3].w[0]);  if (t) { goto L_0027A4D0; } }
L_0027A37C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] > 0;  if (t) { goto L_0027A4E4; } }
    set32(c.r[2], c.r[21].w[0] - c.r[16].w[0]);
    c.budget -= 1;
L_0027A388:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0027A530; } }
L_0027A390:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_0027A4C8; } }
    set32(c.r[2], c.r[23].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    st32((c.r[29].w[0] + 224u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 232u), c.r[19].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A3B8u); st32((c.r[29].w[0] + 236u), 0u);  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x0027A3B8u) [[unlikely]] return; }
L_0027A3B8:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A3C4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0006(c, 230u, depth + 1u); else { c.pc = 0x0021BCE0u; return; } if (c.pc != 0x0027A3C4u) [[unlikely]] return; }
L_0027A3C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027A3C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A3D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0021BCC0u; return; } if (c.pc != 0x0027A3D0u) [[unlikely]] return; }
L_0027A3D0:
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A3C8u | kUnwind; return; } goto L_0027A3C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027A4C8; } }
L_0027A3EC:
    set32(c.r[22], c.r[16].w[0] - c.r[21].w[0]);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027A46C; } }
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] > 0;  if (t) { goto L_0027A580; } }
L_0027A404:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] > 0;  if (t) { goto L_0027A5CC; } }
    set32(c.r[3], c.r[19].w[0] - c.r[22].w[0]);
    c.budget -= 1;
L_0027A410:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0027A4C8; } }
    set32(c.r[2], c.r[20].w[0] + c.r[16].w[0]);
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[21].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 180u), c.r[23].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A438u); st32((c.r[29].w[0] + 188u), 0u);  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x0027A438u) [[unlikely]] return; }
L_0027A438:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A444u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0006(c, 230u, depth + 1u); else { c.pc = 0x0021BCE0u; return; } if (c.pc != 0x0027A444u) [[unlikely]] return; }
L_0027A444:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027A448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A450u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0021BCC0u; return; } if (c.pc != 0x0027A450u) [[unlikely]] return; }
L_0027A450:
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A448u | kUnwind; return; } goto L_0027A448; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027A4C8; } }
L_0027A46C:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] > 0;  if (t) { goto L_0027A61C; } }
L_0027A474:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_0027A4C8; } }
    set32(c.r[2], c.r[17].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 152u), c.r[19].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A498u); st32((c.r[29].w[0] + 156u), 0u);  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x0027A498u) [[unlikely]] return; }
L_0027A498:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A4A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0006(c, 230u, depth + 1u); else { c.pc = 0x0021BCE0u; return; } if (c.pc != 0x0027A4A4u) [[unlikely]] return; }
L_0027A4A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027A4A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A4B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0021BCC0u; return; } if (c.pc != 0x0027A4B0u) [[unlikely]] return; }
L_0027A4B0:
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A4A8u | kUnwind; return; } goto L_0027A4A8; } }
    c.budget -= 1;
L_0027A4C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[21].w[0] + c.r[19].w[0]);  if (t) { goto L_0027A668; } }
L_0027A4D0:
    c.r[2].d[0] = c.r[21].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A3ECu | kUnwind; return; } goto L_0027A3EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A37Cu | kUnwind; return; } goto L_0027A37C; } }
L_0027A4E4:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 260u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 256u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 264u), c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A4FCu); st32((c.r[29].w[0] + 268u), 0u);  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x0027A4FCu) [[unlikely]] return; }
L_0027A4FC:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A508u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0006(c, 230u, depth + 1u); else { c.pc = 0x0021BCE0u; return; } if (c.pc != 0x0027A508u) [[unlikely]] return; }
L_0027A508:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027A50C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A514u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0021BCC0u; return; } if (c.pc != 0x0027A514u) [[unlikely]] return; }
L_0027A514:
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A50Cu | kUnwind; return; } goto L_0027A50C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[21].w[0] - c.r[16].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A388u | kUnwind; return; } goto L_0027A388; } }
L_0027A530:
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);
    st32((c.r[29].w[0] + 244u), c.r[23].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A54Cu); st32((c.r[29].w[0] + 252u), 0u);  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x0027A54Cu) [[unlikely]] return; }
L_0027A54C:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A558u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0006(c, 230u, depth + 1u); else { c.pc = 0x0021BCE0u; return; } if (c.pc != 0x0027A558u) [[unlikely]] return; }
L_0027A558:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027A55C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A564u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0021BCC0u; return; } if (c.pc != 0x0027A564u) [[unlikely]] return; }
L_0027A564:
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A55Cu | kUnwind; return; } goto L_0027A55C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A390u | kUnwind; return; } goto L_0027A390; } }
L_0027A580:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 208u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 212u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 216u), c.r[21].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A598u); st32((c.r[29].w[0] + 220u), 0u);  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x0027A598u) [[unlikely]] return; }
L_0027A598:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A5A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0006(c, 230u, depth + 1u); else { c.pc = 0x0021BCE0u; return; } if (c.pc != 0x0027A5A4u) [[unlikely]] return; }
L_0027A5A4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027A5A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A5B0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0021BCC0u; return; } if (c.pc != 0x0027A5B0u) [[unlikely]] return; }
L_0027A5B0:
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A5A8u | kUnwind; return; } goto L_0027A5A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A404u | kUnwind; return; } goto L_0027A404; } }
L_0027A5CC:
    set32(c.r[2], c.r[17].w[0] + c.r[21].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 192u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 200u), c.r[22].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A5E8u); st32((c.r[29].w[0] + 204u), 0u);  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x0027A5E8u) [[unlikely]] return; }
L_0027A5E8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A5F4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0006(c, 230u, depth + 1u); else { c.pc = 0x0021BCE0u; return; } if (c.pc != 0x0027A5F4u) [[unlikely]] return; }
L_0027A5F4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027A5F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A600u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0021BCC0u; return; } if (c.pc != 0x0027A600u) [[unlikely]] return; }
L_0027A600:
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A5F8u | kUnwind; return; } goto L_0027A5F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[19].w[0] - c.r[22].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A410u | kUnwind; return; } goto L_0027A410; } }
L_0027A61C:
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 160u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 164u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 168u), c.r[21].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A634u); st32((c.r[29].w[0] + 172u), 0u);  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x0027A634u) [[unlikely]] return; }
L_0027A634:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A640u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0006(c, 230u, depth + 1u); else { c.pc = 0x0021BCE0u; return; } if (c.pc != 0x0027A640u) [[unlikely]] return; }
L_0027A640:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027A644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A64Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0021BCC0u; return; } if (c.pc != 0x0027A64Cu) [[unlikely]] return; }
L_0027A64C:
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A644u | kUnwind; return; } goto L_0027A644; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027A474u | kUnwind; return; } goto L_0027A474; } }
L_0027A668:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_0027A6A0:
    set32(c.r[12], ld32((c.r[8].w[0] + 72u)));
    set32(c.r[11], ld32((c.r[8].w[0] + 76u)));
    set32(c.r[3], c.r[9].w[0] + c.r[12].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[11].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1024u);
    mmi::div(c, 0, c.r[3].w[0], c.r[12].w[0]);
    c.r[10].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[9].w[0] - c.r[11].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0027A6F0; } }
    c.r[1].d[0] = c.r[3].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0027A6F0; } }
    set32(c.r[3], ld32((c.r[8].w[0] + 68u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0]), 0u);
    set32(c.r[3], ld32((c.r[8].w[0] + 68u)));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), 0u);  if (t) { goto L_0027A768; } }
L_0027A6F0:
    c.budget -= 2;
    { const bool t = c.r[10].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 10));  if (t) { goto L_0027A700; } }
    set32(c.r[3], c.r[10].w[0] + 1023u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 10));
    c.budget -= 2;
L_0027A700:
    set32(c.r[9], c.r[3].w[0] << 10);
    set32(c.r[3], c.r[12].w[0] - c.r[11].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027A730; } }
    set32(c.r[3], ld32((c.r[8].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    st32((c.r[6].w[0]), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), 0u);  if (t) { goto L_0027A768; } }
L_0027A730:
    set32(c.r[3], ld32((c.r[8].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[8].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 76u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[8].w[0] + 68u)));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[8].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 76u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[9].w[0] - c.r[3].w[0]);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.budget -= 14;
L_0027A768:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027A770:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0027A878; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0027A7FC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0027A7C4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027A7BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 56u)));  if (t) { goto L_0027A838; } }
L_0027A7BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027A8F4; } }
L_0027A7C4:
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 48u), 0u);  if (t) { goto L_0027A834; } }
L_0027A7FC:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull | 33024ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A80Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 198u, depth + 1u); else { c.pc = 0x00229A10u; return; } if (c.pc != 0x0027A80Cu) [[unlikely]] return; }
L_0027A80C:
    c.r[3].d[0] = c.r[2].d[0] << 40;
    set32(c.r[4], c.r[29].w[0] + 60u);
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    set32(c.r[5], c.r[29].w[0] + 52u);
    set32(c.r[6], c.r[29].w[0] + 56u);
    set32(c.r[7], c.r[29].w[0] + 48u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A834u); set32(c.r[9], c.r[3].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_001E(c, 280u, depth + 1u); else { c.pc = 0x0027A6A0u; return; } if (c.pc != 0x0027A834u) [[unlikely]] return; }
L_0027A834:
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_0027A838:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[10], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 10));
    c.budget -= 10;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[8], c.r[10].w[0] + c.r[3].w[0]);  if (t) { goto L_0027A868; } }
    set32(c.r[2], c.r[5].w[0] + 1023u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    c.budget -= 2;
L_0027A868:
    set32(c.r[3], c.r[2].w[0] << 10);
    set32(c.r[2], c.r[10].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[2].w[0] - c.r[8].w[0]);  if (t) { goto L_0027A880; } }
L_0027A878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027A8F4; } }
L_0027A880:
    c.r[1].d[0] = c.r[9].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    if (c.r[1].d[0] == 0) c.r[9].d[0] = c.r[3].d[0];
    set32(c.r[7], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], c.r[5].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[11], c.r[3].w[0] - c.r[9].w[0]);  if (t) { goto L_0027A8C0; } }
    set32(c.r[2], c.r[9].w[0] + c.r[11].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027A8C0; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A8BCu); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_001E(c, 240u, depth + 1u); else { c.pc = 0x0027A300u; return; } if (c.pc != 0x0027A8BCu) [[unlikely]] return; }
L_0027A8BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027A8C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 13;
L_0027A8F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0027A910:
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_0027A930:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027A980; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], 0u + 40u);
    set32(c.r[6], c.r[3].w[0] - c.r[6].w[0]);
    c.r[1].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0027A958; } }
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0027A958:
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027A97C; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0027A97C:
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    c.budget -= 1;
L_0027A980:
    set32(c.r[6], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), c.r[3].w[0]);  c.pc = t; return; }
L_0027A9C0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027AA48; } }
    set32(c.r[11], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[9], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[10], c.r[11].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[11].w[0] - c.r[9].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027AA08; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[10].w[0]);
    st32((c.r[7].w[0]), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), 0u);  if (t) { goto L_0027AA40; } }
L_0027AA08:
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[10].w[0] - c.r[3].w[0]);
    st32((c.r[8].w[0]), c.r[3].w[0]);
    c.budget -= 14;
L_0027AA40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027AA78; } }
L_0027AA48:
    set32(c.r[9], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], 0u + 40u);
    set32(c.r[9], c.r[9].w[0] + c.r[4].w[0]);
    set32(c.r[9], c.r[9].w[0] + 4u);
    st32((c.r[5].w[0]), c.r[9].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    st32((c.r[8].w[0]), c.r[3].w[0]);
    c.budget -= 12;
L_0027AA78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0027AA80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 32784ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3968u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AAACu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 198u, depth + 1u); else { c.pc = 0x00229A10u; return; } if (c.pc != 0x0027AAACu) [[unlikely]] return; }
L_0027AAAC:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull | 32784ull;
    set32(c.r[6], 0u + 4224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AAC0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 198u, depth + 1u); else { c.pc = 0x00229A10u; return; } if (c.pc != 0x0027AAC0u) [[unlikely]] return; }
L_0027AAC0:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull | 32992ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AADCu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 198u, depth + 1u); else { c.pc = 0x00229A10u; return; } if (c.pc != 0x0027AADCu) [[unlikely]] return; }
L_0027AADC:
    c.r[3].d[0] = c.r[2].d[0] << 40;
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.r[3].d[0] = c.r[3].d[0] >> 40;
    c.r[5].d[0] = 0ull | 32976ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[10], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AB10u); set32(c.r[9], 0u + 16384u);  if (depth < kMaxDepth) unit_000A(c, 198u, depth + 1u); else { c.pc = 0x00229A10u; return; } if (c.pc != 0x0027AB10u) [[unlikely]] return; }
L_0027AB10:
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027AB40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull | 32784ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], 0u + 3968u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], 0u + 32767u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AB64u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 198u, depth + 1u); else { c.pc = 0x00229A10u; return; } if (c.pc != 0x0027AB64u) [[unlikely]] return; }
L_0027AB64:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull | 32784ull;
    set32(c.r[6], 0u + 4224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AB78u); set32(c.r[7], 0u + 32767u);  if (depth < kMaxDepth) unit_000A(c, 198u, depth + 1u); else { c.pc = 0x00229A10u; return; } if (c.pc != 0x0027AB78u) [[unlikely]] return; }
L_0027AB78:
    set32(c.r[3], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 10));  if (t) { goto L_0027AB90; } }
    set32(c.r[2], c.r[3].w[0] + 1023u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    c.budget -= 2;
L_0027AB90:
    set32(c.r[9], c.r[2].w[0] << 10);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.r[5].d[0] = 0ull | 32992ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 19u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ABB0u); set32(c.r[10], c.r[8].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 198u, depth + 1u); else { c.pc = 0x00229A10u; return; } if (c.pc != 0x0027ABB0u) [[unlikely]] return; }
L_0027ABB0:
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027ABD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[4].w[0]), 0u);
    c.r[16].d[0] = c.r[11].d[0] + 0ull;
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 52u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 60u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 64u), 0u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 72u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 76u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st32((c.r[4].w[0] + 68u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 92u), c.r[16].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AC38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0027AC38u) [[unlikely]] return; }
L_0027AC38:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[2], ld32((c.r[18].w[0] + 88u)));  if (t) { goto L_0027AC88; } }
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AC58u); st32((c.r[29].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x0021BBA0u; return; } if (c.pc != 0x0027AC58u) [[unlikely]] return; }
L_0027AC58:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AC64u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0006(c, 230u, depth + 1u); else { c.pc = 0x0021BCE0u; return; } if (c.pc != 0x0027AC64u) [[unlikely]] return; }
L_0027AC64:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0027AC68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AC70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 228u, depth + 1u); else { c.pc = 0x0021BCC0u; return; } if (c.pc != 0x0027AC70u) [[unlikely]] return; }
L_0027AC70:
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027AC68u | kUnwind; return; } goto L_0027AC68; } }
    c.budget -= 1;
L_0027AC88:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027AC8C:
    c.r[6].d[0] = c.r[16].d[0] | 2432ull;
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull | 32784ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ACA0u); set32(c.r[7], 0u + 16383u);  if (depth < kMaxDepth) unit_000A(c, 198u, depth + 1u); else { c.pc = 0x00229A10u; return; } if (c.pc != 0x0027ACA0u) [[unlikely]] return; }
L_0027ACA0:
    c.r[6].d[0] = c.r[16].d[0] | 2688ull;
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull | 32784ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ACB4u); set32(c.r[7], 0u + 16383u);  if (depth < kMaxDepth) unit_000A(c, 198u, depth + 1u); else { c.pc = 0x00229A10u; return; } if (c.pc != 0x0027ACB4u) [[unlikely]] return; }
L_0027ACB4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027AC8Cu | kUnwind; return; } goto L_0027AC8C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0027ACE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[2].w[0] - 20768u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0027AD38; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29964u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027AD54; } }
L_0027AD0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20720u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AD20u); set32(c.r[6], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_0008(c, 169u, depth + 1u); else { c.pc = 0x00221820u; return; } if (c.pc != 0x0027AD20u) [[unlikely]] return; }
L_0027AD20:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027AD74; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027AD30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0027AD80; } }
L_0027AD38:
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 11));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AD4Cu); set32(c.r[7], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000A(c, 170u, depth + 1u); else { c.pc = 0x002294D8u; return; } if (c.pc != 0x0027AD4Cu) [[unlikely]] return; }
L_0027AD4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 11);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027AD30u | kUnwind; return; } goto L_0027AD30; } }
L_0027AD54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 20720u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AD68u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 133u, depth + 1u); else { c.pc = 0x002212F0u; return; } if (c.pc != 0x0027AD68u) [[unlikely]] return; }
L_0027AD68:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29964u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027AD0Cu | kUnwind; return; } goto L_0027AD0C; } }
L_0027AD74:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29964u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027AD30u | kUnwind; return; } goto L_0027AD30; } }
L_0027AD80:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027AD90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0027ADA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ADA8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0022E588u; return; } if (c.pc != 0x0027ADA8u) [[unlikely]] return; }
L_0027ADA8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(30ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027ADA0u | kUnwind; return; } goto L_0027ADA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 20768u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027ADE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ADD4u);  if (depth < kMaxDepth) unit_000A(c, 168u, depth + 1u); else { c.pc = 0x002294A0u; return; } if (c.pc != 0x0027ADD4u) [[unlikely]] return; }
L_0027ADD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ADE0u); set32(c.r[4], ld32((c.r[2].w[0] - 20724u)));  if (depth < kMaxDepth) unit_0008(c, 433u, depth + 1u); else { c.pc = 0x00223DC0u; return; } if (c.pc != 0x0027ADE0u) [[unlikely]] return; }
L_0027ADE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0027ADF8; } }
L_0027ADE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ADF4u); set32(c.r[4], ld32((c.r[2].w[0] - 20720u)));  if (depth < kMaxDepth) unit_0008(c, 105u, depth + 1u); else { c.pc = 0x00220F38u; return; } if (c.pc != 0x0027ADF4u) [[unlikely]] return; }
L_0027ADF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0027ADF8:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027AE10:
    set32(c.r[29], c.r[29].w[0] - 560u);
    set32(c.r[2], 0u + 92u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 556u), 0u);
    st32((c.r[29].w[0] + 552u), 0u);
    st32((c.r[28].w[0] - 29968u), 0u);
    st32((c.r[29].w[0] + 548u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0027AE44; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0027AE44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = ld8((c.r[2].w[0] - 2400u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0027AE6C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0027AE6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  if (t) { goto L_0027AE7C; } }
L_0027AE6C:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 20768u), c.r[3].w[0]);  if (t) { goto L_0027AE80; } }
L_0027AE7C:
    st32((c.r[2].w[0] - 20768u), 0u);
    c.budget -= 1;
L_0027AE80:
    set32(c.r[4], c.r[29].w[0] + 536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AE8Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x0027AE8Cu) [[unlikely]] return; }
L_0027AE8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AE94u); set32(c.r[4], c.r[29].w[0] + 536u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x0027AE94u) [[unlikely]] return; }
L_0027AE94:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 556u);
    set32(c.r[6], c.r[29].w[0] + 552u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AEA8u); set32(c.r[7], c.r[29].w[0] + 548u);  if (depth < kMaxDepth) unit_0010(c, 202u, depth + 1u); else { c.pc = 0x00241F70u; return; } if (c.pc != 0x0027AEA8u) [[unlikely]] return; }
L_0027AEA8:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 536u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AEB8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x0027AEB8u) [[unlikely]] return; }
L_0027AEB8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0027B0E8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 548u)));
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0027AEF0; } }
L_0027AED0:
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027AED0u | kUnwind; return; } goto L_0027AED0; } }
    c.budget -= 1;
L_0027AEF0:
    set32(c.r[2], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_0027AF04; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0027AF04:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AF14u); set32(c.r[6], 0u + 100u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0027AF14u) [[unlikely]] return; }
L_0027AF14:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AF24u); set32(c.r[6], 0u + 100u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0027AF24u) [[unlikely]] return; }
L_0027AF24:
    c.r[1].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0027B0C8; } }
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[16].w[0] - 8u);  if (t) { goto L_0027AF98; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 548u)));
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 2;
L_0027AF44:
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 2u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 4u));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 6u));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 8u));
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 10u));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 12u));
    st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 14u));
    st8((c.r[5].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027AF44u | kUnwind; return; } goto L_0027AF44; } }
L_0027AF98:
    c.r[1].d[0] = c.r[7].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0027B0C8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 548u)));
    set32(c.r[4], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[7].w[0] + c.r[29].w[0]);
    set32(c.r[5], c.r[2].w[0] + 160u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
L_0027AFB8:
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027AFB8u | kUnwind; return; } goto L_0027AFB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B0C8; } }
L_0027AFDC:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AFE8u); set32(c.r[5], c.r[5].w[0] - 24208u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x0027AFE8u) [[unlikely]] return; }
L_0027AFE8:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AFF4u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0027AFF4u) [[unlikely]] return; }
L_0027AFF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B018; } }
L_0027AFFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B00Cu); set32(c.r[4], c.r[4].w[0] - 2400u);  if (depth < kMaxDepth) unit_0012(c, 25u, depth + 1u); else { c.pc = 0x002481C0u; return; } if (c.pc != 0x0027B00Cu) [[unlikely]] return; }
L_0027B00C:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B018u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0027B018u) [[unlikely]] return; }
L_0027B018:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 20768u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027B15C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29968u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027B104; } }
L_0027B034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B03Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 62u, depth + 1u); else { c.pc = 0x00228728u; return; } if (c.pc != 0x0027B03Cu) [[unlikely]] return; }
L_0027B03C:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B034u | kUnwind; return; } goto L_0027B034; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B05Cu); c.r[4].d[0] = c.r[2].d[0] | 32784ull;  if (depth < kMaxDepth) unit_0008(c, 429u, depth + 1u); else { c.pc = 0x00223C58u; return; } if (c.pc != 0x0027B05Cu) [[unlikely]] return; }
L_0027B05C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[2].w[0] + 15u);
    st32((c.r[3].w[0] - 20724u), c.r[2].w[0]);
    set32(c.r[5], 0u + 5u);
    set32(c.r[2], 0u - 16u);
    c.r[6].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B07Cu); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_000A(c, 160u, depth + 1u); else { c.pc = 0x002293D8u; return; } if (c.pc != 0x0027B07Cu) [[unlikely]] return; }
L_0027B07C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027B080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B088u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0022E588u; return; } if (c.pc != 0x0027B088u) [[unlikely]] return; }
L_0027B088:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(30ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B080u | kUnwind; return; } goto L_0027B080; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B0ACu); set32(c.r[4], c.r[4].w[0] - 20760u);  if (depth < kMaxDepth) unit_000A(c, 42u, depth + 1u); else { c.pc = 0x00228518u; return; } if (c.pc != 0x0027B0ACu) [[unlikely]] return; }
L_0027B0AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027B118; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B0C0u); set32(c.r[4], ld32((c.r[2].w[0] - 20724u)));  if (depth < kMaxDepth) unit_0008(c, 433u, depth + 1u); else { c.pc = 0x00223DC0u; return; } if (c.pc != 0x0027B0C0u) [[unlikely]] return; }
L_0027B0C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027B23C; } }
L_0027B0C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    set32(c.r[3], ld32((c.r[2].w[0] - 20768u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027AFFCu | kUnwind; return; } goto L_0027AFFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027AFDCu | kUnwind; return; } goto L_0027AFDC; } }
L_0027B0E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 2400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B0FCu); set32(c.r[6], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0012(c, 25u, depth + 1u); else { c.pc = 0x002481C0u; return; } if (c.pc != 0x0027B0FCu) [[unlikely]] return; }
L_0027B0FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B018u | kUnwind; return; } goto L_0027B018; } }
L_0027B104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B10Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 120u, depth + 1u); else { c.pc = 0x00228F40u; return; } if (c.pc != 0x0027B10Cu) [[unlikely]] return; }
L_0027B10C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29968u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B034u | kUnwind; return; } goto L_0027B034; } }
L_0027B118:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 556u)));
    set32(c.r[6], ld32((c.r[2].w[0] - 20756u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 544u);
    st8((c.r[29].w[0] + 544u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 545u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 546u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 20764u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] - 20760u)));
    set32(c.r[3], c.r[4].w[0] >> 11);
    st32((c.r[29].w[0] + 556u), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B154u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000A(c, 162u, depth + 1u); else { c.pc = 0x00229408u; return; } if (c.pc != 0x0027B154u) [[unlikely]] return; }
L_0027B154:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027B23C; } }
L_0027B15C:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B168u); c.r[5].d[0] = 0ull | 32769ull;  if (depth < kMaxDepth) unit_0008(c, 85u, depth + 1u); else { c.pc = 0x00220CA8u; return; } if (c.pc != 0x0027B168u) [[unlikely]] return; }
L_0027B168:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 20720u), c.r[2].w[0]);
    c.budget -= 2;
L_0027B170:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20720u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B184u); set32(c.r[6], c.r[29].w[0] + 540u);  if (depth < kMaxDepth) unit_0008(c, 169u, depth + 1u); else { c.pc = 0x00221820u; return; } if (c.pc != 0x0027B184u) [[unlikely]] return; }
L_0027B184:
    set32(c.r[3], ld32((c.r[29].w[0] + 540u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B170u | kUnwind; return; } goto L_0027B170; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20720u)));
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0027B1AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027B23C; } }
L_0027B1AC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B1B8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0008(c, 117u, depth + 1u); else { c.pc = 0x002210B0u; return; } if (c.pc != 0x0027B1B8u) [[unlikely]] return; }
L_0027B1B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[3].w[0] - 20764u), c.r[2].w[0]);  if (t) { goto L_0027B204; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 20720u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B1D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0008(c, 117u, depth + 1u); else { c.pc = 0x002210B0u; return; } if (c.pc != 0x0027B1D8u) [[unlikely]] return; }
L_0027B1D8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0027B218; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 556u)));
    set32(c.r[4], ld32((c.r[2].w[0] - 20720u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B1F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0008(c, 117u, depth + 1u); else { c.pc = 0x002210B0u; return; } if (c.pc != 0x0027B1F4u) [[unlikely]] return; }
L_0027B1F4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0027B22C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29964u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B154u | kUnwind; return; } goto L_0027B154; } }
L_0027B204:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B210u); set32(c.r[4], ld32((c.r[2].w[0] - 20720u)));  if (depth < kMaxDepth) unit_0008(c, 105u, depth + 1u); else { c.pc = 0x00220F38u; return; } if (c.pc != 0x0027B210u) [[unlikely]] return; }
L_0027B210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027B23C; } }
L_0027B218:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B224u); set32(c.r[4], ld32((c.r[2].w[0] - 20720u)));  if (depth < kMaxDepth) unit_0008(c, 105u, depth + 1u); else { c.pc = 0x00220F38u; return; } if (c.pc != 0x0027B224u) [[unlikely]] return; }
L_0027B224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027B23C; } }
L_0027B22C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B238u); set32(c.r[4], ld32((c.r[2].w[0] - 20720u)));  if (depth < kMaxDepth) unit_0008(c, 105u, depth + 1u); else { c.pc = 0x00220F38u; return; } if (c.pc != 0x0027B238u) [[unlikely]] return; }
L_0027B238:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0027B23C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 560u);  c.pc = t; return; }
L_0027B250:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0027B260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B270u); set32(c.r[4], c.r[28].w[0] - 30636u);  if (depth < kMaxDepth) unit_0011(c, 378u, depth + 1u); else { c.pc = 0x00247A70u; return; } if (c.pc != 0x0027B270u) [[unlikely]] return; }
L_0027B270:
    set32(c.r[3], ld32((c.r[28].w[0] - 29852u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29856u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0027B2A4; } }
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0027B2BC; } }
    c.r[2].d[0] = c.r[3].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027B320; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 4096u);  if (t) { goto L_0027B2BC; } }
L_0027B2A4:
    set32(c.r[2], ld32((c.r[28].w[0] - 29868u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027B330; } }
    set32(c.r[4], 0u + 4096u);
    c.budget -= 1;
L_0027B2BC:
    set32(c.r[2], 0u - 16u);
    c.r[5].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));  if (t) { goto L_0027B2D4; } }
    set32(c.r[2], c.r[5].w[0] + 15u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_0027B2D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[3], 0u + 257u);
    st32((c.r[2].w[0] - 19424u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 29852u)));
    st32((c.r[2].w[0] - 19440u), c.r[4].w[0]);
    st32((c.r[2].w[0] - 19456u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 29852u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29868u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0027B33C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29852u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[28].w[0] - 29852u), c.r[2].w[0]);
    c.budget -= 3;
L_0027B310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B318u); set32(c.r[4], c.r[28].w[0] - 30636u);  if (depth < kMaxDepth) unit_0011(c, 378u, depth + 1u); else { c.pc = 0x00247A70u; return; } if (c.pc != 0x0027B318u) [[unlikely]] return; }
L_0027B318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027B348; } }
L_0027B320:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29896u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B2BCu | kUnwind; return; } goto L_0027B2BC; } }
L_0027B330:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29896u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B2BCu | kUnwind; return; } goto L_0027B2BC; } }
L_0027B33C:
    set32(c.r[2], ld32((c.r[28].w[0] - 29872u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29852u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B310u | kUnwind; return; } goto L_0027B310; } }
L_0027B348:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027B360:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 19536u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[29].w[0] + 52u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 56u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 48u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B390u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_001E(c, 287u, depth + 1u); else { c.pc = 0x0027A9C0u; return; } if (c.pc != 0x0027B390u) [[unlikely]] return; }
L_0027B390:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 4u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0027B414; } }
    set32(c.r[17], c.r[6].w[0] - c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_0027B41C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B3E0u); set32(c.r[6], c.r[6].w[0] - c.r[17].w[0]);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x0027B3E0u) [[unlikely]] return; }
L_0027B3E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B3FCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x0027B3FCu) [[unlikely]] return; }
L_0027B3FC:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_0027B400:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B40Cu); set32(c.r[4], c.r[4].w[0] - 19536u);  if (depth < kMaxDepth) unit_001E(c, 286u, depth + 1u); else { c.pc = 0x0027A930u; return; } if (c.pc != 0x0027B40Cu) [[unlikely]] return; }
L_0027B40C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027B430; } }
L_0027B414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027B430; } }
L_0027B41C:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B428u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x0027B428u) [[unlikely]] return; }
L_0027B428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B400u | kUnwind; return; } goto L_0027B400; } }
L_0027B430:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0027B450:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 29856u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29868u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0027B484; } }
    set32(c.r[16], c.r[6].w[0] - c.r[2].w[0]);
    c.budget -= 1;
L_0027B484:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_0027B500; } }
    c.r[2].d[0] = c.r[3].d[0] << 36;
    set32(c.r[6], c.r[6].w[0] - c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] >> 36;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] << 36;
    c.r[2].d[0] = c.r[2].d[0] >> 36;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B4B4u); c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x0027B4B4u) [[unlikely]] return; }
L_0027B4B4:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 29872u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 36;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] >> 36;
    c.r[2].d[0] = c.r[2].d[0] << 36;
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] >> 36;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B4ECu); c.r[5].d[0] = c.r[2].d[0] | c.r[5].d[0];  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x0027B4ECu) [[unlikely]] return; }
L_0027B4EC:
    set32(c.r[2], ld32((c.r[28].w[0] - 29872u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[28].w[0] - 29856u), c.r[2].w[0]);
    c.budget -= 3;
L_0027B4F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027B538; } }
L_0027B500:
    c.r[2].d[0] = c.r[3].d[0] << 36;
    c.r[2].d[0] = c.r[2].d[0] >> 36;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] << 36;
    c.r[2].d[0] = c.r[2].d[0] >> 36;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B524u); c.r[5].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x0027B524u) [[unlikely]] return; }
L_0027B524:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 29856u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29856u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B4F8u | kUnwind; return; } goto L_0027B4F8; } }
L_0027B538:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027B550:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B560u); set32(c.r[4], ld32((c.r[28].w[0] - 29944u)));  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0027B560u) [[unlikely]] return; }
L_0027B560:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B56Cu); set32(c.r[4], ld32((c.r[2].w[0] - 19584u)));  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0027B56Cu) [[unlikely]] return; }
L_0027B56C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B578u); set32(c.r[4], ld32((c.r[2].w[0] - 19576u)));  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0027B578u) [[unlikely]] return; }
L_0027B578:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B584u); set32(c.r[4], ld32((c.r[2].w[0] - 19572u)));  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0027B584u) [[unlikely]] return; }
L_0027B584:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B590u); set32(c.r[4], ld32((c.r[2].w[0] - 19568u)));  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0027B590u) [[unlikely]] return; }
L_0027B590:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B59Cu); set32(c.r[4], ld32((c.r[2].w[0] - 19560u)));  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0027B59Cu) [[unlikely]] return; }
L_0027B59C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B5A8u); set32(c.r[4], ld32((c.r[2].w[0] - 19552u)));  if (depth < kMaxDepth) unit_0008(c, 433u, depth + 1u); else { c.pc = 0x00223DC0u; return; } if (c.pc != 0x0027B5A8u) [[unlikely]] return; }
L_0027B5A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B5B4u); set32(c.r[4], ld32((c.r[2].w[0] - 19544u)));  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0027B5B4u) [[unlikely]] return; }
L_0027B5B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B5C0u); set32(c.r[4], ld32((c.r[2].w[0] - 19540u)));  if (depth < kMaxDepth) unit_0008(c, 433u, depth + 1u); else { c.pc = 0x00223DC0u; return; } if (c.pc != 0x0027B5C0u) [[unlikely]] return; }
L_0027B5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B5C8u); set32(c.r[4], ld32((c.r[28].w[0] - 29880u)));  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0027B5C8u) [[unlikely]] return; }
L_0027B5C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B5D0u); set32(c.r[4], ld32((c.r[28].w[0] - 29876u)));  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0027B5D0u) [[unlikely]] return; }
L_0027B5D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B5D8u); set32(c.r[4], ld32((c.r[28].w[0] - 29872u)));  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0027B5D8u) [[unlikely]] return; }
L_0027B5D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[28].w[0] - 29880u), 0u);
    st32((c.r[3].w[0] - 19584u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[28].w[0] - 29876u), 0u);
    st32((c.r[3].w[0] - 19576u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[28].w[0] - 29872u), 0u);
    st32((c.r[3].w[0] - 19572u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 19568u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 19560u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 19552u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 19544u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 19540u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027B630:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B640u); set32(c.r[4], c.r[28].w[0] - 30636u);  if (depth < kMaxDepth) unit_0011(c, 378u, depth + 1u); else { c.pc = 0x00247A70u; return; } if (c.pc != 0x0027B640u) [[unlikely]] return; }
L_0027B640:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29884u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027B718; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29900u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027B718; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 29856u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 29852u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0027B6B8; } }
    set32(c.r[2], c.r[4].w[0] - c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027B718; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 29876u)));
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00280000u);
    st8((c.r[28].w[0] - 29888u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 19312u);
    set32(c.r[7], c.r[7].w[0] - 11200u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B6B0u); st8((c.r[28].w[0] - 29900u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001E(c, 10u, depth + 1u); else { c.pc = 0x00278080u; return; } if (c.pc != 0x0027B6B0u) [[unlikely]] return; }
L_0027B6B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[28].w[0] - 30636u);  if (t) { goto L_0027B71C; } }
L_0027B6B8:
    c.r[1].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0027B718; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29872u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29868u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027B718; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 29876u)));
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00280000u);
    st8((c.r[28].w[0] - 29888u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 19312u);
    set32(c.r[7], c.r[7].w[0] - 11200u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B718u); st8((c.r[28].w[0] - 29900u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001E(c, 10u, depth + 1u); else { c.pc = 0x00278080u; return; } if (c.pc != 0x0027B718u) [[unlikely]] return; }
L_0027B718:
    set32(c.r[4], c.r[28].w[0] - 30636u);
    c.budget -= 1;
L_0027B71C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B724u);  if (depth < kMaxDepth) unit_0011(c, 378u, depth + 1u); else { c.pc = 0x00247A70u; return; } if (c.pc != 0x0027B724u) [[unlikely]] return; }
L_0027B724:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027B730:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B730u | kUnwind; return; } goto L_0027B730; } }
    c.budget -= 1;
L_0027B750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[28].w[0] - 29948u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0027B7D0; } }
L_0027B784:
    set32(c.r[6], ld32((c.r[28].w[0] - 29940u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0027B7D8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29944u)));
    set32(c.r[2], c.r[2].w[0] + 16384u);
    set32(c.r[5], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 4;
L_0027B7A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B7A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 86u, depth + 1u); else { c.pc = 0x0021AA90u; return; } if (c.pc != 0x0027B7A8u) [[unlikely]] return; }
L_0027B7A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 29940u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[28].w[0] - 29940u), c.r[2].w[0]);
    c.budget -= 4;
L_0027B7B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B784u | kUnwind; return; } goto L_0027B784; } }
    c.budget -= 1;
L_0027B7D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027B800; } }
L_0027B7D8:
    set32(c.r[4], ld32((c.r[28].w[0] - 29944u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B7E4u); set32(c.r[5], 0u + 16384u);  if (depth < kMaxDepth) unit_001E(c, 306u, depth + 1u); else { c.pc = 0x0027ACE0u; return; } if (c.pc != 0x0027B7E4u) [[unlikely]] return; }
L_0027B7E4:
    st32((c.r[28].w[0] - 29940u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B7B8u | kUnwind; return; } goto L_0027B7B8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B7D8u | kUnwind; return; } goto L_0027B7D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 29944u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B7A0u | kUnwind; return; } goto L_0027B7A0; } }
L_0027B800:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027B820:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 29916u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29924u)));
    set32(c.r[16], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[16].sd[0] < 0; st32((c.r[28].w[0] - 29920u), c.r[3].w[0]);  if (t) { goto L_0027B8B4; } }
L_0027B848:
    c.r[1].d[0] = c.r[16].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0027B970; } }
L_0027B854:
    set32(c.r[6], ld32((c.r[28].w[0] - 29940u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0027B8C0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29944u)));
    set32(c.r[2], c.r[2].w[0] + 16384u);
    set32(c.r[5], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 4;
L_0027B870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B878u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 86u, depth + 1u); else { c.pc = 0x0021AA90u; return; } if (c.pc != 0x0027B878u) [[unlikely]] return; }
L_0027B878:
    set32(c.r[3], ld32((c.r[28].w[0] - 29940u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[28].w[0] - 29940u), c.r[3].w[0]);  if (t) { goto L_0027B8E8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29924u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29916u)));
    set32(c.r[16], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_0027B964; } }
    c.budget -= 1;
L_0027B8A0:
    c.r[2].d[0] = c.r[16].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B854u | kUnwind; return; } goto L_0027B854; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B970; } }
L_0027B8B4:
    set32(c.r[2], ld32((c.r[28].w[0] - 29928u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B848u | kUnwind; return; } goto L_0027B848; } }
L_0027B8C0:
    set32(c.r[4], ld32((c.r[28].w[0] - 29944u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B8CCu); set32(c.r[5], 0u + 16384u);  if (depth < kMaxDepth) unit_001E(c, 306u, depth + 1u); else { c.pc = 0x0027ACE0u; return; } if (c.pc != 0x0027B8CCu) [[unlikely]] return; }
L_0027B8CC:
    st32((c.r[28].w[0] - 29940u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B8C0u | kUnwind; return; } goto L_0027B8C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 29944u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B870u | kUnwind; return; } goto L_0027B870; } }
    c.budget -= 1;
L_0027B8E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 15u);  if (t) { goto L_0027B970; } }
L_0027B8F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 29932u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29928u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 29920u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0027B914; } }
    set32(c.r[5], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 1;
L_0027B914:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 4));  if (t) { goto L_0027B924; } }
    set32(c.r[2], c.r[5].w[0] + 15u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.budget -= 2;
L_0027B924:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[3], 0u + 257u);
    st32((c.r[2].w[0] - 19424u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 29920u)));
    st32((c.r[2].w[0] - 19440u), c.r[4].w[0]);
    st32((c.r[2].w[0] - 19456u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 29920u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 29928u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29932u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[28].w[0] - 29916u), c.r[4].w[0]);  if (t) { goto L_0027B98C; } }
L_0027B95C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027B998; } }
L_0027B964:
    set32(c.r[2], ld32((c.r[28].w[0] - 29928u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B8A0u | kUnwind; return; } goto L_0027B8A0; } }
L_0027B970:
    set32(c.r[2], 0u - 16u);
    c.r[5].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.r[1].d[0] = c.r[5].sd[0] < 4097ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B8F0u | kUnwind; return; } goto L_0027B8F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 4096u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B8F0u | kUnwind; return; } goto L_0027B8F0; } }
L_0027B98C:
    set32(c.r[2], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29916u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B95Cu | kUnwind; return; } goto L_0027B95C; } }
L_0027B998:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027B9B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 29924u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 29920u)));
    set32(c.r[5], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_0027BA78; } }
L_0027B9D8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0027B9F0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29916u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0027B9F0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 29928u)));
    c.budget -= 1;
L_0027B9F0:
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027BA84; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 29932u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29928u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_0027BA8C; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = c.r[4].d[0] << 36;
    c.r[3].d[0] = c.r[3].d[0] >> 36;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[4].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BA38u); set32(c.r[6], c.r[6].w[0] - c.r[16].w[0]);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x0027BA38u) [[unlikely]] return; }
L_0027BA38:
    set32(c.r[5], ld32((c.r[28].w[0] - 29932u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[5].d[0] = c.r[5].d[0] << 36;
    c.r[5].d[0] = c.r[5].d[0] >> 36;
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BA64u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x0027BA64u) [[unlikely]] return; }
L_0027BA64:
    set32(c.r[2], ld32((c.r[28].w[0] - 29932u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[28].w[0] - 29924u), c.r[2].w[0]);
    c.budget -= 3;
L_0027BA70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0027BAB8; } }
L_0027BA78:
    set32(c.r[2], ld32((c.r[28].w[0] - 29928u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027B9D8u | kUnwind; return; } goto L_0027B9D8; } }
L_0027BA84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0027BAB8; } }
L_0027BA8C:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = c.r[4].d[0] << 36;
    c.r[3].d[0] = c.r[3].d[0] >> 36;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BAA4u); c.r[4].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_000C(c, 215u, depth + 1u); else { c.pc = 0x00232C38u; return; } if (c.pc != 0x0027BAA4u) [[unlikely]] return; }
L_0027BAA4:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 29924u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29924u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BA70u | kUnwind; return; } goto L_0027BA70; } }
L_0027BAB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027BAD0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[4], c.r[28].w[0] - 30636u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BAF0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0011(c, 378u, depth + 1u); else { c.pc = 0x00247A70u; return; } if (c.pc != 0x0027BAF0u) [[unlikely]] return; }
L_0027BAF0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29912u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0027BC74; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29908u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027BC84; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027BC74; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 29864u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_001F(c, 21u, depth); } }
    c.r[1].d[0] = 0ull | 32769ull;
    c.r[1].d[0] = c.r[16].sd[0] < c.r[1].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_001F(c, 20u, depth); } }
    st32((c.r[28].w[0] - 29864u), 0u);
    c.budget -= 1;
L_0027BB30:
    set32(c.r[5], ld32((c.r[28].w[0] - 29860u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 29868u)));
    set32(c.r[3], c.r[5].w[0] + c.r[16].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_001F(c, 21u, depth); } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BB58u); set32(c.r[4], c.r[4].w[0] - 19440u);  if (depth < kMaxDepth) unit_0006(c, 86u, depth + 1u); else { c.pc = 0x0021AA90u; return; } if (c.pc != 0x0027BB58u) [[unlikely]] return; }
L_0027BB58:
    set32(c.r[2], ld32((c.r[28].w[0] - 29860u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[3], ld32((c.r[28].w[0] - 29876u)));
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[1].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st32((c.r[28].w[0] - 29860u), c.r[4].w[0]);  if (t) { [[clang::musttail]] return unit_001F(c, 21u, depth); } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[28].w[0] - 29860u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 29900u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_001F(c, 21u, depth); } }
L_0027BB84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027BC28; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29956u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_001F(c, 23u, depth); } }
L_0027BB9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 19432u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_001F(c, 25u, depth); } }
L_0027BBAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BBB4u); set32(c.r[4], ld32((c.r[28].w[0] - 29936u)));  if (depth < kMaxDepth) unit_001E(c, 234u, depth + 1u); else { c.pc = 0x0027A090u; return; } if (c.pc != 0x0027BBB4u) [[unlikely]] return; }
L_0027BBB4:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29908u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027BC10; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29956u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027BC10; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BBDCu); set32(c.r[4], c.r[4].w[0] - 19536u);  if (depth < kMaxDepth) unit_001E(c, 281u, depth + 1u); else { c.pc = 0x0027A770u; return; } if (c.pc != 0x0027BBDCu) [[unlikely]] return; }
L_0027BBDC:
    set32(c.r[2], ld32((c.r[28].w[0] - 29952u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027BC10; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BBF4u); set32(c.r[4], c.r[4].w[0] - 19536u);  if (depth < kMaxDepth) unit_001E(c, 285u, depth + 1u); else { c.pc = 0x0027A910u; return; } if (c.pc != 0x0027BBF4u) [[unlikely]] return; }
L_0027BBF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027BC10; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BC08u); set32(c.r[4], c.r[4].w[0] - 19536u);  if (depth < kMaxDepth) unit_001E(c, 293u, depth + 1u); else { c.pc = 0x0027AB40u; return; } if (c.pc != 0x0027BC08u) [[unlikely]] return; }
L_0027BC08:
    set32(c.r[2], 0u + 1u);
    st32((c.r[28].w[0] - 29952u), c.r[2].w[0]);
    c.budget -= 2;
L_0027BC10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BC18u);  if (depth < kMaxDepth) unit_001E(c, 385u, depth + 1u); else { c.pc = 0x0027B630u; return; } if (c.pc != 0x0027BC18u) [[unlikely]] return; }
L_0027BC18:
    set32(c.r[2], ld32((c.r[28].w[0] - 29956u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 29956u), c.r[2].w[0]);  if (t) { goto L_0027BC74; } }
L_0027BC28:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29908u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027BC40; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BC40u); set32(c.r[4], c.r[4].w[0] - 19536u);  if (depth < kMaxDepth) unit_001E(c, 288u, depth + 1u); else { c.pc = 0x0027AA80u; return; } if (c.pc != 0x0027BC40u) [[unlikely]] return; }
L_0027BC40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BC4Cu); set32(c.r[4], c.r[4].w[0] - 19440u);  if (depth < kMaxDepth) unit_0005(c, 243u, depth + 1u); else { c.pc = 0x00216558u; return; } if (c.pc != 0x0027BC4Cu) [[unlikely]] return; }
L_0027BC4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BC58u); set32(c.r[4], c.r[4].w[0] - 19440u);  if (depth < kMaxDepth) unit_0005(c, 238u, depth + 1u); else { c.pc = 0x00216470u; return; } if (c.pc != 0x0027BC58u) [[unlikely]] return; }
L_0027BC58:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29888u));
    st8((c.r[28].w[0] - 29912u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 29956u), 0u);  if (t) { goto L_0027BC74; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BC74u); set32(c.r[4], c.r[4].w[0] - 19312u);  if (depth < kMaxDepth) unit_001E(c, 28u, depth + 1u); else { c.pc = 0x00278300u; return; } if (c.pc != 0x0027BC74u) [[unlikely]] return; }
L_0027BC74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BC7Cu); set32(c.r[4], c.r[28].w[0] - 30636u);  if (depth < kMaxDepth) unit_0011(c, 378u, depth + 1u); else { c.pc = 0x00247A70u; return; } if (c.pc != 0x0027BC7Cu) [[unlikely]] return; }
L_0027BC7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[28].w[0] - 29912u));  if (t) { [[clang::musttail]] return unit_001F(c, 27u, depth); } }
L_0027BC84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[2].w[0] + 3360u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0027BC8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BC94u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0022E588u; return; } if (c.pc != 0x0027BC94u) [[unlikely]] return; }
L_0027BC94:
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BC8Cu | kUnwind; return; } goto L_0027BC8C; } }
    set32(c.r[17], c.r[29].w[0] + 81u);
    c.budget -= 1;
L_0027BCAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BCB8u); set32(c.r[4], c.r[4].w[0] - 19440u);  if (depth < kMaxDepth) unit_0005(c, 245u, depth + 1u); else { c.pc = 0x002165D8u; return; } if (c.pc != 0x0027BCB8u) [[unlikely]] return; }
L_0027BCB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027BCC8; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0027BD7C; } }
L_0027BCC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BCD4u); set32(c.r[4], c.r[4].w[0] - 19536u);  if (depth < kMaxDepth) unit_001E(c, 288u, depth + 1u); else { c.pc = 0x0027AA80u; return; } if (c.pc != 0x0027BCD4u) [[unlikely]] return; }
L_0027BCD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BCE0u); set32(c.r[4], c.r[4].w[0] - 19440u);  if (depth < kMaxDepth) unit_0005(c, 243u, depth + 1u); else { c.pc = 0x00216558u; return; } if (c.pc != 0x0027BCE0u) [[unlikely]] return; }
L_0027BCE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BCECu); set32(c.r[4], c.r[4].w[0] - 19440u);  if (depth < kMaxDepth) unit_0005(c, 238u, depth + 1u); else { c.pc = 0x00216470u; return; } if (c.pc != 0x0027BCECu) [[unlikely]] return; }
L_0027BCEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BCF4u);  if (depth < kMaxDepth) unit_001E(c, 312u, depth + 1u); else { c.pc = 0x0027AD90u; return; } if (c.pc != 0x0027BCF4u) [[unlikely]] return; }
L_0027BCF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 19344u)));
    set32(c.r[3], 0u - 512u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(128ll);
    set32(c.r[4], c.r[4].w[0] - 19360u);
    st8((c.r[28].w[0] - 29912u), static_cast<std::uint8_t>(0u));
    st32((c.r[28].w[0] - 29956u), 0u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BD28u); st32((c.r[2].w[0] - 19344u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_000B(c, 100u, depth + 1u); else { c.pc = 0x0022E130u; return; } if (c.pc != 0x0027BD28u) [[unlikely]] return; }
L_0027BD28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BD30u);  if (depth < kMaxDepth) unit_001A(c, 236u, depth + 1u); else { c.pc = 0x0026A5C0u; return; } if (c.pc != 0x0027BD30u) [[unlikely]] return; }
L_0027BD30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = ld8((c.r[2].w[0] - 2400u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0027BD68; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0027BD58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[28].w[0] - 29912u));  if (t) { goto L_0027BD74; } }
L_0027BD58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BD60u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 377u, depth + 1u); else { c.pc = 0x00266BA0u; return; } if (c.pc != 0x0027BD60u) [[unlikely]] return; }
L_0027BD60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027BD70; } }
L_0027BD68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BD70u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0019(c, 377u, depth + 1u); else { c.pc = 0x00266BA0u; return; } if (c.pc != 0x0027BD70u) [[unlikely]] return; }
L_0027BD70:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29912u));
    c.budget -= 1;
L_0027BD74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { [[clang::musttail]] return unit_001F(c, 28u, depth); } }
L_0027BD7C:
    set32(c.r[3], 0u + 131u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[4], c.r[4].w[0] - 19440u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 19576u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BDA4u); set32(c.r[6], 0u + 512u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x002164B8u; return; } if (c.pc != 0x0027BDA4u) [[unlikely]] return; }
L_0027BDA4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { [[clang::musttail]] return unit_001F(c, 7u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 19432u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_001F(c, 8u, depth); } }
L_0027BDBC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BDC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 114u, depth + 1u); else { c.pc = 0x0022E620u; return; } if (c.pc != 0x0027BDC8u) [[unlikely]] return; }
L_0027BDC8:
    set32(c.r[2], ld32((c.r[28].w[0] - 29904u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027BDE8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29936u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].d[0] = c.r[1].d[0] | 33024ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + c.r[1].w[0]);  if (t) { goto L_0027BDEC; } }
L_0027BDE8:
    set32(c.r[4], ld32((c.r[28].w[0] - 29936u)));
    c.budget -= 1;
L_0027BDEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BDF4u);  if (depth < kMaxDepth) unit_001E(c, 234u, depth + 1u); else { c.pc = 0x0027A090u; return; } if (c.pc != 0x0027BDF4u) [[unlikely]] return; }
L_0027BDF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BE00u); set32(c.r[4], c.r[4].w[0] - 19536u);  if (depth < kMaxDepth) unit_001E(c, 281u, depth + 1u); else { c.pc = 0x0027A770u; return; } if (c.pc != 0x0027BE00u) [[unlikely]] return; }
L_0027BE00:
    set32(c.r[2], ld32((c.r[28].w[0] - 29952u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_001F(c, 11u, depth); } }
L_0027BE0C:
    set32(c.r[6], ld32((c.r[28].w[0] - 29940u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_001F(c, 14u, depth); } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29944u)));
    set32(c.r[2], c.r[2].w[0] + 16384u);
    set32(c.r[5], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 3;
L_0027BE24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BE30u); set32(c.r[4], c.r[4].w[0] - 19440u);  if (depth < kMaxDepth) unit_0006(c, 86u, depth + 1u); else { c.pc = 0x0021AA90u; return; } if (c.pc != 0x0027BE30u) [[unlikely]] return; }
L_0027BE30:
    set32(c.r[3], ld32((c.r[28].w[0] - 29940u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[28].w[0] - 29940u), c.r[2].w[0]);
    c.budget -= 3;
L_0027BE3C:
    c.r[4].d[0] = ld16((c.r[28].w[0] - 32624u));
    set32(c.r[3], 0u + 512u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0027BEB4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(600ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0027BF18; } }
L_0027BE60:
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_001F(c, 16u, depth); } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29944u)));
    set32(c.r[2], c.r[2].w[0] + 16384u);
    set32(c.r[5], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 4;
L_0027BE80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BE8Cu); set32(c.r[4], c.r[4].w[0] - 19440u);  if (depth < kMaxDepth) unit_0006(c, 86u, depth + 1u); else { c.pc = 0x0021AA90u; return; } if (c.pc != 0x0027BE8Cu) [[unlikely]] return; }
L_0027BE8C:
    set32(c.r[3], ld32((c.r[28].w[0] - 29940u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[28].w[0] - 29940u), c.r[2].w[0]);
    c.budget -= 3;
L_0027BE98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(600ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BE60u | kUnwind; return; } goto L_0027BE60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027BF18; } }
L_0027BEB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(500ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0027BF18; } }
L_0027BEC8:
    c.r[6].d[0] = c.r[2].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_001F(c, 18u, depth); } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29944u)));
    set32(c.r[2], c.r[2].w[0] + 16384u);
    set32(c.r[5], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 4;
L_0027BEE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BEF4u); set32(c.r[4], c.r[4].w[0] - 19440u);  if (depth < kMaxDepth) unit_0006(c, 86u, depth + 1u); else { c.pc = 0x0021AA90u; return; } if (c.pc != 0x0027BEF4u) [[unlikely]] return; }
L_0027BEF4:
    set32(c.r[3], ld32((c.r[28].w[0] - 29940u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[28].w[0] - 29940u), c.r[2].w[0]);
    c.budget -= 3;
L_0027BF00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(500ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BEC8u | kUnwind; return; } goto L_0027BEC8; } }
    c.budget -= 1;
L_0027BF18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BF20u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 110u, depth + 1u); else { c.pc = 0x0022E588u; return; } if (c.pc != 0x0027BF20u) [[unlikely]] return; }
L_0027BF20:
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0027BF18u | kUnwind; return; } goto L_0027BF18; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29904u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027BF84; } }
    c.r[2].d[0] = ld16((c.r[28].w[0] - 32624u));
    set32(c.r[2], c.r[2].w[0] >> 1);
    set32(c.r[3], c.r[2].w[0] << 11);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 13));  if (t) { goto L_0027BF5C; } }
    set32(c.r[2], c.r[3].w[0] + 8191u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 13));
    c.budget -= 2;
L_0027BF5C:
    c.r[4].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[3], 0u - 512u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[28].w[0] - 29904u), 0u);
    set32(c.r[5], ld32((c.r[2].w[0] - 19344u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 19344u), c.r[3].w[0]);  if (t) { goto L_0027BFA8; } }
L_0027BF84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[28].w[0] - 29904u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] - 19344u)));
    set32(c.r[3], 0u - 512u);
    c.r[4].d[0] = 0ull & 511ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st32((c.r[2].w[0] - 19344u), c.r[3].w[0]);
    c.budget -= 9;
L_0027BFA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BFB4u); set32(c.r[4], c.r[4].w[0] - 19360u);  if (depth < kMaxDepth) unit_000B(c, 100u, depth + 1u); else { c.pc = 0x0022E130u; return; } if (c.pc != 0x0027BFB4u) [[unlikely]] return; }
L_0027BFB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BFBCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x00239BF8u; return; } if (c.pc != 0x0027BFBCu) [[unlikely]] return; }
L_0027BFBC:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_001F(c, 4u, depth); } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_001F(c, 5u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_001F(c, 2u, depth); } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0027BFF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0]));  if (t) { [[clang::musttail]] return unit_001F(c, 6u, depth); } }
L_0027BFF0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BFFCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 153u, depth + 1u); else { c.pc = 0x00239A50u; return; } if (c.pc != 0x0027BFFCu) [[unlikely]] return; }
L_0027BFFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_001F(c, 5u, depth); } }
    [[clang::musttail]] return unit_001F(c, 2u, depth);
}

}

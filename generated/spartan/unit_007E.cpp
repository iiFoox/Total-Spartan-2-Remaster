#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007E[4096] = {
    1, 0, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 0, 10, 0, 11, 0,
    0, 0, 12, 0, 13, 0, 0, 0, 14, 0, 15, 0, 0, 0, 16, 0, 17, 0, 0, 0, 18, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0, 0,
    22, 0, 23, 0, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 27, 0, 0, 0, 28, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0,
    33, 0, 0, 0, 34, 0, 35, 0, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 41, 0, 0, 0, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 48, 0, 49, 0, 0, 0, 0, 0, 50, 0,
    51, 0, 52, 0, 53, 0, 0, 0, 0, 54, 0, 0, 55, 0, 56, 0, 57, 0, 0, 0, 0, 58, 0, 0, 59, 0, 60, 0, 61, 0, 0, 0,
    0, 62, 0, 0, 63, 0, 64, 0, 65, 0, 0, 0, 0, 66, 0, 0, 67, 0, 68, 0, 69, 0, 0, 0, 0, 70, 0, 0, 71, 0, 72, 0,
    73, 0, 0, 0, 0, 74, 0, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 78, 0, 0, 79, 0, 80, 0, 81, 0, 0, 0, 0, 82, 0, 0,
    83, 0, 84, 0, 85, 0, 0, 0, 0, 86, 0, 0, 87, 0, 88, 0, 89, 0, 0, 0, 0, 90, 0, 0, 91, 0, 92, 0, 93, 0, 0, 0,
    0, 94, 0, 0, 95, 0, 96, 0, 97, 0, 0, 0, 0, 98, 0, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 102, 0, 0, 103, 0, 104, 0,
    0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 107, 0, 108, 0, 109, 0, 0, 0, 0, 110, 0, 0, 111, 0, 112, 0, 113, 0, 0, 0, 0, 114,
    0, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 118, 0, 0, 119, 0, 120, 0, 121, 0, 0, 0, 0, 122, 0, 0, 123, 0, 124, 0, 125, 0,
    0, 0, 0, 126, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 131, 0, 132, 0, 133, 0, 0, 0, 0, 134, 0, 0, 135, 0,
    136, 0, 137, 0, 0, 0, 0, 138, 0, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 142, 0, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0, 146,
    0, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0, 150, 0, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0, 154, 0, 0, 155, 0, 156, 0, 157, 0,
    0, 0, 0, 158, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 171, 0,
    0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 177, 0, 178, 0, 179, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0,
    0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0,
    218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0,
    0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0,
    0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0,
    0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0,
    0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0,
    0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0,
    0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0,
    0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0,
    0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0,
    0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0,
    0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0,
    0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0,
    0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0,
    0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    278, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0,
    302, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314,
    0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0,
    0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0,
    0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0,
    0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0,
    339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0,
    345, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0,
    0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0,
    0, 358, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0,
    363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 366, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 388,
    0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0,
    0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 408, 0, 409,
    0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0,
    0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 432, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436,
    0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0,
    457, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460,
    0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_007E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003F8000;
    case 2u: goto L_003F8010;
    case 3u: goto L_003F8018;
    case 4u: goto L_003F8028;
    case 5u: goto L_003F8030;
    case 6u: goto L_003F8040;
    case 7u: goto L_003F8048;
    case 8u: goto L_003F8058;
    case 9u: goto L_003F8060;
    case 10u: goto L_003F8070;
    case 11u: goto L_003F8078;
    case 12u: goto L_003F8088;
    case 13u: goto L_003F8090;
    case 14u: goto L_003F80A0;
    case 15u: goto L_003F80A8;
    case 16u: goto L_003F80B8;
    case 17u: goto L_003F80C0;
    case 18u: goto L_003F80D0;
    case 19u: goto L_003F80D8;
    case 20u: goto L_003F80E8;
    case 21u: goto L_003F80F0;
    case 22u: goto L_003F8100;
    case 23u: goto L_003F8108;
    case 24u: goto L_003F8118;
    case 25u: goto L_003F8120;
    case 26u: goto L_003F8130;
    case 27u: goto L_003F8138;
    case 28u: goto L_003F8148;
    case 29u: goto L_003F8150;
    case 30u: goto L_003F8160;
    case 31u: goto L_003F8168;
    case 32u: goto L_003F8178;
    case 33u: goto L_003F8180;
    case 34u: goto L_003F8190;
    case 35u: goto L_003F8198;
    case 36u: goto L_003F81A8;
    case 37u: goto L_003F81B0;
    case 38u: goto L_003F81C0;
    case 39u: goto L_003F81C8;
    case 40u: goto L_003F81D8;
    case 41u: goto L_003F81DC;
    case 42u: goto L_003F81F0;
    case 43u: goto L_003F831C;
    case 44u: goto L_003F8370;
    case 45u: goto L_003F8378;
    case 46u: goto L_003F83C0;
    case 47u: goto L_003F83D0;
    case 48u: goto L_003F83D8;
    case 49u: goto L_003F83E0;
    case 50u: goto L_003F83F8;
    case 51u: goto L_003F8400;
    case 52u: goto L_003F8408;
    case 53u: goto L_003F8410;
    case 54u: goto L_003F8424;
    case 55u: goto L_003F8430;
    case 56u: goto L_003F8438;
    case 57u: goto L_003F8440;
    case 58u: goto L_003F8454;
    case 59u: goto L_003F8460;
    case 60u: goto L_003F8468;
    case 61u: goto L_003F8470;
    case 62u: goto L_003F8484;
    case 63u: goto L_003F8490;
    case 64u: goto L_003F8498;
    case 65u: goto L_003F84A0;
    case 66u: goto L_003F84B4;
    case 67u: goto L_003F84C0;
    case 68u: goto L_003F84C8;
    case 69u: goto L_003F84D0;
    case 70u: goto L_003F84E4;
    case 71u: goto L_003F84F0;
    case 72u: goto L_003F84F8;
    case 73u: goto L_003F8500;
    case 74u: goto L_003F8514;
    case 75u: goto L_003F8520;
    case 76u: goto L_003F8528;
    case 77u: goto L_003F8530;
    case 78u: goto L_003F8544;
    case 79u: goto L_003F8550;
    case 80u: goto L_003F8558;
    case 81u: goto L_003F8560;
    case 82u: goto L_003F8574;
    case 83u: goto L_003F8580;
    case 84u: goto L_003F8588;
    case 85u: goto L_003F8590;
    case 86u: goto L_003F85A4;
    case 87u: goto L_003F85B0;
    case 88u: goto L_003F85B8;
    case 89u: goto L_003F85C0;
    case 90u: goto L_003F85D4;
    case 91u: goto L_003F85E0;
    case 92u: goto L_003F85E8;
    case 93u: goto L_003F85F0;
    case 94u: goto L_003F8604;
    case 95u: goto L_003F8610;
    case 96u: goto L_003F8618;
    case 97u: goto L_003F8620;
    case 98u: goto L_003F8634;
    case 99u: goto L_003F8640;
    case 100u: goto L_003F8648;
    case 101u: goto L_003F8650;
    case 102u: goto L_003F8664;
    case 103u: goto L_003F8670;
    case 104u: goto L_003F8678;
    case 105u: goto L_003F8688;
    case 106u: goto L_003F869C;
    case 107u: goto L_003F86A8;
    case 108u: goto L_003F86B0;
    case 109u: goto L_003F86B8;
    case 110u: goto L_003F86CC;
    case 111u: goto L_003F86D8;
    case 112u: goto L_003F86E0;
    case 113u: goto L_003F86E8;
    case 114u: goto L_003F86FC;
    case 115u: goto L_003F8708;
    case 116u: goto L_003F8710;
    case 117u: goto L_003F8718;
    case 118u: goto L_003F872C;
    case 119u: goto L_003F8738;
    case 120u: goto L_003F8740;
    case 121u: goto L_003F8748;
    case 122u: goto L_003F875C;
    case 123u: goto L_003F8768;
    case 124u: goto L_003F8770;
    case 125u: goto L_003F8778;
    case 126u: goto L_003F878C;
    case 127u: goto L_003F8798;
    case 128u: goto L_003F87A0;
    case 129u: goto L_003F87A8;
    case 130u: goto L_003F87BC;
    case 131u: goto L_003F87C8;
    case 132u: goto L_003F87D0;
    case 133u: goto L_003F87D8;
    case 134u: goto L_003F87EC;
    case 135u: goto L_003F87F8;
    case 136u: goto L_003F8800;
    case 137u: goto L_003F8808;
    case 138u: goto L_003F881C;
    case 139u: goto L_003F8828;
    case 140u: goto L_003F8830;
    case 141u: goto L_003F8838;
    case 142u: goto L_003F884C;
    case 143u: goto L_003F8858;
    case 144u: goto L_003F8860;
    case 145u: goto L_003F8868;
    case 146u: goto L_003F887C;
    case 147u: goto L_003F8888;
    case 148u: goto L_003F8890;
    case 149u: goto L_003F8898;
    case 150u: goto L_003F88AC;
    case 151u: goto L_003F88B8;
    case 152u: goto L_003F88C0;
    case 153u: goto L_003F88C8;
    case 154u: goto L_003F88DC;
    case 155u: goto L_003F88E8;
    case 156u: goto L_003F88F0;
    case 157u: goto L_003F88F8;
    case 158u: goto L_003F890C;
    case 159u: goto L_003F8910;
    case 160u: goto L_003F8E50;
    case 161u: goto L_003F8E84;
    case 162u: goto L_003F8E9C;
    case 163u: goto L_003F8EB4;
    case 164u: goto L_003F8ED0;
    case 165u: goto L_003F8EF0;
    case 166u: goto L_003F8F1C;
    case 167u: goto L_003F8F30;
    case 168u: goto L_003F8F44;
    case 169u: goto L_003F8F60;
    case 170u: goto L_003F8F70;
    case 171u: goto L_003F8F78;
    case 172u: goto L_003F8F84;
    case 173u: goto L_003F8FB4;
    case 174u: goto L_003F8FBC;
    case 175u: goto L_003F8FCC;
    case 176u: goto L_003F8FE0;
    case 177u: goto L_003F8FE8;
    case 178u: goto L_003F8FF0;
    case 179u: goto L_003F8FF8;
    case 180u: goto L_003F9028;
    case 181u: goto L_003F903C;
    case 182u: goto L_003F9044;
    case 183u: goto L_003F9080;
    case 184u: goto L_003F909C;
    case 185u: goto L_003F90C0;
    case 186u: goto L_003F90E4;
    case 187u: goto L_003F90F8;
    case 188u: goto L_003F9110;
    case 189u: goto L_003F9184;
    case 190u: goto L_003F920C;
    case 191u: goto L_003F92A0;
    case 192u: goto L_003F92F8;
    case 193u: goto L_003F9304;
    case 194u: goto L_003F9320;
    case 195u: goto L_003F9354;
    case 196u: goto L_003F9370;
    case 197u: goto L_003F93C8;
    case 198u: goto L_003F93D4;
    case 199u: goto L_003F93F0;
    case 200u: goto L_003F9448;
    case 201u: goto L_003F9454;
    case 202u: goto L_003F9470;
    case 203u: goto L_003F94C8;
    case 204u: goto L_003F94D4;
    case 205u: goto L_003F94F0;
    case 206u: goto L_003F9524;
    case 207u: goto L_003F9540;
    case 208u: goto L_003F9574;
    case 209u: goto L_003F9590;
    case 210u: goto L_003F95E8;
    case 211u: goto L_003F95F4;
    case 212u: goto L_003F9610;
    case 213u: goto L_003F9644;
    case 214u: goto L_003F9660;
    case 215u: goto L_003F9694;
    case 216u: goto L_003F96B0;
    case 217u: goto L_003F96E4;
    case 218u: goto L_003F9700;
    case 219u: goto L_003F9734;
    case 220u: goto L_003F9750;
    case 221u: goto L_003F97A8;
    case 222u: goto L_003F97B4;
    case 223u: goto L_003F97D0;
    case 224u: goto L_003F9804;
    case 225u: goto L_003F9820;
    case 226u: goto L_003F9878;
    case 227u: goto L_003F9884;
    case 228u: goto L_003F98A0;
    case 229u: goto L_003F98F8;
    case 230u: goto L_003F9904;
    case 231u: goto L_003F9920;
    case 232u: goto L_003F9978;
    case 233u: goto L_003F9984;
    case 234u: goto L_003F99A0;
    case 235u: goto L_003F99F8;
    case 236u: goto L_003F9A04;
    case 237u: goto L_003F9A20;
    case 238u: goto L_003F9A78;
    case 239u: goto L_003F9A84;
    case 240u: goto L_003F9AA0;
    case 241u: goto L_003F9AF8;
    case 242u: goto L_003F9B04;
    case 243u: goto L_003F9B20;
    case 244u: goto L_003F9B78;
    case 245u: goto L_003F9B84;
    case 246u: goto L_003F9BA0;
    case 247u: goto L_003F9BF8;
    case 248u: goto L_003F9C04;
    case 249u: goto L_003F9C20;
    case 250u: goto L_003F9C78;
    case 251u: goto L_003F9C84;
    case 252u: goto L_003F9CA0;
    case 253u: goto L_003F9CF8;
    case 254u: goto L_003F9D04;
    case 255u: goto L_003F9D20;
    case 256u: goto L_003F9D78;
    case 257u: goto L_003F9D84;
    case 258u: goto L_003F9DA0;
    case 259u: goto L_003F9DF8;
    case 260u: goto L_003F9E04;
    case 261u: goto L_003F9E20;
    case 262u: goto L_003F9E78;
    case 263u: goto L_003F9E84;
    case 264u: goto L_003F9EA0;
    case 265u: goto L_003F9ED4;
    case 266u: goto L_003F9EF0;
    case 267u: goto L_003F9F1C;
    case 268u: goto L_003F9F24;
    case 269u: goto L_003F9F40;
    case 270u: goto L_003F9FD4;
    case 271u: goto L_003FA040;
    case 272u: goto L_003FA090;
    case 273u: goto L_003FA0D8;
    case 274u: goto L_003FA16C;
    case 275u: goto L_003FA22C;
    case 276u: goto L_003FA2A0;
    case 277u: goto L_003FA3F0;
    case 278u: goto L_003FA480;
    case 279u: goto L_003FA488;
    case 280u: goto L_003FA4FC;
    case 281u: goto L_003FA54C;
    case 282u: goto L_003FA568;
    case 283u: goto L_003FA6A0;
    case 284u: goto L_003FA6B0;
    case 285u: goto L_003FA704;
    case 286u: goto L_003FA720;
    case 287u: goto L_003FA790;
    case 288u: goto L_003FA7BC;
    case 289u: goto L_003FA7DC;
    case 290u: goto L_003FA7F8;
    case 291u: goto L_003FA824;
    case 292u: goto L_003FA830;
    case 293u: goto L_003FA888;
    case 294u: goto L_003FA8F0;
    case 295u: goto L_003FA92C;
    case 296u: goto L_003FA950;
    case 297u: goto L_003FA970;
    case 298u: goto L_003FA9C4;
    case 299u: goto L_003FA9E0;
    case 300u: goto L_003FAA50;
    case 301u: goto L_003FAA64;
    case 302u: goto L_003FAA80;
    case 303u: goto L_003FAA88;
    case 304u: goto L_003FAAA4;
    case 305u: goto L_003FAABC;
    case 306u: goto L_003FAACC;
    case 307u: goto L_003FAAE0;
    case 308u: goto L_003FAB00;
    case 309u: goto L_003FAB14;
    case 310u: goto L_003FAB30;
    case 311u: goto L_003FAB38;
    case 312u: goto L_003FAB54;
    case 313u: goto L_003FAB6C;
    case 314u: goto L_003FAB7C;
    case 315u: goto L_003FAB90;
    case 316u: goto L_003FABB0;
    case 317u: goto L_003FABC4;
    case 318u: goto L_003FABE0;
    case 319u: goto L_003FABE8;
    case 320u: goto L_003FAC04;
    case 321u: goto L_003FAC1C;
    case 322u: goto L_003FAC2C;
    case 323u: goto L_003FAC40;
    case 324u: goto L_003FAC60;
    case 325u: goto L_003FAC74;
    case 326u: goto L_003FAC90;
    case 327u: goto L_003FAC98;
    case 328u: goto L_003FACB4;
    case 329u: goto L_003FACCC;
    case 330u: goto L_003FACDC;
    case 331u: goto L_003FACF0;
    case 332u: goto L_003FAD10;
    case 333u: goto L_003FAD48;
    case 334u: goto L_003FADB4;
    case 335u: goto L_003FADB8;
    case 336u: goto L_003FADD4;
    case 337u: goto L_003FAE10;
    case 338u: goto L_003FAE64;
    case 339u: goto L_003FAE80;
    case 340u: goto L_003FAE9C;
    case 341u: goto L_003FAEC4;
    case 342u: goto L_003FAF20;
    case 343u: goto L_003FAF4C;
    case 344u: goto L_003FAF5C;
    case 345u: goto L_003FAF80;
    case 346u: goto L_003FAF90;
    case 347u: goto L_003FAFA4;
    case 348u: goto L_003FAFB4;
    case 349u: goto L_003FAFD0;
    case 350u: goto L_003FAFF8;
    case 351u: goto L_003FB01C;
    case 352u: goto L_003FB060;
    case 353u: goto L_003FB070;
    case 354u: goto L_003FB0AC;
    case 355u: goto L_003FB0C0;
    case 356u: goto L_003FB0D0;
    case 357u: goto L_003FB0F0;
    case 358u: goto L_003FB104;
    case 359u: goto L_003FB11C;
    case 360u: goto L_003FB124;
    case 361u: goto L_003FB150;
    case 362u: goto L_003FB160;
    case 363u: goto L_003FB180;
    case 364u: goto L_003FB190;
    case 365u: goto L_003FB1B0;
    case 366u: goto L_003FB1B8;
    case 367u: goto L_003FB1D0;
    case 368u: goto L_003FB1D8;
    case 369u: goto L_003FB260;
    case 370u: goto L_003FB298;
    case 371u: goto L_003FB2D8;
    case 372u: goto L_003FB2E8;
    case 373u: goto L_003FB31C;
    case 374u: goto L_003FB35C;
    case 375u: goto L_003FB370;
    case 376u: goto L_003FB3D4;
    case 377u: goto L_003FB3F0;
    case 378u: goto L_003FB500;
    case 379u: goto L_003FB510;
    case 380u: goto L_003FB588;
    case 381u: goto L_003FB598;
    case 382u: goto L_003FB5C8;
    case 383u: goto L_003FB5F4;
    case 384u: goto L_003FB630;
    case 385u: goto L_003FB650;
    case 386u: goto L_003FB660;
    case 387u: goto L_003FB674;
    case 388u: goto L_003FB67C;
    case 389u: goto L_003FB68C;
    case 390u: goto L_003FB6A0;
    case 391u: goto L_003FB6B0;
    case 392u: goto L_003FB6C4;
    case 393u: goto L_003FB6CC;
    case 394u: goto L_003FB6DC;
    case 395u: goto L_003FB6F0;
    case 396u: goto L_003FB76C;
    case 397u: goto L_003FB774;
    case 398u: goto L_003FB78C;
    case 399u: goto L_003FB7A4;
    case 400u: goto L_003FB7AC;
    case 401u: goto L_003FB7BC;
    case 402u: goto L_003FB7F0;
    case 403u: goto L_003FB81C;
    case 404u: goto L_003FB824;
    case 405u: goto L_003FB83C;
    case 406u: goto L_003FB85C;
    case 407u: goto L_003FB864;
    case 408u: goto L_003FB874;
    case 409u: goto L_003FB87C;
    case 410u: goto L_003FB88C;
    case 411u: goto L_003FB8B0;
    case 412u: goto L_003FB8C4;
    case 413u: goto L_003FB8D4;
    case 414u: goto L_003FB8F0;
    case 415u: goto L_003FB954;
    case 416u: goto L_003FB970;
    case 417u: goto L_003FBA00;
    case 418u: goto L_003FBA2C;
    case 419u: goto L_003FBA40;
    case 420u: goto L_003FBA68;
    case 421u: goto L_003FBA90;
    case 422u: goto L_003FBAB0;
    case 423u: goto L_003FBAC0;
    case 424u: goto L_003FBAD4;
    case 425u: goto L_003FBAF0;
    case 426u: goto L_003FBB04;
    case 427u: goto L_003FBB14;
    case 428u: goto L_003FBB28;
    case 429u: goto L_003FBB34;
    case 430u: goto L_003FBB48;
    case 431u: goto L_003FBB58;
    case 432u: goto L_003FBB90;
    case 433u: goto L_003FBB98;
    case 434u: goto L_003FBBD0;
    case 435u: goto L_003FBBE4;
    case 436u: goto L_003FBBFC;
    case 437u: goto L_003FBC0C;
    case 438u: goto L_003FBC20;
    case 439u: goto L_003FBC40;
    case 440u: goto L_003FBC70;
    case 441u: goto L_003FBCB4;
    case 442u: goto L_003FBCC0;
    case 443u: goto L_003FBCC8;
    case 444u: goto L_003FBD0C;
    case 445u: goto L_003FBD1C;
    case 446u: goto L_003FBD2C;
    case 447u: goto L_003FBD3C;
    case 448u: goto L_003FBD60;
    case 449u: goto L_003FBE00;
    case 450u: goto L_003FBE2C;
    case 451u: goto L_003FBE40;
    case 452u: goto L_003FBE68;
    case 453u: goto L_003FBE90;
    case 454u: goto L_003FBEB0;
    case 455u: goto L_003FBED0;
    case 456u: goto L_003FBEE4;
    case 457u: goto L_003FBF00;
    case 458u: goto L_003FBF1C;
    case 459u: goto L_003FBF2C;
    case 460u: goto L_003FBF7C;
    case 461u: goto L_003FBFA0;
    default: bad_entry(c, 0x003F8000u); return;
    }
L_003F8000:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8010u); set32(c.r[5], c.r[5].w[0] + 7596u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F8010u) [[unlikely]] return; }
L_003F8010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F81D8; } }
L_003F8018:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8028u); set32(c.r[5], c.r[5].w[0] + 7601u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F8028u) [[unlikely]] return; }
L_003F8028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F81D8; } }
L_003F8030:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8040u); set32(c.r[5], c.r[5].w[0] + 7610u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F8040u) [[unlikely]] return; }
L_003F8040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F81D8; } }
L_003F8048:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8058u); set32(c.r[5], c.r[5].w[0] + 7627u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F8058u) [[unlikely]] return; }
L_003F8058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F81D8; } }
L_003F8060:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8070u); set32(c.r[5], c.r[5].w[0] + 7642u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F8070u) [[unlikely]] return; }
L_003F8070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F81D8; } }
L_003F8078:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8088u); set32(c.r[5], c.r[5].w[0] + 7658u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F8088u) [[unlikely]] return; }
L_003F8088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F81D8; } }
L_003F8090:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F80A0u); set32(c.r[5], c.r[5].w[0] + 7671u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F80A0u) [[unlikely]] return; }
L_003F80A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F81D8; } }
L_003F80A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F80B8u); set32(c.r[5], c.r[5].w[0] + 7677u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F80B8u) [[unlikely]] return; }
L_003F80B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F81D8; } }
L_003F80C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F80D0u); set32(c.r[5], c.r[5].w[0] + 7689u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F80D0u) [[unlikely]] return; }
L_003F80D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F81D8; } }
L_003F80D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F80E8u); set32(c.r[5], c.r[5].w[0] + 7699u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F80E8u) [[unlikely]] return; }
L_003F80E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F81D8; } }
L_003F80F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8100u); set32(c.r[5], c.r[5].w[0] + 7711u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F8100u) [[unlikely]] return; }
L_003F8100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F81D8; } }
L_003F8108:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8118u); set32(c.r[5], c.r[5].w[0] + 7722u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F8118u) [[unlikely]] return; }
L_003F8118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F81D8; } }
L_003F8120:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8130u); set32(c.r[5], c.r[5].w[0] + 7729u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F8130u) [[unlikely]] return; }
L_003F8130:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F81D8; } }
L_003F8138:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8148u); set32(c.r[5], c.r[5].w[0] + 7746u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F8148u) [[unlikely]] return; }
L_003F8148:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F81D8; } }
L_003F8150:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8160u); set32(c.r[5], c.r[5].w[0] + 7761u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F8160u) [[unlikely]] return; }
L_003F8160:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F81D8; } }
L_003F8168:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8178u); set32(c.r[5], c.r[5].w[0] + 7766u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F8178u) [[unlikely]] return; }
L_003F8178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F81D8; } }
L_003F8180:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8190u); set32(c.r[5], c.r[5].w[0] + 7776u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F8190u) [[unlikely]] return; }
L_003F8190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F81D8; } }
L_003F8198:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F81A8u); set32(c.r[5], c.r[5].w[0] + 7791u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F81A8u) [[unlikely]] return; }
L_003F81A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F81D8; } }
L_003F81B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F81C0u); set32(c.r[5], c.r[5].w[0] + 7801u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F81C0u) [[unlikely]] return; }
L_003F81C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F81D8; } }
L_003F81C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F81D8u); set32(c.r[5], c.r[5].w[0] + 7813u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003F81D8u) [[unlikely]] return; }
L_003F81D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003F81DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F81F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 8012u), 0u);
    st32((c.r[4].w[0] + 8016u), 0u);
    st32((c.r[4].w[0] + 8020u), 0u);
    st32((c.r[4].w[0] + 8024u), 0u);
    st32((c.r[4].w[0] + 8028u), 0u);
    st32((c.r[4].w[0] + 8032u), 0u);
    st32((c.r[4].w[0] + 8036u), 0u);
    st32((c.r[4].w[0] + 8040u), 0u);
    st32((c.r[4].w[0] + 8044u), 0u);
    st32((c.r[4].w[0] + 8088u), 0u);
    st32((c.r[4].w[0] + 8092u), 0u);
    st32((c.r[4].w[0] + 8096u), 0u);
    st32((c.r[4].w[0] + 8048u), 0u);
    st32((c.r[4].w[0] + 8052u), 0u);
    st32((c.r[4].w[0] + 8056u), 0u);
    st32((c.r[4].w[0] + 8060u), 0u);
    st32((c.r[4].w[0] + 8064u), 0u);
    st32((c.r[4].w[0] + 8068u), 0u);
    st32((c.r[4].w[0] + 8072u), 0u);
    st32((c.r[4].w[0] + 8076u), 0u);
    st32((c.r[4].w[0] + 8080u), 0u);
    st32((c.r[4].w[0] + 8084u), 0u);
    st32((c.r[4].w[0] + 8100u), 0u);
    st32((c.r[4].w[0] + 8104u), 0u);
    st32((c.r[4].w[0] + 8108u), 0u);
    st32((c.r[4].w[0] + 8112u), 0u);
    st32((c.r[4].w[0] + 8116u), 0u);
    st32((c.r[4].w[0] + 8120u), 0u);
    st32((c.r[4].w[0] + 8124u), 0u);
    st32((c.r[4].w[0] + 8128u), 0u);
    st32((c.r[4].w[0] + 8132u), 0u);
    st32((c.r[4].w[0] + 8136u), 0u);
    st32((c.r[4].w[0] + 8140u), 0u);
    st32((c.r[4].w[0] + 8144u), 0u);
    st32((c.r[4].w[0] + 8148u), 0u);
    st32((c.r[4].w[0] + 8152u), 0u);
    st32((c.r[4].w[0] + 8156u), 0u);
    st32((c.r[4].w[0] + 8160u), 0u);
    st32((c.r[4].w[0] + 8164u), 0u);
    st32((c.r[4].w[0] + 8168u), 0u);
    st32((c.r[4].w[0] + 8172u), 0u);
    st32((c.r[4].w[0] + 8176u), 0u);
    st32((c.r[4].w[0] + 8180u), 0u);
    st32((c.r[4].w[0] + 8184u), 0u);
    st32((c.r[4].w[0] + 8188u), 0u);
    st32((c.r[4].w[0] + 8192u), 0u);
    st32((c.r[4].w[0] + 8196u), 0u);
    st32((c.r[4].w[0] + 8200u), 0u);
    st32((c.r[4].w[0] + 8204u), 0u);
    st32((c.r[4].w[0] + 8208u), 0u);
    st32((c.r[4].w[0] + 8212u), 0u);
    st32((c.r[4].w[0] + 8216u), 0u);
    st32((c.r[4].w[0] + 8220u), 0u);
    st32((c.r[4].w[0] + 8224u), 0u);
    st32((c.r[4].w[0] + 8228u), 0u);
    st32((c.r[4].w[0] + 8240u), 0u);
    st32((c.r[4].w[0] + 8232u), 0u);
    set32(c.r[22], ld32((c.r[5].w[0] + 72u)));
    set32(c.r[19], ld32((c.r[5].w[0] + 68u)));
    st32((c.r[4].w[0] + 8236u), 0u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 75;
L_003F831C:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < 492ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[4].w[0] + 40u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F831Cu | kUnwind; return; } goto L_003F831C; } }
    set32(c.r[2], c.r[6].w[0] << 2);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8370u); st32((c.r[2].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0088(c, 218u, depth + 1u); else { c.pc = 0x00422070u; return; } if (c.pc != 0x003F8370u) [[unlikely]] return; }
L_003F8370:
    set32(c.r[16], c.r[19].w[0] + 20u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003F8378:
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    c.r[17].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003F8910; } }
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(33ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F8910; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 7360u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x003F8000u < 16384u) { entry = entries_007E[(t - 0x003F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003F83C0:
    set32(c.r[6], ld32((c.r[19].w[0] + 20u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F83D0u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 165u, depth + 1u); else { c.pc = 0x003F8EF0u; return; } if (c.pc != 0x003F83D0u) [[unlikely]] return; }
L_003F83D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F83D8u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F83D8u) [[unlikely]] return; }
L_003F83D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F892C; } }
L_003F83E0:
    st32((c.r[20].w[0] + 8016u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8016u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[20].w[0] + 8012u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F83F8u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_007B(c, 191u, depth + 1u); else { c.pc = 0x003EF930u; return; } if (c.pc != 0x003F83F8u) [[unlikely]] return; }
L_003F83F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
L_003F8400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8408u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F8408u) [[unlikely]] return; }
L_003F8408:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F8960; } }
L_003F8410:
    st32((c.r[20].w[0] + 8020u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8020u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8424u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0050(c, 102u, depth + 1u); else { c.pc = 0x00342410u; return; } if (c.pc != 0x003F8424u) [[unlikely]] return; }
L_003F8424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F8430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8438u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F8438u) [[unlikely]] return; }
L_003F8438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F8990; } }
L_003F8440:
    st32((c.r[20].w[0] + 8024u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8024u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8454u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 154u, depth + 1u); else { c.pc = 0x004FA550u; return; } if (c.pc != 0x003F8454u) [[unlikely]] return; }
L_003F8454:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F8460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8468u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F8468u) [[unlikely]] return; }
L_003F8468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F89C0; } }
L_003F8470:
    st32((c.r[20].w[0] + 8028u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8028u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8484u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 131u, depth + 1u); else { c.pc = 0x00476610u; return; } if (c.pc != 0x003F8484u) [[unlikely]] return; }
L_003F8484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F8490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8498u); set32(c.r[4], 0u + 108u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F8498u) [[unlikely]] return; }
L_003F8498:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F89F0; } }
L_003F84A0:
    st32((c.r[20].w[0] + 8032u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8032u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F84B4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 153u, depth + 1u); else { c.pc = 0x004862F0u; return; } if (c.pc != 0x003F84B4u) [[unlikely]] return; }
L_003F84B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F84C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F84C8u); set32(c.r[4], 0u + 92u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F84C8u) [[unlikely]] return; }
L_003F84C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F8A28; } }
L_003F84D0:
    st32((c.r[20].w[0] + 8036u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8036u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F84E4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 312u, depth + 1u); else { c.pc = 0x0040B320u; return; } if (c.pc != 0x003F84E4u) [[unlikely]] return; }
L_003F84E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F84F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F84F8u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F84F8u) [[unlikely]] return; }
L_003F84F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F8A60; } }
L_003F8500:
    st32((c.r[20].w[0] + 8040u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8040u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8514u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0051(c, 185u, depth + 1u); else { c.pc = 0x00346710u; return; } if (c.pc != 0x003F8514u) [[unlikely]] return; }
L_003F8514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F8520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8528u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F8528u) [[unlikely]] return; }
L_003F8528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F8A90; } }
L_003F8530:
    st32((c.r[20].w[0] + 8044u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8044u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8544u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 165u, depth + 1u); else { c.pc = 0x0041ED80u; return; } if (c.pc != 0x003F8544u) [[unlikely]] return; }
L_003F8544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F8550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8558u); set32(c.r[4], 0u + 108u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F8558u) [[unlikely]] return; }
L_003F8558:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F8AC0; } }
L_003F8560:
    st32((c.r[20].w[0] + 8088u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8088u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8574u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A0(c, 138u, depth + 1u); else { c.pc = 0x00482180u; return; } if (c.pc != 0x003F8574u) [[unlikely]] return; }
L_003F8574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F8580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8588u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F8588u) [[unlikely]] return; }
L_003F8588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F8AF8; } }
L_003F8590:
    st32((c.r[20].w[0] + 8092u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8092u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F85A4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A2(c, 86u, depth + 1u); else { c.pc = 0x004894D0u; return; } if (c.pc != 0x003F85A4u) [[unlikely]] return; }
L_003F85A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F85B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F85B8u); set32(c.r[4], 0u + 140u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F85B8u) [[unlikely]] return; }
L_003F85B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F8B28; } }
L_003F85C0:
    st32((c.r[20].w[0] + 8116u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8116u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F85D4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 214u, depth + 1u); else { c.pc = 0x004E7870u; return; } if (c.pc != 0x003F85D4u) [[unlikely]] return; }
L_003F85D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F85E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F85E8u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F85E8u) [[unlikely]] return; }
L_003F85E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F8B58; } }
L_003F85F0:
    st32((c.r[20].w[0] + 8048u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8048u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8604u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 76u, depth + 1u); else { c.pc = 0x004C58C0u; return; } if (c.pc != 0x003F8604u) [[unlikely]] return; }
L_003F8604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F8610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8618u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F8618u) [[unlikely]] return; }
L_003F8618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F8B88; } }
L_003F8620:
    st32((c.r[20].w[0] + 8052u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8052u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8634u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 281u, depth + 1u); else { c.pc = 0x004EFF30u; return; } if (c.pc != 0x003F8634u) [[unlikely]] return; }
L_003F8634:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F8640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8648u); set32(c.r[4], 0u + 176u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F8648u) [[unlikely]] return; }
L_003F8648:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F8BB8; } }
L_003F8650:
    st32((c.r[20].w[0] + 8056u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8056u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8664u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009F(c, 156u, depth + 1u); else { c.pc = 0x0047EEA0u; return; } if (c.pc != 0x003F8664u) [[unlikely]] return; }
L_003F8664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F8670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8678u); set32(c.r[4], 0u + 108u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F8678u) [[unlikely]] return; }
L_003F8678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F8688; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8688u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 138u, depth + 1u); else { c.pc = 0x004D9D90u; return; } if (c.pc != 0x003F8688u) [[unlikely]] return; }
L_003F8688:
    st32((c.r[20].w[0] + 8112u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8112u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F869Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 113u, depth + 1u); else { c.pc = 0x004D99C0u; return; } if (c.pc != 0x003F869Cu) [[unlikely]] return; }
L_003F869C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F86A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F86B0u); set32(c.r[4], 0u + 104u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F86B0u) [[unlikely]] return; }
L_003F86B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F8BE8; } }
L_003F86B8:
    st32((c.r[20].w[0] + 8060u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8060u)));
    c.r[5].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F86CCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 120u, depth + 1u); else { c.pc = 0x0042A190u; return; } if (c.pc != 0x003F86CCu) [[unlikely]] return; }
L_003F86CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F86D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F86E0u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F86E0u) [[unlikely]] return; }
L_003F86E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F8C18; } }
L_003F86E8:
    st32((c.r[20].w[0] + 8064u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8064u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F86FCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_008A(c, 206u, depth + 1u); else { c.pc = 0x0042B540u; return; } if (c.pc != 0x003F86FCu) [[unlikely]] return; }
L_003F86FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F8708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8710u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F8710u) [[unlikely]] return; }
L_003F8710:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F8C40; } }
L_003F8718:
    st32((c.r[20].w[0] + 8068u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8068u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F872Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 139u, depth + 1u); else { c.pc = 0x00501840u; return; } if (c.pc != 0x003F872Cu) [[unlikely]] return; }
L_003F872C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F8738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8740u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F8740u) [[unlikely]] return; }
L_003F8740:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F8C70; } }
L_003F8748:
    st32((c.r[20].w[0] + 8072u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8072u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F875Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0093(c, 125u, depth + 1u); else { c.pc = 0x0044E1A0u; return; } if (c.pc != 0x003F875Cu) [[unlikely]] return; }
L_003F875C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F8768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8770u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F8770u) [[unlikely]] return; }
L_003F8770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F8C98; } }
L_003F8778:
    st32((c.r[20].w[0] + 8076u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8076u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F878Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0053(c, 166u, depth + 1u); else { c.pc = 0x0034EDF0u; return; } if (c.pc != 0x003F878Cu) [[unlikely]] return; }
L_003F878C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F8798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F87A0u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F87A0u) [[unlikely]] return; }
L_003F87A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F8CC0; } }
L_003F87A8:
    st32((c.r[20].w[0] + 8080u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8080u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F87BCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0097(c, 145u, depth + 1u); else { c.pc = 0x0045E9C0u; return; } if (c.pc != 0x003F87BCu) [[unlikely]] return; }
L_003F87BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F87C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F87D0u); set32(c.r[4], 0u + 2600u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F87D0u) [[unlikely]] return; }
L_003F87D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F8CE8; } }
L_003F87D8:
    st32((c.r[20].w[0] + 8084u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8084u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F87ECu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B0(c, 233u, depth + 1u); else { c.pc = 0x004C2C90u; return; } if (c.pc != 0x003F87ECu) [[unlikely]] return; }
L_003F87EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F87F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8800u); set32(c.r[4], 0u + 76u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F8800u) [[unlikely]] return; }
L_003F8800:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F8D10; } }
L_003F8808:
    st32((c.r[20].w[0] + 8096u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8096u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F881Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 12u, depth + 1u); else { c.pc = 0x004A0140u; return; } if (c.pc != 0x003F881Cu) [[unlikely]] return; }
L_003F881C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F8828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8830u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F8830u) [[unlikely]] return; }
L_003F8830:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F8D40; } }
L_003F8838:
    st32((c.r[20].w[0] + 8100u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8100u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F884Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 107u, depth + 1u); else { c.pc = 0x004BDBA0u; return; } if (c.pc != 0x003F884Cu) [[unlikely]] return; }
L_003F884C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F8858:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8860u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F8860u) [[unlikely]] return; }
L_003F8860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F8D68; } }
L_003F8868:
    st32((c.r[20].w[0] + 8104u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8104u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F887Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 214u, depth + 1u); else { c.pc = 0x004BF4F0u; return; } if (c.pc != 0x003F887Cu) [[unlikely]] return; }
L_003F887C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F8888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8890u); set32(c.r[4], 0u + 104u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F8890u) [[unlikely]] return; }
L_003F8890:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F8D90; } }
L_003F8898:
    st32((c.r[20].w[0] + 8108u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8108u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F88ACu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A8(c, 228u, depth + 1u); else { c.pc = 0x004A3350u; return; } if (c.pc != 0x003F88ACu) [[unlikely]] return; }
L_003F88AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F88B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F88C0u); set32(c.r[4], 0u + 72u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F88C0u) [[unlikely]] return; }
L_003F88C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F8DC0; } }
L_003F88C8:
    st32((c.r[20].w[0] + 8120u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8120u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F88DCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 183u, depth + 1u); else { c.pc = 0x004EB9B0u; return; } if (c.pc != 0x003F88DCu) [[unlikely]] return; }
L_003F88DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8910; } }
    c.budget -= 1;
L_003F88E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F88F0u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F88F0u) [[unlikely]] return; }
L_003F88F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F8DE8; } }
L_003F88F8:
    st32((c.r[20].w[0] + 8124u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 8124u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F890Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 222u, depth + 1u); else { c.pc = 0x004EEC80u; return; } if (c.pc != 0x003F890Cu) [[unlikely]] return; }
L_003F890C:
    c.budget -= 1;
L_003F8910:
    set32(c.r[3], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[18].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8378u | kUnwind; return; } goto L_003F8378; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003F8E20; } }
L_003F892C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 2544u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 44u), 0u);
    st32((c.r[2].w[0] + 48u), 0u);
    st32((c.r[2].w[0] + 52u), 0u);
    st8((c.r[2].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 68u), 0u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 64u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F83E0u | kUnwind; return; } goto L_003F83E0; } }
L_003F8960:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 10464u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8410u | kUnwind; return; } goto L_003F8410; } }
L_003F8990:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 19984u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8440u | kUnwind; return; } goto L_003F8440; } }
L_003F89C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 20176u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8470u | kUnwind; return; } goto L_003F8470; } }
L_003F89F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 20512u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 104u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F84A0u | kUnwind; return; } goto L_003F84A0; } }
    c.budget -= 1;
L_003F8A28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 8624u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 44u), 0u);
    st32((c.r[2].w[0] + 48u), 0u);
    st32((c.r[2].w[0] + 52u), 0u);
    st32((c.r[2].w[0] + 60u), 0u);
    st32((c.r[2].w[0] + 56u), 0u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F84D0u | kUnwind; return; } goto L_003F84D0; } }
L_003F8A60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 10400u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8500u | kUnwind; return; } goto L_003F8500; } }
L_003F8A90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 8688u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8530u | kUnwind; return; } goto L_003F8530; } }
L_003F8AC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 20448u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 104u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8560u | kUnwind; return; } goto L_003F8560; } }
    c.budget -= 1;
L_003F8AF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 23024u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8590u | kUnwind; return; } goto L_003F8590; } }
L_003F8B28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 20752u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 44u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F85C0u | kUnwind; return; } goto L_003F85C0; } }
L_003F8B58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 27936u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 44u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F85F0u | kUnwind; return; } goto L_003F85F0; } }
L_003F8B88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 20336u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8620u | kUnwind; return; } goto L_003F8620; } }
L_003F8BB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 20384u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 44u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8650u | kUnwind; return; } goto L_003F8650; } }
L_003F8BE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 9104u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 44u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F86B8u | kUnwind; return; } goto L_003F86B8; } }
L_003F8C18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 9424u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[2].w[0] + 44u), 0u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F86E8u | kUnwind; return; } goto L_003F86E8; } }
L_003F8C40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 16624u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8718u | kUnwind; return; } goto L_003F8718; } }
L_003F8C70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 12480u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8748u | kUnwind; return; } goto L_003F8748; } }
L_003F8C98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 10336u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8778u | kUnwind; return; } goto L_003F8778; } }
L_003F8CC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 13936u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F87A8u | kUnwind; return; } goto L_003F87A8; } }
L_003F8CE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 2416u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[2].w[0] + 44u), 0u);
    st32((c.r[2].w[0] + 48u), 0u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 28u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F87D8u | kUnwind; return; } goto L_003F87D8; } }
L_003F8D10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 23424u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8808u | kUnwind; return; } goto L_003F8808; } }
L_003F8D40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 28064u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8838u | kUnwind; return; } goto L_003F8838; } }
L_003F8D68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 28000u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8868u | kUnwind; return; } goto L_003F8868; } }
L_003F8D90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 23488u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8898u | kUnwind; return; } goto L_003F8898; } }
L_003F8DC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 20688u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F88C8u | kUnwind; return; } goto L_003F88C8; } }
L_003F8DE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 2480u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 76u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F88F8u | kUnwind; return; } goto L_003F88F8; } }
    c.budget -= 1;
L_003F8E20:
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
L_003F8E50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003F8ED0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F8E88; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002E0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8E84u); set32(c.r[5], c.r[5].w[0] + 6640u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003F8E84u) [[unlikely]] return; }
L_003F8E84:
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 1;
L_003F8E88:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F8EA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8E9Cu);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003F8E9Cu) [[unlikely]] return; }
L_003F8E9C:
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 1;
L_003F8EA0:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F8EB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8EB4u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x003F8EB4u) [[unlikely]] return; }
L_003F8EB4:
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 1;
L_003F8EB8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003F8ED0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8ED0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F8ED0u) [[unlikely]] return; }
L_003F8ED0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F8EF0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 8012u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003F8F24; } }
L_003F8F1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_003F9068; } }
L_003F8F24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8F30u); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x003F8F30u) [[unlikely]] return; }
L_003F8F30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003F9030; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[4], c.r[4].w[0] - 22000u);
    c.budget -= 3;
L_003F8F44:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8F44u | kUnwind; return; } goto L_003F8F44; } }
L_003F8F60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8F70u); set32(c.r[5], c.r[5].w[0] + 7843u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x003F8F70u) [[unlikely]] return; }
L_003F8F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8F78u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x003F8F78u) [[unlikely]] return; }
L_003F8F78:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8F84u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F8F84u) [[unlikely]] return; }
L_003F8F84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F8F9C; } }
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_003F8F9C:
    st32((c.r[18].w[0] + 8012u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 8012u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8FB4u); set32(c.r[7], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_007C(c, 59u, depth + 1u); else { c.pc = 0x003F0840u; return; } if (c.pc != 0x003F8FB4u) [[unlikely]] return; }
L_003F8FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8FBCu);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x003F8FBCu) [[unlikely]] return; }
L_003F8FBC:
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    st32((c.r[18].w[0] + 8128u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8FCCu); set32(c.r[4], ld32((c.r[18].w[0] + 8012u)));  if (depth < kMaxDepth) unit_007C(c, 99u, depth + 1u); else { c.pc = 0x003F0D10u; return; } if (c.pc != 0x003F8FCCu) [[unlikely]] return; }
L_003F8FCC:
    set32(c.r[19], ld32((c.r[18].w[0] + 8012u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003F8FE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8FE0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 99u, depth + 1u); else { c.pc = 0x003F0D10u; return; } if (c.pc != 0x003F8FE0u) [[unlikely]] return; }
L_003F8FE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8FE8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F8FE8u) [[unlikely]] return; }
L_003F8FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8FF0u);  if (depth < kMaxDepth) unit_0002(c, 67u, depth + 1u); else { c.pc = 0x00209850u; return; } if (c.pc != 0x003F8FF0u) [[unlikely]] return; }
L_003F8FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F8FF8u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003F8FF8u) [[unlikely]] return; }
L_003F8FF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9010; } }
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
L_003F9010:
    st32((c.r[18].w[0] + 8012u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 8012u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9028u); set32(c.r[7], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_007C(c, 59u, depth + 1u); else { c.pc = 0x003F0840u; return; } if (c.pc != 0x003F9028u) [[unlikely]] return; }
L_003F9028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8F1Cu | kUnwind; return; } goto L_003F8F1C; } }
L_003F9030:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F903Cu); set32(c.r[4], c.r[4].w[0] - 21424u);  if (depth < kMaxDepth) unit_0037(c, 175u, depth + 1u); else { c.pc = 0x002DF920u; return; } if (c.pc != 0x003F903Cu) [[unlikely]] return; }
L_003F903C:
    set32(c.r[4], c.r[2].w[0] + 36u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 2;
L_003F9044:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9044u | kUnwind; return; } goto L_003F9044; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F8F60u | kUnwind; return; } goto L_003F8F60; } }
L_003F9068:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_003F9080:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8016u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F90A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F909Cu);  if (depth < kMaxDepth) unit_007B(c, 126u, depth + 1u); else { c.pc = 0x003EE980u; return; } if (c.pc != 0x003F909Cu) [[unlikely]] return; }
L_003F909C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003F90AC; } }
L_003F90A4:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003F90AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003F90C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 8016u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F90E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F90E4u);  if (depth < kMaxDepth) unit_007B(c, 12u, depth + 1u); else { c.pc = 0x003EC150u; return; } if (c.pc != 0x003F90E4u) [[unlikely]] return; }
L_003F90E4:
    set32(c.r[4], ld32((c.r[16].w[0] + 8040u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F90F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F90F8u);  if (depth < kMaxDepth) unit_0051(c, 135u, depth + 1u); else { c.pc = 0x00345D40u; return; } if (c.pc != 0x003F90F8u) [[unlikely]] return; }
L_003F90F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F9110:
    set32(c.r[2], c.r[4].w[0] + 2012u);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], c.r[2].w[0] + 12u);
    st8((c.r[4].w[0] + 2012u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[7], c.r[4].w[0] + 8012u);
    st32((c.r[4].w[0] + 2016u), 0u);
    c.r[1].d[0] = c.r[9].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[4].w[0] + 2020u), 0u);  if (t) { goto L_003F9228; } }
    set32(c.r[6], c.r[4].w[0] + 2024u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x2AAA0000u);
    set32(c.r[3], c.r[7].w[0] - c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 43691ull;
    set32(c.r[3], c.r[3].w[0] + 11u);
    set32(c.r[5], c.r[4].w[0] + 7916u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003F91F8; } }
    c.r[1].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003F91F8; } }
L_003F9184:
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[9].w[0] + 4u), 0u);
    st32((c.r[9].w[0] + 8u), 0u);
    st8((c.r[9].w[0] + 12u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[9].w[0] + 16u), 0u);
    st32((c.r[9].w[0] + 20u), 0u);
    st8((c.r[9].w[0] + 24u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[9].w[0] + 28u), 0u);
    st32((c.r[9].w[0] + 32u), 0u);
    st8((c.r[9].w[0] + 36u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[9].w[0] + 40u), 0u);
    st32((c.r[9].w[0] + 44u), 0u);
    st8((c.r[9].w[0] + 48u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[9].w[0] + 52u), 0u);
    st32((c.r[9].w[0] + 56u), 0u);
    st8((c.r[9].w[0] + 60u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[9].w[0] + 64u), 0u);
    st32((c.r[9].w[0] + 68u), 0u);
    st8((c.r[9].w[0] + 72u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[9].w[0] + 76u), 0u);
    st32((c.r[9].w[0] + 80u), 0u);
    st8((c.r[9].w[0] + 84u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[9].w[0] + 88u), 0u);
    st32((c.r[9].w[0] + 92u), 0u);
    set32(c.r[9], c.r[9].w[0] + 96u);
    c.r[2].d[0] = c.r[9].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 28;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F9184u | kUnwind; return; } goto L_003F9184; } }
    c.budget -= 1;
L_003F91F8:
    set32(c.r[5], c.r[4].w[0] + 8012u);
    c.r[1].d[0] = c.r[9].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003F9228; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003F920C:
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[9].w[0] + 4u), 0u);
    st32((c.r[9].w[0] + 8u), 0u);
    set32(c.r[9], c.r[9].w[0] + 12u);
    c.r[2].d[0] = c.r[9].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003F920Cu | kUnwind; return; } goto L_003F920C; } }
L_003F9228:
    st32((c.r[4].w[0] + 8012u), 0u);
    st32((c.r[4].w[0] + 8016u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8020u), 0u);
    st32((c.r[4].w[0] + 8024u), 0u);
    st32((c.r[4].w[0] + 8028u), 0u);
    st32((c.r[4].w[0] + 8036u), 0u);
    st32((c.r[4].w[0] + 8040u), 0u);
    st32((c.r[4].w[0] + 8044u), 0u);
    st32((c.r[4].w[0] + 8088u), 0u);
    st32((c.r[4].w[0] + 8092u), 0u);
    st32((c.r[4].w[0] + 8096u), 0u);
    st32((c.r[4].w[0] + 8048u), 0u);
    st32((c.r[4].w[0] + 8052u), 0u);
    st32((c.r[4].w[0] + 8056u), 0u);
    st32((c.r[4].w[0] + 8060u), 0u);
    st32((c.r[4].w[0] + 8064u), 0u);
    st32((c.r[4].w[0] + 8068u), 0u);
    st32((c.r[4].w[0] + 8072u), 0u);
    st32((c.r[4].w[0] + 8076u), 0u);
    st32((c.r[4].w[0] + 8080u), 0u);
    st32((c.r[4].w[0] + 8084u), 0u);
    st32((c.r[4].w[0] + 8100u), 0u);
    st32((c.r[4].w[0] + 8104u), 0u);
    st32((c.r[4].w[0] + 8108u), 0u);
    st32((c.r[4].w[0] + 8112u), 0u);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8116u), 0u);  c.pc = t; return; }
L_003F92A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F9304; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F9304; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[16].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] - 2480u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003F92FC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F92FC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F92FC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F92F8u); set32(c.r[5], c.r[5].w[0] - 29104u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003F92F8u) [[unlikely]] return; }
L_003F92F8:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_003F92FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9304u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F9304u) [[unlikely]] return; }
L_003F9304:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F9320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9354; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9354; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 20688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9354u); st32((c.r[4].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F9354u) [[unlikely]] return; }
L_003F9354:
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F9370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F93D4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F93D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[16].w[0] + 20u);
    set32(c.r[3], c.r[3].w[0] - 20752u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003F93CC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F93CC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F93CC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F93C8u); set32(c.r[5], c.r[5].w[0] - 29104u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003F93C8u) [[unlikely]] return; }
L_003F93C8:
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 1;
L_003F93CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F93D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F93D4u) [[unlikely]] return; }
L_003F93D4:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F93F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F9454; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F9454; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[16].w[0] + 20u);
    set32(c.r[3], c.r[3].w[0] - 25648u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003F944C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F944C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F944C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9448u); set32(c.r[5], c.r[5].w[0] - 29104u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003F9448u) [[unlikely]] return; }
L_003F9448:
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 1;
L_003F944C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9454u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F9454u) [[unlikely]] return; }
L_003F9454:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F9470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F94D4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F94D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[16].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 23488u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003F94CC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F94CC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F94CC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F94C8u); set32(c.r[5], c.r[5].w[0] - 29104u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003F94C8u) [[unlikely]] return; }
L_003F94C8:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_003F94CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F94D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F94D4u) [[unlikely]] return; }
L_003F94D4:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F94F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9524; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9524; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 28000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9524u); st32((c.r[4].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F9524u) [[unlikely]] return; }
L_003F9524:
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F9540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9574; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9574; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 28064u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9574u); st32((c.r[4].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F9574u) [[unlikely]] return; }
L_003F9574:
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F9590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F95F4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F95F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[16].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 23424u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003F95EC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F95EC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F95EC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F95E8u); set32(c.r[5], c.r[5].w[0] - 29104u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003F95E8u) [[unlikely]] return; }
L_003F95E8:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_003F95EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F95F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F95F4u) [[unlikely]] return; }
L_003F95F4:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F9610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9644; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9644; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 2416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9644u); st32((c.r[4].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F9644u) [[unlikely]] return; }
L_003F9644:
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F9660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9694; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9694; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 13936u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9694u); st32((c.r[4].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F9694u) [[unlikely]] return; }
L_003F9694:
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F96B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F96E4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F96E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 10336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F96E4u); st32((c.r[4].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F96E4u) [[unlikely]] return; }
L_003F96E4:
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F9700:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9734; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9734; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 12480u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9734u); st32((c.r[4].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F9734u) [[unlikely]] return; }
L_003F9734:
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F9750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F97B4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F97B4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[16].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] - 16624u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003F97AC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F97AC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F97AC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F97A8u); set32(c.r[5], c.r[5].w[0] - 29104u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003F97A8u) [[unlikely]] return; }
L_003F97A8:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_003F97AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F97B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F97B4u) [[unlikely]] return; }
L_003F97B4:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F97D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9804; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9804; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 9424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9804u); st32((c.r[4].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F9804u) [[unlikely]] return; }
L_003F9804:
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F9820:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F9884; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F9884; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[16].w[0] + 20u);
    set32(c.r[3], c.r[3].w[0] + 9104u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003F987C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F987C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F987C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9878u); set32(c.r[5], c.r[5].w[0] - 29104u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003F9878u) [[unlikely]] return; }
L_003F9878:
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 1;
L_003F987C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9884u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F9884u) [[unlikely]] return; }
L_003F9884:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F98A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F9904; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F9904; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[16].w[0] + 20u);
    set32(c.r[3], c.r[3].w[0] + 20384u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003F98FC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F98FC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F98FC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F98F8u); set32(c.r[5], c.r[5].w[0] - 29104u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003F98F8u) [[unlikely]] return; }
L_003F98F8:
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 1;
L_003F98FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9904u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F9904u) [[unlikely]] return; }
L_003F9904:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F9920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F9984; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F9984; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[16].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] - 20336u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003F997C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F997C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F997C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9978u); set32(c.r[5], c.r[5].w[0] - 29104u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003F9978u) [[unlikely]] return; }
L_003F9978:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_003F997C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9984u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F9984u) [[unlikely]] return; }
L_003F9984:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F99A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F9A04; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F9A04; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[16].w[0] + 20u);
    set32(c.r[3], c.r[3].w[0] - 27936u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003F99FC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F99FC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F99FC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F99F8u); set32(c.r[5], c.r[5].w[0] - 29104u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003F99F8u) [[unlikely]] return; }
L_003F99F8:
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 1;
L_003F99FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9A04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F9A04u) [[unlikely]] return; }
L_003F9A04:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F9A20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F9A84; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F9A84; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[16].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 23024u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003F9A7C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9A7C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9A7C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9A78u); set32(c.r[5], c.r[5].w[0] - 29104u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003F9A78u) [[unlikely]] return; }
L_003F9A78:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_003F9A7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9A84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F9A84u) [[unlikely]] return; }
L_003F9A84:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F9AA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F9B04; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F9B04; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[16].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 20448u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003F9AFC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9AFC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9AFC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9AF8u); set32(c.r[5], c.r[5].w[0] - 29104u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003F9AF8u) [[unlikely]] return; }
L_003F9AF8:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_003F9AFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9B04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F9B04u) [[unlikely]] return; }
L_003F9B04:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F9B20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F9B84; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F9B84; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[16].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 8688u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003F9B7C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9B7C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9B7C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9B78u); set32(c.r[5], c.r[5].w[0] - 29104u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003F9B78u) [[unlikely]] return; }
L_003F9B78:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_003F9B7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9B84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F9B84u) [[unlikely]] return; }
L_003F9B84:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F9BA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F9C04; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F9C04; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[16].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] - 10400u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003F9BFC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9BFC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9BFC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9BF8u); set32(c.r[5], c.r[5].w[0] - 29104u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003F9BF8u) [[unlikely]] return; }
L_003F9BF8:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_003F9BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9C04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F9C04u) [[unlikely]] return; }
L_003F9C04:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F9C20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F9C84; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F9C84; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[16].w[0] + 36u);
    set32(c.r[3], c.r[3].w[0] + 8624u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003F9C7C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9C7C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9C7C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9C78u); set32(c.r[5], c.r[5].w[0] - 29104u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003F9C78u) [[unlikely]] return; }
L_003F9C78:
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 1;
L_003F9C7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9C84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F9C84u) [[unlikely]] return; }
L_003F9C84:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F9CA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F9D04; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F9D04; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[16].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 20512u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003F9CFC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9CFC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9CFC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9CF8u); set32(c.r[5], c.r[5].w[0] - 29104u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003F9CF8u) [[unlikely]] return; }
L_003F9CF8:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_003F9CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9D04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F9D04u) [[unlikely]] return; }
L_003F9D04:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F9D20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F9D84; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F9D84; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[16].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] + 20176u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003F9D7C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9D7C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9D7C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9D78u); set32(c.r[5], c.r[5].w[0] - 29104u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003F9D78u) [[unlikely]] return; }
L_003F9D78:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_003F9D7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9D84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F9D84u) [[unlikely]] return; }
L_003F9D84:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F9DA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F9E04; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F9E04; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[16].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] - 19984u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003F9DFC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9DFC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9DFC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9DF8u); set32(c.r[5], c.r[5].w[0] - 29104u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003F9DF8u) [[unlikely]] return; }
L_003F9DF8:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_003F9DFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9E04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F9E04u) [[unlikely]] return; }
L_003F9E04:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F9E20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F9E84; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F9E84; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[16].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] - 10464u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003F9E7C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003F9E7C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9E7C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9E78u); set32(c.r[5], c.r[5].w[0] - 29104u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x003F9E78u) [[unlikely]] return; }
L_003F9E78:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_003F9E7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9E84u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F9E84u) [[unlikely]] return; }
L_003F9E84:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F9EA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9ED4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003F9ED4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 2544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9ED4u); st32((c.r[4].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F9ED4u) [[unlikely]] return; }
L_003F9ED4:
    st32((c.r[16].w[0]), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003F9EF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003F9F24; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003F9F24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9F1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_007C(c, 99u, depth + 1u); else { c.pc = 0x003F0D10u; return; } if (c.pc != 0x003F9F1Cu) [[unlikely]] return; }
L_003F9F1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9F24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003F9F24u) [[unlikely]] return; }
L_003F9F24:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003F9F40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4u));
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = ld8((c.r[4].w[0]));
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_003F9F7C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F9F98; } }
L_003F9F7C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003F9F98:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_003F9FAC; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003F9FC8; } }
L_003F9FAC:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003F9FC8:
    c.f[20] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003F9FD4u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003F9FD4u) [[unlikely]] return; }
L_003F9FD4:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_003F9FE8; } }
    c.f[1] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_003FA004; } }
L_003F9FE8:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_003FA004:
    c.f[1] = 0u;
    c.r[16].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003FA0FC; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 4u));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 5u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003FA0FC; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003FA040:
    c.r[16].d[0] = ld8((c.r[18].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_003FA06C; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 4u));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 6u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003FA06C; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003FA090; } }
L_003FA06C:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_003FA1BC; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 5u));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 6u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003FA1BC; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1u));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_003FA090:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 3u));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 7u));
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    c.f[0] = c.r[3].w[0];
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0; c.f[21] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FA0B4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FA0D0; } }
L_003FA0B4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.f[20] = fp::ee::add(c.fcr31, c.f[20], c.f[20]);
    c.budget -= 7;
L_003FA0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA0D8u); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003FA0D8u) [[unlikely]] return; }
L_003FA0D8:
    c.f[2] = fp::ee::sub(c.fcr31, c.f[20], c.f[21]);
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[21]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003FA27C; } }
L_003FA0FC:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 5u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003FA114; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FA130; } }
L_003FA114:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003FA130:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_003FA144; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FA160; } }
L_003FA144:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003FA160:
    c.f[20] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA16Cu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003FA16Cu) [[unlikely]] return; }
L_003FA16C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_003FA180; } }
    c.f[1] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_003FA19C; } }
L_003FA180:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_003FA19C:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA040u | kUnwind; return; } goto L_003FA040; } }
L_003FA1BC:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 6u));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_003FA1D4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FA1F0; } }
L_003FA1D4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003FA1F0:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_003FA204; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FA220; } }
L_003FA204:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003FA220:
    c.f[20] = fp::ee::sub(c.fcr31, c.f[1], c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA22Cu); set32(c.r[4], c.r[28].w[0] - 28340u);  if (depth < kMaxDepth) unit_00A1(c, 181u, depth + 1u); else { c.pc = 0x00486770u; return; } if (c.pc != 0x003FA22Cu) [[unlikely]] return; }
L_003FA22C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_003FA240; } }
    c.f[1] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_003FA25C; } }
L_003FA240:
    set32(c.r[3], c.r[16].w[0] >> 1);
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_003FA25C:
    c.f[1] = 0u;
    c.facc = fp::ee::add(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::madd(c.fcr31, c.facc, c.f[20], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA090u | kUnwind; return; } goto L_003FA090; } }
L_003FA27C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FA2A0:
    c.r[6].d[0] = ld16((c.r[5].w[0] + 4u));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 6u));
    st16((c.r[4].w[0] + 22u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 22u));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_003FA2C8; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FA2E4; } }
L_003FA2C8:
    set32(c.r[6], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003FA2E4:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_003FA2FC; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FA318; } }
L_003FA2FC:
    set32(c.r[6], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003FA318:
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 24u));
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_003FA350; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FA36C; } }
L_003FA350:
    set32(c.r[6], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::ee::add(c.fcr31, c.f[1], c.f[1]);
    c.budget -= 7;
L_003FA36C:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 10u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_003FA384; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003FA3A0; } }
L_003FA384:
    set32(c.r[6], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[6].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 7;
L_003FA3A0:
    c.f[1] = fp::ee::div(c.fcr31, c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.r[6].d[0] = ld16((c.r[5].w[0] + 8u));
    c.r[5].d[0] = ld16((c.r[5].w[0] + 10u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 22u));
    mmi::div(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 24u));
    mmi::div(c, 1, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003FA3F0:
    c.r[7].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.f[3] = ld32((c.r[4].w[0] + 12u));
    mmi::div(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[4] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[7].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::ee::add(c.fcr31, c.f[4], c.f[1]);
    c.f[1] = c.r[3].w[0];
    c.f[2] = c.r[4].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    c.f[2] = fp::ee::mul(c.fcr31, c.f[3], c.f[2]);
    set32(c.r[7], c.f[0]);
    c.f[0] = fp::ee::add(c.fcr31, c.f[2], c.f[3]);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[4]);
    set32(c.r[4], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[3], c.f[0]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));  c.pc = t; return; }
L_003FA480:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_003FA488:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 31564u));
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.r[2].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(25ll) ? 1ull : 0ull;
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 31564u));
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 31564u));
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 31564u));
    st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 31564u));
    st16((c.r[6].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 31564u));
    st16((c.r[6].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 31564u));
    st16((c.r[6].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 31564u));
    st16((c.r[6].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA488u | kUnwind; return; } goto L_003FA488; } }
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.r[7].d[0] = ld16((c.r[28].w[0] - 31564u));
    set32(c.r[6], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 9;
L_003FA4FC:
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] + 8u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[8].sd[0] < 25ll ? 1ull : 0ull;
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA4FCu | kUnwind; return; } goto L_003FA4FC; } }
    set32(c.r[6], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] + 13312u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
L_003FA54C:
    set32(c.r[2], c.r[9].w[0] << 1);
    set32(c.r[5], c.r[6].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FA688; } }
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003FA568:
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[7].w[0] + c.r[2].w[0]);
    c.r[10].d[0] = ld16((c.r[5].w[0]));
    c.r[11].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    mmi::mult(c, 0, c.r[11].w[0], c.r[10].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    c.r[10].d[0] = ld16((c.r[2].w[0]));
    c.r[11].d[0] = c.r[11].d[0] & 65535ull;
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[11].d[0] = ld16((c.r[3].w[0] + 2u));
    c.r[10].d[0] = ld16((c.r[5].w[0]));
    mmi::mult(c, 1, c.r[11].w[0], c.r[10].w[0]);
    c.r[11].d[0] = c.lo.d[1];
    c.r[10].d[0] = ld16((c.r[2].w[0] + 2u));
    c.r[11].d[0] = c.r[11].d[0] & 65535ull;
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[11].d[0] = ld16((c.r[3].w[0] + 4u));
    c.r[10].d[0] = ld16((c.r[5].w[0]));
    mmi::mult(c, 0, c.r[11].w[0], c.r[10].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    c.r[10].d[0] = ld16((c.r[2].w[0] + 4u));
    c.r[11].d[0] = c.r[11].d[0] & 65535ull;
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[11].d[0] = ld16((c.r[3].w[0] + 6u));
    c.r[10].d[0] = ld16((c.r[5].w[0]));
    mmi::mult(c, 1, c.r[11].w[0], c.r[10].w[0]);
    c.r[11].d[0] = c.lo.d[1];
    c.r[10].d[0] = ld16((c.r[2].w[0] + 6u));
    c.r[11].d[0] = c.r[11].d[0] & 65535ull;
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[11].d[0] = ld16((c.r[3].w[0] + 8u));
    c.r[10].d[0] = ld16((c.r[5].w[0]));
    mmi::mult(c, 0, c.r[11].w[0], c.r[10].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    c.r[10].d[0] = ld16((c.r[2].w[0] + 8u));
    c.r[11].d[0] = c.r[11].d[0] & 65535ull;
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[11].d[0] = ld16((c.r[3].w[0] + 10u));
    c.r[10].d[0] = ld16((c.r[5].w[0]));
    mmi::mult(c, 1, c.r[11].w[0], c.r[10].w[0]);
    c.r[11].d[0] = c.lo.d[1];
    c.r[10].d[0] = ld16((c.r[2].w[0] + 10u));
    c.r[11].d[0] = c.r[11].d[0] & 65535ull;
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[11].d[0] = ld16((c.r[3].w[0] + 12u));
    c.r[10].d[0] = ld16((c.r[5].w[0]));
    mmi::mult(c, 0, c.r[11].w[0], c.r[10].w[0]);
    c.r[11].d[0] = c.lo.d[0];
    c.r[10].d[0] = ld16((c.r[2].w[0] + 12u));
    c.r[11].d[0] = c.r[11].d[0] & 65535ull;
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld16((c.r[3].w[0] + 14u));
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    mmi::mult(c, 1, c.r[10].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[8], c.r[8].w[0] + 8u);
    c.r[11].d[0] = c.r[3].d[0] & 65535ull;
    c.r[10].d[0] = ld16((c.r[2].w[0] + 14u));
    c.r[3].d[0] = c.r[8].sd[0] < 25ll ? 1ull : 0ull;
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    c.budget -= 62;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(c.r[10].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA568u | kUnwind; return; } goto L_003FA568; } }
    set32(c.r[8], c.r[8].w[0] << 1);
    c.r[2].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[3], c.r[7].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0]));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[8].w[0]);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
L_003FA688:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[2].d[0] = c.r[9].sd[0] < 46ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 66u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA54Cu | kUnwind; return; } goto L_003FA54C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003FA6A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[4].w[0] - 20368u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002E81C0u | kUnwind; return; } [[clang::musttail]] return unit_003A(c, 15u, depth); }
L_003FA6B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003FA704; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 2352u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003FA6EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_003FA6EC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003FA704; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA704u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003FA704u) [[unlikely]] return; }
L_003FA704:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FA720:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    set32(c.r[7], 0u - 2u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], 0u - 3u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] - 2352u);
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
L_003FA790:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA7BCu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x003FA7BCu) [[unlikely]] return; }
L_003FA7BC:
    c.f[20] = ld32((c.r[18].w[0] + 64u));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), 0u);
    set32(c.r[4], ld32((c.r[2].w[0] + 140u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003FA7E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA7DCu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0020(c, 120u, depth + 1u); else { c.pc = 0x00281780u; return; } if (c.pc != 0x003FA7DCu) [[unlikely]] return; }
L_003FA7DC:
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003FA7E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FA88C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA7F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x003FA7F8u) [[unlikely]] return; }
L_003FA7F8:
    set32(c.r[6], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003FA870; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 64u)));
    c.r[5].d[0] = ld16((c.r[3].w[0] + 6u));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003FA870; } }
    set32(c.r[7], ld32((c.r[6].w[0] + 60u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_003FA824:
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003FA84C; } }
L_003FA830:
    set32(c.r[3], ld32((c.r[6].w[0] + 64u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA824u | kUnwind; return; } goto L_003FA824; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 140u)));  if (t) { goto L_003FA874; } }
L_003FA84C:
    set32(c.r[3], ld32((c.r[6].w[0] + 76u)));
    set32(c.r[4], c.r[3].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FA830u | kUnwind; return; } goto L_003FA830; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[6].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[6].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 4;
L_003FA870:
    set32(c.r[5], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 1;
L_003FA874:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 20368u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 220u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA888u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_003A(c, 47u, depth + 1u); else { c.pc = 0x002E8740u; return; } if (c.pc != 0x003FA888u) [[unlikely]] return; }
L_003FA888:
    st32((c.r[17].w[0] + 140u), 0u);
    c.budget -= 1;
L_003FA88C:
    c.f[3] = ld32((c.r[18].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[2] = ld32((c.r[18].w[0] + 56u));
    set32(c.r[3], c.r[29].w[0] + 84u);
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[17].w[0] + 48u), c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[3]);
    st32((c.r[17].w[0] + 56u), c.f[2]);
    st32((c.r[17].w[0] + 60u), c.f[20]);
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    set32(c.r[4], ld32((c.r[28].w[0] - 29752u)));
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    st32((c.r[3].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = fp::ee::add(c.fcr31, c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 88u), c.f[2]);
    c.f[1] = ld32((c.r[18].w[0] + 60u));
    st32((c.r[3].w[0]), c.f[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA8F0u); st32((c.r[29].w[0] + 92u), c.f[1]);  if (depth < kMaxDepth) unit_003A(c, 264u, depth + 1u); else { c.pc = 0x002EB440u; return; } if (c.pc != 0x003FA8F0u) [[unlikely]] return; }
L_003FA8F0:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 44u), c.f[0]);  if (t) { goto L_003FA91C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[29].w[0] + 96u);  if (t) { goto L_003FA920; } }
L_003FA91C:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FA920:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA92Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_007F(c, 66u, depth + 1u); else { c.pc = 0x003FC900u; return; } if (c.pc != 0x003FA92Cu) [[unlikely]] return; }
L_003FA92C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003FA950:
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    st32((c.r[4].w[0] + 32u), c.r[6].w[0]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[3]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 64u), c.f[0]);  c.pc = t; return; }
L_003FA970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003FA9C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 2064u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003FA9AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_003FA9AC:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003FA9C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FA9C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003FA9C4u) [[unlikely]] return; }
L_003FA9C4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FA9E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    set32(c.r[7], 0u - 2u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], 0u - 3u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] - 2064u);
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
L_003FAA50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAA64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x003FAA64u) [[unlikely]] return; }
L_003FAA64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FAAD4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FAAAC; } }
L_003FAA80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAA88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x003FAA88u) [[unlikely]] return; }
L_003FAA88:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FAAE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAAA4u);  if (depth < kMaxDepth) unit_009A(c, 55u, depth + 1u); else { c.pc = 0x00468D70u; return; } if (c.pc != 0x003FAAA4u) [[unlikely]] return; }
L_003FAAA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003FAAEC; } }
L_003FAAAC:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAABCu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x003FAABCu) [[unlikely]] return; }
L_003FAABC:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAACCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FAACCu) [[unlikely]] return; }
L_003FAACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FAA80u | kUnwind; return; } goto L_003FAA80; } }
L_003FAAD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAAE0u); st32((c.r[16].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x003FAAE0u) [[unlikely]] return; }
L_003FAAE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FAAA4u | kUnwind; return; } goto L_003FAAA4; } }
L_003FAAE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FAAEC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FAB00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAB14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x003FAB14u) [[unlikely]] return; }
L_003FAB14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FAB84; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FAB5C; } }
L_003FAB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAB38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x003FAB38u) [[unlikely]] return; }
L_003FAB38:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FAB98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAB54u);  if (depth < kMaxDepth) unit_009A(c, 55u, depth + 1u); else { c.pc = 0x00468D70u; return; } if (c.pc != 0x003FAB54u) [[unlikely]] return; }
L_003FAB54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003FAB9C; } }
L_003FAB5C:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAB6Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x003FAB6Cu) [[unlikely]] return; }
L_003FAB6C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAB7Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FAB7Cu) [[unlikely]] return; }
L_003FAB7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FAB30u | kUnwind; return; } goto L_003FAB30; } }
L_003FAB84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAB90u); st32((c.r[16].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x003FAB90u) [[unlikely]] return; }
L_003FAB90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FAB54u | kUnwind; return; } goto L_003FAB54; } }
L_003FAB98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FAB9C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FABB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FABC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x003FABC4u) [[unlikely]] return; }
L_003FABC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FAC34; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FAC0C; } }
L_003FABE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FABE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x003FABE8u) [[unlikely]] return; }
L_003FABE8:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FAC48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAC04u);  if (depth < kMaxDepth) unit_009A(c, 55u, depth + 1u); else { c.pc = 0x00468D70u; return; } if (c.pc != 0x003FAC04u) [[unlikely]] return; }
L_003FAC04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003FAC4C; } }
L_003FAC0C:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAC1Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x003FAC1Cu) [[unlikely]] return; }
L_003FAC1C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAC2Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FAC2Cu) [[unlikely]] return; }
L_003FAC2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FABE0u | kUnwind; return; } goto L_003FABE0; } }
L_003FAC34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAC40u); st32((c.r[16].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x003FAC40u) [[unlikely]] return; }
L_003FAC40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FAC04u | kUnwind; return; } goto L_003FAC04; } }
L_003FAC48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FAC4C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FAC60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAC74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x003FAC74u) [[unlikely]] return; }
L_003FAC74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FACE4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FACBC; } }
L_003FAC90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAC98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x003FAC98u) [[unlikely]] return; }
L_003FAC98:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[3].d[0] = c.r[3].d[0] << 60;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FACF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FACB4u);  if (depth < kMaxDepth) unit_009A(c, 55u, depth + 1u); else { c.pc = 0x00468D70u; return; } if (c.pc != 0x003FACB4u) [[unlikely]] return; }
L_003FACB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003FACFC; } }
L_003FACBC:
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FACCCu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x003FACCCu) [[unlikely]] return; }
L_003FACCC:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FACDCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FACDCu) [[unlikely]] return; }
L_003FACDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FAC90u | kUnwind; return; } goto L_003FAC90; } }
L_003FACE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FACF0u); st32((c.r[16].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x003FACF0u) [[unlikely]] return; }
L_003FACF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FACB4u | kUnwind; return; } goto L_003FACB4; } }
L_003FACF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FACFC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FAD10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FAD38; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_003FAF64; } }
L_003FAD38:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FAE1C; } }
L_003FAD48:
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003FAF28; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 56u));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 380u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 380u);  if (t) { goto L_003FAD6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003FADAC; } }
L_003FAD6C:
    c.f[1] = ld32((c.r[6].w[0] + 360u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FADA8; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FADA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003FADAC; } }
L_003FADA8:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FADAC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FAE28; } }
L_003FADB4:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 1;
L_003FADB8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FADD4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FADD4u); set32(c.r[5], c.r[2].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FADD4u) [[unlikely]] return; }
L_003FADD4:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 360u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003FAE10; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
L_003FAE10:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 60u), c.r[3].w[0]);  if (t) { goto L_003FAF64; } }
L_003FAE1C:
    set32(c.r[3], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FAD48u | kUnwind; return; } goto L_003FAD48; } }
L_003FAE28:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], 0u - 3u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[2], c.r[2].w[0] + 16304u);
    st16((c.r[16].w[0] + 56u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 56u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAE64u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0075(c, 185u, depth + 1u); else { c.pc = 0x003D70B0u; return; } if (c.pc != 0x003FAE64u) [[unlikely]] return; }
L_003FAE64:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FAE9C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAE80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FAE80u) [[unlikely]] return; }
L_003FAE80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FAE9C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAE9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FAE9Cu) [[unlikely]] return; }
L_003FAE9C:
    st32((c.r[16].w[0] + 44u), 0u);
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    c.r[4].d[0] = c.r[5].d[0] ^ 0ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003FAF00; } }
    c.r[6].d[0] = ld16((c.r[16].w[0] + 56u));
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 3;
L_003FAEC4:
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 4u));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_003FAEE4; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_003FAF00; } }
L_003FAEE4:
    set32(c.r[5], ld32((c.r[5].w[0] + 12u)));
    c.r[3].d[0] = c.r[5].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FAEC4u | kUnwind; return; } goto L_003FAEC4; } }
    c.budget -= 1;
L_003FAF00:
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FADB4u | kUnwind; return; } goto L_003FADB4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAF20u); set32(c.r[5], c.r[6].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FAF20u) [[unlikely]] return; }
L_003FAF20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 44u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FADB8u | kUnwind; return; } goto L_003FADB8; } }
L_003FAF28:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 36u));
    c.r[3].d[0] = c.r[3].d[0] << 61;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FAE10u | kUnwind; return; } goto L_003FAE10; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAF4Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x003FAF4Cu) [[unlikely]] return; }
L_003FAF4C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAF5Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FAF5Cu) [[unlikely]] return; }
L_003FAF5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FAE10u | kUnwind; return; } goto L_003FAE10; } }
L_003FAF64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FAF80:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BABE0u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 213u, depth); }
L_003FAF90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAFA4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x003FAFA4u) [[unlikely]] return; }
L_003FAFA4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FAFB4u); c.r[5].d[0] = c.r[2].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x003FAFB4u) [[unlikely]] return; }
L_003FAFB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FAFD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 48u)));
    c.r[3].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003FB048; } }
L_003FAFF8:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FB020; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB01Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FB01Cu) [[unlikely]] return; }
L_003FB01C:
    c.budget -= 1;
L_003FB020:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], ld32((c.r[3].w[0] + 12u)));
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[16].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FAFF8u | kUnwind; return; } goto L_003FAFF8; } }
L_003FB048:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FB060:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FB070:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 300u), 0u);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0] + 40u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB0ACu); set32(c.r[5], c.r[5].w[0] + 7984u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x003FB0ACu) [[unlikely]] return; }
L_003FB0AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FB10C; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB0C0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003FB0C0u) [[unlikely]] return; }
L_003FB0C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB0D0u); set32(c.r[5], c.r[5].w[0] + 7988u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x003FB0D0u) [[unlikely]] return; }
L_003FB0D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FB0F0; } }
    c.r[5].d[0] = ld8((c.r[19].w[0] + 36u));
    set32(c.r[3], 0u - 9u);
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[19].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
L_003FB0F0:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[17].d[0] & 65535ull;
    c.r[3].d[0] = c.r[16].sd[0] < 388ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FB124; } }
L_003FB104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FB238; } }
L_003FB10C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB11Cu); set32(c.r[5], c.r[5].w[0] + 7993u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x003FB11Cu) [[unlikely]] return; }
L_003FB11C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB0F0u | kUnwind; return; } goto L_003FB0F0; } }
L_003FB124:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 16304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[7], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[5].w[0] + 8005u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB150u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x003FB150u) [[unlikely]] return; }
L_003FB150:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB160u); set32(c.r[4], c.r[4].w[0] + 8011u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x003FB160u) [[unlikely]] return; }
L_003FB160:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FB180; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003FB180; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB180u); set32(c.r[5], c.r[5].w[0] + 8037u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x003FB180u) [[unlikely]] return; }
L_003FB180:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 300u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB190u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 271u, depth + 1u); else { c.pc = 0x004124D0u; return; } if (c.pc != 0x003FB190u) [[unlikely]] return; }
L_003FB190:
    set32(c.r[3], ld32((c.r[29].w[0] + 300u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FB1F8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FB1C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB1B0u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003FB1B0u) [[unlikely]] return; }
L_003FB1B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FB214; } }
L_003FB1B8:
    set32(c.r[3], ld32((c.r[19].w[0] + 52u)));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003FB1E0; } }
L_003FB1C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB1D0u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x003FB1D0u) [[unlikely]] return; }
L_003FB1D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FB228; } }
L_003FB1D8:
    st32((c.r[19].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_003FB1E0:
    set32(c.r[4], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 300u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st32((c.r[29].w[0] + 300u), 0u);
    c.budget -= 6;
L_003FB1F8:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] & 65535ull;
    c.r[3].d[0] = c.r[17].sd[0] < 388ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB124u | kUnwind; return; } goto L_003FB124; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB104u | kUnwind; return; } goto L_003FB104; } }
L_003FB214:
    set32(c.r[3], ld32((c.r[19].w[0] + 52u)));
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB1B8u | kUnwind; return; } goto L_003FB1B8; } }
L_003FB228:
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB1D8u | kUnwind; return; } goto L_003FB1D8; } }
L_003FB238:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_003FB260:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FB3D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 1776u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FB300; } }
L_003FB298:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003FB2E8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003FB2E0; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FB2E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FB2D8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB2D8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FB2D8u) [[unlikely]] return; }
L_003FB2D8:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 2;
L_003FB2E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB2E8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003FB2E8u) [[unlikely]] return; }
L_003FB2E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB298u | kUnwind; return; } goto L_003FB298; } }
    c.budget -= 1;
L_003FB300:
    st32((c.r[17].w[0] + 48u), 0u);
    set32(c.r[2], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_003FB390; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FB388; } }
L_003FB31C:
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003FB370; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003FB368; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FB368; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FB360; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB35Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FB35Cu) [[unlikely]] return; }
L_003FB35C:
    c.budget -= 1;
L_003FB360:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 2;
L_003FB368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB370u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003FB370u) [[unlikely]] return; }
L_003FB370:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB31Cu | kUnwind; return; } goto L_003FB31C; } }
    c.budget -= 1;
L_003FB388:
    st32((c.r[17].w[0] + 48u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    c.budget -= 2;
L_003FB390:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003FB3BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FB3BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 5;
L_003FB3BC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003FB3D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB3D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003FB3D4u) [[unlikely]] return; }
L_003FB3D4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FB3F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[9].d[0] = 0ull & 1ull;
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 2u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[15].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[13], 0u - 3u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[14].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[11], c.r[11].w[0] - 12672u);
    c.r[12].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[10], c.r[10].w[0] - 1776u);
    set32(c.r[6], 0u - 9u);
    set32(c.r[8], c.r[9].w[0] << 3);
    set32(c.r[7], c.r[9].w[0] << 1);
    set32(c.r[3], 0u - 5u);
    set32(c.r[5], c.r[9].w[0] << 2);
    c.r[12].d[0] = c.r[12].d[0] & c.r[2].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[15].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[12].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[12].d[0] = c.r[12].d[0] & c.r[13].d[0];
    c.r[12].d[0] = c.r[12].d[0] | c.r[14].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st32((c.r[4].w[0]), c.r[11].w[0]);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0]), c.r[10].w[0]);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    c.r[10].d[0] = ld8((c.r[4].w[0] + 36u));
    c.r[6].d[0] = c.r[10].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 32u), 0u);
    c.r[6].d[0] = ld8((c.r[4].w[0] + 36u));
    c.r[6].d[0] = c.r[6].d[0] & c.r[13].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 36u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 36u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[9].d[0];
    st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 44u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 31548u)));
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 31548u)));
    c.budget -= 60;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003FB4E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_003FB4EC; } }
L_003FB4E8:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_003FB4EC:
    st32((c.r[28].w[0] - 31548u), c.r[2].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003FB500:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 100u);  c.pc = t; return; }
L_003FB510:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FB5E4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003FB590; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003FB578; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FB55C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FB620; } }
L_003FB55C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 19520u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0])));  if (t) { goto L_003FB5FC; } }
L_003FB578:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 40u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB588u); set32(c.r[4], c.r[4].w[0] + 8704u);  if (depth < kMaxDepth) unit_0044(c, 469u, depth + 1u); else { c.pc = 0x00313F00u; return; } if (c.pc != 0x003FB588u) [[unlikely]] return; }
L_003FB588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003FB5FC; } }
L_003FB590:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003FB598:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 40u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    set32(c.r[4], c.r[4].w[0] + 8704u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FB628; } }
L_003FB5C8:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[16].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB598u | kUnwind; return; } goto L_003FB598; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 32u)));  if (t) { goto L_003FB600; } }
L_003FB5E4:
    set32(c.r[5], ld32((c.r[18].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB5F4u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x003FB5F4u) [[unlikely]] return; }
L_003FB5F4:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[17].d[0] = ld16((c.r[2].w[0] + 12u));
    c.budget -= 2;
L_003FB5FC:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 1;
L_003FB600:
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003FB614; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FB618; } }
L_003FB614:
    set32(c.r[2], c.r[17].w[0] - c.r[2].w[0]);
    c.budget -= 1;
L_003FB618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FB638; } }
L_003FB620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FB638; } }
L_003FB628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB630u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 469u, depth + 1u); else { c.pc = 0x00313F00u; return; } if (c.pc != 0x003FB630u) [[unlikely]] return; }
L_003FB630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB5C8u | kUnwind; return; } goto L_003FB5C8; } }
L_003FB638:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FB650:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAAF0u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 202u, depth); }
L_003FB660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB674u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x003FB674u) [[unlikely]] return; }
L_003FB674:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FB684; } }
L_003FB67C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003FB694; } }
L_003FB684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB68Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x003FB68Cu) [[unlikely]] return; }
L_003FB68C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB67Cu | kUnwind; return; } goto L_003FB67C; } }
L_003FB694:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FB6A0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAAF0u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 202u, depth); }
L_003FB6B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB6C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x003FB6C4u) [[unlikely]] return; }
L_003FB6C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FB6D4; } }
L_003FB6CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003FB6E4; } }
L_003FB6D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB6DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x003FB6DCu) [[unlikely]] return; }
L_003FB6DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB6CCu | kUnwind; return; } goto L_003FB6CC; } }
L_003FB6E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FB6F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FB82C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003FB7B4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_003FB77C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003FB73C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FB86C; } }
L_003FB73C:
    c.r[6].d[0] = ld8((c.r[18].w[0] + 40u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[5].w[0] - 19520u);
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003FB898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB76Cu);  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x003FB76Cu) [[unlikely]] return; }
L_003FB76C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB774u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x003FB774u) [[unlikely]] return; }
L_003FB774:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FB87C; } }
L_003FB77C:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 40u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB78Cu); set32(c.r[4], c.r[4].w[0] + 8704u);  if (depth < kMaxDepth) unit_0044(c, 469u, depth + 1u); else { c.pc = 0x00313F00u; return; } if (c.pc != 0x003FB78Cu) [[unlikely]] return; }
L_003FB78C:
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003FB898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB7A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x003FB7A4u) [[unlikely]] return; }
L_003FB7A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB7ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x003FB7ACu) [[unlikely]] return; }
L_003FB7AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FB87C; } }
L_003FB7B4:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003FB7BC:
    c.r[6].d[0] = ld8((c.r[18].w[0] + 40u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[3].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[4], c.r[4].w[0] + 8704u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FB884; } }
    c.budget -= 1;
L_003FB7F0:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[16].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB7BCu | kUnwind; return; } goto L_003FB7BC; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003FB898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB81Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x003FB81Cu) [[unlikely]] return; }
L_003FB81C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB824u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x003FB824u) [[unlikely]] return; }
L_003FB824:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FB87C; } }
L_003FB82C:
    set32(c.r[5], ld32((c.r[18].w[0] + 40u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB83Cu); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_002F(c, 151u, depth + 1u); else { c.pc = 0x002BD440u; return; } if (c.pc != 0x003FB83Cu) [[unlikely]] return; }
L_003FB83C:
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.r[4].d[0] = ld16((c.r[4].w[0] + 12u));
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003FB898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB85Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x003FB85Cu) [[unlikely]] return; }
L_003FB85C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB864u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x003FB864u) [[unlikely]] return; }
L_003FB864:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FB87C; } }
L_003FB86C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB874u);  if (depth < kMaxDepth) unit_002E(c, 240u, depth + 1u); else { c.pc = 0x002BAF70u; return; } if (c.pc != 0x003FB874u) [[unlikely]] return; }
L_003FB874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB87Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x003FB87Cu) [[unlikely]] return; }
L_003FB87C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FB898; } }
L_003FB884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB88Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0044(c, 469u, depth + 1u); else { c.pc = 0x00313F00u; return; } if (c.pc != 0x003FB88Cu) [[unlikely]] return; }
L_003FB88C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB7F0u | kUnwind; return; } goto L_003FB7F0; } }
    c.budget -= 1;
L_003FB898:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FB8B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB8C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x003FB8C4u) [[unlikely]] return; }
L_003FB8C4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB8D4u); c.r[5].d[0] = c.r[2].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_002E(c, 213u, depth + 1u); else { c.pc = 0x002BABE0u; return; } if (c.pc != 0x003FB8D4u) [[unlikely]] return; }
L_003FB8D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FB8F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003FB954; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 1472u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003FB93C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003FB93C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_003FB93C:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003FB954; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FB954u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003FB954u) [[unlikely]] return; }
L_003FB954:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FB970:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[11], 0u - 2u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    c.r[12].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    set32(c.r[9], 0u - 3u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[8], c.r[8].w[0] - 12672u);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1472u);
    c.r[13].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[11].d[0] = c.r[13].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[12].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[11].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[4].w[0]), c.r[8].w[0]);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[6].w[0]);
    c.budget -= 34;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), c.r[7].w[0]);  c.pc = t; return; }
L_003FBA00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003FBA58; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FBA2C:
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FBA70; } }
L_003FBA40:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBA2Cu | kUnwind; return; } goto L_003FBA2C; } }
    c.budget -= 1;
L_003FBA58:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBA68u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FBA68u) [[unlikely]] return; }
L_003FBA68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FBA98; } }
L_003FBA70:
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[5].d[0] = ld16((c.r[2].w[0] + 6u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBA90u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 512u, depth + 1u); else { c.pc = 0x002C2190u; return; } if (c.pc != 0x003FBA90u) [[unlikely]] return; }
L_003FBA90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBA40u | kUnwind; return; } goto L_003FBA40; } }
L_003FBA98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FBAB0:
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    c.budget -= 4;
    { st32((c.r[4].w[0] + 96u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAAF0u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 202u, depth); }
L_003FBAC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBAD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x003FBAD4u) [[unlikely]] return; }
L_003FBAD4:
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FBAF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBB04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x003FBB04u) [[unlikely]] return; }
L_003FBB04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FBBB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBB14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x003FBB14u) [[unlikely]] return; }
L_003FBB14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FBBB4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FBB3C; } }
L_003FBB28:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FBB48; } }
L_003FBB34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003FBBB8; } }
L_003FBB3C:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 96u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBB28u | kUnwind; return; } goto L_003FBB28; } }
L_003FBB48:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBB58u); st32((c.r[16].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007F(c, 33u, depth + 1u); else { c.pc = 0x003FC3F0u; return; } if (c.pc != 0x003FBB58u) [[unlikely]] return; }
L_003FBB58:
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003FBBA0; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003FBB90; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBB90u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x003FBB90u) [[unlikely]] return; }
L_003FBB90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBB98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x003FBB98u) [[unlikely]] return; }
L_003FBB98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBB34u | kUnwind; return; } goto L_003FBB34; } }
L_003FBBA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBB48u | kUnwind; return; } goto L_003FBB48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBB34u | kUnwind; return; } goto L_003FBB34; } }
L_003FBBB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003FBBB8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FBBD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBBE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x003FBBE4u) [[unlikely]] return; }
L_003FBBE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FBC0C; } }
    st32((c.r[16].w[0] + 92u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBBFCu); st32((c.r[16].w[0] + 96u), 0u);  if (depth < kMaxDepth) unit_002E(c, 206u, depth + 1u); else { c.pc = 0x002BAB50u; return; } if (c.pc != 0x003FBBFCu) [[unlikely]] return; }
L_003FBBFC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBC0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FBC0Cu) [[unlikely]] return; }
L_003FBC0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FBC20:
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003FBC68; } }
L_003FBC40:
    set32(c.r[2], ld32((c.r[4].w[0] + 76u)));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 31552u));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBC40u | kUnwind; return; } goto L_003FBC40; } }
    c.budget -= 1;
L_003FBC68:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAAF0u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 202u, depth); }
L_003FBC70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FBD0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 1168u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003FBCF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[16].w[0] + 76u);
    set32(c.r[2], c.r[2].w[0] - 528u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003FBD14; } }
    set32(c.r[4], c.r[16].w[0] + 68u);
    c.budget -= 1;
L_003FBCB4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003FBD24; } }
    set32(c.r[4], c.r[16].w[0] + 60u);
    c.budget -= 1;
L_003FBCC0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003FBD34; } }
L_003FBCC8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003FBCF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 12672u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003FBCF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 5;
L_003FBCF4:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003FBD0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBD0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x003FBD0Cu) [[unlikely]] return; }
L_003FBD0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FBD44; } }
L_003FBD14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBD1Cu);  if (depth < kMaxDepth) unit_0011(c, 368u, depth + 1u); else { c.pc = 0x002478E0u; return; } if (c.pc != 0x003FBD1Cu) [[unlikely]] return; }
L_003FBD1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 68u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBCB4u | kUnwind; return; } goto L_003FBCB4; } }
L_003FBD24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBD2Cu);  if (depth < kMaxDepth) unit_007F(c, 171u, depth + 1u); else { c.pc = 0x003FD9F0u; return; } if (c.pc != 0x003FBD2Cu) [[unlikely]] return; }
L_003FBD2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[16].w[0] + 60u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBCC0u | kUnwind; return; } goto L_003FBCC0; } }
L_003FBD34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBD3Cu);  if (depth < kMaxDepth) unit_007F(c, 164u, depth + 1u); else { c.pc = 0x003FD920u; return; } if (c.pc != 0x003FBD3Cu) [[unlikely]] return; }
L_003FBD3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBCC8u | kUnwind; return; } goto L_003FBCC8; } }
L_003FBD44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FBD60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 16352u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(0u));
    set32(c.r[9], 0u - 2u);
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(0u));
    c.r[10].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[7], 0u - 3u);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[8].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st16((c.r[4].w[0] + 16u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], c.r[6].w[0] - 12672u);
    c.r[11].d[0] = ld8((c.r[4].w[0] + 18u));
    set32(c.r[5], c.r[5].w[0] - 528u);
    set32(c.r[3], c.r[3].w[0] - 1168u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[4].w[0] + 18u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 72u), 0u);
    st32((c.r[4].w[0] + 76u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    c.budget -= 40;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003FBE00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003FBE58; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FBE2C:
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FBE70; } }
L_003FBE40:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBE2Cu | kUnwind; return; } goto L_003FBE2C; } }
    c.budget -= 1;
L_003FBE58:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBE68u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FBE68u) [[unlikely]] return; }
L_003FBE68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FBE98; } }
L_003FBE70:
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[5].d[0] = ld16((c.r[2].w[0] + 6u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBE90u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 512u, depth + 1u); else { c.pc = 0x002C2190u; return; } if (c.pc != 0x003FBE90u) [[unlikely]] return; }
L_003FBE90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FBE40u | kUnwind; return; } goto L_003FBE40; } }
L_003FBE98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FBEB0:
    st32((c.r[4].w[0] + 88u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 97u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BAAF0u | kUnwind; return; } [[clang::musttail]] return unit_002E(c, 202u, depth); }
L_003FBED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBEE4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 202u, depth + 1u); else { c.pc = 0x002BAAF0u; return; } if (c.pc != 0x003FBEE4u) [[unlikely]] return; }
L_003FBEE4:
    st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FBF00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBF1Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_002E(c, 175u, depth + 1u); else { c.pc = 0x002BA700u; return; } if (c.pc != 0x003FBF1Cu) [[unlikely]] return; }
L_003FBF1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_007F(c, 16u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBF2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002E(c, 259u, depth + 1u); else { c.pc = 0x002BB1C0u; return; } if (c.pc != 0x003FBF2Cu) [[unlikely]] return; }
L_003FBF2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_007F(c, 16u, depth); } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 96u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FBFA4; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 48u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003FBF68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FBF60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 84u)));  if (t) { goto L_003FBF70; } }
L_003FBF60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 32u)));  if (t) { goto L_003FBF6C; } }
L_003FBF68:
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_003FBF6C:
    set32(c.r[16], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 1;
L_003FBF70:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[18], c.r[5].w[0] - 1u);  if (t) { [[clang::musttail]] return unit_007F(c, 9u, depth); } }
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 1;
L_003FBF7C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_003FBFA0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003FBFA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FBFA0u); set32(c.r[4], c.r[4].w[0] - 10288u);  if (depth < kMaxDepth) unit_0030(c, 516u, depth + 1u); else { c.pc = 0x002C2210u; return; } if (c.pc != 0x003FBFA0u) [[unlikely]] return; }
L_003FBFA0:
    st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_003FBFA4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_007F(c, 12u, depth); } }
    set32(c.r[16], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] - c.r[16].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_007F(c, 5u, depth); } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003FBFEC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    c.r[3].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003FBFEC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FBFEC:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_007F(c, 5u, depth); } }
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 8704u);
    c.budget -= 3;
    [[clang::musttail]] return unit_007F(c, 1u, depth);
}

}

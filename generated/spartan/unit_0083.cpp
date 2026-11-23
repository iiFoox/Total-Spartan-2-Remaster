#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0083[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0,
    0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0,
    0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0,
    0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69,
    0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0,
    0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0,
    0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0,
    0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0,
    0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0,
    0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0,
    179, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0,
    185, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 193,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 201, 0, 0, 202, 0, 203, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0,
    210, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0,
    0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0,
    0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 226, 0, 227, 0, 0, 228, 0, 229, 0, 0, 0, 0,
    230, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0,
    0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 251, 0, 252, 0, 0, 253, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0,
    265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 272, 0, 0,
    0, 0, 273, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 277, 0, 278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0,
    0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 289,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0,
    0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0,
    0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0,
    301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315,
    0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0,
    357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 370, 0,
    0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0083(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0040C000;
    case 2u: goto L_0040C018;
    case 3u: goto L_0040C030;
    case 4u: goto L_0040C048;
    case 5u: goto L_0040C064;
    case 6u: goto L_0040C080;
    case 7u: goto L_0040C0B0;
    case 8u: goto L_0040C0C0;
    case 9u: goto L_0040C0D8;
    case 10u: goto L_0040C120;
    case 11u: goto L_0040C144;
    case 12u: goto L_0040C14C;
    case 13u: goto L_0040C174;
    case 14u: goto L_0040C1A0;
    case 15u: goto L_0040C1DC;
    case 16u: goto L_0040C220;
    case 17u: goto L_0040C23C;
    case 18u: goto L_0040C280;
    case 19u: goto L_0040C29C;
    case 20u: goto L_0040C2C0;
    case 21u: goto L_0040C2CC;
    case 22u: goto L_0040C2E8;
    case 23u: goto L_0040C32C;
    case 24u: goto L_0040C348;
    case 25u: goto L_0040C388;
    case 26u: goto L_0040C3B0;
    case 27u: goto L_0040C3C0;
    case 28u: goto L_0040C45C;
    case 29u: goto L_0040C480;
    case 30u: goto L_0040C4EC;
    case 31u: goto L_0040C4FC;
    case 32u: goto L_0040C55C;
    case 33u: goto L_0040C568;
    case 34u: goto L_0040C5A8;
    case 35u: goto L_0040C5F8;
    case 36u: goto L_0040C650;
    case 37u: goto L_0040C67C;
    case 38u: goto L_0040C6B4;
    case 39u: goto L_0040C6E4;
    case 40u: goto L_0040C704;
    case 41u: goto L_0040C71C;
    case 42u: goto L_0040C730;
    case 43u: goto L_0040C74C;
    case 44u: goto L_0040C768;
    case 45u: goto L_0040C77C;
    case 46u: goto L_0040C7A0;
    case 47u: goto L_0040C7D4;
    case 48u: goto L_0040C800;
    case 49u: goto L_0040C864;
    case 50u: goto L_0040C894;
    case 51u: goto L_0040C8F4;
    case 52u: goto L_0040C914;
    case 53u: goto L_0040C920;
    case 54u: goto L_0040C9B0;
    case 55u: goto L_0040C9CC;
    case 56u: goto L_0040C9D4;
    case 57u: goto L_0040C9EC;
    case 58u: goto L_0040C9F4;
    case 59u: goto L_0040CA08;
    case 60u: goto L_0040CA10;
    case 61u: goto L_0040CA20;
    case 62u: goto L_0040CA80;
    case 63u: goto L_0040CA90;
    case 64u: goto L_0040CAC4;
    case 65u: goto L_0040CB04;
    case 66u: goto L_0040CB14;
    case 67u: goto L_0040CB30;
    case 68u: goto L_0040CB5C;
    case 69u: goto L_0040CB7C;
    case 70u: goto L_0040CB94;
    case 71u: goto L_0040CBA8;
    case 72u: goto L_0040CBC4;
    case 73u: goto L_0040CBE0;
    case 74u: goto L_0040CBF4;
    case 75u: goto L_0040CC38;
    case 76u: goto L_0040CC3C;
    case 77u: goto L_0040CC70;
    case 78u: goto L_0040CC9C;
    case 79u: goto L_0040CCFC;
    case 80u: goto L_0040CD00;
    case 81u: goto L_0040CD34;
    case 82u: goto L_0040CD60;
    case 83u: goto L_0040CDE8;
    case 84u: goto L_0040CDF4;
    case 85u: goto L_0040CE48;
    case 86u: goto L_0040CE5C;
    case 87u: goto L_0040CEEC;
    case 88u: goto L_0040CEF8;
    case 89u: goto L_0040CF18;
    case 90u: goto L_0040CF2C;
    case 91u: goto L_0040CF94;
    case 92u: goto L_0040CFA0;
    case 93u: goto L_0040D018;
    case 94u: goto L_0040D02C;
    case 95u: goto L_0040D0B8;
    case 96u: goto L_0040D120;
    case 97u: goto L_0040D194;
    case 98u: goto L_0040D1C0;
    case 99u: goto L_0040D25C;
    case 100u: goto L_0040D28C;
    case 101u: goto L_0040D2F4;
    case 102u: goto L_0040D314;
    case 103u: goto L_0040D370;
    case 104u: goto L_0040D39C;
    case 105u: goto L_0040D460;
    case 106u: goto L_0040D48C;
    case 107u: goto L_0040D4C0;
    case 108u: goto L_0040D4D4;
    case 109u: goto L_0040D4E4;
    case 110u: goto L_0040D500;
    case 111u: goto L_0040D544;
    case 112u: goto L_0040D550;
    case 113u: goto L_0040D594;
    case 114u: goto L_0040D5C0;
    case 115u: goto L_0040D604;
    case 116u: goto L_0040D61C;
    case 117u: goto L_0040D628;
    case 118u: goto L_0040D638;
    case 119u: goto L_0040D640;
    case 120u: goto L_0040D650;
    case 121u: goto L_0040D658;
    case 122u: goto L_0040D670;
    case 123u: goto L_0040D680;
    case 124u: goto L_0040D69C;
    case 125u: goto L_0040D6B0;
    case 126u: goto L_0040D6E0;
    case 127u: goto L_0040D708;
    case 128u: goto L_0040D71C;
    case 129u: goto L_0040D734;
    case 130u: goto L_0040D748;
    case 131u: goto L_0040D754;
    case 132u: goto L_0040D764;
    case 133u: goto L_0040D7AC;
    case 134u: goto L_0040D7D0;
    case 135u: goto L_0040D7F4;
    case 136u: goto L_0040D80C;
    case 137u: goto L_0040D81C;
    case 138u: goto L_0040D82C;
    case 139u: goto L_0040D838;
    case 140u: goto L_0040D848;
    case 141u: goto L_0040D850;
    case 142u: goto L_0040D868;
    case 143u: goto L_0040D878;
    case 144u: goto L_0040D894;
    case 145u: goto L_0040D8A8;
    case 146u: goto L_0040D8D8;
    case 147u: goto L_0040D900;
    case 148u: goto L_0040D914;
    case 149u: goto L_0040D92C;
    case 150u: goto L_0040D940;
    case 151u: goto L_0040D94C;
    case 152u: goto L_0040D95C;
    case 153u: goto L_0040D978;
    case 154u: goto L_0040D9A0;
    case 155u: goto L_0040D9C4;
    case 156u: goto L_0040D9DC;
    case 157u: goto L_0040D9EC;
    case 158u: goto L_0040D9F8;
    case 159u: goto L_0040DA08;
    case 160u: goto L_0040DA1C;
    case 161u: goto L_0040DA2C;
    case 162u: goto L_0040DA34;
    case 163u: goto L_0040DA4C;
    case 164u: goto L_0040DA5C;
    case 165u: goto L_0040DA78;
    case 166u: goto L_0040DA8C;
    case 167u: goto L_0040DABC;
    case 168u: goto L_0040DAE4;
    case 169u: goto L_0040DAF8;
    case 170u: goto L_0040DB10;
    case 171u: goto L_0040DB24;
    case 172u: goto L_0040DB34;
    case 173u: goto L_0040DB44;
    case 174u: goto L_0040DB60;
    case 175u: goto L_0040DB90;
    case 176u: goto L_0040DBB4;
    case 177u: goto L_0040DBEC;
    case 178u: goto L_0040DBF4;
    case 179u: goto L_0040DC00;
    case 180u: goto L_0040DC10;
    case 181u: goto L_0040DC18;
    case 182u: goto L_0040DC2C;
    case 183u: goto L_0040DC40;
    case 184u: goto L_0040DC6C;
    case 185u: goto L_0040DC80;
    case 186u: goto L_0040DC94;
    case 187u: goto L_0040DC9C;
    case 188u: goto L_0040DCB0;
    case 189u: goto L_0040DCC4;
    case 190u: goto L_0040DCCC;
    case 191u: goto L_0040DCE0;
    case 192u: goto L_0040DCF4;
    case 193u: goto L_0040DCFC;
    case 194u: goto L_0040DD10;
    case 195u: goto L_0040DD24;
    case 196u: goto L_0040DD2C;
    case 197u: goto L_0040DD40;
    case 198u: goto L_0040DD54;
    case 199u: goto L_0040DD5C;
    case 200u: goto L_0040DD70;
    case 201u: goto L_0040DD84;
    case 202u: goto L_0040DD90;
    case 203u: goto L_0040DD98;
    case 204u: goto L_0040DDA8;
    case 205u: goto L_0040DDB4;
    case 206u: goto L_0040DDC4;
    case 207u: goto L_0040DDD4;
    case 208u: goto L_0040DDE4;
    case 209u: goto L_0040DDF4;
    case 210u: goto L_0040DE00;
    case 211u: goto L_0040DE10;
    case 212u: goto L_0040DE1C;
    case 213u: goto L_0040DE2C;
    case 214u: goto L_0040DE34;
    case 215u: goto L_0040DE4C;
    case 216u: goto L_0040DE5C;
    case 217u: goto L_0040DE78;
    case 218u: goto L_0040DE8C;
    case 219u: goto L_0040DEBC;
    case 220u: goto L_0040DEE4;
    case 221u: goto L_0040DEF8;
    case 222u: goto L_0040DF10;
    case 223u: goto L_0040DF24;
    case 224u: goto L_0040DF38;
    case 225u: goto L_0040DF48;
    case 226u: goto L_0040DF50;
    case 227u: goto L_0040DF58;
    case 228u: goto L_0040DF64;
    case 229u: goto L_0040DF6C;
    case 230u: goto L_0040DF80;
    case 231u: goto L_0040DF8C;
    case 232u: goto L_0040DF94;
    case 233u: goto L_0040DFAC;
    case 234u: goto L_0040DFBC;
    case 235u: goto L_0040DFD0;
    case 236u: goto L_0040DFF8;
    case 237u: goto L_0040E028;
    case 238u: goto L_0040E03C;
    case 239u: goto L_0040E050;
    case 240u: goto L_0040E068;
    case 241u: goto L_0040E0A8;
    case 242u: goto L_0040E0B0;
    case 243u: goto L_0040E0CC;
    case 244u: goto L_0040E0D4;
    case 245u: goto L_0040E0E4;
    case 246u: goto L_0040E0F0;
    case 247u: goto L_0040E10C;
    case 248u: goto L_0040E130;
    case 249u: goto L_0040E14C;
    case 250u: goto L_0040E160;
    case 251u: goto L_0040E18C;
    case 252u: goto L_0040E194;
    case 253u: goto L_0040E1A0;
    case 254u: goto L_0040E1B0;
    case 255u: goto L_0040E1B8;
    case 256u: goto L_0040E1CC;
    case 257u: goto L_0040E1E0;
    case 258u: goto L_0040E1F4;
    case 259u: goto L_0040E220;
    case 260u: goto L_0040E234;
    case 261u: goto L_0040E248;
    case 262u: goto L_0040E250;
    case 263u: goto L_0040E264;
    case 264u: goto L_0040E278;
    case 265u: goto L_0040E280;
    case 266u: goto L_0040E294;
    case 267u: goto L_0040E2A8;
    case 268u: goto L_0040E2B0;
    case 269u: goto L_0040E2C4;
    case 270u: goto L_0040E2D8;
    case 271u: goto L_0040E2E0;
    case 272u: goto L_0040E2F4;
    case 273u: goto L_0040E308;
    case 274u: goto L_0040E310;
    case 275u: goto L_0040E324;
    case 276u: goto L_0040E338;
    case 277u: goto L_0040E340;
    case 278u: goto L_0040E348;
    case 279u: goto L_0040E358;
    case 280u: goto L_0040E368;
    case 281u: goto L_0040E390;
    case 282u: goto L_0040E40C;
    case 283u: goto L_0040E46C;
    case 284u: goto L_0040E474;
    case 285u: goto L_0040E48C;
    case 286u: goto L_0040E4A0;
    case 287u: goto L_0040E4D8;
    case 288u: goto L_0040E4F4;
    case 289u: goto L_0040E4FC;
    case 290u: goto L_0040E52C;
    case 291u: goto L_0040E54C;
    case 292u: goto L_0040E564;
    case 293u: goto L_0040E578;
    case 294u: goto L_0040E594;
    case 295u: goto L_0040E5B0;
    case 296u: goto L_0040E5C4;
    case 297u: goto L_0040E5EC;
    case 298u: goto L_0040E608;
    case 299u: goto L_0040E61C;
    case 300u: goto L_0040E674;
    case 301u: goto L_0040E680;
    case 302u: goto L_0040E6CC;
    case 303u: goto L_0040E71C;
    case 304u: goto L_0040E778;
    case 305u: goto L_0040E7A4;
    case 306u: goto L_0040E7F4;
    case 307u: goto L_0040E830;
    case 308u: goto L_0040E884;
    case 309u: goto L_0040E8D4;
    case 310u: goto L_0040E8E4;
    case 311u: goto L_0040E95C;
    case 312u: goto L_0040E9C0;
    case 313u: goto L_0040E9EC;
    case 314u: goto L_0040EA44;
    case 315u: goto L_0040EA7C;
    case 316u: goto L_0040EA9C;
    case 317u: goto L_0040EAC4;
    case 318u: goto L_0040EAD4;
    case 319u: goto L_0040EB5C;
    case 320u: goto L_0040EBC0;
    case 321u: goto L_0040EBEC;
    case 322u: goto L_0040EC8C;
    case 323u: goto L_0040ECB8;
    case 324u: goto L_0040ED58;
    case 325u: goto L_0040ED84;
    case 326u: goto L_0040EE24;
    case 327u: goto L_0040EE50;
    case 328u: goto L_0040EEF0;
    case 329u: goto L_0040EF1C;
    case 330u: goto L_0040EFBC;
    case 331u: goto L_0040EFE8;
    case 332u: goto L_0040F02C;
    case 333u: goto L_0040F05C;
    case 334u: goto L_0040F07C;
    case 335u: goto L_0040F0D0;
    case 336u: goto L_0040F124;
    case 337u: goto L_0040F150;
    case 338u: goto L_0040F194;
    case 339u: goto L_0040F1C0;
    case 340u: goto L_0040F1D0;
    case 341u: goto L_0040F204;
    case 342u: goto L_0040F230;
    case 343u: goto L_0040F2A0;
    case 344u: goto L_0040F300;
    case 345u: goto L_0040F344;
    case 346u: goto L_0040F384;
    case 347u: goto L_0040F3B8;
    case 348u: goto L_0040F3E0;
    case 349u: goto L_0040F498;
    case 350u: goto L_0040F548;
    case 351u: goto L_0040F5D8;
    case 352u: goto L_0040F600;
    case 353u: goto L_0040F618;
    case 354u: goto L_0040F638;
    case 355u: goto L_0040F650;
    case 356u: goto L_0040F664;
    case 357u: goto L_0040F680;
    case 358u: goto L_0040F69C;
    case 359u: goto L_0040F6B0;
    case 360u: goto L_0040F6D4;
    case 361u: goto L_0040F740;
    case 362u: goto L_0040F7A8;
    case 363u: goto L_0040F838;
    case 364u: goto L_0040F8A4;
    case 365u: goto L_0040F90C;
    case 366u: goto L_0040F968;
    case 367u: goto L_0040F9A0;
    case 368u: goto L_0040F9D4;
    case 369u: goto L_0040F9F4;
    case 370u: goto L_0040F9F8;
    case 371u: goto L_0040FA14;
    case 372u: goto L_0040FA28;
    case 373u: goto L_0040FA84;
    case 374u: goto L_0040FAB8;
    case 375u: goto L_0040FAE8;
    case 376u: goto L_0040FB14;
    case 377u: goto L_0040FB48;
    case 378u: goto L_0040FB78;
    case 379u: goto L_0040FBBC;
    case 380u: goto L_0040FBD0;
    case 381u: goto L_0040FC24;
    case 382u: goto L_0040FC30;
    case 383u: goto L_0040FC88;
    case 384u: goto L_0040FD3C;
    case 385u: goto L_0040FDEC;
    case 386u: goto L_0040FEB4;
    case 387u: goto L_0040FF08;
    case 388u: goto L_0040FF28;
    case 389u: goto L_0040FFD8;
    default: bad_entry(c, 0x0040C000u); return;
    }
L_0040C000:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040BFF8u | kUnwind; return; } [[clang::musttail]] return unit_0082(c, 391u, depth); } }
L_0040C018:
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040C034; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C030u); set32(c.r[5], c.r[5].w[0] - 18272u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x0040C030u) [[unlikely]] return; }
L_0040C030:
    st32((c.r[20].w[0] + 16u), 0u);
    c.budget -= 1;
L_0040C034:
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040C04C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C048u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0040C048u) [[unlikely]] return; }
L_0040C048:
    st32((c.r[20].w[0] + 12u), 0u);
    c.budget -= 1;
L_0040C04C:
    st32((c.r[20].w[0] + 24u), 0u);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0040C098; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040C064:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0040C0BC; } }
    c.budget -= 1;
L_0040C080:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C064u | kUnwind; return; } goto L_0040C064; } }
    c.budget -= 1;
L_0040C098:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040C100; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C0B0u); set32(c.r[5], c.r[5].w[0] - 29104u);  if (depth < kMaxDepth) unit_0002(c, 175u, depth + 1u); else { c.pc = 0x0020B2D0u; return; } if (c.pc != 0x0040C0B0u) [[unlikely]] return; }
L_0040C0B0:
    st32((c.r[20].w[0] + 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040C100; } }
L_0040C0BC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040C0C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C0D8u); set32(c.r[4], c.r[4].w[0] + 3856u);  if (depth < kMaxDepth) unit_0041(c, 39u, depth + 1u); else { c.pc = 0x00304850u; return; } if (c.pc != 0x0040C0D8u) [[unlikely]] return; }
L_0040C0D8:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C0C0u | kUnwind; return; } goto L_0040C0C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C080u | kUnwind; return; } goto L_0040C080; } }
    c.budget -= 1;
L_0040C100:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0040C120:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.r[3].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0040C14C; } }
L_0040C144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0040C190; } }
L_0040C14C:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C174u); set32(c.r[4], c.r[4].w[0] + 3856u);  if (depth < kMaxDepth) unit_0041(c, 44u, depth + 1u); else { c.pc = 0x003048E0u; return; } if (c.pc != 0x0040C174u) [[unlikely]] return; }
L_0040C174:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C14Cu | kUnwind; return; } goto L_0040C14C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C144u | kUnwind; return; } goto L_0040C144; } }
L_0040C190:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0040C1A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040C218; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_0040C1DC:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0040C204; } }
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0040C394; } }
L_0040C204:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C1DCu | kUnwind; return; } goto L_0040C1DC; } }
    c.budget -= 1;
L_0040C218:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0040C274; } }
L_0040C220:
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[1].d[0] = 0ll < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0040C2A4; } }
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 3;
L_0040C23C:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C23Cu | kUnwind; return; } goto L_0040C23C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_0040C2A8; } }
L_0040C274:
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C280u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0040C280u) [[unlikely]] return; }
L_0040C280:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 15440u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C29Cu); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x0040C29Cu) [[unlikely]] return; }
L_0040C29C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C220u | kUnwind; return; } goto L_0040C220; } }
L_0040C2A4:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0040C2A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + 1u);  if (t) { goto L_0040C2C4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040C2C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C2C0u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0040C2C0u) [[unlikely]] return; }
L_0040C2C0:
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 1;
L_0040C2C4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0040C320; } }
L_0040C2CC:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[1].d[0] = 0ll < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0040C350; } }
    c.r[6].d[0] = c.r[19].d[0] << 32;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 3;
L_0040C2E8:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C2E8u | kUnwind; return; } goto L_0040C2E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_0040C354; } }
L_0040C320:
    set32(c.r[2], c.r[16].w[0] << 3);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C32Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x0040C32Cu) [[unlikely]] return; }
L_0040C32C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 15440u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C348u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0002(c, 189u, depth + 1u); else { c.pc = 0x0020B520u; return; } if (c.pc != 0x0040C348u) [[unlikely]] return; }
L_0040C348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C2CCu | kUnwind; return; } goto L_0040C2CC; } }
L_0040C350:
    set32(c.r[6], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0040C354:
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[19].d[0] << 32;
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[6].w[0] + 4u), c.r[4].w[0]);  if (t) { goto L_0040C388; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040C388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C388u); set32(c.r[4], c.r[3].w[0] - 16u);  if (depth < kMaxDepth) unit_0002(c, 165u, depth + 1u); else { c.pc = 0x0020B170u; return; } if (c.pc != 0x0040C388u) [[unlikely]] return; }
L_0040C388:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_0040C394:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0040C3B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0040C3C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[4] = ld32((c.r[6].w[0] + 4u));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[6] = ld32((c.r[6].w[0] + 8u));
    c.f[5] = ld32((c.r[5].w[0] + 8u));
    c.f[1] = 0u;
    c.f[0] = fp::ee::sub(c.fcr31, c.f[2], c.f[0]);
    c.f[3] = fp::ee::sub(c.fcr31, c.f[4], c.f[3]);
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.f[5] = fp::ee::sub(c.fcr31, c.f[6], c.f[5]);
    c.facc = fp::ee::mul(c.fcr31, c.f[3], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    st32((c.r[29].w[0] + 4u), c.f[3]);
    c.facc = fp::ee::madd(c.fcr31, c.facc, c.f[0], c.f[0]);
    st32((c.r[29].w[0] + 8u), c.f[5]);
    st32((c.r[29].w[0]), c.f[0]);
    c.budget -= 21;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[3] = fp::ee::madd(c.fcr31, c.facc, c.f[5], c.f[5]);  if (t) { goto L_0040C464; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0040C464; } }
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0040C43C; } }
    st32((c.r[4].w[0]), c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0040C470; } }
L_0040C43C:
    c.f[1] = fp::ee::sub(c.fcr31, c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::ee::sub(c.fcr31, c.f[3], c.f[2]);
    c.f[1] = fp::ee::div(c.fcr31, c.f[0], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::ee::sub(c.fcr31, c.f[0], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 8;
L_0040C45C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0040C470; } }
L_0040C464:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C45Cu | kUnwind; return; } goto L_0040C45C; } }
L_0040C470:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0040C480:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040C6BC; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040C6C8; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 537u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040C6D0; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 538u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040C738; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 540u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040C784; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 536u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040C590; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040C790; } }
L_0040C4EC:
    set32(c.r[6], c.r[17].w[0] + 48u);
    st8((c.r[17].w[0] + 536u), static_cast<std::uint8_t>(0u));
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
L_0040C4FC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[2].d[0] = c.r[4].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0040C51C; } }
    c.r[1].d[0] = c.r[4].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040C51C; } }
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0040C51C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0040C530; } }
    set32(c.r[2], c.r[4].w[0] - 32u);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 3;
L_0040C530:
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C4FCu | kUnwind; return; } goto L_0040C4FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 2084u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[16].w[0] + 2080u);  if (t) { goto L_0040C590; } }
L_0040C55C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C568u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x0040C568u) [[unlikely]] return; }
L_0040C568:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040C57C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28712u), c.r[2].w[0]);  if (t) { goto L_0040C590; } }
L_0040C57C:
    set32(c.r[16], c.r[16].w[0] + 8u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C55Cu | kUnwind; return; } goto L_0040C55C; } }
L_0040C590:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 541u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040C798; } }
    set32(c.r[4], c.r[17].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C5A8u); st8((c.r[17].w[0] + 541u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0040C5A8u) [[unlikely]] return; }
L_0040C5A8:
    set32(c.r[4], ld32((c.r[28].w[0] - 28724u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[6].d[0] = ld8((c.r[17].w[0] + 40u));
    c.f[12] = ld32((c.r[17].w[0] + 28u));
    set32(c.r[7], ld32((c.r[17].w[0] + 672u)));
    c.f[13] = ld32((c.r[17].w[0] + 460u));
    set32(c.r[8], ld32((c.r[17].w[0] + 44u)));
    c.f[14] = ld32((c.r[17].w[0] + 472u));
    c.r[9].d[0] = ld8((c.r[17].w[0] + 7u));
    c.f[15] = ld32((c.r[17].w[0] + 468u));
    c.f[16] = ld32((c.r[17].w[0] + 476u));
    set32(c.r[2], c.r[2].w[0] + 29328u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[5], c.r[17].w[0] + 148u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C5F8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0086(c, 56u, depth + 1u); else { c.pc = 0x00418D50u; return; } if (c.pc != 0x0040C5F8u) [[unlikely]] return; }
L_0040C5F8:
    set32(c.r[6], ld32((c.r[28].w[0] - 28724u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].d[0] = ld16((c.r[28].w[0] - 29006u));
    set32(c.r[4], c.r[4].w[0] + 29328u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28712u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 29004u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040C674; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C650u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040C650u) [[unlikely]] return; }
L_0040C650:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040C664; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 3;
L_0040C664:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0040C694; } }
L_0040C674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C67Cu); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040C67Cu) [[unlikely]] return; }
L_0040C67C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040C68C; } }
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 2;
L_0040C68C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0040C694:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 28724u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[28].w[0] - 28724u), c.r[2].w[0]);
    c.budget -= 8;
L_0040C6B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0040C7DC; } }
L_0040C6BC:
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0040C7DC; } }
L_0040C6C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0040C7DC; } }
L_0040C6D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[17].w[0] + 248u);
    set32(c.r[4], c.r[4].w[0] - 27600u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C6E4u); st8((c.r[17].w[0] + 537u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0040C6E4u) [[unlikely]] return; }
L_0040C6E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040C720; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30128u)));
    st32((c.r[28].w[0] - 30116u), 0u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[28].w[0] - 30120u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0040C708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C704u);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0040C704u) [[unlikely]] return; }
L_0040C704:
    st32((c.r[28].w[0] - 30128u), 0u);
    c.budget -= 1;
L_0040C708:
    set32(c.r[4], ld32((c.r[28].w[0] - 30124u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040C720; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C71Cu);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0040C71Cu) [[unlikely]] return; }
L_0040C71C:
    st32((c.r[28].w[0] - 30124u), 0u);
    c.budget -= 1;
L_0040C720:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[17].w[0] + 248u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C730u); set32(c.r[4], c.r[4].w[0] - 27600u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040C730u) [[unlikely]] return; }
L_0040C730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0040C7DC; } }
L_0040C738:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[17].w[0] + 348u);
    set32(c.r[4], c.r[4].w[0] - 27488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C74Cu); st8((c.r[17].w[0] + 538u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0040C74Cu) [[unlikely]] return; }
L_0040C74C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040C76C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[28].w[0] - 30092u), 0u);  if (t) { goto L_0040C76C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C768u);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0040C768u) [[unlikely]] return; }
L_0040C768:
    st32((c.r[28].w[0] - 30100u), 0u);
    c.budget -= 1;
L_0040C76C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[17].w[0] + 348u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C77Cu); set32(c.r[4], c.r[4].w[0] - 27488u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040C77Cu) [[unlikely]] return; }
L_0040C77C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0040C7DC; } }
L_0040C784:
    st8((c.r[17].w[0] + 540u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0040C7DC; } }
L_0040C790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C4ECu | kUnwind; return; } goto L_0040C4EC; } }
L_0040C798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C7A0u); set32(c.r[4], c.r[17].w[0] + 148u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0040C7A0u) [[unlikely]] return; }
L_0040C7A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 28724u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[6].d[0] = ld8((c.r[17].w[0] + 7u));
    set32(c.r[2], c.r[2].w[0] + 29328u);
    set32(c.r[5], c.r[17].w[0] + 148u);
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C7D4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0086(c, 48u, depth + 1u); else { c.pc = 0x00418BF0u; return; } if (c.pc != 0x0040C7D4u) [[unlikely]] return; }
L_0040C7D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C6B4u | kUnwind; return; } goto L_0040C6B4; } }
L_0040C7DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040C800:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040CB3C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 537u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040CB48; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 538u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040CBB0; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 536u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040CBFC; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040CBFC; } }
L_0040C864:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 536u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040C960; } }
    set32(c.r[2], 0u - 1u);
    set32(c.r[6], c.r[18].w[0] + 48u);
    st8((c.r[28].w[0] - 31536u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 28520u), c.r[2].w[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st8((c.r[18].w[0] + 536u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[28].w[0] - 28524u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_0040C894:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.r[2].d[0] = c.r[4].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0040C8B4; } }
    c.r[1].d[0] = c.r[4].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040C8B4; } }
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0040C8B4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0040C8C8; } }
    set32(c.r[2], c.r[4].w[0] - 32u);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 3;
L_0040C8C8:
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C894u | kUnwind; return; } goto L_0040C894; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21268u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[19].w[0] + 21264u);  if (t) { goto L_0040CF94; } }
L_0040C8F4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0040C958; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22404u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[16], c.r[16].w[0] + 22400u);  if (t) { goto L_0040C958; } }
L_0040C914:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C920u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x0040C920u) [[unlikely]] return; }
L_0040C920:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040C940; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 28524u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[28].w[0] - 28528u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28520u), c.r[3].w[0]);  if (t) { goto L_0040C958; } }
L_0040C940:
    set32(c.r[16], c.r[16].w[0] + 8u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C914u | kUnwind; return; } goto L_0040C914; } }
    c.budget -= 1;
L_0040C958:
    set32(c.r[2], ld32((c.r[28].w[0] - 28520u)));
    st32((c.r[28].w[0] - 31532u), c.r[2].w[0]);
    c.budget -= 2;
L_0040C960:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 540u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040D00C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 556u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040CAAC; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040C990; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0040CB34; } }
L_0040C990:
    set32(c.r[16], ld32((c.r[28].w[0] - 28616u)));
    c.r[20].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0040D018; } }
L_0040C9B0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_0040CA28; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28612u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040C9E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C9CCu); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040C9CCu) [[unlikely]] return; }
L_0040C9CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040D070; } }
L_0040C9D4:
    set32(c.r[3], ld32((c.r[28].w[0] - 28612u)));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28612u), c.r[2].w[0]);  if (t) { goto L_0040C9FC; } }
L_0040C9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C9ECu); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040C9ECu) [[unlikely]] return; }
L_0040C9EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040D08C; } }
L_0040C9F4:
    st32((c.r[28].w[0] - 28616u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 28612u), c.r[2].w[0]);
    c.budget -= 2;
L_0040C9FC:
    set32(c.r[16], ld32((c.r[28].w[0] - 28612u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CA08u); set32(c.r[4], c.r[18].w[0] + 248u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0040CA08u) [[unlikely]] return; }
L_0040CA08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CA10u); set32(c.r[4], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0002(c, 154u, depth + 1u); else { c.pc = 0x0020AF90u; return; } if (c.pc != 0x0040CA10u) [[unlikely]] return; }
L_0040CA10:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CA20u); set32(c.r[5], c.r[18].w[0] + 248u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040CA20u) [[unlikely]] return; }
L_0040CA20:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[20].w[0]));
    st8((c.r[18].w[0] + 552u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.budget -= 2;
L_0040CA28:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0040CA38; } }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040CA38:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CA48; } }
    c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0040CA48:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 541u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D254; } }
    st8((c.r[18].w[0] + 541u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 28728u)));
    set32(c.r[2], c.r[2].w[0] + 30768u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D0A4; } }
L_0040CA80:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CA90u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0040CA90u) [[unlikely]] return; }
L_0040CA90:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CA80u | kUnwind; return; } goto L_0040CA80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_0040D0A8; } }
L_0040CAAC:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 541u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D458; } }
    set32(c.r[4], c.r[18].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CAC4u); st8((c.r[18].w[0] + 541u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0040CAC4u) [[unlikely]] return; }
L_0040CAC4:
    set32(c.r[6], ld32((c.r[28].w[0] - 28720u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[4].w[0] - 10128u);
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 5u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D294; } }
L_0040CB04:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CB14u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0040CB14u) [[unlikely]] return; }
L_0040CB14:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CB04u | kUnwind; return; } goto L_0040CB04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 28720u)));  if (t) { goto L_0040D298; } }
L_0040CB30:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0040CB34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_0040D498; } }
L_0040CB3C:
    st32((c.r[18].w[0] + 16u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0040D494; } }
L_0040CB48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[18].w[0] + 248u);
    set32(c.r[4], c.r[4].w[0] - 27600u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CB5Cu); st8((c.r[18].w[0] + 537u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0040CB5Cu) [[unlikely]] return; }
L_0040CB5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CB98; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30128u)));
    st32((c.r[28].w[0] - 30116u), 0u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[28].w[0] - 30120u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0040CB80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CB7Cu);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0040CB7Cu) [[unlikely]] return; }
L_0040CB7C:
    st32((c.r[28].w[0] - 30128u), 0u);
    c.budget -= 1;
L_0040CB80:
    set32(c.r[4], ld32((c.r[28].w[0] - 30124u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040CB98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CB94u);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0040CB94u) [[unlikely]] return; }
L_0040CB94:
    st32((c.r[28].w[0] - 30124u), 0u);
    c.budget -= 1;
L_0040CB98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[18].w[0] + 248u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CBA8u); set32(c.r[4], c.r[4].w[0] - 27600u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040CBA8u) [[unlikely]] return; }
L_0040CBA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0040D494; } }
L_0040CBB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[18].w[0] + 348u);
    set32(c.r[4], c.r[4].w[0] - 27488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CBC4u); st8((c.r[18].w[0] + 538u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0040CBC4u) [[unlikely]] return; }
L_0040CBC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CBE4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[28].w[0] - 30092u), 0u);  if (t) { goto L_0040CBE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CBE0u);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0040CBE0u) [[unlikely]] return; }
L_0040CBE0:
    st32((c.r[28].w[0] - 30100u), 0u);
    c.budget -= 1;
L_0040CBE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[18].w[0] + 348u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CBF4u); set32(c.r[4], c.r[4].w[0] - 27488u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040CBF4u) [[unlikely]] return; }
L_0040CBF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0040D494; } }
L_0040CBFC:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28528u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CDA4; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 31536u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040CDA4; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28532u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040CCE4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28720u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[22], c.r[2].w[0] - 1u);  if (t) { goto L_0040CDA4; } }
    set32(c.r[16], c.r[2].w[0] - 2u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0040CDC0; } }
L_0040CC38:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 28990u));
    c.budget -= 1;
L_0040CC3C:
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[28].w[0] - 31532u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 28988u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CC94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CC70u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040CC70u) [[unlikely]] return; }
L_0040CC70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CC84; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 3;
L_0040CC84:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0040CCB4; } }
L_0040CC94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CC9Cu); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040CC9Cu) [[unlikely]] return; }
L_0040CC9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CCAC; } }
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 2;
L_0040CCAC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0040CCB4:
    set32(c.r[2], c.r[22].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[3], c.r[3].w[0] - 10128u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0040CDA4; } }
L_0040CCE4:
    set32(c.r[2], ld32((c.r[28].w[0] - 28728u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[21], c.r[2].w[0] - 1u);  if (t) { goto L_0040CDA4; } }
    set32(c.r[16], c.r[2].w[0] - 2u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_0040CEC4; } }
L_0040CCFC:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 28998u));
    c.budget -= 1;
L_0040CD00:
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[28].w[0] - 31532u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 28996u)));
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CD58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CD34u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040CD34u) [[unlikely]] return; }
L_0040CD34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CD48; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 3;
L_0040CD48:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0040CD78; } }
L_0040CD58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CD60u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040CD60u) [[unlikely]] return; }
L_0040CD60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CD70; } }
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 2;
L_0040CD70:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0040CD78:
    set32(c.r[2], c.r[21].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[2].w[0] - c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] + 30768u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
L_0040CDA4:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C864u | kUnwind; return; } goto L_0040C864; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 31536u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0040D494; } }
L_0040CDC0:
    set32(c.r[2], c.r[16].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] - 10128u);
    set32(c.r[2], c.r[22].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[21], c.r[2].w[0] << 2);
    set32(c.r[19], c.r[3].w[0] + c.r[21].w[0]);
    c.budget -= 10;
L_0040CDE8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CDF4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 6u, depth + 1u); else { c.pc = 0x00418070u; return; } if (c.pc != 0x0040CDF4u) [[unlikely]] return; }
L_0040CDF4:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040CE78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], 0u - 2u);
    set32(c.r[2], c.r[2].w[0] - 10128u);
    c.r[4].d[0] = 0ull & 1ull;
    set32(c.r[6], c.r[2].w[0] + c.r[21].w[0]);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 5u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 10120u);
    set32(c.r[22], c.r[2].w[0] + c.r[21].w[0]);
    c.r[2].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CE8C; } }
    set32(c.r[20], c.r[19].w[0] + 8u);
    set32(c.r[19], c.r[19].w[0] + 12u);
    c.budget -= 2;
L_0040CE48:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CE5Cu); set32(c.r[4], ld32((c.r[20].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0040CE5Cu) [[unlikely]] return; }
L_0040CE5C:
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CE48u | kUnwind; return; } goto L_0040CE48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CE8C; } }
L_0040CE78:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[20], c.r[20].w[0] - 68u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CDE8u | kUnwind; return; } goto L_0040CDE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[28].w[0] - 28990u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CC3Cu | kUnwind; return; } goto L_0040CC3C; } }
L_0040CE8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], c.r[3].w[0] - 10116u);
    st32((c.r[22].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] - 10122u);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st32((c.r[3].w[0]), 0u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 28720u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28720u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CC38u | kUnwind; return; } goto L_0040CC38; } }
L_0040CEC4:
    set32(c.r[2], c.r[16].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 30768u);
    set32(c.r[2], c.r[21].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[21].w[0]);
    set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[22], c.r[2].w[0] << 3);
    set32(c.r[19], c.r[3].w[0] + c.r[22].w[0]);
    c.budget -= 10;
L_0040CEEC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CEF8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0085(c, 153u, depth + 1u); else { c.pc = 0x00416B70u; return; } if (c.pc != 0x0040CEF8u) [[unlikely]] return; }
L_0040CEF8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040CF48; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CF5C; } }
    set32(c.r[20], c.r[19].w[0] + 4u);
    c.budget -= 1;
L_0040CF18:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CF2Cu); set32(c.r[4], ld32((c.r[19].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0040CF2Cu) [[unlikely]] return; }
L_0040CF2C:
    set32(c.r[2], ld32((c.r[20].w[0])));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CF18u | kUnwind; return; } goto L_0040CF18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CF5C; } }
L_0040CF48:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[20], c.r[20].w[0] - 56u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CEECu | kUnwind; return; } goto L_0040CEEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[28].w[0] - 28998u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CD00u | kUnwind; return; } goto L_0040CD00; } }
L_0040CF5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 30772u);
    set32(c.r[2], c.r[2].w[0] + 30776u);
    st32((c.r[19].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    st32((c.r[3].w[0]), 0u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 28728u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28728u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CCFCu | kUnwind; return; } goto L_0040CCFC; } }
L_0040CF94:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CFA0u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000D(c, 53u, depth + 1u); else { c.pc = 0x00234E60u; return; } if (c.pc != 0x0040CFA0u) [[unlikely]] return; }
L_0040CFA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040CFD8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 28524u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 28528u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0040CFF4; } }
    c.r[1].d[0] = c.r[2].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040CFF4; } }
    st32((c.r[28].w[0] - 28520u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 28532u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C8F4u | kUnwind; return; } goto L_0040C8F4; } }
L_0040CFD8:
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CF94u | kUnwind; return; } goto L_0040CF94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C8F4u | kUnwind; return; } goto L_0040C8F4; } }
L_0040CFF4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 28532u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 15u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28520u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C8F4u | kUnwind; return; } goto L_0040C8F4; } }
L_0040D00C:
    st8((c.r[18].w[0] + 540u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0040D494; } }
L_0040D018:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D02Cu); set32(c.r[5], c.r[18].w[0] + 248u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0040D02Cu) [[unlikely]] return; }
L_0040D02C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040D040; } }
    st8((c.r[18].w[0] + 552u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C9B0u | kUnwind; return; } goto L_0040C9B0; } }
L_0040D040:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], ld32((c.r[2].w[0] + 12u)));
    c.r[2].d[0] = c.r[21].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D018u | kUnwind; return; } goto L_0040D018; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C9B0u | kUnwind; return; } goto L_0040C9B0; } }
L_0040D070:
    set32(c.r[4], ld32((c.r[28].w[0] - 28612u)));
    set32(c.r[3], 0u + 255u);
    st32((c.r[2].w[0]), 0u);
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C9D4u | kUnwind; return; } goto L_0040C9D4; } }
L_0040D08C:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], 0u + 255u);
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C9F4u | kUnwind; return; } goto L_0040C9F4; } }
L_0040D0A4:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0040D0A8:
    set32(c.r[4], c.r[18].w[0] + 148u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D0B8u); st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0040D0B8u) [[unlikely]] return; }
L_0040D0B8:
    c.f[0] = ld32((c.r[18].w[0] + 460u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 30768u);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 148u);
    st32((c.r[29].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 476u));
    st32((c.r[29].w[0] + 8u), c.f[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28728u)));
    c.f[12] = ld32((c.r[18].w[0] + 20u));
    c.r[6].d[0] = ld8((c.r[18].w[0] + 40u));
    c.f[13] = ld32((c.r[18].w[0] + 24u));
    c.f[14] = ld32((c.r[18].w[0] + 36u));
    set32(c.r[7], ld32((c.r[18].w[0] + 672u)));
    c.f[15] = ld32((c.r[18].w[0] + 28u));
    c.r[8].d[0] = ld8((c.r[18].w[0] + 552u));
    c.f[16] = ld32((c.r[18].w[0] + 32u));
    set32(c.r[10], ld32((c.r[18].w[0] + 44u)));
    c.f[17] = ld32((c.r[18].w[0] + 448u));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.f[18] = ld32((c.r[18].w[0] + 452u));
    c.f[19] = ld32((c.r[18].w[0] + 456u));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D120u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0085(c, 161u, depth + 1u); else { c.pc = 0x00416DC0u; return; } if (c.pc != 0x0040D120u) [[unlikely]] return; }
L_0040D120:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28524u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D244; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 30528u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], ld32((c.r[28].w[0] - 28728u)));
    set32(c.r[4], c.r[4].w[0] + 30768u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 28210u));
    st32((c.r[3].w[0] + 30528u), c.r[6].w[0]);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], ld32((c.r[2].w[0] + 28212u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 24;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D1B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D194u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040D194u) [[unlikely]] return; }
L_0040D194:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D1A8; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 3;
L_0040D1A8:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0040D1D8; } }
L_0040D1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D1C0u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040D1C0u) [[unlikely]] return; }
L_0040D1C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D1D0; } }
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 2;
L_0040D1D0:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0040D1D8:
    set32(c.r[9], ld32((c.r[19].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[8], ld32((c.r[28].w[0] - 28520u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[6], c.r[6].w[0] + 28224u);
    set32(c.r[5], c.r[5].w[0] + 28232u);
    set32(c.r[4], c.r[4].w[0] + 28228u);
    set32(c.r[3], c.r[3].w[0] + 28236u);
    set32(c.r[7], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[9].w[0]), c.r[16].w[0]);
    c.r[9].d[0] = ld8((c.r[19].w[0] + 8u));
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[9].w[0] + 1u);
    st8((c.r[19].w[0] + 8u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[2].w[0] + 30528u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 556u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 27;
L_0040D244:
    set32(c.r[2], ld32((c.r[28].w[0] - 28728u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28728u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CB30u | kUnwind; return; } goto L_0040CB30; } }
L_0040D254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D25Cu); set32(c.r[4], c.r[18].w[0] + 148u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0040D25Cu) [[unlikely]] return; }
L_0040D25C:
    set32(c.r[3], ld32((c.r[28].w[0] - 28728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[7].d[0] = ld8((c.r[18].w[0] + 552u));
    set32(c.r[2], c.r[2].w[0] + 30768u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 148u);
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D28Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0085(c, 156u, depth + 1u); else { c.pc = 0x00416D00u; return; } if (c.pc != 0x0040D28Cu) [[unlikely]] return; }
L_0040D28C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CB30u | kUnwind; return; } goto L_0040CB30; } }
L_0040D294:
    set32(c.r[4], ld32((c.r[28].w[0] - 28720u)));
    c.budget -= 1;
L_0040D298:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[2], c.r[2].w[0] - 10128u);
    st32((c.r[16].w[0] + 12u), 0u);
    set32(c.r[5], c.r[18].w[0] + 148u);
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.f[12] = ld32((c.r[18].w[0] + 20u));
    c.r[6].d[0] = ld8((c.r[18].w[0] + 40u));
    c.f[13] = ld32((c.r[18].w[0] + 24u));
    set32(c.r[7], ld32((c.r[18].w[0] + 672u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[8], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[9].d[0] = ld8((c.r[18].w[0] + 7u));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[14] = ld32((c.r[18].w[0] + 28u));
    c.f[15] = ld32((c.r[18].w[0] + 32u));
    c.f[16] = ld32((c.r[18].w[0] + 476u));
    c.f[17] = ld32((c.r[18].w[0] + 460u));
    c.f[18] = ld32((c.r[18].w[0] + 472u));
    c.f[19] = ld32((c.r[18].w[0] + 468u));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D2F4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x00418380u; return; } if (c.pc != 0x0040D2F4u) [[unlikely]] return; }
L_0040D2F4:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28524u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D420; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 556u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 520u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D430; } }
L_0040D314:
    set32(c.r[6], ld32((c.r[28].w[0] - 28720u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 28218u));
    set32(c.r[4], c.r[4].w[0] - 10128u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30532u)));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], ld32((c.r[2].w[0] + 28220u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D394; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D370u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040D370u) [[unlikely]] return; }
L_0040D370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D384; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 3;
L_0040D384:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0040D3B4; } }
L_0040D394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D39Cu); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040D39Cu) [[unlikely]] return; }
L_0040D39C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D3AC; } }
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 2;
L_0040D3AC:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0040D3B4:
    set32(c.r[9], ld32((c.r[19].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[8], ld32((c.r[28].w[0] - 28520u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[6], c.r[6].w[0] + 28224u);
    set32(c.r[5], c.r[5].w[0] + 28232u);
    set32(c.r[4], c.r[4].w[0] + 28228u);
    set32(c.r[3], c.r[3].w[0] + 28236u);
    set32(c.r[7], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[9].w[0]), c.r[16].w[0]);
    c.r[9].d[0] = ld8((c.r[19].w[0] + 8u));
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[9].w[0] + 1u);
    st8((c.r[19].w[0] + 8u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[2].w[0] + 30532u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 556u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 27;
L_0040D420:
    set32(c.r[2], ld32((c.r[28].w[0] - 28720u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28720u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CB30u | kUnwind; return; } goto L_0040CB30; } }
L_0040D430:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 30532u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 30532u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 556u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 520u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D314u | kUnwind; return; } goto L_0040D314; } }
L_0040D458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D460u); set32(c.r[4], c.r[18].w[0] + 148u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0040D460u) [[unlikely]] return; }
L_0040D460:
    set32(c.r[3], ld32((c.r[28].w[0] - 28720u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[6].d[0] = ld8((c.r[18].w[0] + 7u));
    set32(c.r[2], c.r[2].w[0] - 10128u);
    set32(c.r[5], c.r[18].w[0] + 148u);
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D48Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0086(c, 9u, depth + 1u); else { c.pc = 0x00418220u; return; } if (c.pc != 0x0040D48Cu) [[unlikely]] return; }
L_0040D48C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CB30u | kUnwind; return; } goto L_0040CB30; } }
L_0040D494:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0040D498:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0040D4C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040D4DC; } }
L_0040D4D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0040D4EC; } }
L_0040D4DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D4E4u);  if (depth < kMaxDepth) unit_001D(c, 123u, depth + 1u); else { c.pc = 0x00276FA0u; return; } if (c.pc != 0x0040D4E4u) [[unlikely]] return; }
L_0040D4E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D4D4u | kUnwind; return; } goto L_0040D4D4; } }
L_0040D4EC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0040D500:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040D578; } }
    set32(c.r[16], ld32((c.r[28].w[0] - 28616u)));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0040D578; } }
    c.r[17].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 1;
L_0040D544:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[17].d[0];  if (t) { goto L_0040D580; } }
    c.budget -= 1;
L_0040D550:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], ld32((c.r[3].w[0] + 12u)));
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[16].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D544u | kUnwind; return; } goto L_0040D544; } }
L_0040D578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040D5A0; } }
L_0040D580:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D594u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 122u, depth + 1u); else { c.pc = 0x00276F80u; return; } if (c.pc != 0x0040D594u) [[unlikely]] return; }
L_0040D594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D550u | kUnwind; return; } goto L_0040D550; } }
    c.budget -= 1;
L_0040D5A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0040D5C0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040D780; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 21700u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[16], c.r[16].w[0] + 21696u);  if (t) { goto L_0040D780; } }
    c.r[3].d[0] = c.r[20].d[0] & 255ull;
    c.budget -= 1;
L_0040D604:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0040D76C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D61Cu); set32(c.r[5], c.r[5].w[0] + 30656u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040D61Cu) [[unlikely]] return; }
L_0040D61C:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D628u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x0040D628u) [[unlikely]] return; }
L_0040D628:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D638u); set32(c.r[5], c.r[5].w[0] + 11527u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x0040D638u) [[unlikely]] return; }
L_0040D638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D640u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x0040D640u) [[unlikely]] return; }
L_0040D640:
    set32(c.r[4], c.r[29].w[0] + 236u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D650u); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x0040D650u) [[unlikely]] return; }
L_0040D650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D658u); set32(c.r[4], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x0040D658u) [[unlikely]] return; }
L_0040D658:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D670u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D670u) [[unlikely]] return; }
L_0040D670:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 236u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D680u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x0040D680u) [[unlikely]] return; }
L_0040D680:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0040D73C; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[18], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D69Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 154u, depth + 1u); else { c.pc = 0x0020AF90u; return; } if (c.pc != 0x0040D69Cu) [[unlikely]] return; }
L_0040D69C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D6B0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0040D6B0u) [[unlikely]] return; }
L_0040D6B0:
    set32(c.r[17], c.r[29].w[0] + 116u);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040D710; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D6E0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0040D6E0u) [[unlikely]] return; }
L_0040D6E0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[16].d[0]; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0040D728; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[18].w[0] - c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D708u); set32(c.r[5], c.r[19].w[0] + c.r[16].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D708u) [[unlikely]] return; }
L_0040D708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_0040D72C; } }
L_0040D710:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D71Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0040D71Cu) [[unlikely]] return; }
L_0040D71C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0040D728:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_0040D72C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D734u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x0040D734u) [[unlikely]] return; }
L_0040D734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0040D74C; } }
L_0040D73C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D748u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x0040D748u) [[unlikely]] return; }
L_0040D748:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040D74C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040D788; } }
L_0040D754:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0040D780; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D764u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0040D764u) [[unlikely]] return; }
L_0040D764:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040D780; } }
L_0040D76C:
    set32(c.r[16], c.r[16].w[0] + 8u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D604u | kUnwind; return; } goto L_0040D604; } }
    c.budget -= 1;
L_0040D780:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0040D7B4; } }
L_0040D788:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[6].d[0] = c.r[20].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + 30536u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D7ACu); set32(c.r[5], c.r[5].w[0] - 14336u);  if (depth < kMaxDepth) unit_0084(c, 74u, depth + 1u); else { c.pc = 0x00411100u; return; } if (c.pc != 0x0040D7ACu) [[unlikely]] return; }
L_0040D7AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D754u | kUnwind; return; } goto L_0040D754; } }
L_0040D7B4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0040D7D0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040D7FC; } }
L_0040D7F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0040D984; } }
L_0040D7FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D80Cu); set32(c.r[5], c.r[5].w[0] + 30656u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040D80Cu) [[unlikely]] return; }
L_0040D80C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D81Cu); set32(c.r[5], c.r[5].w[0] + 11532u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x0040D81Cu) [[unlikely]] return; }
L_0040D81C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D82Cu); set32(c.r[5], c.r[5].w[0] + 11527u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x0040D82Cu) [[unlikely]] return; }
L_0040D82C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D838u); st32((c.r[28].w[0] - 28712u), 0u);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x0040D838u) [[unlikely]] return; }
L_0040D838:
    set32(c.r[4], c.r[29].w[0] + 220u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D848u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x0040D848u) [[unlikely]] return; }
L_0040D848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D850u); set32(c.r[4], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x0040D850u) [[unlikely]] return; }
L_0040D850:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D868u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D868u) [[unlikely]] return; }
L_0040D868:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 220u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D878u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x0040D878u) [[unlikely]] return; }
L_0040D878:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0040D934; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[17], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D894u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 154u, depth + 1u); else { c.pc = 0x0020AF90u; return; } if (c.pc != 0x0040D894u) [[unlikely]] return; }
L_0040D894:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D8A8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0040D8A8u) [[unlikely]] return; }
L_0040D8A8:
    set32(c.r[16], c.r[29].w[0] + 100u);
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040D908; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[19], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D8D8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0040D8D8u) [[unlikely]] return; }
L_0040D8D8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[19].d[0]; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0040D920; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[17].w[0] - c.r[19].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D900u); set32(c.r[5], c.r[18].w[0] + c.r[19].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D900u) [[unlikely]] return; }
L_0040D900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_0040D924; } }
L_0040D908:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D914u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0040D914u) [[unlikely]] return; }
L_0040D914:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0040D920:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_0040D924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D92Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x0040D92Cu) [[unlikely]] return; }
L_0040D92C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0040D944; } }
L_0040D934:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D940u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x0040D940u) [[unlikely]] return; }
L_0040D940:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040D944:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040D964; } }
L_0040D94C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0040D980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D95Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0040D95Cu) [[unlikely]] return; }
L_0040D95C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D7F4u | kUnwind; return; } goto L_0040D7F4; } }
L_0040D964:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 15232u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D978u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 74u, depth + 1u); else { c.pc = 0x00411100u; return; } if (c.pc != 0x0040D978u) [[unlikely]] return; }
L_0040D978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D94Cu | kUnwind; return; } goto L_0040D94C; } }
L_0040D980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0040D984:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0040D9A0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040D9CC; } }
L_0040D9C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0040DB6C; } }
L_0040D9CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D9DCu); set32(c.r[5], c.r[5].w[0] + 30656u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040D9DCu) [[unlikely]] return; }
L_0040D9DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D9ECu); set32(c.r[5], c.r[5].w[0] + 28128u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x0040D9ECu) [[unlikely]] return; }
L_0040D9EC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D9F8u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040D9F8u) [[unlikely]] return; }
L_0040D9F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DA08u); set32(c.r[5], c.r[5].w[0] + 11541u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x0040DA08u) [[unlikely]] return; }
L_0040DA08:
    set32(c.r[2], 0u + 255u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    st8((c.r[28].w[0] - 28608u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DA1Cu); st32((c.r[28].w[0] - 28904u), 0u);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x0040DA1Cu) [[unlikely]] return; }
L_0040DA1C:
    set32(c.r[4], c.r[29].w[0] + 332u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DA2Cu); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x0040DA2Cu) [[unlikely]] return; }
L_0040DA2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DA34u); set32(c.r[4], c.r[29].w[0] + 332u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x0040DA34u) [[unlikely]] return; }
L_0040DA34:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DA4Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DA4Cu) [[unlikely]] return; }
L_0040DA4C:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 332u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DA5Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x0040DA5Cu) [[unlikely]] return; }
L_0040DA5C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0040DB18; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[18], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DA78u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 154u, depth + 1u); else { c.pc = 0x0020AF90u; return; } if (c.pc != 0x0040DA78u) [[unlikely]] return; }
L_0040DA78:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DA8Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0040DA8Cu) [[unlikely]] return; }
L_0040DA8C:
    set32(c.r[17], c.r[29].w[0] + 100u);
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[18].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040DAEC; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DABCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0040DABCu) [[unlikely]] return; }
L_0040DABC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[16].d[0]; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0040DB04; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[18].w[0] - c.r[16].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DAE4u); set32(c.r[5], c.r[19].w[0] + c.r[16].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DAE4u) [[unlikely]] return; }
L_0040DAE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_0040DB08; } }
L_0040DAEC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DAF8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0040DAF8u) [[unlikely]] return; }
L_0040DAF8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0040DB04:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_0040DB08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DB10u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x0040DB10u) [[unlikely]] return; }
L_0040DB10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0040DB28; } }
L_0040DB18:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DB24u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x0040DB24u) [[unlikely]] return; }
L_0040DB24:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040DB28:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040DB4C; } }
    st32((c.r[28].w[0] - 28904u), 0u);
    c.budget -= 1;
L_0040DB34:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0040DB68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DB44u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0040DB44u) [[unlikely]] return; }
L_0040DB44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D9C4u | kUnwind; return; } goto L_0040D9C4; } }
L_0040DB4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DB60u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 74u, depth + 1u); else { c.pc = 0x00411100u; return; } if (c.pc != 0x0040DB60u) [[unlikely]] return; }
L_0040DB60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040DB34u | kUnwind; return; } goto L_0040DB34; } }
L_0040DB68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0040DB6C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_0040DB90:
    set32(c.r[29], c.r[29].w[0] - 512u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DBB4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x0040DBB4u) [[unlikely]] return; }
L_0040DBB4:
    c.f[2] = ld32((c.r[28].w[0] - 32272u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.f[1] = ld32((c.r[28].w[0] - 28660u));
    set32(c.r[3], 0u + 1u);
    c.f[0] = ld32((c.r[28].w[0] - 28656u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[2].w[0] + 1024u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 504u);
    set32(c.r[5], c.r[5].w[0] + 11546u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[28].w[0] - 28668u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DBECu); st32((c.r[28].w[0] - 28664u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x0040DBECu) [[unlikely]] return; }
L_0040DBEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DBF4u); set32(c.r[4], c.r[29].w[0] + 504u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x0040DBF4u) [[unlikely]] return; }
L_0040DBF4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DC00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 310u, depth + 1u); else { c.pc = 0x00243200u; return; } if (c.pc != 0x0040DC00u) [[unlikely]] return; }
L_0040DC00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 504u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DC10u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x0040DC10u) [[unlikely]] return; }
L_0040DC10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DC18u);  if (depth < kMaxDepth) unit_001D(c, 133u, depth + 1u); else { c.pc = 0x00277080u; return; } if (c.pc != 0x0040DC18u) [[unlikely]] return; }
L_0040DC18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 30624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DC2Cu); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0040DC2Cu) [[unlikely]] return; }
L_0040DC2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 30656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DC40u); set32(c.r[6], 0u + 40u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0040DC40u) [[unlikely]] return; }
L_0040DC40:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29192u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040DC6C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 11216u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0040C000u < 16384u) { entry = entries_0083[(t - 0x0040C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040DC6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 30656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DC80u); set32(c.r[5], c.r[5].w[0] + 11557u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040DC80u) [[unlikely]] return; }
L_0040DC80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 30624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DC94u); set32(c.r[5], c.r[5].w[0] + 11585u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040DC94u) [[unlikely]] return; }
L_0040DC94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[28].w[0] - 28636u));  if (t) { goto L_0040DD88; } }
L_0040DC9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 30656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DCB0u); set32(c.r[5], c.r[5].w[0] + 11600u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040DCB0u) [[unlikely]] return; }
L_0040DCB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 30624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DCC4u); set32(c.r[5], c.r[5].w[0] + 11627u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040DCC4u) [[unlikely]] return; }
L_0040DCC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040DD84; } }
L_0040DCCC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 30656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DCE0u); set32(c.r[5], c.r[5].w[0] + 11642u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040DCE0u) [[unlikely]] return; }
L_0040DCE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 30624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DCF4u); set32(c.r[5], c.r[5].w[0] + 11669u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040DCF4u) [[unlikely]] return; }
L_0040DCF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040DD84; } }
L_0040DCFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 30656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DD10u); set32(c.r[5], c.r[5].w[0] + 11684u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040DD10u) [[unlikely]] return; }
L_0040DD10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 30624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DD24u); set32(c.r[5], c.r[5].w[0] + 11712u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040DD24u) [[unlikely]] return; }
L_0040DD24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040DD84; } }
L_0040DD2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 30656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DD40u); set32(c.r[5], c.r[5].w[0] + 11727u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040DD40u) [[unlikely]] return; }
L_0040DD40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 30624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DD54u); set32(c.r[5], c.r[5].w[0] + 11755u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040DD54u) [[unlikely]] return; }
L_0040DD54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040DD84; } }
L_0040DD5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 30656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DD70u); set32(c.r[5], c.r[5].w[0] + 11770u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040DD70u) [[unlikely]] return; }
L_0040DD70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 30624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DD84u); set32(c.r[5], c.r[5].w[0] + 11799u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040DD84u) [[unlikely]] return; }
L_0040DD84:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 28636u));
    c.budget -= 1;
L_0040DD88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040DDBC; } }
L_0040DD90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DD98u);  if (depth < kMaxDepth) unit_001D(c, 132u, depth + 1u); else { c.pc = 0x00277070u; return; } if (c.pc != 0x0040DD98u) [[unlikely]] return; }
L_0040DD98:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0040DDA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DDA8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 292u, depth + 1u); else { c.pc = 0x00242FD0u; return; } if (c.pc != 0x0040DDA8u) [[unlikely]] return; }
L_0040DDA8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DDB4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x0040DDB4u) [[unlikely]] return; }
L_0040DDB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0040E114; } }
L_0040DDBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DDC4u);  if (depth < kMaxDepth) unit_0086(c, 116u, depth + 1u); else { c.pc = 0x00419BE0u; return; } if (c.pc != 0x0040DDC4u) [[unlikely]] return; }
L_0040DDC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DDD4u); set32(c.r[4], c.r[4].w[0] + 28128u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040DDD4u) [[unlikely]] return; }
L_0040DDD4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DDE4u); set32(c.r[5], c.r[5].w[0] + 30656u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040DDE4u) [[unlikely]] return; }
L_0040DDE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DDF4u); set32(c.r[5], c.r[5].w[0] + 11814u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x0040DDF4u) [[unlikely]] return; }
L_0040DDF4:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DE00u); set32(c.r[5], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040DE00u) [[unlikely]] return; }
L_0040DE00:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DE10u); set32(c.r[5], c.r[5].w[0] + 11527u);  if (depth < kMaxDepth) unit_000D(c, 48u, depth + 1u); else { c.pc = 0x00234D30u; return; } if (c.pc != 0x0040DE10u) [[unlikely]] return; }
L_0040DE10:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DE1Cu); st8((c.r[28].w[0] - 28632u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0010(c, 123u, depth + 1u); else { c.pc = 0x00241260u; return; } if (c.pc != 0x0040DE1Cu) [[unlikely]] return; }
L_0040DE1C:
    set32(c.r[4], c.r[29].w[0] + 496u);
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DE2Cu); c.r[20].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x0040DE2Cu) [[unlikely]] return; }
L_0040DE2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DE34u); set32(c.r[4], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x0040DE34u) [[unlikely]] return; }
L_0040DE34:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DE4Cu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DE4Cu) [[unlikely]] return; }
L_0040DE4C:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DE5Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x0040DE5Cu) [[unlikely]] return; }
L_0040DE5C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0040DF18; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[19], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DE78u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 154u, depth + 1u); else { c.pc = 0x0020AF90u; return; } if (c.pc != 0x0040DE78u) [[unlikely]] return; }
L_0040DE78:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DE8Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0040DE8Cu) [[unlikely]] return; }
L_0040DE8C:
    set32(c.r[18], c.r[29].w[0] + 116u);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040DEEC; } }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[17], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DEBCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0040DEBCu) [[unlikely]] return; }
L_0040DEBC:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[17].d[0]; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_0040DF04; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[19].w[0] - c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DEE4u); set32(c.r[5], c.r[20].w[0] + c.r[17].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DEE4u) [[unlikely]] return; }
L_0040DEE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 96u);  if (t) { goto L_0040DF08; } }
L_0040DEEC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DEF8u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0040DEF8u) [[unlikely]] return; }
L_0040DEF8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0040DF04:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_0040DF08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DF10u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x0040DF10u) [[unlikely]] return; }
L_0040DF10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0040DF28; } }
L_0040DF18:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DF24u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0010(c, 115u, depth + 1u); else { c.pc = 0x002410C0u; return; } if (c.pc != 0x0040DF24u) [[unlikely]] return; }
L_0040DF24:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040DF28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040E0F8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 28632u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0040DF38:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0040DF48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DF48u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0040DF48u) [[unlikely]] return; }
L_0040DF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DF50u);  if (depth < kMaxDepth) unit_0083(c, 154u, depth + 1u); else { c.pc = 0x0040D9A0u; return; } if (c.pc != 0x0040DF50u) [[unlikely]] return; }
L_0040DF50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DF58u);  if (depth < kMaxDepth) unit_0083(c, 134u, depth + 1u); else { c.pc = 0x0040D7D0u; return; } if (c.pc != 0x0040DF58u) [[unlikely]] return; }
L_0040DF58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DF64u); set32(c.r[4], c.r[4].w[0] + 496u);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x003D9830u; return; } if (c.pc != 0x0040DF64u) [[unlikely]] return; }
L_0040DF64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DF6Cu);  if (depth < kMaxDepth) unit_0086(c, 116u, depth + 1u); else { c.pc = 0x00419BE0u; return; } if (c.pc != 0x0040DF6Cu) [[unlikely]] return; }
L_0040DF6C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DF80u); set32(c.r[5], c.r[5].w[0] + 11822u);  if (depth < kMaxDepth) unit_000D(c, 32u, depth + 1u); else { c.pc = 0x002349A8u; return; } if (c.pc != 0x0040DF80u) [[unlikely]] return; }
L_0040DF80:
    set32(c.r[4], c.r[29].w[0] + 500u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DF8Cu); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x0040DF8Cu) [[unlikely]] return; }
L_0040DF8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DF94u); set32(c.r[4], c.r[29].w[0] + 500u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x0040DF94u) [[unlikely]] return; }
L_0040DF94:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DFACu); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DFACu) [[unlikely]] return; }
L_0040DFAC:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 500u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DFBCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x0040DFBCu) [[unlikely]] return; }
L_0040DFBC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0040E060; } }
    set32(c.r[20], c.r[29].w[0] + 148u);
    set32(c.r[19], c.r[29].w[0] + 136u);
    set32(c.r[18], c.r[29].w[0] + 144u);
    c.budget -= 3;
L_0040DFD0:
    set32(c.r[5], ld32((c.r[20].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040E030; } }
    set32(c.r[17], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 508u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DFF8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0040DFF8u) [[unlikely]] return; }
L_0040DFF8:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[20].w[0]), c.r[3].w[0]);  if (t) { goto L_0040E048; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[17].w[0] + c.r[29].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E028u); set32(c.r[5], c.r[2].w[0] + 508u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040E028u) [[unlikely]] return; }
L_0040E028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E048; } }
L_0040E030:
    set32(c.r[4], c.r[29].w[0] + 508u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E03Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0010(c, 3u, depth + 1u); else { c.pc = 0x00240010u; return; } if (c.pc != 0x0040E03Cu) [[unlikely]] return; }
L_0040E03C:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0040E048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E050u); c.r[4].d[0] = ld8((c.r[29].w[0] + 508u));  if (depth < kMaxDepth) unit_0083(c, 114u, depth + 1u); else { c.pc = 0x0040D5C0u; return; } if (c.pc != 0x0040E050u) [[unlikely]] return; }
L_0040E050:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040DFD0u | kUnwind; return; } goto L_0040DFD0; } }
L_0040E060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E068u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040E068u) [[unlikely]] return; }
L_0040E068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040E094; } }
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], 0u - 2u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[5].d[0] = ld8((c.r[2].w[0] + 8u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 9;
L_0040E094:
    st32((c.r[28].w[0] - 28588u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 99u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E0A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0085(c, 197u, depth + 1u); else { c.pc = 0x00417480u; return; } if (c.pc != 0x0040E0A8u) [[unlikely]] return; }
L_0040E0A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E0B0u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040E0B0u) [[unlikely]] return; }
L_0040E0B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040E0C0; } }
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 2;
L_0040E0C0:
    st32((c.r[28].w[0] - 28856u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E0CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 98u, depth + 1u); else { c.pc = 0x003D9700u; return; } if (c.pc != 0x0040E0CCu) [[unlikely]] return; }
L_0040E0CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E0D4u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040E0D4u) [[unlikely]] return; }
L_0040E0D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040E0E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E0E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 90u, depth + 1u); else { c.pc = 0x003D95C0u; return; } if (c.pc != 0x0040E0E4u) [[unlikely]] return; }
L_0040E0E4:
    st32((c.r[28].w[0] - 28852u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E0F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0076(c, 81u, depth + 1u); else { c.pc = 0x003D9500u; return; } if (c.pc != 0x0040E0F0u) [[unlikely]] return; }
L_0040E0F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040DD90u | kUnwind; return; } goto L_0040DD90; } }
L_0040E0F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00410000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 7280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E10Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0084(c, 74u, depth + 1u); else { c.pc = 0x00411100u; return; } if (c.pc != 0x0040E10Cu) [[unlikely]] return; }
L_0040E10C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040DF38u | kUnwind; return; } goto L_0040DF38; } }
L_0040E114:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 512u);  c.pc = t; return; }
L_0040E130:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 40u);
    set32(c.r[5], c.r[5].w[0] + 28128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E14Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040E14Cu) [[unlikely]] return; }
L_0040E14C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 28128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E160u); set32(c.r[5], c.r[5].w[0] + 11858u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040E160u) [[unlikely]] return; }
L_0040E160:
    c.f[2] = ld32((c.r[28].w[0] - 32272u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.f[1] = ld32((c.r[28].w[0] - 28660u));
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.f[0] = ld32((c.r[28].w[0] - 28656u));
    set32(c.r[5], c.r[5].w[0] + 11546u);
    c.f[1] = fp::ee::mul(c.fcr31, c.f[1], c.f[2]);
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[2]);
    st32((c.r[28].w[0] - 28668u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E18Cu); st32((c.r[28].w[0] - 28664u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 205u, depth + 1u); else { c.pc = 0x0023E450u; return; } if (c.pc != 0x0040E18Cu) [[unlikely]] return; }
L_0040E18C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E194u); set32(c.r[4], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x0040E194u) [[unlikely]] return; }
L_0040E194:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E1A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 310u, depth + 1u); else { c.pc = 0x00243200u; return; } if (c.pc != 0x0040E1A0u) [[unlikely]] return; }
L_0040E1A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E1B0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x0040E1B0u) [[unlikely]] return; }
L_0040E1B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E1B8u);  if (depth < kMaxDepth) unit_001D(c, 133u, depth + 1u); else { c.pc = 0x00277080u; return; } if (c.pc != 0x0040E1B8u) [[unlikely]] return; }
L_0040E1B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 30624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E1CCu); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0040E1CCu) [[unlikely]] return; }
L_0040E1CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 30656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E1E0u); set32(c.r[6], 0u + 40u);  if (depth < kMaxDepth) unit_000C(c, 224u, depth + 1u); else { c.pc = 0x00232DF0u; return; } if (c.pc != 0x0040E1E0u) [[unlikely]] return; }
L_0040E1E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 30624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E1F4u); set32(c.r[5], c.r[5].w[0] + 11585u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040E1F4u) [[unlikely]] return; }
L_0040E1F4:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 29192u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040E220; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 11248u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0040C000u < 16384u) { entry = entries_0083[(t - 0x0040C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0040E220:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 30656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E234u); set32(c.r[5], c.r[5].w[0] + 11557u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040E234u) [[unlikely]] return; }
L_0040E234:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 30624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E248u); set32(c.r[5], c.r[5].w[0] + 11585u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040E248u) [[unlikely]] return; }
L_0040E248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E338; } }
L_0040E250:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 30656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E264u); set32(c.r[5], c.r[5].w[0] + 11600u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040E264u) [[unlikely]] return; }
L_0040E264:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 30624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E278u); set32(c.r[5], c.r[5].w[0] + 11627u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040E278u) [[unlikely]] return; }
L_0040E278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E338; } }
L_0040E280:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 30656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E294u); set32(c.r[5], c.r[5].w[0] + 11642u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040E294u) [[unlikely]] return; }
L_0040E294:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 30624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E2A8u); set32(c.r[5], c.r[5].w[0] + 11669u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040E2A8u) [[unlikely]] return; }
L_0040E2A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E338; } }
L_0040E2B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 30656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E2C4u); set32(c.r[5], c.r[5].w[0] + 11684u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040E2C4u) [[unlikely]] return; }
L_0040E2C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 30624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E2D8u); set32(c.r[5], c.r[5].w[0] + 11712u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040E2D8u) [[unlikely]] return; }
L_0040E2D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E338; } }
L_0040E2E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 30656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E2F4u); set32(c.r[5], c.r[5].w[0] + 11727u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040E2F4u) [[unlikely]] return; }
L_0040E2F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 30624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E308u); set32(c.r[5], c.r[5].w[0] + 11755u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040E308u) [[unlikely]] return; }
L_0040E308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E338; } }
L_0040E310:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 30656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E324u); set32(c.r[5], c.r[5].w[0] + 11770u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040E324u) [[unlikely]] return; }
L_0040E324:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], c.r[4].w[0] + 30624u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E338u); set32(c.r[5], c.r[5].w[0] + 11799u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040E338u) [[unlikely]] return; }
L_0040E338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E340u);  if (depth < kMaxDepth) unit_0083(c, 154u, depth + 1u); else { c.pc = 0x0040D9A0u; return; } if (c.pc != 0x0040E340u) [[unlikely]] return; }
L_0040E340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E348u);  if (depth < kMaxDepth) unit_001D(c, 132u, depth + 1u); else { c.pc = 0x00277070u; return; } if (c.pc != 0x0040E348u) [[unlikely]] return; }
L_0040E348:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0040E358; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E358u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0010(c, 292u, depth + 1u); else { c.pc = 0x00242FD0u; return; } if (c.pc != 0x0040E358u) [[unlikely]] return; }
L_0040E358:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], c.r[29].w[0] + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E368u); set32(c.r[4], c.r[4].w[0] + 28128u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040E368u) [[unlikely]] return; }
L_0040E368:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[28].w[0] - 28632u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[3].w[0] + 1024u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040E390:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040E504; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040E510; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 537u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040E518; } }
    c.r[3].d[0] = ld8((c.r[19].w[0] + 538u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040E580; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 540u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040E5CC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040E5D8; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 536u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040E410; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040E624; } }
L_0040E40C:
    st8((c.r[19].w[0] + 536u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0040E410:
    set32(c.r[2], ld32((c.r[19].w[0] + 676u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040E62C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 680u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040E634; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 693u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040E63C; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 695u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040E644; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 540u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040E64C; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 536u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040E65C; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040E654; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[18], c.r[2].w[0] - 1u);
    c.budget -= 2;
L_0040E46C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 536u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0040E65C; } }
L_0040E474:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0040E4D8; } }
L_0040E48C:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E4A0u); set32(c.r[5], c.r[19].w[0] + 248u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0040E4A0u) [[unlikely]] return; }
L_0040E4A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040E4B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 552u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_0040E4D8; } }
L_0040E4B0:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], ld32((c.r[2].w[0] + 12u)));
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E48Cu | kUnwind; return; } goto L_0040E48C; } }
L_0040E4D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 608u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] + 11867u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E4F4u); set32(c.r[17], c.r[17].w[0] - 608u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0040E4F4u) [[unlikely]] return; }
L_0040E4F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040E674; } }
L_0040E4FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0040F20C; } }
L_0040E504:
    st32((c.r[19].w[0] + 16u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0040F20C; } }
L_0040E510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0040F20C; } }
L_0040E518:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[19].w[0] + 248u);
    set32(c.r[4], c.r[4].w[0] - 27600u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E52Cu); st8((c.r[19].w[0] + 537u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0040E52Cu) [[unlikely]] return; }
L_0040E52C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040E568; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30128u)));
    st32((c.r[28].w[0] - 30116u), 0u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[28].w[0] - 30120u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0040E550; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E54Cu);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0040E54Cu) [[unlikely]] return; }
L_0040E54C:
    st32((c.r[28].w[0] - 30128u), 0u);
    c.budget -= 1;
L_0040E550:
    set32(c.r[4], ld32((c.r[28].w[0] - 30124u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040E568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E564u);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0040E564u) [[unlikely]] return; }
L_0040E564:
    st32((c.r[28].w[0] - 30124u), 0u);
    c.budget -= 1;
L_0040E568:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[19].w[0] + 248u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E578u); set32(c.r[4], c.r[4].w[0] - 27600u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040E578u) [[unlikely]] return; }
L_0040E578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0040F20C; } }
L_0040E580:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[19].w[0] + 348u);
    set32(c.r[4], c.r[4].w[0] - 27488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E594u); st8((c.r[19].w[0] + 538u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0040E594u) [[unlikely]] return; }
L_0040E594:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040E5B4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[28].w[0] - 30092u), 0u);  if (t) { goto L_0040E5B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E5B0u);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0040E5B0u) [[unlikely]] return; }
L_0040E5B0:
    st32((c.r[28].w[0] - 30100u), 0u);
    c.budget -= 1;
L_0040E5B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[19].w[0] + 348u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E5C4u); set32(c.r[4], c.r[4].w[0] - 27488u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040E5C4u) [[unlikely]] return; }
L_0040E5C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0040F20C; } }
L_0040E5CC:
    st8((c.r[19].w[0] + 540u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0040F20C; } }
L_0040E5D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[19].w[0] + 348u);
    set32(c.r[4], c.r[4].w[0] - 27488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E5ECu); st8((c.r[19].w[0] + 538u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0040E5ECu) [[unlikely]] return; }
L_0040E5EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040E60C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[28].w[0] - 30092u), 0u);  if (t) { goto L_0040E60C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E608u);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0040E608u) [[unlikely]] return; }
L_0040E608:
    st32((c.r[28].w[0] - 30100u), 0u);
    c.budget -= 1;
L_0040E60C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[19].w[0] + 348u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E61Cu); set32(c.r[4], c.r[4].w[0] - 27488u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040E61Cu) [[unlikely]] return; }
L_0040E61C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0040F20C; } }
L_0040E624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E40Cu | kUnwind; return; } goto L_0040E40C; } }
L_0040E62C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0040F20C; } }
L_0040E634:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0040F20C; } }
L_0040E63C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0040F20C; } }
L_0040E644:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0040F20C; } }
L_0040E64C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0040F20C; } }
L_0040E654:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E46Cu | kUnwind; return; } goto L_0040E46C; } }
L_0040E65C:
    set32(c.r[2], ld32((c.r[19].w[0] + 556u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E4D8u | kUnwind; return; } goto L_0040E4D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[28].w[0] - 28616u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E474u | kUnwind; return; } goto L_0040E474; } }
L_0040E674:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E680u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0040E680u) [[unlikely]] return; }
L_0040E680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040E7E0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 556u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040E804; } }
    set32(c.r[2], c.r[3].w[0] - 3u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0040F064; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E4FCu | kUnwind; return; } goto L_0040E4FC; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 541u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F1C8; } }
    set32(c.r[4], c.r[19].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E6CCu); st8((c.r[19].w[0] + 541u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0040E6CCu) [[unlikely]] return; }
L_0040E6CC:
    set32(c.r[4], ld32((c.r[28].w[0] - 28724u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[6].d[0] = ld8((c.r[19].w[0] + 40u));
    c.f[12] = ld32((c.r[19].w[0] + 28u));
    set32(c.r[7], ld32((c.r[19].w[0] + 672u)));
    c.f[13] = ld32((c.r[19].w[0] + 460u));
    set32(c.r[8], ld32((c.r[19].w[0] + 44u)));
    c.f[14] = ld32((c.r[19].w[0] + 472u));
    c.r[9].d[0] = ld8((c.r[19].w[0] + 7u));
    c.f[15] = ld32((c.r[19].w[0] + 468u));
    c.f[16] = ld32((c.r[19].w[0] + 476u));
    set32(c.r[2], c.r[2].w[0] + 29328u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[5], c.r[19].w[0] + 148u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E71Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0086(c, 56u, depth + 1u); else { c.pc = 0x00418D50u; return; } if (c.pc != 0x0040E71Cu) [[unlikely]] return; }
L_0040E71C:
    set32(c.r[6], ld32((c.r[28].w[0] - 28724u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.r[2].d[0] = ld16((c.r[28].w[0] - 29022u));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] - 126u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 29020u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040E79C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E778u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040E778u) [[unlikely]] return; }
L_0040E778:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040E78C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 3;
L_0040E78C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0040E7BC; } }
L_0040E79C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E7A4u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040E7A4u) [[unlikely]] return; }
L_0040E7A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040E7B4; } }
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 2;
L_0040E7B4:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0040E7BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 28724u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28724u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E4FCu | kUnwind; return; } goto L_0040E4FC; } }
L_0040E7E0:
    set32(c.r[17], c.r[17].w[0] + 12u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E7F4u); set32(c.r[5], c.r[5].w[0] + 11867u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0040E7F4u) [[unlikely]] return; }
L_0040E7F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E674u | kUnwind; return; } goto L_0040E674; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E4FCu | kUnwind; return; } goto L_0040E4FC; } }
L_0040E804:
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0040E850; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[19].w[0] + 248u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] - 27600u);  if (t) { goto L_0040E840; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0040E840; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E830u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0040E830u) [[unlikely]] return; }
L_0040E830:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040E840; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0040E844; } }
L_0040E840:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040E844:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040E850; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0040E850:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(74ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040EA84; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(102ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040EA84; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 541u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040EA3C; } }
    set32(c.r[4], c.r[19].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E884u); st8((c.r[19].w[0] + 541u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0040E884u) [[unlikely]] return; }
L_0040E884:
    set32(c.r[6], ld32((c.r[28].w[0] - 28732u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[4].w[0] - 12352u);
    set32(c.r[2], 0u - 3u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[20], c.r[4].w[0] + c.r[5].w[0]);
    st8((c.r[20].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[20].w[0] + 9u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[20].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040E8F8; } }
L_0040E8D4:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E8E4u); set32(c.r[4], ld32((c.r[20].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0040E8E4u) [[unlikely]] return; }
L_0040E8E4:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E8D4u | kUnwind; return; } goto L_0040E8D4; } }
L_0040E8F8:
    set32(c.r[4], ld32((c.r[28].w[0] - 28732u)));
    st32((c.r[20].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[20].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] - 12352u);
    c.f[12] = ld32((c.r[19].w[0] + 36u));
    c.r[6].d[0] = ld8((c.r[19].w[0] + 40u));
    c.f[13] = ld32((c.r[19].w[0] + 28u));
    set32(c.r[7], ld32((c.r[19].w[0] + 672u)));
    c.f[14] = ld32((c.r[19].w[0] + 448u));
    c.r[8].d[0] = ld8((c.r[19].w[0] + 552u));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[10], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[5], c.r[19].w[0] + 148u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[15] = ld32((c.r[19].w[0] + 452u));
    c.f[16] = ld32((c.r[19].w[0] + 456u));
    c.f[17] = ld32((c.r[19].w[0] + 460u));
    c.f[18] = ld32((c.r[19].w[0] + 476u));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E95Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0085(c, 207u, depth + 1u); else { c.pc = 0x004175E0u; return; } if (c.pc != 0x0040E95Cu) [[unlikely]] return; }
L_0040E95C:
    set32(c.r[19], ld32((c.r[28].w[0] - 28732u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[19].w[0] + 1u);
    st32((c.r[28].w[0] - 28732u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(74ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E4FCu | kUnwind; return; } goto L_0040E4FC; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(102ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E4FCu | kUnwind; return; } goto L_0040E4FC; } }
    c.r[2].d[0] = ld16((c.r[28].w[0] - 29038u));
    set32(c.r[3], c.r[3].w[0] - 74u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 29036u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040E9E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E9C0u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040E9C0u) [[unlikely]] return; }
L_0040E9C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040E9D4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 3;
L_0040E9D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0040EA04; } }
L_0040E9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E9ECu); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040E9ECu) [[unlikely]] return; }
L_0040E9EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040E9FC; } }
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 2;
L_0040E9FC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0040EA04:
    set32(c.r[2], c.r[19].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] - 12352u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[19].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E4FCu | kUnwind; return; } goto L_0040E4FC; } }
L_0040EA3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EA44u); set32(c.r[4], c.r[19].w[0] + 148u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0040EA44u) [[unlikely]] return; }
L_0040EA44:
    set32(c.r[3], ld32((c.r[28].w[0] - 28732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[7].d[0] = ld8((c.r[19].w[0] + 552u));
    set32(c.r[2], c.r[2].w[0] - 12352u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 148u);
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EA7Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0085(c, 202u, depth + 1u); else { c.pc = 0x00417520u; return; } if (c.pc != 0x0040EA7Cu) [[unlikely]] return; }
L_0040EA7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E4FCu | kUnwind; return; } goto L_0040E4FC; } }
L_0040EA84:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 541u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F024; } }
    set32(c.r[4], c.r[19].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EA9Cu); st8((c.r[19].w[0] + 541u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0040EA9Cu) [[unlikely]] return; }
L_0040EA9C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 30768u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040EAE8; } }
L_0040EAC4:
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EAD4u); set32(c.r[4], ld32((c.r[20].w[0])));  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x0040EAD4u) [[unlikely]] return; }
L_0040EAD4:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040EAC4u | kUnwind; return; } goto L_0040EAC4; } }
L_0040EAE8:
    st32((c.r[20].w[0]), 0u);
    st32((c.r[20].w[0] + 4u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st8((c.r[20].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 30768u);
    c.f[0] = ld32((c.r[19].w[0] + 460u));
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 148u);
    st32((c.r[29].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 476u));
    st32((c.r[29].w[0] + 8u), c.f[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28728u)));
    c.f[12] = ld32((c.r[19].w[0] + 20u));
    c.r[6].d[0] = ld8((c.r[19].w[0] + 40u));
    c.f[13] = ld32((c.r[19].w[0] + 24u));
    c.f[14] = ld32((c.r[19].w[0] + 36u));
    set32(c.r[7], ld32((c.r[19].w[0] + 672u)));
    c.f[15] = ld32((c.r[19].w[0] + 28u));
    c.r[8].d[0] = ld8((c.r[19].w[0] + 552u));
    c.f[16] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[10], ld32((c.r[19].w[0] + 44u)));
    c.f[17] = ld32((c.r[19].w[0] + 448u));
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.f[18] = ld32((c.r[19].w[0] + 452u));
    c.f[19] = ld32((c.r[19].w[0] + 456u));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EB5Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0085(c, 161u, depth + 1u); else { c.pc = 0x00416DC0u; return; } if (c.pc != 0x0040EB5Cu) [[unlikely]] return; }
L_0040EB5C:
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040EC18; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 28728u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld16((c.r[28].w[0] - 29078u));
    set32(c.r[3], c.r[3].w[0] + 30768u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[19], c.r[3].w[0] + c.r[5].w[0]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 29076u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040EBE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EBC0u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040EBC0u) [[unlikely]] return; }
L_0040EBC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040EBD4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 3;
L_0040EBD4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0040EC04; } }
L_0040EBE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EBECu); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040EBECu) [[unlikely]] return; }
L_0040EBEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040EBFC; } }
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 2;
L_0040EBFC:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0040EC04:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0040EC18:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040ECE4; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(23ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040ECE4; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 28728u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld16((c.r[28].w[0] - 29062u));
    set32(c.r[3], c.r[3].w[0] - 9u);
    set32(c.r[5], c.r[5].w[0] + 30768u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[19], c.r[5].w[0] + c.r[6].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 29060u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040ECB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EC8Cu); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040EC8Cu) [[unlikely]] return; }
L_0040EC8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040ECA0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 3;
L_0040ECA0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0040ECD0; } }
L_0040ECB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ECB8u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040ECB8u) [[unlikely]] return; }
L_0040ECB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040ECC8; } }
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 2;
L_0040ECC8:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0040ECD0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0040ECE4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(23ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040EDB0; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(38ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040EDB0; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 28728u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld16((c.r[28].w[0] - 29070u));
    set32(c.r[3], c.r[3].w[0] - 23u);
    set32(c.r[5], c.r[5].w[0] + 30768u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[19], c.r[5].w[0] + c.r[6].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 29068u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040ED7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ED58u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040ED58u) [[unlikely]] return; }
L_0040ED58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040ED6C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 3;
L_0040ED6C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0040ED9C; } }
L_0040ED7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ED84u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040ED84u) [[unlikely]] return; }
L_0040ED84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040ED94; } }
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 2;
L_0040ED94:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0040ED9C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0040EDB0:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(38ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040EE7C; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(49ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040EE7C; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 28728u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld16((c.r[28].w[0] - 29054u));
    set32(c.r[3], c.r[3].w[0] - 38u);
    set32(c.r[5], c.r[5].w[0] + 30768u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[19], c.r[5].w[0] + c.r[6].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 29052u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040EE48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EE24u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040EE24u) [[unlikely]] return; }
L_0040EE24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040EE38; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 3;
L_0040EE38:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0040EE68; } }
L_0040EE48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EE50u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040EE50u) [[unlikely]] return; }
L_0040EE50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040EE60; } }
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 2;
L_0040EE60:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0040EE68:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0040EE7C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(49ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040EF48; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(74ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040EF48; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 28728u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = ld16((c.r[28].w[0] - 29046u));
    set32(c.r[3], c.r[3].w[0] - 49u);
    set32(c.r[5], c.r[5].w[0] + 30768u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[19], c.r[5].w[0] + c.r[6].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 29044u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040EF14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EEF0u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040EEF0u) [[unlikely]] return; }
L_0040EEF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040EF04; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 3;
L_0040EF04:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0040EF34; } }
L_0040EF14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EF1Cu); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040EF1Cu) [[unlikely]] return; }
L_0040EF1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040EF2C; } }
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 2;
L_0040EF2C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0040EF34:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0040EF48:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(128ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040F014; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(154ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0040F014; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 28728u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] - 128u);
    c.r[2].d[0] = ld16((c.r[28].w[0] - 29014u));
    set32(c.r[5], c.r[5].w[0] + 30768u);
    set32(c.r[6], c.r[7].w[0] << 3);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[17], c.r[5].w[0] + c.r[6].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 29012u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040EFE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EFBCu); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040EFBCu) [[unlikely]] return; }
L_0040EFBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040EFD0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 3;
L_0040EFD0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0040F000; } }
L_0040EFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EFE8u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040EFE8u) [[unlikely]] return; }
L_0040EFE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040EFF8; } }
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 2;
L_0040EFF8:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0040F000:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0040F014:
    set32(c.r[2], ld32((c.r[28].w[0] - 28728u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28728u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E4FCu | kUnwind; return; } goto L_0040E4FC; } }
L_0040F024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F02Cu); set32(c.r[4], c.r[19].w[0] + 148u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0040F02Cu) [[unlikely]] return; }
L_0040F02C:
    set32(c.r[3], ld32((c.r[28].w[0] - 28728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[7].d[0] = ld8((c.r[19].w[0] + 552u));
    set32(c.r[2], c.r[2].w[0] + 30768u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 148u);
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F05Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0085(c, 156u, depth + 1u); else { c.pc = 0x00416D00u; return; } if (c.pc != 0x0040F05Cu) [[unlikely]] return; }
L_0040F05C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E4FCu | kUnwind; return; } goto L_0040E4FC; } }
L_0040F064:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 541u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F18C; } }
    set32(c.r[4], c.r[19].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F07Cu); st8((c.r[19].w[0] + 541u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0040F07Cu) [[unlikely]] return; }
L_0040F07C:
    set32(c.r[4], ld32((c.r[28].w[0] - 28720u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[6].d[0] = ld8((c.r[19].w[0] + 40u));
    c.f[12] = ld32((c.r[19].w[0] + 20u));
    set32(c.r[7], ld32((c.r[19].w[0] + 672u)));
    c.f[13] = ld32((c.r[19].w[0] + 24u));
    set32(c.r[8], ld32((c.r[19].w[0] + 44u)));
    c.f[14] = ld32((c.r[19].w[0] + 28u));
    c.r[9].d[0] = ld8((c.r[19].w[0] + 7u));
    c.f[15] = ld32((c.r[19].w[0] + 32u));
    c.f[16] = ld32((c.r[19].w[0] + 476u));
    set32(c.r[2], c.r[2].w[0] - 10128u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[5], c.r[19].w[0] + 148u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[17] = ld32((c.r[19].w[0] + 460u));
    c.f[18] = ld32((c.r[19].w[0] + 472u));
    c.f[19] = ld32((c.r[19].w[0] + 468u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F0D0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x00418380u; return; } if (c.pc != 0x0040F0D0u) [[unlikely]] return; }
L_0040F0D0:
    set32(c.r[6], ld32((c.r[28].w[0] - 28720u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] - 10128u);
    c.r[2].d[0] = ld16((c.r[28].w[0] - 29030u));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] - 102u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 29028u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F124u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040F124u) [[unlikely]] return; }
L_0040F124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F138; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 3;
L_0040F138:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0040F168; } }
L_0040F148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F150u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040F150u) [[unlikely]] return; }
L_0040F150:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F160; } }
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 2;
L_0040F160:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0040F168:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 28720u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28720u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E4FCu | kUnwind; return; } goto L_0040E4FC; } }
L_0040F18C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F194u); set32(c.r[4], c.r[19].w[0] + 148u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0040F194u) [[unlikely]] return; }
L_0040F194:
    set32(c.r[3], ld32((c.r[28].w[0] - 28720u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[6].d[0] = ld8((c.r[19].w[0] + 7u));
    set32(c.r[2], c.r[2].w[0] - 10128u);
    set32(c.r[5], c.r[19].w[0] + 148u);
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F1C0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0086(c, 9u, depth + 1u); else { c.pc = 0x00418220u; return; } if (c.pc != 0x0040F1C0u) [[unlikely]] return; }
L_0040F1C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E4FCu | kUnwind; return; } goto L_0040E4FC; } }
L_0040F1C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F1D0u); set32(c.r[4], c.r[19].w[0] + 148u);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0040F1D0u) [[unlikely]] return; }
L_0040F1D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 28724u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[6].d[0] = ld8((c.r[19].w[0] + 7u));
    set32(c.r[2], c.r[2].w[0] + 29328u);
    set32(c.r[5], c.r[19].w[0] + 148u);
    set32(c.r[4], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F204u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0086(c, 48u, depth + 1u); else { c.pc = 0x00418BF0u; return; } if (c.pc != 0x0040F204u) [[unlikely]] return; }
L_0040F204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E4FCu | kUnwind; return; } goto L_0040E4FC; } }
L_0040F20C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0040F230:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0040F58C; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 3u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040F59C; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 537u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040F5A4; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 538u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040F66C; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 536u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F2A4; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040F6B8; } }
L_0040F2A0:
    st8((c.r[19].w[0] + 536u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0040F2A4:
    set32(c.r[2], ld32((c.r[19].w[0] + 676u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040F6C0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 680u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040F824; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 568u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040F954; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 693u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040FA70; } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 695u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040FB00; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 560u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F3A8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28780u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F33C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F300u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040F300u) [[unlikely]] return; }
L_0040F300:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F32C; } }
    c.r[5].d[0] = ld8((c.r[2].w[0] + 2u));
    set32(c.r[3], 0u - 2u);
    set32(c.r[6], ld32((c.r[28].w[0] - 28780u)));
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 9;
L_0040F32C:
    set32(c.r[3], ld32((c.r[28].w[0] - 28780u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28780u), c.r[2].w[0]);  if (t) { goto L_0040F374; } }
L_0040F33C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F344u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040F344u) [[unlikely]] return; }
L_0040F344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F36C; } }
    c.r[5].d[0] = ld8((c.r[2].w[0] + 2u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = 0ull & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 8;
L_0040F36C:
    st32((c.r[28].w[0] - 28784u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 28780u), c.r[2].w[0]);
    c.budget -= 2;
L_0040F374:
    set32(c.r[17], ld32((c.r[28].w[0] - 28780u)));
    set32(c.r[4], c.r[28].w[0] - 28824u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F384u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_0084(c, 63u, depth + 1u); else { c.pc = 0x00410F50u; return; } if (c.pc != 0x0040F384u) [[unlikely]] return; }
L_0040F384:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 560u)));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[19].w[0] + 560u), 0u);
    c.budget -= 9;
L_0040F3A8:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 540u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040FB90; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040F3B8:
    set32(c.r[2], c.r[19].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[2].w[0] + 528u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 528u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F570; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 28804u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F3E0u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040F3E0u) [[unlikely]] return; }
L_0040F3E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F480; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 28804u)));
    c.r[11].d[0] = 0ull & 1ull;
    set32(c.r[10], 0u - 2u);
    set32(c.r[8], 0u - 3u);
    set32(c.r[9], c.r[11].w[0] << 1);
    set32(c.r[6], 0u - 5u);
    set32(c.r[7], c.r[11].w[0] << 2);
    set32(c.r[4], 0u - 9u);
    set32(c.r[5], c.r[11].w[0] << 3);
    st32((c.r[2].w[0]), 0u);
    c.r[12].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 44u), 0u);
    c.budget -= 38;
L_0040F480:
    set32(c.r[3], ld32((c.r[28].w[0] - 28804u)));
    st32((c.r[3].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28804u), c.r[2].w[0]);  if (t) { goto L_0040F538; } }
L_0040F490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F498u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040F498u) [[unlikely]] return; }
L_0040F498:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F530; } }
    st32((c.r[2].w[0]), 0u);
    c.r[10].d[0] = 0ull & 1ull;
    c.r[11].d[0] = ld8((c.r[2].w[0] + 4u));
    set32(c.r[9], 0u - 2u);
    set32(c.r[7], 0u - 3u);
    set32(c.r[8], c.r[10].w[0] << 1);
    set32(c.r[5], 0u - 5u);
    set32(c.r[6], c.r[10].w[0] << 2);
    set32(c.r[3], 0u - 9u);
    set32(c.r[4], c.r[10].w[0] << 3);
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[2].w[0] + 44u), 0u);
    c.budget -= 36;
L_0040F530:
    st32((c.r[28].w[0] - 28808u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 28804u), c.r[2].w[0]);
    c.budget -= 2;
L_0040F538:
    set32(c.r[20], ld32((c.r[28].w[0] - 28804u)));
    set32(c.r[4], c.r[28].w[0] - 28824u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F548u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_0084(c, 63u, depth + 1u); else { c.pc = 0x00410F50u; return; } if (c.pc != 0x0040F548u) [[unlikely]] return; }
L_0040F548:
    st16((c.r[20].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    st32((c.r[20].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[2], 0u - 3u);
    c.r[4].d[0] = ld8((c.r[20].w[0] + 4u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[20].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_0040F570:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040F3B8u | kUnwind; return; } goto L_0040F3B8; } }
    st8((c.r[19].w[0] + 540u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0084(c, 58u, depth); } }
L_0040F58C:
    st32((c.r[28].w[0] - 28904u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 16u), 0u);  if (t) { [[clang::musttail]] return unit_0084(c, 58u, depth); } }
L_0040F59C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0084(c, 58u, depth); } }
L_0040F5A4:
    st8((c.r[19].w[0] + 537u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[19].w[0] + 544u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0040F608; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[19].w[0] + 248u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] - 27600u);  if (t) { goto L_0040F5E8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0040F5E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F5D8u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0040F5D8u) [[unlikely]] return; }
L_0040F5D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040F5E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0040F5EC; } }
L_0040F5E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040F5EC:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040F600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F600u); set32(c.r[4], c.r[19].w[0] + 248u);  if (depth < kMaxDepth) unit_001C(c, 74u, depth + 1u); else { c.pc = 0x002709B0u; return; } if (c.pc != 0x0040F600u) [[unlikely]] return; }
L_0040F600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0084(c, 58u, depth); } }
L_0040F608:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[19].w[0] + 248u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F618u); set32(c.r[4], c.r[4].w[0] - 27600u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0040F618u) [[unlikely]] return; }
L_0040F618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F654; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30128u)));
    st32((c.r[28].w[0] - 30116u), 0u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[28].w[0] - 30120u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0040F63C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F638u);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0040F638u) [[unlikely]] return; }
L_0040F638:
    st32((c.r[28].w[0] - 30128u), 0u);
    c.budget -= 1;
L_0040F63C:
    set32(c.r[4], ld32((c.r[28].w[0] - 30124u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040F654; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F650u);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0040F650u) [[unlikely]] return; }
L_0040F650:
    st32((c.r[28].w[0] - 30124u), 0u);
    c.budget -= 1;
L_0040F654:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[19].w[0] + 248u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F664u); set32(c.r[4], c.r[4].w[0] - 27600u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040F664u) [[unlikely]] return; }
L_0040F664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040F600u | kUnwind; return; } goto L_0040F600; } }
L_0040F66C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[19].w[0] + 348u);
    set32(c.r[4], c.r[4].w[0] - 27488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F680u); st8((c.r[19].w[0] + 538u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0040F680u) [[unlikely]] return; }
L_0040F680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F6A0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 30100u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[28].w[0] - 30092u), 0u);  if (t) { goto L_0040F6A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F69Cu);  if (depth < kMaxDepth) unit_0002(c, 153u, depth + 1u); else { c.pc = 0x0020AF80u; return; } if (c.pc != 0x0040F69Cu) [[unlikely]] return; }
L_0040F69C:
    st32((c.r[28].w[0] - 30100u), 0u);
    c.budget -= 1;
L_0040F6A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[19].w[0] + 348u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F6B0u); set32(c.r[4], c.r[4].w[0] - 27488u);  if (depth < kMaxDepth) unit_000D(c, 57u, depth + 1u); else { c.pc = 0x00234FA8u; return; } if (c.pc != 0x0040F6B0u) [[unlikely]] return; }
L_0040F6B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0084(c, 58u, depth); } }
L_0040F6B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040F2A0u | kUnwind; return; } goto L_0040F2A0; } }
L_0040F6C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 28796u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F738; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F6D4u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040F6D4u) [[unlikely]] return; }
L_0040F6D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F728; } }
    set32(c.r[9], ld32((c.r[28].w[0] - 28796u)));
    c.r[8].d[0] = 0ull | 65535ull;
    c.r[7].d[0] = 0ull & 1ull;
    set32(c.r[6], 0u - 2u);
    set32(c.r[4], 0u - 3u);
    set32(c.r[5], c.r[7].w[0] << 1);
    set32(c.r[3], 0u + 255u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 19;
L_0040F728:
    set32(c.r[3], ld32((c.r[28].w[0] - 28796u)));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28796u), c.r[2].w[0]);  if (t) { goto L_0040F798; } }
L_0040F738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F740u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040F740u) [[unlikely]] return; }
L_0040F740:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F790; } }
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[7].d[0] = 0ull & 1ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], 0u - 2u);
    c.r[8].d[0] = ld8((c.r[2].w[0] + 2u));
    set32(c.r[4], 0u - 3u);
    set32(c.r[5], c.r[7].w[0] << 1);
    set32(c.r[3], 0u + 255u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 18;
L_0040F790:
    st32((c.r[28].w[0] - 28800u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 28796u), c.r[2].w[0]);
    c.budget -= 2;
L_0040F798:
    set32(c.r[16], ld32((c.r[28].w[0] - 28796u)));
    set32(c.r[4], c.r[28].w[0] - 28824u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F7A8u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_0084(c, 63u, depth + 1u); else { c.pc = 0x00410F50u; return; } if (c.pc != 0x0040F7A8u) [[unlikely]] return; }
L_0040F7A8:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = 0ull & 1ull;
    c.r[8].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[6], 0u - 2u);
    set32(c.r[5], c.r[3].w[0] << 1);
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], 0u - 3u);
    set32(c.r[3], 0u - 5u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[19].w[0] + 684u));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[19].w[0] + 688u)));
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[19].w[0] + 692u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[19].w[0] + 688u), 0u);
    st8((c.r[19].w[0] + 692u), static_cast<std::uint8_t>(0u));
    c.budget -= 31;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 676u), 0u);  if (t) { [[clang::musttail]] return unit_0084(c, 58u, depth); } }
L_0040F824:
    set32(c.r[2], ld32((c.r[28].w[0] - 28796u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F89C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F838u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040F838u) [[unlikely]] return; }
L_0040F838:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F88C; } }
    set32(c.r[9], ld32((c.r[28].w[0] - 28796u)));
    c.r[8].d[0] = 0ull | 65535ull;
    c.r[7].d[0] = 0ull & 1ull;
    set32(c.r[6], 0u - 2u);
    set32(c.r[4], 0u - 3u);
    set32(c.r[5], c.r[7].w[0] << 1);
    set32(c.r[3], 0u + 255u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 19;
L_0040F88C:
    set32(c.r[3], ld32((c.r[28].w[0] - 28796u)));
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28796u), c.r[2].w[0]);  if (t) { goto L_0040F8FC; } }
L_0040F89C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F8A4u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040F8A4u) [[unlikely]] return; }
L_0040F8A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F8F4; } }
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[7].d[0] = 0ull & 1ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[6], 0u - 2u);
    c.r[8].d[0] = ld8((c.r[2].w[0] + 2u));
    set32(c.r[4], 0u - 3u);
    set32(c.r[5], c.r[7].w[0] << 1);
    set32(c.r[3], 0u + 255u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 2u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 18;
L_0040F8F4:
    st32((c.r[28].w[0] - 28800u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 28796u), c.r[2].w[0]);
    c.budget -= 2;
L_0040F8FC:
    set32(c.r[16], ld32((c.r[28].w[0] - 28796u)));
    set32(c.r[4], c.r[28].w[0] - 28824u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F90Cu); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_0084(c, 63u, depth + 1u); else { c.pc = 0x00410F50u; return; } if (c.pc != 0x0040F90Cu) [[unlikely]] return; }
L_0040F90C:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], 0u - 2u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[7].d[0] = 0ull & 1ull;
    set32(c.r[4], 0u - 3u);
    c.r[5].d[0] = 0ull + static_cast<std::uint64_t>(2ll);
    set32(c.r[3], 0u + 255u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 680u), 0u);  if (t) { [[clang::musttail]] return unit_0084(c, 58u, depth); } }
L_0040F954:
    set32(c.r[2], ld32((c.r[28].w[0] - 28756u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F998; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F968u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040F968u) [[unlikely]] return; }
L_0040F968:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F988; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28756u)));
    c.r[3].d[0] = 0ull | 65535ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 16u), 0u);
    c.budget -= 6;
L_0040F988:
    set32(c.r[3], ld32((c.r[28].w[0] - 28756u)));
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28756u), c.r[2].w[0]);  if (t) { goto L_0040F9C4; } }
L_0040F998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F9A0u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040F9A0u) [[unlikely]] return; }
L_0040F9A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F9BC; } }
    c.r[3].d[0] = 0ull | 65535ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    c.budget -= 5;
L_0040F9BC:
    st32((c.r[28].w[0] - 28760u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 28756u), c.r[2].w[0]);
    c.budget -= 2;
L_0040F9C4:
    set32(c.r[17], ld32((c.r[28].w[0] - 28756u)));
    set32(c.r[4], c.r[28].w[0] - 28824u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F9D4u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_0084(c, 63u, depth + 1u); else { c.pc = 0x00410F50u; return; } if (c.pc != 0x0040F9D4u) [[unlikely]] return; }
L_0040F9D4:
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[16], ld32((c.r[28].w[0] - 28824u)));
    c.r[2].d[0] = c.r[16].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0040FA14; } }
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 1;
L_0040F9F4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0040F9F8:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[19].w[0] + 569u));
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 568u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_0084(c, 58u, depth); } }
L_0040FA14:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FA28u); set32(c.r[4], c.r[19].w[0] + 570u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0040FA28u) [[unlikely]] return; }
L_0040FA28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040FA40; } }
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[2].w[0] + 4u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040F9F8u | kUnwind; return; } goto L_0040F9F8; } }
L_0040FA40:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], ld32((c.r[3].w[0] + 12u)));
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040FA14u | kUnwind; return; } goto L_0040FA14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull | 65535ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040F9F4u | kUnwind; return; } goto L_0040F9F4; } }
L_0040FA70:
    set32(c.r[2], ld32((c.r[28].w[0] - 28788u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040FAB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FA84u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040FA84u) [[unlikely]] return; }
L_0040FA84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040FAA0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28788u)));
    set32(c.r[3], 0u + 255u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 5;
L_0040FAA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 28788u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28788u), c.r[2].w[0]);  if (t) { goto L_0040FAD8; } }
L_0040FAB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FAB8u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040FAB8u) [[unlikely]] return; }
L_0040FAB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040FAD0; } }
    set32(c.r[3], 0u + 255u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 4;
L_0040FAD0:
    st32((c.r[28].w[0] - 28792u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 28788u), c.r[2].w[0]);
    c.budget -= 2;
L_0040FAD8:
    set32(c.r[16], ld32((c.r[28].w[0] - 28788u)));
    set32(c.r[4], c.r[28].w[0] - 28824u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FAE8u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_0084(c, 63u, depth + 1u); else { c.pc = 0x00410F50u; return; } if (c.pc != 0x0040FAE8u) [[unlikely]] return; }
L_0040FAE8:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 694u));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 693u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_0084(c, 58u, depth); } }
L_0040FB00:
    set32(c.r[2], ld32((c.r[28].w[0] - 28772u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040FB40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FB14u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040FB14u) [[unlikely]] return; }
L_0040FB14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040FB30; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28772u)));
    set32(c.r[3], 0u + 255u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 5;
L_0040FB30:
    set32(c.r[3], ld32((c.r[28].w[0] - 28772u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28772u), c.r[2].w[0]);  if (t) { goto L_0040FB68; } }
L_0040FB40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FB48u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040FB48u) [[unlikely]] return; }
L_0040FB48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040FB60; } }
    set32(c.r[3], 0u + 255u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 4;
L_0040FB60:
    st32((c.r[28].w[0] - 28776u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 28772u), c.r[2].w[0]);
    c.budget -= 2;
L_0040FB68:
    set32(c.r[16], ld32((c.r[28].w[0] - 28772u)));
    set32(c.r[4], c.r[28].w[0] - 28824u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FB78u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_0084(c, 63u, depth + 1u); else { c.pc = 0x00410F50u; return; } if (c.pc != 0x0040FB78u) [[unlikely]] return; }
L_0040FB78:
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 696u));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 695u), static_cast<std::uint8_t>(0u));  if (t) { [[clang::musttail]] return unit_0084(c, 58u, depth); } }
L_0040FB90:
    set32(c.r[2], ld32((c.r[19].w[0] + 556u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0040FC08; } }
    set32(c.r[17], ld32((c.r[28].w[0] - 28616u)));
    c.r[20].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[17].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_0040FC08; } }
L_0040FBBC:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FBD0u); set32(c.r[5], c.r[19].w[0] + 248u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0040FBD0u) [[unlikely]] return; }
L_0040FBD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040FBE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 552u), static_cast<std::uint8_t>(c.r[20].w[0]));  if (t) { goto L_0040FC08; } }
L_0040FBE0:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], ld32((c.r[2].w[0] + 12u)));
    c.r[2].d[0] = c.r[21].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[17].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040FBBCu | kUnwind; return; } goto L_0040FBBC; } }
L_0040FC08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 608u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], c.r[5].w[0] + 11867u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FC24u); set32(c.r[17], c.r[17].w[0] - 608u);  if (depth < kMaxDepth) unit_000D(c, 46u, depth + 1u); else { c.pc = 0x00234C58u; return; } if (c.pc != 0x0040FC24u) [[unlikely]] return; }
L_0040FC24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0084(c, 13u, depth); } }
    set32(c.r[3], ld32((c.r[19].w[0] + 556u)));
    c.budget -= 1;
L_0040FC30:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0084(c, 5u, depth); } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0084(c, 17u, depth); } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0084(c, 28u, depth); } }
    set32(c.r[2], c.r[3].w[0] - 3u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0084(c, 12u, depth); } }
    c.r[2].d[0] = ld8((c.r[19].w[0] + 541u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0084(c, 39u, depth); } }
    st8((c.r[19].w[0] + 541u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 28804u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040FD34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FC88u); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040FC88u) [[unlikely]] return; }
L_0040FC88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040FD24; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 28804u)));
    c.r[11].d[0] = 0ull & 1ull;
    set32(c.r[10], 0u - 2u);
    set32(c.r[8], 0u - 3u);
    set32(c.r[9], c.r[11].w[0] << 1);
    set32(c.r[6], 0u - 5u);
    set32(c.r[7], c.r[11].w[0] << 2);
    set32(c.r[4], 0u - 9u);
    set32(c.r[5], c.r[11].w[0] << 3);
    st32((c.r[2].w[0]), 0u);
    c.r[12].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[10].d[0] = c.r[12].d[0] & c.r[10].d[0];
    c.r[10].d[0] = c.r[10].d[0] | c.r[11].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[10].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[8].d[0] = c.r[10].d[0] & c.r[8].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[9].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[8].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[4].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 44u), 0u);
    c.budget -= 37;
L_0040FD24:
    set32(c.r[3], ld32((c.r[28].w[0] - 28804u)));
    st32((c.r[3].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28804u), c.r[2].w[0]);  if (t) { goto L_0040FDDC; } }
L_0040FD34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FD3Cu); set32(c.r[4], 0u + 48u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040FD3Cu) [[unlikely]] return; }
L_0040FD3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040FDD4; } }
    st32((c.r[2].w[0]), 0u);
    c.r[10].d[0] = 0ull & 1ull;
    c.r[11].d[0] = ld8((c.r[2].w[0] + 4u));
    set32(c.r[9], 0u - 2u);
    set32(c.r[7], 0u - 3u);
    set32(c.r[8], c.r[10].w[0] << 1);
    set32(c.r[5], 0u - 5u);
    set32(c.r[6], c.r[10].w[0] << 2);
    set32(c.r[3], 0u - 9u);
    set32(c.r[4], c.r[10].w[0] << 3);
    c.r[9].d[0] = c.r[11].d[0] & c.r[9].d[0];
    c.r[9].d[0] = c.r[9].d[0] | c.r[10].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[5].d[0] = c.r[7].d[0] & c.r[5].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 28u), 0u);
    st32((c.r[2].w[0] + 32u), 0u);
    st32((c.r[2].w[0] + 36u), 0u);
    st32((c.r[2].w[0] + 40u), 0u);
    st32((c.r[2].w[0] + 44u), 0u);
    c.budget -= 36;
L_0040FDD4:
    st32((c.r[28].w[0] - 28808u), c.r[2].w[0]);
    st32((c.r[28].w[0] - 28804u), c.r[2].w[0]);
    c.budget -= 2;
L_0040FDDC:
    set32(c.r[16], ld32((c.r[28].w[0] - 28804u)));
    set32(c.r[4], c.r[28].w[0] - 28824u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FDECu); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_0084(c, 63u, depth + 1u); else { c.pc = 0x00410F50u; return; } if (c.pc != 0x0040FDECu) [[unlikely]] return; }
L_0040FDEC:
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], 0u - 2u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], 0u - 3u);
    set32(c.r[3], 0u - 5u);
    set32(c.r[2], 0u - 9u);
    set32(c.r[4], c.r[19].w[0] + 148u);
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[19].w[0] + 556u)));
    st32((c.r[16].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[19].w[0] + 556u)));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[7], c.r[7].w[0] + c.r[19].w[0]);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[6].d[0] = ld8((c.r[7].w[0] + 528u));
    c.r[6].d[0] = c.r[6].d[0] & 1ull;
    set32(c.r[6], c.r[6].w[0] << 1);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], ld32((c.r[19].w[0] + 484u)));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[5], c.r[6].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 460u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 468u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 700u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[3], c.r[5].w[0] << 3);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    c.f[0] = fp::ee::mul(c.fcr31, c.f[0], c.f[0]);
    c.budget -= 50;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FEB4u); st32((c.r[16].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_000D(c, 61u, depth + 1u); else { c.pc = 0x002350C0u; return; } if (c.pc != 0x0040FEB4u) [[unlikely]] return; }
L_0040FEB4:
    set32(c.r[4], ld32((c.r[28].w[0] - 28720u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[6].d[0] = ld8((c.r[19].w[0] + 40u));
    c.f[12] = ld32((c.r[19].w[0] + 20u));
    set32(c.r[7], ld32((c.r[19].w[0] + 672u)));
    c.f[13] = ld32((c.r[19].w[0] + 24u));
    set32(c.r[8], ld32((c.r[19].w[0] + 44u)));
    c.f[14] = ld32((c.r[19].w[0] + 28u));
    c.r[9].d[0] = ld8((c.r[19].w[0] + 7u));
    c.f[15] = ld32((c.r[19].w[0] + 32u));
    c.f[16] = ld32((c.r[19].w[0] + 476u));
    set32(c.r[2], c.r[2].w[0] - 10128u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[5], c.r[19].w[0] + 148u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[17] = ld32((c.r[19].w[0] + 460u));
    c.f[18] = ld32((c.r[19].w[0] + 472u));
    c.f[19] = ld32((c.r[19].w[0] + 468u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FF08u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x00418380u; return; } if (c.pc != 0x0040FF08u) [[unlikely]] return; }
L_0040FF08:
    set32(c.r[4], ld32((c.r[28].w[0] - 28720u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], c.r[2].w[0] - 10128u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FF28u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0086(c, 15u, depth + 1u); else { c.pc = 0x004182E0u; return; } if (c.pc != 0x0040FF28u) [[unlikely]] return; }
L_0040FF28:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 556u)));
    set32(c.r[2], c.r[3].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 520u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040FF78; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28744u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[28].w[0] - 28744u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 556u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 488u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 556u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 520u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0040FF88; } }
L_0040FF78:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 488u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_0040FF88:
    set32(c.r[6], ld32((c.r[28].w[0] - 28720u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] - 10128u);
    c.r[2].d[0] = ld16((c.r[28].w[0] - 28974u));
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[28].w[0] - 28972u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040FFFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FFD8u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x0040FFD8u) [[unlikely]] return; }
L_0040FFD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040FFEC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 3;
L_0040FFEC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_0084(c, 4u, depth); } }
L_0040FFFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00410004u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x00410004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0084(c, 2u, depth);
}

}

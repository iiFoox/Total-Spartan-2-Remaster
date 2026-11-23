#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B2[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18,
    0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44,
    0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67,
    0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0,
    0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0,
    0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0,
    0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0,
    0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0,
    0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0,
    0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131,
    0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0,
    0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182,
    0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0,
    0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0,
    0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0,
    0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0,
    0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224,
    0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 230, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0,
    0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0,
    0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283,
    0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295,
    0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307,
    0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0,
    0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0,
    328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00B2(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004C8000;
    case 2u: goto L_004C8030;
    case 3u: goto L_004C8040;
    case 4u: goto L_004C804C;
    case 5u: goto L_004C8054;
    case 6u: goto L_004C805C;
    case 7u: goto L_004C8080;
    case 8u: goto L_004C80BC;
    case 9u: goto L_004C8198;
    case 10u: goto L_004C81A0;
    case 11u: goto L_004C81C4;
    case 12u: goto L_004C8200;
    case 13u: goto L_004C8290;
    case 14u: goto L_004C8298;
    case 15u: goto L_004C82C4;
    case 16u: goto L_004C82CC;
    case 17u: goto L_004C82F0;
    case 18u: goto L_004C82FC;
    case 19u: goto L_004C830C;
    case 20u: goto L_004C8314;
    case 21u: goto L_004C8340;
    case 22u: goto L_004C8348;
    case 23u: goto L_004C8374;
    case 24u: goto L_004C837C;
    case 25u: goto L_004C83A8;
    case 26u: goto L_004C83B0;
    case 27u: goto L_004C83DC;
    case 28u: goto L_004C83E4;
    case 29u: goto L_004C8410;
    case 30u: goto L_004C8418;
    case 31u: goto L_004C8444;
    case 32u: goto L_004C844C;
    case 33u: goto L_004C8478;
    case 34u: goto L_004C8480;
    case 35u: goto L_004C84A8;
    case 36u: goto L_004C84AC;
    case 37u: goto L_004C84B4;
    case 38u: goto L_004C84E0;
    case 39u: goto L_004C84E8;
    case 40u: goto L_004C8514;
    case 41u: goto L_004C851C;
    case 42u: goto L_004C8548;
    case 43u: goto L_004C8550;
    case 44u: goto L_004C857C;
    case 45u: goto L_004C8584;
    case 46u: goto L_004C85B0;
    case 47u: goto L_004C85B8;
    case 48u: goto L_004C85E4;
    case 49u: goto L_004C85EC;
    case 50u: goto L_004C8618;
    case 51u: goto L_004C8620;
    case 52u: goto L_004C864C;
    case 53u: goto L_004C8654;
    case 54u: goto L_004C869C;
    case 55u: goto L_004C86B4;
    case 56u: goto L_004C86CC;
    case 57u: goto L_004C86E4;
    case 58u: goto L_004C86F4;
    case 59u: goto L_004C8724;
    case 60u: goto L_004C873C;
    case 61u: goto L_004C8754;
    case 62u: goto L_004C8770;
    case 63u: goto L_004C8780;
    case 64u: goto L_004C87B0;
    case 65u: goto L_004C87C8;
    case 66u: goto L_004C87E0;
    case 67u: goto L_004C87FC;
    case 68u: goto L_004C880C;
    case 69u: goto L_004C883C;
    case 70u: goto L_004C8854;
    case 71u: goto L_004C886C;
    case 72u: goto L_004C8888;
    case 73u: goto L_004C8898;
    case 74u: goto L_004C88C8;
    case 75u: goto L_004C88E0;
    case 76u: goto L_004C88F8;
    case 77u: goto L_004C8914;
    case 78u: goto L_004C8924;
    case 79u: goto L_004C8954;
    case 80u: goto L_004C896C;
    case 81u: goto L_004C8984;
    case 82u: goto L_004C89A0;
    case 83u: goto L_004C89B0;
    case 84u: goto L_004C89E0;
    case 85u: goto L_004C89F8;
    case 86u: goto L_004C8A10;
    case 87u: goto L_004C8A2C;
    case 88u: goto L_004C8A3C;
    case 89u: goto L_004C8A6C;
    case 90u: goto L_004C8A84;
    case 91u: goto L_004C8A9C;
    case 92u: goto L_004C8AB8;
    case 93u: goto L_004C8AC8;
    case 94u: goto L_004C8AF8;
    case 95u: goto L_004C8B10;
    case 96u: goto L_004C8B28;
    case 97u: goto L_004C8B44;
    case 98u: goto L_004C8B54;
    case 99u: goto L_004C8B84;
    case 100u: goto L_004C8B9C;
    case 101u: goto L_004C8BB4;
    case 102u: goto L_004C8BD0;
    case 103u: goto L_004C8BE0;
    case 104u: goto L_004C8C10;
    case 105u: goto L_004C8C28;
    case 106u: goto L_004C8C40;
    case 107u: goto L_004C8C5C;
    case 108u: goto L_004C8C6C;
    case 109u: goto L_004C8C9C;
    case 110u: goto L_004C8CB4;
    case 111u: goto L_004C8CCC;
    case 112u: goto L_004C8CE8;
    case 113u: goto L_004C8CF8;
    case 114u: goto L_004C8D28;
    case 115u: goto L_004C8D40;
    case 116u: goto L_004C8D58;
    case 117u: goto L_004C8D74;
    case 118u: goto L_004C8D84;
    case 119u: goto L_004C8DB4;
    case 120u: goto L_004C8DCC;
    case 121u: goto L_004C8DE4;
    case 122u: goto L_004C8E00;
    case 123u: goto L_004C8E10;
    case 124u: goto L_004C8E40;
    case 125u: goto L_004C8E58;
    case 126u: goto L_004C8E70;
    case 127u: goto L_004C8E8C;
    case 128u: goto L_004C8E9C;
    case 129u: goto L_004C8ECC;
    case 130u: goto L_004C8EE4;
    case 131u: goto L_004C8EFC;
    case 132u: goto L_004C8F18;
    case 133u: goto L_004C8F28;
    case 134u: goto L_004C8F58;
    case 135u: goto L_004C8F70;
    case 136u: goto L_004C8F90;
    case 137u: goto L_004C8FA0;
    case 138u: goto L_004C8FB8;
    case 139u: goto L_004C8FC0;
    case 140u: goto L_004C8FEC;
    case 141u: goto L_004C8FF4;
    case 142u: goto L_004C9020;
    case 143u: goto L_004C9028;
    case 144u: goto L_004C9054;
    case 145u: goto L_004C905C;
    case 146u: goto L_004C90A4;
    case 147u: goto L_004C90BC;
    case 148u: goto L_004C90D4;
    case 149u: goto L_004C90F0;
    case 150u: goto L_004C9100;
    case 151u: goto L_004C9130;
    case 152u: goto L_004C9148;
    case 153u: goto L_004C9168;
    case 154u: goto L_004C9178;
    case 155u: goto L_004C91A8;
    case 156u: goto L_004C91C0;
    case 157u: goto L_004C91D8;
    case 158u: goto L_004C91F4;
    case 159u: goto L_004C9204;
    case 160u: goto L_004C9234;
    case 161u: goto L_004C924C;
    case 162u: goto L_004C9264;
    case 163u: goto L_004C9280;
    case 164u: goto L_004C9290;
    case 165u: goto L_004C92A8;
    case 166u: goto L_004C92B0;
    case 167u: goto L_004C92DC;
    case 168u: goto L_004C92E4;
    case 169u: goto L_004C9310;
    case 170u: goto L_004C9318;
    case 171u: goto L_004C9344;
    case 172u: goto L_004C934C;
    case 173u: goto L_004C9378;
    case 174u: goto L_004C9380;
    case 175u: goto L_004C93AC;
    case 176u: goto L_004C93B4;
    case 177u: goto L_004C93E0;
    case 178u: goto L_004C93E8;
    case 179u: goto L_004C9430;
    case 180u: goto L_004C9448;
    case 181u: goto L_004C9460;
    case 182u: goto L_004C947C;
    case 183u: goto L_004C948C;
    case 184u: goto L_004C94BC;
    case 185u: goto L_004C94D4;
    case 186u: goto L_004C94EC;
    case 187u: goto L_004C9508;
    case 188u: goto L_004C9518;
    case 189u: goto L_004C9528;
    case 190u: goto L_004C9548;
    case 191u: goto L_004C9560;
    case 192u: goto L_004C9578;
    case 193u: goto L_004C9594;
    case 194u: goto L_004C95A4;
    case 195u: goto L_004C95D4;
    case 196u: goto L_004C95EC;
    case 197u: goto L_004C9604;
    case 198u: goto L_004C9620;
    case 199u: goto L_004C9630;
    case 200u: goto L_004C9660;
    case 201u: goto L_004C9678;
    case 202u: goto L_004C9690;
    case 203u: goto L_004C96AC;
    case 204u: goto L_004C96BC;
    case 205u: goto L_004C96EC;
    case 206u: goto L_004C9704;
    case 207u: goto L_004C971C;
    case 208u: goto L_004C9738;
    case 209u: goto L_004C9748;
    case 210u: goto L_004C9778;
    case 211u: goto L_004C9790;
    case 212u: goto L_004C97A8;
    case 213u: goto L_004C97C4;
    case 214u: goto L_004C97D4;
    case 215u: goto L_004C97EC;
    case 216u: goto L_004C97F4;
    case 217u: goto L_004C9820;
    case 218u: goto L_004C9828;
    case 219u: goto L_004C9870;
    case 220u: goto L_004C9888;
    case 221u: goto L_004C98A0;
    case 222u: goto L_004C98BC;
    case 223u: goto L_004C98CC;
    case 224u: goto L_004C98FC;
    case 225u: goto L_004C9914;
    case 226u: goto L_004C992C;
    case 227u: goto L_004C9948;
    case 228u: goto L_004C9958;
    case 229u: goto L_004C9970;
    case 230u: goto L_004C9978;
    case 231u: goto L_004C99C0;
    case 232u: goto L_004C99D8;
    case 233u: goto L_004C99F0;
    case 234u: goto L_004C9A0C;
    case 235u: goto L_004C9A1C;
    case 236u: goto L_004C9A34;
    case 237u: goto L_004C9A3C;
    case 238u: goto L_004C9A68;
    case 239u: goto L_004C9A70;
    case 240u: goto L_004C9AB8;
    case 241u: goto L_004C9AD0;
    case 242u: goto L_004C9AE8;
    case 243u: goto L_004C9B04;
    case 244u: goto L_004C9B14;
    case 245u: goto L_004C9B44;
    case 246u: goto L_004C9B5C;
    case 247u: goto L_004C9B74;
    case 248u: goto L_004C9B90;
    case 249u: goto L_004C9BA0;
    case 250u: goto L_004C9BB8;
    case 251u: goto L_004C9BC0;
    case 252u: goto L_004C9C08;
    case 253u: goto L_004C9C20;
    case 254u: goto L_004C9C40;
    case 255u: goto L_004C9C50;
    case 256u: goto L_004C9C80;
    case 257u: goto L_004C9C98;
    case 258u: goto L_004C9CB8;
    case 259u: goto L_004C9CC8;
    case 260u: goto L_004C9CF8;
    case 261u: goto L_004C9D10;
    case 262u: goto L_004C9D30;
    case 263u: goto L_004C9D40;
    case 264u: goto L_004C9D90;
    case 265u: goto L_004C9DBC;
    case 266u: goto L_004C9DD0;
    case 267u: goto L_004C9E48;
    case 268u: goto L_004C9E5C;
    case 269u: goto L_004C9E70;
    case 270u: goto L_004C9EE8;
    case 271u: goto L_004C9EFC;
    case 272u: goto L_004C9F10;
    case 273u: goto L_004C9F88;
    case 274u: goto L_004C9F9C;
    case 275u: goto L_004C9FB0;
    case 276u: goto L_004CA028;
    case 277u: goto L_004CA03C;
    case 278u: goto L_004CA050;
    case 279u: goto L_004CA0C8;
    case 280u: goto L_004CA0DC;
    case 281u: goto L_004CA0F0;
    case 282u: goto L_004CA168;
    case 283u: goto L_004CA17C;
    case 284u: goto L_004CA190;
    case 285u: goto L_004CA208;
    case 286u: goto L_004CA21C;
    case 287u: goto L_004CA230;
    case 288u: goto L_004CA2A8;
    case 289u: goto L_004CA2BC;
    case 290u: goto L_004CA2D0;
    case 291u: goto L_004CA348;
    case 292u: goto L_004CA35C;
    case 293u: goto L_004CA370;
    case 294u: goto L_004CA3E8;
    case 295u: goto L_004CA3FC;
    case 296u: goto L_004CA410;
    case 297u: goto L_004CA488;
    case 298u: goto L_004CA49C;
    case 299u: goto L_004CA4B0;
    case 300u: goto L_004CA528;
    case 301u: goto L_004CA53C;
    case 302u: goto L_004CA550;
    case 303u: goto L_004CA5C8;
    case 304u: goto L_004CA5DC;
    case 305u: goto L_004CA5F0;
    case 306u: goto L_004CA668;
    case 307u: goto L_004CA67C;
    case 308u: goto L_004CA690;
    case 309u: goto L_004CA708;
    case 310u: goto L_004CA71C;
    case 311u: goto L_004CA730;
    case 312u: goto L_004CA7A8;
    case 313u: goto L_004CA7D4;
    case 314u: goto L_004CA7E8;
    case 315u: goto L_004CA860;
    case 316u: goto L_004CA874;
    case 317u: goto L_004CA888;
    case 318u: goto L_004CA900;
    case 319u: goto L_004CA914;
    case 320u: goto L_004CA928;
    case 321u: goto L_004CA9A0;
    case 322u: goto L_004CA9B4;
    case 323u: goto L_004CA9C8;
    case 324u: goto L_004CAA44;
    case 325u: goto L_004CAB60;
    case 326u: goto L_004CAB74;
    case 327u: goto L_004CABEC;
    case 328u: goto L_004CAC00;
    case 329u: goto L_004CAC14;
    case 330u: goto L_004CACF0;
    case 331u: goto L_004CAD24;
    case 332u: goto L_004CAD58;
    case 333u: goto L_004CAD8C;
    case 334u: goto L_004CADC4;
    case 335u: goto L_004CAE0C;
    case 336u: goto L_004CAE24;
    case 337u: goto L_004CAE68;
    case 338u: goto L_004CAE7C;
    case 339u: goto L_004CAEB0;
    case 340u: goto L_004CAEF0;
    case 341u: goto L_004CAFD0;
    case 342u: goto L_004CB050;
    case 343u: goto L_004CB110;
    case 344u: goto L_004CB1F0;
    case 345u: goto L_004CB270;
    case 346u: goto L_004CB330;
    case 347u: goto L_004CB3D0;
    case 348u: goto L_004CB4B0;
    case 349u: goto L_004CB5D0;
    case 350u: goto L_004CB600;
    case 351u: goto L_004CB62C;
    case 352u: goto L_004CB648;
    case 353u: goto L_004CB670;
    case 354u: goto L_004CB6A4;
    case 355u: goto L_004CB6FC;
    case 356u: goto L_004CB820;
    case 357u: goto L_004CB830;
    case 358u: goto L_004CB840;
    case 359u: goto L_004CB850;
    case 360u: goto L_004CB860;
    case 361u: goto L_004CB89C;
    case 362u: goto L_004CB984;
    case 363u: goto L_004CB9A0;
    case 364u: goto L_004CBA40;
    case 365u: goto L_004CBA7C;
    case 366u: goto L_004CBB48;
    case 367u: goto L_004CBB64;
    case 368u: goto L_004CBC00;
    case 369u: goto L_004CBC2C;
    case 370u: goto L_004CBD80;
    case 371u: goto L_004CBDAC;
    case 372u: goto L_004CBF00;
    case 373u: goto L_004CBF2C;
    default: bad_entry(c, 0x004C8000u); return;
    }
L_004C8000:
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C8020; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { goto L_004C8020; } }
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_004C8020:
    set32(c.r[2], ld32((c.r[18].w[0] + 1848u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C7FECu | kUnwind; return; } [[clang::musttail]] return unit_00B1(c, 238u, depth); } }
    c.budget -= 1;
L_004C8030:
    c.r[16].d[0] = ld16((c.r[28].w[0] - 29692u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8040u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 264u, depth + 1u); else { c.pc = 0x004C9D90u; return; } if (c.pc != 0x004C8040u) [[unlikely]] return; }
L_004C8040:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C804Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 12u, depth + 1u); else { c.pc = 0x004C8200u; return; } if (c.pc != 0x004C804Cu) [[unlikely]] return; }
L_004C804C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8054u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 7u, depth + 1u); else { c.pc = 0x004C8080u; return; } if (c.pc != 0x004C8054u) [[unlikely]] return; }
L_004C8054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C805Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B1(c, 221u, depth + 1u); else { c.pc = 0x004C7B20u; return; } if (c.pc != 0x004C805Cu) [[unlikely]] return; }
L_004C805C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004C8080:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 208u), 0u);
    st32((c.r[4].w[0] + 212u), 0u);
    st16((c.r[4].w[0] + 1904u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 1906u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 224u), 0u);
    st8((c.r[4].w[0] + 242u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 29216u);
    c.budget -= 15;
L_004C80BC:
    c.r[7].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[6], c.r[5].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] << 2);
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[6], c.r[5].w[0] + 2u);
    c.r[7].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[6], c.r[5].w[0] + 3u);
    set32(c.r[7], c.r[7].w[0] << 2);
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[6], c.r[5].w[0] + 4u);
    c.r[7].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[6], c.r[5].w[0] + 5u);
    set32(c.r[7], c.r[7].w[0] << 2);
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[6], c.r[5].w[0] + 6u);
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[5], c.r[5].w[0] + 7u);
    set32(c.r[6], c.r[6].w[0] << 2);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = c.r[5].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 38;
    { const bool t = c.r[6].d[0] != 0ull; st32((c.r[7].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C80BCu | kUnwind; return; } goto L_004C80BC; } }
    set32(c.r[7], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + 1u);
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004C81A0; } }
L_004C8198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004C81E4; } }
L_004C81A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C81C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C81C4u) [[unlikely]] return; }
L_004C81C4:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[4], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C81A0u | kUnwind; return; } goto L_004C81A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C8198u | kUnwind; return; } goto L_004C8198; } }
L_004C81E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004C8200:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 50u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004C8228; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_004C8228:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_004C8304; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_004C8FB0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_004C92A0; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_004C97E4; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_004C9968; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_004C9A2C; } }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_004C9BB0; } }
    set32(c.r[3], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_004C82F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8290u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C8290u) [[unlikely]] return; }
L_004C8290:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C9C60; } }
L_004C8298:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C82BC; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C82BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C82C4u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C82C4u) [[unlikely]] return; }
L_004C82C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C9CD8; } }
L_004C82CC:
    set32(c.r[4], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004C82F0; } }
    st32((c.r[3].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C82F0:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004C9D50; } }
L_004C82FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_004C9D7C; } }
L_004C8304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C830Cu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C830Cu) [[unlikely]] return; }
L_004C830C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C867C; } }
L_004C8314:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C8338; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C8338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8340u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C8340u) [[unlikely]] return; }
L_004C8340:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C8704; } }
L_004C8348:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C836C; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C836C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8374u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C8374u) [[unlikely]] return; }
L_004C8374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C8790; } }
L_004C837C:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C83A0; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C83A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C83A8u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C83A8u) [[unlikely]] return; }
L_004C83A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C881C; } }
L_004C83B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C83D4; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C83D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C83DCu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C83DCu) [[unlikely]] return; }
L_004C83DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C88A8; } }
L_004C83E4:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C8408; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C8408:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8410u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C8410u) [[unlikely]] return; }
L_004C8410:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C8934; } }
L_004C8418:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C843C; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C843C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8444u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C8444u) [[unlikely]] return; }
L_004C8444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C89C0; } }
L_004C844C:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C8470; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C8470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8478u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C8478u) [[unlikely]] return; }
L_004C8478:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C8A4C; } }
L_004C8480:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C84A4; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C84A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C84ACu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C84ACu) [[unlikely]] return; }
    goto L_004C84AC;
L_004C84A8:
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_004C84AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C8AD8; } }
L_004C84B4:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C84D8; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C84D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C84E0u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C84E0u) [[unlikely]] return; }
L_004C84E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C8B64; } }
L_004C84E8:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C850C; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C850C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8514u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C8514u) [[unlikely]] return; }
L_004C8514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C8BF0; } }
L_004C851C:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C8540; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C8540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8548u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C8548u) [[unlikely]] return; }
L_004C8548:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C8C7C; } }
L_004C8550:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C8574; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C8574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C857Cu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C857Cu) [[unlikely]] return; }
L_004C857C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C8D08; } }
L_004C8584:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C85A8; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C85A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C85B0u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C85B0u) [[unlikely]] return; }
L_004C85B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C8D94; } }
L_004C85B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C85DC; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C85DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C85E4u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C85E4u) [[unlikely]] return; }
L_004C85E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C8E20; } }
L_004C85EC:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C8610; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C8610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8618u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C8618u) [[unlikely]] return; }
L_004C8618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C8EAC; } }
L_004C8620:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C8644; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C8644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C864Cu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C864Cu) [[unlikely]] return; }
L_004C864C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C8F38; } }
L_004C8654:
    set32(c.r[4], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C82F0u | kUnwind; return; } goto L_004C82F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C82F0u | kUnwind; return; } goto L_004C82F0; } }
L_004C867C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 137u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C869Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C869Cu) [[unlikely]] return; }
L_004C869C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 173u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C86B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C86B4u) [[unlikely]] return; }
L_004C86B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 210u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C86CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C86CCu) [[unlikely]] return; }
L_004C86CC:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(0u));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C86E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C86E4u) [[unlikely]] return; }
L_004C86E4:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C86F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C86F4u) [[unlikely]] return; }
L_004C86F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 26816u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C8314u | kUnwind; return; } goto L_004C8314; } }
L_004C8704:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 138u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8724u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8724u) [[unlikely]] return; }
L_004C8724:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 174u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C873Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C873Cu) [[unlikely]] return; }
L_004C873C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 211u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8754u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8754u) [[unlikely]] return; }
L_004C8754:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8770u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8770u) [[unlikely]] return; }
L_004C8770:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8780u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8780u) [[unlikely]] return; }
L_004C8780:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 26848u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C8348u | kUnwind; return; } goto L_004C8348; } }
L_004C8790:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 153u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C87B0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C87B0u) [[unlikely]] return; }
L_004C87B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 185u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C87C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C87C8u) [[unlikely]] return; }
L_004C87C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 223u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C87E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C87E0u) [[unlikely]] return; }
L_004C87E0:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C87FCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C87FCu) [[unlikely]] return; }
L_004C87FC:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C880Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C880Cu) [[unlikely]] return; }
L_004C880C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 27264u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C837Cu | kUnwind; return; } goto L_004C837C; } }
L_004C881C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 152u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C883Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C883Cu) [[unlikely]] return; }
L_004C883C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 193u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8854u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8854u) [[unlikely]] return; }
L_004C8854:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 229u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C886Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C886Cu) [[unlikely]] return; }
L_004C886C:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 7u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8888u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8888u) [[unlikely]] return; }
L_004C8888:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8898u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8898u) [[unlikely]] return; }
L_004C8898:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 27232u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C83B0u | kUnwind; return; } goto L_004C83B0; } }
L_004C88A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 141u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C88C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C88C8u) [[unlikely]] return; }
L_004C88C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 176u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C88E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C88E0u) [[unlikely]] return; }
L_004C88E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 213u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C88F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C88F8u) [[unlikely]] return; }
L_004C88F8:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 5u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8914u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8914u) [[unlikely]] return; }
L_004C8914:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8924u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8924u) [[unlikely]] return; }
L_004C8924:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 26880u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C83E4u | kUnwind; return; } goto L_004C83E4; } }
L_004C8934:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 142u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8954u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8954u) [[unlikely]] return; }
L_004C8954:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 177u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C896Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C896Cu) [[unlikely]] return; }
L_004C896C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 214u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8984u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8984u) [[unlikely]] return; }
L_004C8984:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 6u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C89A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C89A0u) [[unlikely]] return; }
L_004C89A0:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C89B0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C89B0u) [[unlikely]] return; }
L_004C89B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 26912u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C8418u | kUnwind; return; } goto L_004C8418; } }
L_004C89C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 148u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C89E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C89E0u) [[unlikely]] return; }
L_004C89E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 182u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C89F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C89F8u) [[unlikely]] return; }
L_004C89F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 220u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8A10u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8A10u) [[unlikely]] return; }
L_004C8A10:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 12u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8A2Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8A2Cu) [[unlikely]] return; }
L_004C8A2C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8A3Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8A3Cu) [[unlikely]] return; }
L_004C8A3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 27104u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C844Cu | kUnwind; return; } goto L_004C844C; } }
L_004C8A4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 149u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8A6Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8A6Cu) [[unlikely]] return; }
L_004C8A6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 183u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8A84u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8A84u) [[unlikely]] return; }
L_004C8A84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 221u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8A9Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8A9Cu) [[unlikely]] return; }
L_004C8A9C:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 13u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8AB8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8AB8u) [[unlikely]] return; }
L_004C8AB8:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8AC8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8AC8u) [[unlikely]] return; }
L_004C8AC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 27136u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C8480u | kUnwind; return; } goto L_004C8480; } }
L_004C8AD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 154u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8AF8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8AF8u) [[unlikely]] return; }
L_004C8AF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 186u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8B10u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8B10u) [[unlikely]] return; }
L_004C8B10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8B28u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8B28u) [[unlikely]] return; }
L_004C8B28:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 11u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8B44u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8B44u) [[unlikely]] return; }
L_004C8B44:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8B54u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8B54u) [[unlikely]] return; }
L_004C8B54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 27296u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C84B4u | kUnwind; return; } goto L_004C84B4; } }
L_004C8B64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 157u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8B84u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8B84u) [[unlikely]] return; }
L_004C8B84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 189u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8B9Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8B9Cu) [[unlikely]] return; }
L_004C8B9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 227u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8BB4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8BB4u) [[unlikely]] return; }
L_004C8BB4:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 14u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8BD0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8BD0u) [[unlikely]] return; }
L_004C8BD0:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8BE0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8BE0u) [[unlikely]] return; }
L_004C8BE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 27392u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C84E8u | kUnwind; return; } goto L_004C84E8; } }
L_004C8BF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 158u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8C10u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8C10u) [[unlikely]] return; }
L_004C8C10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 190u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8C28u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8C28u) [[unlikely]] return; }
L_004C8C28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 228u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8C40u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8C40u) [[unlikely]] return; }
L_004C8C40:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 15u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8C5Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8C5Cu) [[unlikely]] return; }
L_004C8C5C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8C6Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8C6Cu) [[unlikely]] return; }
L_004C8C6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 27424u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C851Cu | kUnwind; return; } goto L_004C851C; } }
L_004C8C7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 161u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8C9Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8C9Cu) [[unlikely]] return; }
L_004C8C9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 198u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8CB4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8CB4u) [[unlikely]] return; }
L_004C8CB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 234u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8CCCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8CCCu) [[unlikely]] return; }
L_004C8CCC:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 25u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8CE8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8CE8u) [[unlikely]] return; }
L_004C8CE8:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8CF8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8CF8u) [[unlikely]] return; }
L_004C8CF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 27520u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C8550u | kUnwind; return; } goto L_004C8550; } }
L_004C8D08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 146u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8D28u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8D28u) [[unlikely]] return; }
L_004C8D28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 180u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8D40u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8D40u) [[unlikely]] return; }
L_004C8D40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 217u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8D58u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8D58u) [[unlikely]] return; }
L_004C8D58:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8D74u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8D74u) [[unlikely]] return; }
L_004C8D74:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8D84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8D84u) [[unlikely]] return; }
L_004C8D84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 27040u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C8584u | kUnwind; return; } goto L_004C8584; } }
L_004C8D94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 147u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8DB4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8DB4u) [[unlikely]] return; }
L_004C8DB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 181u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8DCCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8DCCu) [[unlikely]] return; }
L_004C8DCC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 219u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8DE4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8DE4u) [[unlikely]] return; }
L_004C8DE4:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 9u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8E00u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8E00u) [[unlikely]] return; }
L_004C8E00:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8E10u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8E10u) [[unlikely]] return; }
L_004C8E10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 27072u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C85B8u | kUnwind; return; } goto L_004C85B8; } }
L_004C8E20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 159u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8E40u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8E40u) [[unlikely]] return; }
L_004C8E40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 191u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8E58u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8E58u) [[unlikely]] return; }
L_004C8E58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 230u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8E70u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8E70u) [[unlikely]] return; }
L_004C8E70:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 24u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8E8Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8E8Cu) [[unlikely]] return; }
L_004C8E8C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8E9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8E9Cu) [[unlikely]] return; }
L_004C8E9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 27456u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C85ECu | kUnwind; return; } goto L_004C85EC; } }
L_004C8EAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 151u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8ECCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8ECCu) [[unlikely]] return; }
L_004C8ECC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 184u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8EE4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8EE4u) [[unlikely]] return; }
L_004C8EE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 229u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8EFCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8EFCu) [[unlikely]] return; }
L_004C8EFC:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 21u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8F18u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8F18u) [[unlikely]] return; }
L_004C8F18:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8F28u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8F28u) [[unlikely]] return; }
L_004C8F28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 27200u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C8620u | kUnwind; return; } goto L_004C8620; } }
L_004C8F38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 162u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8F58u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8F58u) [[unlikely]] return; }
L_004C8F58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 199u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8F70u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C8F70u) [[unlikely]] return; }
L_004C8F70:
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 34u);
    st32((c.r[18].w[0] + 12u), 0u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8F90u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8F90u) [[unlikely]] return; }
L_004C8F90:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8FA0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C8FA0u) [[unlikely]] return; }
L_004C8FA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 27552u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C8654u | kUnwind; return; } goto L_004C8654; } }
L_004C8FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8FB8u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C8FB8u) [[unlikely]] return; }
L_004C8FB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C9084; } }
L_004C8FC0:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C8FE4; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C8FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C8FECu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C8FECu) [[unlikely]] return; }
L_004C8FEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C9110; } }
L_004C8FF4:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C9018; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C9018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9020u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C9020u) [[unlikely]] return; }
L_004C9020:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C9188; } }
L_004C9028:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C904C; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C904C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9054u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C9054u) [[unlikely]] return; }
L_004C9054:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C9214; } }
L_004C905C:
    set32(c.r[4], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C82F0u | kUnwind; return; } goto L_004C82F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C82F0u | kUnwind; return; } goto L_004C82F0; } }
L_004C9084:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 150u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C90A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C90A4u) [[unlikely]] return; }
L_004C90A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 196u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C90BCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C90BCu) [[unlikely]] return; }
L_004C90BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 233u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C90D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C90D4u) [[unlikely]] return; }
L_004C90D4:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 23u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C90F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C90F0u) [[unlikely]] return; }
L_004C90F0:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9100u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9100u) [[unlikely]] return; }
L_004C9100:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 27168u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C8FC0u | kUnwind; return; } goto L_004C8FC0; } }
L_004C9110:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 160u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9130u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9130u) [[unlikely]] return; }
L_004C9130:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 192u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9148u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9148u) [[unlikely]] return; }
L_004C9148:
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 33u);
    st32((c.r[18].w[0] + 12u), 0u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9168u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9168u) [[unlikely]] return; }
L_004C9168:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9178u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9178u) [[unlikely]] return; }
L_004C9178:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 27488u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C8FF4u | kUnwind; return; } goto L_004C8FF4; } }
L_004C9188:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 159u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C91A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C91A8u) [[unlikely]] return; }
L_004C91A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 191u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C91C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C91C0u) [[unlikely]] return; }
L_004C91C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 230u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C91D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C91D8u) [[unlikely]] return; }
L_004C91D8:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 24u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C91F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C91F4u) [[unlikely]] return; }
L_004C91F4:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9204u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9204u) [[unlikely]] return; }
L_004C9204:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 27456u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C9028u | kUnwind; return; } goto L_004C9028; } }
L_004C9214:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 151u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9234u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9234u) [[unlikely]] return; }
L_004C9234:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 184u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C924Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C924Cu) [[unlikely]] return; }
L_004C924C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 229u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9264u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9264u) [[unlikely]] return; }
L_004C9264:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 21u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9280u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9280u) [[unlikely]] return; }
L_004C9280:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9290u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9290u) [[unlikely]] return; }
L_004C9290:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 27200u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C905Cu | kUnwind; return; } goto L_004C905C; } }
L_004C92A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C92A8u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C92A8u) [[unlikely]] return; }
L_004C92A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C9410; } }
L_004C92B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C92D4; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C92D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C92DCu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C92DCu) [[unlikely]] return; }
L_004C92DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C949C; } }
L_004C92E4:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C9308; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C9308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9310u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C9310u) [[unlikely]] return; }
L_004C9310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C9528; } }
L_004C9318:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C933C; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C933C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9344u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C9344u) [[unlikely]] return; }
L_004C9344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C95B4; } }
L_004C934C:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C9370; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C9370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9378u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C9378u) [[unlikely]] return; }
L_004C9378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C9640; } }
L_004C9380:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C93A4; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C93A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C93ACu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C93ACu) [[unlikely]] return; }
L_004C93AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C96CC; } }
L_004C93B4:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C93D8; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C93D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C93E0u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C93E0u) [[unlikely]] return; }
L_004C93E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C9758; } }
L_004C93E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C82F0u | kUnwind; return; } goto L_004C82F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C82F0u | kUnwind; return; } goto L_004C82F0; } }
L_004C9410:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 143u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9430u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9430u) [[unlikely]] return; }
L_004C9430:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 178u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9448u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9448u) [[unlikely]] return; }
L_004C9448:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 215u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9460u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9460u) [[unlikely]] return; }
L_004C9460:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C947Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C947Cu) [[unlikely]] return; }
L_004C947C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C948Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C948Cu) [[unlikely]] return; }
L_004C948C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 26944u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C92B0u | kUnwind; return; } goto L_004C92B0; } }
L_004C949C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 144u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C94BCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C94BCu) [[unlikely]] return; }
L_004C94BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 179u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C94D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C94D4u) [[unlikely]] return; }
L_004C94D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 216u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C94ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C94ECu) [[unlikely]] return; }
L_004C94EC:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 17u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9508u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9508u) [[unlikely]] return; }
L_004C9508:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9518u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9518u) [[unlikely]] return; }
L_004C9518:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 26976u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C92E4u | kUnwind; return; } goto L_004C92E4; } }
L_004C9528:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 145u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9548u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9548u) [[unlikely]] return; }
L_004C9548:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 197u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9560u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9560u) [[unlikely]] return; }
L_004C9560:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 232u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9578u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9578u) [[unlikely]] return; }
L_004C9578:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 22u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9594u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9594u) [[unlikely]] return; }
L_004C9594:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C95A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C95A4u) [[unlikely]] return; }
L_004C95A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 27008u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C9318u | kUnwind; return; } goto L_004C9318; } }
L_004C95B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 155u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C95D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C95D4u) [[unlikely]] return; }
L_004C95D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 187u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C95ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C95ECu) [[unlikely]] return; }
L_004C95EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 225u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9604u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9604u) [[unlikely]] return; }
L_004C9604:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 18u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9620u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9620u) [[unlikely]] return; }
L_004C9620:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9630u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9630u) [[unlikely]] return; }
L_004C9630:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 27328u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C934Cu | kUnwind; return; } goto L_004C934C; } }
L_004C9640:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 156u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9660u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9660u) [[unlikely]] return; }
L_004C9660:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 188u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9678u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9678u) [[unlikely]] return; }
L_004C9678:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 226u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9690u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9690u) [[unlikely]] return; }
L_004C9690:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 19u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C96ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C96ACu) [[unlikely]] return; }
L_004C96AC:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C96BCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C96BCu) [[unlikely]] return; }
L_004C96BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 27360u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C9380u | kUnwind; return; } goto L_004C9380; } }
L_004C96CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 151u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C96ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C96ECu) [[unlikely]] return; }
L_004C96EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 184u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9704u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9704u) [[unlikely]] return; }
L_004C9704:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 229u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C971Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C971Cu) [[unlikely]] return; }
L_004C971C:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 21u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9738u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9738u) [[unlikely]] return; }
L_004C9738:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9748u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9748u) [[unlikely]] return; }
L_004C9748:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 27200u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C93B4u | kUnwind; return; } goto L_004C93B4; } }
L_004C9758:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 166u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9778u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9778u) [[unlikely]] return; }
L_004C9778:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 203u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9790u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9790u) [[unlikely]] return; }
L_004C9790:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 212u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C97A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C97A8u) [[unlikely]] return; }
L_004C97A8:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 28u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C97C4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C97C4u) [[unlikely]] return; }
L_004C97C4:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C97D4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C97D4u) [[unlikely]] return; }
L_004C97D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 27680u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C93E8u | kUnwind; return; } goto L_004C93E8; } }
L_004C97E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C97ECu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C97ECu) [[unlikely]] return; }
L_004C97EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C9850; } }
L_004C97F4:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C9818; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C9818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9820u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C9820u) [[unlikely]] return; }
L_004C9820:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C98DC; } }
L_004C9828:
    set32(c.r[4], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C82F0u | kUnwind; return; } goto L_004C82F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C82F0u | kUnwind; return; } goto L_004C82F0; } }
L_004C9850:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 167u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9870u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9870u) [[unlikely]] return; }
L_004C9870:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 204u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9888u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9888u) [[unlikely]] return; }
L_004C9888:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 218u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C98A0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C98A0u) [[unlikely]] return; }
L_004C98A0:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 29u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C98BCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C98BCu) [[unlikely]] return; }
L_004C98BC:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C98CCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C98CCu) [[unlikely]] return; }
L_004C98CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 27712u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C97F4u | kUnwind; return; } goto L_004C97F4; } }
L_004C98DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 168u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C98FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C98FCu) [[unlikely]] return; }
L_004C98FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 205u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9914u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9914u) [[unlikely]] return; }
L_004C9914:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 223u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C992Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C992Cu) [[unlikely]] return; }
L_004C992C:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 30u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9948u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9948u) [[unlikely]] return; }
L_004C9948:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9958u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9958u) [[unlikely]] return; }
L_004C9958:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 27744u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C9828u | kUnwind; return; } goto L_004C9828; } }
L_004C9968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9970u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C9970u) [[unlikely]] return; }
L_004C9970:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C99A0; } }
L_004C9978:
    set32(c.r[4], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C82F0u | kUnwind; return; } goto L_004C82F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C82F0u | kUnwind; return; } goto L_004C82F0; } }
L_004C99A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 169u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C99C0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C99C0u) [[unlikely]] return; }
L_004C99C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 206u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C99D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C99D8u) [[unlikely]] return; }
L_004C99D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 212u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C99F0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C99F0u) [[unlikely]] return; }
L_004C99F0:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 31u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9A0Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9A0Cu) [[unlikely]] return; }
L_004C9A0C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9A1Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9A1Cu) [[unlikely]] return; }
L_004C9A1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 27776u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C9978u | kUnwind; return; } goto L_004C9978; } }
L_004C9A2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9A34u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C9A34u) [[unlikely]] return; }
L_004C9A34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C9A98; } }
L_004C9A3C:
    set32(c.r[3], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004C9A60; } }
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_004C9A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9A68u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C9A68u) [[unlikely]] return; }
L_004C9A68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C9B24; } }
L_004C9A70:
    set32(c.r[4], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C82F0u | kUnwind; return; } goto L_004C82F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C82F0u | kUnwind; return; } goto L_004C82F0; } }
L_004C9A98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 163u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9AB8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9AB8u) [[unlikely]] return; }
L_004C9AB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 200u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9AD0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9AD0u) [[unlikely]] return; }
L_004C9AD0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 215u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9AE8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9AE8u) [[unlikely]] return; }
L_004C9AE8:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 26u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9B04u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9B04u) [[unlikely]] return; }
L_004C9B04:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9B14u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9B14u) [[unlikely]] return; }
L_004C9B14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 27584u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C9A3Cu | kUnwind; return; } goto L_004C9A3C; } }
L_004C9B24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 164u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9B44u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9B44u) [[unlikely]] return; }
L_004C9B44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 201u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9B5Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9B5Cu) [[unlikely]] return; }
L_004C9B5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 234u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9B74u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9B74u) [[unlikely]] return; }
L_004C9B74:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 27u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9B90u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9B90u) [[unlikely]] return; }
L_004C9B90:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9BA0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9BA0u) [[unlikely]] return; }
L_004C9BA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 27616u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C9A70u | kUnwind; return; } goto L_004C9A70; } }
L_004C9BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9BB8u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0002(c, 171u, depth + 1u); else { c.pc = 0x0020B230u; return; } if (c.pc != 0x004C9BB8u) [[unlikely]] return; }
L_004C9BB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004C9BE8; } }
L_004C9BC0:
    set32(c.r[4], ld32((c.r[17].w[0] + 204u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 204u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 200u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C82F0u | kUnwind; return; } goto L_004C82F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[18].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C82F0u | kUnwind; return; } goto L_004C82F0; } }
L_004C9BE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 165u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9C08u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9C08u) [[unlikely]] return; }
L_004C9C08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 202u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9C20u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9C20u) [[unlikely]] return; }
L_004C9C20:
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 35u);
    st32((c.r[18].w[0] + 12u), 0u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9C40u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9C40u) [[unlikely]] return; }
L_004C9C40:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9C50u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9C50u) [[unlikely]] return; }
L_004C9C50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 27648u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C9BC0u | kUnwind; return; } goto L_004C9BC0; } }
L_004C9C60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 170u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9C80u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9C80u) [[unlikely]] return; }
L_004C9C80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 207u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9C98u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9C98u) [[unlikely]] return; }
L_004C9C98:
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 36u);
    st32((c.r[18].w[0] + 12u), 0u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9CB8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9CB8u) [[unlikely]] return; }
L_004C9CB8:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9CC8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9CC8u) [[unlikely]] return; }
L_004C9CC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 27808u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C8298u | kUnwind; return; } goto L_004C8298; } }
L_004C9CD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] - 27872u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 171u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9CF8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9CF8u) [[unlikely]] return; }
L_004C9CF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    set32(c.r[5], 0u + 208u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9D10u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9D10u) [[unlikely]] return; }
L_004C9D10:
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], 0u + 37u);
    st32((c.r[18].w[0] + 12u), 0u);
    st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9D30u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9D30u) [[unlikely]] return; }
L_004C9D30:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9D40u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004C9D40u) [[unlikely]] return; }
L_004C9D40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 27840u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C82CCu | kUnwind; return; } goto L_004C82CC; } }
L_004C9D50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[3].w[0] + 29280u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[4].w[0] + 29284u), 0u);
    st32((c.r[3].w[0] + 29304u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[4].w[0] + 29288u), 0u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 29292u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C82FCu | kUnwind; return; } goto L_004C82FC; } }
L_004C9D7C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004C9D90:
    set32(c.r[29], c.r[29].w[0] - 752u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9DBCu); set32(c.r[5], 0u + 210u);  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9DBCu) [[unlikely]] return; }
L_004C9DBC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9DD0u); set32(c.r[4], c.r[29].w[0] + 720u);  if (depth < kMaxDepth) unit_0046(c, 169u, depth + 1u); else { c.pc = 0x0031BB40u; return; } if (c.pc != 0x004C9DD0u) [[unlikely]] return; }
L_004C9DD0:
    set32(c.r[3], ld32((c.r[17].w[0] + 1848u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 1848u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[17].w[0] + 1844u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004CAA4C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 11520u);
    set32(c.r[2], c.r[2].w[0] - 11168u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 724u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 728u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 732u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 736u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 740u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 744u)));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 748u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CAA4C; } }
L_004C9E48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 211u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9E5Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9E5Cu) [[unlikely]] return; }
L_004C9E5C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9E70u); set32(c.r[4], c.r[29].w[0] + 688u);  if (depth < kMaxDepth) unit_0046(c, 169u, depth + 1u); else { c.pc = 0x0031BB40u; return; } if (c.pc != 0x004C9E70u) [[unlikely]] return; }
L_004C9E70:
    set32(c.r[3], ld32((c.r[17].w[0] + 1848u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 1848u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[17].w[0] + 1844u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004CAA5C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 11520u);
    set32(c.r[2], c.r[2].w[0] - 11168u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 692u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 696u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 700u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 704u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 708u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 712u)));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 716u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CAA5C; } }
L_004C9EE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 222u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9EFCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9EFCu) [[unlikely]] return; }
L_004C9EFC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9F10u); set32(c.r[4], c.r[29].w[0] + 656u);  if (depth < kMaxDepth) unit_0046(c, 169u, depth + 1u); else { c.pc = 0x0031BB40u; return; } if (c.pc != 0x004C9F10u) [[unlikely]] return; }
L_004C9F10:
    set32(c.r[3], ld32((c.r[17].w[0] + 1848u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 1848u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[17].w[0] + 1844u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004CAA6C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 11520u);
    set32(c.r[2], c.r[2].w[0] - 11168u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 660u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 664u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 668u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 672u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 676u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 680u)));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 684u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CAA6C; } }
L_004C9F88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 218u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9F9Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004C9F9Cu) [[unlikely]] return; }
L_004C9F9C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004C9FB0u); set32(c.r[4], c.r[29].w[0] + 624u);  if (depth < kMaxDepth) unit_0046(c, 169u, depth + 1u); else { c.pc = 0x0031BB40u; return; } if (c.pc != 0x004C9FB0u) [[unlikely]] return; }
L_004C9FB0:
    set32(c.r[3], ld32((c.r[17].w[0] + 1848u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 1848u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[17].w[0] + 1844u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004CAA7C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 11520u);
    set32(c.r[2], c.r[2].w[0] - 11168u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 628u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 632u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 636u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 640u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 644u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 648u)));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 652u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CAA7C; } }
L_004CA028:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 212u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA03Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004CA03Cu) [[unlikely]] return; }
L_004CA03C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA050u); set32(c.r[4], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_0046(c, 169u, depth + 1u); else { c.pc = 0x0031BB40u; return; } if (c.pc != 0x004CA050u) [[unlikely]] return; }
L_004CA050:
    set32(c.r[3], ld32((c.r[17].w[0] + 1848u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 1848u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[17].w[0] + 1844u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004CAA8C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 11520u);
    set32(c.r[2], c.r[2].w[0] - 11168u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 596u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 600u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 604u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 608u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 612u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 616u)));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 620u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CAA8C; } }
L_004CA0C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 213u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA0DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004CA0DCu) [[unlikely]] return; }
L_004CA0DC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA0F0u); set32(c.r[4], c.r[29].w[0] + 560u);  if (depth < kMaxDepth) unit_0046(c, 169u, depth + 1u); else { c.pc = 0x0031BB40u; return; } if (c.pc != 0x004CA0F0u) [[unlikely]] return; }
L_004CA0F0:
    set32(c.r[3], ld32((c.r[17].w[0] + 1848u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 1848u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[17].w[0] + 1844u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004CAA9C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 11520u);
    set32(c.r[2], c.r[2].w[0] - 11168u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 564u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 568u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 572u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 576u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 580u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 584u)));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 588u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CAA9C; } }
L_004CA168:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 214u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA17Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004CA17Cu) [[unlikely]] return; }
L_004CA17C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA190u); set32(c.r[4], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_0046(c, 169u, depth + 1u); else { c.pc = 0x0031BB40u; return; } if (c.pc != 0x004CA190u) [[unlikely]] return; }
L_004CA190:
    set32(c.r[3], ld32((c.r[17].w[0] + 1848u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 1848u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[17].w[0] + 1844u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004CAAAC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 11520u);
    set32(c.r[2], c.r[2].w[0] - 11168u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 532u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 536u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 540u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 544u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 548u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 552u)));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 556u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CAAAC; } }
L_004CA208:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 229u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA21Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004CA21Cu) [[unlikely]] return; }
L_004CA21C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA230u); set32(c.r[4], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_0046(c, 169u, depth + 1u); else { c.pc = 0x0031BB40u; return; } if (c.pc != 0x004CA230u) [[unlikely]] return; }
L_004CA230:
    set32(c.r[3], ld32((c.r[17].w[0] + 1848u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 1848u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[17].w[0] + 1844u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004CAABC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 11520u);
    set32(c.r[2], c.r[2].w[0] - 11168u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 500u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 504u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 508u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 512u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 516u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 520u)));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 524u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CAABC; } }
L_004CA2A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 217u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA2BCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004CA2BCu) [[unlikely]] return; }
L_004CA2BC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA2D0u); set32(c.r[4], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_0046(c, 169u, depth + 1u); else { c.pc = 0x0031BB40u; return; } if (c.pc != 0x004CA2D0u) [[unlikely]] return; }
L_004CA2D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 1848u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 1848u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[17].w[0] + 1844u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004CAACC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 11520u);
    set32(c.r[2], c.r[2].w[0] - 11168u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 468u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 472u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 476u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 480u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 484u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 488u)));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 492u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CAACC; } }
L_004CA348:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 219u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA35Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004CA35Cu) [[unlikely]] return; }
L_004CA35C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA370u); set32(c.r[4], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_0046(c, 169u, depth + 1u); else { c.pc = 0x0031BB40u; return; } if (c.pc != 0x004CA370u) [[unlikely]] return; }
L_004CA370:
    set32(c.r[3], ld32((c.r[17].w[0] + 1848u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 1848u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[17].w[0] + 1844u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004CAADC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 11520u);
    set32(c.r[2], c.r[2].w[0] - 11168u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 436u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 444u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 448u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 452u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 456u)));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 460u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CAADC; } }
L_004CA3E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 223u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA3FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004CA3FCu) [[unlikely]] return; }
L_004CA3FC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA410u); set32(c.r[4], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_0046(c, 169u, depth + 1u); else { c.pc = 0x0031BB40u; return; } if (c.pc != 0x004CA410u) [[unlikely]] return; }
L_004CA410:
    set32(c.r[3], ld32((c.r[17].w[0] + 1848u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 1848u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[17].w[0] + 1844u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004CAAEC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 11520u);
    set32(c.r[2], c.r[2].w[0] - 11168u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 404u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 408u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 412u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 416u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 420u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 424u)));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 428u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CAAEC; } }
L_004CA488:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 224u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA49Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004CA49Cu) [[unlikely]] return; }
L_004CA49C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA4B0u); set32(c.r[4], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0046(c, 169u, depth + 1u); else { c.pc = 0x0031BB40u; return; } if (c.pc != 0x004CA4B0u) [[unlikely]] return; }
L_004CA4B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 1848u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 1848u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[17].w[0] + 1844u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004CAAFC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 11520u);
    set32(c.r[2], c.r[2].w[0] - 11168u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 372u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 380u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 384u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 388u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 392u)));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 396u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CAAFC; } }
L_004CA528:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 220u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA53Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004CA53Cu) [[unlikely]] return; }
L_004CA53C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA550u); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0046(c, 169u, depth + 1u); else { c.pc = 0x0031BB40u; return; } if (c.pc != 0x004CA550u) [[unlikely]] return; }
L_004CA550:
    set32(c.r[3], ld32((c.r[17].w[0] + 1848u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 1848u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[17].w[0] + 1844u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004CAB0C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 11520u);
    set32(c.r[2], c.r[2].w[0] - 11168u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 348u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 352u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 356u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 360u)));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 364u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CAB0C; } }
L_004CA5C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 221u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA5DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004CA5DCu) [[unlikely]] return; }
L_004CA5DC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA5F0u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0046(c, 169u, depth + 1u); else { c.pc = 0x0031BB40u; return; } if (c.pc != 0x004CA5F0u) [[unlikely]] return; }
L_004CA5F0:
    set32(c.r[3], ld32((c.r[17].w[0] + 1848u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 1848u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[17].w[0] + 1844u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004CAB1C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 11520u);
    set32(c.r[2], c.r[2].w[0] - 11168u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 308u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 316u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 320u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 324u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 328u)));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 332u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CAB1C; } }
L_004CA668:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 227u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA67Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004CA67Cu) [[unlikely]] return; }
L_004CA67C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA690u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0046(c, 169u, depth + 1u); else { c.pc = 0x0031BB40u; return; } if (c.pc != 0x004CA690u) [[unlikely]] return; }
L_004CA690:
    set32(c.r[3], ld32((c.r[17].w[0] + 1848u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 1848u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[17].w[0] + 1844u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004CAB2C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 11520u);
    set32(c.r[2], c.r[2].w[0] - 11168u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 276u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 280u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 284u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 288u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 292u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 296u)));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 300u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CAB2C; } }
L_004CA708:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 228u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA71Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004CA71Cu) [[unlikely]] return; }
L_004CA71C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA730u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 169u, depth + 1u); else { c.pc = 0x0031BB40u; return; } if (c.pc != 0x004CA730u) [[unlikely]] return; }
L_004CA730:
    set32(c.r[4], ld32((c.r[17].w[0] + 1848u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 1848u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], ld32((c.r[17].w[0] + 1844u)));
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004CAB3C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] - 11520u);
    set32(c.r[3], c.r[3].w[0] - 11168u);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 244u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 252u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    st32((c.r[5].w[0] + 16u), c.f[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 260u));
    st32((c.r[5].w[0] + 20u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 264u)));
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 268u)));
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CAB3C; } }
L_004CA7A8:
    set32(c.r[3], 0u + 50u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_004CAB4C; } }
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004CACD4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 215u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA7D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004CA7D4u) [[unlikely]] return; }
L_004CA7D4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA7E8u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0046(c, 169u, depth + 1u); else { c.pc = 0x0031BB40u; return; } if (c.pc != 0x004CA7E8u) [[unlikely]] return; }
L_004CA7E8:
    set32(c.r[3], ld32((c.r[17].w[0] + 1848u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 1848u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[17].w[0] + 1844u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004CACA4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 11520u);
    set32(c.r[2], c.r[2].w[0] - 11168u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CACA4; } }
L_004CA860:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 216u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA874u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004CA874u) [[unlikely]] return; }
L_004CA874:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA888u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0046(c, 169u, depth + 1u); else { c.pc = 0x0031BB40u; return; } if (c.pc != 0x004CA888u) [[unlikely]] return; }
L_004CA888:
    set32(c.r[3], ld32((c.r[17].w[0] + 1848u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 1848u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[17].w[0] + 1844u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004CACB4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 11520u);
    set32(c.r[2], c.r[2].w[0] - 11168u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 124u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CACB4; } }
L_004CA900:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 225u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA914u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004CA914u) [[unlikely]] return; }
L_004CA914:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA928u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0046(c, 169u, depth + 1u); else { c.pc = 0x0031BB40u; return; } if (c.pc != 0x004CA928u) [[unlikely]] return; }
L_004CA928:
    set32(c.r[3], ld32((c.r[17].w[0] + 1848u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 1848u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[17].w[0] + 1844u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004CACC4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 11520u);
    set32(c.r[2], c.r[2].w[0] - 11168u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CACC4; } }
L_004CA9A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 226u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA9B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004CA9B4u) [[unlikely]] return; }
L_004CA9B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CA9C8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 169u, depth + 1u); else { c.pc = 0x0031BB40u; return; } if (c.pc != 0x004CA9C8u) [[unlikely]] return; }
L_004CA9C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 1848u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 1848u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], ld32((c.r[17].w[0] + 1844u)));
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004CAA38; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] - 11520u);
    set32(c.r[3], c.r[3].w[0] - 11168u);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 60u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[5].w[0] + 16u), c.f[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    st32((c.r[5].w[0] + 20u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 20;
L_004CAA38:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 11520u);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 3;
L_004CAA44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004CACD8; } }
L_004CAA4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 11520u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 720u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C9E48u | kUnwind; return; } goto L_004C9E48; } }
L_004CAA5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 11520u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 688u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C9EE8u | kUnwind; return; } goto L_004C9EE8; } }
L_004CAA6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 11520u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 656u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004C9F88u | kUnwind; return; } goto L_004C9F88; } }
L_004CAA7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 11520u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 624u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CA028u | kUnwind; return; } goto L_004CA028; } }
L_004CAA8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 11520u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 592u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CA0C8u | kUnwind; return; } goto L_004CA0C8; } }
L_004CAA9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 11520u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 560u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CA168u | kUnwind; return; } goto L_004CA168; } }
L_004CAAAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 11520u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 528u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CA208u | kUnwind; return; } goto L_004CA208; } }
L_004CAABC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 11520u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 496u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CA2A8u | kUnwind; return; } goto L_004CA2A8; } }
L_004CAACC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 11520u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 464u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CA348u | kUnwind; return; } goto L_004CA348; } }
L_004CAADC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 11520u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 432u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CA3E8u | kUnwind; return; } goto L_004CA3E8; } }
L_004CAAEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 11520u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 400u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CA488u | kUnwind; return; } goto L_004CA488; } }
L_004CAAFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 11520u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 368u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CA528u | kUnwind; return; } goto L_004CA528; } }
L_004CAB0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 11520u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 336u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CA5C8u | kUnwind; return; } goto L_004CA5C8; } }
L_004CAB1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 11520u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 304u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CA668u | kUnwind; return; } goto L_004CA668; } }
L_004CAB2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 11520u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 272u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CA708u | kUnwind; return; } goto L_004CA708; } }
L_004CAB3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 11520u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 240u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CA7A8u | kUnwind; return; } goto L_004CA7A8; } }
L_004CAB4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 215u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAB60u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004CAB60u) [[unlikely]] return; }
L_004CAB60:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAB74u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0046(c, 169u, depth + 1u); else { c.pc = 0x0031BB40u; return; } if (c.pc != 0x004CAB74u) [[unlikely]] return; }
L_004CAB74:
    set32(c.r[3], ld32((c.r[17].w[0] + 1848u)));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 1848u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[17].w[0] + 1844u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004CAC94; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 11520u);
    set32(c.r[2], c.r[2].w[0] - 11168u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 228u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    st32((c.r[4].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CAC94; } }
L_004CABEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 216u);
    set32(c.r[4], c.r[4].w[0] - 19120u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAC00u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 65u, depth + 1u); else { c.pc = 0x002F0670u; return; } if (c.pc != 0x004CAC00u) [[unlikely]] return; }
L_004CAC00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[12] = c.r[3].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAC14u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 169u, depth + 1u); else { c.pc = 0x0031BB40u; return; } if (c.pc != 0x004CAC14u) [[unlikely]] return; }
L_004CAC14:
    set32(c.r[4], ld32((c.r[17].w[0] + 1848u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 1848u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], ld32((c.r[17].w[0] + 1844u)));
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004CAC84; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] - 11520u);
    set32(c.r[3], c.r[3].w[0] - 11168u);
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    st32((c.r[5].w[0] + 16u), c.f[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    st32((c.r[5].w[0] + 20u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 20;
L_004CAC84:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 11520u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CAA44u | kUnwind; return; } goto L_004CAA44; } }
L_004CAC94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 11520u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CABECu | kUnwind; return; } goto L_004CABEC; } }
L_004CACA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 11520u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 144u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CA860u | kUnwind; return; } goto L_004CA860; } }
L_004CACB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 11520u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 112u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CA900u | kUnwind; return; } goto L_004CA900; } }
L_004CACC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 11520u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CA9A0u | kUnwind; return; } goto L_004CA9A0; } }
L_004CACD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004CACD8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 752u);  c.pc = t; return; }
L_004CACF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_004CAEB0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 204u)));
    c.r[1].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004CAD80; } }
L_004CAD24:
    set32(c.r[2], ld32((c.r[19].w[0] + 200u)));
    c.r[3].d[0] = c.r[17].d[0] & 255ull;
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004CAD68; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004CAD58; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAD58u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CAD58u) [[unlikely]] return; }
L_004CAD58:
    set32(c.r[2], ld32((c.r[19].w[0] + 200u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 4;
L_004CAD68:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 204u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CAD24u | kUnwind; return; } goto L_004CAD24; } }
L_004CAD80:
    set32(c.r[2], ld32((c.r[19].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004CADA8; } }
L_004CAD8C:
    set32(c.r[2], ld32((c.r[19].w[0] + 204u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 204u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CAD8Cu | kUnwind; return; } goto L_004CAD8C; } }
L_004CADA8:
    set32(c.r[4], ld32((c.r[19].w[0] + 1848u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004CAEB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 11520u);
    set32(c.r[3], c.r[3].w[0] - 11168u);
    c.budget -= 4;
L_004CADC4:
    set32(c.r[4], ld32((c.r[19].w[0] + 1848u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[19].w[0] + 1848u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 1848u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 1844u)));
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004CADF8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[4].w[0]), c.r[3].w[0]);  if (t) { goto L_004CADF8; } }
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_004CADF8:
    set32(c.r[4], ld32((c.r[19].w[0] + 1848u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CADC4u | kUnwind; return; } goto L_004CADC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[19].w[0] + 244u);  if (t) { goto L_004CAEBC; } }
L_004CAE0C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004CAE68; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 11520u);
    set32(c.r[4], c.r[4].w[0] - 11168u);
    c.budget -= 4;
L_004CAE24:
    set32(c.r[2], ld32((c.r[19].w[0] + 1848u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 1848u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 1848u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 1844u)));
    set32(c.r[5], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004CAE58; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { goto L_004CAE58; } }
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_004CAE58:
    set32(c.r[2], ld32((c.r[19].w[0] + 1848u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CAE24u | kUnwind; return; } goto L_004CAE24; } }
    c.budget -= 1;
L_004CAE68:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004CAE98; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004CAE98; } }
L_004CAE7C:
    set32(c.r[2], ld32((c.r[19].w[0] + 204u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 204u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 204u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CAE7Cu | kUnwind; return; } goto L_004CAE7C; } }
L_004CAE98:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004CAEB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CAEB0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 166u, depth + 1u); else { c.pc = 0x0020B180u; return; } if (c.pc != 0x004CAEB0u) [[unlikely]] return; }
L_004CAEB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_004CAECC; } }
L_004CAEB8:
    set32(c.r[2], c.r[19].w[0] + 244u);
    c.budget -= 1;
L_004CAEBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CAE68u | kUnwind; return; } goto L_004CAE68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CAE0Cu | kUnwind; return; } goto L_004CAE0C; } }
L_004CAECC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004CAEF0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CAF70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 29166u));
    c.r[2].d[0] = c.r[5].d[0] << 54;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004CAF78; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 29216u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004CAF80; } }
    c.r[2].d[0] = c.r[5].d[0] << 53;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004CAF88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29178u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_004CAF88; } }
    set32(c.r[3], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] + 29364u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CAFC4; } }
L_004CAF70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CAFC4; } }
L_004CAF78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CAFC4; } }
L_004CAF80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CAFC4; } }
L_004CAF88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 29178u));
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29202u));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004CAFB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CAFC4; } }
L_004CAFB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29166u));
    c.r[2].d[0] = c.r[2].d[0] << 53;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_004CAFC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004CAFD0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB040; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29166u));
    c.r[2].d[0] = c.r[2].d[0] << 54;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CAFFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB044; } }
L_004CAFFC:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 29216u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB028; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB038; } }
L_004CB028:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29200u));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
L_004CB038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CB044; } }
L_004CB040:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004CB044:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004CB050:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB0D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 29166u));
    c.r[2].d[0] = c.r[5].d[0] << 54;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004CB0E0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 29216u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004CB0E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29154u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB0F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29202u));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004CB0C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB0D0; } }
L_004CB0C4:
    c.r[2].d[0] = c.r[5].d[0] << 53;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_004CB0D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CB100; } }
L_004CB0D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB100; } }
L_004CB0E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB100; } }
L_004CB0E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB100; } }
L_004CB0F0:
    set32(c.r[3], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] + 29340u), c.r[3].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_004CB100:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004CB110:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB190; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 29166u));
    c.r[2].d[0] = c.r[5].d[0] << 54;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004CB198; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 29216u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004CB1A0; } }
    c.r[2].d[0] = c.r[5].d[0] << 53;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004CB1A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29192u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_004CB1A8; } }
    set32(c.r[3], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] + 29336u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB1E4; } }
L_004CB190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB1E4; } }
L_004CB198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB1E4; } }
L_004CB1A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB1E4; } }
L_004CB1A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 29192u));
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29202u));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004CB1D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB1E4; } }
L_004CB1D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29166u));
    c.r[2].d[0] = c.r[2].d[0] << 53;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_004CB1E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004CB1F0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB260; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29166u));
    c.r[2].d[0] = c.r[2].d[0] << 54;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB21C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB264; } }
L_004CB21C:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 29216u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB248; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB258; } }
L_004CB248:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29200u));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
L_004CB258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CB264; } }
L_004CB260:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004CB264:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004CB270:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB2F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 29166u));
    c.r[2].d[0] = c.r[5].d[0] << 54;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004CB300; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 29216u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004CB308; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29154u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB310; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29202u));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004CB2E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB2F0; } }
L_004CB2E4:
    c.r[2].d[0] = c.r[5].d[0] << 53;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_004CB2F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CB320; } }
L_004CB2F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB320; } }
L_004CB300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB320; } }
L_004CB308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB320; } }
L_004CB310:
    set32(c.r[3], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] + 29328u), c.r[3].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_004CB320:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004CB330:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB3B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29166u));
    c.r[2].d[0] = c.r[2].d[0] << 54;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004CB3C0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 29216u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB380; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB3C4; } }
L_004CB380:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1497u));
    c.r[2].d[0] = c.r[2].d[0] << 61;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004CB3AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29200u));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_004CB3B0; } }
L_004CB3AC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004CB3B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CB3C4; } }
L_004CB3B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB3C4; } }
L_004CB3C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004CB3C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004CB3D0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB46C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 29166u));
    c.r[2].d[0] = c.r[5].d[0] << 54;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004CB474; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 29216u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004CB47C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 29320u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB484; } }
    c.r[2].d[0] = c.r[5].d[0] << 52;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB48C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29202u));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004CB458; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB464; } }
L_004CB458:
    c.r[2].d[0] = c.r[5].d[0] << 53;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_004CB464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CB49C; } }
L_004CB46C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB49C; } }
L_004CB474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB49C; } }
L_004CB47C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB49C; } }
L_004CB484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB49C; } }
L_004CB48C:
    set32(c.r[3], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] + 29324u), c.r[3].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_004CB49C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004CB4B0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB598; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[5].d[0] = ld16((c.r[2].w[0] + 29166u));
    c.r[2].d[0] = c.r[5].d[0] << 54;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004CB5A0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 29216u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004CB5A8; } }
    c.r[2].d[0] = c.r[5].d[0] << 52;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB5B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29202u));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_004CB5B0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004CB53C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004CB558; } }
L_004CB53C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004CB558:
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004CB580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004CB590; } }
L_004CB580:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29200u));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
L_004CB590:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CB5C0; } }
L_004CB598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB5C0; } }
L_004CB5A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB5C0; } }
L_004CB5A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB5C0; } }
L_004CB5B0:
    set32(c.r[3], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st32((c.r[2].w[0] + 29320u), c.r[3].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_004CB5C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004CB5D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004CB5EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB658; } }
L_004CB5EC:
    set32(c.r[4], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 252u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB600u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CB600u) [[unlikely]] return; }
L_004CB600:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(51ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004CB614; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB658; } }
L_004CB614:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[4].w[0] - 10288u);
    set32(c.r[5], c.r[5].w[0] - 21820u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB62Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x002BD2E0u; return; } if (c.pc != 0x004CB62Cu) [[unlikely]] return; }
L_004CB62C:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004CB654; } }
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 216u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB648u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004CB648u) [[unlikely]] return; }
L_004CB648:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_004CB654:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_004CB658:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004CB670:
    set32(c.r[6], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 212u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB7CC; } }
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004CB7CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004CB7CC; } }
    c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_004CB6A4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004CB6C8; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_004CB6C8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004CB6C8:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004CB6FC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st16((c.r[3].w[0] + 29192u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 29194u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 28u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 20u), 0u);
    c.budget -= 6;
L_004CB6FC:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB7E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 29256u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004CB7F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 29260u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004CB7F8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004CB800; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29192u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB808; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29194u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB808; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004CB784; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004CB7A0; } }
L_004CB784:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004CB7A0:
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_004CB80C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CB80C; } }
L_004CB7CC:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CB6FCu | kUnwind; return; } goto L_004CB6FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CB6A4u | kUnwind; return; } goto L_004CB6A4; } }
L_004CB7E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB80C; } }
L_004CB7F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB80C; } }
L_004CB7F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB80C; } }
L_004CB800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CB80C; } }
L_004CB808:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004CB80C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004CB820:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004CB830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004CB840:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004CB850:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_004CB860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld16((c.r[2].w[0] + 29198u));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 29216u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB93C; } }
L_004CB89C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB944; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 29216u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004CB94C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29166u));
    c.r[2].d[0] = c.r[2].d[0] << 51;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004CB954; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29148u));
    c.r[2].d[0] = c.r[2].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB95C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 29280u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB964; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 29284u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB96C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 29288u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004CB974; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBA2C; } }
L_004CB93C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CB89Cu | kUnwind; return; } goto L_004CB89C; } }
L_004CB944:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBA2C; } }
L_004CB94C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBA2C; } }
L_004CB954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBA2C; } }
L_004CB95C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBA2C; } }
L_004CB964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBA2C; } }
L_004CB96C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBA2C; } }
L_004CB974:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB984u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0028(c, 145u, depth + 1u); else { c.pc = 0x002A19A0u; return; } if (c.pc != 0x004CB984u) [[unlikely]] return; }
L_004CB984:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB994; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBA2C; } }
L_004CB994:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CB9A0u); set32(c.r[4], ld32((c.r[2].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 72u, depth + 1u); else { c.pc = 0x00450FA0u; return; } if (c.pc != 0x004CB9A0u) [[unlikely]] return; }
L_004CB9A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CB9B4; } }
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBA2C; } }
L_004CB9B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004CB9D8; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004CB9F4; } }
L_004CB9D8:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004CB9F4:
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004CBA1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBA2C; } }
L_004CBA1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 27534u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_004CBA2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004CBA40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = ld16((c.r[2].w[0] + 29196u));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 29216u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CBB08; } }
L_004CBA7C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CBB10; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 29216u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004CBB18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29166u));
    c.r[2].d[0] = c.r[2].d[0] << 51;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004CBB20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29148u));
    c.r[2].d[0] = c.r[2].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CBB28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 29280u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CBB30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 29284u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004CBB38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBBF0; } }
L_004CBB08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CBA7Cu | kUnwind; return; } goto L_004CBA7C; } }
L_004CBB10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBBF0; } }
L_004CBB18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBBF0; } }
L_004CBB20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBBF0; } }
L_004CBB28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBBF0; } }
L_004CBB30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBBF0; } }
L_004CBB38:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBB48u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0028(c, 145u, depth + 1u); else { c.pc = 0x002A19A0u; return; } if (c.pc != 0x004CBB48u) [[unlikely]] return; }
L_004CBB48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CBB58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBBF0; } }
L_004CBB58:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004CBB64u); set32(c.r[4], ld32((c.r[2].w[0] + 216u)));  if (depth < kMaxDepth) unit_0094(c, 72u, depth + 1u); else { c.pc = 0x00450FA0u; return; } if (c.pc != 0x004CBB64u) [[unlikely]] return; }
L_004CBB64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CBB78; } }
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBBF0; } }
L_004CBB78:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_004CBB9C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004CBBB8; } }
L_004CBB9C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::ee::add(c.fcr31, c.f[2], c.f[2]);
    c.budget -= 7;
L_004CBBB8:
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::ee::mul(c.fcr31, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004CBBE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBBF0; } }
L_004CBBE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 27534u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_004CBBF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004CBC00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[5].d[0] = ld16((c.r[2].w[0] + 29194u));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 29216u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CBD28; } }
L_004CBC2C:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CBD30; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 29216u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004CBD38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29166u));
    c.r[2].d[0] = c.r[2].d[0] << 51;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004CBD40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29148u));
    c.r[2].d[0] = c.r[2].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CBD48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 29216u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CBD50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 29220u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CBD58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 29236u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CBD60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 29240u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CBD68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 29256u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004CBCF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBD6C; } }
L_004CBCF4:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 44u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CBD10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBD20; } }
L_004CBD10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 27534u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_004CBD20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CBD6C; } }
L_004CBD28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CBC2Cu | kUnwind; return; } goto L_004CBC2C; } }
L_004CBD30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBD6C; } }
L_004CBD38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBD6C; } }
L_004CBD40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBD6C; } }
L_004CBD48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBD6C; } }
L_004CBD50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBD6C; } }
L_004CBD58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBD6C; } }
L_004CBD60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBD6C; } }
L_004CBD68:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004CBD6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004CBD80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[5].d[0] = ld16((c.r[2].w[0] + 29192u));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 29216u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CBEA8; } }
L_004CBDAC:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CBEB0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 29216u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004CBEB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 29316u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004CBEC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29166u));
    c.r[2].d[0] = c.r[2].d[0] << 51;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004CBEC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29148u));
    c.r[2].d[0] = c.r[2].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CBED0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 29216u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CBED8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 29220u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CBEE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 29236u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CBEE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 29240u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004CBE74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBEEC; } }
L_004CBE74:
    set32(c.r[2], ld32((c.r[28].w[0] - 29808u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 212u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 44u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004CBE90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBEA0; } }
L_004CBE90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 27534u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_004CBEA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004CBEEC; } }
L_004CBEA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004CBDACu | kUnwind; return; } goto L_004CBDAC; } }
L_004CBEB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBEEC; } }
L_004CBEB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBEEC; } }
L_004CBEC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBEEC; } }
L_004CBEC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBEEC; } }
L_004CBED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBEEC; } }
L_004CBED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBEEC; } }
L_004CBEE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004CBEEC; } }
L_004CBEE8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004CBEEC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004CBF00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[5].d[0] = ld16((c.r[2].w[0] + 29190u));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 29216u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00B3(c, 3u, depth); } }
L_004CBF2C:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00B3(c, 4u, depth); } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], c.r[2].w[0] + 29216u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00B3(c, 5u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 29166u));
    c.r[2].d[0] = c.r[3].d[0] << 51;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00B3(c, 6u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29148u));
    c.r[2].d[0] = c.r[2].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00B3(c, 7u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 29216u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00B3(c, 8u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 29220u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00B3(c, 9u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 29236u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00B3(c, 10u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 29240u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004CBFE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_00B3(c, 11u, depth); } }
L_004CBFE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00610000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 29152u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004CBFFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_00B3(c, 2u, depth); } }
L_004CBFFC:
    c.r[2].d[0] = c.r[3].d[0] << 55;
    c.budget -= 1;
    [[clang::musttail]] return unit_00B3(c, 1u, depth);
}

}

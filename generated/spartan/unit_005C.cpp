#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_005C[4096] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 9, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0,
    0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0,
    0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0,
    0, 31, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0,
    37, 0, 0, 0, 38, 0, 0, 39, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0,
    55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 63, 0,
    64, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94,
    0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0,
    103, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 109,
    0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 131, 0, 0, 132, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0,
    139, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0,
    143, 0, 0, 144, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 150, 0, 0, 151,
    0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0,
    0, 160, 0, 0, 161, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 169,
    0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 178, 0, 179, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0,
    185, 0, 0, 186, 0, 0, 187, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    190, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 198, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 203, 0, 204, 0, 205, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 212, 0,
    213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0,
    224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0,
    0, 229, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0,
    245, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0,
    0, 253, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 261,
    0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 272,
    0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 281, 282, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 286, 0, 287, 0, 288, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 294, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0,
    302, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 317, 0,
    0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 327, 0, 328, 0,
    329, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 331, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 339, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0,
    0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 349, 0, 350, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0,
    358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0,
    0, 361, 0, 0, 362, 0, 363, 0, 364, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0,
    368, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 376, 0, 377, 0, 0,
    0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 380, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 388, 0, 389, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 397, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 399, 0, 400, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 406, 0, 407, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 417, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0,
    0, 0, 420, 0, 0, 421, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425,
    0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0,
    0, 428, 0, 0, 429, 0, 430, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 433, 0, 0,
    434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 437, 0, 438, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0,
};

void unit_005C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00370000;
    case 2u: goto L_0037000C;
    case 3u: goto L_00370018;
    case 4u: goto L_00370030;
    case 5u: goto L_00370044;
    case 6u: goto L_0037004C;
    case 7u: goto L_00370058;
    case 8u: goto L_00370064;
    case 9u: goto L_00370078;
    case 10u: goto L_003700B0;
    case 11u: goto L_003700EC;
    case 12u: goto L_003700F8;
    case 13u: goto L_00370110;
    case 14u: goto L_00370124;
    case 15u: goto L_0037012C;
    case 16u: goto L_00370138;
    case 17u: goto L_00370144;
    case 18u: goto L_00370158;
    case 19u: goto L_00370190;
    case 20u: goto L_003701B4;
    case 21u: goto L_003701BC;
    case 22u: goto L_003701CC;
    case 23u: goto L_003701E8;
    case 24u: goto L_003701F4;
    case 25u: goto L_00370204;
    case 26u: goto L_0037021C;
    case 27u: goto L_00370228;
    case 28u: goto L_0037023C;
    case 29u: goto L_00370260;
    case 30u: goto L_00370278;
    case 31u: goto L_00370284;
    case 32u: goto L_0037028C;
    case 33u: goto L_0037029C;
    case 34u: goto L_003702B8;
    case 35u: goto L_003702E0;
    case 36u: goto L_003702F0;
    case 37u: goto L_00370300;
    case 38u: goto L_00370310;
    case 39u: goto L_0037031C;
    case 40u: goto L_00370324;
    case 41u: goto L_00370334;
    case 42u: goto L_00370350;
    case 43u: goto L_00370370;
    case 44u: goto L_00370390;
    case 45u: goto L_003703AC;
    case 46u: goto L_003703BC;
    case 47u: goto L_003703C4;
    case 48u: goto L_003703D8;
    case 49u: goto L_003703E8;
    case 50u: goto L_00370410;
    case 51u: goto L_00370424;
    case 52u: goto L_00370440;
    case 53u: goto L_00370464;
    case 54u: goto L_0037046C;
    case 55u: goto L_00370480;
    case 56u: goto L_00370490;
    case 57u: goto L_003704A0;
    case 58u: goto L_003704AC;
    case 59u: goto L_003704C0;
    case 60u: goto L_003704C8;
    case 61u: goto L_003704D8;
    case 62u: goto L_003704E0;
    case 63u: goto L_003704F8;
    case 64u: goto L_00370500;
    case 65u: goto L_00370518;
    case 66u: goto L_00370524;
    case 67u: goto L_00370534;
    case 68u: goto L_00370540;
    case 69u: goto L_00370554;
    case 70u: goto L_0037056C;
    case 71u: goto L_003705A0;
    case 72u: goto L_003705C0;
    case 73u: goto L_003705F0;
    case 74u: goto L_0037060C;
    case 75u: goto L_00370618;
    case 76u: goto L_00370628;
    case 77u: goto L_00370648;
    case 78u: goto L_00370650;
    case 79u: goto L_00370660;
    case 80u: goto L_00370680;
    case 81u: goto L_00370688;
    case 82u: goto L_00370698;
    case 83u: goto L_003706B8;
    case 84u: goto L_003706C0;
    case 85u: goto L_003706D4;
    case 86u: goto L_00370710;
    case 87u: goto L_0037072C;
    case 88u: goto L_00370748;
    case 89u: goto L_00370764;
    case 90u: goto L_00370780;
    case 91u: goto L_0037079C;
    case 92u: goto L_003707B8;
    case 93u: goto L_003707D0;
    case 94u: goto L_003707FC;
    case 95u: goto L_00370814;
    case 96u: goto L_0037082C;
    case 97u: goto L_00370848;
    case 98u: goto L_00370864;
    case 99u: goto L_00370880;
    case 100u: goto L_003708B0;
    case 101u: goto L_003708C0;
    case 102u: goto L_003708F4;
    case 103u: goto L_00370900;
    case 104u: goto L_0037090C;
    case 105u: goto L_00370914;
    case 106u: goto L_00370950;
    case 107u: goto L_00370968;
    case 108u: goto L_00370970;
    case 109u: goto L_0037097C;
    case 110u: goto L_00370988;
    case 111u: goto L_003709A0;
    case 112u: goto L_003709C0;
    case 113u: goto L_003709D8;
    case 114u: goto L_003709F0;
    case 115u: goto L_00370A10;
    case 116u: goto L_00370A20;
    case 117u: goto L_00370A34;
    case 118u: goto L_00370A50;
    case 119u: goto L_00370A90;
    case 120u: goto L_00370AA8;
    case 121u: goto L_00370B30;
    case 122u: goto L_00370B54;
    case 123u: goto L_00370B60;
    case 124u: goto L_00370B70;
    case 125u: goto L_00370B90;
    case 126u: goto L_00370BC8;
    case 127u: goto L_00370BE0;
    case 128u: goto L_00370BF0;
    case 129u: goto L_00370C10;
    case 130u: goto L_00370C68;
    case 131u: goto L_00370C6C;
    case 132u: goto L_00370C78;
    case 133u: goto L_00370C98;
    case 134u: goto L_00370CA8;
    case 135u: goto L_00370CB4;
    case 136u: goto L_00370CBC;
    case 137u: goto L_00370CC4;
    case 138u: goto L_00370CF8;
    case 139u: goto L_00370D00;
    case 140u: goto L_00370D10;
    case 141u: goto L_00370D1C;
    case 142u: goto L_00370D64;
    case 143u: goto L_00370D80;
    case 144u: goto L_00370D8C;
    case 145u: goto L_00370D98;
    case 146u: goto L_00370DA0;
    case 147u: goto L_00370DA8;
    case 148u: goto L_00370DDC;
    case 149u: goto L_00370DE4;
    case 150u: goto L_00370DF0;
    case 151u: goto L_00370DFC;
    case 152u: goto L_00370E20;
    case 153u: goto L_00370E30;
    case 154u: goto L_00370E9C;
    case 155u: goto L_00370EB0;
    case 156u: goto L_00371048;
    case 157u: goto L_0037104C;
    case 158u: goto L_00371054;
    case 159u: goto L_00371074;
    case 160u: goto L_00371084;
    case 161u: goto L_00371090;
    case 162u: goto L_00371098;
    case 163u: goto L_003710A0;
    case 164u: goto L_003711A0;
    case 165u: goto L_003711B0;
    case 166u: goto L_003711BC;
    case 167u: goto L_003712E4;
    case 168u: goto L_003712F0;
    case 169u: goto L_003712FC;
    case 170u: goto L_00371304;
    case 171u: goto L_0037130C;
    case 172u: goto L_0037140C;
    case 173u: goto L_00371418;
    case 174u: goto L_00371424;
    case 175u: goto L_0037144C;
    case 176u: goto L_0037145C;
    case 177u: goto L_00371468;
    case 178u: goto L_00371470;
    case 179u: goto L_00371478;
    case 180u: goto L_003714D0;
    case 181u: goto L_003714D8;
    case 182u: goto L_003714E8;
    case 183u: goto L_003714F4;
    case 184u: goto L_00371564;
    case 185u: goto L_00371580;
    case 186u: goto L_0037158C;
    case 187u: goto L_00371598;
    case 188u: goto L_003715A0;
    case 189u: goto L_003715A8;
    case 190u: goto L_00371600;
    case 191u: goto L_00371608;
    case 192u: goto L_00371614;
    case 193u: goto L_00371620;
    case 194u: goto L_00371640;
    case 195u: goto L_00371684;
    case 196u: goto L_003716B0;
    case 197u: goto L_003716E0;
    case 198u: goto L_0037179C;
    case 199u: goto L_003717A0;
    case 200u: goto L_003717A8;
    case 201u: goto L_003717C8;
    case 202u: goto L_003717D8;
    case 203u: goto L_003717E4;
    case 204u: goto L_003717EC;
    case 205u: goto L_003717F4;
    case 206u: goto L_00371844;
    case 207u: goto L_00371854;
    case 208u: goto L_00371860;
    case 209u: goto L_003718D8;
    case 210u: goto L_003718E4;
    case 211u: goto L_003718F0;
    case 212u: goto L_003718F8;
    case 213u: goto L_00371900;
    case 214u: goto L_00371950;
    case 215u: goto L_0037195C;
    case 216u: goto L_00371968;
    case 217u: goto L_00371990;
    case 218u: goto L_003719A0;
    case 219u: goto L_003719AC;
    case 220u: goto L_003719B4;
    case 221u: goto L_003719BC;
    case 222u: goto L_003719E8;
    case 223u: goto L_003719F0;
    case 224u: goto L_00371A00;
    case 225u: goto L_00371A0C;
    case 226u: goto L_00371A50;
    case 227u: goto L_00371A6C;
    case 228u: goto L_00371A78;
    case 229u: goto L_00371A84;
    case 230u: goto L_00371A8C;
    case 231u: goto L_00371A94;
    case 232u: goto L_00371AC0;
    case 233u: goto L_00371AC8;
    case 234u: goto L_00371AD4;
    case 235u: goto L_00371AE0;
    case 236u: goto L_00371B00;
    case 237u: goto L_00371B44;
    case 238u: goto L_00371B70;
    case 239u: goto L_00371BB0;
    case 240u: goto L_00371CB8;
    case 241u: goto L_00371CBC;
    case 242u: goto L_00371CC4;
    case 243u: goto L_00371CE4;
    case 244u: goto L_00371CF4;
    case 245u: goto L_00371D00;
    case 246u: goto L_00371D08;
    case 247u: goto L_00371D10;
    case 248u: goto L_00371D9C;
    case 249u: goto L_00371DAC;
    case 250u: goto L_00371DB8;
    case 251u: goto L_00371E6C;
    case 252u: goto L_00371E78;
    case 253u: goto L_00371E84;
    case 254u: goto L_00371E8C;
    case 255u: goto L_00371E94;
    case 256u: goto L_00371F20;
    case 257u: goto L_00371F2C;
    case 258u: goto L_00371F38;
    case 259u: goto L_00371F60;
    case 260u: goto L_00371F70;
    case 261u: goto L_00371F7C;
    case 262u: goto L_00371F84;
    case 263u: goto L_00371F8C;
    case 264u: goto L_00371FC8;
    case 265u: goto L_00371FD0;
    case 266u: goto L_00371FE0;
    case 267u: goto L_00371FEC;
    case 268u: goto L_00372040;
    case 269u: goto L_0037205C;
    case 270u: goto L_00372068;
    case 271u: goto L_00372074;
    case 272u: goto L_0037207C;
    case 273u: goto L_00372084;
    case 274u: goto L_003720C0;
    case 275u: goto L_003720C8;
    case 276u: goto L_003720D4;
    case 277u: goto L_003720E0;
    case 278u: goto L_00372100;
    case 279u: goto L_00372144;
    case 280u: goto L_00372170;
    case 281u: goto L_00372394;
    case 282u: goto L_00372398;
    case 283u: goto L_003723A0;
    case 284u: goto L_003723C0;
    case 285u: goto L_003723D0;
    case 286u: goto L_003723DC;
    case 287u: goto L_003723E4;
    case 288u: goto L_003723EC;
    case 289u: goto L_00372530;
    case 290u: goto L_00372540;
    case 291u: goto L_0037254C;
    case 292u: goto L_003726B8;
    case 293u: goto L_003726C4;
    case 294u: goto L_003726D0;
    case 295u: goto L_003726D8;
    case 296u: goto L_003726E0;
    case 297u: goto L_00372824;
    case 298u: goto L_00372830;
    case 299u: goto L_0037283C;
    case 300u: goto L_00372864;
    case 301u: goto L_00372874;
    case 302u: goto L_00372880;
    case 303u: goto L_00372888;
    case 304u: goto L_00372890;
    case 305u: goto L_0037292C;
    case 306u: goto L_00372934;
    case 307u: goto L_00372944;
    case 308u: goto L_00372950;
    case 309u: goto L_00372A04;
    case 310u: goto L_00372A20;
    case 311u: goto L_00372A2C;
    case 312u: goto L_00372A38;
    case 313u: goto L_00372A40;
    case 314u: goto L_00372A48;
    case 315u: goto L_00372AE4;
    case 316u: goto L_00372AEC;
    case 317u: goto L_00372AF8;
    case 318u: goto L_00372B04;
    case 319u: goto L_00372B24;
    case 320u: goto L_00372B68;
    case 321u: goto L_00372B90;
    case 322u: goto L_00372CA8;
    case 323u: goto L_00372CAC;
    case 324u: goto L_00372CB4;
    case 325u: goto L_00372CD4;
    case 326u: goto L_00372CE4;
    case 327u: goto L_00372CF0;
    case 328u: goto L_00372CF8;
    case 329u: goto L_00372D00;
    case 330u: goto L_00372D08;
    case 331u: goto L_00372D84;
    case 332u: goto L_00372D94;
    case 333u: goto L_00372DA0;
    case 334u: goto L_00372DB8;
    case 335u: goto L_00372DD0;
    case 336u: goto L_00372E8C;
    case 337u: goto L_00372E98;
    case 338u: goto L_00372EA4;
    case 339u: goto L_00372EAC;
    case 340u: goto L_00372EB8;
    case 341u: goto L_00372EC0;
    case 342u: goto L_00372F3C;
    case 343u: goto L_00372F48;
    case 344u: goto L_00372F54;
    case 345u: goto L_00372F6C;
    case 346u: goto L_00372F84;
    case 347u: goto L_00372FB0;
    case 348u: goto L_00372FC0;
    case 349u: goto L_00372FCC;
    case 350u: goto L_00372FD4;
    case 351u: goto L_00372FE0;
    case 352u: goto L_00372FE8;
    case 353u: goto L_0037302C;
    case 354u: goto L_00373034;
    case 355u: goto L_00373044;
    case 356u: goto L_00373050;
    case 357u: goto L_00373068;
    case 358u: goto L_00373080;
    case 359u: goto L_003730DC;
    case 360u: goto L_003730F8;
    case 361u: goto L_00373104;
    case 362u: goto L_00373110;
    case 363u: goto L_00373118;
    case 364u: goto L_00373120;
    case 365u: goto L_00373128;
    case 366u: goto L_0037316C;
    case 367u: goto L_00373174;
    case 368u: goto L_00373180;
    case 369u: goto L_0037318C;
    case 370u: goto L_003731A4;
    case 371u: goto L_003731BC;
    case 372u: goto L_003731E0;
    case 373u: goto L_00373224;
    case 374u: goto L_00373250;
    case 375u: goto L_00373368;
    case 376u: goto L_0037336C;
    case 377u: goto L_00373374;
    case 378u: goto L_00373394;
    case 379u: goto L_003733A4;
    case 380u: goto L_003733B0;
    case 381u: goto L_003733B8;
    case 382u: goto L_003733C0;
    case 383u: goto L_0037344C;
    case 384u: goto L_0037345C;
    case 385u: goto L_00373468;
    case 386u: goto L_0037351C;
    case 387u: goto L_00373528;
    case 388u: goto L_00373534;
    case 389u: goto L_0037353C;
    case 390u: goto L_00373544;
    case 391u: goto L_003735D0;
    case 392u: goto L_003735DC;
    case 393u: goto L_003735E8;
    case 394u: goto L_00373610;
    case 395u: goto L_00373620;
    case 396u: goto L_0037362C;
    case 397u: goto L_00373634;
    case 398u: goto L_0037363C;
    case 399u: goto L_00373688;
    case 400u: goto L_00373690;
    case 401u: goto L_003736A0;
    case 402u: goto L_003736AC;
    case 403u: goto L_00373710;
    case 404u: goto L_0037372C;
    case 405u: goto L_00373738;
    case 406u: goto L_00373744;
    case 407u: goto L_0037374C;
    case 408u: goto L_00373754;
    case 409u: goto L_003737A0;
    case 410u: goto L_003737A8;
    case 411u: goto L_003737B4;
    case 412u: goto L_003737C0;
    case 413u: goto L_003737E0;
    case 414u: goto L_00373824;
    case 415u: goto L_00373850;
    case 416u: goto L_00373A4C;
    case 417u: goto L_00373A50;
    case 418u: goto L_00373A58;
    case 419u: goto L_00373A78;
    case 420u: goto L_00373A88;
    case 421u: goto L_00373A94;
    case 422u: goto L_00373A9C;
    case 423u: goto L_00373AA4;
    case 424u: goto L_00373BEC;
    case 425u: goto L_00373BFC;
    case 426u: goto L_00373C08;
    case 427u: goto L_00373D78;
    case 428u: goto L_00373D84;
    case 429u: goto L_00373D90;
    case 430u: goto L_00373D98;
    case 431u: goto L_00373DA0;
    case 432u: goto L_00373EE8;
    case 433u: goto L_00373EF4;
    case 434u: goto L_00373F00;
    case 435u: goto L_00373F28;
    case 436u: goto L_00373F38;
    case 437u: goto L_00373F44;
    case 438u: goto L_00373F4C;
    case 439u: goto L_00373F54;
    case 440u: goto L_00373FC8;
    case 441u: goto L_00373FD0;
    case 442u: goto L_00373FE0;
    case 443u: goto L_00373FEC;
    default: bad_entry(c, 0x00370000u); return;
    }
L_00370000:
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037000Cu); set32(c.r[4], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x0037000Cu) [[unlikely]] return; }
L_0037000C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370018u); set32(c.r[4], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x00370018u) [[unlikely]] return; }
L_00370018:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370030u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00370030u) [[unlikely]] return; }
L_00370030:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0037004C; } }
L_00370044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00370094; } }
L_0037004C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370058u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 379u, depth + 1u); else { c.pc = 0x0035B100u; return; } if (c.pc != 0x00370058u) [[unlikely]] return; }
L_00370058:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370064u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00370064u) [[unlikely]] return; }
L_00370064:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00370078; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370078u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x00370078u) [[unlikely]] return; }
L_00370078:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037004Cu | kUnwind; return; } goto L_0037004C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370044u | kUnwind; return; } goto L_00370044; } }
L_00370094:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003700B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[7].w[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[9].w[0]));
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003700ECu); set32(c.r[4], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x003700ECu) [[unlikely]] return; }
L_003700EC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003700F8u); set32(c.r[4], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x003700F8u) [[unlikely]] return; }
L_003700F8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + 3u);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370110u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0002(c, 167u, depth + 1u); else { c.pc = 0x0020B190u; return; } if (c.pc != 0x00370110u) [[unlikely]] return; }
L_00370110:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0037012C; } }
L_00370124:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00370174; } }
L_0037012C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370138u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 310u, depth + 1u); else { c.pc = 0x0035A1B0u; return; } if (c.pc != 0x00370138u) [[unlikely]] return; }
L_00370138:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370144u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 51u, depth + 1u); else { c.pc = 0x0023C690u; return; } if (c.pc != 0x00370144u) [[unlikely]] return; }
L_00370144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00370158; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370158u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x00370158u) [[unlikely]] return; }
L_00370158:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037012Cu | kUnwind; return; } goto L_0037012C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370124u | kUnwind; return; } goto L_00370124; } }
L_00370174:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00370190:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 332u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003701B4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x003701B4u) [[unlikely]] return; }
L_003701B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003701BCu); set32(c.r[4], c.r[29].w[0] + 332u);  if (depth < kMaxDepth) unit_005C(c, 52u, depth + 1u); else { c.pc = 0x00370440u; return; } if (c.pc != 0x003701BCu) [[unlikely]] return; }
L_003701BC:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 332u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003701CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x003701CCu) [[unlikely]] return; }
L_003701CC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003701DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00370240; } }
L_003701DC:
    set32(c.r[4], c.r[29].w[0] + 328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003701E8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x003701E8u) [[unlikely]] return; }
L_003701E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003701F4u); set32(c.r[5], c.r[29].w[0] + 328u);  if (depth < kMaxDepth) unit_005B(c, 199u, depth + 1u); else { c.pc = 0x0036D7E0u; return; } if (c.pc != 0x003701F4u) [[unlikely]] return; }
L_003701F4:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370204u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00370204u) [[unlikely]] return; }
L_00370204:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00370214; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00370240; } }
L_00370214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037021Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x0037021Cu) [[unlikely]] return; }
L_0037021C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370228u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0056(c, 293u, depth + 1u); else { c.pc = 0x0035A000u; return; } if (c.pc != 0x00370228u) [[unlikely]] return; }
L_00370228:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 13409u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037023Cu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0010(c, 7u, depth + 1u); else { c.pc = 0x00240040u; return; } if (c.pc != 0x0037023Cu) [[unlikely]] return; }
L_0037023C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00370240:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_00370260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370278u); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00370278u) [[unlikely]] return; }
L_00370278:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370284u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x00370284u) [[unlikely]] return; }
L_00370284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00370294; } }
L_0037028C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003702D0; } }
L_00370294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037029Cu); set32(c.r[16], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_005C(c, 36u, depth + 1u); else { c.pc = 0x003702F0u; return; } if (c.pc != 0x0037029Cu) [[unlikely]] return; }
L_0037029C:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037028Cu | kUnwind; return; } goto L_0037028C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003702B8u); set32(c.r[16], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_005C(c, 35u, depth + 1u); else { c.pc = 0x003702E0u; return; } if (c.pc != 0x003702B8u) [[unlikely]] return; }
L_003702B8:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037028Cu | kUnwind; return; } goto L_0037028C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003702D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003702E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 32767u);  c.pc = t; return; }
L_003702F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 32768u);  c.pc = t; return; }
L_00370300:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370310u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 42u, depth + 1u); else { c.pc = 0x00370350u; return; } if (c.pc != 0x00370310u) [[unlikely]] return; }
L_00370310:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037031Cu); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_000F(c, 94u, depth + 1u); else { c.pc = 0x0023CF40u; return; } if (c.pc != 0x0037031Cu) [[unlikely]] return; }
L_0037031C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370324u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_005C(c, 73u, depth + 1u); else { c.pc = 0x003705F0u; return; } if (c.pc != 0x00370324u) [[unlikely]] return; }
L_00370324:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370334u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0023C000u; return; } if (c.pc != 0x00370334u) [[unlikely]] return; }
L_00370334:
    c.r[2].d[0] = ~(c.r[16].d[0] | 0ull);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00370350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00370378; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370370u); set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0056(c, 442u, depth + 1u); else { c.pc = 0x0035B7B0u; return; } if (c.pc != 0x00370370u) [[unlikely]] return; }
L_00370370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00370388; } }
L_00370378:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
L_00370388:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00370390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003703ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 42u, depth + 1u); else { c.pc = 0x00370350u; return; } if (c.pc != 0x003703ACu) [[unlikely]] return; }
L_003703AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003703BCu); set32(c.r[5], c.r[5].w[0] + 12378u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003703BCu) [[unlikely]] return; }
L_003703BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003703CC; } }
L_003703C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003703F4; } }
L_003703CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003703D8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 42u, depth + 1u); else { c.pc = 0x00370350u; return; } if (c.pc != 0x003703D8u) [[unlikely]] return; }
L_003703D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003703E8u); set32(c.r[5], c.r[5].w[0] + 13006u);  if (depth < kMaxDepth) unit_0058(c, 5u, depth + 1u); else { c.pc = 0x00360070u; return; } if (c.pc != 0x003703E8u) [[unlikely]] return; }
L_003703E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003703C4u | kUnwind; return; } goto L_003703C4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003703F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00370410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370424u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 439u, depth + 1u); else { c.pc = 0x0035B750u; return; } if (c.pc != 0x00370424u) [[unlikely]] return; }
L_00370424:
    c.r[2].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00370440:
    set32(c.r[29], c.r[29].w[0] - 576u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 572u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370464u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 301u, depth + 1u); else { c.pc = 0x0023B770u; return; } if (c.pc != 0x00370464u) [[unlikely]] return; }
L_00370464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037046Cu); set32(c.r[4], c.r[29].w[0] + 572u);  if (depth < kMaxDepth) unit_0056(c, 188u, depth + 1u); else { c.pc = 0x003592C0u; return; } if (c.pc != 0x0037046Cu) [[unlikely]] return; }
L_0037046C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00370498; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370480u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 281u, depth + 1u); else { c.pc = 0x0023B2A0u; return; } if (c.pc != 0x00370480u) [[unlikely]] return; }
L_00370480:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003704C8; } }
L_00370490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00370584; } }
L_00370498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003704A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x003704A0u) [[unlikely]] return; }
L_003704A0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003704ACu); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0056(c, 293u, depth + 1u); else { c.pc = 0x0035A000u; return; } if (c.pc != 0x003704ACu) [[unlikely]] return; }
L_003704AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 13429u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003704C0u); set32(c.r[6], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0010(c, 7u, depth + 1u); else { c.pc = 0x00240040u; return; } if (c.pc != 0x003704C0u) [[unlikely]] return; }
L_003704C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00370584; } }
L_003704C8:
    set32(c.r[4], c.r[29].w[0] + 568u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003704D8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 301u, depth + 1u); else { c.pc = 0x0023B770u; return; } if (c.pc != 0x003704D8u) [[unlikely]] return; }
L_003704D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003704E0u); set32(c.r[4], c.r[29].w[0] + 568u);  if (depth < kMaxDepth) unit_0056(c, 188u, depth + 1u); else { c.pc = 0x003592C0u; return; } if (c.pc != 0x003704E0u) [[unlikely]] return; }
L_003704E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037055C; } }
    set32(c.r[4], c.r[29].w[0] + 564u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003704F8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 301u, depth + 1u); else { c.pc = 0x0023B770u; return; } if (c.pc != 0x003704F8u) [[unlikely]] return; }
L_003704F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370500u); set32(c.r[4], c.r[29].w[0] + 564u);  if (depth < kMaxDepth) unit_005C(c, 72u, depth + 1u); else { c.pc = 0x003705C0u; return; } if (c.pc != 0x00370500u) [[unlikely]] return; }
L_00370500:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037055C; } }
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370518u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 301u, depth + 1u); else { c.pc = 0x0023B770u; return; } if (c.pc != 0x00370518u) [[unlikely]] return; }
L_00370518:
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370524u); set32(c.r[5], 0u + 95u);  if (depth < kMaxDepth) unit_005C(c, 71u, depth + 1u); else { c.pc = 0x003705A0u; return; } if (c.pc != 0x00370524u) [[unlikely]] return; }
L_00370524:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037055C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370534u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 292u, depth + 1u); else { c.pc = 0x0023B570u; return; } if (c.pc != 0x00370534u) [[unlikely]] return; }
L_00370534:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370540u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0056(c, 293u, depth + 1u); else { c.pc = 0x0035A000u; return; } if (c.pc != 0x00370540u) [[unlikely]] return; }
L_00370540:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 13461u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370554u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0010(c, 7u, depth + 1u); else { c.pc = 0x00240040u; return; } if (c.pc != 0x00370554u) [[unlikely]] return; }
L_00370554:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00370584; } }
L_0037055C:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037056Cu); c.r[17].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000E(c, 281u, depth + 1u); else { c.pc = 0x0023B2A0u; return; } if (c.pc != 0x0037056Cu) [[unlikely]] return; }
L_0037056C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003704C8u | kUnwind; return; } goto L_003704C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370490u | kUnwind; return; } goto L_00370490; } }
L_00370584:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 576u);  c.pc = t; return; }
L_003705A0:
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    c.r[2].d[0] = c.r[5].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_003705C0:
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003705E0; } }
    c.r[1].d[0] = c.r[4].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003705E0; } }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003705E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003705F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037060Cu); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 281u, depth + 1u); else { c.pc = 0x0023B2A0u; return; } if (c.pc != 0x0037060Cu) [[unlikely]] return; }
L_0037060C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00370620; } }
L_00370618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003706F8; } }
L_00370620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370628u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 281u, depth + 1u); else { c.pc = 0x0023B2A0u; return; } if (c.pc != 0x00370628u) [[unlikely]] return; }
L_00370628:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370618u | kUnwind; return; } goto L_00370618; } }
    set32(c.r[4], c.r[29].w[0] + 40u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370648u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 301u, depth + 1u); else { c.pc = 0x0023B770u; return; } if (c.pc != 0x00370648u) [[unlikely]] return; }
L_00370648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370650u); set32(c.r[4], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_005C(c, 72u, depth + 1u); else { c.pc = 0x003705C0u; return; } if (c.pc != 0x00370650u) [[unlikely]] return; }
L_00370650:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370618u | kUnwind; return; } goto L_00370618; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370660u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 281u, depth + 1u); else { c.pc = 0x0023B2A0u; return; } if (c.pc != 0x00370660u) [[unlikely]] return; }
L_00370660:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00370690; } }
    set32(c.r[4], c.r[29].w[0] + 36u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370680u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 301u, depth + 1u); else { c.pc = 0x0023B770u; return; } if (c.pc != 0x00370680u) [[unlikely]] return; }
L_00370680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370688u); set32(c.r[4], c.r[29].w[0] + 36u);  if (depth < kMaxDepth) unit_005C(c, 72u, depth + 1u); else { c.pc = 0x003705C0u; return; } if (c.pc != 0x00370688u) [[unlikely]] return; }
L_00370688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370618u | kUnwind; return; } goto L_00370618; } }
L_00370690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370698u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 281u, depth + 1u); else { c.pc = 0x0023B2A0u; return; } if (c.pc != 0x00370698u) [[unlikely]] return; }
L_00370698:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003706C8; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003706B8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_000E(c, 301u, depth + 1u); else { c.pc = 0x0023B770u; return; } if (c.pc != 0x003706B8u) [[unlikely]] return; }
L_003706B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003706C0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_005C(c, 72u, depth + 1u); else { c.pc = 0x003705C0u; return; } if (c.pc != 0x003706C0u) [[unlikely]] return; }
L_003706C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370618u | kUnwind; return; } goto L_00370618; } }
L_003706C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003706D4u); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0056(c, 255u, depth + 1u); else { c.pc = 0x00359BE0u; return; } if (c.pc != 0x003706D4u) [[unlikely]] return; }
L_003706D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370618u | kUnwind; return; } goto L_00370618; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.r[1].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370618u | kUnwind; return; } goto L_00370618; } }
    c.r[1].d[0] = c.r[2].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370618u | kUnwind; return; } goto L_00370618; } }
L_003706F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00370710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 12338u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037072Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0037072Cu) [[unlikely]] return; }
L_0037072C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037074C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370748u); set32(c.r[5], c.r[5].w[0] + 12336u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00370748u) [[unlikely]] return; }
L_00370748:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0037074C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00370768; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370764u); set32(c.r[5], c.r[5].w[0] + 12340u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00370764u) [[unlikely]] return; }
L_00370764:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00370768:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00370784; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370780u); set32(c.r[5], c.r[5].w[0] + 12345u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x00370780u) [[unlikely]] return; }
L_00370780:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00370784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003707A0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037079Cu); set32(c.r[5], c.r[5].w[0] + 12342u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x0037079Cu) [[unlikely]] return; }
L_0037079C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003707A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003707BC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003707B8u); set32(c.r[5], c.r[5].w[0] + 12348u);  if (depth < kMaxDepth) unit_0056(c, 436u, depth + 1u); else { c.pc = 0x0035B6E0u; return; } if (c.pc != 0x003707B8u) [[unlikely]] return; }
L_003707B8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003707BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003707D0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037089C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 12304u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00370000u < 16384u) { entry = entries_005C[(t - 0x00370000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003707FC:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 4u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;  if (t) { goto L_003708A0; } }
L_00370814:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 4u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_003708A0; } }
L_0037082C:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 4u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_003708A0; } }
L_00370848:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 4u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_003708A0; } }
L_00370864:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 4u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  if (t) { goto L_003708A0; } }
L_00370880:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 4u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (t) { goto L_003708A0; } }
L_0037089C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003708A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003708B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));  c.pc = t; return; }
L_003708C0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[20].w[0] + 20u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003708F4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005C(c, 124u, depth + 1u); else { c.pc = 0x00370B70u; return; } if (c.pc != 0x003708F4u) [[unlikely]] return; }
L_003708F4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370900u); set32(c.r[5], c.r[20].w[0] + 20u);  if (depth < kMaxDepth) unit_005C(c, 115u, depth + 1u); else { c.pc = 0x00370A10u; return; } if (c.pc != 0x00370900u) [[unlikely]] return; }
L_00370900:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037090Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_005C(c, 112u, depth + 1u); else { c.pc = 0x003709C0u; return; } if (c.pc != 0x0037090Cu) [[unlikely]] return; }
L_0037090C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00370990; } }
L_00370914:
    set32(c.r[17], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00370928; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[20].w[0])));  if (t) { goto L_00370930; } }
L_00370928:
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 2;
L_00370930:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00370940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_00370948; } }
L_00370940:
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 2;
L_00370948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370950u);  if (depth < kMaxDepth) unit_005C(c, 123u, depth + 1u); else { c.pc = 0x00370B60u; return; } if (c.pc != 0x00370950u) [[unlikely]] return; }
L_00370950:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00370968u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00370968u) [[unlikely]] return; }
L_00370968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370970u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_005C(c, 119u, depth + 1u); else { c.pc = 0x00370A90u; return; } if (c.pc != 0x00370970u) [[unlikely]] return; }
L_00370970:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037097Cu); set32(c.r[5], c.r[20].w[0] + 20u);  if (depth < kMaxDepth) unit_005C(c, 115u, depth + 1u); else { c.pc = 0x00370A10u; return; } if (c.pc != 0x0037097Cu) [[unlikely]] return; }
L_0037097C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370988u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_005C(c, 112u, depth + 1u); else { c.pc = 0x003709C0u; return; } if (c.pc != 0x00370988u) [[unlikely]] return; }
L_00370988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370914u | kUnwind; return; } goto L_00370914; } }
L_00370990:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003709A0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 121u, depth + 1u); else { c.pc = 0x00370B30u; return; } if (c.pc != 0x003709A0u) [[unlikely]] return; }
L_003709A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003709C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003709D8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 114u, depth + 1u); else { c.pc = 0x003709F0u; return; } if (c.pc != 0x003709D8u) [[unlikely]] return; }
L_003709D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003709F0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00370A10:
    c.budget -= 2;
    { c.r[6].d[0] = 0ull + 0ull;  goto L_00370A20; }
L_00370A20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370A34u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 118u, depth + 1u); else { c.pc = 0x00370A50u; return; } if (c.pc != 0x00370A34u) [[unlikely]] return; }
L_00370A34:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00370A50:
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[5].w[0])));
    set32(c.r[7], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[5], c.r[8].w[0] - 4u);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[5], c.r[8].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  c.pc = t; return; }
L_00370A90:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[2].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00370AB0; } }
L_00370AA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00370B1C; } }
L_00370AB0:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00370B14; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00370B14; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 4u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 16u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370AA8u | kUnwind; return; } goto L_00370AA8; } }
L_00370B14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370AA8u | kUnwind; return; } goto L_00370AA8; } }
L_00370B1C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00370B30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00370B54; } }
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00370B54u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00370B54u) [[unlikely]] return; }
L_00370B54:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00370B60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_00370B70:
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00370B84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[5].w[0])));  if (t) { goto L_00370B88; } }
L_00370B84:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00370B88:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00370A20u | kUnwind; return; } goto L_00370A20; }
L_00370B90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00370BE8; } }
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00370BC8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00370BC8u) [[unlikely]] return; }
L_00370BC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00370BF8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370BE0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 121u, depth + 1u); else { c.pc = 0x00370B30u; return; } if (c.pc != 0x00370BE0u) [[unlikely]] return; }
L_00370BE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00370BFC; } }
L_00370BE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370BF0u);  if (depth < kMaxDepth) unit_005C(c, 121u, depth + 1u); else { c.pc = 0x00370B30u; return; } if (c.pc != 0x00370BF0u) [[unlikely]] return; }
L_00370BF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370BE0u | kUnwind; return; } goto L_00370BE0; } }
L_00370BF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00370BFC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00370C10:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00370C80; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 184u), 0u);
    st32((c.r[4].w[0] + 188u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00370C68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00370C68u) [[unlikely]] return; }
L_00370C68:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00370C6C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370C78u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005C(c, 121u, depth + 1u); else { c.pc = 0x00370B30u; return; } if (c.pc != 0x00370C78u) [[unlikely]] return; }
L_00370C78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00370E0C; } }
L_00370C80:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00370D2C; } }
    set32(c.r[5], c.r[2].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370C98u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x00370C98u) [[unlikely]] return; }
L_00370C98:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370CA8u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00370CA8u) [[unlikely]] return; }
L_00370CA8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370CB4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00370CB4u) [[unlikely]] return; }
L_00370CB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370C68u | kUnwind; return; } goto L_00370C68; } }
L_00370CBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370CC4u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00370CC4u) [[unlikely]] return; }
L_00370CC4:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 184u), 0u);
    st32((c.r[4].w[0] + 188u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00370CF8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00370CF8u) [[unlikely]] return; }
L_00370CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370D00u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x00370D00u) [[unlikely]] return; }
L_00370D00:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370D10u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00370D10u) [[unlikely]] return; }
L_00370D10:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370D1Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00370D1Cu) [[unlikely]] return; }
L_00370D1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370CBCu | kUnwind; return; } goto L_00370CBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370C6Cu | kUnwind; return; } goto L_00370C6C; } }
L_00370D2C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00370D6C; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 184u), 0u);
    st32((c.r[17].w[0] + 188u), 0u);
    set32(c.r[25], ld32((c.r[17].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00370D64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00370D64u) [[unlikely]] return; }
L_00370D64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370C68u | kUnwind; return; } goto L_00370C68; } }
L_00370D6C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370C68u | kUnwind; return; } goto L_00370C68; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370D80u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x00370D80u) [[unlikely]] return; }
L_00370D80:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370D8Cu); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00370D8Cu) [[unlikely]] return; }
L_00370D8C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370D98u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00370D98u) [[unlikely]] return; }
L_00370D98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370C68u | kUnwind; return; } goto L_00370C68; } }
L_00370DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370DA8u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00370DA8u) [[unlikely]] return; }
L_00370DA8:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 184u), 0u);
    st32((c.r[4].w[0] + 188u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00370DDCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00370DDCu) [[unlikely]] return; }
L_00370DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370DE4u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x00370DE4u) [[unlikely]] return; }
L_00370DE4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370DF0u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00370DF0u) [[unlikely]] return; }
L_00370DF0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00370DFCu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00370DFCu) [[unlikely]] return; }
L_00370DFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370DA0u | kUnwind; return; } goto L_00370DA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00370C68u | kUnwind; return; } goto L_00370C68; } }
L_00370E0C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00370E20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00370E30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00370E4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 16u)));  if (t) { goto L_00370E54; } }
L_00370E4C:
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 2;
L_00370E54:
    st32((c.r[7].w[0] + 208u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00370E9C; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 208u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00370E84; } }
    st32((c.r[7].w[0] + 180u), c.r[6].w[0]);
    st32((c.r[7].w[0] + 176u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 204u), c.r[3].w[0]);  if (t) { goto L_00370E9C; } }
L_00370E84:
    st32((c.r[7].w[0] + 204u), 0u);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00370E9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00370E9Cu) [[unlikely]] return; }
L_00370E9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00370EB0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00370FE8; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037105C; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 112u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 112u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[3].w[0] + 96u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    mmi::mult(c, 1, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[4], ld32((c.r[3].w[0] + 112u)));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st32((c.r[3].w[0] + 80u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[3].w[0] + 116u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 116u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[3].w[0] + 100u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 100u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    mmi::mult(c, 1, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[4], ld32((c.r[3].w[0] + 116u)));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st32((c.r[3].w[0] + 84u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[3].w[0] + 120u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 120u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 88u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[3].w[0] + 104u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    mmi::mult(c, 1, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[4], ld32((c.r[3].w[0] + 120u)));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st32((c.r[3].w[0] + 88u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    st32((c.r[3].w[0] + 124u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 124u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 92u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[3].w[0] + 108u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    mmi::mult(c, 1, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[4], ld32((c.r[3].w[0] + 124u)));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st32((c.r[3].w[0] + 92u), c.r[4].w[0]);
    c.budget -= 63;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 200u), 0u);  if (t) { goto L_00371048; } }
L_00370FE8:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00371434; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 96u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[4].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 100u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[4].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 104u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    st32((c.r[4].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 200u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00371048u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00371048u) [[unlikely]] return; }
L_00371048:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_0037104C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00371630; } }
L_00371054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0037168C; } }
L_0037105C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003711CC; } }
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371074u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x00371074u) [[unlikely]] return; }
L_00371074:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371084u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00371084u) [[unlikely]] return; }
L_00371084:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371090u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00371090u) [[unlikely]] return; }
L_00371090:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371048u | kUnwind; return; } goto L_00371048; } }
L_00371098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003710A0u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x003710A0u) [[unlikely]] return; }
L_003710A0:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 64;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003711A0u); st32((c.r[16].w[0] + 200u), 0u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x003711A0u) [[unlikely]] return; }
L_003711A0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003711B0u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x003711B0u) [[unlikely]] return; }
L_003711B0:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003711BCu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x003711BCu) [[unlikely]] return; }
L_003711BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371098u | kUnwind; return; } goto L_00371098; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037104Cu | kUnwind; return; } goto L_0037104C; } }
L_003711CC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003712D0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 112u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[18].w[0] + 116u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[3], ld32((c.r[18].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[18].w[0] + 84u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[18].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 120u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[3], ld32((c.r[18].w[0] + 120u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[18].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    st32((c.r[18].w[0] + 124u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 124u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 108u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[3], ld32((c.r[18].w[0] + 124u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[18].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 63;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 200u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371048u | kUnwind; return; } goto L_00371048; } }
L_003712D0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371048u | kUnwind; return; } goto L_00371048; } }
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003712E4u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x003712E4u) [[unlikely]] return; }
L_003712E4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003712F0u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x003712F0u) [[unlikely]] return; }
L_003712F0:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003712FCu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x003712FCu) [[unlikely]] return; }
L_003712FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371048u | kUnwind; return; } goto L_00371048; } }
L_00371304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037130Cu); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x0037130Cu) [[unlikely]] return; }
L_0037130C:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[16].w[0] + 116u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 64;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037140Cu); st32((c.r[16].w[0] + 200u), 0u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x0037140Cu) [[unlikely]] return; }
L_0037140C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371418u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00371418u) [[unlikely]] return; }
L_00371418:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371424u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00371424u) [[unlikely]] return; }
L_00371424:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371304u | kUnwind; return; } goto L_00371304; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371048u | kUnwind; return; } goto L_00371048; } }
L_00371434:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00371504; } }
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037144Cu); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x0037144Cu) [[unlikely]] return; }
L_0037144C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037145Cu); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x0037145Cu) [[unlikely]] return; }
L_0037145C:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371468u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00371468u) [[unlikely]] return; }
L_00371468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371048u | kUnwind; return; } goto L_00371048; } }
L_00371470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371478u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00371478u) [[unlikely]] return; }
L_00371478:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 100u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 200u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003714D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003714D0u) [[unlikely]] return; }
L_003714D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003714D8u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x003714D8u) [[unlikely]] return; }
L_003714D8:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003714E8u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x003714E8u) [[unlikely]] return; }
L_003714E8:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003714F4u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x003714F4u) [[unlikely]] return; }
L_003714F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371470u | kUnwind; return; } goto L_00371470; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371048u | kUnwind; return; } goto L_00371048; } }
L_00371504:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0037156C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 96u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 100u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 104u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    st32((c.r[18].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 108u), 0u);
    st32((c.r[18].w[0] + 200u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00371564u); c.r[16].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00371564u) [[unlikely]] return; }
L_00371564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371048u | kUnwind; return; } goto L_00371048; } }
L_0037156C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371048u | kUnwind; return; } goto L_00371048; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371580u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x00371580u) [[unlikely]] return; }
L_00371580:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037158Cu); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x0037158Cu) [[unlikely]] return; }
L_0037158C:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371598u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00371598u) [[unlikely]] return; }
L_00371598:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371048u | kUnwind; return; } goto L_00371048; } }
L_003715A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003715A8u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x003715A8u) [[unlikely]] return; }
L_003715A8:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 100u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 200u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00371600u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00371600u) [[unlikely]] return; }
L_00371600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371608u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x00371608u) [[unlikely]] return; }
L_00371608:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371614u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00371614u) [[unlikely]] return; }
L_00371614:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371620u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00371620u) [[unlikely]] return; }
L_00371620:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003715A0u | kUnwind; return; } goto L_003715A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371048u | kUnwind; return; } goto L_00371048; } }
L_00371630:
    set32(c.r[25], ld32((c.r[16].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00371640u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00371640u) [[unlikely]] return; }
L_00371640:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037166C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00371654; } }
    st32((c.r[16].w[0] + 180u), c.r[17].w[0]);
    c.budget -= 1;
L_00371654:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00371660; } }
    st32((c.r[16].w[0] + 176u), c.r[18].w[0]);
    c.budget -= 1;
L_00371660:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 200u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371054u | kUnwind; return; } goto L_00371054; } }
L_0037166C:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00371684u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00371684u) [[unlikely]] return; }
L_00371684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371054u | kUnwind; return; } goto L_00371054; } }
L_0037168C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_003716B0:
    set32(c.r[6], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 108u)));
    c.r[4].d[0] = c.r[6].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_003716E0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00371768; } }
    set32(c.r[6], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003717B0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[6].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[6].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[6].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[3], ld32((c.r[6].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[6].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 184u), 0u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 196u), 0u);  if (t) { goto L_0037179C; } }
L_00371768:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00371978; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 184u), 0u);
    st32((c.r[4].w[0] + 196u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037179Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037179Cu) [[unlikely]] return; }
L_0037179C:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_003717A0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00371AF0; } }
L_003717A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00371B4C; } }
L_003717B0:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00371870; } }
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003717C8u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x003717C8u) [[unlikely]] return; }
L_003717C8:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003717D8u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x003717D8u) [[unlikely]] return; }
L_003717D8:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003717E4u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x003717E4u) [[unlikely]] return; }
L_003717E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037179Cu | kUnwind; return; } goto L_0037179C; } }
L_003717EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003717F4u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x003717F4u) [[unlikely]] return; }
L_003717F4:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 184u), 0u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371844u); st32((c.r[16].w[0] + 196u), 0u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x00371844u) [[unlikely]] return; }
L_00371844:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371854u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00371854u) [[unlikely]] return; }
L_00371854:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371860u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00371860u) [[unlikely]] return; }
L_00371860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003717ECu | kUnwind; return; } goto L_003717EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003717A0u | kUnwind; return; } goto L_003717A0; } }
L_00371870:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003718C4; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 184u), 0u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 196u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037179Cu | kUnwind; return; } goto L_0037179C; } }
L_003718C4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037179Cu | kUnwind; return; } goto L_0037179C; } }
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003718D8u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x003718D8u) [[unlikely]] return; }
L_003718D8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003718E4u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x003718E4u) [[unlikely]] return; }
L_003718E4:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003718F0u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x003718F0u) [[unlikely]] return; }
L_003718F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037179Cu | kUnwind; return; } goto L_0037179C; } }
L_003718F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371900u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00371900u) [[unlikely]] return; }
L_00371900:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 184u), 0u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371950u); st32((c.r[16].w[0] + 196u), 0u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x00371950u) [[unlikely]] return; }
L_00371950:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037195Cu); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x0037195Cu) [[unlikely]] return; }
L_0037195C:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371968u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00371968u) [[unlikely]] return; }
L_00371968:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003718F8u | kUnwind; return; } goto L_003718F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037179Cu | kUnwind; return; } goto L_0037179C; } }
L_00371978:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00371A1C; } }
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371990u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x00371990u) [[unlikely]] return; }
L_00371990:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003719A0u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x003719A0u) [[unlikely]] return; }
L_003719A0:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003719ACu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x003719ACu) [[unlikely]] return; }
L_003719AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037179Cu | kUnwind; return; } goto L_0037179C; } }
L_003719B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003719BCu); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x003719BCu) [[unlikely]] return; }
L_003719BC:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 184u), 0u);
    st32((c.r[16].w[0] + 196u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003719E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003719E8u) [[unlikely]] return; }
L_003719E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003719F0u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x003719F0u) [[unlikely]] return; }
L_003719F0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371A00u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00371A00u) [[unlikely]] return; }
L_00371A00:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371A0Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00371A0Cu) [[unlikely]] return; }
L_00371A0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003719B4u | kUnwind; return; } goto L_003719B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037179Cu | kUnwind; return; } goto L_0037179C; } }
L_00371A1C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00371A58; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 64u), 0u);
    st32((c.r[18].w[0] + 184u), 0u);
    st32((c.r[18].w[0] + 196u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00371A50u); c.r[16].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00371A50u) [[unlikely]] return; }
L_00371A50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037179Cu | kUnwind; return; } goto L_0037179C; } }
L_00371A58:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037179Cu | kUnwind; return; } goto L_0037179C; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371A6Cu); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x00371A6Cu) [[unlikely]] return; }
L_00371A6C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371A78u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00371A78u) [[unlikely]] return; }
L_00371A78:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371A84u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00371A84u) [[unlikely]] return; }
L_00371A84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037179Cu | kUnwind; return; } goto L_0037179C; } }
L_00371A8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371A94u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00371A94u) [[unlikely]] return; }
L_00371A94:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 184u), 0u);
    st32((c.r[16].w[0] + 196u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00371AC0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00371AC0u) [[unlikely]] return; }
L_00371AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371AC8u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x00371AC8u) [[unlikely]] return; }
L_00371AC8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371AD4u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00371AD4u) [[unlikely]] return; }
L_00371AD4:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371AE0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00371AE0u) [[unlikely]] return; }
L_00371AE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371A8Cu | kUnwind; return; } goto L_00371A8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037179Cu | kUnwind; return; } goto L_0037179C; } }
L_00371AF0:
    set32(c.r[25], ld32((c.r[16].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00371B00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00371B00u) [[unlikely]] return; }
L_00371B00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00371B2C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00371B14; } }
    st32((c.r[16].w[0] + 180u), c.r[17].w[0]);
    c.budget -= 1;
L_00371B14:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00371B20; } }
    st32((c.r[16].w[0] + 176u), c.r[18].w[0]);
    c.budget -= 1;
L_00371B20:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 196u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003717A8u | kUnwind; return; } goto L_003717A8; } }
L_00371B2C:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00371B44u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00371B44u) [[unlikely]] return; }
L_00371B44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003717A8u | kUnwind; return; } goto L_003717A8; } }
L_00371B4C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_00371B70:
    set32(c.r[8], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.r[4].d[0] = c.r[8].d[0] | c.r[7].d[0];
    c.r[4].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[5].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_00371BB0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00371C74; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00371CCC; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 68u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[3].w[0] + 56u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    mmi::mult(c, 1, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[4], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st32((c.r[3].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[3].w[0] + 72u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    mmi::mult(c, 1, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st32((c.r[3].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 184u), 0u);
    c.budget -= 34;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 192u), 0u);  if (t) { goto L_00371CB8; } }
L_00371C74:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00371F48; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 56u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 184u), 0u);
    st32((c.r[4].w[0] + 192u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00371CB8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00371CB8u) [[unlikely]] return; }
L_00371CB8:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_00371CBC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003720F0; } }
L_00371CC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0037214C; } }
L_00371CCC:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00371DC8; } }
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371CE4u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x00371CE4u) [[unlikely]] return; }
L_00371CE4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371CF4u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00371CF4u) [[unlikely]] return; }
L_00371CF4:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371D00u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00371D00u) [[unlikely]] return; }
L_00371D00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371CB8u | kUnwind; return; } goto L_00371CB8; } }
L_00371D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371D10u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00371D10u) [[unlikely]] return; }
L_00371D10:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 184u), 0u);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371D9Cu); st32((c.r[16].w[0] + 192u), 0u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x00371D9Cu) [[unlikely]] return; }
L_00371D9C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371DACu); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00371DACu) [[unlikely]] return; }
L_00371DAC:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371DB8u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00371DB8u) [[unlikely]] return; }
L_00371DB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371D08u | kUnwind; return; } goto L_00371D08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371CBCu | kUnwind; return; } goto L_00371CBC; } }
L_00371DC8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00371E58; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[18].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[18].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 184u), 0u);
    c.budget -= 34;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 192u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371CB8u | kUnwind; return; } goto L_00371CB8; } }
L_00371E58:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371CB8u | kUnwind; return; } goto L_00371CB8; } }
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371E6Cu); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x00371E6Cu) [[unlikely]] return; }
L_00371E6C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371E78u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00371E78u) [[unlikely]] return; }
L_00371E78:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371E84u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00371E84u) [[unlikely]] return; }
L_00371E84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371CB8u | kUnwind; return; } goto L_00371CB8; } }
L_00371E8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371E94u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00371E94u) [[unlikely]] return; }
L_00371E94:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 184u), 0u);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371F20u); st32((c.r[16].w[0] + 192u), 0u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x00371F20u) [[unlikely]] return; }
L_00371F20:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371F2Cu); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00371F2Cu) [[unlikely]] return; }
L_00371F2C:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371F38u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00371F38u) [[unlikely]] return; }
L_00371F38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371E8Cu | kUnwind; return; } goto L_00371E8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371CB8u | kUnwind; return; } goto L_00371CB8; } }
L_00371F48:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00371FFC; } }
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371F60u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x00371F60u) [[unlikely]] return; }
L_00371F60:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371F70u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00371F70u) [[unlikely]] return; }
L_00371F70:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371F7Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00371F7Cu) [[unlikely]] return; }
L_00371F7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371CB8u | kUnwind; return; } goto L_00371CB8; } }
L_00371F84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371F8Cu); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00371F8Cu) [[unlikely]] return; }
L_00371F8C:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 184u), 0u);
    st32((c.r[16].w[0] + 192u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00371FC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00371FC8u) [[unlikely]] return; }
L_00371FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371FD0u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x00371FD0u) [[unlikely]] return; }
L_00371FD0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371FE0u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00371FE0u) [[unlikely]] return; }
L_00371FE0:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00371FECu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00371FECu) [[unlikely]] return; }
L_00371FEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371F84u | kUnwind; return; } goto L_00371F84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371CB8u | kUnwind; return; } goto L_00371CB8; } }
L_00371FFC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00372048; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 56u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[18].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 60u), 0u);
    st32((c.r[18].w[0] + 184u), 0u);
    st32((c.r[18].w[0] + 192u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372040u); c.r[16].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372040u) [[unlikely]] return; }
L_00372040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371CB8u | kUnwind; return; } goto L_00371CB8; } }
L_00372048:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371CB8u | kUnwind; return; } goto L_00371CB8; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037205Cu); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x0037205Cu) [[unlikely]] return; }
L_0037205C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372068u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00372068u) [[unlikely]] return; }
L_00372068:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372074u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00372074u) [[unlikely]] return; }
L_00372074:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371CB8u | kUnwind; return; } goto L_00371CB8; } }
L_0037207C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372084u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00372084u) [[unlikely]] return; }
L_00372084:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 184u), 0u);
    st32((c.r[16].w[0] + 192u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003720C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003720C0u) [[unlikely]] return; }
L_003720C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003720C8u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x003720C8u) [[unlikely]] return; }
L_003720C8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003720D4u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x003720D4u) [[unlikely]] return; }
L_003720D4:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003720E0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x003720E0u) [[unlikely]] return; }
L_003720E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037207Cu | kUnwind; return; } goto L_0037207C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371CB8u | kUnwind; return; } goto L_00371CB8; } }
L_003720F0:
    set32(c.r[25], ld32((c.r[16].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372100u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372100u) [[unlikely]] return; }
L_00372100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037212C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00372114; } }
    st32((c.r[16].w[0] + 180u), c.r[17].w[0]);
    c.budget -= 1;
L_00372114:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00372120; } }
    st32((c.r[16].w[0] + 176u), c.r[18].w[0]);
    c.budget -= 1;
L_00372120:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 192u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371CC4u | kUnwind; return; } goto L_00371CC4; } }
L_0037212C:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372144u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372144u) [[unlikely]] return; }
L_00372144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00371CC4u | kUnwind; return; } goto L_00371CC4; } }
L_0037214C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_00372170:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003722EC; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003723A8; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 44u)));
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_003721CC; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    c.budget -= 2;
L_003721CC:
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 32u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[3].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    mmi::mult(c, 1, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    c.budget -= 21;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));  if (t) { goto L_00372228; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    c.budget -= 2;
L_00372228:
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[3].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    mmi::mult(c, 1, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[4], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[3].w[0] + 68u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[3].w[0] + 56u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    mmi::mult(c, 1, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[4], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st32((c.r[3].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[3].w[0] + 72u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    mmi::mult(c, 1, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st32((c.r[3].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 184u), 0u);
    c.budget -= 49;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 192u), 0u);  if (t) { goto L_00372394; } }
L_003722EC:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037284C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00372318; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00372318:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00372348; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00372348:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 56u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 60u), 0u);
    st32((c.r[4].w[0] + 184u), 0u);
    st32((c.r[4].w[0] + 192u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372394u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372394u) [[unlikely]] return; }
L_00372394:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_00372398:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00372B14; } }
L_003723A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00372B70; } }
L_003723A8:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037255C; } }
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003723C0u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x003723C0u) [[unlikely]] return; }
L_003723C0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003723D0u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x003723D0u) [[unlikely]] return; }
L_003723D0:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003723DCu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x003723DCu) [[unlikely]] return; }
L_003723DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372394u | kUnwind; return; } goto L_00372394; } }
L_003723E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003723ECu); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x003723ECu) [[unlikely]] return; }
L_003723EC:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_0037240C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0037240C:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 21;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00372468; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00372468:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 184u), 0u);
    c.budget -= 50;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372530u); st32((c.r[16].w[0] + 192u), 0u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x00372530u) [[unlikely]] return; }
L_00372530:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372540u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00372540u) [[unlikely]] return; }
L_00372540:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037254Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x0037254Cu) [[unlikely]] return; }
L_0037254C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003723E4u | kUnwind; return; } goto L_003723E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372398u | kUnwind; return; } goto L_00372398; } }
L_0037255C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003726A4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_00372584; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_00372584:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 21;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_003725E0; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_003725E0:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[18].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[18].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[18].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 184u), 0u);
    c.budget -= 49;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 192u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372394u | kUnwind; return; } goto L_00372394; } }
L_003726A4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372394u | kUnwind; return; } goto L_00372394; } }
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003726B8u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x003726B8u) [[unlikely]] return; }
L_003726B8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003726C4u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x003726C4u) [[unlikely]] return; }
L_003726C4:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003726D0u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x003726D0u) [[unlikely]] return; }
L_003726D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372394u | kUnwind; return; } goto L_00372394; } }
L_003726D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003726E0u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x003726E0u) [[unlikely]] return; }
L_003726E0:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00372700; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00372700:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 21;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_0037275C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0037275C:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 184u), 0u);
    c.budget -= 50;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372824u); st32((c.r[16].w[0] + 192u), 0u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x00372824u) [[unlikely]] return; }
L_00372824:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372830u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00372830u) [[unlikely]] return; }
L_00372830:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037283Cu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x0037283Cu) [[unlikely]] return; }
L_0037283C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003726D8u | kUnwind; return; } goto L_003726D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372394u | kUnwind; return; } goto L_00372394; } }
L_0037284C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00372960; } }
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372864u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x00372864u) [[unlikely]] return; }
L_00372864:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372874u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00372874u) [[unlikely]] return; }
L_00372874:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372880u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00372880u) [[unlikely]] return; }
L_00372880:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372394u | kUnwind; return; } goto L_00372394; } }
L_00372888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372890u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00372890u) [[unlikely]] return; }
L_00372890:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_003728B0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_003728B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_003728E0; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_003728E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 184u), 0u);
    st32((c.r[16].w[0] + 192u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037292Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037292Cu) [[unlikely]] return; }
L_0037292C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372934u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x00372934u) [[unlikely]] return; }
L_00372934:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372944u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00372944u) [[unlikely]] return; }
L_00372944:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372950u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00372950u) [[unlikely]] return; }
L_00372950:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372888u | kUnwind; return; } goto L_00372888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372394u | kUnwind; return; } goto L_00372394; } }
L_00372960:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00372A0C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00372988; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00372988:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_003729B8; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_003729B8:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 56u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[18].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 60u), 0u);
    st32((c.r[18].w[0] + 184u), 0u);
    st32((c.r[18].w[0] + 192u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372A04u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372A04u) [[unlikely]] return; }
L_00372A04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372394u | kUnwind; return; } goto L_00372394; } }
L_00372A0C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372394u | kUnwind; return; } goto L_00372394; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372A20u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x00372A20u) [[unlikely]] return; }
L_00372A20:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372A2Cu); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00372A2Cu) [[unlikely]] return; }
L_00372A2C:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372A38u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00372A38u) [[unlikely]] return; }
L_00372A38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372394u | kUnwind; return; } goto L_00372394; } }
L_00372A40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372A48u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00372A48u) [[unlikely]] return; }
L_00372A48:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00372A68; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00372A68:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_00372A98; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_00372A98:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 184u), 0u);
    st32((c.r[16].w[0] + 192u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372AE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372AE4u) [[unlikely]] return; }
L_00372AE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372AECu); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x00372AECu) [[unlikely]] return; }
L_00372AEC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372AF8u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00372AF8u) [[unlikely]] return; }
L_00372AF8:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372B04u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00372B04u) [[unlikely]] return; }
L_00372B04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372A40u | kUnwind; return; } goto L_00372A40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372394u | kUnwind; return; } goto L_00372394; } }
L_00372B14:
    set32(c.r[25], ld32((c.r[16].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372B24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372B24u) [[unlikely]] return; }
L_00372B24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00372B50; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00372B38; } }
    st32((c.r[16].w[0] + 180u), c.r[17].w[0]);
    c.budget -= 1;
L_00372B38:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00372B44; } }
    st32((c.r[16].w[0] + 176u), c.r[18].w[0]);
    c.budget -= 1;
L_00372B44:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 192u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003723A0u | kUnwind; return; } goto L_003723A0; } }
L_00372B50:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372B68u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372B68u) [[unlikely]] return; }
L_00372B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003723A0u | kUnwind; return; } goto L_003723A0; } }
L_00372B70:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_00372B90:
    set32(c.r[29], c.r[29].w[0] - 368u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00372C64; } }
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00372CBC; } }
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 32u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[3].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 16u)));
    mmi::mult(c, 1, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 24u)));
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[3].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 16u)));
    mmi::mult(c, 1, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[4], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 184u), 0u);
    c.budget -= 34;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 188u), 0u);  if (t) { goto L_00372CA8; } }
L_00372C64:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00372F98; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 184u), 0u);
    st32((c.r[4].w[0] + 188u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00372CA8u); c.r[18].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00372CA8u) [[unlikely]] return; }
L_00372CA8:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_00372CAC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003731D0; } }
L_00372CB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0037322C; } }
L_00372CBC:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00372DE8; } }
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372CD4u); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x00372CD4u) [[unlikely]] return; }
L_00372CD4:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372CE4u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00372CE4u) [[unlikely]] return; }
L_00372CE4:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372CF0u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00372CF0u) [[unlikely]] return; }
L_00372CF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372CA8u | kUnwind; return; } goto L_00372CA8; } }
L_00372CF8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00372DB0; } }
L_00372D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372D08u); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00372D08u) [[unlikely]] return; }
L_00372D08:
    set32(c.r[18], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    mmi::div(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 184u), 0u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372D84u); st32((c.r[18].w[0] + 188u), 0u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x00372D84u) [[unlikely]] return; }
L_00372D84:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372D94u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00372D94u) [[unlikely]] return; }
L_00372D94:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372DA0u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00372DA0u) [[unlikely]] return; }
L_00372DA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372CF8u | kUnwind; return; } goto L_00372CF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[21].w[0] + 8u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372CACu | kUnwind; return; } goto L_00372CAC; } }
L_00372DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372DB8u); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00372DB8u) [[unlikely]] return; }
L_00372DB8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372DD0u); set32(c.r[17], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00372DD0u) [[unlikely]] return; }
L_00372DD0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] - c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372D00u | kUnwind; return; } goto L_00372D00; } }
    c.budget -= 1;
L_00372DE8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00372E78; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 20u)));
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[20].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 16u)));
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 24u)));
    st32((c.r[20].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[20].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 16u)));
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[20].w[0] + 184u), 0u);
    c.budget -= 34;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 188u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372CA8u | kUnwind; return; } goto L_00372CA8; } }
L_00372E78:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372CA8u | kUnwind; return; } goto L_00372CA8; } }
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372E8Cu); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x00372E8Cu) [[unlikely]] return; }
L_00372E8C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372E98u); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00372E98u) [[unlikely]] return; }
L_00372E98:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372EA4u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00372EA4u) [[unlikely]] return; }
L_00372EA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372CA8u | kUnwind; return; } goto L_00372CA8; } }
L_00372EAC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00372F64; } }
    c.budget -= 1;
L_00372EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372EC0u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00372EC0u) [[unlikely]] return; }
L_00372EC0:
    set32(c.r[18], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    mmi::div(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    mmi::div(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 184u), 0u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372F3Cu); st32((c.r[18].w[0] + 188u), 0u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x00372F3Cu) [[unlikely]] return; }
L_00372F3C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372F48u); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00372F48u) [[unlikely]] return; }
L_00372F48:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372F54u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00372F54u) [[unlikely]] return; }
L_00372F54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372EACu | kUnwind; return; } goto L_00372EAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372CA8u | kUnwind; return; } goto L_00372CA8; } }
L_00372F64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372F6Cu); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00372F6Cu) [[unlikely]] return; }
L_00372F6C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372F84u); set32(c.r[17], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00372F84u) [[unlikely]] return; }
L_00372F84:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] - c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372EB8u | kUnwind; return; } goto L_00372EB8; } }
L_00372F98:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00373098; } }
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372FB0u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x00372FB0u) [[unlikely]] return; }
L_00372FB0:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372FC0u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00372FC0u) [[unlikely]] return; }
L_00372FC0:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372FCCu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00372FCCu) [[unlikely]] return; }
L_00372FCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372CA8u | kUnwind; return; } goto L_00372CA8; } }
L_00372FD4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00373060; } }
    c.budget -= 1;
L_00372FE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00372FE8u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00372FE8u) [[unlikely]] return; }
L_00372FE8:
    set32(c.r[18], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 24u), 0u);
    st32((c.r[18].w[0] + 184u), 0u);
    st32((c.r[18].w[0] + 188u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037302Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037302Cu) [[unlikely]] return; }
L_0037302C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373034u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x00373034u) [[unlikely]] return; }
L_00373034:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373044u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00373044u) [[unlikely]] return; }
L_00373044:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373050u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00373050u) [[unlikely]] return; }
L_00373050:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372FD4u | kUnwind; return; } goto L_00372FD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372CA8u | kUnwind; return; } goto L_00372CA8; } }
L_00373060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373068u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00373068u) [[unlikely]] return; }
L_00373068:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373080u); set32(c.r[17], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00373080u) [[unlikely]] return; }
L_00373080:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] - c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372FE0u | kUnwind; return; } goto L_00372FE0; } }
    c.budget -= 1;
L_00373098:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_003730E4; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[20].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 24u), 0u);
    st32((c.r[20].w[0] + 184u), 0u);
    st32((c.r[20].w[0] + 188u), 0u);
    set32(c.r[25], ld32((c.r[20].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003730DCu); c.r[18].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003730DCu) [[unlikely]] return; }
L_003730DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372CA8u | kUnwind; return; } goto L_00372CA8; } }
L_003730E4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372CA8u | kUnwind; return; } goto L_00372CA8; } }
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003730F8u); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x003730F8u) [[unlikely]] return; }
L_003730F8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373104u); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00373104u) [[unlikely]] return; }
L_00373104:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373110u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00373110u) [[unlikely]] return; }
L_00373110:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372CA8u | kUnwind; return; } goto L_00372CA8; } }
L_00373118:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0037319C; } }
L_00373120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373128u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00373128u) [[unlikely]] return; }
L_00373128:
    set32(c.r[18], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 24u), 0u);
    st32((c.r[18].w[0] + 184u), 0u);
    st32((c.r[18].w[0] + 188u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0037316Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0037316Cu) [[unlikely]] return; }
L_0037316C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373174u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x00373174u) [[unlikely]] return; }
L_00373174:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373180u); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00373180u) [[unlikely]] return; }
L_00373180:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037318Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x0037318Cu) [[unlikely]] return; }
L_0037318C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373118u | kUnwind; return; } goto L_00373118; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372CA8u | kUnwind; return; } goto L_00372CA8; } }
L_0037319C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003731A4u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x003731A4u) [[unlikely]] return; }
L_003731A4:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[2], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003731BCu); set32(c.r[17], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x003731BCu) [[unlikely]] return; }
L_003731BC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] - c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373120u | kUnwind; return; } goto L_00373120; } }
L_003731D0:
    set32(c.r[25], ld32((c.r[18].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003731E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003731E0u) [[unlikely]] return; }
L_003731E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037320C; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003731F4; } }
    st32((c.r[18].w[0] + 180u), c.r[19].w[0]);
    c.budget -= 1;
L_003731F4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00373200; } }
    st32((c.r[18].w[0] + 176u), c.r[20].w[0]);
    c.budget -= 1;
L_00373200:
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 188u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372CB4u | kUnwind; return; } goto L_00372CB4; } }
L_0037320C:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00373224u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00373224u) [[unlikely]] return; }
L_00373224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00372CB4u | kUnwind; return; } goto L_00372CB4; } }
L_0037322C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_00373250:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00373314; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037337C; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 32u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[3].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    mmi::mult(c, 1, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[3].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    mmi::mult(c, 1, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[4], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 184u), 0u);
    c.budget -= 34;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 188u), 0u);  if (t) { goto L_00373368; } }
L_00373314:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003735F8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 184u), 0u);
    st32((c.r[4].w[0] + 188u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00373368u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00373368u) [[unlikely]] return; }
L_00373368:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_0037336C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003737D0; } }
L_00373374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0037382C; } }
L_0037337C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00373478; } }
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373394u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x00373394u) [[unlikely]] return; }
L_00373394:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003733A4u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x003733A4u) [[unlikely]] return; }
L_003733A4:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003733B0u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x003733B0u) [[unlikely]] return; }
L_003733B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373368u | kUnwind; return; } goto L_00373368; } }
L_003733B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003733C0u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x003733C0u) [[unlikely]] return; }
L_003733C0:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 184u), 0u);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037344Cu); st32((c.r[16].w[0] + 188u), 0u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x0037344Cu) [[unlikely]] return; }
L_0037344C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037345Cu); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x0037345Cu) [[unlikely]] return; }
L_0037345C:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373468u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00373468u) [[unlikely]] return; }
L_00373468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003733B8u | kUnwind; return; } goto L_003733B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037336Cu | kUnwind; return; } goto L_0037336C; } }
L_00373478:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00373508; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 184u), 0u);
    c.budget -= 34;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 188u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373368u | kUnwind; return; } goto L_00373368; } }
L_00373508:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373368u | kUnwind; return; } goto L_00373368; } }
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037351Cu); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x0037351Cu) [[unlikely]] return; }
L_0037351C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373528u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00373528u) [[unlikely]] return; }
L_00373528:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373534u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00373534u) [[unlikely]] return; }
L_00373534:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373368u | kUnwind; return; } goto L_00373368; } }
L_0037353C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373544u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00373544u) [[unlikely]] return; }
L_00373544:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 184u), 0u);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003735D0u); st32((c.r[16].w[0] + 188u), 0u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x003735D0u) [[unlikely]] return; }
L_003735D0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003735DCu); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x003735DCu) [[unlikely]] return; }
L_003735DC:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003735E8u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x003735E8u) [[unlikely]] return; }
L_003735E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037353Cu | kUnwind; return; } goto L_0037353C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373368u | kUnwind; return; } goto L_00373368; } }
L_003735F8:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003736BC; } }
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373610u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x00373610u) [[unlikely]] return; }
L_00373610:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373620u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00373620u) [[unlikely]] return; }
L_00373620:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037362Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x0037362Cu) [[unlikely]] return; }
L_0037362C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373368u | kUnwind; return; } goto L_00373368; } }
L_00373634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037363Cu); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x0037363Cu) [[unlikely]] return; }
L_0037363C:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 184u), 0u);
    st32((c.r[16].w[0] + 188u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00373688u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00373688u) [[unlikely]] return; }
L_00373688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373690u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x00373690u) [[unlikely]] return; }
L_00373690:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003736A0u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x003736A0u) [[unlikely]] return; }
L_003736A0:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003736ACu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x003736ACu) [[unlikely]] return; }
L_003736AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373634u | kUnwind; return; } goto L_00373634; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373368u | kUnwind; return; } goto L_00373368; } }
L_003736BC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00373718; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 24u), 0u);
    st32((c.r[18].w[0] + 184u), 0u);
    st32((c.r[18].w[0] + 188u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00373710u); c.r[16].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00373710u) [[unlikely]] return; }
L_00373710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373368u | kUnwind; return; } goto L_00373368; } }
L_00373718:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373368u | kUnwind; return; } goto L_00373368; } }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037372Cu); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x0037372Cu) [[unlikely]] return; }
L_0037372C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373738u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00373738u) [[unlikely]] return; }
L_00373738:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373744u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00373744u) [[unlikely]] return; }
L_00373744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373368u | kUnwind; return; } goto L_00373368; } }
L_0037374C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373754u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00373754u) [[unlikely]] return; }
L_00373754:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 184u), 0u);
    st32((c.r[16].w[0] + 188u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003737A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003737A0u) [[unlikely]] return; }
L_003737A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003737A8u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x003737A8u) [[unlikely]] return; }
L_003737A8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003737B4u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x003737B4u) [[unlikely]] return; }
L_003737B4:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003737C0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x003737C0u) [[unlikely]] return; }
L_003737C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037374Cu | kUnwind; return; } goto L_0037374C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373368u | kUnwind; return; } goto L_00373368; } }
L_003737D0:
    set32(c.r[25], ld32((c.r[16].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003737E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003737E0u) [[unlikely]] return; }
L_003737E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037380C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003737F4; } }
    st32((c.r[16].w[0] + 180u), c.r[17].w[0]);
    c.budget -= 1;
L_003737F4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00373800; } }
    st32((c.r[16].w[0] + 176u), c.r[18].w[0]);
    c.budget -= 1;
L_00373800:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 188u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373374u | kUnwind; return; } goto L_00373374; } }
L_0037380C:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00373824u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00373824u) [[unlikely]] return; }
L_00373824:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373374u | kUnwind; return; } goto L_00373374; } }
L_0037382C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_00373850:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003739D0; } }
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00373A60; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 32u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[3].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    mmi::mult(c, 1, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[3].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    mmi::mult(c, 1, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[4], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[3].w[0] + 68u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[3].w[0] + 56u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 56u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    mmi::mult(c, 1, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[4], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st32((c.r[3].w[0] + 44u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 28u)));
    st32((c.r[3].w[0] + 72u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[3].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    mmi::mult(c, 1, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[4], ld32((c.r[3].w[0] + 72u)));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st32((c.r[3].w[0] + 48u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    st32((c.r[3].w[0] + 76u), c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[3].w[0] + 64u), c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    mmi::mult(c, 1, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    set32(c.r[4], ld32((c.r[3].w[0] + 76u)));
    set32(c.r[4], c.r[4].w[0] - c.r[5].w[0]);
    st32((c.r[3].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 184u), 0u);
    st32((c.r[3].w[0] + 188u), 0u);
    st32((c.r[3].w[0] + 192u), 0u);
    c.budget -= 81;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 196u), 0u);  if (t) { goto L_00373A4C; } }
L_003739D0:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00373F10; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 56u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 60u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 184u), 0u);
    st32((c.r[4].w[0] + 188u), 0u);
    st32((c.r[4].w[0] + 192u), 0u);
    st32((c.r[4].w[0] + 196u), 0u);
    set32(c.r[25], ld32((c.r[4].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 28;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00373A4Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00373A4Cu) [[unlikely]] return; }
L_00373A4C:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_00373A50:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_005D(c, 14u, depth); } }
L_00373A58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { [[clang::musttail]] return unit_005D(c, 17u, depth); } }
L_00373A60:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00373C18; } }
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373A78u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x00373A78u) [[unlikely]] return; }
L_00373A78:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373A88u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00373A88u) [[unlikely]] return; }
L_00373A88:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373A94u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00373A94u) [[unlikely]] return; }
L_00373A94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373A4Cu | kUnwind; return; } goto L_00373A4C; } }
L_00373A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373AA4u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00373AA4u) [[unlikely]] return; }
L_00373AA4:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 184u), 0u);
    st32((c.r[16].w[0] + 188u), 0u);
    st32((c.r[16].w[0] + 192u), 0u);
    c.budget -= 82;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373BECu); st32((c.r[16].w[0] + 196u), 0u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x00373BECu) [[unlikely]] return; }
L_00373BEC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373BFCu); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00373BFCu) [[unlikely]] return; }
L_00373BFC:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373C08u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00373C08u) [[unlikely]] return; }
L_00373C08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373A9Cu | kUnwind; return; } goto L_00373A9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373A50u | kUnwind; return; } goto L_00373A50; } }
L_00373C18:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00373D64; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[18].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[18].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[18].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    st32((c.r[18].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    st32((c.r[18].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    mmi::mult(c, 1, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[18].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 184u), 0u);
    st32((c.r[18].w[0] + 188u), 0u);
    st32((c.r[18].w[0] + 192u), 0u);
    c.budget -= 81;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 196u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373A4Cu | kUnwind; return; } goto L_00373A4C; } }
L_00373D64:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373A4Cu | kUnwind; return; } goto L_00373A4C; } }
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373D78u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x00373D78u) [[unlikely]] return; }
L_00373D78:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373D84u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00373D84u) [[unlikely]] return; }
L_00373D84:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373D90u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00373D90u) [[unlikely]] return; }
L_00373D90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373A4Cu | kUnwind; return; } goto L_00373A4C; } }
L_00373D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373DA0u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00373DA0u) [[unlikely]] return; }
L_00373DA0:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    mmi::mult(c, 1, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[1];
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 184u), 0u);
    st32((c.r[16].w[0] + 188u), 0u);
    st32((c.r[16].w[0] + 192u), 0u);
    c.budget -= 82;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373EE8u); st32((c.r[16].w[0] + 196u), 0u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x00373EE8u) [[unlikely]] return; }
L_00373EE8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373EF4u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00373EF4u) [[unlikely]] return; }
L_00373EF4:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373F00u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00373F00u) [[unlikely]] return; }
L_00373F00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373D98u | kUnwind; return; } goto L_00373D98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373A4Cu | kUnwind; return; } goto L_00373A4C; } }
L_00373F10:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00373FFC; } }
    set32(c.r[5], c.r[3].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373F28u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0056(c, 362u, depth + 1u); else { c.pc = 0x0035AF30u; return; } if (c.pc != 0x00373F28u) [[unlikely]] return; }
L_00373F28:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373F38u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00373F38u) [[unlikely]] return; }
L_00373F38:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373F44u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00373F44u) [[unlikely]] return; }
L_00373F44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373A4Cu | kUnwind; return; } goto L_00373A4C; } }
L_00373F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373F54u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0056(c, 361u, depth + 1u); else { c.pc = 0x0035AF20u; return; } if (c.pc != 0x00373F54u) [[unlikely]] return; }
L_00373F54:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 60u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 184u), 0u);
    st32((c.r[16].w[0] + 188u), 0u);
    st32((c.r[16].w[0] + 192u), 0u);
    st32((c.r[16].w[0] + 196u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0] + 236u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 29;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00373FC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00373FC8u) [[unlikely]] return; }
L_00373FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373FD0u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0056(c, 313u, depth + 1u); else { c.pc = 0x0035A220u; return; } if (c.pc != 0x00373FD0u) [[unlikely]] return; }
L_00373FD0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373FE0u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0056(c, 312u, depth + 1u); else { c.pc = 0x0035A1E0u; return; } if (c.pc != 0x00373FE0u) [[unlikely]] return; }
L_00373FE0:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00373FECu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0056(c, 311u, depth + 1u); else { c.pc = 0x0035A1C0u; return; } if (c.pc != 0x00373FECu) [[unlikely]] return; }
L_00373FEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373F4Cu | kUnwind; return; } goto L_00373F4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00373A4Cu | kUnwind; return; } goto L_00373A4C; } }
L_00373FFC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_005D(c, 4u, depth); } }
    [[clang::musttail]] return unit_005D(c, 2u, depth);
}

}
